/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1042aa0b0; end: 1042aa0bf; -[SCAdTopSnapInteractionInfo scrollDepth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aa0b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b390));
  return;
}



/* Entry: 1042aa0c0; end: 1042aa0cf; -[SCAdTopSnapInteractionInfo scrollOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aa0c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b398));
  return;
}



/* Entry: 1042aa0d0; end: 1042aa377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aa0d0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306b330) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11306b338) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306b340) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306b348) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306b350) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306b358) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306b360) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306b368) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306b370) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11306b378) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11306b380) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306b388) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306b390) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11306b398) = param_14;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042aa378; end: 1042aa477; -[SCAdTopSnapInteractionInfo initWithInteractionSource:attachmentTriggered:productId:tileIndex:collectionItemIndex:sourceRelativeLocationX:sourceRelativeLocationY:screenRelativeLocationX:screenRelativeLocationY:screenLocationX:screenLocationY:interactionTimestamp:scrollDepth:scrollOffset:] */

void FUN_1042aa378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  func_0x0001042aa224(param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14,param_15,param_16);
  return;
}



/* Entry: 1042aa478; end: 1042aa743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aa478(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11306b330) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11306b338) = *(undefined1 *)(param_1 + 1);
  if (*(char *)(param_1 + 3) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306b340) = puVar1;
  if (*(char *)(param_1 + 5) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306b348) = puVar1;
  if (*(char *)(param_1 + 7) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306b350) = puVar1;
  if (*(char *)(param_1 + 9) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[8];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306b358) = puVar1;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[10];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306b360) = puVar1;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[0xc];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306b368) = puVar1;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[0xe];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306b370) = puVar1;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[0x10];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306b378) = puVar1;
  if (*(char *)(param_1 + 0x13) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[0x12];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306b380) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11306b388) = param_1[0x14];
  if (*(char *)(param_1 + 0x16) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[0x15];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306b390) = puVar1;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[0x17];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306b398) = puVar1;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042aa744; end: 1042aa777; -[SCAdTopSnapInteractionInfo hash] */

undefined8 FUN_1042aa744(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042aa778();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042aa778; end: 1042aab17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aa778(void)

{
  long unaff_x20;
  long lVar1;
  double dVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b330));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b338));
  lVar1 = *(long *)(unaff_x20 + _DAT_11306b340);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306b348);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306b350);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306b358);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306b360);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306b368);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306b370);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306b378);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306b380);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  dVar2 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b388) != 0.0) {
    dVar2 = *(double *)(unaff_x20 + _DAT_11306b388);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  lVar1 = *(long *)(unaff_x20 + _DAT_11306b390);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306b398);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042aab18; end: 1042ab167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042aab18(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar11 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_90);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(auStack_90);
  }
  else {
    plVar5 = &lStack_98;
    _swift_dynamicCast(plVar5,auStack_90,PTR___sypN_11034f1a8 + 8,lVar11,6);
    if (((ulong)plVar5 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11306b330);
      iVar2 = *(int *)(lStack_98 + _DAT_11306b330);
      bVar3 = *(byte *)(unaff_x20 + _DAT_11306b338);
      bVar4 = *(byte *)(lStack_98 + _DAT_11306b338);
      lVar10 = *(long *)(unaff_x20 + _DAT_11306b340);
      lVar11 = *(long *)(lStack_98 + _DAT_11306b340);
      if (lVar10 == 0 || lVar11 == 0) {
        uStack_ac = (uint)(lVar10 == 0 && lVar11 == 0);
      }
      else {
        func_0x0001002ed07c(0);
        _objc_retain(lVar11);
        _objc_retain();
        lVar6 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_ac = (uint)lVar6;
        _objc_release(lVar10);
        _objc_release(lVar11);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_11306b348);
      lVar11 = *(long *)(lStack_98 + _DAT_11306b348);
      if (lVar10 == 0 || lVar11 == 0) {
        uStack_b0 = (uint)(lVar10 == 0 && lVar11 == 0);
      }
      else {
        func_0x0001002ed07c(0);
        _objc_retain(lVar11);
        _objc_retain();
        lVar6 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_b0 = (uint)lVar6;
        _objc_release(lVar10);
        _objc_release(lVar11);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_11306b350);
      lVar11 = *(long *)(lStack_98 + _DAT_11306b350);
      uVar16 = (uint)(lVar10 == 0 && lVar11 == 0);
      if ((lVar10 != 0) && (lVar11 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar11);
        _objc_retain();
        lVar6 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar16 = (uint)lVar6;
        _objc_release(lVar10);
        _objc_release(lVar11);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_11306b358);
      lVar11 = *(long *)(lStack_98 + _DAT_11306b358);
      uStack_9c = (uint)(lVar10 == 0 && lVar11 == 0);
      if ((lVar10 != 0) && (lVar11 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar11);
        _objc_retain();
        lVar6 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_9c = (uint)lVar6;
        _objc_release(lVar10);
        _objc_release(lVar11);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_11306b360);
      lVar11 = *(long *)(lStack_98 + _DAT_11306b360);
      uVar12 = (uint)(lVar10 == 0 && lVar11 == 0);
      if ((lVar10 != 0) && (lVar11 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar11);
        _objc_retain();
        lVar6 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar12 = (uint)lVar6;
        _objc_release(lVar10);
        _objc_release(lVar11);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_11306b368);
      lVar11 = *(long *)(lStack_98 + _DAT_11306b368);
      uStack_a0 = (uint)(lVar10 == 0 && lVar11 == 0);
      if ((lVar10 != 0) && (lVar11 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar11);
        _objc_retain();
        lVar6 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_a0 = (uint)lVar6;
        _objc_release(lVar10);
        _objc_release(lVar11);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_11306b370);
      lVar11 = *(long *)(lStack_98 + _DAT_11306b370);
      uVar13 = (uint)(lVar10 == 0 && lVar11 == 0);
      if ((lVar10 != 0) && (lVar11 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar11);
        _objc_retain();
        lVar6 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar13 = (uint)lVar6;
        _objc_release(lVar10);
        _objc_release(lVar11);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_11306b378);
      lVar11 = *(long *)(lStack_98 + _DAT_11306b378);
      uStack_a4 = (uint)(lVar10 == 0 && lVar11 == 0);
      if ((lVar10 != 0) && (lVar11 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar11);
        _objc_retain();
        lVar6 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_a4 = (uint)lVar6;
        _objc_release(lVar10);
        _objc_release(lVar11);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_11306b380);
      lVar11 = *(long *)(lStack_98 + _DAT_11306b380);
      uVar14 = (uint)(lVar10 == 0 && lVar11 == 0);
      if ((lVar10 != 0) && (lVar11 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar11);
        _objc_retain();
        lVar6 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar14 = (uint)lVar6;
        _objc_release(lVar10);
        _objc_release(lVar11);
      }
      dVar17 = *(double *)(unaff_x20 + _DAT_11306b388);
      dVar18 = *(double *)(lStack_98 + _DAT_11306b388);
      lVar10 = *(long *)(unaff_x20 + _DAT_11306b390);
      lVar11 = *(long *)(lStack_98 + _DAT_11306b390);
      uVar15 = (uint)(lVar10 == 0 && lVar11 == 0);
      if ((lVar10 != 0) && (lVar11 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar11);
        _objc_retain(lVar10);
        lVar6 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar15 = (uint)lVar6;
        _objc_release(lVar10);
        _objc_release(lVar11);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_11306b398);
      lVar11 = *(long *)(lStack_98 + _DAT_11306b398);
      if (lVar10 == 0) {
        lVar6 = lVar11;
        _objc_retain(lVar11);
        _objc_release(lStack_98);
        if (lVar11 != 0) {
          uVar9 = 0;
          goto LAB_1042ab0e4;
        }
        uVar9 = 1;
      }
      else {
        uVar9 = 0;
        lVar6 = lStack_98;
        if (lVar11 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar11);
          _objc_retain(lVar10);
          lVar7 = lVar10;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar9 = (uint)lVar7;
          _objc_release(lVar10);
          _objc_release(lVar11);
        }
LAB_1042ab0e4:
        _objc_release(lVar6);
      }
      uVar8 = 0;
      if ((((uint)(iVar1 == iVar2) & ((bVar3 ^ bVar4) ^ 1) & uStack_ac & uStack_b0 & uVar16 &
            uStack_9c & uVar12 & uStack_a0 & uVar13 & uStack_a4 & uVar14) != 0) &&
         (dVar17 == dVar18)) {
        uVar8 = uVar15 & uVar9;
      }
      goto LAB_1042aabec;
    }
  }
  uVar8 = 0;
LAB_1042aabec:
  return uVar8 & 1;
}



/* Entry: 1042ab168; end: 1042ab1e7; -[SCAdTopSnapInteractionInfo isEqual:] */

uint FUN_1042ab168(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042aab18(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042ab1e8; end: 1042ab1eb; -[SCAdTopSnapInteractionInfo copyWithZone:] */

void FUN_1042ab1e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042ab1ec; end: 1042ab5d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ab1ec(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f2890);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f28b0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5f544355444f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250,0xea00000000004449);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x444e495f454c4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444e495f454c4954,0xea00000000005845);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar2 = 0xd000000000000015;
  uVar1 = uVar2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1eeb70);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f28d0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f28f0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f2910);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f2930);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar3 = 0xd000000000000011;
  uVar1 = uVar3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2950);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2970);
  func_0x00010bf93020(param_1);
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b388);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2990);
  func_0x00010bf92e80(uVar1,param_1);
  _objc_release(uVar2);
  uVar1 = 0x445f4c4c4f524353;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445f4c4c4f524353,0xec00000048545045);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4f5f4c4c4f524353;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5f4c4c4f524353,0xed00005445534646);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1042ab5d8; end: 1042ab627; -[SCAdTopSnapInteractionInfo encodeWithCoder:] */

