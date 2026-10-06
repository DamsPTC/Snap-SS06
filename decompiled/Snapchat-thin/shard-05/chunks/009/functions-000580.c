/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1042c3b60; end: 1042c3ddf;  */

undefined8 FUN_1042c3b60(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f3420);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar3,6);
    uVar3 = uStack_88;
    if ((int)puVar4 == 0) {
      uVar3 = 0;
    }
  }
  uVar5 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f3440);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar5,6);
    uVar5 = uStack_88;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  uVar6 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f3460);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (param_1 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar6,6);
    uVar6 = uStack_88;
    if ((int)puVar4 == 0) {
      uVar6 = 0;
    }
  }
  func_0x00010c062f60();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar6);
  return unaff_x20;
}



/* Entry: 1042c3de0; end: 1042c3dff;  */

void FUN_1042c3de0(void)

{
  _objc_opt_self(&PTR_PTR_1129957f0);
  return;
}



/* Entry: 1042c3e00; end: 1042c3e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c3e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306b9b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306b9b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306b9c0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042c3e04; end: 1042c3e7f;  */

void FUN_1042c3e04(undefined8 param_1)

{
  undefined1 auStack_328 [776];
  
  FUN_1042c9f5c(auStack_328);
  _memcpy(param_1,auStack_328,0x301);
  return;
}



