/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086adac8; end: 1086adb3b;  */

void FUN_1086adac8(undefined8 param_1,undefined1 param_2)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001086b0aa0();
  func_0x0001086b03b4();
  func_0x0001086b0cd8();
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  func_0x0001086b0ce4();
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  *(undefined1 *)(unaff_x19 + 0x28) = param_2;
  func_0x0001086b0a40();
  func_0x000107c313dc(unaff_x19 + 0x70);
  func_0x0001086b05c0();
  *(undefined8 *)(unaff_x19 + 0x88) = unaff_x20;
  func_0x0001086b05cc(unaff_x19 + 0x90);
  return;
}



/* Entry: 1086adb3c; end: 1086adb73;  */

void FUN_1086adb3c(void)

{
  undefined1 auStack_38 [24];
  
  func_0x0001086b0e60();
  FUN_1086adb74(auStack_38);
  func_0x0001086b0518();
  return;
}



/* Entry: 1086adb74; end: 1086adbb3;  */

void FUN_1086adb74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a98cb0;
  param_1[1] = 0;
  func_0x0001086b09d8();
  func_0x000107c3034c(param_1);
  return;
}



/* Entry: 1086adbb4; end: 1086adbfb;  */

void FUN_1086adbb4(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  code *extraout_x8;
  long lVar2;
  
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x1a8) {
    func_0x000107c32568();
    FUN_1086a09ec();
    func_0x0001086b08d0(*param_3);
    (*extraout_x8)();
  }
  return;
}



/* Entry: 1086adbfc; end: 1086adc17;  */

void FUN_1086adbfc(long param_1)

{
  FUN_1086a9c58();
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return;
}



/* Entry: 1086adc18; end: 1086adc47;  */

long FUN_1086adc18(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x10);
  uVar1 = *(ulong *)(lVar3 + 8);
  if (uVar1 < *(ulong *)(lVar3 + 0x10)) {
    func_0x00010867b480();
    lVar2 = uVar1 + 0x1a8;
  }
  else {
    lVar2 = lVar3;
    FUN_10867b4a8(lVar3,param_1);
  }
  *(long *)(lVar3 + 8) = lVar2;
  return lVar2 + -0x1a8;
}



/* Entry: 1086adc48; end: 1086adcf7;  */

void FUN_1086adc48(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  code *extraout_x8;
  undefined1 auStack_3a0 [432];
  byte bStack_1f0;
  undefined8 auStack_1e8 [54];
  byte bStack_38;
  
  func_0x000107c288bc(auStack_1e8,param_2);
  func_0x0001086b0a88(auStack_3a0);
  while ((((bStack_38 & 1) != 0 || ((bStack_1f0 & 1) != 0)) &&
         (func_0x0001086b0c28(auStack_1e8[0]), !(bool)in_ZR))) {
    func_0x000107c288c0(auStack_1e8);
    func_0x000107c32568();
    FUN_1086a09ec();
    func_0x0001086b08d0(*param_3);
    (*extraout_x8)();
    func_0x000107c28980(auStack_1e8);
  }
  func_0x0001086b0384(auStack_3a0);
  func_0x0001086b0384(auStack_1e8);
  return;
}



/* Entry: 1086adcf8; end: 1086add1f;  */

long FUN_1086adcf8(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x0001086b074c(lVar1,param_1);
  if ((bool)in_CY) {
    FUN_1086aa61c();
  }
  else {
    FUN_1086aa5ec();
    lVar1 = unaff_x20 + 0x1a8;
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return lVar1 + -0x1a8;
}



/* Entry: 1086add20; end: 1086add73;  */

long FUN_1086add20(long param_1)

{
  undefined1 auStack_f0 [208];
  
  func_0x0001086b0dd0();
  FUN_1086add74(param_1 + 8,auStack_f0);
  func_0x0001086b081c();
  func_0x000107c32590();
  func_0x000107c31408();
  FUN_1086adea4(param_1 + 0x10);
  return param_1;
}



/* Entry: 1086add74; end: 1086add97;  */

undefined8 FUN_1086add74(undefined8 param_1)

{
  func_0x000107c3251c();
  FUN_1086add98();
  return param_1;
}



/* Entry: 1086add98; end: 1086addbb;  */

undefined8 FUN_1086add98(undefined8 param_1)

{
  FUN_1086addbc();
  return param_1;
}



/* Entry: 1086addbc; end: 1086adde3;  */

void FUN_1086addbc(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 0xc0);
  if (cVar1 != *(char *)(param_2 + 0xc0)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xc0) == '\x01') {
        func_0x0001086a9c30();
        *(undefined1 *)(param_1 + 0xc0) = 0;
      }
      return;
    }
    FUN_1086ade5c();
    *(undefined1 *)(param_1 + 0xc0) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c324b0();
    func_0x000107c3194c();
    func_0x0001086b056c();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x70);
    *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
    *(undefined8 *)(unaff_x20 + 0x70) = uVar2;
    func_0x000107c3194c(unaff_x20 + 0x80,unaff_x19 + 0x80);
    func_0x0001086b08e8();
    return;
  }
  return;
}



/* Entry: 1086adde4; end: 1086ade1b;  */

void FUN_1086adde4(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c324b0();
  func_0x000107c3194c();
  func_0x0001086b056c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar1;
  func_0x000107c3194c(unaff_x20 + 0x80,unaff_x19 + 0x80);
  func_0x0001086b08e8();
  return;
}



/* Entry: 1086ade1c; end: 1086ade5b;  */

void FUN_1086ade1c(long param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    func_0x0001086a9c30();
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  return;
}



/* Entry: 1086ade5c; end: 1086adea3;  */

void FUN_1086ade5c(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 in_register_00005008;
  
  func_0x000107c324b0();
  func_0x0001086aff10();
  FUN_1086b0c90();
  *(undefined8 *)(unaff_x20 + 0x78) = in_register_00005008;
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x88) = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x80) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x90) = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  func_0x0001086b08e8();
  return;
}



/* Entry: 1086adea4; end: 1086adec3;  */

void FUN_1086adea4(long param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    func_0x0001086a9c30();
  }
  return;
}



/* Entry: 1086adec4; end: 1086adefb;  */

void FUN_1086adec4(undefined8 param_1)

{
  undefined1 auStack_f0 [208];
  
  FUN_1086adf14(auStack_f0,param_1);
  func_0x0001086b069c();
  FUN_1086adf14();
  func_0x0001086b081c();
  return;
}



/* Entry: 1086adefc; end: 1086adf13;  */

void FUN_1086adefc(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  func_0x000107c32488(param_1,param_2 + 8);
  FUN_1086adf90();
  func_0x000107c32498();
  return;
}



/* Entry: 1086adf14; end: 1086adf33;  */

void FUN_1086adf14(void)

{
  func_0x000107c32474();
  FUN_1086adf34();
  return;
}



/* Entry: 1086adf34; end: 1086adf5b;  */

void FUN_1086adf34(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0xc0) = 0;
  FUN_1086adf5c();
  return;
}



/* Entry: 1086adf5c; end: 1086adf6f;  */

void FUN_1086adf5c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_1086ade5c();
    *(undefined1 *)(param_1 + 0xc0) = 1;
    return;
  }
  return;
}



/* Entry: 1086adf70; end: 1086adf8f;  */

void FUN_1086adf70(void)

{
  func_0x000107c32488();
  FUN_1086adf90();
  func_0x000107c32498();
  return;
}



/* Entry: 1086adf90; end: 1086adffb;  */

void FUN_1086adf90(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_e0 [192];
  
  func_0x000107c324b0();
  cVar1 = *(char *)(param_1 + 0xc0);
  if (cVar1 != *(char *)(param_2 + 0xc0)) {
    if (cVar1 == '\0') {
      func_0x0001086b0314();
      func_0x0001086ade40();
    }
    else {
      func_0x000107c324ec();
      func_0x0001086ade40();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0xc0) == '\x01') {
      func_0x0001086a9c30();
      *(undefined1 *)(unaff_x19 + 0xc0) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001086b0314();
    func_0x000107c324b0();
    func_0x0001086b06b0(auStack_e0);
    func_0x0001086b0314();
    FUN_1086adde4();
    func_0x0001086b069c();
    FUN_1086adde4();
    func_0x0001086b082c();
    return;
  }
  return;
}



/* Entry: 1086adffc; end: 1086ae033;  */

void FUN_1086adffc(void)

{
  undefined1 auStack_e0 [192];
  
  func_0x000107c324b0();
  func_0x0001086b06b0(auStack_e0);
  func_0x0001086b0314();
  FUN_1086adde4();
  func_0x0001086b069c();
  FUN_1086adde4();
  func_0x0001086b082c();
  return;
}



