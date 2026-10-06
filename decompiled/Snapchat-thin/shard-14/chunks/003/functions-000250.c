/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b16a07c; end: 10b16a09f;  */

void FUN_10b16a07c(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b16a0a0; end: 10b16a0db;  */

void FUN_10b16a0a0(undefined8 *param_1,undefined8 *param_2)

{
  func_0x00010b17515c();
  *param_1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 1);
  func_0x000107c29f40();
  return;
}



/* Entry: 10b16a0dc; end: 10b16a10b;  */

void FUN_10b16a0dc(void)

{
  undefined1 extraout_w8;
  long unaff_x20;
  
  func_0x00010b175110();
  FUN_10b16a10c();
  func_0x00010b177b04();
  func_0x00010b17660c();
  func_0x00010b177c6c();
  *(undefined1 *)(unaff_x20 + 0x20) = extraout_w8;
  return;
}



/* Entry: 10b16a10c; end: 10b16a12f;  */

void FUN_10b16a10c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10b167acc();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10b16a130; end: 10b16a153;  */

void FUN_10b16a130(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b16a154; end: 10b16a16f;  */

void FUN_10b16a154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b17738c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 10b16a170; end: 10b16a193;  */

void FUN_10b16a170(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b16a194; end: 10b16a1f7;  */

void FUN_10b16a194(undefined8 param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_28 = lVar1;
    if (lVar1 != 0) {
      lStack_30 = *(long *)(param_2 + 0x10);
      if (lStack_30 != 0) {
        func_0x00010b177b44();
        (*extraout_x8)();
      }
    }
  }
  func_0x0001052aad48(&lStack_30);
  return;
}



/* Entry: 10b16a1f8; end: 10b16a20b;  */

void FUN_10b16a1f8(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010b1750d4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b16a20c; end: 10b16a233;  */

void FUN_10b16a20c(void)

{
  func_0x00010b175110();
  FUN_10b14be74();
  func_0x00010b1751c8();
  FUN_10b16a234();
  return;
}



/* Entry: 10b16a234; end: 10b16a26b;  */

void FUN_10b16a234(long param_1)

{
  func_0x00010b16a250();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 10b16a26c; end: 10b16a2cb;  */

undefined8 * FUN_10b16a26c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  if (param_3 == 0) {
    param_1[1] = 0;
    puVar1 = param_1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = param_3;
    puVar1 = (undefined8 *)0x0;
    if (param_3 != 0) {
      return param_1;
    }
  }
  func_0x00010527822c();
  func_0x00010b1750d4();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b16a2cc; end: 10b16a38f;  */

void FUN_10b16a2cc(void)

{
  long unaff_x19;
  undefined8 uStack_30;
  
  func_0x00010b174a94();
  func_0x00010b174dc8();
  FUN_10b163c04();
  func_0x00010b17522c();
  FUN_10b163c30();
  func_0x00010b1756b0();
  func_0x00010b1753c8();
  __ZNSt3__15mutex4lockEv(uStack_30 + 0x368);
  if (*(char *)(uStack_30 + 0x330) == '\x01') {
    func_0x00010b1751c8();
    FUN_10b16a390();
  }
  else {
    func_0x00010b1751c8();
    FUN_10b1640f4();
    *(undefined1 *)(uStack_30 + 0x330) = 1;
  }
  func_0x00010b176654();
  if (unaff_x19 == 0) {
    __ZNSt3__118condition_variable10notify_allEv(uStack_30 + 0x338);
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x00010b175248();
  return;
}



/* Entry: 10b16a390; end: 10b16a423;  */

void FUN_10b16a390(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b175110();
  func_0x00010b144014();
  func_0x00010b16638c(unaff_x20 + 0x10,unaff_x19 + 0x10);
  FUN_10b11ffec(unaff_x20 + 0x298,unaff_x19 + 0x298);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x2b8);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x2a8);
  *(undefined8 *)(unaff_x20 + 0x2b0) = *(undefined8 *)(unaff_x19 + 0x2b0);
  *(undefined8 *)(unaff_x20 + 0x2a8) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x2b8) = uVar1;
  FUN_10b122234(unaff_x20 + 0x2c0,unaff_x19 + 0x2c0);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x2ed);
  *(undefined8 *)(unaff_x20 + 0x2e8) = *(undefined8 *)(unaff_x19 + 0x2e8);
  *(undefined8 *)(unaff_x20 + 0x2ed) = uVar2;
  func_0x000107c27c54(unaff_x20 + 0x2f8,unaff_x19 + 0x2f8);
  *(undefined1 *)(unaff_x20 + 0x318) = *(undefined1 *)(unaff_x19 + 0x318);
  func_0x00010880bd10(unaff_x20 + 800,unaff_x19 + 800);
  return;
}



