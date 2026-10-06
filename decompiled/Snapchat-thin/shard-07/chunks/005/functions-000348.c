/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10565145c; end: 1056514f7;  */

void FUN_10565145c(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001056520c0();
  func_0x000105651f60();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  func_0x00010028acf0(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x58) = *(undefined8 *)(unaff_x19 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x70) = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  return;
}



/* Entry: 1056514f8; end: 105651533;  */

void FUN_1056514f8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x000105651f8c();
  if (!(bool)in_ZR) {
    func_0x000105651ee8((&PTR_FUN_1108a3bc8)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x58) = 0xffffffff;
  return;
}



/* Entry: 105651534; end: 105651543;  */

void FUN_105651534(void)

{
  return;
}



/* Entry: 105651544; end: 1056515eb;  */

void FUN_105651544(long param_1,long param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  long extraout_x9;
  long lVar3;
  long lVar4;
  int extraout_w12;
  long lStack_30;
  long lStack_28;
  
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  lVar3 = *(long *)(param_1 + 8);
  lStack_28 = *(long *)(param_1 + 0x10);
  lStack_30 = lVar3;
  if (lStack_28 != 0) {
    do {
      func_0x0001056520a0();
      puVar2 = extraout_x8;
      lVar3 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  bVar1 = (char)((int *)puVar2[7])[1] != '\x01';
  if (bVar1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (long)*(int *)puVar2[7];
  }
  FUN_1056543e4(*(undefined8 *)(lVar3 + 0x10),*(undefined4 *)*puVar2,*(undefined4 *)puVar2[1],
                *(undefined4 *)puVar2[2],puVar2[3],puVar2[4],*(undefined8 *)puVar2[5],puVar2[6],
                lVar4,!bVar1,puVar2[8]);
  FUN_10564e49c(&lStack_30);
  return;
}



/* Entry: 1056515ec; end: 1056515fb;  */

void FUN_1056515ec(void)

{
  return;
}



/* Entry: 1056515fc; end: 10565166f;  */

void FUN_1056515fc(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  long extraout_x9;
  long lVar4;
  int extraout_w12;
  
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  lVar4 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x0001056520a0();
      puVar3 = extraout_x8;
      lVar4 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  bVar1 = (char)((int *)*puVar3)[1] != '\x01';
  if (bVar1) {
    lVar2 = 0;
  }
  else {
    lVar2 = (long)*(int *)*puVar3;
  }
  FUN_1056544f4(*(undefined8 *)(lVar4 + 0x10),lVar2,!bVar1,puVar3[1],puVar3[2]);
  func_0x000105652058();
  return;
}



/* Entry: 105651670; end: 10565167f;  */

void FUN_105651670(void)

{
  return;
}



/* Entry: 105651680; end: 1056516bf;  */

void FUN_105651680(long param_1)

{
  FUN_1056516f8();
  *(undefined1 *)(param_1 + 0x98) = 1;
  return;
}



/* Entry: 1056516c0; end: 1056516f7;  */

void FUN_1056516c0(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001056520c0();
  func_0x000105651f48();
  func_0x000100066230();
  func_0x0001056520cc();
  func_0x000105652034();
  func_0x000105651f9c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x90) = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x88) = uVar1;
  return;
}



/* Entry: 1056516f8; end: 10565171b;  */

void FUN_1056516f8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000105651f60();
  func_0x000105651fc4();
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return;
}



/* Entry: 10565171c; end: 10565177f;  */

void FUN_10565171c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000105652060();
  _bzero();
  unaff_x19[1] = 0;
  if (*(char *)(unaff_x19 + 0x15) != '\0') {
    func_0x00010565169c(unaff_x19 + 2);
  }
  FUN_10564a63c(unaff_x20 + 8);
  uVar1 = *unaff_x19;
  *unaff_x19 = 0;
  func_0x00010054cac4(uVar1);
  FUN_10564a63c(unaff_x19 + 2);
  return;
}



/* Entry: 105651780; end: 1056517bb;  */

undefined1 * FUN_105651780(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x98] = 0;
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_105651680(param_1);
  }
  return param_1;
}



/* Entry: 1056517bc; end: 1056517f7;  */

void FUN_1056517bc(void)

{
  long unaff_x20;
  
  func_0x000105652060();
  FUN_1056517f8();
  FUN_1056517f8();
  FUN_105651bd0(unaff_x20 + 8);
  return;
}



/* Entry: 1056517f8; end: 105651833;  */

void FUN_1056517f8(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000105652148();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0x90) = 0;
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_105651834((undefined1 *)(param_1 + 8),param_2 + 8);
  }
  return;
}



/* Entry: 105651834; end: 10565184f;  */

void FUN_105651834(long param_1)

{
  FUN_105651850();
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}



/* Entry: 105651850; end: 10565186b;  */

void FUN_105651850(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x30;
  
  func_0x000105651f60();
  func_0x000105651fc4(param_1,param_2,unaff_x30);
  return;
}



/* Entry: 10565186c; end: 10565188f;  */

void FUN_10565186c(long param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    FUN_1056512b8();
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  return;
}



/* Entry: 105651890; end: 1056518bf;  */

void FUN_105651890(void)

{
  func_0x0001056520c0();
  func_0x000105651f48();
  func_0x000100066230();
  func_0x0001056520cc();
  func_0x000105652034();
  func_0x000105651f9c();
  return;
}



/* Entry: 1056518c0; end: 1056518cb;  */

undefined1  [16] FUN_1056518c0(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x0001056520e0();
  if (param_1 < 0x1e1e1e1e1e1e1e2) {
    lVar1 = param_1 * 0x88;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x88;
      FUN_1056512b8();
    }
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1056518cc; end: 10565194f;  */

undefined1  [16] FUN_1056518cc(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 < 0x1e1e1e1e1e1e1e2) {
    lVar1 = param_1 * 0x88;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x88;
      FUN_1056512b8();
    }
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 105651950; end: 1056519c7;  */

void FUN_105651950(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_a8 [136];
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (func_0x00010054c3a4(), (int)lVar2 != 0)) {
    FUN_1056519fc(auStack_a8,*param_1);
    FUN_1056519c8(param_1 + 1,auStack_a8);
    FUN_1056512b8(auStack_a8);
    return;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[0x12] == '\x01') {
    FUN_1056512b8();
    *(undefined1 *)(plVar1 + 0x11) = 0;
  }
  return;
}