/* Entry: 1086ae034; end: 1086ae0af;  */

void FUN_1086ae034(void)

{
  undefined1 auStack_100 [208];
  
  func_0x000107c3249c();
  func_0x0001086ae664(auStack_100);
  func_0x000107c32574();
  func_0x0001086ae664();
  func_0x000107c325a4();
  FUN_1086ae0b0();
  func_0x0001086b081c();
  func_0x0001086b0cc4();
  return;
}



/* Entry: 1086ae0b0; end: 1086ae123;  */

void FUN_1086ae0b0(void)

{
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32464();
  func_0x000107c325a8();
  while ((((*(byte *)(unaff_x20 + 200) & 1) != 0 || ((*(byte *)(unaff_x19 + 200) & 1) != 0)) &&
         (func_0x0001086b0720(), extraout_x8 != extraout_x9))) {
    FUN_1086ae470();
    FUN_1086ae124();
    FUN_1086ae4c0();
  }
  func_0x000107c32524();
  FUN_1086ae638();
  return;
}



/* Entry: 1086ae124; end: 1086ae17f;  */

long FUN_1086ae124(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086b074c();
  if ((bool)in_CY) {
    FUN_1086ae180();
  }
  else {
    func_0x0001086ae158();
    param_1 = unaff_x20 + 0xc0;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0xc0;
}



/* Entry: 1086ae180; end: 1086ae1e7;  */

void FUN_1086ae180(void)

{
  undefined8 uStack_48;
  
  func_0x0001086b0370();
  func_0x0001086b0eec();
  FUN_1086ae1e8();
  func_0x0001086b00d4();
  FUN_1086ae278();
  func_0x0001086b06b0(uStack_48);
  func_0x000107c32508();
  FUN_1086ae230();
  func_0x0001086b0ee0();
  func_0x0001086ae408();
  return;
}



/* Entry: 1086ae1e8; end: 1086ae22f;  */

long * FUN_1086ae1e8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x155555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0xc0;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0xaaaaaaaaaaaaa9 < uVar1) {
      plVar2 = (long *)0x155555555555555;
    }
    return plVar2;
  }
  FUN_1086ae26c();
  func_0x000107c324b0();
  func_0x0001086b0b14();
  FUN_1086ae2fc();
  func_0x0001086b0008();
  return param_1;
}



/* Entry: 1086ae230; end: 1086ae26b;  */

void FUN_1086ae230(void)

{
  func_0x000107c324b0();
  func_0x0001086b0b14();
  FUN_1086ae2fc();
  func_0x0001086b0008();
  return;
}



/* Entry: 1086ae26c; end: 1086ae277;  */

void FUN_1086ae26c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001086b0284();
  func_0x000107c32550();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001086ae2b0(param_4);
  }
  func_0x0001086b0484(0xc0);
  return;
}



/* Entry: 1086ae278; end: 1086ae2cf;  */

void FUN_1086ae278(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c32550();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001086ae2b0(param_4);
  }
  func_0x0001086b0484(0xc0);
  return;
}



/* Entry: 1086ae2d0; end: 1086ae2fb;  */

void FUN_1086ae2d0(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0x155555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xc0);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107c32464();
  func_0x0001086b0320();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0xc0) {
    FUN_1086ade5c(param_4,unaff_x22);
    param_4 = lStack_48 + 0xc0;
    lStack_48 = param_4;
  }
  func_0x0001086b0be0();
  func_0x0001086b0588();
  FUN_1086ae36c();
  FUN_1086ae39c(auStack_70);
  return;
}



/* Entry: 1086ae2fc; end: 1086ae36b;  */

void FUN_1086ae2fc(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x000107c32464();
  func_0x0001086b0320();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0xc0) {
    FUN_1086ade5c(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0xc0;
    lStack_38 = in_x3;
  }
  func_0x0001086b0be0();
  func_0x0001086b0588();
  FUN_1086ae36c();
  FUN_1086ae39c(auStack_60);
  return;
}



/* Entry: 1086ae36c; end: 1086ae39b;  */

void FUN_1086ae36c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0xc0) {
    func_0x0001086a9c30();
  }
  return;
}



/* Entry: 1086ae39c; end: 1086ae3c7;  */

void FUN_1086ae39c(void)

{
  uint extraout_w8;
  
  func_0x0001086b0f98();
  if ((extraout_w8 & 1) == 0) {
    FUN_1086ae3c8();
  }
  return;
}



/* Entry: 1086ae3c8; end: 1086ae3d7;  */

void FUN_1086ae3c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x0001086b0c70();
  while (param_3 != param_5) {
    param_3 = param_3 + -0xc0;
    func_0x0001086a9c30();
  }
  return;
}



/* Entry: 1086ae3d8; end: 1086ae433;  */

void FUN_1086ae3d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0xc0;
    func_0x0001086a9c30();
  }
  return;
}



/* Entry: 1086ae434; end: 1086ae43b;  */

void FUN_1086ae434(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c324b0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xc0;
    func_0x0001086a9c30();
  }
  return;
}



/* Entry: 1086ae43c; end: 1086ae46f;  */

void FUN_1086ae43c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c324b0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xc0;
    func_0x0001086a9c30();
  }
  return;
}



/* Entry: 1086ae470; end: 1086ae4bf;  */

long FUN_1086ae470(long param_1)

{
  if ((*(byte *)(param_1 + 200) & 1) == 0) {
    func_0x0001086aff84();
    func_0x0001086aff98();
    func_0x0001086b00c4();
    func_0x0001086b03f4();
    func_0x0001086b0354();
  }
  return param_1 + 8;
}



/* Entry: 1086ae4c0; end: 1086ae51f;  */

void FUN_1086ae4c0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_e0 [192];
  
  func_0x000107c3250c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    FUN_1086ae554(auStack_e0,*unaff_x19);
    func_0x0001086b069c();
    FUN_1086ae520();
    func_0x0001086b082c();
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0x19) == '\x01') {
    func_0x0001086a9c30();
    *(undefined1 *)(puVar1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1086ae520; end: 1086ae553;  */

long FUN_1086ae520(long param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    FUN_1086adde4();
  }
  else {
    func_0x0001086ade40();
  }
  return param_1;
}



/* Entry: 1086ae554; end: 1086ae637;  */

void FUN_1086ae554(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001086b0aa0();
  func_0x0001086b03b4();
  func_0x0001086b0cd8();
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  func_0x0001086b0ce4();
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  *(undefined1 *)(unaff_x19 + 0x28) = param_2;
  func_0x0001086b0a40();
  func_0x0001086b0ccc();
  *(int *)(unaff_x19 + 0x70) = (int)param_1;
  func_0x0001086b05c0();
  *(undefined8 *)(unaff_x19 + 0x78) = param_1;
  func_0x0001086b05cc(unaff_x19 + 0x80);
  uVar1 = unaff_x20;
  func_0x000107c313d8();
  *(undefined8 *)(unaff_x19 + 0x98) = uVar1;
  uVar1 = unaff_x20;
  func_0x000107c313d8();
  *(int *)(unaff_x19 + 0xa0) = (int)uVar1;
  uVar1 = unaff_x20;
  func_0x000107c313d8();
  *(int *)(unaff_x19 + 0xa4) = (int)uVar1;
  uVar1 = unaff_x20;
  func_0x000107c313d8();
  *(int *)(unaff_x19 + 0xa8) = (int)uVar1;
  uVar1 = unaff_x20;
  func_0x000107c313d8();
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar1;
  uVar1 = unaff_x20;
  func_0x000107c313d8();
  *(int *)(unaff_x19 + 0xb8) = (int)uVar1;
  func_0x000107c313d8();
  *(int *)(unaff_x19 + 0xbc) = (int)unaff_x20;
  return;
}



/* Entry: 1086ae638; end: 1086ae683;  */

long FUN_1086ae638(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001086a9bcc(param_1);
  }
  return param_1;
}



/* Entry: 1086ae684; end: 1086ae6b3;  */

void FUN_1086ae684(long param_1)

{
  func_0x000107c324d4();
  *(undefined1 *)(param_1 + 0xc0) = 0;
  FUN_1086ae6b4();
  return;
}



/* Entry: 1086ae6b4; end: 1086ae6c7;  */

void FUN_1086ae6b4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_1086ae6e4();
    *(undefined1 *)(param_1 + 0xc0) = 1;
    return;
  }
  return;
}



/* Entry: 1086ae6c8; end: 1086ae6e3;  */

void FUN_1086ae6c8(long param_1)

{
  FUN_1086ae6e4();
  *(undefined1 *)(param_1 + 0xc0) = 1;
  return;
}



/* Entry: 1086ae6e4; end: 1086ae74b;  */

