/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b120ac0; end: 10b120ac3;  */

long FUN_10b120ac0(long param_1)

{
  long extraout_x8;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010b1359d0(&PTR_FUN_110cbc510);
  if (extraout_x8 != 0) {
    func_0x00010b1348f4();
    func_0x000104bdfe3c(auStack_28,auStack_30);
    FUN_10b120c04(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(auStack_30);
    func_0x00010b135d24();
  }
  FUN_10b120b58(param_1 + 0x18);
  FUN_10b120b58();
  return param_1;
}



/* Entry: 10b120ac4; end: 10b120ad7;  */

void FUN_10b120ac4(void)

{
  FUN_10b120b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b120ad8; end: 10b120adb;  */

void FUN_10b120ad8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbc530;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b120adc; end: 10b120aef;  */

void FUN_10b120adc(void)

{
  FUN_10b120b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b120af0; end: 10b120b47;  */

long FUN_10b120af0(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
    func_0x00010b133ecc();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  lVar1 = param_1 + 0x30;
  __ZNSt3__118condition_variableD1Ev(lVar1);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_1 = param_1 + 0x18;
    func_0x000107c350ac();
    if (param_1 != 0) {
      func_0x000107c278a0();
    }
    return unaff_x19;
  }
  return lVar1;
}



/* Entry: 10b120b48; end: 10b120b57;  */

void FUN_10b120b48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b120b58; end: 10b120b7b;  */

void FUN_10b120b58(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b120b7c; end: 10b120c03;  */

long FUN_10b120b7c(long param_1)

{
  long extraout_x8;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010b1359d0(&PTR_FUN_110cbc510);
  if (extraout_x8 != 0) {
    func_0x00010b1348f4();
    func_0x000104bdfe3c(auStack_28,auStack_30);
    FUN_10b120c04(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(auStack_30);
    func_0x00010b135d24();
  }
  FUN_10b120b58(param_1 + 0x18);
  FUN_10b120b58();
  return param_1;
}



/* Entry: 10b120c04; end: 10b120cb7;  */

void FUN_10b120c04(long param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b120cb8(auStack_40,param_1 + 8,&uStack_50);
  func_0x00010b135a5c();
  FUN_10b120ce8();
  FUN_10b120b58(auStack_40);
  FUN_10b120b58(&uStack_50);
  func_0x00010b1351c0();
  __ZNSt13exception_ptraSERKS_(alStack_30[0] + 0x88,param_2);
  func_0x00010b133fd0();
  if (param_2 == 0) {
    func_0x00010b1344dc();
  }
  else {
    func_0x00010b1346dc();
    func_0x00010b1344ac();
    func_0x00010b133f28();
  }
  FUN_10b120b58(alStack_30);
  return;
}



/* Entry: 10b120cb8; end: 10b120ce7;  */

void FUN_10b120cb8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b13421c();
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  func_0x00010b1357b4();
  func_0x00010b134038();
  func_0x00010b134f14();
  return;
}



/* Entry: 10b120ce8; end: 10b120d0b;  */

void FUN_10b120ce8(void)

{
  func_0x00010b133dc4();
  FUN_10b120b58();
  return;
}



/* Entry: 10b120d0c; end: 10b120d37;  */

void FUN_10b120d0c(void)

{
  func_0x00010b13448c();
  func_0x00010b1352e4();
  func_0x00010b1357b4();
  func_0x00010b134038();
  func_0x00010b134f14();
  return;
}



/* Entry: 10b120d38; end: 10b120d5b;  */

void FUN_10b120d38(void)

{
  func_0x00010b133dc4();
  FUN_10b120e24();
  return;
}



/* Entry: 10b120d5c; end: 10b120e23;  */

void FUN_10b120d5c(void)

{
  code *pcVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  int extraout_w11;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x00010b13629c();
  func_0x00010b136284();
  FUN_10b120d0c();
  func_0x00010b136278();
  FUN_10b120d38();
  FUN_10b120e24(auStack_40);
  func_0x00010b134c58();
  func_0x00010b134e2c(lStack_30 + 0x48);
  __ZNSt3__15mutex4lockEv();
  func_0x00010b136260();
  lVar2 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x00010b133f58();
      lVar2 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x00010b13626c(lVar2 + 0x18);
  FUN_10b120e48();
  func_0x00010b134cd0();
  if (*(long *)(lStack_30 + 0x88) != 0) {
    func_0x00010b1355b4();
    func_0x00010b134c7c();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b120df4);
    (*pcVar1)();
  }
  func_0x00010b135950();
  func_0x00010b134ab4();
  func_0x00010b134e74();
  return;
}



/* Entry: 10b120e24; end: 10b120e47;  */

void FUN_10b120e24(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b120e48; end: 10b120e77;  */

void FUN_10b120e48(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x00010b13421c();
  while (uVar1 = unaff_x19, FUN_10b120e78(), (uVar1 & 1) == 0) {
    func_0x00010b1344fc();
  }
  return;
}



/* Entry: 10b120e78; end: 10b120e7f;  */

bool FUN_10b120e78(long *param_1)

{
  bool bVar1;
  
  if ((*(byte *)(*param_1 + 0x10) & 1) == 0) {
    bVar1 = *(long *)(*param_1 + 0x88) != 0;
    func_0x00010b134484();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b120e80; end: 10b120ebf;  */

bool FUN_10b120e80(long param_1)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0x88) != 0;
    func_0x00010b134484();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b120ec0; end: 10b120efb;  */

void FUN_10b120ec0(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  func_0x00010b13604c();
  func_0x00010b13570c();
  func_0x00010b135d2c();
  func_0x00010b1351ac();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b120ef4);
  (*pcVar1)();
}



/* Entry: 10b120efc; end: 10b120f27;  */

void FUN_10b120efc(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010b135a00();
  if ((bool)in_ZR) {
    FUN_10b120f28(unaff_x19 + 0x28);
  }
  func_0x00010b1359d0(&PTR_FUN_110cbc510);
  if (extraout_x8 != 0) {
    func_0x00010b1348f4();
    func_0x000104bdfe3c(auStack_28,auStack_30);
    FUN_10b120c04();
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(auStack_30);
    func_0x00010b135d24();
  }
  FUN_10b120b58(unaff_x19 + 0x18);
  FUN_10b120b58(unaff_x20);
  return;
}



/* Entry: 10b120f28; end: 10b120f6f;  */

void FUN_10b120f28(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010b12592c();
  }
  else {
    __ZNSt13exception_ptrD1Ev();
  }
  return;
}



/* Entry: 10b120f70; end: 10b12102f;  */

void FUN_10b120f70(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (___dynamic_cast(lVar1,&PTR_DAT_110cbd760,&PTR_DAT_110cc6fd0,0), lVar1 != 0))
  {
    lVar2 = param_2[1];
    *param_1 = lVar1;
    param_1[1] = lVar2;
    param_1 = param_2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b121030; end: 10b12103b;  */

long * FUN_10b121030(long *param_1)

{
  func_0x00010b134d60();
  if (param_1[2] != 0) {
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10b12103c; end: 10b12106b;  */

long * FUN_10b12103c(long *param_1)

{
  if (param_1[2] != 0) {
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10b12106c; end: 10b12108f;  */

void FUN_10b12106c(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_10b24fff8();
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 10b121090; end: 10b12110b;  */

void FUN_10b121090(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b135904();
    }
    func_0x00010b1210c4();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 10b12110c; end: 10b121133;  */

void FUN_10b12110c(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_10b121134();
  return;
}



/* Entry: 10b121134; end: 10b121147;  */

void FUN_10b121134(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10b121164();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 10b121148; end: 10b121163;  */

void FUN_10b121148(long param_1)

{
  FUN_10b121164();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10b121164; end: 10b12116f;  */

undefined8 * FUN_10b121164(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  
  uVar2 = 0;
  puVar1 = param_1;
  func_0x00010b135970(param_1,0,param_2);
  *puVar1 = extraout_x8;
  puVar1[1] = uVar2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((long)puVar1 + 0x31) = 0;
  *(undefined8 *)((long)puVar1 + 0x29) = 0;
  FUN_10b1211a8();
  return param_1;
}



/* Entry: 10b121170; end: 10b1211a7;  */

undefined8 * FUN_10b121170(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_1;
  func_0x00010b135970();
  *puVar1 = extraout_x8;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((long)puVar1 + 0x31) = 0;
  *(undefined8 *)((long)puVar1 + 0x29) = 0;
  FUN_10b1211a8();
  return param_1;
}



/* Entry: 10b1211a8; end: 10b121207;  */

void FUN_10b1211a8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x00010b136494();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10b250370();
    }
    else {
      FUN_10b250340();
    }
  }
  return;
}



/* Entry: 10b121208; end: 10b1212a3;  */

void FUN_10b121208(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b134530();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  func_0x00010b125750(param_1 + 0x40,unaff_x20 + 0x40);
  FUN_10b1212a4(unaff_x19 + 0x80,unaff_x20 + 0x80);
  FUN_10b12132c(unaff_x19 + 0x128,unaff_x20 + 0x128);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x170);
  *(undefined8 *)(unaff_x19 + 0x175) = *(undefined8 *)(unaff_x20 + 0x175);
  *(undefined8 *)(unaff_x19 + 0x170) = uVar1;
  return;
}



/* Entry: 10b1212a4; end: 10b1212d3;  */

void FUN_10b1212a4(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0xa0) = 0;
  FUN_10b1212d4();
  return;
}



/* Entry: 10b1212d4; end: 10b1212e7;  */

void FUN_10b1212d4(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_10b121300();
    func_0x00010b1362f8();
    return;
  }
  return;
}



/* Entry: 10b1212e8; end: 10b1212ff;  */

void FUN_10b1212e8(void)

{
  FUN_10b121300();
  func_0x00010b1362f8();
  return;
}



/* Entry: 10b121300; end: 10b12130b;  */

void FUN_10b121300(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010b2507c0(param_1,0,param_2);
  func_0x00010b2509c8(&PTR_FUN_110ccada8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b2507b4();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x1c) = 0;
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
  *(undefined4 *)(unaff_x19 + 0x24) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x21;
  FUN_10b24fee8(unaff_x19 + 0x18,unaff_x20 + 0x18);
  lVar2 = unaff_x20 + 0x30;
  func_0x00010b250824();
  *(long *)(unaff_x19 + 0x30) = lVar2;
  lVar2 = unaff_x20 + 0x38;
  func_0x00010b250824();
  *(long *)(unaff_x19 + 0x38) = lVar2;
  lVar2 = unaff_x20 + 0x40;
  func_0x00010b250824();
  *(long *)(unaff_x19 + 0x40) = lVar2;
  lVar2 = unaff_x20 + 0x48;
  func_0x00010b250824();
  *(long *)(unaff_x19 + 0x48) = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x00010b250534();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x00010b250574();
  }
  *(undefined8 *)(unaff_x19 + 0x58) = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b250920();
  }
  *(undefined8 *)(unaff_x19 + 0x60) = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b250920();
  }
  *(undefined8 *)(unaff_x19 + 0x68) = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_10b2505b4();
  }
  *(undefined8 *)(unaff_x19 + 0x70) = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined4 *)(unaff_x19 + 0x98) = *(undefined4 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x80) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x78) = uVar3;
  return;
}



