/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c965cc; end: 101c9664b;  */

void FUN_101c965cc(undefined8 param_1)

{
  if (lRam0000000112e11360 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e67fb34);
  return;
}



/* Entry: 101c9664c; end: 101c96727;  */

void FUN_101c9664c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_50 = 0x101c9673c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101c96738;
  puStack_58 = &UNK_110464580;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x0001002aaafc(0);
  func_0x000107c610f8();
  func_0x0001038da844(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 101c96728; end: 101c9673f;  */

void FUN_101c96728(long param_1,long param_2)

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



/* Entry: 101c96740; end: 101c9688b;  */

long FUN_101c96740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x00010091d8fc(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010091d980();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010091d994();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 101c9688c; end: 101c968d7;  */

void FUN_101c9688c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c968d8; end: 101c9691b;  */

undefined1  [16] FUN_101c968d8(void)

{
  return ZEXT816(0x1104646d8);
}



/* Entry: 101c9691c; end: 101c9696f;  */

void FUN_101c9691c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c96970; end: 101c969d7;  */

void FUN_101c96970(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002aac74();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_101c96b90();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c969d8; end: 101c969df;  */

void FUN_101c969d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002aac74();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_101c96b90();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c969e0; end: 101c96a27;  */

undefined8 FUN_101c969e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101c96b90(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101c96a28; end: 101c96a93;  */

void FUN_101c96a28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101c96a94; end: 101c96b8f;  */

void FUN_101c96a94(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c96b90; end: 101c96cb3;  */

void FUN_101c96b90(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar2;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_101c99e2c(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000101c99a60(param_1,uVar3,uVar4,puVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c96cac);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + 0x30) = lVar5;
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar5;
    lVar5 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c52018();
    func_0x000107c61180();
    if (lVar5 != 0) {
      *(long *)(unaff_x20 + 0x40) = lVar5;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c96cb4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c96cb0);
  (*pcVar1)();
}



/* Entry: 101c96cb4; end: 101c96d2f;  */

void FUN_101c96cb4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c96d30; end: 101c96d83;  */

void FUN_101c96d30(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c96d84; end: 101c96ed3;  */

undefined * FUN_101c96d84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126c0260;
  func_0x000107c610f8(PTR_PTR_1126c0260);
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_101c96ed4();
  func_0x000107c57678(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x00010848cb44(uVar3);
  func_0x000107c61180();
  func_0x000107c56a34(puVar1);
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x00010848b980(uVar4);
  func_0x000107c61180();
  func_0x000107c5283c(puVar1);
  func_0x000107c61170(uVar4);
  FUN_101c96f94();
  func_0x000107c54068(puVar1);
  func_0x000107c61170(uVar4);
  FUN_101c970e4();
  func_0x000107c5a2d4(puVar1);
  func_0x000107c61170(uVar4);
  FUN_101c973d0();
  uVar3 = uVar4;
  FUN_101c97564();
  func_0x000107c6142c(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar4 = uVar3;
  func_0x000107c5fc48(uVar3,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(uVar3);
  func_0x000107c45788(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c554c4(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 101c96ed4; end: 101c96f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c96ed4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126c0268;
  func_0x000107c610f8(PTR_PTR_1126c0268);
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x000107c31904();
  func_0x000107c55f78(puVar1,param_2,(uint)puVar2 ^ 1);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c50760();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c529e4(puVar1,param_2,*(undefined1 *)(lVar3 + _DAT_11306cf80));
    func_0x000107c547e0(puVar1,param_2,*(undefined1 *)(lVar3 + _DAT_11306cf88));
    func_0x000107c59cc0(puVar1,param_2,*(undefined1 *)(lVar3 + _DAT_11306cf90));
    func_0x000107c54688(puVar1,param_2,*(undefined1 *)(lVar3 + _DAT_11306cf98));
    func_0x000107c61170(lVar3);
  }
  return puVar1;
}



/* Entry: 101c96f94; end: 101c970e3;  */

undefined8 FUN_101c96f94(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar3 = PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90;
  func_0x000107c61168(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
  func_0x000107c5aa04();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3da10();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c5eeb8(auStack_60 + lVar1,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c5eeac();
  (**(code **)(lVar6 + 8))(auStack_60 + lVar1,lVar2);
  func_0x000107c5fadc(puVar4,param_2);
  func_0x000107c6142c(param_2);
  func_0x0001000d224c(&uStack_58);
  auStack_70[lVar1] = 0;
  func_0x00010848bb28(uVar5,puVar4,0,0,0,uStack_58,0,0);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(uStack_58);
  return uVar5;
}



/* Entry: 101c970e4; end: 101c973cf;  */

undefined * FUN_101c970e4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lStack_78 = *(long *)(lVar1 + -8);
  lStack_70 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  puVar9 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar9 - extraout_x12;
  puVar2 = PTR_PTR_1126c0270;
  func_0x000107c610f8(PTR_PTR_1126c0270);
  func_0x000107c453e4();
  func_0x0001000d224c(&lStack_68);
  lVar1 = lStack_68;
  func_0x000107c515cc();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_68);
  if (lVar1 == 0) {
    lVar7 = 0;
    uVar10 = 0;
    uVar6 = param_2;
  }
  else {
    lVar7 = lVar1;
    func_0x000107c5faec();
    uVar6 = param_2;
    func_0x000107c61170(lVar1);
    uVar10 = param_2;
  }
  lVar3 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(lVar3);
  puVar4 = PTR_PTR_1126e14c8;
  func_0x000107c610f8(PTR_PTR_1126e14c8);
  func_0x000107c453e4();
  if (uVar10 != 0) {
    lVar3 = lVar7;
    func_0x000107c5fb5c(lVar7,uVar10);
    if (lVar3 < 1) {
      func_0x000107c6142c(uVar10);
    }
    else {
      func_0x0001008fc608(lVar7);
      if (uVar10 >> 0x3c < 0xf) {
        lVar3 = lVar7;
        func_0x000107c5ee20();
        func_0x0001000b44c0(lVar7,uVar10);
      }
      else {
        lVar3 = 0;
      }
      func_0x000107c58b58(puVar4);
      func_0x000107c61170(lVar3);
    }
  }
  lVar7 = lVar1;
  func_0x000107c5fb5c(lVar1,uVar6);
  if (lVar7 < 1) {
    func_0x000107c6142c(uVar6);
  }
  else {
    func_0x0001008fc608(lVar1);
    if (uVar6 >> 0x3c < 0xf) {
      lVar7 = lVar1;
      func_0x000107c5ee20();
      func_0x0001000b44c0(lVar1,uVar6);
    }
    else {
      lVar7 = 0;
    }
    func_0x000107c5a344(puVar4);
    func_0x000107c61170(lVar7);
  }
  func_0x000107c5a310(puVar2);
  lVar7 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar1 = lVar7;
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar1 == 0) {
    func_0x000107c61170(puVar4);
  }
  else {
    func_0x000107c5ee94(puVar9,lVar1);
    func_0x000107c61170(lVar1);
    lVar7 = lStack_70;
    lVar1 = lStack_78;
    lVar3 = lVar8;
    (**(code **)(lStack_78 + 0x20))(lVar8,puVar9,lStack_70);
    func_0x000107c5ee70();
    lVar5 = lVar3;
    func_0x00010848b7c8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c53e2c(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar5);
    (**(code **)(lVar1 + 8))(lVar8,lVar7);
  }
  return puVar2;
}



/* Entry: 101c973d0; end: 101c97563;  */

void FUN_101c973d0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_38;
  
  puVar3 = PTR_PTR_1126c0278;
  func_0x000107c610f8(PTR_PTR_1126c0278);
  func_0x000107c453e4();
  func_0x0001000d224c(&uStack_38);
  uVar2 = uStack_38;
  uVar4 = uStack_38;
  func_0x0001084c1810(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  func_0x000107c5636c(puVar3);
  func_0x000107c61170(uVar4);
  func_0x0001000d224c(&uStack_38);
  uVar2 = uStack_38;
  uVar4 = uStack_38;
  func_0x0001084c18c0(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  func_0x000107c56370(puVar3);
  func_0x000107c61170(uVar4);
  func_0x0001000d224c(&uStack_38);
  func_0x000107c4a4bc(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c55854(puVar3);
  puVar5 = PTR_PTR_1126d9900;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = puVar5;
  func_0x000104041de8();
  if (param_2 != 0) {
    uVar1 = (ulong)puVar6 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      func_0x000107c6142c(param_2);
    }
    else {
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      func_0x000107c53e64(puVar5);
      func_0x000107c61170(puVar6);
    }
  }
  puVar6 = puVar5;
  func_0x000107c548fc();
  func_0x000101c977e8();
  func_0x000107c61170(puVar3);
  func_0x000107c613fc(puVar6,((ulong)*(uint *)(puVar6 + 0x30) + 7 & 0x1fffffff8) + 8,
                      *(ushort *)(puVar6 + 0x34) | 7);
  *(undefined8 *)(puVar6 + 0x18) = 3;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x20) = puVar5;
  return;
}



/* Entry: 101c97564; end: 101c97727;  */

undefined * FUN_101c97564(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_58;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c97728);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_101c979f8(0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_80 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_58;
        *(ulong *)(puStack_58 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_101c97844(uVar7,param_1);
        uVar4 = 0;
        uStack_80 = uVar3;
        FUN_101c979f8(0);
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_58;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 101c97728; end: 101c9775b; -[_TtC23MapAdsAdRequestProvider23MapAdsAdRequestProvider adsAdRequest] */

void FUN_101c97728(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_101c96d84();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c9775c; end: 101c97843;  */

void FUN_101c9775c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101c97844; end: 101c979f7;  */

ulong FUN_101c97844(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c97928);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c9792c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126d9900;
    func_0x000107c61168(PTR_PTR_1126d9900);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126d9900;
    func_0x000107c61168(PTR_PTR_1126d9900);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101c979f8(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c979f8);
  (*pcVar2)();
}



/* Entry: 101c979f8; end: 101c97a3b;  */

void FUN_101c979f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e11708 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d9900;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e11708 = puVar1;
  return;
}



/* Entry: 101c97a3c; end: 101c97a93;  */

void FUN_101c97a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 101c97a94; end: 101c97bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c97a94(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  
  uVar5 = *(undefined8 *)(param_2 + _DAT_113043d30);
  func_0x0001000d224c(&uStack_58);
  uVar4 = *(undefined8 *)(param_3 + _DAT_1130440d8);
  uVar6 = *(undefined8 *)(param_4 + _DAT_113083f78);
  func_0x000107c6157c(uVar4);
  func_0x000107c61174();
  func_0x000107c3e944();
  func_0x000107c61180();
  lVar1 = 0;
  func_0x000101c977c8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x38) = uVar6;
  *(undefined8 *)(lVar1 + 0x40) = param_6;
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  *(undefined8 *)(lVar1 + 0x18) = uStack_58;
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  puVar2 = PTR_PTR_1126b91a0;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar5);
  func_0x000107c47a40();
  *(undefined **)(lVar1 + 0x28) = puVar2;
  func_0x0001003a5b88();
  puVar3 = PTR_PTR_1126b91a8;
  func_0x000107c610f8();
  func_0x000107c45568();
  func_0x000107c61170(puVar2);
  *(undefined **)(lVar1 + 0x30) = puVar3;
  *param_1 = lVar1;
  return;
}



/* Entry: 101c97bd8; end: 101c97be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c97bd8(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113043d30);
  func_0x0001000d224c(&uStack_58);
  uVar6 = *(undefined8 *)(lVar1 + _DAT_1130440d8);
  uVar8 = *(undefined8 *)(lVar2 + _DAT_113083f78);
  func_0x000107c6157c(uVar6);
  func_0x000107c61174();
  func_0x000107c3e944();
  func_0x000107c61180();
  lVar2 = 0;
  func_0x000101c977c8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x38) = uVar8;
  *(undefined8 *)(lVar2 + 0x40) = uVar5;
  *(undefined8 *)(lVar2 + 0x10) = uVar7;
  *(undefined8 *)(lVar2 + 0x18) = uStack_58;
  *(undefined8 *)(lVar2 + 0x20) = uVar6;
  puVar3 = PTR_PTR_1126b91a0;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar7);
  func_0x000107c47a40();
  *(undefined **)(lVar2 + 0x28) = puVar3;
  func_0x0001003a5b88();
  puVar4 = PTR_PTR_1126b91a8;
  func_0x000107c610f8();
  func_0x000107c45568();
  func_0x000107c61170(puVar3);
  *(undefined **)(lVar2 + 0x30) = puVar4;
  *param_1 = lVar2;
  return;
}



/* Entry: 101c97be8; end: 101c97c1b;  */

/* WARNING: Possible PIC construction at 0x000101c97bf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c97c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c97bf8) */
/* WARNING: Removing unreachable block (ram,0x000101c97c08) */

void FUN_101c97be8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101c97c1c; end: 101c97ca3;  */

void FUN_101c97c1c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c97ca4; end: 101c97e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c97ca4(ulong param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  uVar8 = param_2;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c97e74);
        (*pcVar1)();
      }
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174();
      param_1 = uVar8;
    }
    else {
      uVar4 = 0;
      func_0x0001002ec9a0();
    }
    uVar7 = uVar4;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    uVar5 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    func_0x000107c5eea0(auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
    lVar6 = 0;
    func_0x0001039a49d8();
    func_0x000107c613fc();
    *(ulong *)(lVar6 + 0x10) = param_2;
    *(undefined8 *)(lVar6 + 0x18) = param_3;
    *(undefined8 *)(lVar6 + 0x20) = uVar5;
    *(ulong *)(lVar6 + 0x28) = param_1;
    (**(code **)(lVar9 + 0x20))
              (lVar6 + _DAT_11380c060,auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)),
               lVar2);
    lVar2 = _DAT_112e11818;
    func_0x000107c61428(unaff_x20 + _DAT_112e11818,auStack_78,0x21,0);
    func_0x000107c61434(param_3);
    func_0x000107c6157c(lVar6);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c61558(uVar7);
    uStack_80 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
    FUN_101c98b44(lVar6,param_2,param_3,uVar7);
    *(undefined8 *)(unaff_x20 + lVar2) = uStack_80;
    func_0x000107c614a8(auStack_78);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(lVar6);
  }
  return;
}



/* Entry: 101c97e74; end: 101c98093; -[_TtC34ShoppingLensUserScopedServicesImpl28ShoppingLensLaunchConfigImpl preselectProductIds:forLensId:] */

/* WARNING: Possible PIC construction at 0x000101c97ee4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c97ee8) */

void FUN_101c97e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_101c97ca4(param_3,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101c98094; end: 101c98147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_101c98094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  puVar1 = &UNK_1104649b0;
  func_0x000107c613fc(&UNK_1104649b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c61434(param_2);
  pcVar2 = FUN_101c9934c;
  func_0x0001000c0ebc(FUN_101c9934c,puVar1);
  func_0x000107c61574(puVar1);
  uVar3 = 0;
  func_0x0001002ed07c(0);
  pcVar4 = FUN_101c98148;
  func_0x0001000bfde0(FUN_101c98148,0,uVar3);
  func_0x000107c61574(pcVar2);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar4);
  return pcVar2;
}



/* Entry: 101c98148; end: 101c98153;  */

void FUN_101c98148(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101c98154; end: 101c98573; -[_TtC34ShoppingLensUserScopedServicesImpl28ShoppingLensLaunchConfigImpl selectedProductObservableForLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c98154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  func_0x000107c5faec();
  puVar1 = &UNK_1104649f8;
  func_0x000107c613fc(&UNK_1104649f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  uVar2 = 0x101c9939c;
  func_0x0001000c0ebc(0x101c9939c,puVar1);
  func_0x000107c61574(puVar1);
  uVar3 = 0;
  func_0x0001002ed07c(0);
  pcVar4 = FUN_101c98148;
  func_0x0001000bfde0(FUN_101c98148,0,uVar3);
  func_0x000107c61574(uVar2);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101c98574; end: 101c98627; -[_TtC34ShoppingLensUserScopedServicesImpl28ShoppingLensLaunchConfigImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c98574(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_40;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_1 + _DAT_112e11828) = 0;
  lVar1 = _DAT_112e11818;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101c99250();
  *(undefined **)(param_1 + lVar1) = puVar2;
  lVar1 = _DAT_112e11830;
  func_0x0001010b11e8();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lVar1 = _DAT_112e11820;
  uVar4 = 0x112e11810;
  func_0x0001000285a8(0x112e11810,&UNK_10d9ecad0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_1 + lVar1) = uVar4;
  FUN_101c99350();
  lStack_40 = param_1;
  uStack_38 = uVar4;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c98628; end: 101c98657;  */

void FUN_101c98628(void)

{
  FUN_101c99350();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c98658; end: 101c986af; -[_TtC34ShoppingLensUserScopedServicesImpl28ShoppingLensLaunchConfigImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c98658(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e11828));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e11818));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e11830));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e11820));
  return;
}