void FUN_1042ab5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042ab1ec(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042ab628; end: 1042ab657;  */

void FUN_1042ab628(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042ab658(param_1);
  return;
}



/* Entry: 1042ab658; end: 1042ac00b;  */

undefined8 FUN_1042ab658(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  uVar2 = 0xd000000000000012;
  uVar9 = 0xf1f2890;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  FUN_103b9df8c();
  if ((uVar9 & 0xff) == 1) {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  else {
    uVar2 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f28b0);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0x5f544355444f5250;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250,0xea00000000004449);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    puVar1 = PTR___sypN_11034f1a8;
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      uStack_e8 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      puVar4 = &uStack_c8;
      _swift_dynamicCast(puVar4,&uStack_a0,puVar1 + 8,uVar2,6);
      uStack_e8 = uStack_c8;
      if ((int)puVar4 == 0) {
        uStack_e8 = 0;
      }
    }
    uVar2 = 0x444e495f454c4954;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444e495f454c4954,0xea00000000005845);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      uStack_f0 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      puVar4 = &uStack_c8;
      _swift_dynamicCast(puVar4,&uStack_a0,puVar1 + 8,uVar2,6);
      uStack_f0 = uStack_c8;
      if ((int)puVar4 == 0) {
        uStack_f0 = 0;
      }
    }
    uVar11 = 0xd000000000000015;
    uVar2 = uVar11;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1eeb70);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      uStack_f8 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      puVar4 = &uStack_c8;
      _swift_dynamicCast(puVar4,&uStack_a0,puVar1 + 8,uVar2,6);
      uStack_f8 = uStack_c8;
      if ((int)puVar4 == 0) {
        uStack_f8 = 0;
      }
    }
    uVar2 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f28d0);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      uStack_100 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      puVar4 = &uStack_c8;
      _swift_dynamicCast(puVar4,&uStack_a0,puVar1 + 8,uVar2,6);
      uStack_100 = uStack_c8;
      if ((int)puVar4 == 0) {
        uStack_100 = 0;
      }
    }
    uVar2 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f28f0);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      uStack_108 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      puVar4 = &uStack_c8;
      _swift_dynamicCast(puVar4,&uStack_a0,puVar1 + 8,uVar2,6);
      uStack_108 = uStack_c8;
      if ((int)puVar4 == 0) {
        uStack_108 = 0;
      }
    }
    uVar2 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f2910);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      puVar4 = &uStack_c8;
      _swift_dynamicCast(puVar4,&uStack_a0,puVar1 + 8,uVar2,6);
      uVar2 = uStack_c8;
      if ((int)puVar4 == 0) {
        uVar2 = 0;
      }
    }
    uVar5 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f2930);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      func_0x0001002ed07c(0);
      puVar4 = &uStack_c8;
      _swift_dynamicCast(puVar4,&uStack_a0,puVar1 + 8,uVar5,6);
      uVar5 = uStack_c8;
      if ((int)puVar4 == 0) {
        uVar5 = 0;
      }
    }
    uVar10 = 0xd000000000000011;
    uVar6 = uVar10;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2950);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (lVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      func_0x0001002ed07c(0);
      puVar4 = &uStack_c8;
      _swift_dynamicCast(puVar4,&uStack_a0,puVar1 + 8,uVar6,6);
      uVar6 = uStack_c8;
      if ((int)puVar4 == 0) {
        uVar6 = 0;
      }
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2970);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    if (lVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    uVar10 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      func_0x0001002ed07c(0);
      puVar4 = &uStack_c8;
      _swift_dynamicCast(puVar4,&uStack_a0,puVar1 + 8,uVar7,6);
      uVar7 = uStack_c8;
      if ((int)puVar4 == 0) {
        uVar7 = 0;
      }
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2990);
    func_0x00010bf66da0(param_1);
    _objc_release(uVar11);
    uVar11 = 0x445f4c4c4f524353;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445f4c4c4f524353,0xec00000048545045);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    if (lVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      func_0x0001002ed07c(0);
      puVar4 = &uStack_c8;
      _swift_dynamicCast(puVar4,&uStack_a0,puVar1 + 8,uVar11,6);
      uVar11 = uStack_c8;
      if ((int)puVar4 == 0) {
        uVar11 = 0;
      }
    }
    uVar8 = 0x4f5f4c4c4f524353;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f5f4c4c4f524353,0xed00005445534646);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    if (lVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      func_0x0001002ed07c(0);
      puVar4 = &uStack_c8;
      _swift_dynamicCast(puVar4,&uStack_a0,puVar1 + 8,uVar8,6);
      uVar8 = uStack_c8;
      if ((int)puVar4 == 0) {
        uVar8 = 0;
      }
    }
    func_0x00010c01e760(uVar10);
    _objc_release(param_1);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(uStack_100);
    _objc_release(uStack_108);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar11);
    _objc_release(uVar8);
  }
  return unaff_x20;
}



/* Entry: 1042ac00c; end: 1042ac033; -[SCAdTopSnapInteractionInfo initWithCoder:] */

void FUN_1042ac00c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042ab658();
  return;
}



/* Entry: 1042ac034; end: 1042ac077; -[SCAdTopSnapInteractionInfo description] */

void FUN_1042ac034(undefined8 param_1)

{
  undefined1 auStack_e8 [200];
  
  _objc_retain();
  FUN_1042ac1bc(auStack_e8);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042ac078; end: 1042ac0f3; -[SCAdTopSnapInteractionInfo init] */

void FUN_1042ac078(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdTopSnapInteractionInfoWrapper.swift",0x34,2,0xbf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042ac0c0);
  (*pcVar1)();
}



/* Entry: 1042ac0f4; end: 1042ac1bb; -[SCAdTopSnapInteractionInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ac0f4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b340));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b348));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b350));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b358));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b360));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b368));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b370));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b378));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b380));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b390));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306b398));
  return;
}



/* Entry: 1042ac1bc; end: 1042ac493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ac1bc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_c8;
  long lStack_b8;
  
  uVar13 = *(undefined8 *)(param_3 + _DAT_11306b330);
  uVar12 = *(undefined1 *)(param_3 + _DAT_11306b338);
  lStack_b8 = *(long *)(param_3 + _DAT_11306b340);
  bVar1 = lStack_b8 == 0;
  if (bVar1) {
    lStack_b8 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lStack_c8 = *(long *)(param_3 + _DAT_11306b348);
  bVar2 = lStack_c8 == 0;
  if (bVar2) {
    lStack_c8 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  lStack_d8 = *(long *)(param_3 + _DAT_11306b350);
  bVar3 = lStack_d8 == 0;
  if (bVar3) {
    lStack_d8 = 0;
  }
  else {
    func_0x00010c067fc0();
  }
  uVar15 = 0;
  bVar4 = *(long *)(param_3 + _DAT_11306b358) == 0;
  if (bVar4) {
    uStack_e0 = 0;
  }
  else {
    func_0x00010bf885a0();
    uStack_e0 = param_2;
  }
  bVar5 = *(long *)(param_3 + _DAT_11306b360) == 0;
  uVar14 = uStack_e0;
  if (!bVar5) {
    uVar15 = uStack_e0;
    func_0x00010bf885a0();
    uVar14 = uVar15;
  }
  uVar17 = 0;
  bVar6 = *(long *)(param_3 + _DAT_11306b368) == 0;
  if (bVar6) {
    uVar18 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar18 = uVar14;
  }
  bVar7 = *(long *)(param_3 + _DAT_11306b370) == 0;
  if (!bVar7) {
    func_0x00010bf885a0();
    uVar17 = uVar14;
  }
  uVar19 = 0;
  bVar8 = *(long *)(param_3 + _DAT_11306b378) == 0;
  if (bVar8) {
    uVar20 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar20 = uVar14;
  }
  bVar9 = *(long *)(param_3 + _DAT_11306b380) == 0;
  if (!bVar9) {
    func_0x00010bf885a0();
    uVar19 = uVar14;
  }
  uVar16 = *(undefined8 *)(param_3 + _DAT_11306b388);
  uVar21 = 0;
  bVar10 = *(long *)(param_3 + _DAT_11306b390) == 0;
  if (bVar10) {
    uVar22 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar22 = uVar14;
  }
  bVar11 = *(long *)(param_3 + _DAT_11306b398) == 0;
  if (!bVar11) {
    func_0x00010bf885a0();
    uVar21 = uVar14;
  }
  *param_1 = uVar13;
  *(undefined1 *)(param_1 + 1) = uVar12;
  param_1[2] = lStack_b8;
  *(bool *)(param_1 + 3) = bVar1;
  param_1[4] = lStack_c8;
  *(bool *)(param_1 + 5) = bVar2;
  param_1[6] = lStack_d8;
  *(bool *)(param_1 + 7) = bVar3;
  param_1[8] = uStack_e0;
  *(bool *)(param_1 + 9) = bVar4;
  param_1[10] = uVar15;
  *(bool *)(param_1 + 0xb) = bVar5;
  param_1[0xc] = uVar18;
  *(bool *)(param_1 + 0xd) = bVar6;
  param_1[0xe] = uVar17;
  *(bool *)(param_1 + 0xf) = bVar7;
  param_1[0x10] = uVar20;
  *(bool *)(param_1 + 0x11) = bVar8;
  param_1[0x12] = uVar19;
  *(bool *)(param_1 + 0x13) = bVar9;
  param_1[0x14] = uVar16;
  param_1[0x15] = uVar22;
  *(bool *)(param_1 + 0x16) = bVar10;
  param_1[0x17] = uVar21;
  *(bool *)(param_1 + 0x18) = bVar11;
  return;
}



/* Entry: 1042ac494; end: 1042ac4b3;  */

void FUN_1042ac494(void)

{
  _objc_opt_self(&PTR_PTR_112994960);
  return;
}



/* Entry: 1042ac4b4; end: 1042ac547;  */

undefined8 FUN_1042ac4b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1042aeda0(param_1);
  func_0x000101897de4(param_1);
  return uVar1;
}



/* Entry: 1042ac548; end: 1042ac557; -[SCAdTrackInfo adType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042ac548(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b3c8);
}



/* Entry: 1042ac558; end: 1042ac567; -[SCAdTrackInfo adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042ac558(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b3d0);
}



/* Entry: 1042ac568; end: 1042ac577; -[SCAdTrackInfo isUnskippableAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042ac568(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b3d8);
}



/* Entry: 1042ac578; end: 1042ac587; -[SCAdTrackInfo viewContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ac578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b3e0));
  return;
}



/* Entry: 1042ac588; end: 1042ac597; -[SCAdTrackInfo singleSnapTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ac588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b3e8));
  return;
}



/* Entry: 1042ac598; end: 1042ac5a7; -[SCAdTrackInfo storyAdTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ac598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b3f0));
  return;
}



/* Entry: 1042ac5a8; end: 1042ac5b7; -[SCAdTrackInfo adReportTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ac5a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b3f8));
  return;
}



/* Entry: 1042ac5b8; end: 1042ac5c7; -[SCAdTrackInfo adHideTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ac5b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b400));
  return;
}



/* Entry: 1042ac5c8; end: 1042ac5d7; -[SCAdTrackInfo chatFeedCellTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ac5c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b408));
  return;
}



/* Entry: 1042ac5d8; end: 1042ac5e7; -[SCAdTrackInfo chatFeedBannerTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ac5d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b410));
  return;
}



/* Entry: 1042ac5e8; end: 1042ac5fb; -[SCAdTrackInfo tileSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1042ac5e8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11306b418);
}



/* Entry: 1042ac5fc; end: 1042ac60f; -[SCAdTrackInfo screenSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1042ac5fc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11306b420);
}



/* Entry: 1042ac610; end: 1042ac61f; -[SCAdTrackInfo unskippableDurationMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042ac610(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b428);
}



/* Entry: 1042ac620; end: 1042ac62f; -[SCAdTrackInfo openProfilePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042ac620(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b430);
}



/* Entry: 1042ac630; end: 1042ac63f; -[SCAdTrackInfo openTaggedProfilePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042ac630(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b438);
}



/* Entry: 1042ac640; end: 1042ac64f; -[SCAdTrackInfo adPodTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ac640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b440));
  return;
}



/* Entry: 1042ac650; end: 1042ac65f; -[SCAdTrackInfo isIntermediateTrack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042ac650(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b448);
}



/* Entry: 1042ac660; end: 1042ac66f; -[SCAdTrackInfo context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ac660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b450));
  return;
}



/* Entry: 1042ac670; end: 1042ac67f; -[SCAdTrackInfo adNotInterested] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042ac670(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b458);
}



/* Entry: 1042ac680; end: 1042ac6db; -[SCAdTrackInfo openedProfileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ac680(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306b460))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306b460);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042ac6dc; end: 1042ac6eb; -[SCAdTrackInfo adArShoppingExperienceTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ac6dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b468));
  return;
}



/* Entry: 1042ac6ec; end: 1042acb2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ac6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
                  undefined4 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
                  undefined8 param_21,undefined1 param_22,undefined4 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306b3c8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306b3d0) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_11306b3d8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306b3e0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306b3e8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11306b3f0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11306b3f8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306b400) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11306b408) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11306b410) = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b418);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b420);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306b428) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11306b430) = (undefined1)param_16;
  *(undefined1 *)(unaff_x20 + _DAT_11306b438) = param_16._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11306b440) = param_18;
  *(undefined1 *)(unaff_x20 + _DAT_11306b448) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_11306b450) = param_21;
  *(undefined1 *)(unaff_x20 + _DAT_11306b458) = param_22;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b460);
  *puVar1 = param_24;
  puVar1[1] = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_11306b468) = param_26;
  _objc_msgSendSuper2(auStack_a8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042acb2c; end: 1042accb3; -[SCAdTrackInfo initWithAdType:adProductType:isUnskippableAd:viewContext:singleSnapTrackInfo:storyAdTrackInfo:adReportTrackInfo:adHideTrackInfo:chatFeedCellTrackInfo:chatFeedBannerTrackInfo:tileSize:screenSize:unskippableDurationMillis:openProfilePage:openTaggedProfilePage:adPodTrackInfo:isIntermediateTrack:context:adNotInterested:openedProfileId:adArShoppingExperienceTrackInfo:] */

