/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c40998; end: 108c409ef;  */

long FUN_108c40998(long param_1)

{
  long extraout_x8;
  
  func_0x000108c43d78(&UNK_110ab93e0);
  if (extraout_x8 != 0) {
    func_0x000108c43d24();
    func_0x000108c43e80();
    FUN_108c409f0();
    func_0x000108c440cc();
  }
  func_0x000108c3ff9c(param_1 + 0x18);
  func_0x000108c3ff9c();
  return param_1;
}



/* Entry: 108c409f0; end: 108c40a27;  */

void FUN_108c409f0(void)

{
  func_0x000108c43b7c();
  func_0x000108c43e80();
  FUN_108c40a28();
  func_0x000108c43d68();
  func_0x000108c43ed8();
  return;
}



/* Entry: 108c40a28; end: 108c40a43;  */

void FUN_108c40a28(void)

{
  func_0x000108c43fa4();
  FUN_108c40a44();
  return;
}



/* Entry: 108c40a44; end: 108c40acb;  */

void FUN_108c40a44(void)

{
  long unaff_x19;
  
  func_0x000108c43ca0();
  func_0x000108c43cd0();
  FUN_108c40acc();
  func_0x000108c43fc8();
  FUN_108c40af4();
  func_0x000108c43f94();
  func_0x000108c43e3c();
  func_0x000108c440a4();
  func_0x000108c43e0c();
  FUN_108c40b18();
  func_0x000108c43c38();
  if (unaff_x19 == 0) {
    func_0x000108c43e00();
  }
  else {
    func_0x000108c43fb0();
    func_0x000108c43c4c();
    func_0x000108c43b60();
  }
  func_0x000108c43eb0();
  return;
}



/* Entry: 108c40acc; end: 108c40af3;  */

void FUN_108c40acc(void)

{
  func_0x000108c43c90();
  func_0x000108c440d4();
  func_0x000108c43bbc();
  func_0x000108c43f48();
  return;
}



/* Entry: 108c40af4; end: 108c40b17;  */

void FUN_108c40af4(void)

{
  func_0x000108c43be0();
  func_0x000108c3ff9c();
  return;
}



/* Entry: 108c40b18; end: 108c40b1b;  */

void FUN_108c40b18(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x90,*param_1);
  return;
}



/* Entry: 108c40b1c; end: 108c40baf;  */

void FUN_108c40b1c(void)

{
  long unaff_x19;
  
  func_0x000108c43ca0();
  func_0x000108c43cd0();
  FUN_108c40acc();
  func_0x000108c43fc8();
  FUN_108c40af4();
  func_0x000108c43f94();
  func_0x000108c43e3c();
  func_0x000108c440a4();
  func_0x000108c43e0c();
  FUN_108c40bb0();
  func_0x000108c43c38();
  if (unaff_x19 == 0) {
    func_0x000108c43e00();
  }
  else {
    func_0x000108c43fb0();
    func_0x000108c43c4c();
    func_0x000108c43b60();
  }
  func_0x000108c43eb0();
  return;
}



/* Entry: 108c40bb0; end: 108c40bbf;  */

long FUN_108c40bb0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x18) == '\x01') {
    FUN_108c40c20();
  }
  else {
    FUN_108c40bf4(lVar1,*param_1);
  }
  return lVar1;
}



/* Entry: 108c40bc0; end: 108c40bf3;  */

long FUN_108c40bc0(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_108c40c20();
  }
  else {
    FUN_108c40bf4();
  }
  return param_1;
}



/* Entry: 108c40bf4; end: 108c40c1f;  */

void FUN_108c40bf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 108c40c20; end: 108c40c8b;  */