/* Entry: 10b12130c; end: 10b12132b;  */

void FUN_10b12130c(long param_1)

{
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    FUN_10b24f5cc();
  }
  return;
}



/* Entry: 10b12132c; end: 10b12135b;  */

void FUN_10b12132c(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_10b12135c();
  return;
}



/* Entry: 10b12135c; end: 10b12136f;  */

void FUN_10b12135c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10b12138c();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 10b121370; end: 10b12138b;  */

void FUN_10b121370(long param_1)

{
  FUN_10b12138c();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10b12138c; end: 10b121397;  */

void FUN_10b12138c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b2507c0(param_1,0,param_2);
  func_0x00010b2509c8(&PTR_FUN_110ccad58);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b2507b4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010b250920();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x29);
  *(undefined8 *)(unaff_x19 + 0x31) = *(undefined8 *)(unaff_x20 + 0x31);
  *(undefined8 *)(unaff_x19 + 0x29) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  return;
}



/* Entry: 10b121398; end: 10b1213b7;  */

void FUN_10b121398(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_10b24fff8();
  }
  return;
}



/* Entry: 10b1213b8; end: 10b121493;  */

void FUN_10b1213b8(long param_1)

{
  FUN_10b121398(param_1 + 0x128);
  FUN_10b12130c(param_1 + 0x80);
  func_0x00010b135f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b121494; end: 10b1214bb;  */

void FUN_10b121494(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0xa0) = 0;
  FUN_10b1214bc();
  return;
}