/* Entry: 1042c3e80; end: 1042c4773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c3e80(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b9f0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b9f8));
  dVar6 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306ba00) != 0.0) {
    dVar6 = *(double *)(unaff_x20 + _DAT_11306ba00);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306ba08));
  lVar3 = *(long *)(unaff_x20 + _DAT_11306ba10);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306ba18))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ba18);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306ba20);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306ba28));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306ba30));
  lVar3 = *(long *)(unaff_x20 + _DAT_11306ba38);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,PTR___sSSN_11034da80);
    lVar4 = lVar3;
    func_0x00010bfde980();
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306ba40));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306ba48));
  lVar3 = *(long *)(unaff_x20 + _DAT_11306ba50);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306ba58);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306ba60);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  uVar2 = (ulong)*(byte *)(unaff_x20 + _DAT_11306ba68);
  __ss6HasherV8_combineyys5UInt8VF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11306ba70) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042ca8a8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306ba78));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306ba80));
  lVar3 = *(long *)(unaff_x20 + _DAT_11306ba88);
  if (lVar3 == 0) {
    lVar3 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  if (*(long *)(unaff_x20 + _DAT_11306ba90) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042c3608();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar3);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306ba98));
  lVar3 = *(long *)(unaff_x20 + _DAT_11306baa0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306baa8);
  if (lVar3 == 0) {
    lVar3 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  if (*(long *)(unaff_x20 + _DAT_11306bab0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042c0824();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306bab8);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306bac0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  uVar2 = (ulong)*(byte *)(unaff_x20 + _DAT_11306bac8);
  __ss6HasherV8_combineyys5UInt8VF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11306bad0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001042ce04c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306bad8);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,PTR___sSiN_11034deb0);
    lVar4 = lVar3;
    func_0x00010bfde980();
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_11306bae0))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306bae0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306bae8));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306baf0));
  lVar3 = *(long *)(unaff_x20 + _DAT_11306baf8);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306bb00));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306bb08));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306bb10));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306bb18));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306bb20));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306bb28));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306bb30));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306bb38));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306bb40));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306bb48));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306bb50));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306bb58));
  lVar3 = *(long *)(unaff_x20 + _DAT_11306bb60);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306bb68);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306bb70);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bb78))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306bb78);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306bb80);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042c4774; end: 1042c560f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042c4774(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  uint uVar49;
  uint uVar50;
  long *plVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  uint uVar61;
  long unaff_x20;
  long lVar62;
  uint uVar63;
  long lVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  double dVar72;
  double dVar73;
  uint uStack_13c;
  uint uStack_130;
  uint uStack_124;
  uint uStack_110;
  uint uStack_cc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long alStack_98 [5];
  
  lVar64 = unaff_x20;
  _swift_getObjectType();
  FUN_1042ca7e4(param_1,alStack_98,0x112d387f8,&UNK_10d902650);
  if (alStack_98[3] == 0) {
    FUN_1042ca838(alStack_98,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar51 = &lStack_a0;
    _swift_dynamicCast(plVar51,alStack_98,PTR___sypN_11034f1a8 + 8,lVar64,6);
    if (((ulong)plVar51 & 1) != 0) {
      bVar11 = *(byte *)(unaff_x20 + _DAT_11306b9f0);
      bVar12 = *(byte *)(lStack_a0 + _DAT_11306b9f0);
      bVar13 = *(byte *)(unaff_x20 + _DAT_11306b9f8);
      bVar14 = *(byte *)(lStack_a0 + _DAT_11306b9f8);
      dVar72 = *(double *)(unaff_x20 + _DAT_11306ba00);
      dVar73 = *(double *)(lStack_a0 + _DAT_11306ba00);
      bVar15 = *(byte *)(unaff_x20 + _DAT_11306ba08);
      bVar16 = *(byte *)(lStack_a0 + _DAT_11306ba08);
      lVar62 = *(long *)(unaff_x20 + _DAT_11306ba10);
      lVar64 = *(long *)(lStack_a0 + _DAT_11306ba10);
      if (lVar62 == 0 || lVar64 == 0) {
        uStack_cc = (uint)(lVar62 == 0 && lVar64 == 0);
      }
      else {
        func_0x0001002ed07c(0);
        _objc_retain(lVar64);
        _objc_retain();
        lVar52 = lVar62;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_cc = (uint)lVar52;
        _objc_release(lVar62);
        _objc_release(lVar64);
      }
      lVar64 = ((long *)(unaff_x20 + _DAT_11306ba18))[1];
      lVar62 = ((long *)(lStack_a0 + _DAT_11306ba18))[1];
      uVar49 = (uint)(lVar64 == 0 && lVar62 == 0);
      if ((lVar64 != 0) && (lVar62 != 0)) {
        lVar52 = *(long *)(unaff_x20 + _DAT_11306ba18);
        if ((lVar52 == *(long *)(lStack_a0 + _DAT_11306ba18)) && (lVar64 == lVar62)) {
          uVar49 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar49 = (uint)lVar52;
        }
      }
      lVar62 = *(long *)(unaff_x20 + _DAT_11306ba20);
      lVar64 = *(long *)(lStack_a0 + _DAT_11306ba20);
      uVar66 = (uint)(lVar62 == 0 && lVar64 == 0);
      if ((lVar62 != 0) && (lVar64 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar64);
        _objc_retain();
        lVar52 = lVar62;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar66 = (uint)lVar52;
        _objc_release(lVar62);
        _objc_release(lVar64);
      }
      bVar17 = *(byte *)(unaff_x20 + _DAT_11306ba28);
      bVar18 = *(byte *)(lStack_a0 + _DAT_11306ba28);
      iVar1 = *(int *)(unaff_x20 + _DAT_11306ba30);
      iVar2 = *(int *)(lStack_a0 + _DAT_11306ba30);
      lVar64 = *(long *)(unaff_x20 + _DAT_11306ba38);
      uVar55 = (uint)(lVar64 == 0 && *(long *)(lStack_a0 + _DAT_11306ba38) == 0);
      if ((lVar64 != 0) && (*(long *)(lStack_a0 + _DAT_11306ba38) != 0)) {
        func_0x00010142cfc4();
        uVar55 = (uint)lVar64;
      }
      bVar19 = *(byte *)(unaff_x20 + _DAT_11306ba40);
      bVar20 = *(byte *)(lStack_a0 + _DAT_11306ba40);
      bVar21 = *(byte *)(unaff_x20 + _DAT_11306ba48);
      bVar22 = *(byte *)(lStack_a0 + _DAT_11306ba48);
      lVar62 = *(long *)(unaff_x20 + _DAT_11306ba50);
      lVar64 = *(long *)(lStack_a0 + _DAT_11306ba50);
      uVar68 = (uint)(lVar62 == 0 && lVar64 == 0);
      if ((lVar62 != 0) && (lVar64 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar64);
        _objc_retain();
        lVar52 = lVar62;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar68 = (uint)lVar52;
        _objc_release(lVar62);
        _objc_release(lVar64);
      }
      lVar62 = *(long *)(unaff_x20 + _DAT_11306ba58);
      lVar64 = *(long *)(lStack_a0 + _DAT_11306ba58);
      uVar71 = (uint)(lVar62 == 0 && lVar64 == 0);
      if ((lVar62 != 0) && (lVar64 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar64);
        _objc_retain();
        lVar52 = lVar62;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar71 = (uint)lVar52;
        _objc_release(lVar62);
        _objc_release(lVar64);
      }
      lVar62 = *(long *)(unaff_x20 + _DAT_11306ba60);
      lVar64 = *(long *)(lStack_a0 + _DAT_11306ba60);
      uStack_a4 = (uint)(lVar62 == 0 && lVar64 == 0);
      if ((lVar62 != 0) && (lVar64 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar64);
        _objc_retain();
        lVar52 = lVar62;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_a4 = (uint)lVar52;
        _objc_release(lVar62);
        _objc_release(lVar64);
      }
      bVar23 = *(byte *)(unaff_x20 + _DAT_11306ba68);
      bVar24 = *(byte *)(lStack_a0 + _DAT_11306ba68);
      if (*(long *)(unaff_x20 + _DAT_11306ba70) == 0) {
        uStack_110 = (uint)(*(long *)(lStack_a0 + _DAT_11306ba70) == 0);
      }
      else {
        lVar64 = *(long *)(lStack_a0 + _DAT_11306ba70);
        if (lVar64 == 0) {
          lVar62 = 0;
          alStack_98[1] = 0;
          alStack_98[2] = 0;
        }
        else {
          lVar62 = 0;
          FUN_1042cdfd8();
        }
        alStack_98[0] = lVar64;
        alStack_98[3] = lVar62;
        _objc_retain(lVar64);
        uStack_110 = 0;
        FUN_1042cade4();
        FUN_1042ca838(alStack_98,0x112d387f8,&UNK_10d902650);
      }
      bVar25 = *(byte *)(unaff_x20 + _DAT_11306ba78);
      bVar26 = *(byte *)(lStack_a0 + _DAT_11306ba78);
      iVar3 = *(int *)(unaff_x20 + _DAT_11306ba80);
      iVar4 = *(int *)(lStack_a0 + _DAT_11306ba80);
      lVar62 = *(long *)(unaff_x20 + _DAT_11306ba88);
      lVar64 = *(long *)(lStack_a0 + _DAT_11306ba88);
      uStack_a8 = (uint)(lVar62 == 0 && lVar64 == 0);
      if ((lVar62 != 0) && (lVar64 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar64);
        _objc_retain();
        lVar52 = lVar62;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_a8 = (uint)lVar52;
        _objc_release(lVar62);
        _objc_release(lVar64);
      }
      if (*(long *)(unaff_x20 + _DAT_11306ba90) == 0) {
        uStack_124 = (uint)(*(long *)(lStack_a0 + _DAT_11306ba90) == 0);
      }
      else {
        lVar64 = *(long *)(lStack_a0 + _DAT_11306ba90);
        if (lVar64 == 0) {
          lVar62 = 0;
          alStack_98[1] = 0;
          alStack_98[2] = 0;
        }
        else {
          lVar62 = 0;
          FUN_1042c3de0();
        }
        alStack_98[0] = lVar64;
        alStack_98[3] = lVar62;
        _objc_retain(lVar64);
        uStack_124 = 0;
        FUN_1042c36f8();
        FUN_1042ca838(alStack_98,0x112d387f8,&UNK_10d902650);
      }
      bVar27 = *(byte *)(unaff_x20 + _DAT_11306ba98);
      bVar28 = *(byte *)(lStack_a0 + _DAT_11306ba98);
      lVar62 = *(long *)(unaff_x20 + _DAT_11306baa0);
      lVar64 = *(long *)(lStack_a0 + _DAT_11306baa0);
      uStack_ac = (uint)(lVar62 == 0 && lVar64 == 0);
      if ((lVar62 != 0) && (lVar64 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar64);
        _objc_retain();
        lVar52 = lVar62;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_ac = (uint)lVar52;
        _objc_release(lVar62);
        _objc_release(lVar64);
      }
      lVar62 = *(long *)(unaff_x20 + _DAT_11306baa8);
      lVar64 = *(long *)(lStack_a0 + _DAT_11306baa8);
      uStack_b0 = (uint)(lVar62 == 0 && lVar64 == 0);
      if ((lVar62 != 0) && (lVar64 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar64);
        _objc_retain();
        lVar52 = lVar62;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_b0 = (uint)lVar52;
        _objc_release(lVar62);
        _objc_release(lVar64);
      }
      if (*(long *)(unaff_x20 + _DAT_11306bab0) == 0) {
        uStack_130 = (uint)(*(long *)(lStack_a0 + _DAT_11306bab0) == 0);
      }
      else {
        lVar64 = *(long *)(lStack_a0 + _DAT_11306bab0);
        if (lVar64 == 0) {
          lVar62 = 0;
          alStack_98[1] = 0;
          alStack_98[2] = 0;
        }
        else {
          lVar62 = 0;
          FUN_1042c1f54();
        }
        alStack_98[0] = lVar64;
        alStack_98[3] = lVar62;
        _objc_retain(lVar64);
        uStack_130 = 0;
        FUN_1042c0aec();
        FUN_1042ca838(alStack_98,0x112d387f8,&UNK_10d902650);
      }
      lVar62 = *(long *)(unaff_x20 + _DAT_11306bab8);
      lVar64 = *(long *)(lStack_a0 + _DAT_11306bab8);
      uStack_b4 = (uint)(lVar62 == 0 && lVar64 == 0);
      if ((lVar62 != 0) && (lVar64 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar64);
        _objc_retain();
        lVar52 = lVar62;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_b4 = (uint)lVar52;
        _objc_release(lVar62);
        _objc_release(lVar64);
      }
      lVar62 = *(long *)(unaff_x20 + _DAT_11306bac0);
      lVar64 = *(long *)(lStack_a0 + _DAT_11306bac0);
      uStack_b8 = (uint)(lVar62 == 0 && lVar64 == 0);
      if ((lVar62 != 0) && (lVar64 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar64);
        _objc_retain();
        lVar52 = lVar62;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_b8 = (uint)lVar52;
        _objc_release(lVar62);
        _objc_release(lVar64);
      }
      bVar29 = *(byte *)(unaff_x20 + _DAT_11306bac8);
      bVar30 = *(byte *)(lStack_a0 + _DAT_11306bac8);
      if (*(long *)(unaff_x20 + _DAT_11306bad0) == 0) {
        uStack_13c = (uint)(*(long *)(lStack_a0 + _DAT_11306bad0) == 0);
      }
      else {
        lVar64 = *(long *)(lStack_a0 + _DAT_11306bad0);
        if (lVar64 == 0) {
          lVar62 = 0;
          alStack_98[1] = 0;
          alStack_98[2] = 0;
        }
        else {
          lVar62 = 0;
          FUN_1042cf324();
        }
        alStack_98[0] = lVar64;
        alStack_98[3] = lVar62;
        _objc_retain(lVar64);
        uStack_13c = 0;
        FUN_1042ce148();
        FUN_1042ca838(alStack_98,0x112d387f8,&UNK_10d902650);
      }
      lVar64 = *(long *)(unaff_x20 + _DAT_11306bad8);
      uVar56 = (uint)(lVar64 == 0 && *(long *)(lStack_a0 + _DAT_11306bad8) == 0);
      if ((lVar64 != 0) && (*(long *)(lStack_a0 + _DAT_11306bad8) != 0)) {
        func_0x0001020f35dc();
        uVar56 = (uint)lVar64;
      }
      lVar64 = ((long *)(unaff_x20 + _DAT_11306bae0))[1];
      lVar62 = ((long *)(lStack_a0 + _DAT_11306bae0))[1];
      uVar50 = (uint)(lVar64 == 0 && lVar62 == 0);
      if ((lVar64 != 0) && (lVar62 != 0)) {
        lVar52 = *(long *)(unaff_x20 + _DAT_11306bae0);
        if ((lVar52 == *(long *)(lStack_a0 + _DAT_11306bae0)) && (lVar64 == lVar62)) {
          uVar50 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar50 = (uint)lVar52;
        }
      }
      bVar31 = *(byte *)(unaff_x20 + _DAT_11306bae8);
      bVar32 = *(byte *)(lStack_a0 + _DAT_11306bae8);
      bVar33 = *(byte *)(unaff_x20 + _DAT_11306baf0);
      bVar34 = *(byte *)(lStack_a0 + _DAT_11306baf0);
      lVar62 = *(long *)(unaff_x20 + _DAT_11306baf8);
      lVar64 = *(long *)(lStack_a0 + _DAT_11306baf8);
      uVar65 = (uint)(lVar62 == 0 && lVar64 == 0);
      if ((lVar62 != 0) && (lVar64 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar64);
        _objc_retain();
        lVar52 = lVar62;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar65 = (uint)lVar52;
        _objc_release(lVar62);
        _objc_release(lVar64);
      }
      iVar5 = *(int *)(unaff_x20 + _DAT_11306bb00);
      iVar6 = *(int *)(lStack_a0 + _DAT_11306bb00);
      bVar35 = *(byte *)(unaff_x20 + _DAT_11306bb08);
      bVar36 = *(byte *)(lStack_a0 + _DAT_11306bb08);
      iVar7 = *(int *)(unaff_x20 + _DAT_11306bb10);
      iVar8 = *(int *)(lStack_a0 + _DAT_11306bb10);
      lVar59 = *(long *)(unaff_x20 + _DAT_11306bb18);
      lVar52 = *(long *)(lStack_a0 + _DAT_11306bb18);
      lVar60 = *(long *)(unaff_x20 + _DAT_11306bb20);
      lVar58 = *(long *)(lStack_a0 + _DAT_11306bb20);
      bVar37 = *(byte *)(unaff_x20 + _DAT_11306bb28);
      bVar38 = *(byte *)(lStack_a0 + _DAT_11306bb28);
      bVar39 = *(byte *)(unaff_x20 + _DAT_11306bb30);
      bVar40 = *(byte *)(lStack_a0 + _DAT_11306bb30);
      iVar9 = *(int *)(unaff_x20 + _DAT_11306bb38);
      iVar10 = *(int *)(lStack_a0 + _DAT_11306bb38);
      bVar41 = *(byte *)(unaff_x20 + _DAT_11306bb40);
      bVar42 = *(byte *)(lStack_a0 + _DAT_11306bb40);
      bVar43 = *(byte *)(unaff_x20 + _DAT_11306bb48);
      bVar44 = *(byte *)(lStack_a0 + _DAT_11306bb48);
      bVar45 = *(byte *)(unaff_x20 + _DAT_11306bb50);
      bVar46 = *(byte *)(lStack_a0 + _DAT_11306bb50);
      lVar62 = *(long *)(unaff_x20 + _DAT_11306bb60);
      lVar64 = *(long *)(lStack_a0 + _DAT_11306bb60);
      uVar67 = (uint)(lVar62 == 0 && lVar64 == 0);
      bVar47 = *(byte *)(unaff_x20 + _DAT_11306bb58);
      bVar48 = *(byte *)(lStack_a0 + _DAT_11306bb58);
      if ((lVar62 != 0) && (lVar64 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar64);
        _objc_retain();
        lVar53 = lVar62;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar67 = (uint)lVar53;
        _objc_release(lVar62);
        _objc_release(lVar64);
      }
      lVar62 = *(long *)(unaff_x20 + _DAT_11306bb68);
      lVar64 = *(long *)(lStack_a0 + _DAT_11306bb68);
      uVar69 = (uint)(lVar62 == 0 && lVar64 == 0);
      if ((lVar62 != 0) && (lVar64 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar64);
        _objc_retain();
        lVar53 = lVar62;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar69 = (uint)lVar53;
        _objc_release(lVar62);
        _objc_release(lVar64);
      }
      lVar62 = *(long *)(unaff_x20 + _DAT_11306bb70);
      lVar64 = *(long *)(lStack_a0 + _DAT_11306bb70);
      uVar63 = (uint)(lVar62 == 0 && lVar64 == 0);
      if ((lVar62 != 0) && (lVar64 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar64);
        _objc_retain();
        lVar53 = lVar62;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar63 = (uint)lVar53;
        _objc_release(lVar62);
        _objc_release(lVar64);
      }
      lVar64 = ((long *)(unaff_x20 + _DAT_11306bb78))[1];
      lVar62 = ((long *)(lStack_a0 + _DAT_11306bb78))[1];
      uVar70 = (uint)(lVar64 == 0 && lVar62 == 0);
      if ((lVar64 != 0) && (lVar62 != 0)) {
        lVar53 = *(long *)(unaff_x20 + _DAT_11306bb78);
        if ((lVar53 == *(long *)(lStack_a0 + _DAT_11306bb78)) && (lVar64 == lVar62)) {
          uVar70 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar70 = (uint)lVar53;
        }
      }
      lVar62 = *(long *)(unaff_x20 + _DAT_11306bb80);
      lVar64 = *(long *)(lStack_a0 + _DAT_11306bb80);
      if (lVar62 == 0) {
        lVar53 = lVar64;
        _objc_retain(lVar64);
        _objc_release(lStack_a0);
        if (lVar64 != 0) {
          uVar61 = 0;
          goto LAB_1042c53fc;
        }
        uVar61 = 1;
      }
      else {
        uVar61 = 0;
        lVar53 = lStack_a0;
        if (lVar64 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar64);
          _objc_retain(lVar62);
          lVar54 = lVar62;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar61 = (uint)lVar54;
          _objc_release(lVar62);
          _objc_release(lVar64);
        }
LAB_1042c53fc:
        _objc_release(lVar53);
      }
      uVar57 = 0;
      if (((((((((((uStack_cc &
                    ((byte)(bVar11 ^ bVar12 | bVar13 ^ bVar14 | bVar15 ^ bVar16 | dVar72 != dVar73)
                    ^ 0xffffffff) & uVar49 & uVar66 & ((bVar17 ^ bVar18) ^ 0xffffffff) &
                    iVar1 == iVar2 & uVar55 ^ 1 | (uint)(byte)(bVar19 ^ bVar20 | bVar21 ^ bVar22)) ^
                  1) & uVar68 & uVar71 & uStack_a4 & ((bVar23 ^ bVar24) ^ 0xffffffff) & uStack_110 &
                  ((bVar25 ^ bVar26) ^ 0xffffffff) &
                  iVar3 == iVar4 & uStack_a8 & uStack_124 & ((bVar27 ^ bVar28) ^ 1) & uStack_ac &
                  uStack_b0 & uStack_130 & uStack_b4 & uStack_b8 & ((bVar29 ^ bVar30) ^ 0xffffffff)
                 & uStack_13c & uVar56 & uVar50) != 0) && (((bVar31 ^ bVar32) & 1) == 0)) &&
              (((bVar33 ^ bVar34) & 1) == 0)) && ((((uVar65 ^ 1) & 1) == 0 && (iVar5 == iVar6)))) &&
            ((((bVar35 ^ bVar36) & 1) == 0 && ((iVar7 == iVar8 && (lVar59 == lVar52)))))) &&
           ((lVar60 == lVar58 &&
            (((((bVar37 ^ bVar38) & 1) == 0 && (((bVar39 ^ bVar40) & 1) == 0)) && (iVar9 == iVar10))
            )))) && ((((((bVar41 ^ bVar42) & 1) == 0 && (((bVar43 ^ bVar44) & 1) == 0)) &&
                      ((((bVar45 ^ bVar46) & 1) == 0 &&
                       ((((bVar47 ^ bVar48) & 1) == 0 && (((uVar67 ^ 1) & 1) == 0)))))) &&
                     (((uVar69 ^ 1) & 1) == 0)))) && (((uVar63 ^ 1) & 1) == 0)) {
        uVar57 = uVar70 & uVar61;
      }
      goto LAB_1042c4890;
    }
  }
  uVar57 = 0;
LAB_1042c4890:
  return uVar57 & 1;
}



/* Entry: 1042c5610; end: 1042c561f; -[SCAdWebViewTrackInfo loadedOnEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c5610(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b9f0);
}



/* Entry: 1042c5620; end: 1042c562f; -[SCAdWebViewTrackInfo loadedOnExit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c5620(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b9f8);
}



/* Entry: 1042c5630; end: 1042c563f; -[SCAdWebViewTrackInfo visiblePageLoadTimeSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042c5630(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ba00);
}



/* Entry: 1042c5640; end: 1042c564f; -[SCAdWebViewTrackInfo isPixelCookieAvailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c5640(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ba08);
}



/* Entry: 1042c5650; end: 1042c565f; -[SCAdWebViewTrackInfo initialPageLoadStatusCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c5650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ba10));
  return;
}



/* Entry: 1042c5660; end: 1042c566b; -[SCAdWebViewTrackInfo exbInAppResolvedHtmlUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c5660(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ba18))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ba18);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042c566c; end: 1042c567b; -[SCAdWebViewTrackInfo exbInAppHtmlUrlResolveRedirectCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c566c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ba20));
  return;
}



/* Entry: 1042c567c; end: 1042c568b; -[SCAdWebViewTrackInfo loadedPrefetchHints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c567c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ba28);
}



/* Entry: 1042c568c; end: 1042c569b; -[SCAdWebViewTrackInfo prefetchMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042c568c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ba30);
}



/* Entry: 1042c569c; end: 1042c56af; -[SCAdWebViewTrackInfo gaHitTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c569c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306ba38);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1042c56b0; end: 1042c56bf; -[SCAdWebViewTrackInfo hasGAPageViewHit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c56b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ba40);
}



/* Entry: 1042c56c0; end: 1042c56cf; -[SCAdWebViewTrackInfo hasGAPageViewHitInLandingPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c56c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ba48);
}



/* Entry: 1042c56d0; end: 1042c56df; -[SCAdWebViewTrackInfo firstGAHitLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c56d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ba50));
  return;
}



/* Entry: 1042c56e0; end: 1042c56ef; -[SCAdWebViewTrackInfo firstGATsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c56e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ba58));
  return;
}



/* Entry: 1042c56f0; end: 1042c56ff; -[SCAdWebViewTrackInfo gaHitCounts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c56f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ba60));
  return;
}



/* Entry: 1042c5700; end: 1042c570f; -[SCAdWebViewTrackInfo hasGAIncluded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c5700(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ba68);
}



/* Entry: 1042c5710; end: 1042c571f; -[SCAdWebViewTrackInfo webViewLoadInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c5710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ba70));
  return;
}



/* Entry: 1042c5720; end: 1042c572f; -[SCAdWebViewTrackInfo didOpenInBrowser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c5720(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ba78);
}



/* Entry: 1042c5730; end: 1042c573f; -[SCAdWebViewTrackInfo browserType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042c5730(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ba80);
}



/* Entry: 1042c5740; end: 1042c574f; -[SCAdWebViewTrackInfo firstPixelRequestLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c5740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ba88));
  return;
}



/* Entry: 1042c5750; end: 1042c575f; -[SCAdWebViewTrackInfo performanceInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c5750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ba90));
  return;
}



/* Entry: 1042c5760; end: 1042c576f; -[SCAdWebViewTrackInfo hasSubsequentNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c5760(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ba98);
}



/* Entry: 1042c5770; end: 1042c577f; -[SCAdWebViewTrackInfo firstAdobePingTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c5770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306baa0));
  return;
}



/* Entry: 1042c5780; end: 1042c578f; -[SCAdWebViewTrackInfo adobePingCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c5780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306baa8));
  return;
}



/* Entry: 1042c5790; end: 1042c579f; -[SCAdWebViewTrackInfo autofillInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c5790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bab0));
  return;
}



/* Entry: 1042c57a0; end: 1042c57af; -[SCAdWebViewTrackInfo htmlPrefetchStartTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c57a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bab8));
  return;
}



/* Entry: 1042c57b0; end: 1042c57bf; -[SCAdWebViewTrackInfo htmlPrefetchEndTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c57b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bac0));
  return;
}



/* Entry: 1042c57c0; end: 1042c57cf; -[SCAdWebViewTrackInfo loadPrefetchedHtml] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c57c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306bac8);
}



/* Entry: 1042c57d0; end: 1042c57df; -[SCAdWebViewTrackInfo userInteractionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c57d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bad0));
  return;
}



/* Entry: 1042c57e0; end: 1042c57f3; -[SCAdWebViewTrackInfo additionalNavigationTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c57e0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306bad8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1042c57f4; end: 1042c5843;  */