void FUN_108c40c20(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000108c43e8c();
  func_0x000108c40c54();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 108c40c8c; end: 108c40c93;  */

void FUN_108c40c8c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108c43e8c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x48;
    FUN_108c4064c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108c40c94; end: 108c40cc7;  */

void FUN_108c40c94(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108c43e8c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x48;
    FUN_108c4064c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108c40cc8; end: 108c40cdb;  */

void FUN_108c40cc8(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x000108c43e8c();
  lVar3 = *(long *)(param_2 + 8) + ((plVar1[1] - *plVar1) / -0x48) * 0x48;
  FUN_108c40dfc(plVar1 + 2,*plVar1,plVar1[1],lVar3);
  unaff_x19[1] = lVar3;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 108c40cdc; end: 108c40d5b;  */

void FUN_108c40cdc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000108c43e8c();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x48) * 0x48;
  FUN_108c40dfc(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 108c40d5c; end: 108c40dcb;  */

long * FUN_108c40d5c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108c40da8();
  }
  lVar1 = param_4 + param_3 * 0x48;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x48;
  return param_1;
}



/* Entry: 108c40dcc; end: 108c40dfb;  */

void FUN_108c40dcc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 9) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    puStack_38[2] = param_2[2];
    puStack_38[1] = uVar2;
    *puStack_38 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    puStack_38[5] = param_2[5];
    puStack_38[4] = uVar2;
    puStack_38[3] = uVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    uVar2 = param_2[7];
    uVar1 = param_2[6];
    puStack_38[8] = param_2[8];
    puStack_38[7] = uVar2;
    puStack_38[6] = uVar1;
    puStack_38 = puStack_38 + 9;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  FUN_108c40ea8();
  FUN_108c40ed8(&uStack_60);
  return;
}



/* Entry: 108c40dfc; end: 108c40ea7;  */

void FUN_108c40dfc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 9) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    puStack_28[2] = param_2[2];
    puStack_28[1] = uVar2;
    *puStack_28 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    puStack_28[5] = param_2[5];
    puStack_28[4] = uVar2;
    puStack_28[3] = uVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    uVar2 = param_2[7];
    uVar1 = param_2[6];
    puStack_28[8] = param_2[8];
    puStack_28[7] = uVar2;
    puStack_28[6] = uVar1;
    puStack_28 = puStack_28 + 9;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_108c40ea8();
  FUN_108c40ed8(&uStack_50);
  return;
}



/* Entry: 108c40ea8; end: 108c40ed7;  */

void FUN_108c40ea8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    FUN_108c4064c();
  }
  return;
}



/* Entry: 108c40ed8; end: 108c40f07;  */

long FUN_108c40ed8(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108c40f08(param_1);
  }
  return param_1;
}



/* Entry: 108c40f08; end: 108c40f27;  */

void FUN_108c40f08(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x48;
    FUN_108c4064c();
  }
  return;
}



/* Entry: 108c40f28; end: 108c40f83;  */

void FUN_108c40f28(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x48;
    FUN_108c4064c();
  }
  return;
}



/* Entry: 108c40f84; end: 108c40f8b;  */

void FUN_108c40f84(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108c43e8c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x48;
    FUN_108c4064c();
  }
  return;
}



/* Entry: 108c40f8c; end: 108c4103b;  */

void FUN_108c40f8c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108c43e8c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x48;
    FUN_108c4064c();
  }
  return;
}



/* Entry: 108c4103c; end: 108c41107;  */

long FUN_108c4103c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  plVar1 = param_1;
  FUN_108c41108(param_1,(param_1[1] - *param_1) / 0x48 + 1);
  FUN_108c40d5c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x48,param_1 + 2);
  uVar4 = param_2[1];
  uVar2 = *param_2;
  puStack_48[2] = param_2[2];
  puStack_48[1] = uVar4;
  *puStack_48 = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar4 = param_2[4];
  uVar2 = param_2[3];
  puStack_48[5] = param_2[5];
  puStack_48[4] = uVar4;
  puStack_48[3] = uVar2;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  uVar2 = param_2[8];
  uVar4 = param_2[6];
  puStack_48[7] = param_2[7];
  puStack_48[6] = uVar4;
  puStack_48[8] = uVar2;
  puStack_48 = puStack_48 + 9;
  func_0x000108c43e80();
  FUN_108c40cdc();
  lVar3 = param_1[1];
  func_0x000108c40f58(auStack_58);
  return lVar3;
}



/* Entry: 108c41108; end: 108c41167;  */

long * FUN_108c41108(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plStack_38;
  
  if ((long *)0x38e38e38e38e38e < param_2) {
    FUN_108c40cc8();
    plStack_38 = param_1;
    func_0x000108c41194(&plStack_38);
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x48;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x1c71c71c71c71c6 < uVar1) {
    plVar2 = (long *)0x38e38e38e38e38e;
  }
  return plVar2;
}



/* Entry: 108c41168; end: 108c411cb;  */

undefined8 FUN_108c41168(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000108c41194(&uStack_28);
  return param_1;
}



/* Entry: 108c411cc; end: 108c411f7;  */