/* Entry: 1056519c8; end: 1056519fb;  */

long FUN_1056519c8(long param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    FUN_105651890();
  }
  else {
    FUN_105651834();
  }
  return param_1;
}



/* Entry: 1056519fc; end: 105651acf;  */

void FUN_1056519fc(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  func_0x00010054c7ec();
  uVar1 = param_2;
  func_0x00010054c8f4();
  *param_1 = (int)uVar1;
  uVar1 = param_2;
  func_0x00010054c8f4(param_2,1);
  param_1[1] = (int)uVar1;
  uVar1 = param_2;
  func_0x00010054c8f4(param_2,2);
  param_1[2] = (int)uVar1;
  func_0x0001005ecf0c(param_1 + 4,param_2,3);
  func_0x0001005ecf0c(param_1 + 10,param_2,4);
  uVar1 = param_2;
  func_0x00010054c8f4(param_2,5);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x0001005ecf0c(param_1 + 0x12,param_2,6);
  uVar2 = 7;
  uVar1 = param_2;
  func_0x0001005f9230();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_1 + 0x1a) = uVar2;
  func_0x0001005ecf0c(param_1 + 0x1c,param_2,8);
  return;
}



/* Entry: 105651ad0; end: 105651afb;  */

long FUN_105651ad0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10565125c(param_1);
  }
  return param_1;
}



/* Entry: 105651afc; end: 105651b53;  */

void FUN_105651afc(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000105652148();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_105651b54((undefined1 *)(param_1 + 8),param_2 + 8);
    *(undefined1 *)(unaff_x19 + 0x90) = 1;
  }
  return;
}



/* Entry: 105651b54; end: 105651bcf;  */

void FUN_105651b54(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000105651fb8();
  func_0x000105651f48();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x28,unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x48,unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x70,unaff_x20 + 0x70);
  return;
}



/* Entry: 105651bd0; end: 105651bef;  */

void FUN_105651bd0(long param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    FUN_1056512b8();
  }
  return;
}



/* Entry: 105651bf0; end: 105651c53;  */

void FUN_105651bf0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000105652060();
  _bzero();
  unaff_x19[1] = 0;
  if (*(char *)(unaff_x19 + 0x13) != '\0') {
    FUN_10565186c(unaff_x19 + 2);
  }
  FUN_105651bd0(unaff_x20 + 8);
  uVar1 = *unaff_x19;
  *unaff_x19 = 0;
  func_0x00010054cac4(uVar1);
  FUN_105651bd0(unaff_x19 + 2);
  return;
}



/* Entry: 105651c54; end: 105651ca3;  */

undefined1  [16] FUN_105651c54(void)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  long alStack_28 [2];
  char cStack_18;
  
  FUN_105651ca4(alStack_28);
  bVar1 = cStack_18 == '\x01' && alStack_28[0] != 0;
  if (bVar1) {
    plVar3 = alStack_28;
    FUN_105651cbc();
    lVar2 = *plVar3;
  }
  else {
    lVar2 = 0;
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar2;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 105651ca4; end: 105651cbb;  */

void FUN_105651ca4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_2 = param_2 + 8;
  func_0x0001056520c0(param_1,param_2);
  FUN_105651d80(param_1 + 1,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 105651cbc; end: 105651d4b;  */

long * FUN_105651cbc(long *param_1)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_50,*param_1 + 0x58);
    func_0x0001004c3cd0(auStack_38,&UNK_10f2e1e06,auStack_50);
    func_0x000105652114();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  }
  return param_1 + 1;
}



/* Entry: 105651d4c; end: 105651d7f;  */

void FUN_105651d4c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001056520c0();
  FUN_105651d80(param_1 + 8,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 105651d80; end: 105651df3;  */

void FUN_105651d80(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
      return;
    }
  }
  else if (cVar1 == '\0') {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 1;
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined1 *)(param_2 + 1) = 0;
    }
  }
  else {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 1;
    if (*(char *)(param_1 + 1) == '\x01') {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  return;
}



/* Entry: 105651df4; end: 105651e27;  */

undefined8 * FUN_105651df4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00010054cac4(uVar1);
  return param_1;
}



/* Entry: 105651e28; end: 105651e77;  */

void FUN_105651e28(long param_1)

{
  FUN_10563ab1c();
  *(undefined4 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 105651e78; end: 105651ecb;  */

void FUN_105651e78(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  long extraout_x9;
  long lVar2;
  int extraout_w12;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  lVar2 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x0001056520a0();
      puVar1 = extraout_x8;
      lVar2 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  FUN_1056545a8(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)*puVar1);
  func_0x000105652058();
  return;
}



/* Entry: 105651ecc; end: 10565215b;  */

void FUN_105651ecc(void)

{
  return;
}



/* Entry: 10565215c; end: 1056521c3;  */

void FUN_10565215c(void)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *in_x3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar4;
  long lVar5;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [7];
  undefined8 uStack_138;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [48];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_28;
  
  func_0x000105652548();
  uStack_28 = extraout_x8;
  func_0x0001056524e0();
  func_0x000105652538();
  func_0x000105652590();
  func_0x000105652500();
  func_0x000105652530();
  func_0x00010565256c();
  func_0x000105652510(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105652524();
  func_0x00010565256c();
  func_0x000105652558();
  pcStack_68 = FUN_1056521c4;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000105652548();
  uStack_98 = extraout_x8_00;
  func_0x0001056524e0();
  func_0x000105652574();
  uStack_a0 = in_x3[2];
  uStack_a8 = in_x3[1];
  uStack_b0 = *in_x3;
  in_x3[1] = 0;
  in_x3[2] = 0;
  *in_x3 = 0;
  func_0x0001000e3098(auStack_f8,auStack_e0,3);
  func_0x000105652590();
  func_0x000105652500();
  func_0x000105652530();
  lVar4 = 0x30;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0 + lVar4);
    lVar4 = lVar4 + -0x18;
    bVar1 = lVar4 == -0x18;
  } while (!bVar1);
  func_0x000105652510(uStack_98);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105652524();
  lVar4 = 0x30;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0 + lVar4);
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != -0x18);
  func_0x000105652558();
  pcStack_108 = FUN_105652294;
  ppuStack_110 = &puStack_70;
  func_0x000105652548();
  uStack_138 = extraout_x8_01;
  func_0x0001056524e0();
  func_0x000105652574();
  func_0x0001000e3098(auStack_188,auStack_170,2);
  func_0x000105652590();
  puVar3 = &UNK_1108a3cd0;
  func_0x000105652500();
  func_0x000105652530();
  lVar4 = 0x18;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev((long)auStack_170 + lVar4);
    lVar4 = lVar4 + -0x18;
    bVar1 = lVar4 == -0x18;
  } while (!bVar1);
  func_0x000105652510(uStack_138);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105652524();
  lVar5 = 0x18;
  do {
    puVar2 = (undefined8 *)((long)auStack_170 + lVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar5 = lVar5 + -0x18;
  } while (lVar5 != -0x18);
  func_0x000105652558();
  pcStack_198 = FUN_10565234c;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  lStack_1b0 = lVar5;
  lStack_1a8 = lVar4;
  pppuStack_1a0 = &ppuStack_110;
  (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,&UNK_1108a3d20,&uStack_1c8,puVar3);
  func_0x000105652530();
  return;
}