void FUN_1042acb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
                  undefined4 param_21,undefined4 param_22,undefined8 param_23,undefined4 param_24,
                  undefined4 param_25,long param_26,undefined8 param_27)

{
  if (param_26 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(param_23);
  _objc_retain(param_27);
  func_0x0001042ac910(param_1,param_2,param_3,param_4,param_5,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14,param_15,param_16,param_17,param_18);
  return;
}



/* Entry: 1042accb4; end: 1042acce3;  */

undefined8 FUN_1042accb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1042aeda0();
  func_0x000101897de4(param_1);
  return uVar1;
}



/* Entry: 1042acce4; end: 1042acd17; -[SCAdTrackInfo hash] */

undefined8 FUN_1042acce4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042acd18();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042acd18; end: 1042ad17f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042acd18(void)

{
  double *pdVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b3c8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b3d0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b3d8));
  lVar2 = *(long *)(unaff_x20 + _DAT_11306b3e0);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11306b3e8) == 0) {
    lVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042a3adc();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11306b3f0) == 0) {
    lVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042d4444();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11306b3f8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104294858();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306b400);
  if (lVar2 == 0) {
    uVar3 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_d0);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar2 + _DAT_11306a798));
    uVar3 = *(undefined8 *)(lVar2 + _DAT_11306a7a0);
    __ss6HasherV8_combineyySuF(uVar3);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (*(long *)(unaff_x20 + _DAT_11306b408) == 0) {
    uVar3 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10427da58();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  if (*(long *)(unaff_x20 + _DAT_11306b410) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010427ce5c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  pdVar1 = (double *)(unaff_x20 + _DAT_11306b418);
  dVar6 = *pdVar1;
  dVar7 = 0.0;
  if (dVar6 != 0.0) {
    dVar7 = dVar6;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar6 = pdVar1[1];
  dVar7 = 0.0;
  if (dVar6 != 0.0) {
    dVar7 = dVar6;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  pdVar1 = (double *)(unaff_x20 + _DAT_11306b420);
  dVar6 = *pdVar1;
  dVar7 = 0.0;
  if (dVar6 != 0.0) {
    dVar7 = dVar6;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar6 = pdVar1[1];
  dVar7 = 0.0;
  if (dVar6 != 0.0) {
    dVar7 = dVar6;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306b428) != 0.0) {
    dVar7 = *(double *)(unaff_x20 + _DAT_11306b428);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b430));
  uVar4 = (ulong)*(byte *)(unaff_x20 + _DAT_11306b438);
  __ss6HasherV8_combineyys5UInt8VF(uVar4);
  if (*(long *)(unaff_x20 + _DAT_11306b440) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104292d8c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  uVar4 = (ulong)*(byte *)(unaff_x20 + _DAT_11306b448);
  __ss6HasherV8_combineyys5UInt8VF(uVar4);
  if (*(long *)(unaff_x20 + _DAT_11306b450) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042afd74();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b458));
  if (((undefined8 *)(unaff_x20 + _DAT_11306b460))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11306b460);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5);
    uVar3 = uVar5;
    func_0x00010bfde980();
    _objc_release(uVar5);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (*(long *)(unaff_x20 + _DAT_11306b468) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10427c2f8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042ad180; end: 1042ad887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042ad180(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  uint uVar27;
  uint uVar28;
  long unaff_x20;
  uint uVar29;
  uint uVar30;
  double dVar31;
  double dVar32;
  long lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  long lStack_a0;
  long alStack_98 [5];
  
  lVar23 = unaff_x20;
  _swift_getObjectType();
  func_0x0001042afc88(param_1,alStack_98,0x112d387f8,&UNK_10d902650);
  if (alStack_98[3] == 0) {
    func_0x0001042afc48(alStack_98,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar22 = &lStack_a0;
    _swift_dynamicCast(plVar22,alStack_98,PTR___sypN_11034f1a8 + 8,lVar23,6);
    if (((ulong)plVar22 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11306b3c8);
      iVar2 = *(int *)(lStack_a0 + _DAT_11306b3c8);
      iVar3 = *(int *)(unaff_x20 + _DAT_11306b3d0);
      iVar4 = *(int *)(lStack_a0 + _DAT_11306b3d0);
      bVar5 = *(byte *)(unaff_x20 + _DAT_11306b3d8);
      bVar6 = *(byte *)(lStack_a0 + _DAT_11306b3d8);
      lVar23 = *(long *)(unaff_x20 + _DAT_11306b3e0);
      if (lVar23 == 0) {
        uStack_bc = (uint)(*(long *)(lStack_a0 + _DAT_11306b3e0) == 0);
      }
      else {
        func_0x00010c071ae0();
        uStack_bc = (uint)lVar23;
      }
      if (*(long *)(unaff_x20 + _DAT_11306b3e8) == 0) {
        uStack_c0 = (uint)(*(long *)(lStack_a0 + _DAT_11306b3e8) == 0);
      }
      else {
        lVar23 = *(long *)(lStack_a0 + _DAT_11306b3e8);
        if (lVar23 == 0) {
          lVar24 = 0;
          alStack_98[1] = 0;
          alStack_98[2] = 0;
        }
        else {
          lVar24 = 0;
          FUN_1042a6cd4();
        }
        alStack_98[0] = lVar23;
        alStack_98[3] = lVar24;
        _objc_retain(lVar23);
        uStack_c0 = 0;
        FUN_1042a40fc();
        func_0x0001042afc48(alStack_98,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11306b3f0) == 0) {
        uStack_c4 = (uint)(*(long *)(lStack_a0 + _DAT_11306b3f0) == 0);
      }
      else {
        lVar23 = *(long *)(lStack_a0 + _DAT_11306b3f0);
        if (lVar23 == 0) {
          lVar24 = 0;
          alStack_98[1] = 0;
          alStack_98[2] = 0;
        }
        else {
          lVar24 = 0;
          FUN_1042d60f8();
        }
        alStack_98[0] = lVar23;
        alStack_98[3] = lVar24;
        _objc_retain(lVar23);
        uStack_c4 = 0;
        FUN_1042d47a0();
        func_0x0001042afc48(alStack_98,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11306b3f8) == 0) {
        uStack_c8 = (uint)(*(long *)(lStack_a0 + _DAT_11306b3f8) == 0);
      }
      else {
        lVar23 = *(long *)(lStack_a0 + _DAT_11306b3f8);
        if (lVar23 == 0) {
          lVar24 = 0;
          alStack_98[1] = 0;
          alStack_98[2] = 0;
        }
        else {
          lVar24 = 0;
          FUN_10429506c();
        }
        alStack_98[0] = lVar23;
        alStack_98[3] = lVar24;
        _objc_retain(lVar23);
        uStack_c8 = 0;
        FUN_104294930();
        func_0x0001042afc48(alStack_98,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11306b400) == 0) {
        uStack_cc = (uint)(*(long *)(lStack_a0 + _DAT_11306b400) == 0);
      }
      else {
        lVar23 = *(long *)(lStack_a0 + _DAT_11306b400);
        if (lVar23 == 0) {
          lVar24 = 0;
          alStack_98[1] = 0;
          alStack_98[2] = 0;
        }
        else {
          lVar24 = 0;
          FUN_1042856e0();
        }
        alStack_98[0] = lVar23;
        alStack_98[3] = lVar24;
        _objc_retain(lVar23);
        uStack_cc = 0;
        FUN_1042852d4();
        func_0x0001042afc48(alStack_98,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11306b408) == 0) {
        uStack_d0 = (uint)(*(long *)(lStack_a0 + _DAT_11306b408) == 0);
      }
      else {
        lVar23 = *(long *)(lStack_a0 + _DAT_11306b408);
        if (lVar23 == 0) {
          lVar24 = 0;
          alStack_98[1] = 0;
          alStack_98[2] = 0;
        }
        else {
          lVar24 = 0;
          FUN_10427e978();
        }
        alStack_98[0] = lVar23;
        alStack_98[3] = lVar24;
        _objc_retain(lVar23);
        uStack_d0 = 0;
        FUN_10427dbe0();
        func_0x0001042afc48(alStack_98,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_11306b410) == 0) {
        uStack_d4 = (uint)(*(long *)(lStack_a0 + _DAT_11306b410) == 0);
      }
      else {
        lVar23 = *(long *)(lStack_a0 + _DAT_11306b410);
        if (lVar23 == 0) {
          lVar24 = 0;
          alStack_98[1] = 0;
          alStack_98[2] = 0;
        }
        else {
          lVar24 = 0;
          FUN_10427d520();
        }
        alStack_98[0] = lVar23;
        alStack_98[3] = lVar24;
        _objc_retain(lVar23);
        uStack_d4 = 0;
        FUN_10427cefc();
        func_0x0001042afc48(alStack_98,0x112d387f8,&UNK_10d902650);
      }
      dVar32 = ((double *)(unaff_x20 + _DAT_11306b418))[1];
      dVar31 = *(double *)(unaff_x20 + _DAT_11306b418);
      dVar35 = ((double *)(lStack_a0 + _DAT_11306b418))[1];
      dVar34 = *(double *)(lStack_a0 + _DAT_11306b418);
      dVar19 = ((double *)(unaff_x20 + _DAT_11306b420))[1];
      dVar17 = *(double *)(unaff_x20 + _DAT_11306b420);
      dVar20 = ((double *)(lStack_a0 + _DAT_11306b420))[1];
      dVar18 = *(double *)(lStack_a0 + _DAT_11306b420);
      dVar36 = *(double *)(unaff_x20 + _DAT_11306b428);
      dVar37 = *(double *)(lStack_a0 + _DAT_11306b428);
      bVar7 = *(byte *)(unaff_x20 + _DAT_11306b430);
      bVar8 = *(byte *)(lStack_a0 + _DAT_11306b430);
      bVar9 = *(byte *)(unaff_x20 + _DAT_11306b438);
      bVar10 = *(byte *)(lStack_a0 + _DAT_11306b438);
      if (*(long *)(unaff_x20 + _DAT_11306b440) == 0) {
        uVar28 = (uint)(*(long *)(lStack_a0 + _DAT_11306b440) == 0);
      }
      else {
        lVar23 = *(long *)(lStack_a0 + _DAT_11306b440);
        if (lVar23 == 0) {
          lVar24 = 0;
          alStack_98[1] = 0;
          alStack_98[2] = 0;
        }
        else {
          lVar24 = 0;
          FUN_104293538();
        }
        alStack_98[0] = lVar23;
        alStack_98[3] = lVar24;
        _objc_retain(lVar23);
        uVar28 = 0;
        FUN_104292e4c();
        func_0x0001042afc48(alStack_98,0x112d387f8,&UNK_10d902650);
      }
      bVar11 = *(byte *)(unaff_x20 + _DAT_11306b448);
      bVar12 = *(byte *)(lStack_a0 + _DAT_11306b448);
      if (*(long *)(unaff_x20 + _DAT_11306b450) == 0) {
        uVar29 = (uint)(*(long *)(lStack_a0 + _DAT_11306b450) == 0);
      }
      else {
        lVar23 = *(long *)(lStack_a0 + _DAT_11306b450);
        if (lVar23 == 0) {
          lVar24 = 0;
          alStack_98[1] = 0;
          alStack_98[2] = 0;
        }
        else {
          lVar24 = 0;
          FUN_1042b0804();
        }
        alStack_98[0] = lVar23;
        alStack_98[3] = lVar24;
        _objc_retain(lVar23);
        uVar29 = 0;
        FUN_1042afee8();
        func_0x0001042afc48(alStack_98,0x112d387f8,&UNK_10d902650);
      }
      bVar13 = *(byte *)(unaff_x20 + _DAT_11306b458);
      bVar14 = *(byte *)(lStack_a0 + _DAT_11306b458);
      lVar23 = ((long *)(unaff_x20 + _DAT_11306b460))[1];
      lVar24 = ((long *)(lStack_a0 + _DAT_11306b460))[1];
      uVar30 = (uint)(lVar23 == 0 && lVar24 == 0);
      if ((lVar23 != 0) && (lVar24 != 0)) {
        lVar25 = *(long *)(unaff_x20 + _DAT_11306b460);
        if ((lVar25 == *(long *)(lStack_a0 + _DAT_11306b460)) && (lVar23 == lVar24)) {
          uVar30 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar30 = (uint)lVar25;
        }
      }
      if (*(long *)(unaff_x20 + _DAT_11306b468) == 0) {
        lVar24 = *(long *)(lStack_a0 + _DAT_11306b468);
        lVar23 = lVar24;
        _objc_retain(lVar24);
        _objc_release(lStack_a0);
        if (lVar24 == 0) {
          uVar21 = 1;
        }
        else {
          _objc_release(lVar23);
          uVar21 = 0;
        }
      }
      else {
        lVar23 = *(long *)(lStack_a0 + _DAT_11306b468);
        if (lVar23 == 0) {
          uVar26 = 0;
          alStack_98[1] = 0;
          alStack_98[2] = 0;
        }
        else {
          uVar26 = 0;
          FUN_10427cc68();
        }
        alStack_98[0] = lVar23;
        alStack_98[3] = uVar26;
        _objc_retain(lVar23);
        plVar22 = alStack_98;
        FUN_10427c408(plVar22);
        uVar21 = (uint)plVar22;
        _objc_release(lStack_a0);
        func_0x0001042afc48(alStack_98,0x112d387f8,&UNK_10d902650);
      }
      uVar27 = 0;
      lVar23 = -(ulong)(dVar31 == dVar34);
      lVar24 = -(ulong)(dVar32 == dVar35);
      lVar25 = -(ulong)(dVar17 == dVar18);
      lVar33 = -(ulong)(dVar19 == dVar20);
      auVar15[1] = ~(byte)((ulong)lVar23 >> 8);
      auVar15[0] = ~(byte)lVar23;
      auVar15[2] = ~(byte)((ulong)lVar23 >> 0x10);
      auVar15[3] = ~(byte)((ulong)lVar23 >> 0x18);
      auVar15[4] = ~(byte)lVar24;
      auVar15[5] = ~(byte)((ulong)lVar24 >> 8);
      auVar15[6] = ~(byte)((ulong)lVar24 >> 0x10);
      auVar15[7] = ~(byte)((ulong)lVar24 >> 0x18);
      auVar15[8] = ~(byte)lVar25;
      auVar15[9] = ~(byte)((ulong)lVar25 >> 8);
      auVar15[10] = ~(byte)((ulong)lVar25 >> 0x10);
      auVar15[0xb] = ~(byte)((ulong)lVar25 >> 0x18);
      auVar15[0xc] = ~(byte)lVar33;
      auVar15[0xd] = ~(byte)((ulong)lVar33 >> 8);
      auVar15[0xe] = ~(byte)((ulong)lVar33 >> 0x10);
      auVar15[0xf] = ~(byte)((ulong)lVar33 >> 0x18);
      uVar16 = NEON_umaxv(auVar15,4);
      if ((((uVar16 & 0xff |
             ((byte)((iVar1 != iVar2 || iVar3 != iVar4) | bVar5 ^ bVar6) ^ 1) &
             uStack_bc & uStack_c0 & uStack_c4 & uStack_c8 & uStack_cc & uStack_d0 & uStack_d4 ^ 1 |
            (uint)(byte)(bVar7 ^ bVar8 | bVar9 ^ bVar10) |
            (uint)(bVar11 ^ bVar12) | uVar28 & uVar29 ^ 0xffffffff | (uint)(bVar13 ^ bVar14)) & 1)
           == 0) && (dVar36 == dVar37)) {
        uVar27 = uVar30 & uVar21;
      }
      goto LAB_1042ad27c;
    }
  }
  uVar27 = 0;
LAB_1042ad27c:
  return uVar27 & 1;
}



/* Entry: 1042ad888; end: 1042ad917; -[SCAdTrackInfo isEqual:] */

uint FUN_1042ad888(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042ad180(&uStack_40);
  _objc_release(param_1);
  FUN_1042afc48(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1042ad918; end: 1042ad91b; -[SCAdTrackInfo copyWithZone:] */

void FUN_1042ad918(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042ad91c; end: 1042adeff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ad91c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0x455059545f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441,0xe700000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x55444f52505f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441,0xef455059545f5443);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f29f0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4e4f435f57454956;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f435f57454956,0xec00000054584554);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f2a10);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f2a30);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f2a50);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f2a70);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f2a90);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f2ab0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b418);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11306b418))[1];
  uVar1 = 0x5a49535f454c4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5a49535f454c4954,0xe900000000000045);
  func_0x00010bf92e00(uVar2,uVar3,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b420);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11306b420))[1];
  uVar1 = 0x535f4e4545524353;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535f4e4545524353,0xeb00000000455a49);
  func_0x00010bf92e00(uVar2,uVar3,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306b428);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f2ad0);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2af0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f2b10);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2b30);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2b50);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x545845544e4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545845544e4f43,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2b70);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306b460))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b460);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2b90);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000024;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1f2bb0);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1042adf00; end: 1042adf4f; -[SCAdTrackInfo encodeWithCoder:] */

