/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104035d24; end: 104036133;  */

undefined * FUN_104035d24(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_allocWithZone();
  func_0x00010bfee200();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_opt_self(PTR__OBJC_CLASS___UIFont_1126aec38);
  puVar3 = puVar2;
  func_0x000107c4eca4();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c54adc(puVar1);
  _objc_release(puVar3);
  uVar8 = *param_1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,param_1[1]);
  func_0x000107c59c6c(puVar1);
  _objc_release(uVar8);
  func_0x000107c55528(puVar1);
  _objc_retain();
  func_0x000107c5381c(0x447a0000);
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_allocWithZone();
  func_0x00010bfee200();
  puVar4 = PTR__OBJC_CLASS___UIFontMetrics_1126d9278;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIFontMetrics_1126d9278);
  func_0x00010bfeeae0();
  puVar5 = puVar2;
  func_0x00010bf1eda0(0x4031000000000000,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x000107c51840(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar5);
  func_0x000107c54adc(puVar3);
  _objc_release(puVar6);
  func_0x000107c52518(puVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar5 = puVar4;
  func_0x000107c4a954();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c59c78(puVar3);
  _objc_release(puVar5);
  func_0x000107c56ba8(puVar3);
  lVar7 = param_1[2];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar7,param_1[3]);
  func_0x000107c59c6c(puVar3);
  _objc_release();
  func_0x0001008479c8();
  lVar10 = lVar7;
  _swift_allocObject();
  *(undefined8 *)(lVar10 + 0x18) = 3;
  *(undefined8 *)(lVar10 + 0x10) = 1;
  *(undefined **)(lVar10 + 0x20) = puVar3;
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_allocWithZone();
  uVar8 = 0;
  FUN_104036134(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  _objc_retain(puVar3);
  lVar9 = lVar10;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar10,uVar8);
  _swift_release(lVar10);
  func_0x00010bff3fe0();
  _objc_release(lVar9);
  func_0x000107c52b2c(puVar5);
  func_0x000107c59594(0x4000000000000000,puVar5);
  lVar10 = param_1[5];
  if (lVar10 != 0) {
    uVar11 = param_1[4];
    puVar6 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_allocWithZone(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010bfee200();
    func_0x000107c4eca4(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c54adc(puVar6);
    _objc_release(puVar2);
    func_0x000107c52518(puVar6);
    func_0x000107c51b24(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c59c78(puVar6);
    _objc_release(puVar4);
    func_0x000107c56ba8(puVar6);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar11,lVar10);
    func_0x000107c59c6c(puVar6);
    _objc_release(uVar11);
    func_0x00010bef6d60(puVar5);
    _objc_release(puVar6);
  }
  _swift_allocObject(lVar7,((ulong)*(uint *)(lVar7 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                     *(ushort *)(lVar7 + 0x34) | 7);
  *(undefined8 *)(lVar7 + 0x18) = 5;
  *(undefined8 *)(lVar7 + 0x10) = 2;
  *(undefined **)(lVar7 + 0x20) = puVar1;
  *(undefined **)(lVar7 + 0x28) = puVar5;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  _objc_retain(puVar5);
  lVar10 = lVar7;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar7,uVar8);
  _swift_release(lVar7);
  func_0x00010bff3fe0(puVar2);
  _objc_release(lVar10);
  func_0x000107c52b2c(puVar2);
  func_0x000107c52610(puVar2);
  func_0x000107c59594(0x4028000000000000,puVar2);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar3);
  return puVar2;
}



/* Entry: 104036134; end: 104036173;  */

void FUN_104036134(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 104036174; end: 1040361a7;  */

void FUN_104036174(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1040361a8; end: 104036213;  */

void FUN_1040361a8(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x6f65646976;
  if (cVar2 != '\x01') {
    uVar1 = 0x6567616d69;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,0xe500000000000000);
  _swift_bridgeObjectRelease(0xe500000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104036214; end: 104036253;  */

void FUN_104036214(undefined8 param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x6f65646976;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6567616d69;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe500000000000000);
  return;
}



/* Entry: 104036254; end: 1040362bb;  */

void FUN_104036254(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  uVar1 = 0x6f65646976;
  if (cVar2 != '\x01') {
    uVar1 = 0x6567616d69;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,0xe500000000000000);
  _swift_bridgeObjectRelease(0xe500000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040362bc; end: 104036333;  */

void FUN_1040362bc(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 104036334; end: 104036363;  */

void FUN_104036334(undefined8 *param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x6f65646976;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6567616d69;
  }
  *param_1 = uVar1;
  param_1[1] = 0xe500000000000000;
  return;
}



/* Entry: 104036364; end: 1040365e7;  */

void FUN_104036364(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304a0c8;
  func_0x0001000285a8(0x11304a0c8,&UNK_10dcc54c8);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1040365e8; end: 104036667;  */

void FUN_1040365e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0xea00000000006465;
  uVar4 = 0x6863746170736964;
  if (bVar3 != 2) {
    uVar5 = 0xe800000000000000;
    uVar4 = 0x7469685f636e7973;
  }
  uVar1 = 0x66666f5f666f63;
  if (bVar3 != 0) {
    uVar1 = 0x64656c6165766572;
  }
  uVar2 = 0xe700000000000000;
  if (bVar3 != 0) {
    uVar2 = 0xe800000000000000;
  }
  if (bVar3 < 2) {
    uVar5 = uVar2;
    uVar4 = uVar1;
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  return;
}



/* Entry: 104036668; end: 10403699f;  */

void FUN_104036668(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304a0d0;
  func_0x0001000285a8(0x11304a0d0,&UNK_10dcc54d0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1040369a0; end: 104036a5b;  */

void FUN_1040369a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar6 = 0xef64656c62617369;
  uVar1 = 0x6873657266;
  if (bVar4 != 3) {
    uVar1 = 0x665f7265646e6572;
  }
  uVar2 = 0xe500000000000000;
  if (bVar4 != 3) {
    uVar2 = 0xeb000000006c6961;
  }
  uVar3 = 0xec0000007469685f;
  uVar5 = 0x746867696c666e69;
  if (bVar4 != 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  uVar1 = 0x645f7963696c6f70;
  if (bVar4 != 0) {
    uVar6 = 0xe900000000000074;
    uVar1 = 0x69685f6568636163;
  }
  if (bVar4 < 2) {
    uVar3 = uVar6;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}



/* Entry: 104036a5c; end: 104036c7f;  */

void FUN_104036a5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304a0d8;
  func_0x0001000285a8(0x11304a0d8,&UNK_10dcc54d8);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 104036c80; end: 104036cdf;  */

void FUN_104036c80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x726f727265;
  if (cVar4 != '\x01') {
    uVar3 = 0x656c6c65636e6163;
  }
  uVar1 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe900000000000064;
  }
  uVar2 = 0x73736563637573;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 104036ce0; end: 104036e4b;  */

void FUN_104036ce0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304a0e0;
  func_0x0001000285a8(0x11304a0e0,&UNK_10dcc54e0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 104036e4c; end: 104036e4f;  */

void FUN_104036e4c(void)

{
  undefined *puVar1;
  
  if (puRam000000011304a0e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc54e8;
  _swift_getWitnessTable(&UNK_10dcc54e8,&UNK_110737a70);
  puRam000000011304a0e8 = puVar1;
  return;
}



/* Entry: 104036e50; end: 104036ebb;  */

void FUN_104036e50(void)

{
  undefined *puVar1;
  
  if (puRam000000011304a0e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc54e8;
  _swift_getWitnessTable(&UNK_10dcc54e8,&UNK_110737a70);
  puRam000000011304a0e8 = puVar1;
  return;
}



/* Entry: 104036ebc; end: 104036ebf;  */

void FUN_104036ebc(void)

{
  undefined *puVar1;
  
  if (puRam000000011304a100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc55c8;
  _swift_getWitnessTable(&UNK_10dcc55c8,&UNK_110737b00);
  puRam000000011304a100 = puVar1;
  return;
}



/* Entry: 104036ec0; end: 104036f2b;  */

void FUN_104036ec0(void)

{
  undefined *puVar1;
  
  if (puRam000000011304a100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc55c8;
  _swift_getWitnessTable(&UNK_10dcc55c8,&UNK_110737b00);
  puRam000000011304a100 = puVar1;
  return;
}



/* Entry: 104036f2c; end: 104036f2f;  */

void FUN_104036f2c(void)

{
  undefined *puVar1;
  
  if (puRam000000011304a118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc56a8;
  _swift_getWitnessTable(&UNK_10dcc56a8,&UNK_110737b90);
  puRam000000011304a118 = puVar1;
  return;
}



/* Entry: 104036f30; end: 104036f9b;  */

void FUN_104036f30(void)

{
  undefined *puVar1;
  
  if (puRam000000011304a118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc56a8;
  _swift_getWitnessTable(&UNK_10dcc56a8,&UNK_110737b90);
  puRam000000011304a118 = puVar1;
  return;
}



/* Entry: 104036f9c; end: 104036f9f;  */

void FUN_104036f9c(void)

{
  undefined *puVar1;
  
  if (puRam000000011304a130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc5788;
  _swift_getWitnessTable(&UNK_10dcc5788,&UNK_110737c20);
  puRam000000011304a130 = puVar1;
  return;
}



/* Entry: 104036fa0; end: 10403700b;  */

void FUN_104036fa0(void)

{
  undefined *puVar1;
  
  if (puRam000000011304a130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc5788;
  _swift_getWitnessTable(&UNK_10dcc5788,&UNK_110737c20);
  puRam000000011304a130 = puVar1;
  return;
}



/* Entry: 10403700c; end: 10403704f;  */

void FUN_10403700c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 104037050; end: 1040375e3;  */

int FUN_104037050(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1040370cc;
        goto LAB_1040370b0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1040370b0:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1040370cc:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1040375e4; end: 10403768f;  */

void FUN_1040375e4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104037690; end: 1040376b7;  */

void FUN_104037690(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1040376b8; end: 104037767; -[SCWOperaOverlayView onReveal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040376b8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_11304a3a0);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110737cf0;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104037768; end: 104037823; -[SCWOperaOverlayView setOnReveal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104037768(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  __Block_copy();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_110737cd8;
    _swift_allocObject(&UNK_110737cd8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x104038a38;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11304a3a0);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  _objc_retain(param_1);
  func_0x00010058d43c(uVar2,uVar3);
  _objc_release(param_1);
  return;
}



/* Entry: 104037824; end: 104037867; -[SCWOperaOverlayView state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104037824(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11304a3a8;
  _swift_beginAccess(param_1 + _DAT_11304a3a8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 104037868; end: 104037aab; -[SCWOperaOverlayView setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104037868(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11304a3a8;
  _swift_beginAccess(param_1 + _DAT_11304a3a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_1);
  func_0x00010403792c(uVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 104037aac; end: 104037e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104037aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11304a3a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11304a3a8) = 0;
  puVar3 = PTR__OBJC_CLASS___UIImageSymbolConfiguration_1126adb58;
  _objc_opt_self(PTR__OBJC_CLASS___UIImageSymbolConfiguration_1126adb58);
  func_0x00010bf46a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar4 = 0x73616c732e657965;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x73616c732e657965,0xe900000000000068);
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_self(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5c608();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_allocWithZone();
  func_0x00010c01bf60();
  _objc_release(puVar5);
  lVar8 = _DAT_11304a3b0;
  *(undefined **)(unaff_x20 + _DAT_11304a3b0) = puVar6;
  func_0x000107c55528(puVar6);
  puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + _DAT_11304a3b8) = puVar5;
  lVar7 = 0x112d360b0;
  FUN_10403894c(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
  _swift_allocObject();
  *(undefined8 *)(lVar7 + 0x18) = 5;
  *(undefined8 *)(lVar7 + 0x10) = 2;
  uVar13 = *(undefined8 *)(unaff_x20 + lVar8);
  *(undefined8 *)(lVar7 + 0x20) = uVar13;
  *(undefined **)(lVar7 + 0x28) = puVar5;
  puVar6 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_allocWithZone();
  uVar4 = 0;
  FUN_104038a60(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  _objc_retain(uVar13);
  _objc_retain(puVar5);
  lVar8 = lVar7;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar7,uVar4);
  _swift_release(lVar7);
  func_0x00010bff3fe0();
  _objc_release(lVar8);
  *(undefined **)(unaff_x20 + _DAT_11304a3c0) = puVar6;
  puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + _DAT_11304a3c8) = puVar5;
  puVar9 = &stack0xffffffffffffff70;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar9,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_104037e7c();
  lVar7 = _DAT_11304a3a8;
  puVar11 = auStack_a8;
  _swift_beginAccess(puVar9 + _DAT_11304a3a8,puVar11,0,0);
  lStack_b0 = *(long *)(puVar9 + lVar7);
  if (lStack_b0 == 1) {
    func_0x000107c550d8(*(undefined8 *)(puVar9 + _DAT_11304a3c0));
    func_0x000107c54514(*(undefined8 *)(puVar9 + _DAT_11304a3c8));
    func_0x000107c55528(puVar9);
    puVar10 = puVar9;
    func_0x000107c52100(puVar9);
    func_0x00010403a0c0();
    puVar12 = puVar11;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar11);
    func_0x000107c520fc(puVar9);
    _objc_release(puVar10);
    func_0x00010403a17c();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar12);
    func_0x000107c520ec(puVar9);
    _objc_release(puVar10);
  }
  else {
    if (lStack_b0 != 0) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&UNK_110737cb8,&lStack_b0,&UNK_110737cb8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104037e7c);
      (*pcVar2)();
    }
    func_0x000107c550d8(*(undefined8 *)(puVar9 + _DAT_11304a3c0));
    func_0x000107c54514(*(undefined8 *)(puVar9 + _DAT_11304a3c8));
    func_0x000107c55528(puVar9);
    func_0x000107c52100(puVar9);
    func_0x000107c520fc(puVar9);
    func_0x000107c520ec(puVar9);
  }
  _objc_release(puVar3);
  _objc_release(puVar9);
  return puVar9;
}



/* Entry: 104037e7c; end: 10403872f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104037e7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  _objc_opt_self(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  func_0x00010bf8cf60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_allocWithZone();
  func_0x00010c00ee20();
  _objc_release(puVar1);
  _objc_retain();
  func_0x000107c5a050();
  func_0x00010befbb60();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar3 = 0x112d360b8;
  FUN_10403894c(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  lVar4 = lVar3;
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 9;
  *(undefined8 *)(lVar4 + 0x10) = 4;
  puVar5 = puVar2;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = unaff_x20;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar6);
  *(undefined **)(lVar4 + 0x20) = puVar7;
  puVar5 = puVar2;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = unaff_x20;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar6);
  *(undefined **)(lVar4 + 0x28) = puVar7;
  puVar5 = puVar2;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = unaff_x20;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar6);
  *(undefined **)(lVar4 + 0x30) = puVar7;
  puVar5 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar6 = unaff_x20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar6);
  *(undefined **)(lVar4 + 0x38) = puVar7;
  uVar8 = 0;
  FUN_104038a60(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar6 = lVar4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar8);
  _swift_release(lVar4);
  func_0x00010beef8c0(puVar1);
  _objc_release(lVar6);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_allocWithZone();
  func_0x00010bfee200();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar9 = puVar7;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf414e0(0x3fd6666666666666);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  func_0x000107c52b50(puVar5);
  _objc_release(puVar10);
  func_0x000107c5a050(puVar5);
  func_0x000107c5a378(puVar5);
  func_0x00010befbb60();
  lVar4 = lVar3;
  _swift_allocObject(lVar3,((ulong)*(uint *)(lVar3 + 0x30) + 7 & 0x1fffffff8) + 0x20,
                     *(ushort *)(lVar3 + 0x34) | 7);
  *(undefined8 *)(lVar4 + 0x18) = 9;
  *(undefined8 *)(lVar4 + 0x10) = 4;
  puVar9 = puVar5;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = unaff_x20;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(lVar6);
  *(undefined **)(lVar4 + 0x20) = puVar10;
  puVar9 = puVar5;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = unaff_x20;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(lVar6);
  *(undefined **)(lVar4 + 0x28) = puVar10;
  puVar9 = puVar5;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = unaff_x20;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(lVar6);
  *(undefined **)(lVar4 + 0x30) = puVar10;
  puVar9 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = unaff_x20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(lVar6);
  *(undefined **)(lVar4 + 0x38) = puVar10;
  lVar6 = lVar4;
  uVar11 = uVar8;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar8);
  _swift_release(lVar4);
  func_0x00010beef8c0(puVar1);
  _objc_release(lVar6);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_11304a3b0);
  puVar9 = puVar7;
  func_0x000107c5e2ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c59e10(uVar13);
  _objc_release(puVar9);
  func_0x000107c53840(uVar13);
  uVar12 = uVar13;
  func_0x000107c5a050();
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_11304a3b8);
  func_0x00010403a004();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar11);
  func_0x000107c59c6c(uVar14);
  _objc_release(uVar12);
  func_0x000107c5e2ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c59c78(uVar14);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_opt_self();
  func_0x000107c4eca4();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c54adc(uVar14);
  _objc_release(puVar7);
  func_0x000107c52518(uVar14);
  func_0x000107c59c74(uVar14);
  func_0x000107c56ba8(uVar14);
  func_0x000107c5a050(uVar14);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_11304a3c0);
  func_0x000107c52b2c(uVar14);
  func_0x000107c52610(uVar14);
  func_0x000107c59594(0x4028000000000000,uVar14);
  func_0x000107c5a050(uVar14);
  func_0x00010befbb60();
  _swift_allocObject(lVar3,((ulong)*(uint *)(lVar3 + 0x30) + 7 & 0x1fffffff8) + 0x30,
                     *(ushort *)(lVar3 + 0x34) | 7);
  *(undefined8 *)(lVar3 + 0x18) = 0xd;
  *(undefined8 *)(lVar3 + 0x10) = 6;
  uVar11 = uVar13;
  func_0x000107c5e308();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  *(undefined8 *)(lVar3 + 0x20) = uVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  *(undefined8 *)(lVar3 + 0x28) = uVar12;
  uVar11 = uVar14;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = unaff_x20;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(lVar4);
  *(undefined8 *)(lVar3 + 0x30) = uVar12;
  uVar11 = uVar14;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = unaff_x20;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(lVar4);
  *(undefined8 *)(lVar3 + 0x38) = uVar12;
  uVar12 = uVar14;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = unaff_x20;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar12;
  func_0x00010bf49480(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(lVar4);
  *(undefined8 *)(lVar3 + 0x40) = uVar11;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = unaff_x20;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar14;
  func_0x00010bf49520(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(lVar4);
  *(undefined8 *)(lVar3 + 0x48) = uVar12;
  lVar4 = lVar3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar8);
  _swift_release(lVar3);
  func_0x00010beef8c0(puVar1);
  _objc_release(lVar4);
  func_0x00010befbd40(*(undefined8 *)(unaff_x20 + _DAT_11304a3c8));
  func_0x00010bef9040();
  func_0x000107c5a378();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 104038730; end: 10403874f; -[SCWOperaOverlayView initWithFrame:] */

void FUN_104038730(void)

{
  FUN_104037aac();
  return;
}



/* Entry: 104038750; end: 104038767;  */

void FUN_104038750(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104038768; end: 10403877b; -[SCWOperaOverlayView init] */

void FUN_104038768(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,0,0,param_1,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 10403877c; end: 1040387ef; -[SCWOperaOverlayView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10403877c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11304a3a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_11304a3a8) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "SCW/SCWOperaOverlayView.swift",0x1d,2,0x69,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1040387f0);
  (*pcVar2)();
}



/* Entry: 1040387f0; end: 104038883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040387f0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11304a3a8;
  _swift_beginAccess(unaff_x20 + _DAT_11304a3a8,auStack_48,0,0);
  if (*(int *)(unaff_x20 + lVar2) == 1) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11304a3a0);
    _swift_beginAccess(puVar1,auStack_60,0,0);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
      uVar3 = puVar1[1];
      _swift_retain(uVar3);
      (*pcVar4)();
      func_0x00010058d43c(pcVar4,uVar3);
    }
  }
  return;
}



/* Entry: 104038884; end: 1040388ab; -[SCWOperaOverlayView handleTap] */

void FUN_104038884(undefined8 param_1)

{
  _objc_retain();
  FUN_1040387f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1040388ac; end: 1040388df;  */

void FUN_1040388ac(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040388e0; end: 10403894b; -[SCWOperaOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040388e0(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_11304a3a0),
                      ((undefined8 *)(param_1 + _DAT_11304a3a0))[1]);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11304a3b0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11304a3b8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11304a3c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11304a3c8));
  return;
}



/* Entry: 10403894c; end: 1040389c3;  */

void FUN_10403894c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_104038a60(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1040389c4; end: 1040389c7;  */

void FUN_1040389c4(void)

{
  undefined *puVar1;
  
  if (puRam000000011304a3d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc5910;
  _swift_getWitnessTable(&UNK_10dcc5910,&UNK_110737cb8);
  puRam000000011304a3d0 = puVar1;
  return;
}



/* Entry: 1040389c8; end: 104038a27;  */

void FUN_1040389c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011304a3d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc5910;
  _swift_getWitnessTable(&UNK_10dcc5910,&UNK_110737cb8);
  puRam000000011304a3d0 = puVar1;
  return;
}



/* Entry: 104038a28; end: 104038a5f;  */

undefined1  [16] FUN_104038a28(void)

{
  return ZEXT816(0x110737cb8);
}



/* Entry: 104038a60; end: 104038a9f;  */

void FUN_104038a60(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 104038aa0; end: 104038ab3;  */

bool FUN_104038aa0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104038ab4; end: 104038b5f;  */

void FUN_104038ab4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104038b60; end: 104038b63;  */

void FUN_104038b60(void)

{
  undefined *puVar1;
  
  if (puRam000000011304a400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc59d0;
  _swift_getWitnessTable(&UNK_10dcc59d0,&UNK_110737df0);
  puRam000000011304a400 = puVar1;
  return;
}



/* Entry: 104038b64; end: 104038ba3;  */

void FUN_104038b64(void)

{
  undefined *puVar1;
  
  if (puRam000000011304a400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc59d0;
  _swift_getWitnessTable(&UNK_10dcc59d0,&UNK_110737df0);
  puRam000000011304a400 = puVar1;
  return;
}



/* Entry: 104038ba4; end: 104038e6f;  */

int FUN_104038ba4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104038c20;
        goto LAB_104038c04;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104038c04:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104038c20:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104038e70; end: 104038ea7;  */

undefined2 * FUN_104038e70(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = uVar1;
  _swift_unknownObjectRetain(uVar1);
  return param_1;
}



/* Entry: 104038ea8; end: 104038efb;  */

undefined1 * FUN_104038ea8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return param_1;
}



/* Entry: 104038efc; end: 104038f3f;  */

undefined1 * FUN_104038efc(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return param_1;
}



/* Entry: 104038f40; end: 104038fdf;  */

int FUN_104038f40(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104038fe0; end: 10403908b;  */

void FUN_104038fe0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10403908c; end: 104039207;  */

void FUN_10403908c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113049a30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc5ac4;
  _swift_getWitnessTable(&UNK_10dcc5ac4,&UNK_110737fc0);
  puRam0000000113049a30 = puVar1;
  return;
}



/* Entry: 104039208; end: 10403a237;  */

undefined1  [16] FUN_104039208(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffea;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1dfab0);
  uVar3 = 0x574353;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x574353,0xe300000000000000);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    _objc_release(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040392c4);
  (*pcVar1)();
}



/* Entry: 10403a238; end: 10403a26f;  */

undefined1  [16] FUN_10403a238(void)

{
  return ZEXT816(0x110738098);
}



/* Entry: 10403a270; end: 10403a2ab; -[_TtC22DiskCacheLoggingTweaks22DiskCacheLoggingTweaks init] */

void FUN_10403a270(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10403a2ac; end: 10403a2ff;  */

void FUN_10403a2ac(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10403a300; end: 10403a35f; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider init] */

void FUN_10403a300(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WebBrowsingConfigImpl.WebBrowsingConfigProvider",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10403a32c);
  (*pcVar1)();
}



/* Entry: 10403a360; end: 10403a36f; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10403a360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11304a440));
  return;
}



/* Entry: 10403a370; end: 10403a38f;  */

void FUN_10403a370(void)

{
  _objc_opt_self(&PTR_PTR_1129801e0);
  return;
}



/* Entry: 10403a390; end: 10403a39b; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider dynamicScriptUrl] */

void FUN_10403a390(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10403a39c();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10403a39c; end: 10403a43b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10403a39c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_104043560();
  if (param_2 == 0) {
    func_0x0001000d224c(&uStack_30);
    uVar1 = uStack_30;
    _swift_getObjectType(uStack_30);
    uStack_60 = 0xd000000000000026;
    uStack_58 = 0x800000010f1e04c0;
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    (**(code **)(lStack_28 + 8))
              (auStack_40,&uStack_60,&UNK_1107385c8,&PTR_DAT_11304a570,uVar1,lStack_28);
    _swift_unknownObjectRelease(uStack_30);
  }
  return;
}



/* Entry: 10403a43c; end: 10403a4bb; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider dynamicScriptConfigStringWithOverrideConfig:] */

void FUN_10403a43c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_10403c380(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10403a4bc; end: 10403a583; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enablePublishBrowseEventV2] */

uint FUN_10403a4bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403a4f0();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403a584; end: 10403a64b; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider defaultConsentValueInPrivacyPrompt] */

uint FUN_10403a584(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403a5b8();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403a64c; end: 10403a713; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider canPresentPrivacyPrompt] */

uint FUN_10403a64c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403a680();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403a714; end: 10403a7df; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider timeIntervalFromLastPromptPresentToNewPrompt] */

undefined8 FUN_10403a714(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403a748();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10403a7e0; end: 10403a8a7; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableRepromptOnlyForDismiss] */

uint FUN_10403a7e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403a814();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403a8a8; end: 10403a95b; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableWebViewTracing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10403a8a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_41;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain();
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  _swift_getObjectType(uStack_40);
  uStack_58 = 0x5f77656976626577;
  uStack_50 = 0xef676e6963617274;
  uStack_48 = 0;
  (**(code **)(lStack_38 + 8))
            (&uStack_41,&uStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar1,lStack_38);
  _objc_release(param_1);
  _swift_unknownObjectRelease(uStack_40);
  return uStack_41;
}



/* Entry: 10403a95c; end: 10403a9e7; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableAsmUrlChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10403a95c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  _swift_getObjectType(uStack_40);
  uVar1 = 0;
  FUN_10403c628(0xd000000000000022,0x800000010f1e0360,uVar2,uStack_38);
  _swift_unknownObjectRelease(uStack_40);
  _objc_release(param_1);
  return uVar1 & 1;
}



/* Entry: 10403a9e8; end: 10403aabf; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableInstantPage] */

uint FUN_10403a9e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403aa1c();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403aac0; end: 10403ab97; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableInstantPageTrackFix] */

uint FUN_10403aac0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403aaf4();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403ab98; end: 10403ac5f; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableWebViewPoolScriptInjection] */

uint FUN_10403ab98(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403abcc();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403ac60; end: 10403aceb; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableFixForForegroundingLoadDefaultUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10403ac60(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  _swift_getObjectType(uStack_40);
  uVar1 = 0;
  FUN_10403c628(0xd00000000000003a,0x800000010f1e0290,uVar2,uStack_38);
  _swift_unknownObjectRelease(uStack_40);
  _objc_release(param_1);
  return uVar1 & 1;
}



/* Entry: 10403acec; end: 10403adc3; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableInstantPageIconOnContextTry] */

uint FUN_10403acec(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403ad20();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403adc4; end: 10403ae4f; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableXSafariSchemeRewrite] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10403adc4(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  _swift_getObjectType(uStack_40);
  uVar1 = 0;
  FUN_10403c628(0xd00000000000002a,0x800000010f1e0230,uVar2,uStack_38);
  _swift_unknownObjectRelease(uStack_40);
  _objc_release(param_1);
  return uVar1 & 1;
}



/* Entry: 10403ae50; end: 10403af17; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableInstantPageForPartialInstantPageAds] */

uint FUN_10403ae50(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403ae84();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403af18; end: 10403afef; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableStoreFront] */

uint FUN_10403af18(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403af4c();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403aff0; end: 10403b0b7; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableInstantPagePSP] */

uint FUN_10403aff0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403b024();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403b0b8; end: 10403b17f; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableAppendGaUtmParamsToAllowedOrganicSources] */

uint FUN_10403b0b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403b0ec();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403b180; end: 10403b247; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableSharedCookieStorage] */

uint FUN_10403b180(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403b1b4();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403b248; end: 10403b2d3; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableLoggingForUtmOperations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10403b248(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  _swift_getObjectType(uStack_40);
  uVar1 = 0;
  FUN_10403c628(0xd000000000000028,0x800000010f1e0100,uVar2,uStack_38);
  _swift_unknownObjectRelease(uStack_40);
  _objc_release(param_1);
  return uVar1 & 1;
}



/* Entry: 10403b2d4; end: 10403b39b; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider exbButtonRedesignOption] */

undefined8 FUN_10403b2d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403b308();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10403b39c; end: 10403b4a7; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider forceExb] */

uint FUN_10403b39c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403b3d0();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403b4a8; end: 10403b533; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableForceAppendCid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10403b4a8(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  _swift_getObjectType(uStack_40);
  uVar1 = 0x23;
  FUN_10403c628(0xd000000000000023,0x800000010f1e00a0,uVar2,uStack_38);
  _swift_unknownObjectRelease(uStack_40);
  _objc_release(param_1);
  return uVar1 & 1;
}



/* Entry: 10403b534; end: 10403b5bf; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableForceAppendUtmSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10403b534(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  _swift_getObjectType(uStack_40);
  uVar1 = 0;
  FUN_10403c628(0xd00000000000002a,0x800000010f1e0070,uVar2,uStack_38);
  _swift_unknownObjectRelease(uStack_40);
  _objc_release(param_1);
  return uVar1 & 1;
}



/* Entry: 10403b5c0; end: 10403b64b; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider immediateUserInitiatedBrowserActionsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10403b5c0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  _swift_getObjectType(uStack_40);
  uVar1 = 0;
  FUN_10403c628(0xd00000000000003c,0x800000010f1e0030,uVar2,uStack_38);
  _swift_unknownObjectRelease(uStack_40);
  _objc_release(param_1);
  return uVar1 & 1;
}



/* Entry: 10403b64c; end: 10403b67f; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableNewScbOnOpera] */

uint FUN_10403b64c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10403b680();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403b680; end: 10403b80b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10403b680(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long alStack_58 [2];
  undefined1 uStack_48;
  byte bStack_41;
  long lStack_40;
  long lStack_38;
  
  func_0x000104043fd8();
  if (param_1 != 2) {
    if (param_1 == 1) {
      return;
    }
    if (param_1 != 0) goto LAB_10403b7e8;
    func_0x0001000d224c(&lStack_40);
    lVar3 = lStack_38;
    param_1 = lStack_40;
    lVar2 = lStack_40;
    _swift_getObjectType(lStack_40);
    alStack_58[0] = -0x2fffffffffffffeb;
    alStack_58[1] = 0x800000010f1dffe0;
    uStack_48 = 0;
    (**(code **)(lVar3 + 8))(&bStack_41,alStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,lVar2,lVar3);
    _swift_unknownObjectRelease();
    if ((bStack_41 & 1) != 0) {
      return;
    }
  }
  func_0x000104043f58();
  if (param_1 == 0) {
    func_0x0001000d224c(&lStack_40);
    lVar3 = lStack_40;
    _swift_getObjectType(lStack_40);
    alStack_58[0] = -0x2fffffffffffffdd;
    alStack_58[1] = 0x800000010f1e0000;
    uStack_48 = 0;
    (**(code **)(lStack_38 + 8))
              (&bStack_41,alStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,lVar3,lStack_38);
    _swift_unknownObjectRelease(lStack_40);
  }
  else if ((param_1 != 1) && (param_1 != 2)) {
LAB_10403b7e8:
    alStack_58[0] = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110739d60,alStack_58,&UNK_110739d60,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10403b80c);
    (*pcVar1)();
  }
  return;
}



/* Entry: 10403b80c; end: 10403b83f; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableNewScbOnUah] */

uint FUN_10403b80c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10403b840();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403b840; end: 10403b9cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10403b840(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long alStack_58 [2];
  undefined1 uStack_48;
  byte bStack_41;
  long lStack_40;
  long lStack_38;
  
  func_0x000104043f98();
  if (param_1 != 2) {
    if (param_1 == 1) {
      return;
    }
    if (param_1 != 0) goto LAB_10403b9a8;
    func_0x0001000d224c(&lStack_40);
    lVar3 = lStack_38;
    param_1 = lStack_40;
    lVar2 = lStack_40;
    _swift_getObjectType(lStack_40);
    alStack_58[0] = -0x2fffffffffffffe0;
    alStack_58[1] = 0x800000010f1dff50;
    uStack_48 = 0;
    (**(code **)(lVar3 + 8))(&bStack_41,alStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,lVar2,lVar3);
    _swift_unknownObjectRelease();
    if ((bStack_41 & 1) != 0) {
      return;
    }
  }
  func_0x000104043f58();
  if (param_1 == 0) {
    func_0x0001000d224c(&lStack_40);
    lVar3 = lStack_40;
    _swift_getObjectType(lStack_40);
    alStack_58[0] = -0x2fffffffffffffdf;
    alStack_58[1] = 0x800000010f1dffb0;
    uStack_48 = 0;
    (**(code **)(lStack_38 + 8))
              (&bStack_41,alStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,lVar3,lStack_38);
    _swift_unknownObjectRelease(lStack_40);
  }
  else if ((param_1 != 1) && (param_1 != 2)) {
LAB_10403b9a8:
    alStack_58[0] = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110739d60,alStack_58,&UNK_110739d60,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10403b9cc);
    (*pcVar1)();
  }
  return;
}



/* Entry: 10403b9cc; end: 10403baa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10403b9cc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long alStack_48 [2];
  undefined1 uStack_38;
  undefined1 uStack_31;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000104043f98();
  if (param_1 == 0) {
    func_0x0001000d224c(&uStack_30);
    uVar2 = uStack_30;
    _swift_getObjectType(uStack_30);
    alStack_48[0] = -0x2fffffffffffffe0;
    alStack_48[1] = 0x800000010f1dff50;
    uStack_38 = 0;
    (**(code **)(lStack_28 + 8))
              (&uStack_31,alStack_48,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar2,lStack_28);
    _swift_unknownObjectRelease(uStack_30);
  }
  else if ((param_1 != 1) && (param_1 != 2)) {
    alStack_48[0] = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110739d60,alStack_48,&UNK_110739d60,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10403baa4);
    (*pcVar1)();
  }
  return;
}



/* Entry: 10403baa4; end: 10403bb6b; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableScbDelayLoad] */

uint FUN_10403baa4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010403bad8();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403bb6c; end: 10403bb9f; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableUahScbOnOpera] */

uint FUN_10403bb6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10403b9cc();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10403bba0; end: 10403bc2b; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider promotedTileAutoOpenAttachmentEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10403bba0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  _swift_getObjectType(uStack_40);
  uVar1 = 0;
  FUN_10403c628(0xd00000000000002a,0x800000010f1dff20,uVar2,uStack_38);
  _swift_unknownObjectRelease(uStack_40);
  _objc_release(param_1);
  return uVar1 & 1;
}



/* Entry: 10403bc2c; end: 10403bcb7; -[_TtC21WebBrowsingConfigImpl25WebBrowsingConfigProvider enableTrackingParamsForNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10403bc2c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  _swift_getObjectType(uStack_40);
  uVar1 = 0x33;
  FUN_10403c628(0xd000000000000033,0x800000010f1dfee0,uVar2,uStack_38);
  _swift_unknownObjectRelease(uStack_40);
  _objc_release(param_1);
  return uVar1 & 1;
}