/* Entry: 1056521c4; end: 105652293;  */

void FUN_1056521c4(void)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *in_x3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar4;
  long lVar5;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [7];
  undefined8 uStack_d8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [48];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000105652548();
  uStack_38 = extraout_x8;
  func_0x0001056524e0();
  func_0x000105652574();
  uStack_40 = in_x3[2];
  uStack_48 = in_x3[1];
  uStack_50 = *in_x3;
  in_x3[1] = 0;
  in_x3[2] = 0;
  *in_x3 = 0;
  func_0x0001000e3098(auStack_98,auStack_80,3);
  func_0x000105652590();
  func_0x000105652500();
  func_0x000105652530();
  lVar4 = 0x30;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80 + lVar4);
    lVar4 = lVar4 + -0x18;
    bVar1 = lVar4 == -0x18;
  } while (!bVar1);
  func_0x000105652510(uStack_38);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105652524();
  lVar4 = 0x30;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80 + lVar4);
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != -0x18);
  func_0x000105652558();
  pcStack_a8 = FUN_105652294;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000105652548();
  uStack_d8 = extraout_x8_00;
  func_0x0001056524e0();
  func_0x000105652574();
  func_0x0001000e3098(auStack_128,auStack_110,2);
  func_0x000105652590();
  puVar3 = &UNK_1108a3cd0;
  func_0x000105652500();
  func_0x000105652530();
  lVar4 = 0x18;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev((long)auStack_110 + lVar4);
    lVar4 = lVar4 + -0x18;
    bVar1 = lVar4 == -0x18;
  } while (!bVar1);
  func_0x000105652510(uStack_d8);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105652524();
  lVar5 = 0x18;
  do {
    puVar2 = (undefined8 *)((long)auStack_110 + lVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar5 = lVar5 + -0x18;
  } while (lVar5 != -0x18);
  func_0x000105652558();
  pcStack_138 = FUN_10565234c;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  lStack_150 = lVar5;
  lStack_148 = lVar4;
  ppuStack_140 = &puStack_b0;
  (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,&UNK_1108a3d20,&uStack_168,puVar3);
  func_0x000105652530();
  return;
}



/* Entry: 105652294; end: 10565234b;  */

void FUN_105652294(void)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  long lVar5;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [7];
  undefined8 uStack_38;
  
  func_0x000105652548();
  uStack_38 = extraout_x8;
  func_0x0001056524e0();
  func_0x000105652574();
  func_0x0001000e3098(auStack_88,auStack_70,2);
  func_0x000105652590();
  puVar3 = &UNK_1108a3cd0;
  func_0x000105652500();
  func_0x000105652530();
  lVar4 = 0x18;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev((long)auStack_70 + lVar4);
    lVar4 = lVar4 + -0x18;
    bVar1 = lVar4 == -0x18;
  } while (!bVar1);
  func_0x000105652510(uStack_38);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105652524();
  lVar5 = 0x18;
  do {
    puVar2 = (undefined8 *)((long)auStack_70 + lVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar5 = lVar5 + -0x18;
  } while (lVar5 != -0x18);
  func_0x000105652558();
  pcStack_98 = FUN_10565234c;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = lVar5;
  lStack_a8 = lVar4;
  puStack_a0 = &stack0xfffffffffffffff0;
  (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,&UNK_1108a3d20,&uStack_c8,puVar3);
  func_0x000105652530();
  return;
}



/* Entry: 10565234c; end: 10565239f;  */

void FUN_10565234c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,&UNK_1108a3d20,&uStack_38,param_2);
  func_0x000105652530();
  return;
}



/* Entry: 1056523a0; end: 105652407;  */

undefined8 FUN_1056523a0(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  
  func_0x000105652548();
  func_0x0001056524e0();
  func_0x000105652538();
  func_0x000105652590();
  func_0x000105652500();
  func_0x000105652530();
  func_0x00010565256c();
  func_0x000105652510(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105652524();
    func_0x00010565256c();
    func_0x000105652558();
    func_0x000105652548();
    func_0x0001056524e0();
    func_0x000105652538();
    func_0x000105652590();
    func_0x000105652500();
    func_0x000105652530();
    func_0x00010565256c();
    func_0x000105652510(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000105652524();
      func_0x00010565256c();
      func_0x000105652558();
      if ((bRam0000000113819d98 & 1) == 0) {
        uVar1 = 0x113819d98;
        ___cxa_guard_acquire();
        if ((int)uVar1 != 0) {
          func_0x000100077ef8();
          uRam0000000113819d90 = uVar1;
          ___cxa_guard_release(0x113819d98);
        }
      }
      return 0x113819d90;
    }
  }
  return param_1;
}