void FUN_1042adf00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042ad91c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042adf50; end: 1042adf7f;  */

void FUN_1042adf50(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042adf80(param_1);
  return;
}



/* Entry: 1042adf80; end: 1042aebd7;  */

undefined8 FUN_1042adf80(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  uVar2 = 0x455059545f4441;
  uVar12 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  FUN_1042a6cc4();
  if ((uVar12 & 0xff) != 1) {
    uVar2 = 0x55444f52505f4441;
    uVar12 = 0x545f5443;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441);
    func_0x00010bf66f40();
    _objc_release(uVar2);
    func_0x000102d02a38();
    if ((uVar12 & 0xff) != 1) {
      uVar2 = 0xd000000000000011;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f29f0);
      func_0x00010bf66ce0();
      _objc_release(uVar2);
      uVar2 = 0x4e4f435f57454956;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f435f57454956,0xec00000054584554);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar3 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      puVar1 = PTR___sypN_11034f1a8;
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_1042afc48(&uStack_c0,0x112d387f8,&UNK_10d902650);
        uStack_118 = 0;
      }
      else {
        uVar2 = 0;
        func_0x000101c68d90(0);
        puVar4 = &uStack_f0;
        _swift_dynamicCast(puVar4,&uStack_c0,puVar1 + 8,uVar2,6);
        uStack_118 = uStack_f0;
        if ((int)puVar4 == 0) {
          uStack_118 = 0;
        }
      }
      uVar2 = 0xd000000000000016;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f2a10);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar3 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_1042afc48(&uStack_c0,0x112d387f8,&UNK_10d902650);
        uStack_120 = 0;
      }
      else {
        uVar2 = 0;
        FUN_1042a6cd4(0);
        puVar4 = &uStack_f0;
        _swift_dynamicCast(puVar4,&uStack_c0,puVar1 + 8,uVar2,6);
        uStack_120 = uStack_f0;
        if ((int)puVar4 == 0) {
          uStack_120 = 0;
        }
      }
      uVar2 = 0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f2a30);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar3 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_1042afc48(&uStack_c0,0x112d387f8,&UNK_10d902650);
        uStack_128 = 0;
      }
      else {
        uVar2 = 0;
        FUN_1042d60f8(0);
        puVar4 = &uStack_f0;
        _swift_dynamicCast(puVar4,&uStack_c0,puVar1 + 8,uVar2,6);
        uStack_128 = uStack_f0;
        if ((int)puVar4 == 0) {
          uStack_128 = 0;
        }
      }
      uVar2 = 0xd000000000000014;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f2a50);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar3 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_1042afc48(&uStack_c0,0x112d387f8,&UNK_10d902650);
        uStack_130 = 0;
      }
      else {
        uVar2 = 0;
        FUN_10429506c(0);
        puVar4 = &uStack_f0;
        _swift_dynamicCast(puVar4,&uStack_c0,puVar1 + 8,uVar2,6);
        uStack_130 = uStack_f0;
        if ((int)puVar4 == 0) {
          uStack_130 = 0;
        }
      }
      uVar2 = 0xd000000000000012;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f2a70);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar3 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_1042afc48(&uStack_c0,0x112d387f8,&UNK_10d902650);
        uStack_138 = 0;
      }
      else {
        uVar2 = 0;
        FUN_1042856e0(0);
        puVar4 = &uStack_f0;
        _swift_dynamicCast(puVar4,&uStack_c0,puVar1 + 8,uVar2,6);
        uStack_138 = uStack_f0;
        if ((int)puVar4 == 0) {
          uStack_138 = 0;
        }
      }
      uVar2 = 0xd000000000000019;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1f2a90);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar3 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_1042afc48(&uStack_c0,0x112d387f8,&UNK_10d902650);
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        FUN_10427e978(0);
        puVar4 = &uStack_f0;
        _swift_dynamicCast(puVar4,&uStack_c0,puVar1 + 8,uVar2,6);
        uVar2 = uStack_f0;
        if ((int)puVar4 == 0) {
          uVar2 = 0;
        }
      }
      uVar5 = 0xd00000000000001b;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f2ab0);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (lVar3 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      uVar5 = uStack_d0;
      uVar15 = uStack_e0;
      if (lStack_c8 == 0) {
        FUN_1042afc48(&uStack_c0,0x112d387f8,&UNK_10d902650);
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        FUN_10427d520(0);
        puVar4 = &uStack_f0;
        _swift_dynamicCast(puVar4,&uStack_c0,puVar1 + 8,uVar6,6);
        uVar6 = uStack_f0;
        if ((int)puVar4 == 0) {
          uVar6 = 0;
        }
      }
      uVar7 = 0x5a49535f454c4954;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5a49535f454c4954,0xe900000000000045);
      func_0x00010bf66d40(param_1);
      uVar13 = uVar5;
      uVar16 = uVar15;
      _objc_release(uVar7);
      uVar7 = 0x535f4e4545524353;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535f4e4545524353,0xeb00000000455a49);
      func_0x00010bf66d40(param_1);
      uVar14 = uVar13;
      _objc_release(uVar7);
      uVar7 = 0xd00000000000001b;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f2ad0);
      func_0x00010bf66da0(param_1);
      _objc_release(uVar7);
      uVar7 = 0xd000000000000011;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2af0);
      func_0x00010bf66ce0();
      _objc_release(uVar7);
      uVar7 = 0xd000000000000018;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f2b10);
      func_0x00010bf66ce0();
      _objc_release(uVar7);
      uVar7 = 0xd000000000000011;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2b30);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (lVar3 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_1042afc48(&uStack_c0,0x112d387f8,&UNK_10d902650);
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        FUN_104293538(0);
        puVar4 = &uStack_f0;
        _swift_dynamicCast(puVar4,&uStack_c0,puVar1 + 8,uVar7,6);
        uVar7 = uStack_f0;
        if ((int)puVar4 == 0) {
          uVar7 = 0;
        }
      }
      uVar8 = 0xd000000000000015;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f2b50);
      func_0x00010bf66ce0();
      _objc_release(uVar8);
      uVar8 = 0x545845544e4f43;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545845544e4f43,0xe700000000000000);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      if (lVar3 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_1042afc48(&uStack_c0,0x112d387f8,&UNK_10d902650);
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        FUN_1042b0804(0);
        puVar4 = &uStack_f0;
        _swift_dynamicCast(puVar4,&uStack_c0,puVar1 + 8,uVar8,6);
        uVar8 = uStack_f0;
        if ((int)puVar4 == 0) {
          uVar8 = 0;
        }
      }
      uVar9 = 0xd000000000000011;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2b70);
      func_0x00010bf66ce0();
      _objc_release(uVar9);
      uVar9 = 0xd000000000000011;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f2b90);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      if (lVar3 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_1042afc48(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lVar3 = 0;
        uVar9 = 0;
      }
      else {
        puVar4 = &uStack_f0;
        _swift_dynamicCast(puVar4,&uStack_c0,puVar1 + 8,PTR___sSSN_11034da80,6);
        lVar3 = lStack_e8;
        uVar9 = uStack_f0;
        if ((int)puVar4 == 0) {
          uVar9 = 0;
          lVar3 = 0;
        }
      }
      uVar11 = 0xd000000000000024;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1f2bb0);
      lVar10 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      if (lVar10 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,lVar10);
        _swift_unknownObjectRelease(lVar10);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        FUN_1042afc48(&uStack_c0,0x112d387f8,&UNK_10d902650);
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        FUN_10427cc68(0);
        puVar4 = &uStack_f0;
        _swift_dynamicCast(puVar4,&uStack_c0,puVar1 + 8,uVar11,6);
        uVar11 = uStack_f0;
        if ((int)puVar4 == 0) {
          uVar11 = 0;
        }
      }
      if (lVar3 == 0) {
        uVar9 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar9,lVar3);
        _swift_bridgeObjectRelease(lVar3);
      }
      func_0x00010bff2160(uVar5,uVar15,uVar13,uVar16,uVar14);
      _objc_release(uVar9);
      _objc_release(param_1);
      _objc_release(uStack_118);
      _objc_release(uStack_120);
      _objc_release(uStack_128);
      _objc_release(uStack_130);
      _objc_release(uStack_138);
      _objc_release(uVar2);
      _objc_release(uVar6);
      _objc_release(uVar7);
      _objc_release(uVar8);
      _objc_release(uVar11);
      return unaff_x20;
    }
  }
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1042aebd8; end: 1042aebff; -[SCAdTrackInfo initWithCoder:] */