void FUN_108c411cc(void)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108c43de8();
  func_0x000108c43da4();
  FUN_108c41270();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 108c411f8; end: 108c4124b;  */

void FUN_108c411f8(void)

{
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar1;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 uVar2;
  long extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 uVar3;
  int extraout_w13;
  int extraout_w13_00;
  
  func_0x000108c44304();
  uVar3 = 0;
  puVar1 = extraout_x8;
  uVar2 = extraout_x9;
  if (extraout_x10 != 0) {
    do {
      func_0x000108c43cc0();
    } while (extraout_w13 != 0);
    do {
      func_0x000108c43cc0();
      puVar1 = extraout_x8_00;
      uVar2 = extraout_x9_00;
      uVar3 = extraout_x10_00;
    } while (extraout_w13_00 != 0);
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  func_0x000108c43e78();
  return;
}



/* Entry: 108c4124c; end: 108c4126f;  */

void FUN_108c4124c(long param_1)

{
  func_0x000108c43d34();
  if (param_1 != 0) {
    func_0x000108c43b70();
  }
  return;
}



/* Entry: 108c41270; end: 108c41293;  */

void FUN_108c41270(undefined8 *param_1)

{
  FUN_108c41294();
  *param_1 = &PTR_FUN_110ab9460;
  return;
}



/* Entry: 108c41294; end: 108c412d3;  */

undefined8 FUN_108c41294(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108c43ef8(&UNK_110ab9498);
  func_0x000108c412ec();
  func_0x000108c43ee8();
  if (extraout_x8 != 0) {
    do {
      func_0x000108c43b9c();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 108c412d4; end: 108c412d7;  */

long FUN_108c412d4(long param_1)

{
  long extraout_x8;
  
  func_0x000108c43d78(&UNK_110ab9498);
  if (extraout_x8 != 0) {
    func_0x000108c43d24();
    func_0x000108c43e80();
    FUN_108c41508();
    func_0x000108c440cc();
  }
  func_0x000108c3ffc0(param_1 + 0x18);
  func_0x000108c3ffc0();
  return param_1;
}



/* Entry: 108c412d8; end: 108c41307;  */

void FUN_108c412d8(void)

{
  FUN_108c414b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c41308; end: 108c4130b;  */

long FUN_108c41308(long param_1)

{
  long extraout_x8;
  
  func_0x000108c43d78(&UNK_110ab9498);
  if (extraout_x8 != 0) {
    func_0x000108c43d24();
    func_0x000108c43e80();
    FUN_108c41508();
    func_0x000108c440cc();
  }
  func_0x000108c3ffc0(param_1 + 0x18);
  func_0x000108c3ffc0();
  return param_1;
}



/* Entry: 108c4130c; end: 108c4131f;  */

void FUN_108c4130c(void)

{
  FUN_108c414b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c41320; end: 108c4139f;  */

void FUN_108c41320(undefined8 param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 in_register_00005008;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x000108c43ce0();
  func_0x000108c4435c();
  FUN_108c413a0();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110ab94c8;
  puStack_30[1] = 0;
  func_0x000108c43f30();
  *(undefined8 *)(extraout_x8 + 0x40) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x38) = param_1;
  func_0x000108c442d8();
  *(undefined8 *)(extraout_x8_00 + 0x48) = extraout_x9;
  *(undefined8 *)(extraout_x8_00 + 0x58) = in_register_00005008;
  *(undefined8 *)(extraout_x8_00 + 0x50) = param_1;
  *(undefined8 *)(extraout_x8_00 + 0x68) = in_register_00005008;
  *(undefined8 *)(extraout_x8_00 + 0x60) = param_1;
  func_0x000108c442cc();
  *(undefined8 *)(extraout_x8_01 + 0x70) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x78) = extraout_x9_00;
  *(undefined8 *)(extraout_x8_01 + 0x88) = in_register_00005008;
  *(undefined8 *)(extraout_x8_01 + 0x80) = param_1;
  *(undefined8 *)(extraout_x8_01 + 0x98) = in_register_00005008;
  *(undefined8 *)(extraout_x8_01 + 0x90) = param_1;
  *(undefined8 *)(extraout_x8_01 + 0xa8) = in_register_00005008;
  *(undefined8 *)(extraout_x8_01 + 0xa0) = param_1;
  *(undefined8 *)(extraout_x8_01 + 0xb8) = in_register_00005008;
  *(undefined8 *)(extraout_x8_01 + 0xb0) = param_1;
  *(undefined8 *)(extraout_x8_01 + 0xc0) = 0;
  func_0x000108c43c78();
  FUN_108c414a0();
  func_0x000108c43c64(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000108c44344();
  FUN_108c413c0();
  func_0x000108c442c0();
  return;
}



/* Entry: 108c413a0; end: 108c413bf;  */

void FUN_108c413a0(void)

{
  func_0x000108c44344();
  FUN_108c413c0();
  func_0x000108c442c0();
  return;
}



/* Entry: 108c413c0; end: 108c413eb;  */

void FUN_108c413c0(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x147ae147ae147af) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 200);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110ab94c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c413ec; end: 108c413ef;  */

void FUN_108c413ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab94c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c413f0; end: 108c41403;  */

void FUN_108c413f0(void)

{
  func_0x000108c41410();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c41404; end: 108c4141b;  */

void FUN_108c41404(long param_1)

{
  func_0x000108c4145c(param_1 + 0xc0);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xb8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x78);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x48);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x000108c42160();
  }
  return;
}



/* Entry: 108c4141c; end: 108c4147f;  */

void FUN_108c4141c(long param_1)

{
  func_0x000108c4145c(param_1 + 0xa8);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x30);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000108c42160();
  }
  return;
}