/* Entry: 105652408; end: 10565246f;  */

undefined8 FUN_105652408(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  
  func_0x000105652548();
  func_0x0001056524e0();
  func_0x000105652538();
  func_0x000105652590();
  func_0x000105652500();
  func_0x000105652530();
  func_0x00010565256c();
  func_0x000105652510(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000105652524();
  func_0x00010565256c();
  func_0x000105652558();
  if ((bRam0000000113819d98 & 1) == 0) {
    uVar1 = 0x113819d98;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      func_0x000100077ef8();
      uRam0000000113819d90 = uVar1;
      ___cxa_guard_release(0x113819d98);
    }
  }
  return 0x113819d90;
}



/* Entry: 105652470; end: 1056524df;  */

undefined8 FUN_105652470(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000113819d98 & 1) == 0) {
    uVar1 = 0x113819d98;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      func_0x000100077ef8();
      uRam0000000113819d90 = uVar1;
      ___cxa_guard_release(0x113819d98);
    }
  }
  return 0x113819d90;
}



/* Entry: 1056524e0; end: 10565259b;  */

void FUN_1056524e0(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 10565259c; end: 105652663;  */

undefined1 *
FUN_10565259c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x20;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [64];
  undefined8 uStack_160;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [64];
  undefined8 uStack_70;
  
  FUN_1056527b4();
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uStack_70 = param_4[2];
  func_0x0001056527f4(*param_4);
  puVar4 = (undefined8 *)0x5;
  func_0x0001000e3098(auStack_c8,auStack_b0);
  func_0x000105652834(*(undefined8 *)(*unaff_x20 + 0x18));
  func_0x000105652844();
  lVar5 = 0x60;
  do {
    puVar2 = auStack_b0 + lVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar5 = lVar5 + -0x18;
    bVar1 = lVar5 == -0x18;
  } while (!bVar1);
  func_0x00010565284c();
  if (bVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000105652844();
  lVar5 = 0x60;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0 + lVar5);
    lVar5 = lVar5 + -0x18;
  } while (lVar5 != -0x18);
  func_0x000105652864();
  FUN_1056527b4();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uStack_160 = param_4[2];
  func_0x0001056527f4(*param_4);
  uStack_120 = param_7[1];
  uStack_128 = *param_7;
  uStack_118 = param_7[2];
  param_7[1] = 0;
  param_7[2] = 0;
  *param_7 = 0;
  func_0x0001000e3098(auStack_1b8,auStack_1a0,6);
  func_0x000105652834(*(undefined8 *)(lRamffffffffffffffe8 + 0x18));
  func_0x000105652844();
  lVar5 = 0x78;
  do {
    puVar2 = auStack_1a0 + lVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar5 = lVar5 + -0x18;
    bVar1 = lVar5 == -0x18;
  } while (!bVar1);
  func_0x00010565284c();
  if (bVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000105652844();
  lVar5 = 0x78;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a0 + lVar5);
    lVar5 = lVar5 + -0x18;
  } while (lVar5 != -0x18);
  func_0x000105652864();
  if ((bRam0000000113819da8 & 1) == 0) {
    uVar3 = 0x113819da8;
    ___cxa_guard_acquire();
    if ((int)uVar3 != 0) {
      func_0x000100077ef8();
      uRam0000000113819da0 = uVar3;
      ___cxa_guard_release(0x113819da8);
    }
  }
  return (undefined1 *)0x113819da0;
}



/* Entry: 105652664; end: 105652743;  */

undefined1 *
FUN_105652664(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x20;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [64];
  undefined8 uStack_90;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_1056527b4();
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uStack_90 = param_4[2];
  func_0x0001056527f4(*param_4);
  uStack_50 = param_7[1];
  uStack_58 = *param_7;
  uStack_48 = param_7[2];
  param_7[1] = 0;
  param_7[2] = 0;
  *param_7 = 0;
  func_0x0001000e3098(auStack_e8,auStack_d0,6);
  func_0x000105652834(*(undefined8 *)(*unaff_x20 + 0x18));
  func_0x000105652844();
  lVar4 = 0x78;
  do {
    puVar2 = auStack_d0 + lVar4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar4 = lVar4 + -0x18;
    bVar1 = lVar4 == -0x18;
  } while (!bVar1);
  func_0x00010565284c();
  if (bVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000105652844();
  lVar4 = 0x78;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0 + lVar4);
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != -0x18);
  func_0x000105652864();
  if ((bRam0000000113819da8 & 1) == 0) {
    uVar3 = 0x113819da8;
    ___cxa_guard_acquire();
    if ((int)uVar3 != 0) {
      func_0x000100077ef8();
      uRam0000000113819da0 = uVar3;
      ___cxa_guard_release(0x113819da8);
    }
  }
  return (undefined1 *)0x113819da0;
}



/* Entry: 105652744; end: 1056527b3;  */

undefined8 FUN_105652744(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000113819da8 & 1) == 0) {
    uVar1 = 0x113819da8;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      func_0x000100077ef8();
      uRam0000000113819da0 = uVar1;
      ___cxa_guard_release(0x113819da8);
    }
  }
  return 0x113819da0;
}



/* Entry: 1056527b4; end: 10565286b;  */

void FUN_1056527b4(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 10565286c; end: 10565291f;  */

undefined8 * FUN_10565286c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined1 uStack_60;
  undefined1 uStack_30;
  long lStack_28;
  
  puVar1 = &uStack_80;
  puVar2 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = 0x100000000;
  func_0x00010002b838(auStack_78,&UNK_10f2e2596);
  uStack_60 = 0;
  uStack_30 = 0;
  uVar3 = 1;
  func_0x00010054ae4c(param_1,1,&UNK_10f2e1f94,&uStack_80,1);
  func_0x00010054b180();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010054b180();
  func_0x000105652fe8();
  *puVar2 = &PTR_FUN_1108a3ff0;
  puVar2[1] = uVar3;
  FUN_105652978(puVar2 + 2,uVar3);
  FUN_1056529b8(puVar2 + 3,uVar3);
  return puVar2;
}