void FUN_1042aebd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042adf80();
  return;
}



/* Entry: 1042aec00; end: 1042aec57; -[SCAdTrackInfo description] */

void FUN_1042aec00(void)

{
  undefined1 auStack_17f0 [6096];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _objc_retain();
  FUN_1042af544(auStack_17f0);
  func_0x000101897de4(auStack_17f0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042aec58; end: 1042aecd3; -[SCAdTrackInfo init] */

void FUN_1042aec58(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataServices/AdTrackInfoWrapper.swift",0x27
             ,2,0x110,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042aeca0);
  (*pcVar1)();
}



/* Entry: 1042aecd4; end: 1042aed9f; -[SCAdTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aecd4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b3e0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b3e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b3f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b3f8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b400));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b408));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b410));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b440));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b450));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306b460 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306b468));
  return;
}



/* Entry: 1042aeda0; end: 1042af543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042aeda0(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_4490;
  undefined8 uStack_4488;
  undefined8 uStack_4480;
  undefined8 uStack_4478;
  undefined8 uStack_4470;
  undefined8 uStack_4468;
  long lStack_4460;
  long lStack_4458;
  undefined8 uStack_3910;
  undefined8 uStack_3908;
  undefined8 uStack_3900;
  undefined8 uStack_38f8;
  undefined8 uStack_38f0;
  undefined8 uStack_38e8;
  long lStack_38e0;
  long lStack_38d8;
  long lStack_2d90;
  long lStack_2d88;
  long lStack_2d80;
  long lStack_2d78;
  undefined8 uStack_2d70;
  undefined8 uStack_2d68;
  long lStack_2d30;
  long lStack_2d28;
  long lStack_2d20;
  long lStack_2d18;
  long lStack_2d10;
  long lStack_2d08;
  undefined1 auStack_2cf0 [16];
  undefined1 auStack_2ce0 [2936];
  undefined8 uStack_2168;
  undefined1 auStack_2160 [2936];
  undefined1 auStack_15e8 [2744];
  undefined1 auStack_b30 [2752];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  uVar11 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11306b3c8) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306b3d0) = uVar11;
  *(undefined1 *)(unaff_x20 + _DAT_11306b3d8) = *(undefined1 *)(param_1 + 2);
  uStack_2168 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11306b3e0) = uStack_2168;
  _memcpy(auStack_b30,param_1 + 4,0xab2);
  iVar4 = (int)auStack_b30;
  func_0x00010178e478();
  if (iVar4 == 1) {
    func_0x0001042afc88(&uStack_2168,auStack_2160,0x112dce260,&UNK_10d990480);
    puVar9 = (undefined1 *)0x0;
  }
  else {
    _memcpy(auStack_15e8,auStack_b30,0xab2);
    FUN_1042a6cd4(0);
    _objc_allocWithZone();
    func_0x0001042afc88(&uStack_2168,auStack_2160,0x112dce260,&UNK_10d990480);
    func_0x0001042afc88(auStack_b30,auStack_2160,0x112dcbc88,&UNK_10d98e360);
    puVar9 = auStack_15e8;
    FUN_1042a5b4c();
    func_0x0001042afc48(auStack_b30,0x112dcbc88,&UNK_10d98e360);
  }
  *(undefined1 **)(unaff_x20 + _DAT_11306b3e8) = puVar9;
  _memcpy(auStack_2ce0,param_1 + 0x15b,0xb78);
  iVar4 = (int)auStack_2ce0;
  func_0x0001018a5614();
  if (iVar4 == 1) {
    puVar9 = (undefined1 *)0x0;
  }
  else {
    _memcpy(auStack_2160,auStack_2ce0,0xb78);
    FUN_1042d60f8(0);
    _objc_allocWithZone();
    _memcpy(&uStack_3910,auStack_2ce0,0xb78);
    func_0x00010178e408(&uStack_3910,&uStack_4490);
    puVar9 = auStack_2160;
    FUN_1042d55f4();
    func_0x0001042afc48(auStack_2ce0,0x112dcbc78,&UNK_10d98e350);
  }
  *(undefined1 **)(unaff_x20 + _DAT_11306b3f0) = puVar9;
  lVar10 = param_1[0x2cc];
  if (lVar10 == 1) {
    plVar5 = (long *)0x0;
  }
  else {
    uVar11 = param_1[0x2ce];
    uVar12 = param_1[0x2cd];
    uVar13 = param_1[0x2cb];
    bVar1 = *(byte *)(param_1 + 0x2ca);
    lVar8 = 0;
    FUN_10429506c();
    lVar6 = lVar8;
    _objc_allocWithZone();
    *(byte *)(lVar6 + _DAT_11306ad48) = bVar1 & 1;
    puVar7 = (undefined8 *)(lVar6 + _DAT_11306ad50);
    *puVar7 = uVar13;
    puVar7[1] = lVar10;
    puVar7 = (undefined8 *)(lVar6 + _DAT_11306ad58);
    *puVar7 = uVar12;
    puVar7[1] = uVar11;
    puVar3 = PTR_s_init_1125d9248;
    lStack_2d90 = lVar6;
    lStack_2d88 = lVar8;
    _swift_bridgeObjectRetain(lVar10);
    _swift_bridgeObjectRetain(uVar11);
    plVar5 = &lStack_2d90;
    _objc_msgSendSuper2(plVar5,puVar3);
  }
  *(long **)(unaff_x20 + _DAT_11306b3f8) = plVar5;
  bVar1 = *(byte *)(param_1 + 0x2cf);
  if (bVar1 == 2) {
    plVar5 = (long *)0x0;
  }
  else {
    uVar11 = param_1[0x2d0];
    lVar6 = 0;
    FUN_1042856e0();
    lVar10 = lVar6;
    _objc_allocWithZone();
    *(byte *)(lVar10 + _DAT_11306a798) = bVar1 & 1;
    *(undefined8 *)(lVar10 + _DAT_11306a7a0) = uVar11;
    plVar5 = &lStack_2d80;
    lStack_2d80 = lVar10;
    lStack_2d78 = lVar6;
    _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11306b400) = plVar5;
  lVar10 = param_1[0x2d8];
  if (lVar10 == 1) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lStack_4460 = param_1[0x2d7];
    uStack_4488 = param_1[0x2d2];
    uStack_4490 = param_1[0x2d1];
    uStack_4478 = param_1[0x2d4];
    uStack_4480 = param_1[0x2d3];
    uStack_4468 = param_1[0x2d6];
    uStack_4470 = param_1[0x2d5];
    lStack_4458 = lVar10;
    uStack_3910 = uStack_4490;
    uStack_3908 = uStack_4488;
    uStack_3900 = uStack_4480;
    uStack_38f8 = uStack_4478;
    uStack_38f0 = uStack_4470;
    uStack_38e8 = uStack_4468;
    lStack_38e0 = lStack_4460;
    lStack_38d8 = lVar10;
    FUN_10427e978(0);
    _objc_allocWithZone();
    func_0x00010189a634(&uStack_4490,&uStack_2d70);
    puVar7 = &uStack_3910;
    FUN_10427d8f4();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11306b408) = puVar7;
  lVar10 = param_1[0x2dc];
  if (lVar10 == 1) {
    plVar5 = (long *)0x0;
  }
  else {
    uVar11 = param_1[0x2db];
    uVar12 = param_1[0x2da];
    bVar1 = *(byte *)(param_1 + 0x2d9);
    lVar8 = 0;
    FUN_10427d520();
    lVar6 = lVar8;
    _objc_allocWithZone();
    *(byte *)(lVar6 + _DAT_11306a4c8) = bVar1 & 1;
    *(undefined8 *)(lVar6 + _DAT_11306a4d0) = uVar12;
    puVar7 = (undefined8 *)(lVar6 + _DAT_11306a4d8);
    *puVar7 = uVar11;
    puVar7[1] = lVar10;
    puVar3 = PTR_s_init_1125d9248;
    lStack_2d30 = lVar6;
    lStack_2d28 = lVar8;
    _swift_bridgeObjectRetain(lVar10);
    plVar5 = &lStack_2d30;
    _objc_msgSendSuper2(plVar5,puVar3);
  }
  *(long **)(unaff_x20 + _DAT_11306b410) = plVar5;
  uVar11 = param_1[0x2dd];
  puVar7 = (undefined8 *)(unaff_x20 + _DAT_11306b418);
  puVar7[1] = param_1[0x2de];
  *puVar7 = uVar11;
  uVar11 = param_1[0x2df];
  puVar7 = (undefined8 *)(unaff_x20 + _DAT_11306b420);
  puVar7[1] = param_1[0x2e0];
  *puVar7 = uVar11;
  *(undefined8 *)(unaff_x20 + _DAT_11306b428) = param_1[0x2e1];
  *(undefined1 *)(unaff_x20 + _DAT_11306b430) = *(undefined1 *)(param_1 + 0x2e2);
  *(undefined1 *)(unaff_x20 + _DAT_11306b438) = *(undefined1 *)((long)param_1 + 0x1711);
  lVar10 = param_1[0x2e6];
  if (lVar10 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    uVar13 = param_1[0x2e8];
    uVar14 = param_1[0x2e7];
    uVar15 = param_1[0x2e5];
    uVar11 = param_1[0x2e4];
    uVar12 = param_1[0x2e3];
    lVar8 = 0;
    FUN_104293538();
    lVar6 = lVar8;
    _objc_allocWithZone();
    *(undefined8 *)(lVar6 + _DAT_11306ac88) = uVar12;
    *(undefined8 *)(lVar6 + _DAT_11306ac90) = uVar11;
    puVar7 = (undefined8 *)(lVar6 + _DAT_11306ac98);
    *puVar7 = uVar15;
    puVar7[1] = lVar10;
    *(undefined8 *)(lVar6 + _DAT_11306aca0) = uVar14;
    *(undefined8 *)(lVar6 + _DAT_11306aca8) = uVar13;
    puVar3 = PTR_s_init_1125d9248;
    lStack_2d20 = lVar6;
    lStack_2d18 = lVar8;
    _swift_bridgeObjectRetain(lVar10);
    plVar5 = &lStack_2d20;
    _objc_msgSendSuper2(plVar5,puVar3);
  }
  *(long **)(unaff_x20 + _DAT_11306b440) = plVar5;
  *(undefined1 *)(unaff_x20 + _DAT_11306b448) = *(undefined1 *)(param_1 + 0x2e9);
  lVar10 = param_1[0x2f0];
  if (lVar10 == 1) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uStack_4470 = param_1[0x2ee];
    uStack_4480 = param_1[0x2ec];
    uStack_4490 = param_1[0x2ea];
    uStack_4488 = CONCAT71(uStack_4488._1_7_,(char)param_1[0x2eb]);
    uStack_4478 = CONCAT71(uStack_4478._1_7_,(char)param_1[0x2ed]);
    uStack_4468 = CONCAT71(uStack_4468._1_7_,(char)param_1[0x2ef]);
    lStack_4460 = lVar10;
    FUN_1042b0804(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(lVar10);
    puVar7 = &uStack_4490;
    FUN_1042b0418();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11306b450) = puVar7;
  *(undefined1 *)(unaff_x20 + _DAT_11306b458) = *(undefined1 *)(param_1 + 0x2f1);
  uStack_2d68 = param_1[0x2f3];
  uStack_2d70 = param_1[0x2f2];
  puVar7 = (undefined8 *)(unaff_x20 + _DAT_11306b460);
  puVar7[1] = uStack_2d68;
  *puVar7 = uStack_2d70;
  lVar10 = param_1[0x2f7];
  if (lVar10 == 1) {
    func_0x0001042afc88(&uStack_2d70,auStack_2cf0,0x112d35ff8,&UNK_10d900cd0);
    plVar5 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x2f8);
    uVar11 = param_1[0x2f9];
    uVar12 = param_1[0x2f6];
    uVar13 = param_1[0x2f5];
    bVar2 = *(byte *)(param_1 + 0x2f4);
    lVar8 = 0;
    FUN_10427cc68();
    lVar6 = lVar8;
    _objc_allocWithZone();
    *(byte *)(lVar6 + _DAT_11306a478) = bVar2 & 1;
    *(undefined8 *)(lVar6 + _DAT_11306a480) = uVar13;
    puVar7 = (undefined8 *)(lVar6 + _DAT_11306a488);
    *puVar7 = uVar12;
    puVar7[1] = lVar10;
    *(byte *)(lVar6 + _DAT_11306a490) = bVar1 & 1;
    *(undefined8 *)(lVar6 + _DAT_11306a498) = uVar11;
    func_0x0001042afc88(&uStack_2d70,auStack_2cf0,0x112d35ff8,&UNK_10d900cd0);
    puVar3 = PTR_s_init_1125d9248;
    lStack_2d10 = lVar6;
    lStack_2d08 = lVar8;
    _swift_bridgeObjectRetain(lVar10);
    _swift_bridgeObjectRetain(uVar11);
    plVar5 = &lStack_2d10;
    _objc_msgSendSuper2(plVar5,puVar3);
  }
  *(long **)(unaff_x20 + _DAT_11306b468) = plVar5;
  _objc_msgSendSuper2(&stack0xffffffffffffd300,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042af544; end: 1042afc27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042af544(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_8cc0;
  undefined8 uStack_8cb8;
  undefined8 uStack_8cb0;
  undefined8 uStack_8ca8;
  undefined8 uStack_8ca0;
  undefined8 uStack_8c98;
  undefined1 auStack_8c80 [6096];
  undefined1 auStack_74b0 [6096];
  undefined1 auStack_5ce0 [6096];
  undefined1 auStack_4510 [2936];
  undefined8 uStack_3998;
  undefined8 uStack_3990;
  undefined1 uStack_3988;
  undefined8 uStack_3980;
  undefined1 auStack_3978 [2744];
  undefined1 auStack_2ec0 [2936];
  ulong uStack_2348;
  undefined8 uStack_2340;
  undefined8 uStack_2338;
  undefined8 uStack_2330;
  undefined8 uStack_2328;
  ulong uStack_2320;
  undefined8 uStack_2318;
  undefined8 uStack_2310;
  undefined8 uStack_2308;
  undefined8 uStack_2300;
  undefined8 uStack_22f8;
  undefined8 uStack_22f0;
  undefined8 uStack_22e8;
  undefined8 uStack_22e0;
  undefined8 uStack_22d8;
  ulong uStack_22d0;
  undefined8 uStack_22c8;
  undefined8 uStack_22c0;
  undefined8 uStack_22b8;
  undefined8 uStack_22b0;
  undefined8 uStack_22a8;
  undefined8 uStack_22a0;
  undefined8 uStack_2298;
  undefined8 uStack_2290;
  undefined1 uStack_2288;
  undefined1 uStack_2287;
  undefined8 uStack_2280;
  undefined8 uStack_2278;
  undefined8 uStack_2270;
  undefined8 uStack_2268;
  undefined8 uStack_2260;
  undefined8 uStack_2258;
  undefined1 uStack_2250;
  undefined8 uStack_2248;
  ulong uStack_2240;
  undefined8 uStack_2238;
  ulong uStack_2230;
  undefined8 uStack_2228;
  ulong uStack_2220;
  undefined8 uStack_2218;
  undefined1 uStack_2210;
  undefined8 uStack_2208;
  undefined8 uStack_2200;
  ulong uStack_21f8;
  undefined8 uStack_21f0;
  undefined8 uStack_21e8;
  undefined8 uStack_21e0;
  ulong uStack_21d8;
  undefined8 uStack_21d0;
  undefined8 uStack_21c8;
  undefined8 uStack_21c0;
  undefined8 uStack_21b8;
  undefined8 uStack_21b0;
  undefined8 uStack_21a8;
  undefined8 uStack_21a0;
  undefined8 uStack_2198;
  undefined8 uStack_2190;
  undefined8 uStack_2188;
  byte bStack_2180;
  undefined8 uStack_2178;
  byte bStack_2170;
  undefined8 uStack_2168;
  byte bStack_2160;
  undefined8 uStack_2158;
  undefined1 auStack_2150 [2744];
  undefined1 auStack_1698 [2744];
  undefined1 auStack_be0 [2944];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001018a91f0(auStack_1698);
  _memcpy(auStack_3978,auStack_1698,0xab2);
  func_0x00010189b438(auStack_be0);
  _memcpy(auStack_2ec0,auStack_be0,0xb78);
  uStack_2308 = 0;
  uStack_2310 = 0;
  uStack_22f8 = 0;
  uStack_2300 = 0;
  uStack_22e8 = 0;
  uStack_22f0 = 0;
  uStack_3998 = *(undefined8 *)(param_1 + _DAT_11306b3c8);
  uStack_3990 = *(undefined8 *)(param_1 + _DAT_11306b3d0);
  uStack_22d8 = 1;
  uStack_3988 = *(undefined1 *)(param_1 + _DAT_11306b3d8);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11306b3e0);
  uStack_22e0 = 0;
  lVar7 = *(long *)(param_1 + _DAT_11306b3e8);
  uStack_3980 = uVar6;
  if (lVar7 == 0) {
    _memcpy(auStack_2150,auStack_1698,0xab2);
    _objc_retain(uVar6);
  }
  else {
    _objc_retain(uVar6);
    _objc_retain(lVar7);
    func_0x0001042a6474(auStack_5ce0);
    func_0x00010178e4a0(auStack_5ce0);
    _memcpy(auStack_2150,auStack_5ce0,0xab2);
  }
  FUN_1042afc48(auStack_3978,0x112dcbc88,&UNK_10d98e360);
  _memcpy(auStack_3978,auStack_2150,0xab2);
  if (*(long *)(param_1 + _DAT_11306b3f0) == 0) {
    puVar3 = auStack_be0;
  }
  else {
    _objc_retain();
    func_0x0001042d5b90(auStack_5ce0);
    func_0x00010178e4a8(auStack_5ce0);
    puVar3 = auStack_5ce0;
  }
  _memcpy(auStack_4510,puVar3,0xb78);
  FUN_1042afc48(auStack_2ec0,0x112dcbc78,&UNK_10d98e350);
  _memcpy(auStack_2ec0,auStack_4510,0xb78);
  lVar7 = *(long *)(param_1 + _DAT_11306b3f8);
  if (lVar7 == 0) {
    uVar10 = 0;
    uVar6 = 0;
    uVar2 = 0;
    uVar5 = 0;
    uVar4 = 1;
  }
  else {
    uVar10 = (ulong)*(byte *)(lVar7 + _DAT_11306ad48);
    uVar6 = *(undefined8 *)(lVar7 + _DAT_11306ad50);
    uVar4 = ((undefined8 *)(lVar7 + _DAT_11306ad50))[1];
    uVar2 = *(undefined8 *)(lVar7 + _DAT_11306ad58);
    uVar5 = ((undefined8 *)(lVar7 + _DAT_11306ad58))[1];
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar4);
  }
  lVar7 = *(long *)(param_1 + _DAT_11306b400);
  if (lVar7 == 0) {
    uStack_2320 = 2;
    uStack_2318 = 0;
  }
  else {
    uStack_2320 = (ulong)*(byte *)(lVar7 + _DAT_11306a798);
    uStack_2318 = *(undefined8 *)(lVar7 + _DAT_11306a7a0);
  }
  uStack_2348 = uVar10;
  uStack_2340 = uVar6;
  uStack_2338 = uVar4;
  uStack_2330 = uVar2;
  uStack_2328 = uVar5;
  if (*(long *)(param_1 + _DAT_11306b408) == 0) {
    uStack_21a8 = 0;
    uStack_21a0 = 0;
    uStack_8ca8 = 0;
    uStack_8cb0 = 0;
    uStack_8c98 = 1;
    uStack_8ca0 = 0;
    uStack_8cb8 = 0;
    uStack_8cc0 = 0;
  }
  else {
    _objc_retain();
    FUN_10427e7e4(&uStack_21c8);
    uStack_8cb8 = uStack_21b0;
    uStack_8cc0 = uStack_21b8;
    uStack_8ca8 = uStack_21c0;
    uStack_8cb0 = uStack_21c8;
    uStack_8c98 = uStack_2190;
    uStack_8ca0 = uStack_2198;
  }
  FUN_1042afc48(&uStack_2310,0x112dcd928,&UNK_10d9900a0);
  uStack_2308 = uStack_8ca8;
  uStack_2310 = uStack_8cb0;
  uStack_22f8 = uStack_8cb8;
  uStack_2300 = uStack_8cc0;
  uStack_22d8 = uStack_8c98;
  uStack_22e0 = uStack_8ca0;
  lVar7 = *(long *)(param_1 + _DAT_11306b410);
  uStack_22f0 = uStack_21a8;
  uStack_22e8 = uStack_21a0;
  if (lVar7 == 0) {
    uVar10 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar2 = 1;
  }
  else {
    uVar10 = (ulong)*(byte *)(lVar7 + _DAT_11306a4c8);
    uVar4 = *(undefined8 *)(lVar7 + _DAT_11306a4d0);
    uVar6 = *(undefined8 *)(lVar7 + _DAT_11306a4d8);
    uVar2 = ((undefined8 *)(lVar7 + _DAT_11306a4d8))[1];
    _swift_bridgeObjectRetain();
  }
  uStack_22a8 = ((undefined8 *)(param_1 + _DAT_11306b418))[1];
  uStack_22b0 = *(undefined8 *)(param_1 + _DAT_11306b418);
  uStack_2298 = ((undefined8 *)(param_1 + _DAT_11306b420))[1];
  uStack_22a0 = *(undefined8 *)(param_1 + _DAT_11306b420);
  uStack_2290 = *(undefined8 *)(param_1 + _DAT_11306b428);
  uStack_2288 = *(undefined1 *)(param_1 + _DAT_11306b430);
  uStack_2287 = *(undefined1 *)(param_1 + _DAT_11306b438);
  lVar7 = *(long *)(param_1 + _DAT_11306b440);
  uStack_22d0 = uVar10;
  uStack_22c8 = uVar4;
  uStack_22c0 = uVar6;
  uStack_22b8 = uVar2;
  if (lVar7 == 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar2 = 0;
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar7 + _DAT_11306ac88);
    uVar4 = *(undefined8 *)(lVar7 + _DAT_11306ac90);
    uVar8 = *(undefined8 *)(lVar7 + _DAT_11306aca0);
    uVar6 = *(undefined8 *)(lVar7 + _DAT_11306ac98);
    uVar2 = ((undefined8 *)(lVar7 + _DAT_11306ac98))[1];
    uVar9 = *(undefined8 *)(lVar7 + _DAT_11306aca8);
    _swift_bridgeObjectRetain();
  }
  uStack_2250 = *(undefined1 *)(param_1 + _DAT_11306b448);
  lVar7 = *(long *)(param_1 + _DAT_11306b450);
  uStack_2280 = uVar5;
  uStack_2278 = uVar4;
  uStack_2270 = uVar6;
  uStack_2268 = uVar2;
  uStack_2260 = uVar8;
  uStack_2258 = uVar9;
  if (lVar7 == 0) {
    uStack_2188 = 0;
    uVar10 = 0;
    uStack_2178 = 0;
    uVar11 = 0;
    uStack_2168 = 0;
    uVar12 = 0;
    uStack_2158 = 1;
  }
  else {
    _objc_retain();
    FUN_1042b06f4(&uStack_2188);
    uVar10 = (ulong)bStack_2180;
    uVar11 = (ulong)bStack_2170;
    uVar12 = (ulong)bStack_2160;
    FUN_10422e1a8(&uStack_2188,auStack_5ce0);
    _objc_release(lVar7);
  }
  uStack_2210 = *(undefined1 *)(param_1 + _DAT_11306b458);
  puVar1 = (undefined8 *)(param_1 + _DAT_11306b460);
  uVar6 = puVar1[1];
  uStack_2200 = puVar1[1];
  uStack_2208 = *puVar1;
  lVar7 = *(long *)(param_1 + _DAT_11306b468);
  uStack_2248 = uStack_2188;
  uStack_2240 = uVar10;
  uStack_2238 = uStack_2178;
  uStack_2230 = uVar11;
  uStack_2228 = uStack_2168;
  uStack_2220 = uVar12;
  uStack_2218 = uStack_2158;
  if (lVar7 == 0) {
    _swift_bridgeObjectRetain(uVar6);
    _objc_release(param_1);
    uStack_21f8 = 0;
    uStack_21f0 = 0;
    uStack_21e8 = 0;
    uStack_21d8 = 0;
    uStack_21d0 = 0;
    uStack_21e0 = 1;
  }
  else {
    uStack_21f8 = (ulong)*(byte *)(lVar7 + _DAT_11306a478);
    uStack_21f0 = *(undefined8 *)(lVar7 + _DAT_11306a480);
    uStack_21d8 = (ulong)*(byte *)(lVar7 + _DAT_11306a490);
    uStack_21e8 = *(undefined8 *)(lVar7 + _DAT_11306a488);
    uStack_21e0 = ((undefined8 *)(lVar7 + _DAT_11306a488))[1];
    uStack_21d0 = *(undefined8 *)(lVar7 + _DAT_11306a498);
    _swift_bridgeObjectRetain(uStack_21d0);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uStack_21e0);
    _objc_release(param_1);
  }
  _memcpy(auStack_74b0,&uStack_3998,0x17d0);
  _memcpy(auStack_5ce0,&uStack_3998,0x17d0);
  func_0x000101897da8(auStack_74b0,auStack_8c80);
  func_0x000101897de4(auStack_5ce0);
  _memcpy(extraout_x8,auStack_74b0,0x17d0);
  return;
}



/* Entry: 1042afc28; end: 1042afc47;  */

void FUN_1042afc28(void)

{
  _objc_opt_self(&PTR_PTR_112994a98);
  return;
}



/* Entry: 1042afc48; end: 1042afd73;  */

undefined8 FUN_1042afc48(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1042afd74; end: 1042afee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042afd74(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b4a0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b4a8);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11306b4b0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306b4b8);
  lVar3 = lVar2;
  if (lVar2 != 0) {
    uVar1 = 0x112dc6598;
    func_0x0001000285a8(0x112dc6598,&UNK_10d9bc300);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar2,PTR___sSiN_11034deb0,uVar1,PTR___sSiSHsWP_11034dec0);
    lVar3 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042afee8; end: 1042b016f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042afee8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  FUN_1042b07bc(param_1,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar1 = &lStack_78;
    _swift_dynamicCast(plVar1,auStack_70,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_11306b4a0);
      lVar7 = *(long *)(lStack_78 + _DAT_11306b4a0);
      uVar5 = (uint)(lVar4 == 0 && lVar7 == 0);
      if (lVar4 != 0 && lVar7 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar7);
        _objc_retain();
        lVar2 = lVar4;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar5 = (uint)lVar2;
        _objc_release(lVar4);
        _objc_release(lVar7);
      }
      lVar4 = *(long *)(unaff_x20 + _DAT_11306b4a8);
      lVar7 = *(long *)(lStack_78 + _DAT_11306b4a8);
      uVar6 = (uint)(lVar4 == 0 && lVar7 == 0);
      if (lVar4 != 0 && lVar7 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar7);
        _objc_retain();
        lVar2 = lVar4;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar6 = (uint)lVar2;
        _objc_release(lVar4);
        _objc_release(lVar7);
      }
      lVar4 = *(long *)(unaff_x20 + _DAT_11306b4b0);
      lVar7 = *(long *)(lStack_78 + _DAT_11306b4b0);
      uVar3 = (uint)(lVar4 == 0 && lVar7 == 0);
      if ((lVar4 != 0) && (lVar7 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar7);
        _objc_retain(lVar4);
        lVar2 = lVar4;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar3 = (uint)lVar2;
        _objc_release(lVar4);
        _objc_release(lVar7);
      }
      lVar4 = *(long *)(unaff_x20 + _DAT_11306b4b8);
      lVar7 = *(long *)(lStack_78 + _DAT_11306b4b8);
      if (lVar4 == 0) {
        _swift_bridgeObjectRetain(lVar7);
        _objc_release(lStack_78);
        if (lVar7 == 0) {
          uVar8 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar7);
LAB_1042b012c:
          uVar8 = 0;
        }
      }
      else {
        if (lVar7 == 0) {
          _objc_release(lStack_78);
          goto LAB_1042b012c;
        }
        _swift_bridgeObjectRetain(lVar7);
        lVar2 = lVar4;
        _swift_bridgeObjectRetain(lVar4);
        uVar8 = (uint)lVar2;
        func_0x000104288214();
        _swift_bridgeObjectRelease(lVar4);
        _swift_bridgeObjectRelease(lVar7);
        _objc_release(lStack_78);
      }
      if ((uVar5 & uVar6 & 1) != 0) {
        uVar3 = uVar3 & uVar8;
        goto LAB_1042b0150;
      }
    }
  }
  uVar3 = 0;
