#include <stdio.h>

int main()
{
    float value1, value2;
    int choice1, choice2, choice3;
    float result;

    printf("Enter the first value you want to convert: ");
    scanf("%f", &value1);

    printf("\nChoose the first conversion:\n");
    printf("1. Centimeter to Meter\n");
    printf("2. Meter to Kilometer\n");
    printf("3. Square Meter to Square Kilometer\n");
    printf("4. Square Centimeter to Square Meter\n");
    printf("5. Cubic Meter to Liter\n");
    printf("6. Liter to Milliliter\n");
    printf("7. Millimeter to Meter\n");
    printf("8. Kilogram to Gram\n");
    printf("9. Kilogram to Pound\n");
    printf("10. Square Feet to Square Meter\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice1);

    printf("\nEnter the second value you want to convert: ");
    scanf("%f", &value2);

    printf("\nChoose the second conversion:\n");
    printf("1. Centimeter to Meter\n");
    printf("2. Meter to Kilometer\n");
    printf("3. Square Meter to Square Kilometer\n");
    printf("4. Square Centimeter to Square Meter\n");
    printf("5. Cubic Meter to Liter\n");
    printf("6. Liter to Milliliter\n");
    printf("7. Millimeter to Meter\n");
    printf("8. Kilogram to Gram\n");
    printf("9. Kilogram to Pound\n");
    printf("10. Square Feet to Square Meter\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice2);

    if (choice1 == choice2) {
        switch (choice1)
        {
            case 1:
             result = value1 + value2;
                printf("\nResult: %fmeter\n", result);
                break;
            case 2:
             result = value1 + value2;
                printf("\nResult: %fkilometer\n", result);
                break;
            case 3:
             result = value1 + value2;
                printf("\nResult: %fsquare kilometer\n", result);
                break;
            case 4:
             result = value1 + value2;
                printf("\nResult: %fsquare meter\n", result);
                break;
            case 5:
             result = value1 + value2;
                printf("\nResult: %fliter\n", result);
                break;
            case 6:
             result = value1 + value2;
                printf("\nResult: %fmilliliter\n", result);
                break;
            case 7:
             result = value1 + value2;
                printf("\nResult: %fmeter\n", result);
                break;
            case 8:
             result = value1 + value2;
                printf("\nResult: %fgram\n", result);
                break;
            case 9:
             result = value1 + value2;
                printf("\nResult: %fpound\n", result);
                break;
            case 10:
                result = value1 + value2;
                printf("\nResult: %.3f square meter\n", result);
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
    else {
        switch (choice1)
        {
case 1:
            printf("%.2f cm = %.2f m\n", value1, value1 / 100.0);
            break;
        case 2:
            printf("%.2f m = %.2f km\n", value1, value1 / 1000.0);
            break;
        case 3:
            printf("%.2f sq m = %.2f sq km\n", value1, value1 / 1000000.0);
            break;
        case 4:
            printf("%.2f sq cm = %.2f sq m\n", value1, value1 / 10000.0);
            break;
        case 5:
            printf("%.2f m^3 = %.2f L\n", value1, value1 * 1000.0);
            break;
        case 6:
            printf("%.2f L = %.2f mL\n", value1, value1 * 1000.0);
            break;
        case 7:
            printf("%.2f mm = %.2f m\n", value1, value1 / 1000.0);
            break;
        case 8:
            printf("%.2f kg = %.2f g\n", value1, value1 * 1000.0);
            break;
        case 9:
            printf("%.2f kg = %.2f lb\n", value1, value1 * 2.20462);
            break;
        case 10:
            printf("%.2f sq ft = %.2f sq m\n", value1, value1 / 10.7639);
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }

        switch (choice2)
        {
            case 1:
            printf("%.2f cm = %.2f m\n", value2, value2 / 100.0);
            break;
        case 2:
            printf("%.2f m = %.2f km\n", value2, value2 / 1000.0);
            break;
        case 3:
            printf("%.2f sq m = %.2f sq km\n", value2, value2 / 1000000.0);
            break;
        case 4:
            printf("%.2f sq cm = %.2f sq m\n", value2, value2 / 10000.0);
            break;
        case 5:
            printf("%.2f m^3 = %.2f L\n", value2, value2 * 1000.0);
            break;
        case 6:
            printf("%.2f L = %.2f mL\n", value2, value2 * 1000.0);
            break;
        case 7:
            printf("%.2f mm = %.2f m\n", value2, value2 / 1000.0);
            break;
        case 8:
            printf("%.2f kg = %.2f g\n", value2, value2 * 1000.0);
            break;
        case 9:
            printf("%.2f kg = %.2f lb\n", value2, value2 * 2.20462);
            break;
        case 10:
            printf("%.2f sq ft = %.2f sq m\n", value2, value2 / 10.7639);
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    }
}