void FUN_1042c57f4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1042c5844; end: 1042c584f; -[SCAdWebViewTrackInfo url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c5844(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306bae0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306bae0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042c5850; end: 1042c585f; -[SCAdWebViewTrackInfo attemptDeeplink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c5850(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306bae8);
}



/* Entry: 1042c5860; end: 1042c586f; -[SCAdWebViewTrackInfo deeplinkSucceed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c5860(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306baf0);
}



/* Entry: 1042c5870; end: 1042c587f; -[SCAdWebViewTrackInfo detectCidParamsDrop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c5870(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306baf8));
  return;
}



/* Entry: 1042c5880; end: 1042c588f; -[SCAdWebViewTrackInfo exbInAppHtmlResolveStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042c5880(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306bb00);
}



/* Entry: 1042c5890; end: 1042c589f; -[SCAdWebViewTrackInfo openExbSubNav] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c5890(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306bb08);
}



/* Entry: 1042c58a0; end: 1042c58af; -[SCAdWebViewTrackInfo exitMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042c58a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306bb10);
}



/* Entry: 1042c58b0; end: 1042c58bf; -[SCAdWebViewTrackInfo scrollCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042c58b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306bb18);
}



/* Entry: 1042c58c0; end: 1042c58cf; -[SCAdWebViewTrackInfo tapCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042c58c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306bb20);
}



/* Entry: 1042c58d0; end: 1042c58df; -[SCAdWebViewTrackInfo isInstantPageEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c58d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306bb28);
}



/* Entry: 1042c58e0; end: 1042c58ef; -[SCAdWebViewTrackInfo isShopPayUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c58e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306bb30);
}



/* Entry: 1042c58f0; end: 1042c58ff; -[SCAdWebViewTrackInfo instantPageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042c58f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306bb38);
}



/* Entry: 1042c5900; end: 1042c590f; -[SCAdWebViewTrackInfo didShowInstantPageFallbackWebView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c5900(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306bb40);
}



/* Entry: 1042c5910; end: 1042c591f; -[SCAdWebViewTrackInfo didTapExternalBrowserButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c5910(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306bb48);
}



/* Entry: 1042c5920; end: 1042c592f; -[SCAdWebViewTrackInfo didTapCopyLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c5920(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306bb50);
}



/* Entry: 1042c5930; end: 1042c593f; -[SCAdWebViewTrackInfo didPresentSkoverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042c5930(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306bb58);
}



/* Entry: 1042c5940; end: 1042c594f; -[SCAdWebViewTrackInfo retargetPromptRenderedMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c5940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bb60));
  return;
}



/* Entry: 1042c5950; end: 1042c595f; -[SCAdWebViewTrackInfo retargetPromptTapCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c5950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bb68));
  return;
}



/* Entry: 1042c5960; end: 1042c596f; -[SCAdWebViewTrackInfo retargetPromptExbOpenedMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c5960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bb70));
  return;
}



/* Entry: 1042c5970; end: 1042c597b; -[SCAdWebViewTrackInfo retargetPromptUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c5970(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306bb78))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306bb78);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042c597c; end: 1042c59d3;  */

void FUN_1042c597c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042c59d4; end: 1042c59e3; -[SCAdWebViewTrackInfo retargetPromptDismissMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c59d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bb80));
  return;
}



/* Entry: 1042c59e4; end: 1042c6303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c59e4(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined1 param_17,undefined4 param_18,undefined8 param_19,undefined1 param_20,
                  undefined4 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined1 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined1 param_32,
                  undefined4 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined4 param_38,undefined4 param_39,undefined8 param_40,
                  undefined8 param_41,undefined1 param_42,undefined4 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined4 param_47,undefined4 param_48,
                  undefined8 param_49,undefined4 param_50,undefined4 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_88 [24];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306b9f0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11306b9f8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306ba00) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11306ba08) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306ba10) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ba18);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306ba20) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_11306ba28) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306ba30) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11306ba38) = param_11;
  *(undefined1 *)(unaff_x20 + _DAT_11306ba40) = (undefined1)param_12;
  *(undefined1 *)(unaff_x20 + _DAT_11306ba48) = param_12._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11306ba50) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11306ba58) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_11306ba60) = param_16;
  *(undefined1 *)(unaff_x20 + _DAT_11306ba68) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_11306ba70) = param_19;
  *(undefined1 *)(unaff_x20 + _DAT_11306ba78) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_11306ba80) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_11306ba88) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_11306ba90) = param_24;
  *(undefined1 *)(unaff_x20 + _DAT_11306ba98) = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_11306baa0) = param_27;
  *(undefined8 *)(unaff_x20 + _DAT_11306baa8) = param_28;
  *(undefined8 *)(unaff_x20 + _DAT_11306bab0) = param_29;
  *(undefined8 *)(unaff_x20 + _DAT_11306bab8) = param_30;
  *(undefined8 *)(unaff_x20 + _DAT_11306bac0) = param_31;
  *(undefined1 *)(unaff_x20 + _DAT_11306bac8) = param_32;
  *(undefined8 *)(unaff_x20 + _DAT_11306bad0) = param_34;
  *(undefined8 *)(unaff_x20 + _DAT_11306bad8) = param_35;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306bae0);
  *puVar1 = param_36;
  puVar1[1] = param_37;
  *(undefined1 *)(unaff_x20 + _DAT_11306bae8) = (undefined1)param_38;
  *(undefined1 *)(unaff_x20 + _DAT_11306baf0) = param_38._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11306baf8) = param_40;
  *(undefined8 *)(unaff_x20 + _DAT_11306bb00) = param_41;
  *(undefined1 *)(unaff_x20 + _DAT_11306bb08) = param_42;
  *(undefined8 *)(unaff_x20 + _DAT_11306bb10) = param_44;
  *(undefined8 *)(unaff_x20 + _DAT_11306bb18) = param_45;
  *(undefined8 *)(unaff_x20 + _DAT_11306bb20) = param_46;
  *(undefined1 *)(unaff_x20 + _DAT_11306bb28) = (undefined1)param_47;
  *(undefined1 *)(unaff_x20 + _DAT_11306bb30) = param_47._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11306bb38) = param_49;
  *(undefined1 *)(unaff_x20 + _DAT_11306bb40) = (undefined1)param_50;
  *(undefined1 *)(unaff_x20 + _DAT_11306bb48) = param_50._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11306bb50) = param_50._2_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11306bb58) = param_50._3_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11306bb60) = param_52;
  *(undefined8 *)(unaff_x20 + _DAT_11306bb68) = param_53;
  *(undefined8 *)(unaff_x20 + _DAT_11306bb70) = param_54;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306bb78);
  *puVar1 = param_55;
  puVar1[1] = param_56;
  *(undefined8 *)(unaff_x20 + _DAT_11306bb80) = param_57;
  _objc_msgSendSuper2(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042c6304; end: 1042c677f; -[SCAdWebViewTrackInfo initWithLoadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:isPixelCookieAvailable:initialPageLoadStatusCode:exbInAppResolvedHtmlUrl:exbInAppHtmlUrlResolveRedirectCount:loadedPrefetchHints:prefetchMode:gaHitTypes:hasGAPageViewHit:hasGAPageViewHitInLandingPage:firstGAHitLatency:firstGATsMs:gaHitCounts:hasGAIncluded:webViewLoadInfo:didOpenInBrowser:browserType:firstPixelRequestLatency:performanceInfo:hasSubsequentNavigation:firstAdobePingTsMs:adobePingCount:autofillInfo:htmlPrefetchStartTsMs:htmlPrefetchEndTsMs:loadPrefetchedHtml:userInteractionInfo:additionalNavigationTypes:url:attemptDeeplink:deeplinkSucceed:detectCidParamsDrop:exbInAppHtmlResolveStatus:openExbSubNav:exitMethod:scrollCount:tapCount:isInstantPageEnabled:isShopPayUser:instantPageType:didShowInstantPageFallbackWebView:didTapExternalBrowserButton:didTapCopyLink:didPresentSkoverlay:retargetPromptRenderedMs:retargetPromptTapCount:retargetPromptExbOpenedMs:retargetPromptUrl:retargetPromptDismissMs:] */