LAB_1042b0150:
  return uVar3 & 1;
}



/* Entry: 1042b0170; end: 1042b017f; -[SCAdTrackInfoContext swipeRestrictionDurationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b4a0));
  return;
}



/* Entry: 1042b0180; end: 1042b018f; -[SCAdTrackInfoContext cardAnimationDelayMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b4a8));
  return;
}



/* Entry: 1042b0190; end: 1042b019f; -[SCAdTrackInfoContext segmentIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0190(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b4b0));
  return;
}



/* Entry: 1042b01a0; end: 1042b0217; -[SCAdTrackInfoContext impressionInfos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b01a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_11306b4b8);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    uVar1 = 0x112dc6598;
    func_0x0001000285a8(0x112dc6598,&UNK_10d9bc300);
    lVar3 = lVar2;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar2,PTR___sSiN_11034deb0,uVar1,PTR___sSiSHsWP_11034dec0);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1042b0218; end: 1042b032f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306b4a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306b4a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306b4b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306b4b8) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042b0330; end: 1042b0417; -[SCAdTrackInfoContext initWithSwipeRestrictionDurationMs:cardAnimationDelayMs:segmentIndex:impressionInfos:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_6 == 0) {
    param_6 = 0;
  }
  else {
    uVar3 = 0x112dc6598;
    func_0x0001000285a8(0x112dc6598,&UNK_10d9bc300);
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_6,PTR___sSiN_11034deb0,uVar3,PTR___sSiSHsWP_11034dec0);
  }
  *(undefined8 *)(param_1 + _DAT_11306b4a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306b4a8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11306b4b0) = param_5;
  *(long *)(param_1 + _DAT_11306b4b8) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 1042b0418; end: 1042b0523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0418(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  _swift_getObjectType();
  if (*(char *)(param_1 + 1) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = *param_1;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306b4a0) = puVar1;
  if (*(char *)(param_1 + 3) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[2];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306b4a8) = puVar1;
  if (*(char *)(param_1 + 5) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306b4b0) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11306b4b8) = param_1[6];
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042b0524; end: 1042b0557; -[SCAdTrackInfoContext hash] */