/* Entry: 108c41480; end: 108c4149f;  */

void FUN_108c41480(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000108c42160();
  }
  return;
}



/* Entry: 108c414a0; end: 108c414af;  */

void FUN_108c414a0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108c414b0; end: 108c41507;  */

long FUN_108c414b0(long param_1)

{
  long extraout_x8;
  
  func_0x000108c43d78(&UNK_110ab9498);
  if (extraout_x8 != 0) {
    func_0x000108c43d24();
    func_0x000108c43e80();
    FUN_108c41508();
    func_0x000108c440cc();
  }
  func_0x000108c3ffc0(param_1 + 0x18);
  func_0x000108c3ffc0();
  return param_1;
}



/* Entry: 108c41508; end: 108c4153f;  */

void FUN_108c41508(void)

{
  func_0x000108c43b7c();
  func_0x000108c43e80();
  FUN_108c41540();
  func_0x000108c43d68();
  func_0x000108c43ed8();
  return;
}



/* Entry: 108c41540; end: 108c4155b;  */

void FUN_108c41540(void)

{
  func_0x000108c43fa4();
  FUN_108c4155c();
  return;
}



/* Entry: 108c4155c; end: 108c415e7;  */

void FUN_108c4155c(void)

{
  long unaff_x19;
  undefined8 uStack_30;
  
  func_0x000108c43ca0();
  func_0x000108c43cd0();
  FUN_108c415e8();
  func_0x000108c43fc8();
  FUN_108c41610();
  func_0x000108c44178();
  func_0x000108c43e78();
  __ZNSt3__15mutex4lockEv(uStack_30 + 0x60);
  func_0x000108c43e0c();
  FUN_108c41634();
  func_0x000108c4405c();
  if (unaff_x19 == 0) {
    func_0x000108c44288();
  }
  else {
    func_0x000108c43fb0();
    func_0x000108c43c4c();
    func_0x000108c43b60();
  }
  func_0x000108c43f8c();
  return;
}



/* Entry: 108c415e8; end: 108c4160f;  */

void FUN_108c415e8(void)

{
  func_0x000108c43c90();
  func_0x000108c440d4();
  func_0x000108c43bbc();
  func_0x000108c43f48();
  return;
}



/* Entry: 108c41610; end: 108c41633;  */

void FUN_108c41610(void)

{
  func_0x000108c43be0();
  func_0x000108c3ffc0();
  return;
}



/* Entry: 108c41634; end: 108c41647;  */

void FUN_108c41634(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0xa0,*param_1);
  return;
}



/* Entry: 108c41648; end: 108c416e7;  */

void FUN_108c41648(void)

{
  long unaff_x19;
  undefined8 uStack_30;
  
  func_0x000108c43ca0();
  func_0x000108c43cd0();
  FUN_108c415e8();
  func_0x000108c43fc8();
  FUN_108c41610();
  func_0x000108c44178();
  func_0x000108c43e78();
  __ZNSt3__15mutex4lockEv(uStack_30 + 0x60);
  func_0x000108c43e0c();
  FUN_108c416e8();
  func_0x000108c4405c();
  if (unaff_x19 == 0) {
    func_0x000108c44288();
  }
  else {
    func_0x000108c43fb0();
    func_0x000108c43c4c();
    func_0x000108c43b60();
  }
  func_0x000108c43f8c();
  return;
}