void FUN_1042c6304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  long param_13,undefined1 param_14)

{
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_00000120;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  if (param_8 == 0) {
    uStack_a0 = 0;
    lStack_98 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a0 = param_3;
    lStack_98 = param_8;
  }
  if (param_13 == 0) {
    lStack_a8 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    lStack_a8 = param_13;
  }
  if (in_stack_000000a8 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  }
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (in_stack_000000b0 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_000000b0);
  }
  if (in_stack_00000120 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000120);
  }
  func_0x0001042c5e7c(param_1,param_4,param_5,param_6,param_7,lStack_98,uStack_a0,param_9,param_10,
                      param_12,lStack_a8,param_14);
  return;
}



/* Entry: 1042c6780; end: 1042c67af;  */

undefined8 FUN_1042c6780(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1042c96c8();
  func_0x00010178e244(param_1);
  return uVar1;
}



/* Entry: 1042c67b0; end: 1042c67e3; -[SCAdWebViewTrackInfo hash] */

undefined8 FUN_1042c67b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042c3e80();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042c67e4; end: 1042c6873; -[SCAdWebViewTrackInfo isEqual:] */

uint FUN_1042c67e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1042c4774(&uStack_40);
  _objc_release(param_1);
  FUN_1042ca838(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1042c6874; end: 1042c6877; -[SCAdWebViewTrackInfo copyWithZone:] */

void FUN_1042c6874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042c6878; end: 1042c76ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c6878(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = 0x4f5f444544414f4c;
  uVar1 = uVar3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5f444544414f4c,0xef5952544e455f4e);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5f444544414f4c,0xee00544958455f4e);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306ba00);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f0520);
  func_0x00010bf92e80(uVar3,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f34c0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1f34e0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ba18))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ba18);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar3 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f3500);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar3);
  uVar1 = 0xd00000000000002a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1f3520);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f3550);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4843544546455250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4843544546455250,0xed000045444f4d5f);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306ba38);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSSN_11034da80);
  }
  uVar1 = 0x545f5449485f4147;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f5449485f4147,0xec00000053455059);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f3570);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f3590);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f35c0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x41475f5453524946;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41475f5453524946,0xed0000534d5f5354);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x435f5449485f4147;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x435f5449485f4147,0xed000053544e554f);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4e4941475f534148;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4941475f534148,0xee00444544554c43);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f35e0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f3600);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5f524553574f5242;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f524553574f5242,0xec00000045505954);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f3620);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f3640);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f3660);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f3680);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f36a0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4c4c49464f545541;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4c49464f545541,0xed00004f464e495f);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f36c0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f36e0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f3700);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f3720);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306bad8);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSiN_11034deb0);
  }
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f3740);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar2);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306bae0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306bae0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar3 = 0x4c5255;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5255,0xe300000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar3);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f3760);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f3780);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f37a0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f37c0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f37e0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x54454d5f54495845;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54454d5f54495845,0xeb00000000444f48);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x435f4c4c4f524353;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x435f4c4c4f524353,0xec000000544e554f);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4e554f435f504154;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e554f435f504154,0xe900000000000054);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f3800);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f3820);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f3840);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000027;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000027,0x800000010f1f3860);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f3890);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f38b0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f38d0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f38f0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f3910);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1f3930);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306bb78))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306bb78);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar3 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f3950);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar3);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f3970);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1042c76ac; end: 1042c76fb; -[SCAdWebViewTrackInfo encodeWithCoder:] */

void FUN_1042c76ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042c6878(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042c76fc; end: 1042c772b;  */

void FUN_1042c76fc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042c772c(param_1);
  return;
}



/* Entry: 1042c772c; end: 1042c943f;  */