undefined8 FUN_1042b0524(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042afd74();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042b0558; end: 1042b05d7; -[SCAdTrackInfoContext isEqual:] */

uint FUN_1042b0558(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042afee8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042b05d8; end: 1042b05db; -[SCAdTrackInfoContext copyWithZone:] */

void FUN_1042b05d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042b05dc; end: 1042b061f; -[SCAdTrackInfoContext description] */

void FUN_1042b05dc(undefined8 param_1)

{
  undefined1 auStack_58 [56];
  
  _objc_retain();
  FUN_1042b06f4(auStack_58);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042b0620; end: 1042b069b; -[SCAdTrackInfoContext init] */

void FUN_1042b0620(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdTrackInfoContextWrapper.swift",0x2e,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042b0668);
  (*pcVar1)();
}



/* Entry: 1042b069c; end: 1042b06f3; -[SCAdTrackInfoContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b069c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b4a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b4a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306b4b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306b4b8));
  return;
}



/* Entry: 1042b06f4; end: 1042b07bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b06f4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = 0;
  bVar1 = *(long *)(param_3 + _DAT_11306b4a0) == 0;
  if (bVar1) {
    uVar7 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar7 = param_2;
  }
  bVar2 = *(long *)(param_3 + _DAT_11306b4a8) == 0;
  if (!bVar2) {
    func_0x00010bf885a0();
    uVar6 = param_2;
  }
  lVar4 = *(long *)(param_3 + _DAT_11306b4b0);
  bVar3 = lVar4 == 0;
  if (!bVar3) {
    func_0x00010c067fc0();
  }
  uVar5 = *(undefined8 *)(param_3 + _DAT_11306b4b8);
  *param_1 = uVar7;
  *(bool *)(param_1 + 1) = bVar1;
  param_1[2] = uVar6;
  *(bool *)(param_1 + 3) = bVar2;
  param_1[4] = lVar4;
  *(bool *)(param_1 + 5) = bVar3;
  param_1[6] = uVar5;
  return;
}



/* Entry: 1042b07bc; end: 1042b0803;  */

undefined8 FUN_1042b07bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1042b0804; end: 1042b0823;  */

void FUN_1042b0804(void)

{
  _objc_opt_self(&PTR_PTR_112994c08);
  return;
}



/* Entry: 1042b0824; end: 1042b09d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0824(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_1830 [6096];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = ((undefined8 *)(param_1 + _DAT_11306b4e8))[1];
  uVar1 = *(undefined1 *)(param_1 + _DAT_11306b4f0);
  *extraout_x8 = *(undefined8 *)(param_1 + _DAT_11306b4e8);
  extraout_x8[1] = uVar5;
  *(undefined1 *)(extraout_x8 + 2) = uVar1;
  uVar5 = *(undefined8 *)(param_1 + _DAT_11306b4f8);
  _swift_bridgeObjectRetain();
  _objc_retain(uVar5);
  FUN_1042af544(auStack_1830);
  _memcpy(extraout_x8 + 3,auStack_1830,0x17d0);
  uVar5 = ((undefined8 *)(param_1 + _DAT_11306b500))[1];
  extraout_x8[0x2fd] = *(undefined8 *)(param_1 + _DAT_11306b500);
  extraout_x8[0x2fe] = uVar5;
  uVar6 = *(undefined8 *)(param_1 + _DAT_11306b508);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11306b510);
  extraout_x8[0x2ff] = uVar6;
  extraout_x8[0x300] = uVar7;
  uVar8 = *(undefined8 *)(param_1 + _DAT_11306b518);
  extraout_x8[0x301] = uVar8;
  *(undefined1 *)(extraout_x8 + 0x302) = *(undefined1 *)(param_1 + _DAT_11306b520);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11306b528);
  lVar3 = 0;
  FUN_10423cab0();
  iVar2 = *(int *)(lVar3 + 0x30);
  _swift_bridgeObjectRetain(uVar8);
  _objc_retain(uVar9);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  func_0x0001047b6fb0((long)extraout_x8 + (long)iVar2,uVar9);
  *(undefined8 *)((long)extraout_x8 + (long)*(int *)(lVar3 + 0x34)) =
       *(undefined8 *)(param_1 + _DAT_11306b530);
  lVar4 = *(long *)(param_1 + _DAT_11306b538);
  _objc_retain();
  _objc_release(param_1);
  uVar5 = *(undefined8 *)(lVar4 + _DAT_113069750);
  _objc_release(lVar4);
  *(undefined8 *)((long)extraout_x8 + (long)*(int *)(lVar3 + 0x38)) = uVar5;
  return;
}



/* Entry: 1042b09d8; end: 1042b0a07;  */

void FUN_1042b09d8(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x0001042b0f38(param_1);
  return;
}



/* Entry: 1042b0a08; end: 1042b0a53; -[SCAdTrackRequest adIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0a08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306b4e8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306b4e8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042b0a54; end: 1042b0a63; -[SCAdTrackRequest disableShadowTrack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042b0a54(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b4f0);
}



/* Entry: 1042b0a64; end: 1042b0a73; -[SCAdTrackRequest adTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0a64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b4f8));
  return;
}



/* Entry: 1042b0a74; end: 1042b0acf; -[SCAdTrackRequest sessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0a74(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306b500))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306b500);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042b0ad0; end: 1042b0adb; -[SCAdTrackRequest thirdPartyImpressionURLs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0ad0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306b508);
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



/* Entry: 1042b0adc; end: 1042b0ae7; -[SCAdTrackRequest thirdPartyClickURLs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0adc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306b510);
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



/* Entry: 1042b0ae8; end: 1042b0af3; -[SCAdTrackRequest thirdPartyEngagedViewClickURLs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0ae8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306b518);
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



/* Entry: 1042b0af4; end: 1042b0b43;  */

void FUN_1042b0af4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1042b0b44; end: 1042b0b53; -[SCAdTrackRequest updateTrackURLWithInventoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042b0b44(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306b520);
}



/* Entry: 1042b0b54; end: 1042b0b63; -[SCAdTrackRequest adResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0b54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b528));
  return;
}



/* Entry: 1042b0b64; end: 1042b0b73; -[SCAdTrackRequest triggerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042b0b64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306b530);
}



/* Entry: 1042b0b74; end: 1042b0b83; -[SCAdTrackRequest adTrackOption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0b74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306b538));
  return;
}



/* Entry: 1042b0b84; end: 1042b0de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b0b84(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b4e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11306b4f0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306b4f8) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306b500);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306b508) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306b510) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306b518) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_11306b520) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11306b528) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11306b530) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11306b538) = param_14;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042b0de4; end: 1042b119f; -[SCAdTrackRequest initWithAdIdentifier:disableShadowTrack:adTrackInfo:sessionId:thirdPartyImpressionURLs:thirdPartyClickURLs:thirdPartyEngagedViewClickURLs:updateTrackURLWithInventoryType:adResponse:triggerType:adTrackOption:] */

void FUN_1042b0de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,long param_9,
                  undefined1 param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_88;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_6 == 0) {
    uStack_88 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_88 = param_6;
  }
  if (param_7 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_7,PTR___sSSN_11034da80);
  }
  if (param_8 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_8,PTR___sSSN_11034da80);
  }
  _objc_retain(param_5);
  lVar1 = param_9;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (lVar1 == 0) {
    param_9 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_9,PTR___sSSN_11034da80);
    _objc_release(lVar1);
  }
  func_0x0001042b0cb4(param_3,param_2,param_4,param_5,uStack_88,uVar2,param_7,param_8,param_9,
                      param_10);
  return;
}