/* Entry: 105652920; end: 105652977;  */

undefined8 * FUN_105652920(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_1108a3ff0;
  param_1[1] = param_2;
  FUN_105652978(param_1 + 2,param_2);
  FUN_1056529b8(param_1 + 3,param_2);
  return param_1;
}



/* Entry: 105652978; end: 1056529b7;  */

void FUN_105652978(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x300;
  __Znwm();
  FUN_1056541fc();
  *param_1 = uVar1;
  return;
}



/* Entry: 1056529b8; end: 1056529f7;  */

void FUN_1056529b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x798;
  __Znwm();
  FUN_105652ff0();
  *param_1 = uVar1;
  return;
}



/* Entry: 1056529f8; end: 105652aaf;  */

undefined8 * FUN_1056529f8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1108a3ff0;
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 != 0) {
    func_0x00010054c360(lVar1 + 0x710);
    func_0x00010054c360(lVar1 + 0x688);
    func_0x00010054c360(lVar1 + 0x600);
    func_0x00010054c360(lVar1 + 0x578);
    func_0x00010054c360(lVar1 + 0x4f0);
    func_0x00010054c360(lVar1 + 0x468);
    func_0x00010054c360(lVar1 + 0x3e0);
    func_0x00010054c360(lVar1 + 0x358);
    func_0x00010054c360(lVar1 + 0x2d0);
    func_0x000105652ce8(lVar1 + 600);
    func_0x000105652d68(lVar1 + 0x1e0);
    func_0x000105652de8(lVar1 + 0x168);
    func_0x000105652e68(lVar1 + 0xf0);
    func_0x000105652ee8(lVar1 + 0x78);
    func_0x000105652ee8(lVar1);
    __ZdlPv();
  }
  FUN_105652ac8(param_1 + 2);
  return param_1;
}



/* Entry: 105652ab0; end: 105652ab3;  */

undefined8 * FUN_105652ab0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1108a3ff0;
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 != 0) {
    func_0x00010054c360(lVar1 + 0x710);
    func_0x00010054c360(lVar1 + 0x688);
    func_0x00010054c360(lVar1 + 0x600);
    func_0x00010054c360(lVar1 + 0x578);
    func_0x00010054c360(lVar1 + 0x4f0);
    func_0x00010054c360(lVar1 + 0x468);
    func_0x00010054c360(lVar1 + 0x3e0);
    func_0x00010054c360(lVar1 + 0x358);
    func_0x00010054c360(lVar1 + 0x2d0);
    func_0x000105652ce8(lVar1 + 600);
    func_0x000105652d68(lVar1 + 0x1e0);
    func_0x000105652de8(lVar1 + 0x168);
    func_0x000105652e68(lVar1 + 0xf0);
    func_0x000105652ee8(lVar1 + 0x78);
    func_0x000105652ee8(lVar1);
    __ZdlPv();
  }
  FUN_105652ac8(param_1 + 2);
  return param_1;
}



/* Entry: 105652ab4; end: 105652ac7;  */

void FUN_105652ab4(void)

{
  FUN_1056529f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105652ac8; end: 105652aeb;  */

undefined8 FUN_105652ac8(undefined8 param_1)

{
  FUN_105652aec(param_1,0);
  return param_1;
}



/* Entry: 105652aec; end: 105652b03;  */

void FUN_105652aec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_105652b20(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105652b04; end: 105652b1f;  */

void FUN_105652b04(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_105652b20(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105652b20; end: 105652b8b;  */

void FUN_105652b20(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010054c360(param_1 + 0x278);
  func_0x00010054c360(param_1 + 0x1f0);
  func_0x00010054c360(param_1 + 0x168);
  func_0x000105652b68(param_1 + 0xf0);
  func_0x000105652be8(param_1 + 0x78);
  func_0x000105652fbc(param_1);
  FUN_105652c8c();
  func_0x000105652fb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(unaff_x19);
  return;
}



/* Entry: 105652b8c; end: 105652bcb;  */

void FUN_105652b8c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_105652f68();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_105652bcc();
    }
  }
  return;
}



/* Entry: 105652bcc; end: 105652c0b;  */

void FUN_105652bcc(void)

{
  func_0x000105652f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105652c0c; end: 105652c4b;  */

void FUN_105652c0c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_105652f68();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_105652c4c();
    }
  }
  return;
}



/* Entry: 105652c4c; end: 105652c8b;  */

void FUN_105652c4c(void)

{
  func_0x000105652f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105652c8c; end: 105652ccb;  */

void FUN_105652c8c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_105652f68();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_105652ccc();
    }
  }
  return;
}



/* Entry: 105652ccc; end: 105652d0b;  */

void FUN_105652ccc(void)

{
  func_0x000105652f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105652d0c; end: 105652d4b;  */

void FUN_105652d0c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_105652f68();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_105652d4c();
    }
  }
  return;
}



/* Entry: 105652d4c; end: 105652d8b;  */

void FUN_105652d4c(void)

{
  func_0x000105652f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105652d8c; end: 105652dcb;  */

void FUN_105652d8c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_105652f68();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_105652dcc();
    }
  }
  return;
}



/* Entry: 105652dcc; end: 105652e0b;  */

void FUN_105652dcc(void)

{
  func_0x000105652f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105652e0c; end: 105652e4b;  */

void FUN_105652e0c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_105652f68();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_105652e4c();
    }
  }
  return;
}



/* Entry: 105652e4c; end: 105652e8b;  */

void FUN_105652e4c(void)

{
  func_0x000105652f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105652e8c; end: 105652ecb;  */

void FUN_105652e8c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_105652f68();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_105652ecc();
    }
  }
  return;
}



/* Entry: 105652ecc; end: 105652f0b;  */

void FUN_105652ecc(void)

{
  func_0x000105652f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105652f0c; end: 105652f4b;  */

void FUN_105652f0c(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_105652f68();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_105652f4c();
    }
  }
  return;
}



/* Entry: 105652f4c; end: 105652f67;  */

void FUN_105652f4c(void)