undefined8 FUN_1042c772c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_238;
  long lStack_228;
  long lStack_220;
  long lStack_210;
  long lStack_1c0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_138;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  uVar5 = 0x4f5f444544414f4c;
  uVar2 = uVar5;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5f444544414f4c,0xef5952544e455f4e);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5f444544414f4c,0xee00544958455f4e);
  func_0x00010bf66ce0();
  _objc_release(uVar5);
  uVar2 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f0520);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f34c0);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1f34e0);
  uVar3 = param_2;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  lStack_88 = lStack_a8;
  uStack_90 = uStack_b0;
  if (lStack_a8 == 0) {
    FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
    lStack_d8 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    plVar4 = &lStack_d0;
    _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
    lStack_d8 = lStack_d0;
    if ((int)plVar4 == 0) {
      lStack_d8 = 0;
    }
  }
  uVar2 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f3500);
  uVar3 = param_2;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  lStack_88 = lStack_a8;
  uStack_90 = uStack_b0;
  if (lStack_a8 == 0) {
    FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
    lStack_108 = 0;
    lVar10 = 0;
  }
  else {
    plVar4 = &lStack_d0;
    _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar10 = lStack_c8;
    lStack_108 = lStack_d0;
    if ((int)plVar4 == 0) {
      lStack_108 = 0;
      lVar10 = 0;
    }
  }
  uVar2 = 0xd00000000000002a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1f3520);
  uVar3 = param_2;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  lStack_88 = lStack_a8;
  uStack_90 = uStack_b0;
  if (lStack_a8 == 0) {
    FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
    lVar8 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    plVar4 = &lStack_d0;
    _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
    lVar8 = lStack_d0;
    if ((int)plVar4 == 0) {
      lVar8 = 0;
    }
  }
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f3550);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0x4843544546455250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4843544546455250,0xed000045444f4d5f);
  uVar3 = param_2;
  func_0x00010bf66f40();
  _objc_release(uVar2);
  if (uVar3 < 4) {
    uVar2 = 0x545f5449485f4147;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f5449485f4147,0xec00000053455059);
    uVar3 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
      _swift_unknownObjectRelease(uVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
      lStack_110 = 0;
    }
    else {
      uVar2 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      plVar4 = &lStack_d0;
      _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
      lStack_110 = lStack_d0;
      if ((int)plVar4 == 0) {
        lStack_110 = 0;
      }
    }
    uVar2 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f3570);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0xd000000000000023;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f3590);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f35c0);
    uVar3 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
      _swift_unknownObjectRelease(uVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
      lStack_f0 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar4 = &lStack_d0;
      _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
      lStack_f0 = lStack_d0;
      if ((int)plVar4 == 0) {
        lStack_f0 = 0;
      }
    }
    uVar2 = 0x41475f5453524946;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41475f5453524946,0xed0000534d5f5354);
    uVar3 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
      _swift_unknownObjectRelease(uVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
      lStack_f8 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar4 = &lStack_d0;
      _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
      lStack_f8 = lStack_d0;
      if ((int)plVar4 == 0) {
        lStack_f8 = 0;
      }
    }
    uVar2 = 0x435f5449485f4147;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x435f5449485f4147,0xed000053544e554f);
    uVar3 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
      _swift_unknownObjectRelease(uVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
      lStack_100 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar4 = &lStack_d0;
      _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
      lStack_100 = lStack_d0;
      if ((int)plVar4 == 0) {
        lStack_100 = 0;
      }
    }
    uVar2 = 0x4e4941475f534148;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4941475f534148,0xee00444544554c43);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f35e0);
    uVar3 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
      _swift_unknownObjectRelease(uVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
      lVar6 = 0;
    }
    else {
      uVar2 = 0;
      FUN_1042cdfd8(0);
      plVar4 = &lStack_d0;
      _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
      lVar6 = lStack_d0;
      if ((int)plVar4 == 0) {
        lVar6 = 0;
      }
    }
    uVar2 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f3600);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0x5f524553574f5242;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f524553574f5242,0xec00000045505954);
    uVar3 = param_2;
    func_0x00010bf66f40();
    _objc_release(uVar2);
    if (uVar3 < 4) {
      uVar2 = 0xd00000000000001b;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f3620);
      uVar3 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
        lStack_138 = 0;
      }
      else {
        uVar2 = 0;
        func_0x0001002ed07c(0);
        plVar4 = &lStack_d0;
        _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
        lStack_138 = lStack_d0;
        if ((int)plVar4 == 0) {
          lStack_138 = 0;
        }
      }
      uVar2 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f3640);
      uVar3 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
        lStack_188 = 0;
      }
      else {
        uVar2 = 0;
        FUN_1042c3de0(0);
        plVar4 = &lStack_d0;
        _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
        lStack_188 = lStack_d0;
        if ((int)plVar4 == 0) {
          lStack_188 = 0;
        }
      }
      uVar2 = 0xd000000000000019;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f3660);
      func_0x00010bf66ce0();
      _objc_release(uVar2);
      uVar2 = 0xd000000000000016;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f3680);
      uVar3 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
        lStack_198 = 0;
      }
      else {
        uVar2 = 0;
        func_0x0001002ed07c(0);
        plVar4 = &lStack_d0;
        _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
        lStack_198 = lStack_d0;
        if ((int)plVar4 == 0) {
          lStack_198 = 0;
        }
      }
      uVar2 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f36a0);
      uVar3 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
        lStack_160 = 0;
      }
      else {
        uVar2 = 0;
        func_0x0001002ed07c(0);
        plVar4 = &lStack_d0;
        _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
        lStack_160 = lStack_d0;
        if ((int)plVar4 == 0) {
          lStack_160 = 0;
        }
      }
      uVar2 = 0x4c4c49464f545541;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4c49464f545541,0xed00004f464e495f);
      uVar3 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
        lStack_168 = 0;
      }
      else {
        uVar2 = 0;
        FUN_1042c1f54(0);
        plVar4 = &lStack_d0;
        _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
        lStack_168 = lStack_d0;
        if ((int)plVar4 == 0) {
          lStack_168 = 0;
        }
      }
      uVar2 = 0xd000000000000019;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f36c0);
      uVar3 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
        lStack_170 = 0;
      }
      else {
        uVar2 = 0;
        func_0x0001002ed07c(0);
        plVar4 = &lStack_d0;
        _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
        lStack_170 = lStack_d0;
        if ((int)plVar4 == 0) {
          lStack_170 = 0;
        }
      }
      uVar2 = 0xd000000000000017;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f36e0);
      uVar3 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
        lStack_178 = 0;
      }
      else {
        uVar2 = 0;
        func_0x0001002ed07c(0);
        plVar4 = &lStack_d0;
        _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
        lStack_178 = lStack_d0;
        if ((int)plVar4 == 0) {
          lStack_178 = 0;
        }
      }
      uVar2 = 0xd000000000000014;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f3700);
      func_0x00010bf66ce0();
      _objc_release(uVar2);
      uVar2 = 0xd000000000000015;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f3720);
      uVar3 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
        lStack_180 = 0;
      }
      else {
        uVar2 = 0;
        FUN_1042cf324(0);
        plVar4 = &lStack_d0;
        _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
        lStack_180 = lStack_d0;
        if ((int)plVar4 == 0) {
          lStack_180 = 0;
        }
      }
      uVar2 = 0xd00000000000001b;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f3740);
      uVar3 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
        lStack_1a0 = 0;
      }
      else {
        uVar2 = 0x112d4b170;
        func_0x0001000285a8(0x112d4b170,&UNK_10d911a80);
        plVar4 = &lStack_d0;
        _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
        lStack_1a0 = lStack_d0;
        if ((int)plVar4 == 0) {
          lStack_1a0 = 0;
        }
      }
      uVar2 = 0x4c5255;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5255,0xe300000000000000);
      uVar3 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
        lStack_1c0 = 0;
        lStack_1a8 = 0;
      }
      else {
        plVar4 = &lStack_d0;
        _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,PTR___sSSN_11034da80,6);
        lStack_1c0 = lStack_d0;
        lStack_1a8 = lStack_c8;
        if ((int)plVar4 == 0) {
          lStack_1c0 = 0;
          lStack_1a8 = 0;
        }
      }
      uVar2 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f3760);
      func_0x00010bf66ce0();
      _objc_release(uVar2);
      uVar2 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f3780);
      func_0x00010bf66ce0();
      _objc_release(uVar2);
      uVar2 = 0xd000000000000016;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f37a0);
      uVar3 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
        lVar11 = 0;
      }
      else {
        uVar2 = 0;
        func_0x0001002ed07c(0);
        plVar4 = &lStack_d0;
        _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
        lVar11 = lStack_d0;
        if ((int)plVar4 == 0) {
          lVar11 = 0;
        }
      }
      uVar2 = 0xd00000000000001e;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f37c0);
      uVar3 = param_2;
      func_0x00010bf66f40();
      _objc_release(uVar2);
      if (uVar3 < 5) {
        uVar2 = 0xd000000000000010;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f37e0)
        ;
        func_0x00010bf66ce0();
        _objc_release(uVar2);
        uVar2 = 0x54454d5f54495845;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54454d5f54495845,0xeb00000000444f48)
        ;
        uVar3 = param_2;
        func_0x00010bf66f40();
        _objc_release(uVar2);
        if (uVar3 < 4) {
          uVar2 = 0x435f4c4c4f524353;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0x435f4c4c4f524353,0xec000000544e554f);
          func_0x00010bf66f40();
          _objc_release(uVar2);
          uVar2 = 0x4e554f435f504154;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0x4e554f435f504154,0xe900000000000054);
          func_0x00010bf66f40();
          _objc_release(uVar2);
          uVar2 = 0xd000000000000017;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000017,0x800000010f1f3800);
          func_0x00010bf66ce0();
          _objc_release(uVar2);
          uVar2 = 0xd000000000000010;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000010,0x800000010f1f3820);
          func_0x00010bf66ce0();
          _objc_release(uVar2);
          uVar2 = 0xd000000000000011;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000011,0x800000010f1f3840);
          uVar3 = param_2;
          func_0x00010bf66f40();
          _objc_release(uVar2);
          if (uVar3 < 5) {
            uVar2 = 0xd000000000000027;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd000000000000027,0x800000010f1f3860);
            func_0x00010bf66ce0();
            _objc_release(uVar2);
            uVar2 = 0xd00000000000001f;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd00000000000001f,0x800000010f1f3890);
            func_0x00010bf66ce0();
            _objc_release(uVar2);
            uVar2 = 0xd000000000000011;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd000000000000011,0x800000010f1f38b0);
            func_0x00010bf66ce0();
            _objc_release(uVar2);
            uVar2 = 0xd000000000000015;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd000000000000015,0x800000010f1f38d0);
            func_0x00010bf66ce0();
            _objc_release(uVar2);
            uVar2 = 0xd00000000000001b;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd00000000000001b,0x800000010f1f38f0);
            uVar3 = param_2;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar2);
            if (uVar3 == 0) {
              uStack_b8 = 0;
              uStack_c0 = 0;
              lStack_a8 = 0;
              uStack_b0 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
              _swift_unknownObjectRelease(uVar3);
            }
            uStack_98 = uStack_b8;
            uStack_a0 = uStack_c0;
            lStack_88 = lStack_a8;
            uStack_90 = uStack_b0;
            if (lStack_a8 == 0) {
              FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
              lStack_210 = 0;
            }
            else {
              uVar2 = 0;
              func_0x0001002ed07c(0);
              plVar4 = &lStack_d0;
              _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
              lStack_210 = lStack_d0;
              if ((int)plVar4 == 0) {
                lStack_210 = 0;
              }
            }
            uVar2 = 0xd000000000000019;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd000000000000019,0x800000010f1f3910);
            uVar3 = param_2;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar2);
            if (uVar3 == 0) {
              uStack_b8 = 0;
              uStack_c0 = 0;
              lStack_a8 = 0;
              uStack_b0 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
              _swift_unknownObjectRelease(uVar3);
            }
            uStack_98 = uStack_b8;
            uStack_a0 = uStack_c0;
            lStack_88 = lStack_a8;
            uStack_90 = uStack_b0;
            if (lStack_a8 == 0) {
              FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
              lStack_220 = 0;
            }
            else {
              uVar2 = 0;
              func_0x0001002ed07c(0);
              plVar4 = &lStack_d0;
              _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
              lStack_220 = lStack_d0;
              if ((int)plVar4 == 0) {
                lStack_220 = 0;
              }
            }
            uVar2 = 0xd00000000000001d;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd00000000000001d,0x800000010f1f3930);
            uVar3 = param_2;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar2);
            if (uVar3 == 0) {
              uStack_b8 = 0;
              uStack_c0 = 0;
              lStack_a8 = 0;
              uStack_b0 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
              _swift_unknownObjectRelease(uVar3);
            }
            uStack_98 = uStack_b8;
            uStack_a0 = uStack_c0;
            lStack_88 = lStack_a8;
            uStack_90 = uStack_b0;
            if (lStack_a8 == 0) {
              FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
              lStack_228 = 0;
            }
            else {
              uVar2 = 0;
              func_0x0001002ed07c(0);
              plVar4 = &lStack_d0;
              _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
              lStack_228 = lStack_d0;
              if ((int)plVar4 == 0) {
                lStack_228 = 0;
              }
            }
            uVar2 = 0xd000000000000013;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd000000000000013,0x800000010f1f3950);
            uVar3 = param_2;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar2);
            if (uVar3 == 0) {
              uStack_b8 = 0;
              uStack_c0 = 0;
              lStack_a8 = 0;
              uStack_b0 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
              _swift_unknownObjectRelease(uVar3);
            }
            uStack_98 = uStack_b8;
            uStack_a0 = uStack_c0;
            lStack_88 = lStack_a8;
            uStack_90 = uStack_b0;
            if (lStack_a8 == 0) {
              FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
              lStack_238 = 0;
              lVar9 = 0;
            }
            else {
              plVar4 = &lStack_d0;
              _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,PTR___sSSN_11034da80,6);
              lVar9 = lStack_c8;
              lStack_238 = lStack_d0;
              if ((int)plVar4 == 0) {
                lStack_238 = 0;
                lVar9 = 0;
              }
            }
            uVar2 = 0xd00000000000001a;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd00000000000001a,0x800000010f1f3970);
            uVar3 = param_2;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar2);
            if (uVar3 == 0) {
              uStack_b8 = 0;
              uStack_c0 = 0;
              lStack_a8 = 0;
              uStack_b0 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar3);
              _swift_unknownObjectRelease(uVar3);
            }
            uStack_98 = uStack_b8;
            uStack_a0 = uStack_c0;
            lStack_88 = lStack_a8;
            uStack_90 = uStack_b0;
            if (lStack_a8 == 0) {
              FUN_1042ca838(&uStack_a0,0x112d387f8,&UNK_10d902650);
              lVar7 = 0;
            }
            else {
              uVar2 = 0;
              func_0x0001002ed07c(0);
              plVar4 = &lStack_d0;
              _swift_dynamicCast(plVar4,&uStack_a0,puVar1 + 8,uVar2,6);
              lVar7 = lStack_d0;
              if ((int)plVar4 == 0) {
                lVar7 = 0;
              }
            }
            if (lVar10 == 0) {
              lStack_108 = 0;
            }
            else {
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_108,lVar10);
              _swift_bridgeObjectRelease(lVar10);
            }
            if (lStack_110 == 0) {
              lStack_110 = 0;
            }
            else {
              lVar10 = lStack_110;
              __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_110,PTR___sSSN_11034da80);
              _swift_bridgeObjectRelease(lStack_110);
              lStack_110 = lVar10;
            }
            if (lStack_1a0 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = lStack_1a0;
              __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_1a0,PTR___sSiN_11034deb0);
              _swift_bridgeObjectRelease(lStack_1a0);
            }
            if (lStack_1a8 == 0) {
              lStack_1c0 = 0;
            }
            else {
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1c0,lStack_1a8);
              _swift_bridgeObjectRelease(lStack_1a8);
            }
            if (lVar9 == 0) {
              lStack_238 = 0;
            }
            else {
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_238,lVar9);
              _swift_bridgeObjectRelease(lVar9);
            }
            func_0x00010c0266e0(param_1);
            _objc_release(lStack_108);
            _objc_release(lStack_110);
            _objc_release(lVar10);
            _objc_release(lStack_1c0);
            _objc_release(lStack_238);
            _objc_release(param_2);
            _objc_release(lStack_210);
            _objc_release(lStack_220);
            _objc_release(lStack_228);
            _objc_release(lVar7);
            _objc_release(lStack_138);
            _objc_release(lStack_188);
            _objc_release(lStack_198);
            _objc_release(lStack_160);
            _objc_release(lStack_168);
            _objc_release(lStack_170);
            _objc_release(lStack_178);
            _objc_release(lStack_180);
            _objc_release(lVar11);
            _objc_release(lStack_f0);
            _objc_release(lStack_f8);
            _objc_release(lStack_100);
            _objc_release(lVar6);
            _objc_release(lStack_d8);
            _objc_release(lVar8);
            return unaff_x20;
          }
        }
      }
      _objc_release(lStack_d8);
      _objc_release(lVar8);
      _objc_release(lStack_f0);
      _objc_release(lStack_f8);
      _objc_release(lStack_100);
      _objc_release(lVar6);
      _objc_release(lStack_138);
      _objc_release(lStack_188);
      _objc_release(lStack_198);
      _objc_release(lStack_160);
      _objc_release(lStack_168);
      _objc_release(lStack_170);
      _objc_release(lStack_178);
      _objc_release(lStack_180);
      _objc_release(lVar11);
      _objc_release(param_2);
      _swift_bridgeObjectRelease(lStack_1a8);
      _swift_bridgeObjectRelease(lStack_1a0);
      _swift_bridgeObjectRelease(lStack_110);
    }
    else {
      _objc_release(lStack_d8);
      _objc_release(lVar8);
      _objc_release(lStack_f0);
      _objc_release(lStack_f8);
      _objc_release(lStack_100);
      _objc_release(lVar6);
      _objc_release(param_2);
      _swift_bridgeObjectRelease(lStack_110);
    }
  }
  else {
    _objc_release(lStack_d8);
    _objc_release(lVar8);
    _objc_release(param_2);
  }
  _swift_bridgeObjectRelease(lVar10);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1042c9440; end: 1042c9467; -[SCAdWebViewTrackInfo initWithCoder:] */

void FUN_1042c9440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042c772c();
  return;
}



/* Entry: 1042c9468; end: 1042c94a7; -[SCAdWebViewTrackInfo description] */

void FUN_1042c9468(void)

{
  undefined1 auStack_328 [776];
  
  _objc_retain();
  FUN_1042c9f5c(auStack_328);
  func_0x00010178e244(auStack_328);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042c94a8; end: 1042c9523; -[SCAdWebViewTrackInfo init] */

void FUN_1042c94a8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdWebViewTrackInfoWrapper.swift",0x2e,2,0x23c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042c94f0);
  (*pcVar1)();
}