void FUN_1086ae6e4(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c324b4();
  func_0x0001086b0e90();
  func_0x0001086b0e20();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar1;
  func_0x000107c27994(unaff_x19 + 0x80,unaff_x20 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x98) = uVar1;
  return;
}



/* Entry: 1086ae74c; end: 1086aed57;  */

/* WARNING: Possible PIC construction at 0x0001086aee68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086aee6c) */
/* WARNING: Removing unreachable block (ram,0x0001086aee7c) */
/* WARNING: Removing unreachable block (ram,0x0001086aee90) */
/* WARNING: Removing unreachable block (ram,0x0001086aeea4) */
/* WARNING: Removing unreachable block (ram,0x0001086aeed0) */
/* WARNING: Removing unreachable block (ram,0x0001086aff44) */
/* WARNING: Removing unreachable block (ram,0x0001086aeeb8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1086ae74c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong *puVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong unaff_x19;
  ulong unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong unaff_x24;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *******unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_188 [192];
  undefined1 auStack_c8 [120];
  long lStack_50;
  ulong auStack_40 [3];
  long lStack_28;
  ulong uStack_20;
  ulong uStack_18;
  undefined8 *******pppppppuStack_10;
  undefined8 uStack_8;
  
  func_0x0001086b0888();
  func_0x000107c324b0();
LAB_1086ae774:
  lVar11 = unaff_x19 - 0xc0;
  uVar9 = unaff_x20;
LAB_1086ae788:
  unaff_x20 = uVar9;
  uVar8 = unaff_x19 - unaff_x20;
  uVar9 = (long)uVar8 / 0xc0;
  cVar4 = SBORROW8(uVar9,5);
  cVar5 = (long)(uVar9 - 5) < 0;
  pppppppuStack_10 = unaff_x29;
  switch(uVar9) {
  case 0:
  case 1:
    goto FUN_1086afef8;
  case 2:
    func_0x0001086b0ebc(*(undefined8 *)(unaff_x19 - 0x48));
    if (cVar5 == cVar4) {
      return;
    }
    func_0x000107c32568();
    func_0x0001086b078c();
    uStack_8 = unaff_x30;
    goto code_r0x000100692e9c;
  case 3:
    lVar14 = unaff_x20 + 0xc0;
    uVar9 = unaff_x20;
    lVar10 = lVar11;
    func_0x0001086b078c();
    auStack_40[2] = param_3;
    lStack_28 = lVar11;
    uStack_20 = unaff_x20;
    uStack_18 = unaff_x19;
    uStack_8 = unaff_x30;
    func_0x000107c3254c();
    lVar14 = *(long *)(lVar14 + 0x78);
    lVar10 = *(long *)(lVar10 + 0x78);
    if (lVar14 < *(long *)(uVar9 + 0x78)) {
      cVar4 = SBORROW8(lVar10,lVar14);
      cVar5 = lVar10 - lVar14 < 0;
      puVar3 = auStack_40 + 2;
      if (lVar14 <= lVar10) {
        FUN_1086adffc(lVar11,unaff_x19);
        func_0x0001086b0fb0(*(undefined8 *)(unaff_x20 + 0x78));
        puVar3 = auStack_40 + 2;
        if (cVar5 == cVar4) {
          return;
        }
      }
    }
    else {
      cVar4 = SBORROW8(lVar10,lVar14);
      cVar5 = lVar10 - lVar14 < 0;
      if (lVar14 <= lVar10) {
        return;
      }
      func_0x000107c324ec();
      FUN_1086adffc();
      func_0x0001086b0af8(*(undefined8 *)(unaff_x19 + 0x78));
      if (cVar5 == cVar4) {
        return;
      }
      func_0x0001086b08d0();
      puVar3 = auStack_40 + 2;
    }
    goto LAB_1086b0e40;
  case 4:
    lVar6 = unaff_x20 + 0x180;
    lVar7 = lVar11;
    func_0x0001086b078c(unaff_x20,unaff_x20 + 0xc0);
    break;
  case 5:
    lVar14 = unaff_x20 + 0x180;
    lVar10 = unaff_x20 + 0x240;
    func_0x0001086b078c(unaff_x20,unaff_x20 + 0xc0,lVar14,lVar10,lVar11);
    auStack_40[1] = 0xc0;
    unaff_x29 = &pppppppuStack_10;
    lVar6 = lVar14;
    lVar7 = lVar10;
    auStack_40[0] = unaff_x24;
    auStack_40[2] = param_3;
    lStack_28 = lVar11;
    uStack_20 = unaff_x20;
    uStack_18 = unaff_x19;
    func_0x000107c324b0();
    unaff_x30 = 0x1086aee6c;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    lVar11 = lVar14;
    param_3 = lVar10;
    break;
  default:
    if ((long)uVar8 < 0x1200) {
      if ((param_4 & 1) == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        while( true ) {
          uVar9 = unaff_x20;
          unaff_x20 = uVar9 + 0xc0;
          cVar4 = SBORROW8(unaff_x20,unaff_x19);
          cVar5 = (long)(unaff_x20 - unaff_x19) < 0;
          if (unaff_x20 == unaff_x19) break;
          func_0x0001086b0af8(*(undefined8 *)(uVar9 + 0x138));
          if (cVar5 != cVar4) {
            func_0x0001086b05a0();
            do {
              uVar8 = uVar9;
              FUN_1086adde4(uVar8 + 0xc0,uVar8);
              uVar9 = uVar8 - 0xc0;
            } while (lStack_50 < *(long *)(uVar8 - 0x48));
            FUN_1086adde4(uVar8,auStack_c8);
            func_0x0001086b07d4();
          }
        }
        return;
      }
      if (unaff_x20 == unaff_x19) {
        return;
      }
      lVar11 = 0;
      uVar9 = unaff_x20;
      goto LAB_1086aeb1c;
    }
    if (param_3 != 0) {
      lVar14 = unaff_x20 + (uVar9 >> 1) * 0xc0;
      cVar4 = SBORROW8(uVar8,0x6000);
      cVar5 = (long)(uVar8 - 0x6000) < 0;
      if (uVar8 < 0x6001) {
        FUN_1086aed58(lVar14,unaff_x20,lVar11);
      }
      else {
        FUN_1086aed58(unaff_x20,lVar14,lVar11);
        FUN_1086aed58(unaff_x20 + 0xc0,lVar14 + -0xc0,unaff_x19 - 0x180);
        FUN_1086aed58(unaff_x20 + 0x180,lVar14 + 0xc0,unaff_x19 - 0x240);
        FUN_1086aed58(lVar14 + -0xc0,lVar14,lVar14 + 0xc0);
        FUN_1086adffc(unaff_x20,lVar14);
      }
      param_3 = param_3 + -1;
      if (((param_4 & 1) == 0) &&
         (func_0x0001086b0ebc(*(undefined8 *)(unaff_x20 - 0x48)), cVar5 == cVar4))
      goto LAB_1086ae958;
      func_0x0001086b05a0();
      lVar14 = 0;
      do {
        lVar10 = unaff_x20 + lVar14;
        lVar14 = lVar14 + 0xc0;
      } while (*(long *)(lVar10 + 0x138) < lStack_50);
      uVar8 = unaff_x20 + lVar14;
      unaff_x24 = unaff_x19;
      uVar15 = unaff_x19;
      uVar9 = uVar8;
      if (lVar14 == 0xc0) {
        do {
          uVar13 = unaff_x24;
          if (unaff_x24 <= uVar8) break;
          uVar13 = unaff_x24 - 0xc0;
          plVar1 = (long *)(unaff_x24 - 0x48);
          unaff_x24 = uVar13;
        } while (lStack_50 <= *plVar1);
      }
      else {
        do {
          uVar13 = uVar15 - 0xc0;
          plVar1 = (long *)(uVar15 - 0x48);
          uVar15 = uVar13;
          unaff_x24 = uVar13;
        } while (lStack_50 <= *plVar1);
      }
      while (uVar9 < uVar13) {
        FUN_1086adffc(uVar9,uVar13);
        do {
          plVar1 = (long *)(uVar9 + 0x138);
          uVar9 = uVar9 + 0xc0;
        } while (*plVar1 < lStack_50);
        do {
          plVar1 = (long *)(uVar13 - 0x48);
          uVar13 = uVar13 - 0xc0;
        } while (lStack_50 <= *plVar1);
      }
      uVar15 = uVar9 - 0xc0;
      if (unaff_x20 != uVar15) {
        FUN_1086adde4(unaff_x20,uVar15);
      }
      FUN_1086adde4(uVar15,auStack_c8);
      func_0x0001086b07d4();
      if (unaff_x24 <= uVar8) {
        uVar8 = unaff_x20;
        FUN_1086aeed8(unaff_x20,uVar15);
        uVar13 = uVar9;
        FUN_1086aeed8(uVar9,unaff_x19);
        if ((int)uVar13 != 0) goto LAB_1086aea38;
        if ((uVar8 & 1) != 0) goto LAB_1086ae788;
      }
      FUN_1086ae74c(unaff_x20,uVar15,param_3,(uint)param_4 & 1);
      param_4 = 0;
      goto LAB_1086ae788;
    }
    if (unaff_x20 == unaff_x19) {
      return;
    }
    uVar8 = uVar9 - 2 >> 1;
    lVar11 = unaff_x20 + uVar8 * 0xc0;
    do {
      FUN_1086af064(unaff_x20,uVar9,lVar11);
      uVar8 = uVar8 - 1;
      lVar11 = lVar11 + -0xc0;
    } while (-1 < (long)uVar8);
    do {
      if ((long)uVar9 < 2) {
        return;
      }
      func_0x0001086b06b0(auStack_188);
      uVar15 = 0;
      uVar8 = unaff_x20;
      do {
        lVar11 = uVar8 + uVar15 * 0xc0;
        uVar2 = uVar15 << 1 | 1;
        uVar13 = uVar15 * 2 + 2;
        uVar12 = lVar11 + 0xc0U;
        uVar15 = uVar2;
        if (((long)uVar13 < (long)uVar9) &&
           (uVar12 = lVar11 + 0x180, uVar15 = uVar13,
           *(long *)(lVar11 + 0x1f8) <= *(long *)(lVar11 + 0x138))) {
          uVar12 = lVar11 + 0xc0U;
          uVar15 = uVar2;
        }
        FUN_1086adde4(uVar8,uVar12);
        uVar8 = uVar12;
      } while ((long)uVar15 <= (long)(uVar9 - 2 >> 1));
      unaff_x19 = unaff_x19 - 0xc0;
      if (uVar12 == unaff_x19) {
        FUN_1086adde4(uVar12,auStack_188);
      }
      else {
        func_0x0001086b08d0();
        FUN_1086adde4();
        FUN_1086adde4(unaff_x19,auStack_188);
        uVar8 = (uVar12 - unaff_x20) + 0xc0;
        cVar4 = SBORROW8(uVar8,0xc1);
        cVar5 = (long)((uVar12 - unaff_x20) + -1) < 0;
        if (0xc0 < (long)uVar8) {
          uVar15 = uVar8 / 0xc0 - 2 >> 1;
          uVar8 = unaff_x20 + uVar15 * 0xc0;
          func_0x0001086b0af8(*(undefined8 *)(uVar8 + 0x78));
          if (cVar5 != cVar4) {
            func_0x0001086b0968(auStack_c8);
            do {
              uVar13 = uVar8;
              FUN_1086adde4(uVar12,uVar13);
              if (uVar15 == 0) break;
              uVar15 = uVar15 - 1 >> 1;
              uVar8 = unaff_x20 + uVar15 * 0xc0;
              uVar12 = uVar13;
            } while (*(long *)(uVar8 + 0x78) < lStack_50);
            FUN_1086adde4(uVar13,auStack_c8);
            func_0x0001086b07d4();
          }
        }
      }
      func_0x0001086a9c30(auStack_188);
      uVar9 = uVar9 - 1;
    } while( true );
  }
  *(long *)((long)register0x00000008 + -0x30) = param_3;
  *(long *)((long)register0x00000008 + -0x28) = lVar11;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107c324b0();
  FUN_1086aed58();
  func_0x0001086b0af8(*(undefined8 *)(lVar7 + 0x78));
  if (cVar5 != cVar4) {
    func_0x0001086b08dc();
    FUN_1086adffc();
    func_0x0001086b0fb0(*(undefined8 *)(lVar6 + 0x78));
    if (cVar5 != cVar4) {
      func_0x0001086b0500();
      FUN_1086adffc();
      func_0x0001086b0ebc(*(undefined8 *)(unaff_x19 + 0x78));
      if (cVar5 != cVar4) {
        func_0x0001086b0314();
        pppppppuStack_10 = *(undefined8 ********)((long)register0x00000008 + -0x10);
        uStack_8 = *(undefined8 *)((long)register0x00000008 + -8);
        puVar3 = (ulong *)((long)register0x00000008 + -0x30);
LAB_1086b0e40:
        unaff_x20 = *(ulong *)((long)puVar3 + 0x10);
        unaff_x19 = *(ulong *)((long)puVar3 + 0x18);
        register0x00000008 = (BADSPACEBASE *)((long)puVar3 + 0x30);
code_r0x000100692e9c:
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 ********)((long)register0x00000008 + -0x10) = pppppppuStack_10;
        *(undefined8 *)((long)register0x00000008 + -8) = uStack_8;
        func_0x000107c324b0();
        func_0x0001086b06b0((undefined1 *)((long)register0x00000008 + -0xe0));
        func_0x0001086b0314();
        FUN_1086adde4();
        func_0x0001086b069c();
        FUN_1086adde4();
        func_0x0001086b082c();
        return;
      }
    }
  }
  return;
LAB_1086aeb1c:
  if (uVar9 + 0xc0 == unaff_x19) {
FUN_1086afef8:
    return;
  }
  if (*(long *)(uVar9 + 0x138) < *(long *)(uVar9 + 0x78)) {
    func_0x0001086b0968(auStack_c8);
    lVar14 = lVar11;
    do {
      lVar10 = unaff_x20 + lVar14;
      FUN_1086adde4(lVar10 + 0xc0,lVar10);
      uVar8 = unaff_x20;
      if (lVar14 == 0) goto LAB_1086aeb7c;
      lVar14 = lVar14 + -0xc0;
    } while (lStack_50 < *(long *)(lVar10 + -0x48));
    uVar8 = unaff_x20 + lVar14 + 0xc0;
LAB_1086aeb7c:
    FUN_1086adde4(uVar8,auStack_c8);
    func_0x0001086b07d4();
  }
  lVar11 = lVar11 + 0xc0;
  uVar9 = uVar9 + 0xc0;
  goto LAB_1086aeb1c;
LAB_1086ae958:
  func_0x0001086b05a0();
  uVar8 = unaff_x20;
  if (lStack_50 < *(long *)(unaff_x19 - 0x48)) {
    do {
      uVar9 = uVar8 + 0xc0;
      plVar1 = (long *)(uVar8 + 0x138);
      uVar8 = uVar9;
    } while (*plVar1 <= lStack_50);
  }
  else {
    do {
      uVar9 = uVar8 + 0xc0;
      if (unaff_x19 <= uVar9) break;
      plVar1 = (long *)(uVar8 + 0x138);
      uVar8 = uVar9;
    } while (*plVar1 <= lStack_50);
  }
  uVar8 = unaff_x19;
  uVar15 = unaff_x19;
  if (uVar9 < unaff_x19) {
    do {
      uVar15 = uVar8 - 0xc0;
      plVar1 = (long *)(uVar8 - 0x48);
      uVar8 = uVar15;
    } while (lStack_50 < *plVar1);
  }
  while (uVar9 < uVar15) {
    FUN_1086adffc(uVar9,uVar15);
    do {
      plVar1 = (long *)(uVar9 + 0x138);
      uVar9 = uVar9 + 0xc0;
    } while (*plVar1 <= lStack_50);
    do {
      plVar1 = (long *)(uVar15 - 0x48);
      uVar15 = uVar15 - 0xc0;
    } while (lStack_50 < *plVar1);
  }
  uVar8 = uVar9 - 0xc0;
  if (unaff_x20 != uVar8) {
    FUN_1086adde4(unaff_x20,uVar8);
  }
  FUN_1086adde4(uVar8,auStack_c8);
  func_0x0001086b07d4();
  param_4 = 0;
  goto LAB_1086ae788;
LAB_1086aea38:
  unaff_x19 = uVar15;
  if ((uVar8 & 1) != 0) {
    return;
  }
  goto LAB_1086ae774;
}



/* Entry: 1086aed58; end: 1086aee43;  */