/* Entry: 101c986b0; end: 101c9875f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c986b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = _DAT_112e11818;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(unaff_x20 + _DAT_112e11818,auStack_58,0x21,0);
  func_0x000107c61434(uVar2);
  func_0x000107c6157c(param_1);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
  func_0x000107c61558(uVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = 0x8000000000000000;
  FUN_101c98b44(param_1,uVar1,uVar2,uVar4);
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(unaff_x20 + lVar3) = uVar5;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101c98760; end: 101c987cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101c98760(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + _DAT_112e11818,auStack_48,0x21,0);
  FUN_101c98a88(param_1,param_2);
  func_0x000107c614a8(auStack_48);
  return param_1;
}



/* Entry: 101c987cc; end: 101c987cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c987cc(byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  byte **ppbVar5;
  long lVar6;
  uint uVar7;
  byte *pbStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  pbVar2 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
  pbVar4 = (byte *)((ulong)param_1 & 0xffffffffffff);
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pbVar4 = pbVar2;
  }
  if (pbVar4 == (byte *)0x0) {
    return;
  }
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        func_0x000107c60358();
        pbVar4 = param_1;
      }
      else {
        uVar3 = (ulong)param_2 & 0xfffffffffffffff;
        param_2 = (byte *)((ulong)param_1 & 0xffffffffffff);
        pbVar4 = (byte *)(uVar3 + 0x20);
      }
      if (*pbVar4 == 0x2b) {
        pbVar2 = param_2 + -1;
        if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101c98570);
          (*pcVar1)();
        }
        if (pbVar2 == (byte *)0x0) {
          return;
        }
        param_1 = (byte *)0x0;
        do {
          pbVar4 = pbVar4 + 1;
          if (9 < *pbVar4 - 0x30) {
            return;
          }
          lVar6 = (long)param_1 * 10;
          if (SUB168(SEXT816((long)param_1) * SEXT816(10),8) != lVar6 >> 0x3f) {
            return;
          }
          uVar3 = (ulong)(byte)(*pbVar4 - 0x30);
          param_1 = (byte *)(lVar6 + uVar3);
          if (SCARRY8(lVar6,uVar3)) {
            return;
          }
          pbVar2 = pbVar2 + -1;
        } while (pbVar2 != (byte *)0x0);
      }
      else if (*pbVar4 == 0x2d) {
        pbVar2 = param_2 + -1;
        if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101c98568);
          (*pcVar1)();
        }
        if (pbVar2 == (byte *)0x0) {
          return;
        }
        param_1 = (byte *)0x0;
        do {
          pbVar4 = pbVar4 + 1;
          if (9 < *pbVar4 - 0x30) {
            return;
          }
          lVar6 = (long)param_1 * 10;
          if (SUB168(SEXT816((long)param_1) * SEXT816(10),8) != lVar6 >> 0x3f) {
            return;
          }
          uVar3 = (ulong)(byte)(*pbVar4 - 0x30);
          param_1 = (byte *)(lVar6 - uVar3);
          if (SBORROW8(lVar6,uVar3)) {
            return;
          }
          pbVar2 = pbVar2 + -1;
        } while (pbVar2 != (byte *)0x0);
      }
      else {
        if (param_2 == (byte *)0x0) {
          return;
        }
        param_1 = (byte *)0x0;
        pbVar2 = pbVar4;
        while (pbVar2 != (byte *)0x0) {
          if (9 < *pbVar4 - 0x30) {
            return;
          }
          lVar6 = (long)param_1 * 10;
          if (SUB168(SEXT816((long)param_1) * SEXT816(10),8) != lVar6 >> 0x3f) {
            return;
          }
          uVar3 = (ulong)(byte)(*pbVar4 - 0x30);
          param_1 = (byte *)(lVar6 + uVar3);
          if (SCARRY8(lVar6,uVar3)) {
            return;
          }
          param_2 = param_2 + -1;
          pbVar4 = pbVar4 + 1;
          pbVar2 = param_2;
        }
      }
      goto LAB_101c984a4;
    }
    pbStack_58 = param_1;
    uStack_50 = (ulong)param_2 & 0xffffffffffffff;
    uVar7 = (uint)param_1 & 0xff;
    if (uVar7 == 0x2b) {
      if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c98574);
        (*pcVar1)();
      }
      pbVar2 = pbVar2 + -1;
      if (pbVar2 == (byte *)0x0) goto LAB_101c98490;
      param_1 = (byte *)0x0;
      pbVar4 = (byte *)((ulong)&pbStack_58 | 1);
      do {
        if (((9 < *pbVar4 - 0x30) ||
            (lVar6 = (long)param_1 * 10,
            SUB168(SEXT816((long)param_1) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
           (uVar3 = (ulong)(byte)(*pbVar4 - 0x30), param_1 = (byte *)(lVar6 + uVar3),
           SCARRY8(lVar6,uVar3))) goto LAB_101c98490;
        uVar7 = 0;
        pbVar2 = pbVar2 + -1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar2 != (byte *)0x0);
    }
    else if (uVar7 == 0x2d) {
      if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9856c);
        (*pcVar1)();
      }
      pbVar2 = pbVar2 + -1;
      if (pbVar2 == (byte *)0x0) {
LAB_101c98490:
        param_1 = (byte *)0x0;
        uVar7 = 1;
      }
      else {
        param_1 = (byte *)0x0;
        pbVar4 = (byte *)((ulong)&pbStack_58 | 1);
        do {
          if (((9 < *pbVar4 - 0x30) ||
              (lVar6 = (long)param_1 * 10,
              SUB168(SEXT816((long)param_1) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
             (uVar3 = (ulong)(byte)(*pbVar4 - 0x30), param_1 = (byte *)(lVar6 - uVar3),
             SBORROW8(lVar6,uVar3))) goto LAB_101c98490;
          uVar7 = 0;
          pbVar2 = pbVar2 + -1;
          pbVar4 = pbVar4 + 1;
        } while (pbVar2 != (byte *)0x0);
      }
    }
    else {
      if (pbVar2 == (byte *)0x0) goto LAB_101c98490;
      param_1 = (byte *)0x0;
      ppbVar5 = &pbStack_58;
      do {
        if (((9 < *(byte *)ppbVar5 - 0x30) ||
            (lVar6 = (long)param_1 * 10,
            SUB168(SEXT816((long)param_1) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
           (uVar3 = (ulong)(byte)(*(byte *)ppbVar5 - 0x30), param_1 = (byte *)(lVar6 + uVar3),
           SCARRY8(lVar6,uVar3))) goto LAB_101c98490;
        uVar7 = 0;
        pbVar2 = pbVar2 + -1;
        ppbVar5 = (byte **)((long)ppbVar5 + 1);
      } while (pbVar2 != (byte *)0x0);
    }
  }
  else {
    func_0x000107c61434(param_2);
    pbVar4 = param_2;
    func_0x000100edba6c(param_1,param_2,10);
    uVar7 = (uint)pbVar4;
    func_0x000107c6142c(param_2);
  }
  if ((uVar7 & 0xff) == 1) {
    return;
  }
LAB_101c984a4:
  func_0x000107c5fe40();
  pbStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x000107c61434(param_4);
  func_0x0001002a64a8(&pbStack_58);
  func_0x000107c6142c(param_4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101c987d0; end: 101c988ef; -[_TtC34ShoppingLensUserScopedServicesImpl28ShoppingLensLaunchConfigImpl setPreloadShowcaseResponse:forLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c987d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c5ee30(param_3);
  uVar4 = param_2;
  func_0x000107c61170(uVar2);
  uVar2 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  lVar1 = _DAT_112e11830;
  func_0x000107c61428(param_1 + _DAT_112e11830,auStack_68,0x21,0);
  func_0x00010006c00c(param_3,param_2);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61558(uVar3);
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0x8000000000000000;
  func_0x0001010b8f18(param_3,param_2,uVar2,uVar4,uVar3);
  func_0x000107c6142c(uVar4);
  *(undefined8 *)(param_1 + lVar1) = uVar5;
  func_0x000107c614a8(auStack_68);
  func_0x000107c61170(param_1);
  func_0x00010006c090(param_3,param_2);
  return;
}



/* Entry: 101c988f0; end: 101c9899f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101c988f0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_48 [24];
  
  lVar3 = _DAT_112e11830;
  func_0x000107c61428(unaff_x20 + _DAT_112e11830,auStack_48,0,0);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (*(long *)(lVar3 + 0x10) == 0) {
    uVar2 = 0;
    uVar4 = 0xf000000000000000;
  }
  else {
    func_0x000107c61434(lVar3);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
      uVar4 = 0xf000000000000000;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x10);
      uVar2 = *puVar1;
      uVar4 = puVar1[1];
      func_0x00010006c00c(uVar2,uVar4);
    }
    func_0x000107c6142c(lVar3);
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 101c989a0; end: 101c98a3b; -[_TtC34ShoppingLensUserScopedServicesImpl28ShoppingLensLaunchConfigImpl getPreloadShowcaseResponseForLensId:] */