/* Entry: 1042b11a0; end: 1042b11d3; -[SCAdTrackRequest hash] */

undefined8 FUN_1042b11a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042b11d4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042b11d4; end: 1042b13e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042b11d4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306b4e8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar3,((undefined8 *)(unaff_x20 + _DAT_11306b4e8))[1]);
  uVar1 = uVar3;
  func_0x00010bfde980();
  _objc_release(uVar3);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b4f0));
  FUN_1042acd18();
  __ss6HasherV8_combineyySuF();
  if (((undefined8 *)(unaff_x20 + _DAT_11306b500))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306b500);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306b508);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSSN_11034da80);
    lVar4 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306b510);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSSN_11034da80);
    lVar4 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306b518);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSSN_11034da80);
    lVar4 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306b520));
  func_0x00010bfde980(*(undefined8 *)(unaff_x20 + _DAT_11306b528));
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306b530));
  __sSu9hashValueSivg(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_11306b538) + _DAT_113069750));
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042b13e8; end: 1042b16bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042b13e8(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  uint uStack_8c;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lVar11 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar7 = &lStack_88;
    _swift_dynamicCast(plVar7,auStack_80,PTR___sypN_11034f1a8 + 8,lVar11,6);
    if (((ulong)plVar7 & 1) != 0) {
      lVar11 = *(long *)(unaff_x20 + _DAT_11306b4e8);
      if (lVar11 == *(long *)(lStack_88 + _DAT_11306b4e8) &&
          ((long *)(unaff_x20 + _DAT_11306b4e8))[1] == ((long *)(lStack_88 + _DAT_11306b4e8))[1]) {
        uStack_8c = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_8c = (uint)lVar11 ^ 1;
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_11306b4f0);
      bVar2 = *(byte *)(lStack_88 + _DAT_11306b4f0);
      uVar15 = *(undefined8 *)(lStack_88 + _DAT_11306b4f8);
      uVar8 = 0;
      FUN_1042afc28();
      auStack_80[0] = uVar15;
      lStack_68 = uVar8;
      _objc_retain(uVar15);
      uVar5 = (uint)auStack_80;
      FUN_1042ad180();
      func_0x00010006e7f4(auStack_80);
      lVar11 = ((long *)(unaff_x20 + _DAT_11306b500))[1];
      lVar12 = ((long *)(lStack_88 + _DAT_11306b500))[1];
      uVar6 = (uint)(lVar11 == 0 && lVar12 == 0);
      if ((lVar11 != 0) && (lVar12 != 0)) {
        lVar9 = *(long *)(unaff_x20 + _DAT_11306b500);
        if ((lVar9 == *(long *)(lStack_88 + _DAT_11306b500)) && (lVar11 == lVar12)) {
          uVar6 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar6 = (uint)lVar9;
        }
      }
      lVar11 = *(long *)(unaff_x20 + _DAT_11306b508);
      uVar13 = (uint)(lVar11 == 0 && *(long *)(lStack_88 + _DAT_11306b508) == 0);
      if ((lVar11 != 0) && (*(long *)(lStack_88 + _DAT_11306b508) != 0)) {
        func_0x00010142cfc4();
        uVar13 = (uint)lVar11;
      }
      lVar11 = *(long *)(unaff_x20 + _DAT_11306b510);
      uVar18 = (uint)(lVar11 == 0 && *(long *)(lStack_88 + _DAT_11306b510) == 0);
      if ((lVar11 != 0) && (*(long *)(lStack_88 + _DAT_11306b510) != 0)) {
        func_0x00010142cfc4();
        uVar18 = (uint)lVar11;
      }
      lVar11 = *(long *)(unaff_x20 + _DAT_11306b518);
      uVar19 = (uint)(lVar11 == 0 && *(long *)(lStack_88 + _DAT_11306b518) == 0);
      if ((lVar11 != 0) && (*(long *)(lStack_88 + _DAT_11306b518) != 0)) {
        func_0x00010142cfc4();
        uVar19 = (uint)lVar11;
      }
      bVar3 = *(byte *)(unaff_x20 + _DAT_11306b520);
      bVar4 = *(byte *)(lStack_88 + _DAT_11306b520);
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_11306b528);
      func_0x00010c071ae0(uVar8);
      uVar16 = *(undefined8 *)(unaff_x20 + _DAT_11306b530);
      uVar17 = *(undefined8 *)(lStack_88 + _DAT_11306b530);
      uVar14 = *(undefined8 *)(lStack_88 + _DAT_11306b538);
      uVar15 = 0;
      FUN_10420d964();
      auStack_80[0] = uVar14;
      lStack_68 = uVar15;
      _objc_retain(uVar14);
      puVar10 = auStack_80;
      FUN_10420d45c(puVar10);
      _objc_release(lStack_88);
      func_0x00010006e7f4(auStack_80);
      return ((uStack_8c | bVar1 ^ bVar2) ^ 1) & uVar5 & uVar6 & uVar13 & uVar18 & uVar19 &
             ((bVar3 ^ bVar4) ^ 0xffffffff) &
             (uint)uVar8 & (uint)((int)uVar16 == (int)uVar17) & (uint)puVar10;
    }
  }
  return 0;
}



/* Entry: 1042b16bc; end: 1042b173b; -[SCAdTrackRequest isEqual:] */

uint FUN_1042b16bc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042b13e8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}