/* Entry: 10b1214bc; end: 10b1214cf;  */

void FUN_10b1214bc(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_10b1214e8();
    func_0x00010b1362f8();
    return;
  }
  return;
}



/* Entry: 10b1214d0; end: 10b1214e7;  */

void FUN_10b1214d0(void)

{
  FUN_10b1214e8();
  func_0x00010b1362f8();
  return;
}



/* Entry: 10b1214e8; end: 10b1214f3;  */

void FUN_10b1214e8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b135568(param_1,0,param_2);
  FUN_10b24f458();
  FUN_10b12151c();
  return;
}



/* Entry: 10b1214f4; end: 10b12151b;  */

void FUN_10b1214f4(void)

{
  func_0x00010b135568();
  FUN_10b24f458();
  FUN_10b12151c();
  return;
}



/* Entry: 10b12151c; end: 10b12157b;  */

void FUN_10b12151c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x00010b136494();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b24ff28();
    }
    else {
      FUN_10b24fef8();
    }
  }
  return;
}



/* Entry: 10b12157c; end: 10b1215e3;  */

void FUN_10b12157c(void)

{
  func_0x00010b133dc4();
  func_0x00010b12186c();
  return;
}



/* Entry: 10b1215e4; end: 10b121607;  */

undefined8 FUN_10b1215e4(undefined8 param_1)