void FUN_101c989a0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_2;
  FUN_101c988f0(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_3;
    func_0x000107c5ee20(param_3,uVar2);
    func_0x0001000b44c0(param_3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c98a3c; end: 101c98a6f; -[_TtC34ShoppingLensUserScopedServicesImpl28ShoppingLensLaunchConfigImpl setLensLaunchInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c98a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e11828);
  *(undefined8 *)(param_1 + _DAT_112e11828) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101c98a70; end: 101c98a87; -[_TtC34ShoppingLensUserScopedServicesImpl28ShoppingLensLaunchConfigImpl consumeLensLaunchInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c98a70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e11828);
  *(undefined8 *)(param_1 + _DAT_112e11828) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c98a88; end: 101c98b43;  */

undefined8 FUN_101c98a88(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000101c98c94();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x000101c990a0(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 101c98b44; end: 101c98e03;  */

void FUN_101c98b44(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c98c1c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_101c98e04(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c98be4);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000101c98c94();
    lVar6 = *unaff_x20;
    goto joined_r0x000101c98c30;
  }
  lVar6 = *unaff_x20;
joined_r0x000101c98c30:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c98c94);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101c98e04; end: 101c9924f;  */

void FUN_101c98e04(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e11860;
  func_0x0001000285a8(0x112e11860,&UNK_10d9ecb40);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101c9906c:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c9909c);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101c9906c;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c990a0);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101c99250; end: 101c9934b;  */

undefined * FUN_101c99250(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e11860,&UNK_10d9ecb40);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101c99348);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101c9934c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101c9934c; end: 101c9934f;  */

long FUN_101c9934c(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != *(long *)(unaff_x20 + 0x10) ||
      *(long *)(param_1 + 0x10) != *(long *)(unaff_x20 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 101c99350; end: 101c9936f;  */

void FUN_101c99350(void)

{
  func_0x000107c61168(&PTR_PTR_1127ff6f0);
  return;
}



/* Entry: 101c99370; end: 101c9939f;  */

long FUN_101c99370(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != *(long *)(unaff_x20 + 0x10) ||
      *(long *)(param_1 + 0x10) != *(long *)(unaff_x20 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 101c993a0; end: 101c99423; -[_TtC34ShoppingLensUserScopedServicesImpl26ShoppingLensModerationImpl limitModerationReportingToProducts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101c993a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e11868;
  func_0x000107c61428(param_1 + _DAT_112e11868,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 101c99424; end: 101c99473; -[_TtC34ShoppingLensUserScopedServicesImpl26ShoppingLensModerationImpl setLimitModerationReportingToProducts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c99424(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e11868;
  func_0x000107c61428(param_1 + _DAT_112e11868,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 101c99474; end: 101c99557; -[_TtC34ShoppingLensUserScopedServicesImpl26ShoppingLensModerationImpl reportableProducts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c99474(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e11868;
  func_0x000107c61428(param_1 + _DAT_112e11868,auStack_38,0,0);
  uVar2 = 0;
  if (*(char *)(param_1 + lVar1) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112e11870);
    FUN_101c99710(0);
    uVar2 = uVar3;
    func_0x000107c61434(uVar3);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101c99558; end: 101c995bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c99558(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e11870);
  *(undefined8 *)(unaff_x20 + _DAT_112e11870) = param_1;
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  lVar1 = _DAT_112e11868;
  func_0x000107c61428(unaff_x20 + _DAT_112e11868,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_2;
  return;
}



/* Entry: 101c995c0; end: 101c99653; -[_TtC34ShoppingLensUserScopedServicesImpl26ShoppingLensModerationImpl updateModerationStateWithSelectedProducts:limitModerationReportingToProducts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c995c0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0;
  FUN_101c99710(0);
  func_0x000107c5fc54(param_3,uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e11870);
  *(undefined8 *)(param_1 + _DAT_112e11870) = param_3;
  func_0x000107c61174();
  func_0x000107c6142c(uVar2);
  lVar1 = _DAT_112e11868;
  func_0x000107c61428(param_1 + _DAT_112e11868,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_4;
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101c99654; end: 101c99673;  */

void FUN_101c99654(void)

{
  func_0x000107c61168(&PTR_PTR_1127ff830);
  return;
}



/* Entry: 101c99674; end: 101c996cf; -[_TtC34ShoppingLensUserScopedServicesImpl26ShoppingLensModerationImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c99674(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined1 *)(param_1 + _DAT_112e11868) = 0;
  *(undefined **)(param_1 + _DAT_112e11870) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = param_1;
  FUN_101c99654();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c996d0; end: 101c996ff;  */

void FUN_101c996d0(void)

{
  FUN_101c99654();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c99700; end: 101c9970f; -[_TtC34ShoppingLensUserScopedServicesImpl26ShoppingLensModerationImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c99700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e11870));
  return;
}



/* Entry: 101c99710; end: 101c99753;  */

void FUN_101c99710(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e118a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b02b0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e118a0 = puVar1;
  return;
}



/* Entry: 101c99754; end: 101c99d5b;  */

undefined8
FUN_101c99754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_70 = FUN_101c99d5c;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101c99d78;
  puStack_78 = &UNK_110464a18;
  ppuVar2 = &puStack_90;
  func_0x000107c60bc4(ppuVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x0001002b245c(0);
  func_0x000107c610f8();
  func_0x000107c61174(puVar1);
  puVar3 = puVar1;
  func_0x0001039a5328();
  func_0x000107c42c20(param_4);
  func_0x0001000285a8(0x112e118a8,&UNK_10d9ecb70);
  func_0x000107c613fc();
  pcVar4 = FUN_101c99dcc;
  func_0x0001000bdd8c(FUN_101c99dcc,0);
  uVar5 = 0x112e118b0;
  func_0x0001000285a8(0x112e118b0,&UNK_10d9ecb78);
  uVar6 = 0x101c99e54;
  func_0x0001000cb480(0x101c99e54,0,uVar5);
  uVar7 = uVar6;
  func_0x0001003a5b88();
  func_0x000107c61574(uVar6);
  uVar5 = 0x112e118b8;
  func_0x0001000285a8(0x112e118b8,&UNK_10d9ecb80);
  uVar6 = 0x101c99e58;
  func_0x0001000cb480(0x101c99e58,0,uVar5);
  uVar8 = uVar6;
  func_0x0001003a5b88();
  func_0x000107c61574(uVar6);
  uVar5 = 0x112e118c0;
  func_0x0001000285a8(0x112e118c0,&UNK_10d9ecb88);
  pcVar9 = FUN_101c99dfc;
  func_0x0001000cb480(FUN_101c99dfc,0,uVar5);
  func_0x0001002b23e4(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x0001039a4b6c(pcVar9,uVar7,uVar8);
  func_0x000107c42c20(param_2);
  uVar5 = 0x112e118c8;
  func_0x0001000285a8(0x112e118c8,&UNK_10d9ecb90);
  uVar6 = 0x101c99e5c;
  func_0x0001000cb480(0x101c99e5c,0,uVar5);
  uVar5 = uVar6;
  func_0x0001003a5b88();
  func_0x000107c61574(uVar6);
  func_0x0001002b2420(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar5);
  uVar6 = uVar5;
  func_0x0001039a50b0();
  func_0x000107c42c20(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(pcVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  return unaff_x20;
}



/* Entry: 101c99d5c; end: 101c99d77;  */

void FUN_101c99d5c(void)

{
  FUN_101c99654(0);
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101c99d78; end: 101c99daf;  */

void FUN_101c99d78(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101c99db0; end: 101c99dcb;  */

void FUN_101c99db0(long param_1,long param_2)

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



/* Entry: 101c99dcc; end: 101c99dfb;  */

void FUN_101c99dcc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101c99350();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 101c99dfc; end: 101c99e2b;  */

void FUN_101c99dfc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = &PTR_DAT_1104649c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101c99e2c; end: 101c99e4b;  */

void FUN_101c99e2c(void)

{
  func_0x000107c61168(&PTR_PTR_112e11910);
  return;
}



/* Entry: 101c99e4c; end: 101c99e5f;  */

void FUN_101c99e4c(long param_1,long param_2)

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



/* Entry: 101c99e60; end: 101c99eb3;  */

undefined8 FUN_101c99e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010074fa84(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101c99eb4; end: 101c99eef;  */

void FUN_101c99eb4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c99ef0; end: 101c99f33;  */

undefined1  [16] FUN_101c99ef0(void)

{
  return ZEXT816(0x110464b90);
}



/* Entry: 101c99f34; end: 101c99f87;  */

void FUN_101c99f34(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c99f88; end: 101c9a893;  */

void FUN_101c99f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  *(undefined8 *)(unaff_x20 + 0x50) = param_5;
  *(undefined8 *)(unaff_x20 + 0x58) = param_6;
  *(undefined8 *)(unaff_x20 + 0x60) = param_7;
  *(undefined8 *)(unaff_x20 + 0x68) = param_8;
  *(undefined8 *)(unaff_x20 + 0x70) = param_9;
  *(undefined8 *)(unaff_x20 + 0x78) = param_10;
  *(undefined8 *)(unaff_x20 + 0x80) = param_11;
  *(undefined8 *)(unaff_x20 + 0x88) = param_12;
  func_0x0001000285a8(0x112e11a60,&UNK_10d9ece28);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174();
  uVar7 = param_13;
  func_0x000107c6157c(param_13);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001000285a8(0x112dafb90,&UNK_10d958cf0);
  func_0x000107c610f8();
  uVar7 = param_14;
  func_0x000107c6157c(param_14);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  func_0x0001000285a8(0x112e028b0,&UNK_10d9ecc00);
  func_0x000107c610f8();
  uVar7 = param_15;
  func_0x000107c6157c(param_15);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  puVar5 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x30) = puVar5;
  puVar6 = PTR_PTR_1126a8e18;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19d60);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef1a2d0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010effe2e0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc31c0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0087c0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0087f0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010effe330);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f008810);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f008830);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef2ada0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010effe380);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(puVar6);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61574(param_13);
    func_0x000107c61574(param_14);
    func_0x000107c61574(param_15);
    *(undefined **)(unaff_x20 + 0x90) = puVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9a894);
  (*pcVar1)();
}



/* Entry: 101c9a894; end: 101c9a94f;  */

void FUN_101c9a894(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 101c9a950; end: 101c9a99f;  */

undefined8 FUN_101c9a950(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c9a9a0; end: 101c9a9eb;  */

undefined1  [16] FUN_101c9a9a0(void)

{
  return ZEXT816(0x110464c58);
}



/* Entry: 101c9a9ec; end: 101c9ac9f;  */

void FUN_101c9a9ec(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100294860();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a8e20;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 101c9aca0; end: 101c9acab;  */

void FUN_101c9aca0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100294860();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a8e20;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 101c9acac; end: 101c9ad0f;  */

undefined8
FUN_101c9acac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101c9ad10(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 101c9ad10; end: 101c9af73;  */

void FUN_101c9ad10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a8e20;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 101c9af74; end: 101c9afb7;  */

void FUN_101c9af74(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c9afb8; end: 101c9b00b;  */

void FUN_101c9afb8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c9b00c; end: 101c9b013;  */

void FUN_101c9b00c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c9b014; end: 101c9b063;  */

undefined8 FUN_101c9b014(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c9b064; end: 101c9b0a7;  */

undefined1  [16] FUN_101c9b064(void)

{
  return ZEXT816(0x110464d20);
}



/* Entry: 101c9b0a8; end: 101c9b0cf;  */

void FUN_101c9b0a8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c9b0d0; end: 101c9b0d7;  */

undefined8 FUN_101c9b0d0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c9b0d8; end: 101c9b5b3;  */

long FUN_101c9b0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a8e28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0x6553686372616573;
  func_0x000107c5fadc(0x6553686372616573,0xee00736563697672);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1a250);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f008850);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar3);
  uVar4 = 0x65536569666c6573;
  func_0x000107c5fadc(0x65536569666c6573,0xee00736563697672);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcda0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efce100);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f008870);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_8);
    *(undefined **)(unaff_x20 + 0x58) = puVar2;
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9b5b4);
  (*pcVar1)();
}



/* Entry: 101c9b5b4; end: 101c9b637;  */

void FUN_101c9b5b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 101c9b638; end: 101c9b687;  */

undefined8 FUN_101c9b638(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c9b688; end: 101c9b6cb;  */

undefined1  [16] FUN_101c9b688(void)

{
  return ZEXT816(0x110464de8);
}



/* Entry: 101c9b6cc; end: 101c9b6f3;  */

void FUN_101c9b6cc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c9b6f4; end: 101c9b6fb;  */

undefined8 FUN_101c9b6f4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c9b6fc; end: 101c9b7cb;  */

void FUN_101c9b6fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x0001002b020c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101c9b950(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c9b7cc; end: 101c9b7d7;  */

void FUN_101c9b7cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x0001002b020c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101c9b950(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c9b7d8; end: 101c9b85f;  */

undefined8
FUN_101c9b7d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101c9b950(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_4);
  return uVar1;
}



/* Entry: 101c9b860; end: 101c9b8ab;  */

void FUN_101c9b860(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