/* Entry: 1042c9524; end: 1042c96c7; -[SCAdWebViewTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c9524(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ba10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ba18 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ba20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ba38));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ba50));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ba58));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ba60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ba70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ba88));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ba90));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306baa0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306baa8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bab0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bab8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bac0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bad0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bad8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bae0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306baf8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bb60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bb68));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306bb70));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306bb78 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306bb80));
  return;
}



/* Entry: 1042c96c8; end: 1042c9f5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c96c8(undefined1 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_410;
  long lStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [264];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [264];
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_11306b9f0) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11306b9f8) = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11306ba00) = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(unaff_x20 + _DAT_11306ba08) = param_1[0x10];
  if (param_1[0x20] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306ba10) = puVar2;
  uStack_178 = *(undefined8 *)(param_1 + 0x30);
  uStack_180 = *(undefined8 *)(param_1 + 0x28);
  puVar7 = (undefined8 *)(unaff_x20 + _DAT_11306ba18);
  puVar7[1] = uStack_178;
  *puVar7 = uStack_180;
  if (param_1[0x40] == '\x01') {
    FUN_1042ca7e4(&uStack_180,auStack_168,0x112d35ff8,&UNK_10d900cd0);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_1042ca7e4(&uStack_180,auStack_168,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306ba20) = puVar2;
  *(undefined1 *)(unaff_x20 + _DAT_11306ba28) = param_1[0x41];
  uStack_188 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(unaff_x20 + _DAT_11306ba30) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(unaff_x20 + _DAT_11306ba38) = uStack_188;
  *(undefined1 *)(unaff_x20 + _DAT_11306ba40) = param_1[0x58];
  *(undefined1 *)(unaff_x20 + _DAT_11306ba48) = param_1[0x59];
  if (param_1[0x68] == '\x01') {
    FUN_1042ca7e4(&uStack_188,auStack_168,0x112d445a8,&UNK_10d990150);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_1042ca7e4(&uStack_188,auStack_168,0x112d445a8,&UNK_10d990150);
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306ba50) = puVar2;
  if (param_1[0x78] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306ba58) = puVar2;
  if (param_1[0x88] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306ba60) = puVar2;
  *(undefined1 *)(unaff_x20 + _DAT_11306ba68) = param_1[0x89];
  _memcpy(auStack_298,param_1 + 0x90,0x101);
  iVar1 = (int)auStack_298;
  func_0x0001018803f0();
  if (iVar1 == 1) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    _memcpy(&uStack_410,auStack_298,0x101);
    _memcpy(auStack_168,auStack_298,0x101);
    FUN_1042cdfd8(0);
    _objc_allocWithZone();
    func_0x000101880464(&uStack_410,&uStack_520);
    puVar3 = auStack_168;
    FUN_1042cbdbc();
  }
  *(undefined1 **)(unaff_x20 + _DAT_11306ba70) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_11306ba78) = param_1[0x191];
  *(undefined8 *)(unaff_x20 + _DAT_11306ba80) = *(undefined8 *)(param_1 + 0x198);
  if (param_1[0x1a8] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306ba88) = puVar2;
  lVar8 = *(long *)(param_1 + 0x1b0);
  if (lVar8 == 1) {
    plVar4 = (long *)0x0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x1b8);
    uVar10 = *(undefined8 *)(param_1 + 0x1c0);
    lVar5 = 0;
    FUN_1042c3de0();
    lVar6 = lVar5;
    _objc_allocWithZone();
    *(long *)(lVar6 + _DAT_11306b9b0) = lVar8;
    *(undefined8 *)(lVar6 + _DAT_11306b9b8) = uVar9;
    *(undefined8 *)(lVar6 + _DAT_11306b9c0) = uVar10;
    puVar2 = PTR_s_init_1125d9248;
    lStack_300 = lVar6;
    lStack_2f8 = lVar5;
    _objc_retain(lVar8);
    _objc_retain(uVar9);
    _objc_retain(uVar10);
    plVar4 = &lStack_300;
    _objc_msgSendSuper2(plVar4,puVar2);
  }
  *(long **)(unaff_x20 + _DAT_11306ba90) = plVar4;
  *(undefined1 *)(unaff_x20 + _DAT_11306ba98) = param_1[0x1c8];
  if (param_1[0x1d8] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306baa0) = puVar2;
  if (param_1[0x1e8] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306baa8) = puVar2;
  lVar8 = *(long *)(param_1 + 0x1f8);
  if (lVar8 == 1) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uStack_520 = *(undefined8 *)(param_1 + 0x1f0);
    uStack_508 = *(undefined8 *)(param_1 + 0x208);
    uStack_510 = *(undefined8 *)(param_1 + 0x200);
    uStack_4f8 = *(undefined8 *)(param_1 + 0x218);
    uStack_500 = *(undefined8 *)(param_1 + 0x210);
    lStack_518 = lVar8;
    uStack_410 = uStack_520;
    lStack_408 = lVar8;
    uStack_400 = uStack_510;
    uStack_3f8 = uStack_508;
    uStack_3f0 = uStack_500;
    uStack_3e8 = uStack_4f8;
    FUN_1042c1f54(0);
    _objc_allocWithZone();
    func_0x00010425a44c(&uStack_520,&uStack_2f0);
    puVar7 = &uStack_410;
    FUN_1042c0584();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11306bab0) = puVar7;
  if (param_1[0x228] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bab8) = puVar2;
  if (param_1[0x238] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bac0) = puVar2;
  *(undefined1 *)(unaff_x20 + _DAT_11306bac8) = param_1[0x239];
  lVar8 = *(long *)(param_1 + 0x240);
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x250);
    uVar10 = *(undefined8 *)(param_1 + 0x248);
    FUN_1042cf324(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar9);
    FUN_1042ce438(lVar8,uVar10,uVar9);
  }
  *(long *)(unaff_x20 + _DAT_11306bad0) = lVar8;
  uStack_190 = *(undefined8 *)(param_1 + 600);
  *(undefined8 *)(unaff_x20 + _DAT_11306bad8) = uStack_190;
  lStack_518 = *(long *)(param_1 + 0x268);
  uStack_520 = *(undefined8 *)(param_1 + 0x260);
  puVar7 = (undefined8 *)(unaff_x20 + _DAT_11306bae0);
  puVar7[1] = lStack_518;
  *puVar7 = uStack_520;
  *(undefined1 *)(unaff_x20 + _DAT_11306bae8) = param_1[0x270];
  *(undefined1 *)(unaff_x20 + _DAT_11306baf0) = param_1[0x271];
  if (param_1[0x272] == '\x02') {
    FUN_1042ca7e4(&uStack_190,&uStack_2f0,0x11306bbb0,&UNK_10dce6038);
    FUN_1042ca7e4(&uStack_520,&uStack_2f0,0x112d35ff8,&UNK_10d900cd0);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_1042ca7e4(&uStack_190,&uStack_2f0,0x11306bbb0,&UNK_10dce6038);
    FUN_1042ca7e4(&uStack_520,&uStack_2f0,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010bff91e0();
  }
  *(undefined **)(unaff_x20 + _DAT_11306baf8) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11306bb00) = *(undefined8 *)(param_1 + 0x278);
  *(undefined1 *)(unaff_x20 + _DAT_11306bb08) = param_1[0x280];
  *(undefined8 *)(unaff_x20 + _DAT_11306bb10) = *(undefined8 *)(param_1 + 0x288);
  *(undefined8 *)(unaff_x20 + _DAT_11306bb18) = *(undefined8 *)(param_1 + 0x290);
  *(undefined8 *)(unaff_x20 + _DAT_11306bb20) = *(undefined8 *)(param_1 + 0x298);
  *(undefined1 *)(unaff_x20 + _DAT_11306bb28) = param_1[0x2a0];
  *(undefined1 *)(unaff_x20 + _DAT_11306bb30) = param_1[0x2a1];
  *(undefined8 *)(unaff_x20 + _DAT_11306bb38) = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined1 *)(unaff_x20 + _DAT_11306bb40) = param_1[0x2b0];
  *(undefined1 *)(unaff_x20 + _DAT_11306bb48) = param_1[0x2b1];
  *(undefined1 *)(unaff_x20 + _DAT_11306bb50) = param_1[0x2b2];
  *(undefined1 *)(unaff_x20 + _DAT_11306bb58) = param_1[0x2b3];
  if (param_1[0x2c0] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bb60) = puVar2;
  if (param_1[0x2d0] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bb68) = puVar2;
  if (param_1[0x2e0] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bb70) = puVar2;
  uStack_2e8 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_2f0 = *(undefined8 *)(param_1 + 0x2e8);
  puVar7 = (undefined8 *)(unaff_x20 + _DAT_11306bb78);
  puVar7[1] = uStack_2e8;
  *puVar7 = uStack_2f0;
  if (param_1[0x300] == '\x01') {
    FUN_1042ca7e4(&uStack_2f0,auStack_2a8,0x112d35ff8,&UNK_10d900cd0);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_1042ca7e4(&uStack_2f0,auStack_2a8,0x112d35ff8,&UNK_10d900cd0);
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306bb80) = puVar2;
  _objc_msgSendSuper2(&stack0xfffffffffffffd48,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042c9f5c; end: 1042ca7c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042c9f5c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_fb8 [776];
  undefined1 auStack_cb0 [776];
  undefined1 auStack_9a8 [776];
  undefined1 auStack_6a0 [264];
  undefined1 uStack_598;
  undefined1 uStack_597;
  undefined8 uStack_590;
  undefined1 uStack_588;
  long lStack_580;
  undefined1 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  long lStack_560;
  undefined1 uStack_558;
  undefined1 uStack_557;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined1 uStack_540;
  undefined1 uStack_53f;
  long lStack_538;
  undefined1 uStack_530;
  long lStack_528;
  undefined1 uStack_520;
  long lStack_518;
  undefined1 uStack_510;
  undefined1 uStack_50f;
  undefined1 auStack_508 [257];
  undefined1 uStack_407;
  undefined8 uStack_400;
  long lStack_3f8;
  undefined1 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 uStack_3d0;
  long lStack_3c8;
  undefined1 uStack_3c0;
  long lStack_3b8;
  undefined1 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined1 uStack_370;
  long lStack_368;
  undefined1 uStack_360;
  undefined1 uStack_35f;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 uStack_328;
  undefined1 uStack_327;
  undefined1 uStack_326;
  undefined8 uStack_320;
  undefined1 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined1 uStack_2f7;
  undefined8 uStack_2f0;
  undefined1 uStack_2e8;
  undefined1 uStack_2e7;
  undefined1 uStack_2e6;
  undefined1 uStack_2e5;
  long lStack_2e0;
  undefined1 uStack_2d8;
  long lStack_2d0;
  undefined1 uStack_2c8;
  long lStack_2c0;
  undefined1 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined1 uStack_298;
  undefined1 auStack_290 [264];
  undefined1 auStack_188 [16];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [264];
  
  lStack_580 = 0;
  uStack_578 = 1;
  lStack_560 = 0;
  uStack_558 = 1;
  lStack_538 = 0;
  uStack_530 = 1;
  lStack_528 = 0;
  uStack_520 = 1;
  lStack_518 = 0;
  uStack_510 = 1;
  func_0x000100406b98(auStack_158);
  _memcpy(auStack_508,auStack_158,0x101);
  lStack_3f8 = 0;
  uStack_3f0 = 1;
  lStack_3c8 = 0;
  uStack_3c0 = 1;
  lStack_3b8 = 0;
  uStack_3b0 = 1;
  uStack_3a0 = 1;
  uStack_3a8 = 0;
  uStack_390 = 0;
  uStack_398 = 0;
  uStack_380 = 0;
  uStack_388 = 0;
  lStack_378 = 0;
  uStack_370 = 1;
  lStack_368 = 0;
  uStack_360 = 1;
  uStack_326 = 2;
  lStack_2e0 = 0;
  uStack_2d8 = 1;
  lStack_2d0 = 0;
  uStack_2c8 = 1;
  lStack_2c0 = 0;
  uStack_2b8 = 1;
  lStack_2a0 = 0;
  uStack_298 = 1;
  uStack_598 = *(undefined1 *)(param_2 + _DAT_11306b9f0);
  uStack_597 = *(undefined1 *)(param_2 + _DAT_11306b9f8);
  uStack_590 = *(undefined8 *)(param_2 + _DAT_11306ba00);
  uStack_588 = *(undefined1 *)(param_2 + _DAT_11306ba08);
  lVar5 = *(long *)(param_2 + _DAT_11306ba10);
  bVar2 = lVar5 == 0;
  if (bVar2) {
    lStack_580 = 0;
  }
  else {
    func_0x00010c067fc0();
    lStack_580 = lVar5;
  }
  lVar5 = _DAT_11306ba20;
  puVar1 = (undefined8 *)(param_2 + _DAT_11306ba18);
  uVar11 = puVar1[1];
  uStack_570 = *puVar1;
  uStack_568 = puVar1[1];
  puVar6 = &UNK_10dce6050;
  uStack_578 = bVar2;
  _swift_getKeyPath(&UNK_10dce6050);
  lVar8 = *(long *)(param_2 + lVar5);
  _swift_bridgeObjectRetain(uVar11);
  bVar2 = lVar8 == 0;
  lVar5 = lVar8;
  if (!bVar2) {
    _objc_retain();
    _objc_retain();
    lVar5 = lVar8;
    func_0x00010c067fc0();
    _objc_release(lVar8);
    _objc_release(lVar8);
  }
  _swift_release(puVar6);
  uStack_557 = *(undefined1 *)(param_2 + _DAT_11306ba28);
  uStack_550 = *(undefined8 *)(param_2 + _DAT_11306ba30);
  uStack_548 = *(undefined8 *)(param_2 + _DAT_11306ba38);
  uStack_540 = *(undefined1 *)(param_2 + _DAT_11306ba40);
  uStack_53f = *(undefined1 *)(param_2 + _DAT_11306ba48);
  lVar8 = *(long *)(param_2 + _DAT_11306ba50);
  bVar3 = lVar8 == 0;
  lStack_560 = lVar5;
  uStack_558 = bVar2;
  if (bVar3) {
    _swift_bridgeObjectRetain();
    lVar8 = 0;
  }
  else {
    _swift_bridgeObjectRetain();
    func_0x00010c067fc0();
  }
  lVar5 = *(long *)(param_2 + _DAT_11306ba58);
  bVar2 = lVar5 == 0;
  lStack_538 = lVar8;
  uStack_530 = bVar3;
  if (!bVar2) {
    func_0x00010c067fc0();
  }
  lVar8 = *(long *)(param_2 + _DAT_11306ba60);
  bVar3 = lVar8 == 0;
  lStack_528 = lVar5;
  uStack_520 = bVar2;
  if (!bVar3) {
    func_0x00010c067fc0();
  }
  uStack_50f = *(undefined1 *)(param_2 + _DAT_11306ba68);
  lStack_518 = lVar8;
  uStack_510 = bVar3;
  if (*(long *)(param_2 + _DAT_11306ba70) == 0) {
    puVar7 = auStack_158;
  }
  else {
    _objc_retain();
    FUN_1042cd98c(auStack_290);
    _memcpy(auStack_9a8,auStack_290,0x101);
    func_0x0001018803e8(auStack_9a8);
    puVar7 = auStack_9a8;
  }
  _memcpy(auStack_6a0,puVar7,0x101);
  FUN_1042ca838(auStack_508,0x112dcc740,&UNK_10d9907d0);
  _memcpy(auStack_508,auStack_6a0,0x101);
  uStack_407 = *(undefined1 *)(param_2 + _DAT_11306ba78);
  uStack_400 = *(undefined8 *)(param_2 + _DAT_11306ba80);
  lVar5 = *(long *)(param_2 + _DAT_11306ba88);
  bVar2 = lVar5 == 0;
  if (bVar2) {
    lStack_3f8 = 0;
  }
  else {
    func_0x00010c067fc0();
    lStack_3f8 = lVar5;
  }
  lVar5 = *(long *)(param_2 + _DAT_11306ba90);
  uStack_3f0 = bVar2;
  if (lVar5 == 0) {
    uStack_3d8 = 0;
    uStack_3e8 = 1;
    uStack_3e0 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar5 + _DAT_11306b9b0);
    uVar9 = *(undefined8 *)(lVar5 + _DAT_11306b9b8);
    uStack_3d8 = *(undefined8 *)(lVar5 + _DAT_11306b9c0);
    uStack_3e8 = uVar11;
    uStack_3e0 = uVar9;
    _objc_retain();
    _objc_retain(uVar11);
    _objc_retain(uVar9);
  }
  uStack_3d0 = *(undefined1 *)(param_2 + _DAT_11306ba98);
  lVar5 = *(long *)(param_2 + _DAT_11306baa0);
  bVar2 = lVar5 == 0;
  if (!bVar2) {
    func_0x00010c067fc0();
  }
  lVar8 = *(long *)(param_2 + _DAT_11306baa8);
  bVar3 = lVar8 == 0;
  lStack_3c8 = lVar5;
  uStack_3c0 = bVar2;
  if (!bVar3) {
    func_0x00010c067fc0();
  }
  lStack_3b8 = lVar8;
  uStack_3b0 = bVar3;
  if (*(long *)(param_2 + _DAT_11306bab0) == 0) {
    uVar12 = 0;
    uVar11 = 1;
    uStack_170 = 0;
    uStack_178 = 0;
    uVar20 = 0;
    uVar19 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar16 = 0;
    uVar15 = 0;
    uVar18 = 0;
    uVar17 = 0;
  }
  else {
    _objc_retain();
    FUN_1042c1d70(auStack_188);
    auVar4._8_8_ = uStack_170;
    auVar4._0_8_ = uStack_178;
    auVar13._8_8_ = uStack_170;
    auVar13._0_8_ = uStack_178;
    uVar20 = auStack_168._8_8_;
    uVar19 = auStack_168._0_8_;
    auVar14 = NEON_ext(auStack_168,auStack_168,8,1);
    auVar13 = NEON_ext(auVar13,auVar4,8,1);
    uVar16 = auVar13._8_8_;
    uVar15 = auVar13._0_8_;
    uVar18 = auVar14._8_8_;
    uVar17 = auVar14._0_8_;
    uVar10 = auStack_188._8_8_;
    uVar9 = auStack_188._0_8_;
    auVar13 = NEON_ext(auStack_188,auStack_188,8,1);
    uVar12 = auVar13._8_8_;
    uVar11 = auVar13._0_8_;
  }
  FUN_10425f1b0(uStack_3a8,uStack_3a0,uStack_398,uStack_390,uStack_388,uStack_380,in_x6,in_x7,uVar11
                ,uVar12,uVar15,uVar16,uVar17,uVar18,uStack_178,uStack_170,uVar19,uVar20,uVar9,uVar10
               );
  lVar5 = *(long *)(param_2 + _DAT_11306bab8);
  bVar2 = lVar5 == 0;
  uVar10 = uStack_3a0;
  uVar12 = uStack_398;
  uStack_3a8 = uVar9;
  uStack_390 = uVar15;
  uStack_388 = uVar19;
  uStack_380 = uVar17;
  if (!bVar2) {
    uStack_3a0 = uVar11;
    uStack_398 = uStack_178;
    func_0x00010c067fc0();
    uVar11 = uStack_3a0;
    uStack_178 = uStack_398;
  }
  uStack_398 = uStack_178;
  uStack_3a0 = uVar11;
  lVar8 = *(long *)(param_2 + _DAT_11306bac0);
  bVar3 = lVar8 == 0;
  lStack_378 = lVar5;
  uStack_370 = bVar2;
  if (!bVar3) {
    func_0x00010c067fc0();
  }
  uStack_35f = *(undefined1 *)(param_2 + _DAT_11306bac8);
  lVar5 = *(long *)(param_2 + _DAT_11306bad0);
  lStack_368 = lVar8;
  uStack_360 = bVar3;
  if (lVar5 == 0) {
    lVar8 = 0;
    uVar10 = 0;
    uVar12 = 0;
  }
  else {
    _objc_retain();
    lVar8 = lVar5;
    FUN_1042cef5c();
    _objc_release(lVar5);
  }
  uVar11 = *(undefined8 *)(param_2 + _DAT_11306bad8);
  puVar1 = (undefined8 *)(param_2 + _DAT_11306bae0);
  uStack_338 = *puVar1;
  uStack_330 = puVar1[1];
  uStack_328 = *(undefined1 *)(param_2 + _DAT_11306bae8);
  uStack_327 = *(undefined1 *)(param_2 + _DAT_11306baf0);
  lVar5 = *(long *)(param_2 + _DAT_11306baf8);
  lStack_358 = lVar8;
  uStack_350 = uVar10;
  uStack_348 = uVar12;
  uStack_340 = uVar11;
  if (lVar5 == 0) {
    _swift_bridgeObjectRetain(puVar1[1]);
    _swift_bridgeObjectRetain(uVar11);
    uStack_326 = 2;
  }
  else {
    _swift_bridgeObjectRetain(puVar1[1]);
    _swift_bridgeObjectRetain(uVar11);
    func_0x00010bf1f3c0();
    uStack_326 = (undefined1)lVar5;
  }
  uStack_320 = *(undefined8 *)(param_2 + _DAT_11306bb00);
  uStack_318 = *(undefined1 *)(param_2 + _DAT_11306bb08);
  uStack_310 = *(undefined8 *)(param_2 + _DAT_11306bb10);
  uStack_308 = *(undefined8 *)(param_2 + _DAT_11306bb18);
  uStack_300 = *(undefined8 *)(param_2 + _DAT_11306bb20);
  uStack_2f8 = *(undefined1 *)(param_2 + _DAT_11306bb28);
  uStack_2f7 = *(undefined1 *)(param_2 + _DAT_11306bb30);
  uStack_2f0 = *(undefined8 *)(param_2 + _DAT_11306bb38);
  uStack_2e8 = *(undefined1 *)(param_2 + _DAT_11306bb40);
  uStack_2e7 = *(undefined1 *)(param_2 + _DAT_11306bb48);
  uStack_2e6 = *(undefined1 *)(param_2 + _DAT_11306bb50);
  uStack_2e5 = *(undefined1 *)(param_2 + _DAT_11306bb58);
  lVar5 = *(long *)(param_2 + _DAT_11306bb60);
  bVar2 = lVar5 == 0;
  if (!bVar2) {
    func_0x00010c067fc0();
  }
  lVar8 = *(long *)(param_2 + _DAT_11306bb68);
  bVar3 = lVar8 == 0;
  lStack_2e0 = lVar5;
  uStack_2d8 = bVar2;
  if (!bVar3) {
    func_0x00010c067fc0();
  }
  lVar5 = *(long *)(param_2 + _DAT_11306bb70);
  bVar2 = lVar5 == 0;
  lStack_2d0 = lVar8;
  uStack_2c8 = bVar3;
  if (bVar2) {
    lStack_2c0 = 0;
  }
  else {
    func_0x00010c067fc0();
    lStack_2c0 = lVar5;
  }
  lVar5 = _DAT_11306bb80;
  uStack_2b0 = *(undefined8 *)(param_2 + _DAT_11306bb78);
  uVar11 = ((undefined8 *)(param_2 + _DAT_11306bb78))[1];
  puVar6 = &UNK_10dce6050;
  uStack_2b8 = bVar2;
  uStack_2a8 = uVar11;
  _swift_getKeyPath(&UNK_10dce6050);
  lVar5 = *(long *)(param_2 + lVar5);
  _swift_bridgeObjectRetain(uVar11);
  if (lVar5 == 0) {
    _objc_release(param_2);
    _swift_release(puVar6);
    lStack_2a0 = 0;
    uStack_298 = 1;
  }
  else {
    _objc_retain();
    _objc_retain();
    lVar8 = lVar5;
    func_0x00010c067fc0();
    _objc_release(lVar5);
    _objc_release(lVar5);
    _swift_release(puVar6);
    uStack_298 = 0;
    lStack_2a0 = lVar8;
    _objc_release(param_2);
  }
  _memcpy(auStack_cb0,&uStack_598,0x301);
  _memcpy(auStack_9a8,&uStack_598,0x301);
  func_0x00010178e208(auStack_cb0,auStack_fb8);
  func_0x00010178e244(auStack_9a8);
  _memcpy(param_1,auStack_cb0,0x301);
  return;
}



/* Entry: 1042ca7c4; end: 1042ca7e3;  */