void FUN_1086aed58(long param_1,long param_2,long param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_e0 [176];
  
  func_0x000107c3254c();
  lVar3 = *(long *)(param_2 + 0x78);
  lVar4 = *(long *)(param_3 + 0x78);
  if (lVar3 < *(long *)(param_1 + 0x78)) {
    cVar1 = SBORROW8(lVar4,lVar3);
    cVar2 = lVar4 - lVar3 < 0;
    if (lVar3 <= lVar4) {
      FUN_1086adffc();
      func_0x0001086b0fb0(*(undefined8 *)(unaff_x20 + 0x78));
      if (cVar2 == cVar1) {
        return;
      }
    }
code_r0x0001086adffc:
    func_0x000107c324b0();
    func_0x0001086b06b0(auStack_e0);
    func_0x0001086b0314();
    FUN_1086adde4();
    func_0x0001086b069c();
    FUN_1086adde4();
    func_0x0001086b082c();
    return;
  }
  cVar1 = SBORROW8(lVar4,lVar3);
  cVar2 = lVar4 - lVar3 < 0;
  if (lVar4 < lVar3) {
    func_0x000107c324ec();
    FUN_1086adffc();
    func_0x0001086b0af8(*(undefined8 *)(unaff_x19 + 0x78));
    if (cVar2 != cVar1) {
      func_0x0001086b08d0();
      goto code_r0x0001086adffc;
    }
  }
  return;
}