{
  FUN_10b121608();
  return param_1;
}



/* Entry: 10b121608; end: 10b121637;  */

void FUN_10b121608(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == *(char *)(param_2 + 0x10)) {
    if (cVar1 != '\0') {
      func_0x00010b13448c();
      *param_1 = *param_2;
      func_0x000107c27b9c(param_1 + 2,param_2 + 2);
      func_0x00010b135b4c();
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x10) == '\x01') {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      return;
    }
    func_0x00010b1357d4();
  }
  return;
}



/* Entry: 10b121638; end: 10b121693;  */

void FUN_10b121638(undefined4 *param_1,undefined4 *param_2)

{
  func_0x00010b13448c();
  *param_1 = *param_2;
  func_0x000107c27b9c(param_1 + 2,param_2 + 2);
  func_0x00010b135b4c();
  return;
}



/* Entry: 10b121694; end: 10b1216b7;  */

undefined8 FUN_10b121694(undefined8 param_1)

{
  FUN_10b1216b8();
  return param_1;
}



/* Entry: 10b1216b8; end: 10b1216df;  */

void FUN_10b1216b8(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x19;
  
  cVar1 = *(char *)(param_1 + 0xa0);
  bVar2 = cVar1 == *(char *)(param_2 + 0xa0);
  if (!bVar2) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xa0) == '\x01') {
        FUN_10b24f5cc();
        *(undefined1 *)(param_1 + 0xa0) = 0;
      }
      return;
    }
    FUN_10b1214e8();
    func_0x00010b1362f8();
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b136494();
    if (!bVar2) {
      uVar3 = *(ulong *)(unaff_x19 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      uVar4 = *(ulong *)(param_2 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      if (uVar3 == uVar4) {
        func_0x00010b24ff28();
      }
      else {
        FUN_10b24fef8();
      }
    }
    return;
  }
  return;
}



/* Entry: 10b1216e0; end: 10b121703;  */

void FUN_10b1216e0(long param_1)

{
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    FUN_10b24f5cc();
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  return;
}



/* Entry: 10b121704; end: 10b121727;  */

undefined8 FUN_10b121704(undefined8 param_1)

{
  FUN_10b121728();
  return param_1;
}



/* Entry: 10b121728; end: 10b12174f;  */

void FUN_10b121728(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x19;
  
  cVar1 = *(char *)(param_1 + 0x40);
  bVar2 = cVar1 == *(char *)(param_2 + 0x40);
  if (!bVar2) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x40) == '\x01') {
        FUN_10b24fff8();
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      return;
    }
    FUN_10b121164();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b136494();
    if (!bVar2) {
      uVar3 = *(ulong *)(unaff_x19 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      uVar4 = *(ulong *)(param_2 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      if (uVar3 == uVar4) {
        FUN_10b250370();
      }
      else {
        FUN_10b250340();
      }
    }
    return;
  }
  return;
}



/* Entry: 10b121750; end: 10b121773;  */

undefined8 FUN_10b121750(undefined8 param_1)

{
  FUN_10b121774();
  return param_1;
}



/* Entry: 10b121774; end: 10b12179b;  */