/* Entry: 108c416e8; end: 108c416f7;  */

long FUN_108c416e8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x28) == '\x01') {
    FUN_108c41748();
  }
  else {
    FUN_108c4172c(lVar1,*param_1);
  }
  return lVar1;
}



/* Entry: 108c416f8; end: 108c4172b;  */

long FUN_108c416f8(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_108c41748();
  }
  else {
    FUN_108c4172c();
  }
  return param_1;
}



/* Entry: 108c4172c; end: 108c41747;  */

void FUN_108c4172c(long param_1)

{
  FUN_108c41898();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 108c41748; end: 108c4181f;  */

void FUN_108c41748(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  func_0x000108c43e8c();
  func_0x000108c417d4();
  uVar2 = *unaff_x19;
  *unaff_x19 = 0;
  func_0x000108c44274(param_1,uVar2);
  lVar3 = unaff_x19[2];
  lVar5 = unaff_x19[1];
  unaff_x20[2] = lVar3;
  unaff_x20[1] = lVar5;
  unaff_x19[1] = 0;
  lVar5 = unaff_x19[3];
  unaff_x20[3] = lVar5;
  *(undefined4 *)(unaff_x20 + 4) = *(undefined4 *)(unaff_x19 + 4);
  if (lVar5 != 0) {
    uVar4 = *(ulong *)(lVar3 + 8);
    uVar6 = unaff_x20[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar4 = uVar6 - 1 & uVar4;
    }
    else if (uVar6 <= uVar4) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar4 / uVar6;
      }
      uVar4 = uVar4 - uVar1 * uVar6;
    }
    *(long **)(*unaff_x20 + uVar4 * 8) = unaff_x20 + 2;
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 108c41820; end: 108c41837;  */

void FUN_108c41820(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108c41838; end: 108c41897;  */

void FUN_108c41838(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    func_0x000108c41870(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 108c41898; end: 108c4191b;  */

void FUN_108c41898(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 108c4191c; end: 108c419e3;  */

void FUN_108c4191c(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_108c41964;
    }
    return;
  }
LAB_108c41964:
  if (param_2 == 0) {
    func_0x000108c44274();
    param_1[1] = 0;
  }
  else {
    FUN_108c41ad8(param_1 + 1);
    func_0x000108c44274();
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108c419e4; end: 108c41ad7;  */

void FUN_108c419e4(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    func_0x000108c44274();
    param_1[1] = 0;
  }
  else {
    FUN_108c41ad8(param_1 + 1);
    func_0x000108c44274();
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108c41ad8; end: 108c41af3;  */

long FUN_108c41ad8(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_108c41b18();
  return param_1;
}



/* Entry: 108c41af4; end: 108c41b17;  */

undefined8 FUN_108c41af4(undefined8 param_1)

{
  FUN_108c41b18(param_1,0);
  return param_1;
}



/* Entry: 108c41b18; end: 108c41b2f;  */

void FUN_108c41b18(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000108c41870(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 108c41b30; end: 108c41b73;  */

void FUN_108c41b30(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000108c41870(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 108c41b74; end: 108c41bc7;  */

undefined8 * FUN_108c41b74(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_108c4191c(param_1,*(undefined8 *)(param_2 + 8));
  FUN_108c41bc8(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 108c41bc8; end: 108c41bff;  */

void FUN_108c41bc8(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000108c43f74();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    FUN_108c41c3c();
  }
  return;
}



/* Entry: 108c41c00; end: 108c41c23;  */

undefined8 FUN_108c41c00(undefined8 param_1)

{
  FUN_108c41c24(param_1,0);
  return param_1;
}



/* Entry: 108c41c24; end: 108c41c3b;  */

void FUN_108c41c24(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108c41c3c; end: 108c41c6f;  */

void FUN_108c41c3c(void)

{
  func_0x000108c41c54();
  return;
}



/* Entry: 108c41c70; end: 108c41e8f;  */

undefined1  [16] FUN_108c41c70(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x25;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_68 [3];
  
  plVar5 = param_1 + 3;
  func_0x000107c278c4();
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x25 = (long *)(uVar8 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar7 <= plVar5) {
        uVar4 = 0;
        if (plVar7 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar4 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_108c41d34;
          plVar2 = (long *)plVar6[1];
          if (plVar2 != plVar5) break;
          plVar2 = plVar6 + 2;
          func_0x000107c278d0(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar1 = 0;
            goto LAB_108c41e64;
          }
        }
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar2 = (long *)((ulong)plVar2 & uVar8);
        }
        else if (plVar7 <= plVar2) {
          uVar4 = 0;
          if (plVar7 != (long *)0x0) {
            uVar4 = (ulong)plVar2 / (ulong)plVar7;
          }
          plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar7);
        }
      } while (plVar2 == unaff_x25);
    }
  }
LAB_108c41d34:
  FUN_108c41e90(aplStack_68,param_1,plVar5,param_3);
  if ((plVar7 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar7 < (float)(param_1[3] + 1))
     ) {
    uVar8 = 1;
    if ((long *)0x2 < plVar7) {
      uVar8 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
    }
    uVar8 = uVar8 | (long)plVar7 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    FUN_108c4191c(param_1,uVar8);
    plVar7 = (long *)param_1[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
    }
  }
  plVar6 = aplStack_68[0];
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *aplStack_68[0] = *plVar5;
    *plVar5 = (long)aplStack_68[0];
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar5;
    if (*aplStack_68[0] != 0) {
      plVar5 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
      *(long **)(lVar3 + (long)plVar5 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar5;
    *plVar5 = (long)aplStack_68[0];
  }
  aplStack_68[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_108c41af4(aplStack_68);
  uVar1 = 1;
LAB_108c41e64:
  auVar9._8_8_ = uVar1;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 108c41e90; end: 108c41ee7;  */

void FUN_108c41e90(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_108c41ee8(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 108c41ee8; end: 108c41f1b;  */

void FUN_108c41ee8(long param_1)

{
  long unaff_x20;
  
  func_0x000108c4421c();
  FUN_108c41f1c(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 108c41f1c; end: 108c41f57;  */

undefined8 * FUN_108c41f1c(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_108c41f58(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x48);
  return param_1;
}



/* Entry: 108c41f58; end: 108c41fd3;  */

void FUN_108c41f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_108c41fd4(param_1,param_4);
    FUN_108c42020(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_108c42134(&uStack_40);
  return;
}



/* Entry: 108c41fd4; end: 108c4201f;  */

void FUN_108c41fd4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x38e38e38e38e38f) {
    plVar1 = param_1 + 2;
    func_0x000108c40da8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 9);
  }
  else {
    FUN_108c40cc8();
    plVar1 = param_1 + 2;
    FUN_108c42054();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 108c42020; end: 108c42053;  */

void FUN_108c42020(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_108c42054();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 108c42054; end: 108c42067;  */

void FUN_108c42054(void)

{
  FUN_108c42068();
  return;
}



/* Entry: 108c42068; end: 108c420ef;  */

long FUN_108c42068(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x48) {
    FUN_108c420f0(param_4,param_2);
    param_4 = lStack_38 + 0x48;
  }
  uStack_48 = 1;
  FUN_108c40ed8(&uStack_60);
  return param_4;
}



/* Entry: 108c420f0; end: 108c42133;  */

void FUN_108c420f0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000108c4421c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  return;
}



/* Entry: 108c42134; end: 108c4217f;  */

long FUN_108c42134(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000108c41194(param_1);
  }
  return param_1;
}



/* Entry: 108c42180; end: 108c421ab;  */

void FUN_108c42180(void)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108c43de8();
  func_0x000108c43da4();
  FUN_108c42224();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 108c421ac; end: 108c421ff;  */

void FUN_108c421ac(void)

{
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar1;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 uVar2;
  long extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 uVar3;
  int extraout_w13;
  int extraout_w13_00;
  
  func_0x000108c44304();
  uVar3 = 0;
  puVar1 = extraout_x8;
  uVar2 = extraout_x9;
  if (extraout_x10 != 0) {
    do {
      func_0x000108c43cc0();
    } while (extraout_w13 != 0);
    do {
      func_0x000108c43cc0();
      puVar1 = extraout_x8_00;
      uVar2 = extraout_x9_00;
      uVar3 = extraout_x10_00;
    } while (extraout_w13_00 != 0);
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  func_0x000108c43e70();
  return;
}



/* Entry: 108c42200; end: 108c42223;  */

void FUN_108c42200(long param_1)

{
  func_0x000108c43d34();
  if (param_1 != 0) {
    func_0x000108c43b70();
  }
  return;
}



/* Entry: 108c42224; end: 108c42247;  */

void FUN_108c42224(undefined8 *param_1)

{
  FUN_108c42248();
  *param_1 = &PTR_FUN_110ab9518;
  return;
}



/* Entry: 108c42248; end: 108c42287;  */

undefined8 FUN_108c42248(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108c43ef8(&UNK_110ab9550);
  func_0x000108c422a0();
  func_0x000108c43ee8();
  if (extraout_x8 != 0) {
    do {
      func_0x000108c43b9c();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 108c42288; end: 108c4228b;  */

long FUN_108c42288(long param_1)

{
  long extraout_x8;
  
  func_0x000108c43d78(&UNK_110ab9550);
  if (extraout_x8 != 0) {
    func_0x000108c43d24();
    func_0x000108c43e80();
    FUN_108c42498();
    func_0x000108c440cc();
  }
  func_0x000108c3ffe4(param_1 + 0x18);
  func_0x000108c3ffe4();
  return param_1;
}



/* Entry: 108c4228c; end: 108c422bb;  */

void FUN_108c4228c(void)

{
  FUN_108c42440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c422bc; end: 108c422bf;  */

long FUN_108c422bc(long param_1)

{
  long extraout_x8;
  
  func_0x000108c43d78(&UNK_110ab9550);
  if (extraout_x8 != 0) {
    func_0x000108c43d24();
    func_0x000108c43e80();
    FUN_108c42498();
    func_0x000108c440cc();
  }
  func_0x000108c3ffe4(param_1 + 0x18);
  func_0x000108c3ffe4();
  return param_1;
}



/* Entry: 108c422c0; end: 108c422d3;  */

void FUN_108c422c0(void)

{
  FUN_108c42440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c422d4; end: 108c4234f;  */

void FUN_108c422d4(undefined8 param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 in_register_00005008;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x000108c43ce0();
  func_0x000108c4435c();
  FUN_108c42350();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110ab9580;
  func_0x000108c43f30();
  func_0x000108c442d8();
  *(undefined8 *)(extraout_x8 + 0x38) = extraout_x9;
  *(undefined8 *)(extraout_x8 + 0x48) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x40) = param_1;
  *(undefined8 *)(extraout_x8 + 0x58) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x50) = param_1;
  func_0x000108c442cc();
  *(undefined8 *)(extraout_x8_00 + 0x60) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x68) = extraout_x9_00;
  *(undefined8 *)(extraout_x8_00 + 0x78) = in_register_00005008;
  *(undefined8 *)(extraout_x8_00 + 0x70) = param_1;
  *(undefined8 *)(extraout_x8_00 + 0x88) = in_register_00005008;
  *(undefined8 *)(extraout_x8_00 + 0x80) = param_1;
  *(undefined8 *)(extraout_x8_00 + 0x98) = in_register_00005008;
  *(undefined8 *)(extraout_x8_00 + 0x90) = param_1;
  *(undefined8 *)(extraout_x8_00 + 0xa8) = in_register_00005008;
  *(undefined8 *)(extraout_x8_00 + 0xa0) = param_1;
  *(undefined8 *)(extraout_x8_00 + 0xb0) = 0;
  func_0x000108c43c78();
  FUN_108c42430();
  func_0x000108c43c64(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000108c44344();
  FUN_108c42370();
  func_0x000108c442c0();
  return;
}



/* Entry: 108c42350; end: 108c4236f;  */

void FUN_108c42350(void)

{
  func_0x000108c44344();
  FUN_108c42370();
  func_0x000108c442c0();
  return;
}



/* Entry: 108c42370; end: 108c4239b;  */

void FUN_108c42370(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1642c8590b21643) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110ab9580;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c4239c; end: 108c4239f;  */

void FUN_108c4239c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9580;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c423a0; end: 108c423b3;  */

void FUN_108c423a0(void)

{
  func_0x000108c423c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c423b4; end: 108c423cb;  */

void FUN_108c423b4(long param_1)

{
  func_0x000108c4240c(param_1 + 0xb0);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x38);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 108c423cc; end: 108c4242f;  */

void FUN_108c423cc(long param_1)

{
  func_0x000108c4240c(param_1 + 0x98);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x90);
  __ZNSt3__15mutexD1Ev(param_1 + 0x50);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x20);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 108c42430; end: 108c4243f;  */

void FUN_108c42430(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