/* Entry: 1086aee44; end: 1086aeed7;  */

void FUN_1086aee44(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined1 auStack_e0 [160];
  
  func_0x000107c324b0();
  func_0x0001086aeddc();
  lVar3 = *(long *)(param_5 + 0x78);
  lVar4 = *(long *)(param_4 + 0x78);
  cVar1 = SBORROW8(lVar3,lVar4);
  cVar2 = lVar3 - lVar4 < 0;
  if (lVar3 < lVar4) {
    func_0x0001086b0ad0();
    FUN_1086adffc();
    func_0x0001086b0af8(*(undefined8 *)(param_4 + 0x78));
    if (cVar2 != cVar1) {
      func_0x0001086b08dc();
      FUN_1086adffc();
      func_0x0001086b0fb0(*(undefined8 *)(param_3 + 0x78));
      if (cVar2 != cVar1) {
        func_0x0001086b0500();
        FUN_1086adffc();
        func_0x0001086b0ebc(*(undefined8 *)(unaff_x19 + 0x78));
        if (cVar2 != cVar1) {
          func_0x0001086b0314();
          func_0x000107c324b0();
          func_0x0001086b06b0(auStack_e0);
          func_0x0001086b0314();
          FUN_1086adde4();
          func_0x0001086b069c();
          FUN_1086adde4();
          func_0x0001086b082c();
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 1086aeed8; end: 1086af063;  */

void FUN_1086aeed8(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined1 auStack_110 [120];
  long lStack_98;
  
  func_0x000107c324fc();
  lVar6 = (param_2 - param_1) / 0xc0;
  cVar1 = SBORROW8(lVar6,5);
  cVar2 = lVar6 + -5 < 0;
  switch(lVar6) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x0001086b0fb0(*(undefined8 *)(unaff_x20 + -0x48),1);
    if (cVar2 != cVar1) {
      FUN_1086adffc();
    }
    break;
  case 3:
    FUN_1086aed58();
    break;
  case 4:
    func_0x0001086aeddc();
    break;
  case 5:
    FUN_1086aee44();
    break;
  default:
    FUN_1086aed58();
    lVar6 = 0;
    iVar7 = 0;
    lVar5 = unaff_x19 + 0x240;
    lVar4 = unaff_x19 + 0x180;
    while (lVar3 = lVar5, lVar3 != unaff_x20) {
      if (*(long *)(lVar3 + 0x78) < *(long *)(lVar4 + 0x78)) {
        func_0x0001086b0968(auStack_110);
        lVar5 = lVar6;
        do {
          lVar4 = unaff_x19 + lVar5;
          FUN_1086adde4(lVar4 + 0x240,lVar4 + 0x180);
          if (lVar5 == -0x180) break;
          lVar5 = lVar5 + -0xc0;
        } while (lStack_98 < *(long *)(lVar4 + 0x138));
        FUN_1086adde4();
        iVar7 = iVar7 + 1;
        func_0x0001086b082c();
        if (iVar7 == 8) {
          return;
        }
      }
      lVar6 = lVar6 + 0xc0;
      lVar4 = lVar3;
      lVar5 = lVar3 + 0xc0;
    }
  }
  return;
}



/* Entry: 1086af064; end: 1086af197;  */

void FUN_1086af064(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_120 [120];
  long lStack_a8;
  
  if (1 < param_2) {
    lVar13 = (param_3 - param_1) / 0xc0;
    uVar11 = param_2 - 2U >> 1;
    if (lVar13 <= (long)uVar11) {
      uVar4 = lVar13 << 1 | 1;
      lVar12 = param_1 + uVar4 * 0xc0;
      uVar3 = lVar13 * 2 + 2;
      cVar7 = SBORROW8(uVar3,param_2);
      lVar13 = uVar3 - param_2;
      uVar8 = uVar4;
      if ((long)uVar3 < param_2) {
        lVar9 = *(long *)(lVar12 + 0x78);
        lVar10 = *(long *)(lVar12 + 0x138);
        cVar7 = SBORROW8(lVar9,lVar10);
        lVar13 = lVar9 - lVar10;
        lVar5 = 0xc0;
        if (lVar10 <= lVar9) {
          lVar5 = 0;
        }
        lVar12 = lVar12 + lVar5;
        uVar8 = uVar3;
        if (lVar10 <= lVar9) {
          uVar8 = uVar4;
        }
      }
      cVar6 = lVar13 < 0;
      func_0x0001086b0af8(*(undefined8 *)(lVar12 + 0x78));
      if (cVar6 == cVar7) {
        func_0x0001086b0968(auStack_120);
        do {
          lVar13 = lVar12;
          FUN_1086adde4(param_3,lVar13);
          if ((long)uVar11 < (long)uVar8) break;
          uVar4 = uVar8 << 1 | 1;
          lVar12 = param_1 + uVar4 * 0xc0;
          uVar3 = uVar8 * 2 + 2;
          uVar8 = uVar4;
          if ((long)uVar3 < param_2) {
            plVar1 = (long *)(lVar12 + 0x78);
            plVar2 = (long *)(lVar12 + 0x138);
            lVar5 = 0xc0;
            if (*plVar2 <= *plVar1) {
              lVar5 = 0;
            }
            lVar12 = lVar12 + lVar5;
            uVar8 = uVar3;
            if (*plVar2 <= *plVar1) {
              uVar8 = uVar4;
            }
          }
          param_3 = lVar13;
        } while (lStack_a8 <= *(long *)(lVar12 + 0x78));
        FUN_1086adde4(lVar13,auStack_120);
        func_0x0001086b082c();
      }
    }
  }
  return;
}



/* Entry: 1086af198; end: 1086af1b3;  */

void FUN_1086af198(void)

{
  func_0x0001086b0210();
  FUN_1086af1b4();
  return;
}



/* Entry: 1086af1b4; end: 1086af1f7;  */

void FUN_1086af1b4(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001086b0178();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0xc0) {
    func_0x0001086b07c8();
    FUN_1086adde4();
  }
  func_0x0001086b0314();
  return;
}



/* Entry: 1086af1f8; end: 1086af23b;  */

void FUN_1086af1f8(undefined8 param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  undefined8 extraout_x10_00;
  ulong extraout_x11;
  ulong uVar1;
  ulong extraout_x12;
  ulong extraout_x13;
  undefined8 unaff_x30;
  
  func_0x0001086b0080();
  if (extraout_x10 != 0) {
    func_0x0001086b0bc8(param_1,unaff_x30);
    if ((bool)in_ZR) {
      uVar1 = extraout_x13 & extraout_x11;
    }
    else {
      uVar1 = extraout_x11;
      if (extraout_x12 <= extraout_x11) {
        uVar1 = 0;
        if (extraout_x12 != 0) {
          uVar1 = extraout_x11 / extraout_x12;
        }
        uVar1 = extraout_x11 - uVar1 * extraout_x12;
      }
    }
    *(undefined8 *)(extraout_x8 + uVar1 * 8) = extraout_x10_00;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 1086af23c; end: 1086af26f;  */

long FUN_1086af23c(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 != param_3) {
    func_0x0001086b0624();
    FUN_1086af270();
    FUN_1086a9cd0();
  }
  return param_2;
}



/* Entry: 1086af270; end: 1086af28b;  */

void FUN_1086af270(void)

{
  func_0x0001086b0210();
  func_0x0001086ad368();
  return;
}



/* Entry: 1086af28c; end: 1086af293;  */

long FUN_1086af28c(undefined8 *param_1,long param_2)

{
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107c324c0(*param_1,param_1,param_2,param_2 + 8);
  func_0x0001086b09a4();
  FUN_1086af2c8();
  func_0x0001086b006c();
  return extraout_x8 + ((unaff_x20 << 0x1d) >> 0x1d);
}



/* Entry: 1086af294; end: 1086af2c7;  */

long FUN_1086af294(undefined8 *param_1)

{
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107c324c0(*param_1);
  func_0x0001086b09a4();
  FUN_1086af2c8();
  func_0x0001086b006c();
  return extraout_x8 + ((unaff_x20 << 0x1d) >> 0x1d);
}



/* Entry: 1086af2c8; end: 1086af32f;  */

void FUN_1086af2c8(ulong *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x0001086b0f6c();
  func_0x000107c324c0(*param_1);
  func_0x0001086b0ef8();
  for (; unaff_x24 != 0; unaff_x24 = unaff_x24 + -1) {
    if ((unaff_x23 == 0) && (param_1 = (ulong *)*unaff_x22, param_1 != (ulong *)0x0)) {
      func_0x0001086b075c();
    }
    unaff_x22 = unaff_x22 + 1;
  }
  func_0x0001086b0ed4();
  lVar2 = 0;
  if (param_3 < 1) {
    return;
  }
  func_0x0001086b0f6c();
  if (lVar2 != 0) {
    func_0x0001086b0274(*unaff_x21);
    func_0x0001086b0a90();
  }
  func_0x0001086b0ed4();
  if ((*param_1 & 1) == 0) {
    if ((param_2 == 0) && (param_3 == 1)) {
      *param_1 = 0;
    }
  }
  else {
    piVar3 = (int *)(*param_1 - 1);
    iVar1 = *piVar3;
    lVar2 = (long)(param_3 + param_2);
    while (lVar4 = lVar2 + 1, lVar2 < iVar1) {
      *(undefined8 *)(piVar3 + (long)param_3 * -2 + lVar4 * 2) = *(undefined8 *)(piVar3 + lVar4 * 2)
      ;
      lVar2 = lVar4;
    }
    *piVar3 = iVar1 - param_3;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] - param_3;
  return;
}



/* Entry: 1086af330; end: 1086af373;  */

void FUN_1086af330(ulong *param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x21;
  
  if (0 < param_3) {
    func_0x0001086b0f6c();
    if (param_4 != 0) {
      func_0x0001086b0274(*unaff_x21);
      func_0x0001086b0a90();
    }
    func_0x0001086b0ed4();
    if ((*param_1 & 1) == 0) {
      if ((param_2 == 0) && (param_3 == 1)) {
        *param_1 = 0;
      }
    }
    else {
      piVar2 = (int *)(*param_1 - 1);
      iVar1 = *piVar2;
      lVar4 = (long)(param_3 + param_2);
      while (lVar3 = lVar4 + 1, lVar4 < iVar1) {
        *(undefined8 *)(piVar2 + (long)param_3 * -2 + lVar3 * 2) =
             *(undefined8 *)(piVar2 + lVar3 * 2);
        lVar4 = lVar3;
      }
      *piVar2 = iVar1 - param_3;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] - param_3;
    return;
  }
  return;
}



/* Entry: 1086af374; end: 1086af38f;  */

void FUN_1086af374(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  undefined **ppuStack_38;
  
  ppuVar1 = &PTR_PTR_11326cb58;
  if (param_2 != (undefined **)0x0) {
    ppuVar1 = param_2;
  }
  plVar3 = &lStack_40;
  plVar4 = &lStack_40;
  lStack_40 = param_1;
  ppuStack_38 = ppuVar1;
  func_0x0001006933dc();
  ppuVar2 = ppuVar1;
  func_0x0001006933dc();
  lVar5 = param_1;
  func_0x000100693428(&lStack_40);
  func_0x000100693428(&lStack_40);
  func_0x000100693448(ppuVar1,(long)ppuVar2 + param_1,plVar3,(undefined1 *)((long)plVar4 + lVar5));
  return;
}



/* Entry: 1086af390; end: 1086af403;  */

ulong FUN_1086af390(long param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long extraout_x8;
  long *extraout_x9;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x18);
  func_0x000107c324c0(*plVar2,param_1,param_2,param_2);
  plVar1 = plVar2;
  if (!(bool)in_ZR) {
    plVar1 = extraout_x9;
  }
  FUN_1086af404(plVar1,plVar1 + *(int *)(param_1 + 0x20));
  func_0x0001086b0274(*plVar2);
  if ((long *)(extraout_x8 + (long)*(int *)(param_1 + 0x20) * 8) != plVar1) {
    param_4 = (ulong)(*(ulong *)(*param_3 + 0x60) <= *(ulong *)(*plVar1 + 0x28));
  }
  return param_4;
}



/* Entry: 1086af404; end: 1086af44b;  */

undefined8 * FUN_1086af404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_28;
  
  func_0x000107c324b0();
  uStack_28 = param_3;
  while( true ) {
    if (unaff_x20 == unaff_x19) {
      return unaff_x19;
    }
    puVar1 = &uStack_28;
    FUN_1086af44c(puVar1,*unaff_x20);
    if (((ulong)puVar1 & 1) != 0) break;
    unaff_x20 = unaff_x20 + 1;
  }
  return unaff_x20;
}



/* Entry: 1086af44c; end: 1086af46b;  */

void FUN_1086af44c(long *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_40;
  undefined **ppuStack_38;
  
  ppuVar1 = &PTR_PTR_11326cb58;
  if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x18);
  }
  lVar6 = *param_1;
  plVar3 = &lStack_40;
  plVar4 = &lStack_40;
  lStack_40 = lVar6;
  ppuStack_38 = ppuVar1;
  func_0x0001006933dc();
  ppuVar2 = ppuVar1;
  func_0x0001006933dc();
  lVar5 = lVar6;
  func_0x000100693428(&lStack_40);
  func_0x000100693428(&lStack_40);
  func_0x000100693448(ppuVar1,(long)ppuVar2 + lVar6,plVar3,(undefined1 *)((long)plVar4 + lVar5));
  return;
}