void FUN_10b121774(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x19;
  
  cVar1 = *(char *)(param_1 + 0x38);
  bVar2 = cVar1 == *(char *)(param_2 + 0x38);
  if (!bVar2) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        FUN_10b24d634();
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      return;
    }
    FUN_10b121838();
    func_0x00010b136304();
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b136494();
    if (!bVar2) {
      uVar3 = *(ulong *)(unaff_x19 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      uVar4 = *(ulong *)(param_2 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      if (uVar3 == uVar4) {
        func_0x00010b24da90();
      }
      else {
        func_0x00010b24da58();
      }
    }
    return;
  }
  return;
}



/* Entry: 10b12179c; end: 10b1217fb;  */

void FUN_10b12179c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x00010b136494();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b24da90();
    }
    else {
      func_0x00010b24da58();
    }
  }
  return;
}



/* Entry: 10b1217fc; end: 10b121837;  */

void FUN_10b1217fc(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10b24d634();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10b121838; end: 10b121843;  */

void FUN_10b121838(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b135568(param_1,0,param_2);
  func_0x00010b24d5a4();
  FUN_10b12179c();
  return;
}



/* Entry: 10b121844; end: 10b121bd3;  */

void FUN_10b121844(void)

{
  func_0x00010b135568();
  func_0x00010b24d5a4();
  FUN_10b12179c();
  return;
}



/* Entry: 10b121bd4; end: 10b121bf3;  */

void FUN_10b121bd4(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10b24d634();
  }
  return;
}



/* Entry: 10b121bf4; end: 10b121c1b;  */

void FUN_10b121bf4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010b135a00();
  if ((bool)in_ZR) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 8);
  }
  return;
}



/* Entry: 10b121c1c; end: 10b121cbf;  */

void FUN_10b121c1c(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010b134530();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10b121cc0(param_1 + 3,param_2 + 3);
  func_0x00010b136370();
  FUN_10b121494(unaff_x19 + 0x90,unaff_x20 + 0x90);
  FUN_10b12110c(unaff_x19 + 0x138,unaff_x20 + 0x138);
  FUN_10b121ce4(unaff_x19 + 0x180,unaff_x20 + 0x180);
  func_0x00010b134f4c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1d0);
  *(undefined8 *)(unaff_x19 + 0x1c8) = *(undefined8 *)(unaff_x20 + 0x1c8);
  *(undefined8 *)(unaff_x19 + 0x1d0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  FUN_10b121d20(unaff_x19 + 0x1d8,unaff_x20 + 0x1d8);
  return;
}



/* Entry: 10b121cc0; end: 10b121ce3;  */

void FUN_10b121cc0(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    func_0x00010b1357d4();
  }
  return;
}



/* Entry: 10b121ce4; end: 10b121d0b;  */

void FUN_10b121ce4(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_10b121d0c();
  return;
}



/* Entry: 10b121d0c; end: 10b121d1f;  */

void FUN_10b121d0c(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_10b121838();
    func_0x00010b136304();
    return;
  }
  return;
}



/* Entry: 10b121d20; end: 10b121d6f;  */

void FUN_10b121d20(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b13448c();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10b121d70(param_1 + 2,param_2 + 2);
  func_0x00010b121d94(unaff_x20 + 0x40,unaff_x19 + 0x40);
  func_0x00010b121db8(param_1 + 0xe,unaff_x19 + 0x70);
  return;
}



/* Entry: 10b121d70; end: 10b121e5f;  */

void FUN_10b121d70(void)

{
  func_0x00010b133f84();
  func_0x00010b134bc4();
  return;
}



/* Entry: 10b121e60; end: 10b121e77;  */

void FUN_10b121e60(void)

{
  func_0x000107c278b8();
  func_0x00010b135188();
  return;
}



/* Entry: 10b121e78; end: 10b121eab;  */

void FUN_10b121e78(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b135904();
    }
    func_0x00010b1210c4();
    *(ulong *)(param_1 + 0x60) = uVar1;
  }
  return;
}



/* Entry: 10b121eac; end: 10b121edf;  */

void FUN_10b121eac(void)

{
  FUN_10b1214e8();
  func_0x00010b1362f8();
  return;
}



/* Entry: 10b121ee0; end: 10b121fcf;  */

void FUN_10b121ee0(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b135904();
    }
    func_0x00010b121f14();
    *(ulong *)(param_1 + 0x60) = uVar1;
  }
  return;
}