/* Entry: 10b16a424; end: 10b16a45b;  */

void FUN_10b16a424(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b174884();
  func_0x00010b17551c();
  func_0x00010b174db8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b16a45c; end: 10b16a517;  */

void FUN_10b16a45c(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  
  func_0x00010b1764d4();
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b176334();
  func_0x00010b175db8();
  FUN_10b16a424();
  func_0x00010b1754f4();
  func_0x00010b175360();
  func_0x00010b174844();
  func_0x00010b175768();
  func_0x00010b17594c();
  (*extraout_x8)();
  func_0x00010b175d90();
  func_0x00010b176c28();
  func_0x000107c27b68(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b16a518; end: 10b16a51b;  */

undefined8 FUN_10b16a518(undefined8 param_1)

{
  func_0x00010b1754dc(&PTR_FUN_110cc0230);
  return param_1;
}



/* Entry: 10b16a51c; end: 10b16a52f;  */

void FUN_10b16a51c(void)

{
  FUN_10b16a574();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16a530; end: 10b16a573;  */

void FUN_10b16a530(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b17491c();
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b16a45c(param_1 + 8);
  func_0x00010b175690();
  return;
}



/* Entry: 10b16a574; end: 10b16a59b;  */

undefined8 FUN_10b16a574(undefined8 param_1)

{
  func_0x00010b1754dc(&PTR_FUN_110cc0230);
  return param_1;
}



/* Entry: 10b16a59c; end: 10b16a5eb;  */

long FUN_10b16a59c(void)

{
  undefined8 uStack_30;
  
  func_0x00010b177098();
  FUN_10b16a5ec();
  func_0x00010b174f34(uStack_30 + 0x48);
  __ZNSt3__15mutex4lockEv();
  func_0x00010b1452c4(uStack_30);
  func_0x00010b174d08();
  func_0x00010b17554c();
  return uStack_30;
}



/* Entry: 10b16a5ec; end: 10b16a623;  */

void FUN_10b16a5ec(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b174884();
  func_0x00010b17551c();
  func_0x00010b174db8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b16a624; end: 10b16a6e3;  */

void FUN_10b16a624(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined1 auStack_40 [16];
  
  func_0x00010b1764d4();
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b176334();
  func_0x00010b175db8();
  FUN_10b16a5ec();
  func_0x00010b1754f4();
  func_0x00010b175360();
  func_0x00010b174844();
  FUN_10b141ca0(auStack_40);
  func_0x00010b17594c();
  (*extraout_x8)();
  func_0x00010b175564();
  func_0x00010b17554c();
  func_0x000107c27b68(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b16a6e4; end: 10b16a6e7;  */

undefined8 FUN_10b16a6e4(undefined8 param_1)

{
  func_0x00010b1754dc(&PTR_FUN_110cc0280);
  return param_1;
}



/* Entry: 10b16a6e8; end: 10b16a6fb;  */

void FUN_10b16a6e8(void)

{
  FUN_10b16a740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16a6fc; end: 10b16a73f;  */

void FUN_10b16a6fc(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b17491c();
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b16a624(param_1 + 8);
  func_0x00010b175698();
  return;
}



/* Entry: 10b16a740; end: 10b16a78f;  */

undefined8 FUN_10b16a740(undefined8 param_1)

{
  func_0x00010b1754dc(&PTR_FUN_110cc0280);
  return param_1;
}



/* Entry: 10b16a790; end: 10b16a823;  */

void FUN_10b16a790(long param_1)

{
  if (*(char *)(param_1 + 0x338) == '\x01') {
    func_0x00010b163fbc();
    *(undefined1 *)(param_1 + 0x338) = 0;
  }
  return;
}



/* Entry: 10b16a824; end: 10b16a873;  */

long FUN_10b16a824(void)

{
  undefined8 uStack_30;
  
  func_0x00010b177098();
  FUN_10b16a874();
  func_0x00010b174f34(uStack_30 + 0x368);
  __ZNSt3__15mutex4lockEv();
  FUN_10b1640bc(uStack_30);
  func_0x00010b174d08();
  func_0x00010b1756b0();
  return uStack_30;
}



/* Entry: 10b16a874; end: 10b16a8ab;  */

void FUN_10b16a874(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b174884();
  func_0x00010b17551c();
  func_0x00010b174db8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b16a8ac; end: 10b16a967;  */

void FUN_10b16a8ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  
  func_0x00010b1764d4();
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b176334();
  func_0x00010b175db8();
  FUN_10b16a874();
  func_0x00010b1754f4();
  func_0x00010b175360();
  func_0x00010b174844();
  func_0x00010b175f34();
  func_0x00010b17594c();
  (*extraout_x8)();
  func_0x00010b175248();
  func_0x00010b1756b0();
  func_0x000107c27b68(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b16a968; end: 10b16a96b;  */

undefined8 FUN_10b16a968(undefined8 param_1)

{
  func_0x00010b1754dc(&PTR_FUN_110cc02c0);
  return param_1;
}



/* Entry: 10b16a96c; end: 10b16a97f;  */

void FUN_10b16a96c(void)

{
  FUN_10b16a9c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16a980; end: 10b16a9c3;  */

void FUN_10b16a980(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b17491c();
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b16a8ac(param_1 + 8);
  func_0x00010b1753c8();
  return;
}



/* Entry: 10b16a9c4; end: 10b16aa1b;  */

undefined8 FUN_10b16a9c4(undefined8 param_1)

{
  func_0x00010b1754dc(&PTR_FUN_110cc02c0);
  return param_1;
}



/* Entry: 10b16aa1c; end: 10b16aa1f;  */

void FUN_10b16aa1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0310;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16aa20; end: 10b16aa33;  */

void FUN_10b16aa20(void)

{
  FUN_10b16ab90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16aa34; end: 10b16aa3b;  */

void FUN_10b16aa34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b174b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b16aa3c; end: 10b16aa83;  */

void FUN_10b16aa3c(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_register_00005008;
  
  func_0x00010b177f00();
  func_0x00010b177bc8();
  *(undefined8 *)(unaff_x20 + 0x10) = in_register_00005008;
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b14b870(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b16aa84; end: 10b16aa87;  */

void FUN_10b16aa84(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x00010b177f00();
  *param_1 = extraout_x8;
  FUN_10b14bab0(param_1 + 3);
  func_0x00010b176958();
  return;
}



/* Entry: 10b16aa88; end: 10b16aa9b;  */

void FUN_10b16aa88(void)

{
  FUN_10b16ab3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16aa9c; end: 10b16aaa3;  */

void FUN_10b16aa9c(void)

{
  return;
}



/* Entry: 10b16aaa4; end: 10b16aaef;  */

void FUN_10b16aaa4(long param_1)

{
  undefined1 auStack_68 [64];
  undefined1 uStack_28;
  
  auStack_68[0] = 0;
  uStack_28 = 0;
  FUN_10b14bc84(param_1 + 0x18,auStack_68);
  func_0x00010b1759f4();
  func_0x00010b176a18();
  func_0x0001052aad48(auStack_68);
  return;
}



/* Entry: 10b16aaf0; end: 10b16ab3b;  */

void FUN_10b16aaf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined1 auStack_68 [72];
  
  func_0x000107c350d0(param_1,param_3);
  func_0x0001056429c0();
  FUN_10b14bc84(unaff_x19 + 0x18,auStack_68);
  func_0x00010b1759f4();
  func_0x00010b176a18();
  func_0x0001052aad48(auStack_68);
  return;
}



/* Entry: 10b16ab3c; end: 10b16ab8f;  */

void FUN_10b16ab3c(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x00010b177f00();
  *param_1 = extraout_x8;
  FUN_10b14bab0(param_1 + 3);
  func_0x00010b176958();
  return;
}



/* Entry: 10b16ab90; end: 10b16ab9b;  */

void FUN_10b16ab90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0310;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16ab9c; end: 10b16abeb;  */

long FUN_10b16ab9c(void)

{
  undefined8 uStack_30;
  
  func_0x00010b177098();
  FUN_10b16abec();
  func_0x00010b174f34(uStack_30 + 0x48);
  __ZNSt3__15mutex4lockEv();
  FUN_10b164280(uStack_30);
  func_0x00010b174d08();
  func_0x00010b17553c();
  return uStack_30;
}



/* Entry: 10b16abec; end: 10b16ac23;  */

void FUN_10b16abec(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b174884();
  func_0x00010b17551c();
  func_0x00010b174db8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b16ac24; end: 10b16acdf;  */

void FUN_10b16ac24(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  
  func_0x00010b1764d4();
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b176334();
  func_0x00010b175db8();
  FUN_10b16abec();
  func_0x00010b1754f4();
  func_0x00010b175360();
  func_0x00010b174844();
  func_0x00010b176530();
  func_0x00010b17594c();
  (*extraout_x8)();
  func_0x00010b175250();
  func_0x00010b17553c();
  func_0x000107c27b68(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b16ace0; end: 10b16ace3;  */

undefined8 FUN_10b16ace0(undefined8 param_1)

{
  func_0x00010b1754dc(&PTR_FUN_110cc0360);
  return param_1;
}



/* Entry: 10b16ace4; end: 10b16acf7;  */

void FUN_10b16ace4(void)

{
  FUN_10b16ad3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16acf8; end: 10b16ad3b;  */

void FUN_10b16acf8(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b17491c();
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b16ac24(param_1 + 8);
  func_0x00010b17552c();
  return;
}



/* Entry: 10b16ad3c; end: 10b16ad93;  */

undefined8 FUN_10b16ad3c(undefined8 param_1)

{
  func_0x00010b1754dc(&PTR_FUN_110cc0360);
  return param_1;
}



/* Entry: 10b16ad94; end: 10b16adb7;  */

void FUN_10b16ad94(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_10b164af8();
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



/* Entry: 10b16adb8; end: 10b16add7;  */

void FUN_10b16adb8(void)

{
  func_0x00010b175f04();
  FUN_10b16add8();
  func_0x00010b175eec();
  return;
}



/* Entry: 10b16add8; end: 10b16ae03;  */

void FUN_10b16add8(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1af286bca1af287) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x98);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc0908;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16ae04; end: 10b16ae07;  */

void FUN_10b16ae04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0908;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16ae08; end: 10b16ae1b;  */

void FUN_10b16ae08(void)

{
  func_0x00010b16b404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16ae1c; end: 10b16ae23;  */

void FUN_10b16ae1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b174b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b16ae24; end: 10b16ae6b;  */

undefined8 * FUN_10b16ae24(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10b16aa3c();
  *puVar1 = &PTR_FUN_110cc0958;
  FUN_10b16af9c(puVar1 + 8);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



/* Entry: 10b16ae6c; end: 10b16ae6f;  */

undefined8 FUN_10b16ae6c(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_110cc0958;
  func_0x000107c27914(param_1 + 0xd);
  FUN_10b16b1bc(param_1 + 8);
  func_0x00010b177f00();
  *param_1 = extraout_x8;
  FUN_10b14bab0(param_1 + 3);
  func_0x00010b176958();
  return unaff_x19;
}



/* Entry: 10b16ae70; end: 10b16ae83;  */

void FUN_10b16ae70(void)

{
  FUN_10b16b2fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16ae84; end: 10b16aeff;  */

long FUN_10b16ae84(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 *extraout_x8;
  undefined1 *extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_1 + 0x70);
  lVar4 = param_3[2];
  if (lVar4 == 0) {
    lVar5 = 0;
    puVar7 = (undefined1 *)*param_3;
  }
  else {
    func_0x00010b1752c4();
    lVar5 = param_3[2];
    puVar7 = (undefined1 *)(lVar4 + *param_3);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      func_0x00010b1752c4();
    }
  }
  plVar1 = (long *)(param_1 + 0x68);
  lVar4 = (lVar5 + param_3[1]) - (long)puVar7;
  if (0 < lVar4) {
    plVar9 = (long *)(param_1 + 0x78);
    lVar8 = *(long *)(param_1 + 0x70);
    if (*plVar9 - lVar8 < lVar4) {
      plVar3 = plVar1;
      func_0x0001001e7ae4(plVar1,(lVar4 - *plVar1) + lVar8);
      lVar5 = *plVar1;
      plStack_68 = (long *)0x0;
      plStack_48 = plVar9;
      if (plVar3 != (long *)0x0) {
        func_0x00010002b988();
        plStack_68 = plVar9;
      }
      puStack_60 = (undefined1 *)((long)plStack_68 + (lVar6 - lVar5));
      lStack_50 = (long)plStack_68 + (long)plVar3;
      puStack_58 = puStack_60 + lVar4;
      puVar2 = puStack_60;
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar2 = *puVar7;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 1;
      }
      func_0x000104bd9b18(plVar1,&plStack_68,lVar6);
      func_0x000104bdb890();
    }
    else {
      lVar8 = lVar8 - lVar6;
      if (lVar4 - lVar8 == 0 || lVar4 < lVar8) {
        func_0x000104bdb8d8();
        puVar2 = extraout_x8_00;
        for (; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar2 = *puVar7;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      else {
        func_0x00010029a9bc(plVar1,puVar7 + lVar8,lVar5 + param_3[1],lVar4 - lVar8);
        if (0 < lVar8) {
          func_0x000104bdb8d8();
          puVar2 = extraout_x8;
          for (; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar2 = *puVar7;
            puVar2 = puVar2 + 1;
            puVar7 = puVar7 + 1;
          }
        }
      }
    }
  }
  return lVar6;
}



/* Entry: 10b16af00; end: 10b16af4b;  */

void FUN_10b16af00(void)

{
  long unaff_x19;
  undefined1 auStack_30 [16];
  
  func_0x00010b175048();
  func_0x000107c3171c();
  FUN_10b16b340(unaff_x19 + 0x40,auStack_30);
  FUN_10b16aaa4();
  func_0x000107c27d78(auStack_30);
  return;
}



/* Entry: 10b16af4c; end: 10b16af9b;  */

void FUN_10b16af4c(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b174be8();
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10b16b340(param_1 + 0x40,&uStack_40);
  func_0x000107c27d78(&uStack_40);
  func_0x00010b1770e0();
  FUN_10b16aaf0();
  return;
}



/* Entry: 10b16af9c; end: 10b16afbf;  */

void FUN_10b16af9c(undefined8 *param_1)

{
  FUN_10b16afc0();
  *param_1 = &PTR_FUN_110cc0a08;
  return;
}



/* Entry: 10b16afc0; end: 10b16afff;  */

undefined8 FUN_10b16afc0(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b176d08(&UNK_110cc0a40);
  func_0x00010b16b018();
  func_0x00010b176db8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 10b16b000; end: 10b16b003;  */

long FUN_10b16b000(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cc0a50);
  if (extraout_x8 != 0) {
    func_0x00010b174ac4();
    func_0x000107c350d8();
    FUN_10b16b218();
    func_0x00010b175208();
  }
  FUN_10b164598(param_1 + 0x18);
  FUN_10b164598();
  return param_1;
}



/* Entry: 10b16b004; end: 10b16b033;  */

void FUN_10b16b004(void)

{
  FUN_10b16b1bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16b034; end: 10b16b037;  */

long FUN_10b16b034(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cc0a50);
  if (extraout_x8 != 0) {
    func_0x00010b174ac4();
    func_0x000107c350d8();
    FUN_10b16b218();
    func_0x00010b175208();
  }
  FUN_10b164598(param_1 + 0x18);
  FUN_10b164598();
  return param_1;
}



/* Entry: 10b16b038; end: 10b16b04b;  */

void FUN_10b16b038(void)

{
  FUN_10b16b1bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16b04c; end: 10b16b0d7;  */

void FUN_10b16b04c(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined8 uStack_30;
  
  func_0x000107c350b4();
  func_0x000107c350e4();
  FUN_10b16b0d8();
  func_0x00010b177b98(uStack_30);
  *(undefined8 *)(extraout_x8_00 + 0x10) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x18) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x20) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x28) = 0;
  func_0x00010b175e3c();
  *(undefined8 *)(extraout_x8_01 + 0x30) = extraout_x9;
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  *(undefined8 *)(extraout_x8_01 + 0x40) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x38) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x50) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x48) = 0;
  func_0x00010b175ef8();
  *(undefined8 *)(extraout_x8_02 + 0x58) = 0;
  *(undefined8 *)(extraout_x8_02 + 0x60) = extraout_x9_00;
  *(ulong *)(extraout_x8_02 + 0x70) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_02 + 0x68) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_02 + 0x80) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_02 + 0x78) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_02 + 0x90) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_02 + 0x88) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_02 + 0xa0) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_02 + 0x98) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined8 *)(extraout_x8_02 + 0xa8) = 0;
  func_0x000107c350b8();
  FUN_10b16b1ac();
  func_0x000107c350b0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010b175f04();
  FUN_10b16b0f8();
  func_0x00010b175eec();
  return;
}



/* Entry: 10b16b0d8; end: 10b16b0f7;  */

void FUN_10b16b0d8(void)

{
  func_0x00010b175f04();
  FUN_10b16b0f8();
  func_0x00010b175eec();
  return;
}



/* Entry: 10b16b0f8; end: 10b16b123;  */

void FUN_10b16b0f8(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1745d1745d1745e) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb0);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc0a70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16b124; end: 10b16b127;  */

void FUN_10b16b124(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0a70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b16b128; end: 10b16b13b;  */

void FUN_10b16b128(void)

{
  func_0x00010b16b148();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16b13c; end: 10b16b153;  */

void FUN_10b16b13c(long param_1)

{
  func_0x00010b16b188(param_1 + 0xa8);
  func_0x00010b177254();
  func_0x00010b177230();
  func_0x00010b1771b4();
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x0001000ff1ac();
  }
  return;
}



/* Entry: 10b16b154; end: 10b16b1ab;  */

void FUN_10b16b154(long param_1)

{
  func_0x00010b16b188(param_1 + 0x90);
  func_0x00010b177254();
  func_0x00010b177230();
  func_0x00010b1771b4();
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001000ff1ac();
  }
  return;
}



/* Entry: 10b16b1ac; end: 10b16b1bb;  */

void FUN_10b16b1ac(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b16b1bc; end: 10b16b217;  */

long FUN_10b16b1bc(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cc0a50);
  if (extraout_x8 != 0) {
    func_0x00010b174ac4();
    func_0x000107c350d8();
    FUN_10b16b218();
    func_0x00010b175208();
  }
  FUN_10b164598(param_1 + 0x18);
  FUN_10b164598();
  return param_1;
}



/* Entry: 10b16b218; end: 10b16b257;  */

void FUN_10b16b218(void)

{
  func_0x00010b174ac4();
  func_0x00010b1752d0();
  func_0x000107c350d8();
  FUN_10b16b258();
  func_0x00010b174f2c();
  func_0x00010b175d54();
  return;
}



/* Entry: 10b16b258; end: 10b16b273;  */

void FUN_10b16b258(void)

{
  func_0x00010b176ac4();
  FUN_10b16b274();
  return;
}



/* Entry: 10b16b274; end: 10b16b2f7;  */

void FUN_10b16b274(void)

{
  long unaff_x19;
  
  func_0x00010b174c44();
  func_0x00010b174c54();
  FUN_10b1645bc();
  func_0x00010b17522c();
  FUN_10b1645ec();
  func_0x00010b175534();
  func_0x00010b1753b8();
  func_0x00010b1754fc();
  func_0x00010b1750c8();
  FUN_10b16b2f8();
  func_0x00010b174894();
  if (unaff_x19 == 0) {
    func_0x00010b174cb4();
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x00010b1753d8();
  return;
}



/* Entry: 10b16b2f8; end: 10b16b2fb;  */

void FUN_10b16b2f8(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x88,*param_1);
  return;
}



/* Entry: 10b16b2fc; end: 10b16b33f;  */

undefined8 FUN_10b16b2fc(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  *param_1 = &PTR_FUN_110cc0958;
  func_0x000107c27914(param_1 + 0xd);
  FUN_10b16b1bc(param_1 + 8);
  func_0x00010b177f00();
  *param_1 = extraout_x8;
  FUN_10b14bab0(param_1 + 3);
  func_0x00010b176958();
  return unaff_x19;
}



/* Entry: 10b16b340; end: 10b16b35b;  */

void FUN_10b16b340(void)

{
  func_0x00010b176ac4();
  FUN_10b16b35c();
  return;
}



/* Entry: 10b16b35c; end: 10b16b3f3;  */

void FUN_10b16b35c(void)

{
  long unaff_x19;
  
  func_0x00010b174c44();
  func_0x00010b174c54();
  FUN_10b1645bc();
  func_0x00010b17522c();
  FUN_10b1645ec();
  func_0x00010b175534();
  func_0x00010b1753b8();
  func_0x00010b1754fc();
  func_0x00010b1750c8();
  FUN_10b16b3f4();
  func_0x00010b174894();
  if (unaff_x19 == 0) {
    func_0x00010b174cb4();
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x00010b1753d8();
  return;
}



/* Entry: 10b16b3f4; end: 10b16b41f;  */

undefined8 * FUN_10b16b3f4(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)*param_2;
  if (*(char *)(puVar1 + 2) == '\x01') {
    func_0x0001054918e8(puVar1);
  }
  else {
    uVar2 = *param_1;
    puVar1[1] = param_1[1];
    *puVar1 = uVar2;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
  }
  return puVar1;
}



/* Entry: 10b16b420; end: 10b16b443;  */

void FUN_10b16b420(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b16b444; end: 10b16b493;  */

void FUN_10b16b444(void)

{
  long alStack_30 [2];
  
  FUN_10b16b494(alStack_30);
  func_0x00010b174f34(alStack_30[0] + 0x48);
  __ZNSt3__15mutex4lockEv();
  FUN_10b164728(alStack_30[0]);
  func_0x00010b174d08();
  func_0x00010b175534();
  return;
}



/* Entry: 10b16b494; end: 10b16b4cb;  */

void FUN_10b16b494(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b175354();
  func_0x00010b17551c();
  func_0x00010b174db8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b16b4cc; end: 10b16b647;  */

void FUN_10b16b4cc(void)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x20;
  long lStack_b8;
  long lStack_b0;
  long *aplStack_a8 [3];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  int aiStack_30 [4];
  
  func_0x00010b175cd0();
  FUN_10b1645bc(&uStack_80);
  FUN_10b1645ec(aiStack_30,&uStack_80);
  FUN_10b164598(&uStack_80);
  FUN_10b164598(auStack_40);
  func_0x00010b175600();
  func_0x00010b1775ac(uStack_48);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  func_0x00010b175408();
  func_0x00010b175ae0(extraout_x8 + 0x48);
  __ZNSt3__15mutex4lockEv();
  FUN_10b164728();
  if (aiStack_30[0] == 0) {
    FUN_10b16b6ec(aplStack_a8,&uStack_80);
    func_0x00010b176cd8();
    lVar1 = *(long *)(extraout_x8_00 + 0x90);
    *(undefined8 *)(extraout_x8_00 + 0x90) = extraout_x9;
    plVar2 = (long *)0x0;
    if (lVar1 != 0) {
      func_0x00010b174910();
      plVar2 = aplStack_a8[0];
      aplStack_a8[0] = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        func_0x00010b174910();
      }
    }
  }
  else {
    plVar2 = &lStack_90;
    FUN_10b1645ec(plVar2,aiStack_30);
  }
  func_0x00010b175da0();
  if (lStack_90 != 0) {
    lStack_b8 = lStack_90;
    lStack_b0 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x00010b17493c();
      } while (extraout_w10 != 0);
    }
    FUN_10b16b648(&uStack_80,&lStack_b8);
    plVar2 = &lStack_b8;
    FUN_10b164598();
  }
  func_0x00010b175bdc();
  FUN_10b164598();
  func_0x00010b177ccc();
  if (plVar2 != (long *)0x0) {
    func_0x00010b174910();
  }
  func_0x00010b175a1c();
  func_0x00010b1753e0();
  if (plVar2 != (long *)0x0) {
    func_0x00010b174910();
  }
  func_0x00010b175cb0();
  return;
}



/* Entry: 10b16b648; end: 10b16b6eb;  */

void FUN_10b16b648(void)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w12;
  long unaff_x19;
  
  func_0x00010b176da8();
  if (extraout_x9 != 0) {
    do {
      func_0x00010b174a1c();
    } while (extraout_w12 != 0);
    do {
      func_0x00010b174b1c();
    } while (extraout_w11 != 0);
  }
  func_0x00010b1750c8();
  FUN_10b16b79c();
  func_0x00010b1753d8();
  func_0x00010b175534();
  func_0x000107c27b68(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b16b6ec; end: 10b16b713;  */

void FUN_10b16b6ec(void)

{
  func_0x00010b177ef4();
  func_0x00010b1751e0();
  func_0x00010b176444(&PTR_FUN_110cc0ac0);
  return;
}



/* Entry: 10b16b714; end: 10b16b717;  */

undefined8 FUN_10b16b714(undefined8 param_1)

{
  func_0x00010b1754dc(&PTR_FUN_110cc0ac0);
  return param_1;
}



/* Entry: 10b16b718; end: 10b16b72b;  */

void FUN_10b16b718(void)

{
  FUN_10b16b774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16b72c; end: 10b16b773;  */

void FUN_10b16b72c(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b176d38();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b16b648(param_1 + 8,auStack_30);
  func_0x00010b1753b8();
  return;
}



/* Entry: 10b16b774; end: 10b16b79b;  */

undefined8 FUN_10b16b774(undefined8 param_1)

{
  func_0x00010b1754dc(&PTR_FUN_110cc0ac0);
  return param_1;
}



/* Entry: 10b16b79c; end: 10b16b7e3;  */

void FUN_10b16b79c(undefined8 param_1,undefined8 param_2)

{
  code *extraout_x8;
  undefined1 auStack_30 [16];
  
  func_0x00010b177edc();
  FUN_10b16b494(auStack_30,param_2);
  func_0x00010b1754c8();
  FUN_10b16b7e4();
  func_0x00010b1753b8();
  func_0x00010b17594c();
  (*extraout_x8)();
  return;
}



/* Entry: 10b16b7e4; end: 10b16b80f;  */

void FUN_10b16b7e4(void)

{
  func_0x00010b175110();
  __ZNSt3__112__get_sp_mutEPKv();
  func_0x00010b175360();
  func_0x00010b17495c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}