/* Entry: 1086af46c; end: 1086af4df;  */

undefined8 FUN_1086af46c(void)

{
  undefined8 unaff_x19;
  
  func_0x0001086b07b0();
  func_0x0001086af490();
  func_0x0001086b050c();
  FUN_1086af4e0();
  return unaff_x19;
}



/* Entry: 1086af4e0; end: 1086af50b;  */

void FUN_1086af4e0(long *param_1)

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



/* Entry: 1086af50c; end: 1086af5db;  */

long FUN_1086af50c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar5 = (long *)param_1[1];
  if ((plVar5 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    FUN_1086a9f1c();
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)((ulong)plVar2 & uVar6);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        plVar3 = (long *)plVar4[1];
        if (plVar2 != plVar3) break;
        plVar3 = param_1 + 4;
        FUN_1086a9f40(plVar3,plVar4 + 2,param_2);
        if ((int)plVar3 != 0) {
          return (long)plVar4;
        }
      }
      if (((ulong)plVar5 & uVar6) == 0) {
        plVar3 = (long *)((ulong)plVar3 & uVar6);
      }
      else if (plVar5 <= plVar3) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar5;
        }
        plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar5);
      }
    } while (plVar3 == plVar7);
  }
  return 0;
}



/* Entry: 1086af5dc; end: 1086af60f;  */

void FUN_1086af5dc(void)

{
  func_0x0001086af5f4();
  return;
}



/* Entry: 1086af610; end: 1086af77f;  */