/* Entry: 10b121fd0; end: 10b12202f;  */

void FUN_10b121fd0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010b134530();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  func_0x000107c2795c(param_1 + 4,param_2 + 4);
  func_0x000107c279a0(unaff_x19 + 0x38,unaff_x20 + 0x38);
  func_0x000107c279a0(unaff_x19 + 0x58,unaff_x20 + 0x58);
  return;
}



/* Entry: 10b122030; end: 10b12207b;  */

void FUN_10b122030(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  func_0x00010b1343f8();
  FUN_10b122098();
  *(undefined4 *)(unaff_x20 + 0x270) = *(undefined4 *)(unaff_x19 + 0x270);
  func_0x00010563bef4(unaff_x20 + 0x278,unaff_x19 + 0x278);
  func_0x000107c27c54(unaff_x20 + 0x2c0,unaff_x19 + 0x2c0);
  *(undefined8 *)(unaff_x20 + 0x2e0) = *(undefined8 *)(unaff_x19 + 0x2e0);
  return;
}



/* Entry: 10b12207c; end: 10b122097;  */

void FUN_10b12207c(long param_1)

{
  FUN_10b1238dc();
  *(undefined1 *)(param_1 + 0x2e8) = 1;
  return;
}



/* Entry: 10b122098; end: 10b1220bb;  */

undefined8 FUN_10b122098(undefined8 param_1)

{
  FUN_10b1220bc();
  return param_1;
}



/* Entry: 10b1220bc; end: 10b1220e3;  */

void FUN_10b1220bc(long param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = *(char *)(param_1 + 0x228);
  if (cVar1 != *(char *)(param_2 + 0x228)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x228) == '\x01') {
        func_0x0001052b5d04();
        *(undefined1 *)(param_1 + 0x228) = 0;
      }
      return;
    }
    func_0x0001052b5fec();
    *(undefined1 *)(param_1 + 0x228) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b13448c();
    func_0x000107c27b9c();
    func_0x00010b1362b4();
    FUN_10b122194();
    FUN_10b1222cc(unaff_x20 + 0x58,unaff_x19 + 0x58);
    uVar2 = *(undefined1 *)(unaff_x19 + 0x98);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x90);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x88);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x78);
    *(undefined8 *)(unaff_x20 + 0x80) = *(undefined8 *)(unaff_x19 + 0x80);
    *(undefined8 *)(unaff_x20 + 0x78) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x90) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x88) = uVar3;
    *(undefined1 *)(unaff_x20 + 0x98) = uVar2;
    FUN_10b122388(unaff_x20 + 0xa0,unaff_x19 + 0xa0);
    FUN_10b122450(unaff_x20 + 400,unaff_x19 + 400);
    FUN_10b1224ec(unaff_x20 + 0x1d8,unaff_x19 + 0x1d8);
    func_0x000107c27c54(unaff_x20 + 0x1f8,unaff_x19 + 0x1f8);
    uVar2 = *(undefined1 *)(unaff_x19 + 0x220);
    *(undefined8 *)(unaff_x20 + 0x218) = *(undefined8 *)(unaff_x19 + 0x218);
    *(undefined1 *)(unaff_x20 + 0x220) = uVar2;
    return;
  }
  return;
}



/* Entry: 10b1220e4; end: 10b12216f;  */

void FUN_10b1220e4(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b13448c();
  func_0x000107c27b9c();
  func_0x00010b1362b4();
  FUN_10b122194();
  FUN_10b1222cc(unaff_x20 + 0x58,unaff_x19 + 0x58);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x80) = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x78) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x98) = uVar1;
  FUN_10b122388(unaff_x20 + 0xa0,unaff_x19 + 0xa0);
  FUN_10b122450(unaff_x20 + 400,unaff_x19 + 400);
  FUN_10b1224ec(unaff_x20 + 0x1d8,unaff_x19 + 0x1d8);
  func_0x000107c27c54(unaff_x20 + 0x1f8,unaff_x19 + 0x1f8);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x220);
  *(undefined8 *)(unaff_x20 + 0x218) = *(undefined8 *)(unaff_x19 + 0x218);
  *(undefined1 *)(unaff_x20 + 0x220) = uVar1;
  return;
}



/* Entry: 10b122170; end: 10b122193;  */

void FUN_10b122170(long param_1)