{
  func_0x000105652f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105652f68; end: 105652fef;  */

void FUN_105652f68(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(*param_1 + 8);
  lVar2 = *(long *)param_1[1];
  *(long **)(lVar2 + 8) = plVar1;
  *plVar1 = lVar2;
  param_1[2] = 0;
  return;
}



/* Entry: 105652ff0; end: 10565332f;  */

long FUN_105652ff0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10565393c(param_1,param_2,&UNK_10f2e25e3,0x8e);
  FUN_10565393c(lVar1 + 0x78,param_2,&UNK_10f2e2672,0x7a);
  *(undefined8 *)(param_1 + 0xf0) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = param_2;
  func_0x000105654138(param_1 + 0x138);
  *(long *)(param_1 + 0x150) = param_1 + 0x150;
  *(long *)(param_1 + 0x158) = param_1 + 0x150;
  *(undefined8 *)(param_1 + 0x168) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = param_2;
  func_0x000105654138(param_1 + 0x1b0);
  *(long *)(param_1 + 0x1c8) = param_1 + 0x1c8;
  *(long *)(param_1 + 0x1d0) = param_1 + 0x1c8;
  *(undefined8 *)(param_1 + 0x1e0) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = param_2;
  func_0x000105654138(param_1 + 0x228);
  *(long *)(param_1 + 0x240) = param_1 + 0x240;
  *(long *)(param_1 + 0x248) = param_1 + 0x240;
  *(undefined8 *)(param_1 + 600) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = param_2;
  func_0x000105654138(param_1 + 0x2a0);
  *(long *)(param_1 + 0x2b8) = param_1 + 0x2b8;
  *(long *)(param_1 + 0x2c0) = param_1 + 0x2b8;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  func_0x00010054bfa4(param_1 + 0x2d0,param_2,&UNK_10f2e2a11,0xa0);
  func_0x00010054bfa4(param_1 + 0x358,param_2,&UNK_10f2e2ab2,0x39);
  func_0x00010054bfa4(param_1 + 0x3e0,param_2,&UNK_10f2e2aec,0x25);
  func_0x00010054bfa4(param_1 + 0x468,param_2,&UNK_10f2e2b12,0x97);
  func_0x00010054bfa4(param_1 + 0x4f0,param_2,&UNK_10f2e2baa,0x2f);
  func_0x00010054bfa4(param_1 + 0x578,param_2,&UNK_10f2e2bda,0x36);
  func_0x00010054bfa4(param_1 + 0x600,param_2,&UNK_10f2e2c11,0x2e);
  func_0x00010054bfa4(param_1 + 0x688,param_2,&UNK_10f2e2c40,0x1a);
  func_0x00010054bfa4(param_1 + 0x710,param_2,&UNK_10f2e2c5b,0xb0);
  return param_1;
}



/* Entry: 105653330; end: 10565339b;  */

void FUN_105653330(void)

{
  FUN_1056539a8();
  func_0x0001005ecd38();
  func_0x0001056541c8();
  return;
}



/* Entry: 10565339c; end: 1056533f3;  */

void FUN_10565339c(long param_1)

{
  FUN_1056539a8(param_1 + 0x78);
  func_0x0001056541c8();
  return;
}



/* Entry: 1056533f4; end: 105653417;  */

void FUN_1056533f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_105653418(param_1 + 0xf0,param_2,&uStack_18);
  return;
}



/* Entry: 105653418; end: 105653453;  */

void FUN_105653418(undefined8 param_1)

{
  FUN_105653b08();
  func_0x000105653c84();
  func_0x000105653cbc(param_1,&stack0xffffffffffffffd8);
  return;
}



/* Entry: 105653454; end: 1056535fb;  */