undefined1  [16] FUN_1086af610(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  ulong extraout_x9_00;
  ulong uVar5;
  ulong extraout_x10;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x25;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  func_0x0001086b0c34();
  func_0x0001086b0290();
  uVar7 = unaff_x19[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    uVar5 = param_3;
    if ((uVar7 & uVar8) == 0) {
      unaff_x25 = uVar8 & param_3;
      in_ZR = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)(param_3 - uVar7) < 0;
      in_ZR = param_3 == uVar7;
      unaff_x25 = param_3;
      if (uVar7 <= param_3) {
        func_0x0001086b0adc();
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar6;
          if (unaff_x21 == (long *)0x0) goto LAB_1086af6b0;
          uVar4 = unaff_x21[1];
          in_NG = (long)(uVar4 - param_3) < 0;
          in_ZR = uVar4 == param_3;
          plVar6 = unaff_x21;
          if (!(bool)in_ZR) break;
          func_0x0001086b0a78();
          if ((uVar5 & 1) != 0) {
            uVar3 = 0;
            goto LAB_1086af768;
          }
        }
        if ((uVar7 & uVar8) == 0) {
          uVar4 = uVar4 & uVar8;
        }
        else if (uVar7 <= uVar4) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar4 / uVar7;
          }
          uVar4 = uVar4 - uVar1 * uVar7;
        }
        in_NG = (long)(uVar4 - unaff_x25) < 0;
        in_ZR = uVar4 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_1086af6b0:
  func_0x000107c324ec(&stack0x00000008);
  FUN_1086af780();
  func_0x0001086b0124();
  if ((uVar7 == 0) ||
     (func_0x0001086b0a10(param_1,param_2,(float)uVar7), uVar5 = unaff_x25, (bool)in_NG)) {
    func_0x0001086b04dc();
    uVar2 = uVar7 == 3;
    func_0x0001086b00f0();
    func_0x0001086a9fa0();
    func_0x0001086b0b04();
    if ((bool)uVar2) {
      in_ZR = 1;
      uVar5 = extraout_x8 & param_3;
    }
    else {
      in_ZR = param_3 == uVar7;
      uVar5 = param_3;
      if (uVar7 <= param_3) {
        func_0x0001086b0adc();
        uVar5 = unaff_x25;
      }
    }
  }
  if (*(long *)(*unaff_x19 + uVar5 * 8) == 0) {
    func_0x0001086b0920();
    if (extraout_x9 != 0) {
      func_0x0001086b0b24();
      if ((bool)in_ZR) {
        uVar5 = extraout_x9_00 & extraout_x10;
      }
      else {
        uVar5 = extraout_x9_00;
        if (uVar7 <= extraout_x9_00) {
          uVar5 = 0;
          if (uVar7 != 0) {
            uVar5 = extraout_x9_00 / uVar7;
          }
          uVar5 = extraout_x9_00 - uVar5 * uVar7;
        }
      }
      *(long **)(extraout_x8_00 + uVar5 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001086b0f4c();
  }
  func_0x0001086b04b4();
  FUN_1086aa134();
  uVar3 = 1;
LAB_1086af768:
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = unaff_x21;
  return auVar9;
}



/* Entry: 1086af780; end: 1086af7cf;  */

void FUN_1086af780(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 unaff_x21;
  
  func_0x0001086b0468();
  puVar1 = param_1 + 2;
  func_0x0001086b0a2c();
  *extraout_x8 = param_1;
  extraout_x8[1] = puVar1;
  extraout_x8[2] = 0;
  *param_1 = 0;
  param_1[1] = unaff_x21;
  FUN_10865ecd8(param_1 + 2);
  *(undefined1 *)(extraout_x8 + 2) = 1;
  return;
}



/* Entry: 1086af7d0; end: 1086af803;  */

long FUN_1086af7d0(undefined8 *param_1)

{
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107c324c0(*param_1);
  func_0x0001086b09a4();
  FUN_1086af804();
  func_0x0001086b006c();
  return extraout_x8 + ((unaff_x20 << 0x1d) >> 0x1d);
}



/* Entry: 1086af804; end: 1086af86b;  */

void FUN_1086af804(ulong *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x0001086b0f6c();
  func_0x000107c324c0(*param_1);
  func_0x0001086b0ef8();
  for (; unaff_x24 != 0; unaff_x24 = unaff_x24 + -1) {
    if ((unaff_x23 == 0) && (param_1 = (ulong *)*unaff_x22, param_1 != (ulong *)0x0)) {
      func_0x0001086b075c();
    }
    unaff_x22 = unaff_x22 + 1;
  }
  func_0x0001086b0ed4();
  lVar2 = 0;
  if (param_3 < 1) {
    return;
  }
  func_0x0001086b0f6c();
  if (lVar2 != 0) {
    func_0x0001086b0274(*unaff_x21);
    func_0x0001086b0a90();
  }
  func_0x0001086b0ed4();
  if ((*param_1 & 1) == 0) {
    if ((param_2 == 0) && (param_3 == 1)) {
      *param_1 = 0;
    }
  }
  else {
    piVar3 = (int *)(*param_1 - 1);
    iVar1 = *piVar3;
    lVar2 = (long)(param_3 + param_2);
    while (lVar4 = lVar2 + 1, lVar2 < iVar1) {
      *(undefined8 *)(piVar3 + (long)param_3 * -2 + lVar4 * 2) = *(undefined8 *)(piVar3 + lVar4 * 2)
      ;
      lVar2 = lVar4;
    }
    *piVar3 = iVar1 - param_3;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] - param_3;
  return;
}



/* Entry: 1086af86c; end: 1086af8af;  */

void FUN_1086af86c(ulong *param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x21;
  
  if (0 < param_3) {
    func_0x0001086b0f6c();
    if (param_4 != 0) {
      func_0x0001086b0274(*unaff_x21);
      func_0x0001086b0a90();
    }
    func_0x0001086b0ed4();
    if ((*param_1 & 1) == 0) {
      if ((param_2 == 0) && (param_3 == 1)) {
        *param_1 = 0;
      }
    }
    else {
      piVar2 = (int *)(*param_1 - 1);
      iVar1 = *piVar2;
      lVar4 = (long)(param_3 + param_2);
      while (lVar3 = lVar4 + 1, lVar4 < iVar1) {
        *(undefined8 *)(piVar2 + (long)param_3 * -2 + lVar3 * 2) =
             *(undefined8 *)(piVar2 + lVar3 * 2);
        lVar4 = lVar3;
      }
      *piVar2 = iVar1 - param_3;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] - param_3;
    return;
  }
  return;
}



/* Entry: 1086af8b0; end: 1086af91f;  */

undefined8 FUN_1086af8b0(void)

{
  undefined8 unaff_x19;
  
  func_0x0001086b07b0();
  func_0x0001086af8d4();
  func_0x0001086b050c();
  FUN_1086af920();
  return unaff_x19;
}



/* Entry: 1086af920; end: 1086af937;  */

void FUN_1086af920(long *param_1)

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



/* Entry: 1086af938; end: 1086af96b;  */

void FUN_1086af938(void)

{
  func_0x0001086af950();
  return;
}



/* Entry: 1086af96c; end: 1086afb27;  */

undefined1  [16] FUN_1086af96c(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long *plVar7;
  long *extraout_x9_00;
  long *plVar8;
  ulong extraout_x10;
  long *plVar9;
  long *plVar10;
  long *unaff_x25;
  ulong uVar11;
  undefined1 auVar12 [16];
  long *in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  func_0x0001086b0c34();
  plVar7 = param_1;
  func_0x0001086b0e14();
  plVar10 = (long *)param_1[1];
  plVar8 = plVar7;
  if (plVar10 != (long *)0x0) {
    uVar11 = (long)plVar10 - 1;
    if (((ulong)plVar10 & uVar11) == 0) {
      unaff_x25 = (long *)(uVar11 & (ulong)plVar7);
      in_ZR = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)plVar7 - (long)plVar10 < 0;
      in_ZR = plVar7 == plVar10;
      unaff_x25 = plVar7;
      if (plVar10 <= plVar7) {
        func_0x0001086b0adc();
      }
    }
    plVar9 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_1086afa24;
          plVar5 = (long *)plVar9[1];
          in_NG = (long)plVar5 - (long)plVar7 < 0;
          in_ZR = plVar5 == plVar7;
          if (!(bool)in_ZR) break;
          plVar8 = param_1 + 4;
          func_0x00010728905c(plVar8,plVar9 + 2,param_2);
          if (((ulong)plVar8 & 1) != 0) {
            uVar4 = 0;
            goto LAB_1086afb10;
          }
        }
        if (((ulong)plVar10 & uVar11) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar11);
        }
        else if (plVar10 <= plVar5) {
          uVar1 = 0;
          if (plVar10 != (long *)0x0) {
            uVar1 = (ulong)plVar5 / (ulong)plVar10;
          }
          plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar10);
        }
        in_NG = (long)plVar5 - (long)unaff_x25 < 0;
        in_ZR = plVar5 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_1086afa24:
  plVar5 = param_1 + 2;
  func_0x000107c32560();
  in_stack_00000018 = 1;
  *plVar8 = 0;
  plVar8[1] = (long)plVar7;
  lVar6 = *param_3;
  plVar8[3] = param_3[1];
  plVar8[2] = lVar6;
  in_stack_00000008 = plVar8;
  in_stack_00000010 = plVar5;
  func_0x0001086b0124();
  if ((plVar10 == (long *)0x0) || (func_0x0001086b0a10(), plVar8 = unaff_x25, (bool)in_NG)) {
    func_0x0001086b04dc();
    bVar2 = (long *)0x2 < plVar10;
    uVar3 = plVar10 == (long *)0x3;
    func_0x0001086b00f0();
    uVar4 = extraout_x8;
    if (!bVar2 || (bool)uVar3) {
      uVar4 = extraout_x9;
    }
    func_0x000107c29008(param_1,uVar4);
    func_0x0001086b0b04();
    if ((bool)uVar3) {
      in_ZR = 1;
      plVar8 = (long *)(extraout_x8_00 & (ulong)plVar7);
    }
    else {
      in_ZR = plVar7 == plVar10;
      plVar8 = plVar7;
      if (plVar10 <= plVar7) {
        func_0x0001086b0adc();
        plVar8 = unaff_x25;
      }
    }
  }
  plVar9 = in_stack_00000008;
  lVar6 = *param_1;
  plVar7 = *(long **)(lVar6 + (long)plVar8 * 8);
  if (plVar7 == (long *)0x0) {
    *in_stack_00000008 = *plVar5;
    *plVar5 = (long)in_stack_00000008;
    *(long **)(lVar6 + (long)plVar8 * 8) = plVar5;
    if (*in_stack_00000008 != 0) {
      func_0x0001086b0b24();
      if ((bool)in_ZR) {
        plVar8 = (long *)((ulong)extraout_x9_00 & extraout_x10);
      }
      else {
        plVar8 = extraout_x9_00;
        if (plVar10 <= extraout_x9_00) {
          uVar11 = 0;
          if (plVar10 != (long *)0x0) {
            uVar11 = (ulong)extraout_x9_00 / (ulong)plVar10;
          }
          plVar8 = (long *)((long)extraout_x9_00 - uVar11 * (long)plVar10);
        }
      }
      *(long **)(extraout_x8_01 + (long)plVar8 * 8) = plVar9;
    }
  }
  else {
    *in_stack_00000008 = *plVar7;
    *plVar7 = (long)in_stack_00000008;
  }
  in_stack_00000008 = (long *)0x0;
  func_0x0001086b0b44();
  FUN_1086afb28(&stack0x00000008);
  uVar4 = 1;