{
  if (*(char *)(param_1 + 0x228) == '\x01') {
    func_0x0001052b5d04();
    *(undefined1 *)(param_1 + 0x228) = 0;
  }
  return;
}



/* Entry: 10b122194; end: 10b1221b7;  */

undefined8 FUN_10b122194(undefined8 param_1)

{
  FUN_10b1221b8();
  return param_1;
}



/* Entry: 10b1221b8; end: 10b1221df;  */

void FUN_10b1221b8(long param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        func_0x0001052ac664();
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      return;
    }
    func_0x0001052b4c6c();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b13448c();
    FUN_10b122234();
    uVar2 = *(undefined1 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x20 + 0x30) = uVar2;
    return;
  }
  return;
}



/* Entry: 10b1221e0; end: 10b12220f;  */

void FUN_10b1221e0(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  FUN_10b122234();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined1 *)(unaff_x20 + 0x30) = uVar1;
  return;
}



/* Entry: 10b122210; end: 10b122233;  */

void FUN_10b122210(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x0001052ac664();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10b122234; end: 10b122257;  */

undefined8 FUN_10b122234(undefined8 param_1)

{
  FUN_10b122258();
  return param_1;
}



/* Entry: 10b122258; end: 10b12227f;  */

void FUN_10b122258(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        func_0x000107c27a18();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    func_0x0001052ac638();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b13448c();
    func_0x00010869e720();
    *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
    return;
  }
  return;
}



/* Entry: 10b122280; end: 10b1222a7;  */

void FUN_10b122280(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  func_0x00010869e720();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b1222a8; end: 10b1222cb;  */

void FUN_10b1222a8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c27a18();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10b1222cc; end: 10b1222ef;  */

undefined8 FUN_10b1222cc(undefined8 param_1)

{
  FUN_10b1222f0();
  return param_1;
}



/* Entry: 10b1222f0; end: 10b122317;  */

void FUN_10b1222f0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x0001052b4fd8();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b13448c();
    func_0x00010b12235c();
    func_0x00010b135648();
    return;
  }
  return;
}



/* Entry: 10b122318; end: 10b12233b;  */

void FUN_10b122318(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001052b4fd8();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b12233c; end: 10b122387;  */

void FUN_10b12233c(void)

{
  func_0x00010b13448c();
  func_0x00010b12235c();
  func_0x00010b135648();
  return;
}



/* Entry: 10b122388; end: 10b1223ab;  */

undefined8 FUN_10b122388(undefined8 param_1)

{
  FUN_10b1223ac();
  return param_1;
}



/* Entry: 10b1223ac; end: 10b1223d3;  */

void FUN_10b1223ac(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0xe8);
  if (cVar1 != *(char *)(param_2 + 0xe8)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xe8) == '\x01') {
        func_0x0001052b4238();
        *(undefined1 *)(param_1 + 0xe8) = 0;
      }
      return;
    }
    func_0x0001052b4d30();
    *(undefined1 *)(param_1 + 0xe8) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010b13448c();
    func_0x00010b1345e8();
    func_0x000107c27b9c();
    func_0x00010b1361b0();
    func_0x000107c27b9c();
    func_0x00010b1363b8();
    func_0x000107c27c54();
    func_0x000107c27c54(unaff_x20 + 0x88,unaff_x19 + 0x88);
    func_0x000107c27c54(unaff_x20 + 0xa8,unaff_x19 + 0xa8);
    func_0x000107c27c54(unaff_x20 + 200,unaff_x19 + 200);
    return;
  }
  return;
}



/* Entry: 10b1223d4; end: 10b12242b;  */

void FUN_10b1223d4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  func_0x00010b1345e8();
  func_0x000107c27b9c();
  func_0x00010b1361b0();
  func_0x000107c27b9c();
  func_0x00010b1363b8();
  func_0x000107c27c54();
  func_0x000107c27c54(unaff_x20 + 0x88,unaff_x19 + 0x88);
  func_0x000107c27c54(unaff_x20 + 0xa8,unaff_x19 + 0xa8);
  func_0x000107c27c54(unaff_x20 + 200,unaff_x19 + 200);
  return;
}



/* Entry: 10b12242c; end: 10b12244f;  */

void FUN_10b12242c(long param_1)

{
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    func_0x0001052b4238();
    *(undefined1 *)(param_1 + 0xe8) = 0;
  }
  return;
}