void FUN_1042ca7c4(void)

{
  _objc_opt_self(&PTR_PTR_1129958d0);
  return;
}



/* Entry: 1042ca7e4; end: 1042ca82b;  */

undefined8 FUN_1042ca7e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1042ca82c; end: 1042ca837;  */

undefined * FUN_1042ca82c(void)

{
  return PTR_s_integerValue_1125f7a00;
}



/* Entry: 1042ca838; end: 1042ca8a7;  */

undefined8 FUN_1042ca838(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1042ca8a8; end: 1042cade3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ca8a8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306bbb8);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306bbc0);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306bbc8);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306bbd0);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306bbd8);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306bbe0);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bbe8))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306bbe8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_11306bbf0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306bbf0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306bbf8);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306bc00);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306bc08);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306bc10);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306bc18);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bc20))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306bc20);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306bc28);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306bc30);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306bc38))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306bc38);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306bc40);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042cade4; end: 1042cb683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042cade4(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar10 = unaff_x20;
  _swift_getObjectType();
  FUN_1042cdf90(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,auStack_80,PTR___sypN_11034f1a8 + 8,lVar10,6);
    if (((ulong)plVar4 & 1) != 0) {
      lVar9 = *(long *)(unaff_x20 + _DAT_11306bbb8);
      lVar10 = *(long *)(lStack_88 + _DAT_11306bbb8);
      uStack_a8 = (uint)(lVar9 == 0 && lVar10 == 0);
      if (lVar9 != 0 && lVar10 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar5 = lVar9;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_a8 = (uint)lVar5;
        _objc_release(lVar9);
        _objc_release(lVar10);
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306bbc0);
      lVar10 = *(long *)(lStack_88 + _DAT_11306bbc0);
      uStack_ac = (uint)(lVar9 == 0 && lVar10 == 0);
      if (lVar9 != 0 && lVar10 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar5 = lVar9;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_ac = (uint)lVar5;
        _objc_release(lVar9);
        _objc_release(lVar10);
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306bbc8);
      lVar10 = *(long *)(lStack_88 + _DAT_11306bbc8);
      uStack_b0 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar5 = lVar9;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_b0 = (uint)lVar5;
        _objc_release(lVar9);
        _objc_release(lVar10);
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306bbd0);
      lVar10 = *(long *)(lStack_88 + _DAT_11306bbd0);
      uVar11 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar5 = lVar9;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar11 = (uint)lVar5;
        _objc_release(lVar9);
        _objc_release(lVar10);
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306bbd8);
      lVar10 = *(long *)(lStack_88 + _DAT_11306bbd8);
      uStack_8c = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar5 = lVar9;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_8c = (uint)lVar5;
        _objc_release(lVar9);
        _objc_release(lVar10);
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306bbe0);
      lVar10 = *(long *)(lStack_88 + _DAT_11306bbe0);
      uStack_90 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar5 = lVar9;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_90 = (uint)lVar5;
        _objc_release(lVar9);
        _objc_release(lVar10);
      }
      lVar10 = ((long *)(unaff_x20 + _DAT_11306bbe8))[1];
      lVar9 = ((long *)(lStack_88 + _DAT_11306bbe8))[1];
      uVar1 = (uint)(lVar10 == 0 && lVar9 == 0);
      if ((lVar10 != 0) && (lVar9 != 0)) {
        lVar5 = *(long *)(unaff_x20 + _DAT_11306bbe8);
        if ((lVar5 == *(long *)(lStack_88 + _DAT_11306bbe8)) && (lVar10 == lVar9)) {
          uVar1 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar1 = (uint)lVar5;
        }
      }
      lVar10 = ((long *)(unaff_x20 + _DAT_11306bbf0))[1];
      lVar9 = ((long *)(lStack_88 + _DAT_11306bbf0))[1];
      uVar2 = (uint)(lVar10 == 0 && lVar9 == 0);
      if ((lVar10 != 0) && (lVar9 != 0)) {
        lVar5 = *(long *)(unaff_x20 + _DAT_11306bbf0);
        if ((lVar5 == *(long *)(lStack_88 + _DAT_11306bbf0)) && (lVar10 == lVar9)) {
          uVar2 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar2 = (uint)lVar5;
        }
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306bbf8);
      lVar10 = *(long *)(lStack_88 + _DAT_11306bbf8);
      uStack_94 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar5 = lVar9;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_94 = (uint)lVar5;
        _objc_release(lVar9);
        _objc_release(lVar10);
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306bc00);
      lVar10 = *(long *)(lStack_88 + _DAT_11306bc00);
      uStack_98 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar5 = lVar9;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_98 = (uint)lVar5;
        _objc_release(lVar9);
        _objc_release(lVar10);
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306bc08);
      lVar10 = *(long *)(lStack_88 + _DAT_11306bc08);
      uStack_9c = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar5 = lVar9;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_9c = (uint)lVar5;
        _objc_release(lVar9);
        _objc_release(lVar10);
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306bc10);
      lVar10 = *(long *)(lStack_88 + _DAT_11306bc10);
      uStack_a0 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar5 = lVar9;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_a0 = (uint)lVar5;
        _objc_release(lVar9);
        _objc_release(lVar10);
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306bc18);
      lVar10 = *(long *)(lStack_88 + _DAT_11306bc18);
      uStack_a4 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar5 = lVar9;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_a4 = (uint)lVar5;
        _objc_release(lVar9);
        _objc_release(lVar10);
      }
      lVar10 = ((long *)(unaff_x20 + _DAT_11306bc20))[1];
      lVar9 = ((long *)(lStack_88 + _DAT_11306bc20))[1];
      uVar3 = (uint)(lVar10 == 0 && lVar9 == 0);
      if ((lVar10 != 0) && (lVar9 != 0)) {
        lVar5 = *(long *)(unaff_x20 + _DAT_11306bc20);
        if ((lVar5 == *(long *)(lStack_88 + _DAT_11306bc20)) && (lVar10 == lVar9)) {
          uVar3 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar3 = (uint)lVar5;
        }
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306bc28);
      lVar10 = *(long *)(lStack_88 + _DAT_11306bc28);
      uVar12 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar5 = lVar9;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar12 = (uint)lVar5;
        _objc_release(lVar9);
        _objc_release(lVar10);
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306bc30);
      lVar10 = *(long *)(lStack_88 + _DAT_11306bc30);
      uVar13 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar5 = lVar9;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar13 = (uint)lVar5;
        _objc_release(lVar9);
        _objc_release(lVar10);
      }
      lVar10 = ((long *)(unaff_x20 + _DAT_11306bc38))[1];
      lVar9 = ((long *)(lStack_88 + _DAT_11306bc38))[1];
      uVar7 = (uint)(lVar10 == 0 && lVar9 == 0);
      if ((lVar10 != 0) && (lVar9 != 0)) {
        lVar5 = *(long *)(unaff_x20 + _DAT_11306bc38);
        if ((lVar5 == *(long *)(lStack_88 + _DAT_11306bc38)) && (lVar10 == lVar9)) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar5;
        }
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306bc40);
      lVar10 = *(long *)(lStack_88 + _DAT_11306bc40);
      if (lVar9 == 0) {
        lVar5 = lVar10;
        _objc_retain(lVar10);
        _objc_release(lStack_88);
        if (lVar10 != 0) {
          uVar8 = 0;
          goto LAB_1042cb5e0;
        }
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
        lVar5 = lStack_88;
        if (lVar10 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar10);
          _objc_retain(lVar9);
          lVar6 = lVar9;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar8 = (uint)lVar6;
          _objc_release(lVar9);
          _objc_release(lVar10);
        }
