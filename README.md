# Restaurant-Project
# Fast-Food Meal Builder (C++)

Fast‑Food Meal Builder is an object‑oriented C++ project that demonstrates the Builder design pattern in the context of a fast‑food restaurant. It models menu items (burgers and cold drinks) through abstract interfaces for items and packing, then implements concrete classes such as `VegBurger`, `ChickenBurger`, `OrangeJuice`, `Chat`, `Wrapper`, and `Bottle`. A generic `mealcontent` container stores item pointers inside the `Meal` class, which owns their lifetime, prints each item’s name, packing type, and price, and calculates the total cost or marks the meal as free. The `MealBuilder` class encapsulates the construction of predefined veg and non‑veg meals by combining the right items and optionally asking the user whether to apply packaging, while `main` simply builds both meals and displays their detailed bills, keeping client code clean and independent from meal‑creation logic.

---

## الوصف بالعربية

مشروع **Fast‑Food Meal Builder** هو مشروع C++ كائني التوجه يطبّق نمط التصميم *Builder* في سياق مطعم للوجبات السريعة. يقوم بتمثيل عناصر القائمة (البرجر والمشروبات الباردة) عبر واجهتين مجردتين للعناصر والتغليف، ثم يوفّر تطبيقات ملموسة مثل `VegBurger` و`ChickenBurger` و`OrangeJuice` و`Chat` و`Wrapper` و`Bottle`. تستخدم الحاوية العامة `mealcontent` لتخزين مؤشرات العناصر داخل صنف `Meal` الذي يتكفّل بإدارة الذاكرة، وعرض اسم كل عنصر ونوع تغليفه وسعره، وحساب التكلفة الإجمالية أو اعتبار الوجبة مجانية. يتولى صنف `MealBuilder` عزل منطق بناء الوجبات الجاهزة (نباتية وغير نباتية) عن طريق تركيب العناصر المناسبة مع خيار تفعيل التغليف، بينما تكتفي دالّة `main` بإنشاء الوجبتين وعرض الفواتير التفصيلية، مما يجعل كود العميل بسيطًا ومستقلاً عن تفاصيل إنشاء الوجبات.