void FUN_105653454(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long *extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long *extraout_x9;
  long *plVar10;
  long *extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  long *unaff_x23;
  long lStack_1f0;
  long *plStack_1e8;
  undefined1 uStack_1e0;
  undefined **ppuStack_1d8;
  long lStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  long lStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined **ppuStack_e8;
  long lStack_60;
  undefined8 uStack_58;
  
  plVar4 = param_2;
  lVar8 = param_3;
  func_0x000105654030();
  plVar1 = plVar4 + 0x3c;
  uStack_58 = extraout_x8;
  func_0x0001056540d8();
  plVar2 = param_2 + 0x48;
  plVar10 = param_2 + 0x49;
  do {
    uVar3 = (long *)*plVar10 == plVar2;
    if ((bool)uVar3) {
      func_0x0001056540c8();
      lVar8 = param_2[0x44];
      func_0x0001056540b8();
      ppuStack_e8 = &PTR_FUN_1108a4220;
      lStack_60 = 0;
      func_0x0001056540d0();
      func_0x000105654100();
      func_0x000105653fd4();
      plVar4[1] = (long)plVar2;
      plVar4[2] = (long)&PTR_FUN_1108a4220;
      plVar4[0x13] = lStack_60;
      lVar9 = param_2[0x48];
      *plVar4 = lVar9;
      *(long **)(lVar9 + 8) = plVar4;
      param_2[0x48] = (long)plVar4;
      param_2[0x4a] = param_2[0x4a] + 1;
      func_0x000105654010();
      goto LAB_10565353c;
    }
    func_0x000105654188();
    plVar10 = extraout_x9;
  } while (extraout_x10 != 0);
  uVar3 = plVar2 == (long *)*extraout_x9;
  plVar4 = unaff_x23;
  if (!(bool)uVar3) {
    func_0x000105654020();
    func_0x00010565417c();
    *plVar2 = extraout_x8_00;
    *(long **)(extraout_x8_00 + 8) = plVar2;
  }
LAB_10565353c:
  lVar9 = *plVar2 + 0x10;
  *(long **)(*plVar2 + 0x98) = plVar1;
  func_0x000105654018();
  func_0x000105654150();
  *param_1 = lVar9;
  param_1[1] = lVar9;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  lVar5 = lVar9;
  func_0x00010054c3a4();
  if ((int)lVar5 != 0) {
    lVar5 = lVar9;
    func_0x00010054c7ec();
    lVar8 = 0;
    func_0x00010054c8f4();
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[2] = lVar5;
  }
  func_0x000105653fb4(uStack_58);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = lVar5;
  func_0x000105654018();
  func_0x000105654060();
  func_0x0001056541e4();
  pcStack_108 = FUN_1056535fc;
  lVar7 = lVar6;
  plStack_140 = plVar2;
  plStack_138 = plVar4;
  lStack_130 = lVar9;
  plStack_128 = plVar1;
  lStack_120 = param_3;
  lStack_118 = lVar5;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x000105654030();
  plVar1 = (long *)(lVar7 + 600);
  uStack_1e0 = 1;
  plVar4 = plVar1;
  lStack_1f0 = lVar8;
  plStack_1e8 = plVar1;
  uStack_148 = extraout_x8_02;
  __ZNSt3__15mutex4lockEv();
  plVar2 = (long *)(lVar6 + 0x2b8);
  plVar10 = (long *)(lVar6 + 0x2c0);
  do {
    uVar3 = (long *)*plVar10 == plVar2;
    if ((bool)uVar3) {
      func_0x0001056540c8();
      func_0x0001056540b8();
      ppuStack_1d8 = &PTR_FUN_1108a42c0;
      lStack_150 = 0;
      func_0x0001056540d0();
      func_0x000105654100();
      func_0x000105653fd4();
      plVar4[1] = (long)plVar2;
      plVar4[2] = (long)&PTR_FUN_1108a42c0;
      plVar4[0x13] = lStack_150;
      lVar8 = *(long *)(lVar6 + 0x2b8);
      *plVar4 = lVar8;
      *(long **)(lVar8 + 8) = plVar4;
      *(long **)(lVar6 + 0x2b8) = plVar4;
      *(long *)(lVar6 + 0x2c8) = *(long *)(lVar6 + 0x2c8) + 1;
      func_0x000105654010();
      goto LAB_1056536ec;
    }
    func_0x000105654188();
    plVar10 = extraout_x9_00;
  } while (extraout_x10_00 != 0);
  uVar3 = plVar2 == (long *)*extraout_x9_00;
  if (!(bool)uVar3) {
    func_0x000105654020();
    func_0x00010565417c();
    *plVar2 = extraout_x8_03;
    *(long **)(extraout_x8_03 + 8) = plVar2;
  }
LAB_1056536ec:
  lVar8 = *plVar2 + 0x10;
  *(long **)(*plVar2 + 0x98) = plVar1;
  func_0x000105654018();
  func_0x0001005edcc0(lVar8,&lStack_1f0);
  *extraout_x8_01 = lVar8;
  extraout_x8_01[1] = lVar8;
  *(undefined1 *)(extraout_x8_01 + 2) = 0;
  *(undefined1 *)(extraout_x8_01 + 3) = 0;
  lVar9 = lVar8;
  func_0x00010054c3a4();
  if ((int)lVar9 != 0) {
    func_0x00010054c7ec();
    func_0x00010054c8f4();
    *(undefined1 *)(extraout_x8_01 + 3) = 1;
    extraout_x8_01[2] = lVar8;
    lVar9 = lVar8;
  }
  func_0x000105653fb4(uStack_148);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105654018();
  func_0x000105654060();
  func_0x0001056541e4();
  FUN_105653800(lVar9 + 0x2d0);
  return;
}



/* Entry: 1056535fc; end: 1056537c3;  */

void FUN_1056535fc(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long *plVar7;
  long *extraout_x9;
  long extraout_x10;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined1 uStack_e0;
  undefined **ppuStack_d8;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar6 = param_2;
  func_0x000105654030();
  plVar1 = (long *)(lVar6 + 600);
  uStack_e0 = 1;
  plVar4 = plVar1;
  uStack_f0 = param_3;
  plStack_e8 = plVar1;
  uStack_48 = extraout_x8;
  __ZNSt3__15mutex4lockEv();
  plVar2 = (long *)(param_2 + 0x2b8);
  plVar7 = (long *)(param_2 + 0x2c0);
  do {
    uVar3 = (long *)*plVar7 == plVar2;
    if ((bool)uVar3) {
      func_0x0001056540c8();
      func_0x0001056540b8();
      ppuStack_d8 = &PTR_FUN_1108a42c0;
      lStack_50 = 0;
      func_0x0001056540d0();
      func_0x000105654100();
      func_0x000105653fd4();
      plVar4[1] = (long)plVar2;
      plVar4[2] = (long)&PTR_FUN_1108a42c0;
      plVar4[0x13] = lStack_50;
      lVar6 = *(long *)(param_2 + 0x2b8);
      *plVar4 = lVar6;
      *(long **)(lVar6 + 8) = plVar4;
      *(long **)(param_2 + 0x2b8) = plVar4;
      *(long *)(param_2 + 0x2c8) = *(long *)(param_2 + 0x2c8) + 1;
      func_0x000105654010();
      goto LAB_1056536ec;
    }
    func_0x000105654188();
    plVar7 = extraout_x9;
  } while (extraout_x10 != 0);
  uVar3 = plVar2 == (long *)*extraout_x9;
  if (!(bool)uVar3) {
    func_0x000105654020();
    func_0x00010565417c();
    *plVar2 = extraout_x8_00;
    *(long **)(extraout_x8_00 + 8) = plVar2;
  }
LAB_1056536ec:
  lVar6 = *plVar2 + 0x10;
  *(long **)(*plVar2 + 0x98) = plVar1;
  func_0x000105654018();
  func_0x0001005edcc0(lVar6,&uStack_f0);
  *param_1 = lVar6;
  param_1[1] = lVar6;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  lVar5 = lVar6;
  func_0x00010054c3a4();
  if ((int)lVar5 != 0) {
    func_0x00010054c7ec();
    func_0x00010054c8f4();
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[2] = lVar6;
    lVar5 = lVar6;
  }
  func_0x000105653fb4(uStack_48);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105654018();
  func_0x000105654060();
  func_0x0001056541e4();
  FUN_105653800(lVar5 + 0x2d0);
  return;
}



/* Entry: 1056537c4; end: 1056537ff;  */

void FUN_1056537c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = param_6;
  uStack_28 = param_5;
  uStack_20 = param_4;
  uStack_18 = param_3;
  FUN_105653800(param_1 + 0x2d0,param_2,&uStack_18,&uStack_20,&uStack_28,&uStack_30);
  return;
}