LAB_1086afb10:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = plVar9;
  return auVar12;
}



/* Entry: 1086afb28; end: 1086afb47;  */

void FUN_1086afb28(void)

{
  func_0x0001086b050c();
  FUN_1086afb48();
  return;
}



/* Entry: 1086afb48; end: 1086afb5f;  */

void FUN_1086afb48(long *param_1,long param_2)

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



/* Entry: 1086afb60; end: 1086afc2f;  */

long FUN_1086afb60(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar5 = (long *)param_1[1];
  if ((plVar5 != (long *)0x0) && (param_1[3] != 0)) {
    plVar2 = param_1;
    func_0x0001086b0e14();
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)((ulong)plVar2 & uVar6);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        plVar3 = (long *)plVar4[1];
        if (plVar3 != plVar2) break;
        plVar3 = param_1 + 4;
        func_0x00010728905c(plVar3,plVar4 + 2,param_2);
        if ((int)plVar3 != 0) {
          return (long)plVar4;
        }
      }
      if (((ulong)plVar5 & uVar6) == 0) {
        plVar3 = (long *)((ulong)plVar3 & uVar6);
      }
      else if (plVar5 <= plVar3) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar5;
        }
        plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar5);
      }
    } while (plVar3 == plVar7);
  }
  return 0;
}



/* Entry: 1086afc30; end: 1086afc7f;  */

long FUN_1086afc30(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    func_0x0001086aff84();
    func_0x0001086aff98();
    func_0x0001086b00c4();
    func_0x0001086b03f4();
    func_0x0001086b0354();
  }
  return param_1 + 8;
}



/* Entry: 1086afc80; end: 1086afca3;  */

void FUN_1086afc80(void)

{
  undefined1 auStack_38 [24];
  
  func_0x0001086b0aa0();
  func_0x0001005ecf0c(auStack_38);
  func_0x00010061f6bc(auStack_38);
  func_0x00010061fa30();
  return;
}



/* Entry: 1086afca4; end: 1086afd07;  */

void FUN_1086afca4(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_608 [1496];
  
  func_0x000107c324fc();
  func_0x000107c28e64();
  if ((param_1 & 1) == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c29260(auStack_608,**(undefined8 **)(unaff_x20 + 0x18));
    func_0x000107c27aa8(uVar1,auStack_608);
    func_0x000107c27a10(auStack_608);
  }
  return;
}



/* Entry: 1086afd08; end: 1086afd2b;  */

void FUN_1086afd08(void)

{
  return;
}



/* Entry: 1086afd2c; end: 1086afd77;  */

void FUN_1086afd2c(void)

{
  func_0x000107c3249c();
  FUN_1086afd78();
  return;
}



/* Entry: 1086afd78; end: 1086afdeb;  */

void FUN_1086afd78(void)

{
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32464();
  func_0x000107c325a8();
  while ((((*(byte *)(unaff_x20 + 0x10) & 1) != 0 || ((*(byte *)(unaff_x19 + 0x10) & 1) != 0)) &&
         (func_0x0001086b0720(), extraout_x8 != extraout_x9))) {
    func_0x000107c2902c();
    func_0x000107c27adc();
    func_0x000107c29030();
  }
  func_0x000107c32524();
  func_0x00010867b9d0();
  return;
}



/* Entry: 1086afdec; end: 1086afe1b;  */

void FUN_1086afdec(void)

{
  func_0x0001086b0c58();
  FUN_1086afe1c();
  return;
}



/* Entry: 1086afe1c; end: 1086afe4f;  */

void FUN_1086afe1c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32464();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 8) {
    func_0x0001086b0588();
    FUN_10867c274();
  }
  return;
}



/* Entry: 1086afe50; end: 1086afef7;  */

void FUN_1086afe50(long param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_30;
  func_0x0001086b0550();
  if (param_1 == 0) {
    func_0x0001086b0808();
    if (param_1 == 0) {
      func_0x0001086b09f4();
      return;
    }
    FUN_10802bcb8();
    func_0x0001086b023c();
  }
  else {
    FUN_10802bcb8();
    func_0x0001086b023c();
  }
  func_0x00010bdb2a88();
  func_0x00010ae6c700();
  func_0x0001086b0550();
  if (puVar1 == (undefined1 *)0x0) {
    func_0x0001086b0808();
    if (puVar1 == (undefined1 *)0x0) {
      func_0x0001086b09f4();
      return;
    }
    FUN_10802bcb8();
    func_0x0001086b023c();
  }
  else {
    FUN_10802bcb8();
    func_0x0001086b023c();
  }
  func_0x00010bdb2a88();
  func_0x00010ae6c700(auStack_60);
  return;
}



/* Entry: 1086afef8; end: 1086b0c8f;  */

void FUN_1086afef8(void)

{
  return;
}



/* Entry: 1086b0c90; end: 1086b0cbb;  */

undefined8 FUN_1086b0c90(long param_1,long param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_1086a7fe8(param_1 + 0x30,param_2 + 0x30);
  return *(undefined8 *)(unaff_x19 + 0x70);
}



/* Entry: 1086b0cbc; end: 1086b0feb;  */

void FUN_1086b0cbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000038);
  return;
}



/* Entry: 1086b0fec; end: 1086b10ab;  */

void FUN_1086b0fec(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1086b10ac(param_1,(param_2[1] - *param_2) / 0x30);
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    func_0x000107c27994(auStack_50,lVar2);
    uStack_38 = *(undefined8 *)(lVar2 + 0x20);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      uStack_38 = 0;
    }
    func_0x0001086b1420(param_1,auStack_50);
    func_0x000107c27914(auStack_50);
  }
  return;
}



/* Entry: 1086b10ac; end: 1086b111b;  */

void FUN_1086b10ac(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)(param_1[2] - *param_1 >> 5) < param_2) {
    if ((ulong)param_2 >> 0x3b != 0) {
      FUN_1086b111c();
      func_0x0001086b1598();
      func_0x0001086b15a0();
      plVar1 = (long *)&UNK_10f4b0cb0;
      func_0x000104bd47e8();
      lVar2 = param_2[1] + (*plVar1 - plVar1[1]);
      FUN_1086b1238(plVar1 + 2,*plVar1,plVar1[1],lVar2);
      param_2[1] = lVar2;
      lVar2 = *plVar1;
      plVar1[1] = lVar2;
      *plVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = plVar1[1];
      plVar1[1] = param_2[2];
      param_2[2] = lVar2;
      lVar2 = plVar1[2];
      plVar1[2] = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_1086b11b0(auStack_48,param_2,param_1[1] - *param_1 >> 5);
    func_0x0001086b15a8();
    func_0x0001086b1598();
  }
  return;
}



/* Entry: 1086b111c; end: 1086b112f;  */

void FUN_1086b111c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f4b0cb0;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + (*plVar1 - plVar1[1]);
  FUN_1086b1238(plVar1 + 2,*plVar1,plVar1[1],lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1086b1130; end: 1086b11af;  */

void FUN_1086b1130(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_1086b1238(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1086b11b0; end: 1086b121b;  */

long * FUN_1086b11b0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001086b11f8();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}