LAB_1042cb5e0:
        _objc_release(lVar5);
      }
      if ((uStack_a8 & uStack_ac & uStack_b0 & uVar11 & uStack_8c & uStack_90 & uVar1 &
           uVar2 & uStack_94 & uStack_98 & uStack_9c &
           uStack_a0 & uStack_a4 & uVar3 & uVar12 & uVar13 & 1) != 0) {
        uVar7 = uVar7 & uVar8;
        goto LAB_1042cb658;
      }
    }
  }
  uVar7 = 0;
LAB_1042cb658:
  return uVar7 & 1;
}



/* Entry: 1042cb684; end: 1042cb693; -[SCAdWebViewLoadTrackInfo domDownloadLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bbb8));
  return;
}



/* Entry: 1042cb694; end: 1042cb6a3; -[SCAdWebViewLoadTrackInfo domLoadLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bbc0));
  return;
}



/* Entry: 1042cb6a4; end: 1042cb6b3; -[SCAdWebViewLoadTrackInfo firstContentfulPaintLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb6a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bbc8));
  return;
}



/* Entry: 1042cb6b4; end: 1042cb6c3; -[SCAdWebViewLoadTrackInfo fullLoadLatency] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb6b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bbd0));
  return;
}



/* Entry: 1042cb6c4; end: 1042cb6d3; -[SCAdWebViewLoadTrackInfo loadProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb6c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bbd8));
  return;
}



/* Entry: 1042cb6d4; end: 1042cb6e3; -[SCAdWebViewLoadTrackInfo hasSubsequentNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb6d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bbe0));
  return;
}



/* Entry: 1042cb6e4; end: 1042cb6ef; -[SCAdWebViewLoadTrackInfo userAgent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb6e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306bbe8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306bbe8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042cb6f0; end: 1042cb6fb; -[SCAdWebViewLoadTrackInfo pageURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb6f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306bbf0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306bbf0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042cb6fc; end: 1042cb70b; -[SCAdWebViewLoadTrackInfo navigationStartTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb6fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bbf8));
  return;
}



/* Entry: 1042cb70c; end: 1042cb71b; -[SCAdWebViewLoadTrackInfo responseStartLatencyMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb70c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bc00));
  return;
}



/* Entry: 1042cb71c; end: 1042cb72b; -[SCAdWebViewLoadTrackInfo domInteractiveLatencyMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb71c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bc08));
  return;
}



/* Entry: 1042cb72c; end: 1042cb73b; -[SCAdWebViewLoadTrackInfo domContentLoadedStartLatencyMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb72c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bc10));
  return;
}



/* Entry: 1042cb73c; end: 1042cb74b; -[SCAdWebViewLoadTrackInfo domCompleteLatencyMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb73c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bc18));
  return;
}



/* Entry: 1042cb74c; end: 1042cb757; -[SCAdWebViewLoadTrackInfo resolvedPageUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb74c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306bc20))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306bc20);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042cb758; end: 1042cb767; -[SCAdWebViewLoadTrackInfo serverRedirectCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bc28));
  return;
}



/* Entry: 1042cb768; end: 1042cb777; -[SCAdWebViewLoadTrackInfo serverRedirectResolvedTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bc30));
  return;
}



/* Entry: 1042cb778; end: 1042cb783; -[SCAdWebViewLoadTrackInfo serverRedirectResolvedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb778(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306bc38))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306bc38);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042cb784; end: 1042cb7db;  */

void FUN_1042cb784(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042cb7dc; end: 1042cb7eb; -[SCAdWebViewLoadTrackInfo hasPostClickEngagement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042cb7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306bc40));
  return;
}