/* Entry: 105653800; end: 10565384f;  */

void FUN_105653800(void)

{
  func_0x000105654108();
  func_0x0001056541d4();
  func_0x000105654160();
  FUN_105653eec();
  func_0x0001056541ec();
  func_0x00010565409c();
  func_0x000105654070();
  return;
}



/* Entry: 105653850; end: 1056538a3;  */

void FUN_105653850(undefined8 param_1,undefined8 param_2)

{
  func_0x0001056541d4();
  func_0x0001005ecd38(param_1,param_2);
  func_0x0001056541ec();
  func_0x00010565409c();
  func_0x000105654070();
  return;
}



/* Entry: 1056538a4; end: 1056538c7;  */

void FUN_1056538a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_4;
  FUN_1056538c8(param_1 + 0x468,param_2,param_3,&uStack_18);
  return;
}



/* Entry: 1056538c8; end: 105653917;  */

void FUN_1056538c8(void)

{
  func_0x000105654108();
  func_0x0001056541d4();
  func_0x000105654160();
  func_0x000105653f48();
  func_0x0001056541ec();
  func_0x00010565409c();
  func_0x000105654070();
  return;
}



/* Entry: 105653918; end: 10565393b;  */

void FUN_105653918(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x000100852678(param_1 + 0x578,&uStack_18);
  return;
}



/* Entry: 10565393c; end: 1056539a7;  */

undefined8 *
FUN_10565393c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x000100060b18(param_1 + 9,&uStack_30);
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0;
  return param_1;
}



/* Entry: 1056539a8; end: 105653a8b;  */

undefined8 * FUN_1056539a8(undefined8 *param_1)

{
  long *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 *puVar4;
  undefined8 *extraout_x9;
  long extraout_x10;
  long lVar5;
  undefined8 uStack_38;
  
  puVar3 = param_1;
  func_0x000105654030();
  func_0x0001056540a4();
  plVar1 = param_1 + 0xc;
  puVar4 = param_1 + 0xd;
  do {
    uVar2 = (long *)*puVar4 == plVar1;
    if ((bool)uVar2) {
      func_0x0001056540c8();
      func_0x0001056540b8();
      func_0x0001056540d0();
      func_0x000105654100();
      func_0x000105653fd4();
      func_0x000105653fe0();
      goto LAB_105653a4c;
    }
    func_0x000105654188();
    puVar4 = extraout_x9;
  } while (extraout_x10 != 0);
  uVar2 = plVar1 == (long *)*extraout_x9;
  if (!(bool)uVar2) {
    func_0x000105654020();
    func_0x00010565417c();
    *plVar1 = extraout_x8;
    *(long **)(extraout_x8 + 8) = plVar1;
  }
LAB_105653a4c:
  lVar5 = param_1[0xc];
  *(undefined8 **)(lVar5 + 0x98) = param_1;
  func_0x000105654018();
  func_0x000105653fb4(uStack_38);
  if ((bool)uVar2) {
    return (undefined8 *)(lVar5 + 0x10);
  }
  ___stack_chk_fail();
  func_0x000105654018();
  func_0x000105654060();
  *puVar3 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(puVar3 + 0xb);
  func_0x000107c60d94(puVar3 + 3);
  return puVar3;
}



/* Entry: 105653a8c; end: 105653a8f;  */

undefined8 * FUN_105653a8c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 105653a90; end: 105653aa3;  */

void FUN_105653a90(void)

{
  func_0x00010054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105653aa4; end: 105653abf;  */

void FUN_105653aa4(void)

{
  FUN_105653fa4();
  func_0x000105654194();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 105653ac0; end: 105653b07;  */

undefined8 * FUN_105653ac0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_10564ec24();
  return param_1;
}



/* Entry: 105653b08; end: 105653beb;  */

long FUN_105653b08(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar5;
  long *extraout_x9;
  long extraout_x10;
  long lVar6;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_c8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1;
  func_0x000105654030();
  func_0x0001056540a4();
  plVar1 = (long *)(param_1 + 0x60);
  plVar5 = (long *)(param_1 + 0x68);
  do {
    uVar2 = (long *)*plVar5 == plVar1;
    if ((bool)uVar2) {
      func_0x0001056540c8();
      func_0x0001056540b8();
      ppuStack_c8 = &PTR_FUN_1108a4180;
      uStack_40 = 0;
      func_0x0001056540d0();
      func_0x000105654100();
      func_0x000105653fd4();
      func_0x000105653fe0();
      goto LAB_105653bac;
    }
    func_0x000105654188();
    plVar5 = extraout_x9;
  } while (extraout_x10 != 0);
  uVar2 = plVar1 == (long *)*extraout_x9;
  if (!(bool)uVar2) {
    func_0x000105654020();
    func_0x00010565417c();
    *plVar1 = extraout_x8;
    *(long **)(extraout_x8 + 8) = plVar1;
  }
LAB_105653bac:
  lVar6 = *(long *)(param_1 + 0x60);
  *(long *)(lVar6 + 0x98) = param_1;
  func_0x000105654018();
  func_0x000105653fb4(uStack_38);
  if ((bool)uVar2) {
    return lVar6 + 0x10;
  }
  ___stack_chk_fail();
  lVar4 = lVar3;
  func_0x000105654018();
  func_0x000105654060();
  pcStack_e8 = FUN_105653bec;
  lStack_100 = lVar6;
  lStack_f8 = lVar3;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000105653c84();
  lVar3 = extraout_x8_00;
  lStack_108 = lVar4;
  func_0x000105653cbc(extraout_x8_00,&lStack_108);
  return lVar3;
}



/* Entry: 105653bec; end: 105653c4f;  */

void FUN_105653bec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x000105653c84();
  uStack_28 = param_2;
  func_0x000105653cbc(param_1,&uStack_28);
  return;
}



/* Entry: 105653c50; end: 105653c53;  */

undefined8 * FUN_105653c50(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 105653c54; end: 105653c67;  */

void FUN_105653c54(void)

{
  func_0x00010054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


