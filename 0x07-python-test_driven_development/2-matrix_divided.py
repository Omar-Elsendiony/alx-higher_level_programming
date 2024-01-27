#!/usr/bin/python3


def matrix_divided(matrix, div):
    """This function divides the matrix which is a list of lists by a number
    which is either a float or integer but not otherwise"""

    if (not isinstance(div, int) and not isinstance(div, float)):
        raise TypeError("div must be an integer/float")
    elif (div == 0):
        raise ZeroDivisionError("division by zero")
    commonSize = None
    if (isinstance(matrix, list)):
        newMatrix = []
        if (matrix == []):
            raise TypeError("matrix must be a matrix" \
                        "(list of lists) of integers/floats")
        for lst in matrix:
            if (not isinstance(lst, list)):
                raise TypeError("matrix must be a matrix" \
                                "(list of lists) of integers/floats")
            else:
                size = len(lst)
                isOK = False if (commonSize is not None and size != commonSize) else True

                if (isOK): commonSize = size
                else: raise TypeError("Each row of the matrix must have the same size")
                newRow = []
                for elem in lst:
                    if (not isinstance(elem, int) and \
                        not isinstance(elem, float)):
                        raise TypeError("matrix must be a matrix" \
                                "(list of lists) of integers/floats")
                    else: newRow.append(round(elem/div, 2))
            newMatrix.append(newRow)
    else:
        raise TypeError("matrix must be a matrix" \
                        "(list of lists) of integers/floats")
    
    return newMatrix
