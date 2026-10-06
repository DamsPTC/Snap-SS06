/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10393ec2c; end: 10393ec2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393ec2c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  char *pcVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar5 = *(long *)(unaff_x20 + _DAT_112fb4880);
  lVar1 = *(long *)(lVar5 + _DAT_112fb4a18);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      puVar2 = &UNK_1106af970;
      func_0x000107c613fc(&UNK_1106af970,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      pcStack_40 = FUN_103940080;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_10130cf24;
      puStack_48 = &UNK_1106af9f0;
      puStack_38 = puVar2;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      pcVar4 = "startEditorSession()";
      func_0x0001000c10c0("startEditorSession()");
      func_0x000107c61180();
      func_0x000107c5dc64(lVar1);
      func_0x000107c615e8(pcVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(lVar1);
      return;
    }
  }
  lVar5 = lVar5 + _DAT_112fb4a30;
  func_0x000107c61428(lVar5,&puStack_60,0,0);
  lVar1 = lVar5;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar5 + 0x10))();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10393ec30; end: 10393ed8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393ec30(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  char *pcVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar5 = *(long *)(unaff_x20 + _DAT_112fb4880);
  lVar1 = *(long *)(lVar5 + _DAT_112fb4a18);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      puVar2 = &UNK_1106af970;
      func_0x000107c613fc(&UNK_1106af970,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      pcStack_40 = FUN_103940080;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_10130cf24;
      puStack_48 = &UNK_1106af9f0;
      puStack_38 = puVar2;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      pcVar4 = "startEditorSession()";
      func_0x0001000c10c0("startEditorSession()");
      func_0x000107c61180();
      func_0x000107c5dc64(lVar1);
      func_0x000107c615e8(pcVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(lVar1);
      return;
    }
  }
  lVar5 = lVar5 + _DAT_112fb4a30;
  func_0x000107c61428(lVar5,&puStack_60,0,0);
  lVar1 = lVar5;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar5 + 0x10))();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10393ed90; end: 10393f08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393ed90(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    return;
  }
  if (param_2 == 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      lVar5 = param_1;
      func_0x000107c40794();
      func_0x000107c60234(auStack_88);
      func_0x000107c615e8(lVar5);
      uVar2 = 0;
      FUN_103940090(0,0x112d50c78,&PTR_PTR_1126b25c0);
      puVar3 = &uStack_90;
      func_0x000107c6147c(puVar3,auStack_88,PTR___sypN_11034f1a8 + 8,uVar2,6);
      if (((ulong)puVar3 & 1) != 0) {
        uVar4 = *(undefined8 *)(param_3 + _DAT_112fb4888);
        func_0x000107c42428();
        func_0x000107c61180();
        uVar2 = uVar4;
        func_0x000107c5eea0(auStack_88 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
        func_0x000107c5ee70();
        (**(code **)(lVar7 + 8))
                  (auStack_88 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)),lVar1);
        func_0x000107c53ab4(uVar4);
        func_0x000107c61170(uVar2);
        uVar2 = *(undefined8 *)(param_3 + _DAT_112fb4868);
        *(undefined8 *)(param_3 + _DAT_112fb4868) = uVar4;
        func_0x000107c615f0(uVar4);
        func_0x000107c615e8(uVar2);
        FUN_10393f08c(uVar4);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_1);
        func_0x000107c61170(uStack_90);
        func_0x000107c615e8(uVar4);
        return;
      }
      lVar1 = *(long *)(param_3 + _DAT_112fb4880) + _DAT_112fb4a30;
      func_0x000107c61428(lVar1,auStack_88,0,0);
      lVar7 = lVar1;
      func_0x000107c61618();
      if (lVar7 == 0) {
        func_0x000107c61170(param_3);
        param_3 = param_1;
      }
      else {
        lVar1 = *(long *)(lVar1 + 8);
        func_0x000107c614f0();
        (**(code **)(lVar1 + 0x10))();
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(param_1);
      }
      goto LAB_10393ee90;
    }
    lVar1 = *(long *)(param_3 + _DAT_112fb4880) + _DAT_112fb4a30;
    func_0x000107c61428(lVar1,auStack_88,0,0);
    lVar7 = lVar1;
    func_0x000107c61618();
    if (lVar7 == 0) goto LAB_10393ee90;
    lVar1 = *(long *)(lVar1 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar1 + 0x10))();
  }
  else {
    lVar1 = *(long *)(param_3 + _DAT_112fb4880) + _DAT_112fb4a30;
    func_0x000107c61428(lVar1,auStack_88,0,0);
    lVar7 = lVar1;
    func_0x000107c61618();
    if (lVar7 == 0) goto LAB_10393ee90;
    lVar5 = *(long *)(lVar1 + 8);
    lVar1 = lVar7;
    func_0x000107c614f0();
    pcVar6 = *(code **)(lVar5 + 0x10);
    func_0x000107c614b0(param_2);
    (*pcVar6)(lVar1,lVar5);
    func_0x000107c614ac(param_2);
  }
  func_0x000107c615e8(lVar7);
LAB_10393ee90:
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10393f08c; end: 10393f1fb;  */

void FUN_10393f08c(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar2 = &puStack_80;
  ppuVar6 = &puStack_80;
  pcStack_60 = FUN_10393f3a8;
  puStack_58 = (undefined *)0x0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101349054;
  puStack_68 = &UNK_1106afa18;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  uVar3 = param_1;
  func_0x000107c5e068(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar4 = &UNK_1106af970;
  func_0x000107c613fc(&UNK_1106af970,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_1106afa50;
  func_0x000107c613fc(&UNK_1106afa50,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  pcStack_60 = (code *)0x103940088;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1011b0640;
  puStack_68 = &UNK_1106afa68;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar4);
  pcVar7 = "exposeScopeOnceMediaIsAttached(editor:)";
  func_0x0001000c10c0("exposeScopeOnceMediaIsAttached(editor:)");
  func_0x000107c61180();
  func_0x000107c5dc64(uVar3);
  func_0x000107c615e8(pcVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 10393f1fc; end: 10393f3a7;  */

void FUN_10393f1fc(ulong param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  uStack_40 = 0x10393f31c;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100ff0b04;
  puStack_48 = &UNK_1106afa90;
  func_0x000107c60bc4(&puStack_60);
  uVar4 = param_1;
  func_0x000107c4e91c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar1);
  if (uVar4 != 0) {
    uVar2 = 0;
    FUN_103940090(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar4;
    func_0x000107c5fc54(uVar4,uVar2);
    func_0x000107c61170(uVar4);
    if (uVar3 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar4 = uVar3;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar3);
  }
  uVar3 = param_1;
  func_0x000107c4b82c();
  if ((-1 < (long)uVar4) && (uVar4 == uVar3)) {
    func_0x000107c5b198(param_1);
    func_0x000107c61180();
  }
  return;
}



/* Entry: 10393f3a8; end: 10393f453;  */

void FUN_10393f3a8(long *param_1,long param_2)

{
  long lVar1;
  
  FUN_10393f1fc();
  if (param_2 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    FUN_103940090(0,0x112d50c78,&PTR_PTR_1126b25c0);
  }
  *param_1 = param_2;
  param_1[3] = lVar1;
  return;
}



/* Entry: 10393f454; end: 10393f9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393f454(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  double dVar13;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [88];
  long lStack_88;
  long lStack_80;
  
  puVar2 = PTR_PTR_1126c81d8;
  func_0x000107c610f8(PTR_PTR_1126c81d8);
  func_0x000107c453e4();
  lVar11 = 0x112d515b8;
  func_0x0001000285a8(0x112d515b8,&UNK_10d918260);
  lVar10 = lVar11;
  func_0x000107c613fc();
  *(undefined8 *)(lVar10 + 0x18) = 8;
  *(undefined8 *)(lVar10 + 0x10) = 4;
  puVar8 = PTR_PTR_1133bb520;
  puVar5 = PTR_PTR_1133bb510;
  *(undefined **)(lVar10 + 0x20) = PTR_PTR_1133bb510;
  *(undefined **)(lVar10 + 0x28) = puVar8;
  puVar9 = PTR_PTR_1133bb598;
  puVar4 = PTR_PTR_1133bb530;
  *(undefined **)(lVar10 + 0x30) = PTR_PTR_1133bb598;
  *(undefined **)(lVar10 + 0x38) = puVar4;
  uVar3 = 0;
  func_0x000100f99ab0(0);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar9);
  lVar6 = lVar10;
  func_0x000107c5fc48(lVar10,uVar3);
  func_0x000107c61574(lVar10);
  func_0x000107c57534(puVar2);
  func_0x000107c61170(lVar6);
  func_0x000107c613fc(lVar11,0x28,7);
  dVar13 = 4.94065645841247e-324;
  *(undefined8 *)(lVar11 + 0x18) = 2;
  *(undefined8 *)(lVar11 + 0x10) = 1;
  *(undefined **)(lVar11 + 0x20) = PTR_PTR_1133bb550;
  func_0x000107c61174();
  lVar10 = lVar11;
  func_0x000107c5fc48(lVar11,uVar3);
  func_0x000107c61574(lVar11);
  func_0x000107c57538(puVar2);
  func_0x000107c61170(lVar10);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c54184(puVar2);
  func_0x000107c61170(puVar5);
  lVar6 = 0;
  FUN_10393ea18();
  lVar10 = lVar6;
  func_0x000107c610f8();
  lVar11 = _DAT_112fb4838;
  func_0x000107c61614(lVar10 + _DAT_112fb4838,0);
  func_0x000107c61604(lVar10 + lVar11);
  plVar7 = &lStack_88;
  lStack_88 = lVar10;
  lStack_80 = lVar6;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fb4878);
  *(long **)(unaff_x20 + _DAT_112fb4878) = plVar7;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  puVar5 = PTR_PTR_1126ad3d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c53758();
  lVar11 = *(long *)(unaff_x20 + _DAT_112fb4880);
  puVar1 = (undefined8 *)(lVar11 + _DAT_112fb4a20);
  if (*(char *)(puVar1 + 3) != '\x01') {
    func_0x000107c600d4(*puVar1,puVar1[1],puVar1[2]);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(dVar13 * 1000.0);
    func_0x000107c58da8(puVar5);
    func_0x000107c61170(puVar8);
  }
  puVar9 = PTR_PTR_1126ad3f8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c54174(puVar9);
  func_0x000107c61170(puVar8);
  lVar10 = 0x112d70c98;
  func_0x0001000285a8(0x112d70c98,&UNK_10d931cc0);
  func_0x000107c61534();
  *(undefined8 *)(lVar10 + 0x18) = 4;
  *(undefined8 *)(lVar10 + 0x10) = 2;
  *(undefined8 *)(lVar10 + 0x20) = puVar4;
  puVar8 = PTR_PTR_1133bb548;
  *(undefined **)(lVar10 + 0x28) = puVar5;
  *(undefined **)(lVar10 + 0x30) = puVar8;
  *(undefined **)(lVar10 + 0x38) = puVar9;
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  func_0x000107c61174();
  lVar6 = lVar10;
  func_0x000100faca28(lVar10);
  func_0x000107c61588(lVar10);
  uVar3 = 0x112d70ca0;
  func_0x0001000285a8(0x112d70ca0,&UNK_10dc27520);
  func_0x000107c61408((undefined8 *)(lVar10 + 0x20),2,uVar3);
  uVar12 = *(undefined8 *)(lVar11 + _DAT_112fb4a28);
  uVar3 = uVar12;
  func_0x000107c615f0(uVar12);
  func_0x00010011df08();
  func_0x000107c61180();
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  func_0x000103eccdc8(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c615f0(param_1);
  dVar13 = 0.0;
  lVar10 = -1;
  func_0x000103ecba40(0xffffffffffffffff,puVar2,lVar6,uVar12);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  lVar11 = _DAT_11302bbc8;
  func_0x000107c61428(lVar10 + _DAT_11302bbc8,auStack_e0,1,0);
  uVar3 = *(undefined8 *)(lVar10 + lVar11);
  *(undefined **)(lVar10 + lVar11) = puVar8;
  func_0x000107c61170(uVar3);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  lVar11 = _DAT_11302bbd8;
  func_0x000107c61428(lVar10 + _DAT_11302bbd8,auStack_f8,1,0);
  uVar3 = *(undefined8 *)(lVar10 + lVar11);
  *(undefined **)(lVar10 + lVar11) = puVar8;
  func_0x000107c61170(uVar3);
  if (*(char *)(puVar1 + 3) != '\x01') {
    func_0x000107c600d4(*puVar1,puVar1[1],puVar1[2]);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c466c0(dVar13 * 1000.0);
    lVar11 = _DAT_11302bbd0;
    func_0x000107c61428(lVar10 + _DAT_11302bbd0,auStack_110,1,0);
    uVar3 = *(undefined8 *)(lVar10 + lVar11);
    *(undefined **)(lVar10 + lVar11) = puVar8;
    func_0x000107c61170(uVar3);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fb4898);
  func_0x000107c3ed2c(uVar3);
  func_0x000107c61180();
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112fb4890));
  func_0x000107c61170(puVar2);
  func_0x000107c61170(plVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 10393f9d8; end: 10393fa37; -[TilePickerFlowEntryPoint init] */

void FUN_10393f9d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCTilePickerFlow.TilePickerFlowEntryPoint",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10393fa04);
  (*pcVar1)();
}



/* Entry: 10393fa38; end: 10393facf; -[TilePickerFlowEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010393fa54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010393fa74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010393fa58) */
/* WARNING: Removing unreachable block (ram,0x00010393fa78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393fa38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb4880));
  return;
}



/* Entry: 10393fad0; end: 10393fad7;  */

undefined8 FUN_10393fad0(void)

{
  return 0;
}



/* Entry: 10393fad8; end: 10393faff; -[TilePickerFlowEntryPoint snapEditorDidDismissWithDidSend:didPost:postedClientIds:postedStoryIds:precaptureLensIds:isCrossPostingSpotlightToStories:] */

void FUN_10393fad8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10393ff74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10393fb00; end: 10393fc27;  */

void FUN_10393fb00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  pcVar1 = "confirmFrame(withTimestampMs:editedSnapDoc:baseFrameImage:)";
  func_0x0001000c10c0("confirmFrame(withTimestampMs:editedSnapDoc:baseFrameImage:)");
  func_0x000107c61180();
  puVar2 = &UNK_1106af970;
  func_0x000107c613fc(&UNK_1106af970,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1106af998;
  func_0x000107c613fc(&UNK_1106af998,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined8 *)(puVar3 + 0x30) = param_4;
  pcStack_60 = FUN_103940034;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1106af9b0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_2);
  func_0x00010006c00c(param_3,param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10393fc28; end: 10393fecf;  */

/* WARNING: Removing unreachable block (ram,0x00010393fcf0) */
/* WARNING: Removing unreachable block (ram,0x00010393fe90) */
/* WARNING: Removing unreachable block (ram,0x00010393fd6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393fc28(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  
  puVar7 = auStack_88;
  uVar8 = 0;
  func_0x000107c61428(param_2 + 0x10,puVar7,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar6 = _DAT_112fb4868;
  if (param_2 != 0) {
    if (*(long *)(param_2 + _DAT_112fb4868) != 0) {
      func_0x000107c3eea8(param_3);
      func_0x000107c61180();
      uVar3 = param_3;
      func_0x000107c5ee30();
      func_0x000107c61170(param_3);
      func_0x000107c610f8(PTR_PTR_1126b25c0);
      uVar1 = uVar3;
      func_0x0001010282b0(uVar3,puVar7);
      func_0x00010006c090(uVar3,puVar7);
      uVar2 = 1000;
      func_0x000107c600d0(param_1 / 1000.0,1000);
      *(undefined1 *)(param_2 + _DAT_112fb4870) = 1;
      uVar3 = *(undefined8 *)(param_2 + lVar6);
      *(undefined8 *)(param_2 + lVar6) = 0;
      func_0x000107c615e8(uVar3);
      uVar4 = *(undefined8 *)(param_2 + _DAT_112fb4890);
      func_0x000107c61174(uVar4);
      uVar3 = uVar4;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(uVar3);
      lVar6 = *(long *)(param_2 + _DAT_112fb4880) + _DAT_112fb4a30;
      func_0x000107c61428(lVar6,auStack_a8,0,0);
      lVar5 = lVar6;
      func_0x000107c61618();
      if (lVar5 == 0) {
        func_0x000107c61170(uVar1);
      }
      else {
        lVar9 = *(long *)(lVar6 + 8);
        lVar6 = lVar5;
        func_0x000107c614f0();
        (**(code **)(lVar9 + 8))(uVar1,uVar2,puVar7,uVar8,param_4,param_5,lVar6,lVar9);
        func_0x000107c61170(uVar1);
        func_0x000107c615e8(lVar5);
      }
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10393fed0; end: 10393ff73; -[TilePickerFlowEntryPoint confirmFrameWithTimestampMs:editedSnapDoc:baseFrameImage:] */

/* WARNING: Possible PIC construction at 0x00010393ff2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010393ff54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010393ff30) */
/* WARNING: Removing unreachable block (ram,0x00010393ff58) */

void FUN_10393fed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10393ff74; end: 103940033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393ff74(void)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_112fb4870);
  *(undefined1 *)(unaff_x20 + _DAT_112fb4870) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fb4868);
  *(undefined8 *)(unaff_x20 + _DAT_112fb4868) = 0;
  func_0x000107c615e8(uVar2);
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112fb4890));
  func_0x000107c61180();
  func_0x000107c615e8();
  if ((bVar1 & 1) == 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112fb4880) + _DAT_112fb4a30;
    func_0x000107c61428(lVar4,auStack_38,0,0);
    lVar3 = lVar4;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar4 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar4 + 0x10))();
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 103940034; end: 10394005f;  */

/* WARNING: Removing unreachable block (ram,0x00010393fcf0) */
/* WARNING: Removing unreachable block (ram,0x00010393fe90) */
/* WARNING: Removing unreachable block (ram,0x00010393fd6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103940034(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  double dVar13;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  dVar13 = *(double *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar10 = auStack_88;
  uVar11 = 0;
  func_0x000107c61428(lVar3 + 0x10,puVar10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar9 = _DAT_112fb4868;
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + _DAT_112fb4868) != 0) {
      func_0x000107c3eea8(uVar4);
      func_0x000107c61180();
      uVar6 = uVar4;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar4);
      func_0x000107c610f8(PTR_PTR_1126b25c0);
      uVar4 = uVar6;
      func_0x0001010282b0(uVar6,puVar10);
      func_0x00010006c090(uVar6,puVar10);
      uVar5 = 1000;
      func_0x000107c600d0(dVar13 / 1000.0,1000);
      *(undefined1 *)(lVar3 + _DAT_112fb4870) = 1;
      uVar6 = *(undefined8 *)(lVar3 + lVar9);
      *(undefined8 *)(lVar3 + lVar9) = 0;
      func_0x000107c615e8(uVar6);
      uVar7 = *(undefined8 *)(lVar3 + _DAT_112fb4890);
      func_0x000107c61174(uVar7);
      uVar6 = uVar7;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      func_0x000107c615e8(uVar6);
      lVar9 = *(long *)(lVar3 + _DAT_112fb4880) + _DAT_112fb4a30;
      func_0x000107c61428(lVar9,auStack_a8,0,0);
      lVar8 = lVar9;
      func_0x000107c61618();
      if (lVar8 == 0) {
        func_0x000107c61170(uVar4);
      }
      else {
        lVar12 = *(long *)(lVar9 + 8);
        lVar9 = lVar8;
        func_0x000107c614f0();
        (**(code **)(lVar12 + 8))(uVar4,uVar5,puVar10,uVar11,uVar1,uVar2,lVar9,lVar12);
        func_0x000107c61170(uVar4);
        func_0x000107c615e8(lVar8);
      }
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 103940060; end: 10394007f;  */

void FUN_103940060(void)

{
  func_0x000107c61168(&PTR_PTR_112904048);
  return;
}



/* Entry: 103940080; end: 10394008f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103940080(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  if (param_2 == 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      lVar6 = param_1;
      func_0x000107c40794();
      func_0x000107c60234(auStack_88);
      func_0x000107c615e8(lVar6);
      uVar3 = 0;
      FUN_103940090(0,0x112d50c78,&PTR_PTR_1126b25c0);
      puVar4 = &uStack_90;
      func_0x000107c6147c(puVar4,auStack_88,PTR___sypN_11034f1a8 + 8,uVar3,6);
      if (((ulong)puVar4 & 1) != 0) {
        uVar5 = *(undefined8 *)(lVar2 + _DAT_112fb4888);
        func_0x000107c42428();
        func_0x000107c61180();
        uVar3 = uVar5;
        func_0x000107c5eea0(auStack_88 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
        func_0x000107c5ee70();
        (**(code **)(lVar8 + 8))
                  (auStack_88 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)),lVar1);
        func_0x000107c53ab4(uVar5);
        func_0x000107c61170(uVar3);
        uVar3 = *(undefined8 *)(lVar2 + _DAT_112fb4868);
        *(undefined8 *)(lVar2 + _DAT_112fb4868) = uVar5;
        func_0x000107c615f0(uVar5);
        func_0x000107c615e8(uVar3);
        FUN_10393f08c(uVar5);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(param_1);
        func_0x000107c61170(uStack_90);
        func_0x000107c615e8(uVar5);
        return;
      }
      lVar1 = *(long *)(lVar2 + _DAT_112fb4880) + _DAT_112fb4a30;
      func_0x000107c61428(lVar1,auStack_88,0,0);
      lVar8 = lVar1;
      func_0x000107c61618();
      if (lVar8 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = param_1;
      }
      else {
        lVar1 = *(long *)(lVar1 + 8);
        func_0x000107c614f0();
        (**(code **)(lVar1 + 0x10))();
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(param_1);
      }
      goto LAB_10393ee90;
    }
    lVar1 = *(long *)(lVar2 + _DAT_112fb4880) + _DAT_112fb4a30;
    func_0x000107c61428(lVar1,auStack_88,0,0);
    lVar8 = lVar1;
    func_0x000107c61618();
    if (lVar8 == 0) goto LAB_10393ee90;
    lVar1 = *(long *)(lVar1 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar1 + 0x10))();
  }
  else {
    lVar1 = *(long *)(lVar2 + _DAT_112fb4880) + _DAT_112fb4a30;
    func_0x000107c61428(lVar1,auStack_88,0,0);
    lVar8 = lVar1;
    func_0x000107c61618();
    if (lVar8 == 0) goto LAB_10393ee90;
    lVar6 = *(long *)(lVar1 + 8);
    lVar1 = lVar8;
    func_0x000107c614f0();
    pcVar7 = *(code **)(lVar6 + 0x10);
    func_0x000107c614b0(param_2);
    (*pcVar7)(lVar1,lVar6);
    func_0x000107c614ac(param_2);
  }
  func_0x000107c615e8(lVar8);
LAB_10393ee90:
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 103940090; end: 1039400cf;  */

void FUN_103940090(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1039400d0; end: 1039400ef;  */

void FUN_1039400d0(long param_1,long param_2)

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



/* Entry: 1039400f0; end: 10394023b;  */

void FUN_1039400f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10394023c; end: 1039402eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394023c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  lVar3 = 0;
  FUN_103940d6c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar1 = lVar4 + _DAT_112fb49d8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(lVar4 + _DAT_112fb49e0) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112fb49e8) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_50,puVar2);
  *param_1 = plVar5;
  return;
}



/* Entry: 1039402ec; end: 1039402f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039402ec(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar7 = &lStack_50;
  lVar5 = 0;
  FUN_103940d6c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar1 = lVar6 + _DAT_112fb49d8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(lVar6 + _DAT_112fb49e0) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112fb49e8) = uVar3;
  puVar4 = PTR_s_init_1125d9248;
  lStack_50 = lVar6;
  lStack_48 = lVar5;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61154(&lStack_50,puVar4);
  *param_1 = plVar7;
  return;
}



/* Entry: 1039402f4; end: 10394030f;  */

/* WARNING: Possible PIC construction at 0x000103940300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103940304) */

void FUN_1039402f4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103940310; end: 10394035b;  */

void FUN_103940310(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394035c; end: 103940443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394035c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar8 = &lStack_50;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_1106afaf8;
  func_0x000107c613fc(&UNK_1106afaf8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x0001000285a8(0x112fb48c8,&UNK_10dc27530);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  pcVar4 = FUN_1039404c0;
  func_0x0001000bdd8c(FUN_1039404c0,puVar3);
  pcVar5 = pcVar4;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar4);
  lVar6 = 0;
  func_0x00010036fe90();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(code **)(lVar7 + _DAT_112fb49a8) = pcVar5;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar8;
  return;
}



/* Entry: 103940444; end: 1039404bf;  */

void FUN_103940444(undefined8 param_1)

{
  if (lRam0000000112fb48f8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e78fda0);
  return;
}



/* Entry: 1039404c0; end: 1039404c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039404c0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar7 = &lStack_50;
  lVar5 = 0;
  FUN_103940d6c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar1 = lVar6 + _DAT_112fb49d8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(lVar6 + _DAT_112fb49e0) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112fb49e8) = uVar3;
  puVar4 = PTR_s_init_1125d9248;
  lStack_50 = lVar6;
  lStack_48 = lVar5;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61154(&lStack_50,puVar4);
  *param_1 = plVar7;
  return;
}



/* Entry: 1039404c4; end: 10394050f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039404c4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb49a8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103940510; end: 10394051f; -[_TtC16SCTilePickerFlow26TilePickerLauncherServices launcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103940510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb49a8));
  return;
}



/* Entry: 103940520; end: 10394057f; -[_TtC16SCTilePickerFlow26TilePickerLauncherServices init] */

void FUN_103940520(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCTilePickerFlow.TilePickerLauncherServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10394054c);
  (*pcVar1)();
}



/* Entry: 103940580; end: 10394058f; -[_TtC16SCTilePickerFlow26TilePickerLauncherServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103940580(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb49a8));
  return;
}



/* Entry: 103940590; end: 10394060f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103940590(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar1 = unaff_x20 + _DAT_112fb49d8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fb49e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fb49e8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103940610; end: 10394091f;  */

void FUN_103940610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  func_0x000107c614f0();
  pcVar1 = "launch(deckHierarchy:snapDocLazy:seekToTimestamp:)";
  func_0x0001000c10c0("launch(deckHierarchy:snapDocLazy:seekToTimestamp:)");
  func_0x000107c61180();
  puVar2 = &UNK_1106afb38;
  func_0x000107c613fc(&UNK_1106afb38,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1106afb60;
  func_0x000107c613fc(&UNK_1106afb60,0x50,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  *(undefined8 *)(puVar3 + 0x30) = param_5;
  puVar3[0x38] = param_6;
  *(undefined8 *)(puVar3 + 0x40) = param_1;
  *(undefined8 *)(puVar3 + 0x48) = unaff_x20;
  pcStack_70 = FUN_103940920;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1106afb78;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 103940920; end: 103940953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103940920(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    uVar12 = *(undefined8 *)(lVar6 + _DAT_112fb49e8);
    if (lVar10 == 0) {
      func_0x000107c61174(uVar12);
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126ae720;
      func_0x000107c61168(PTR_PTR_1126ae720);
      puVar8 = &UNK_1106afbc8;
      func_0x000107c613fc(&UNK_1106afbc8,0x20,7);
      *(long *)(puVar8 + 0x10) = lVar10;
      *(undefined8 *)(puVar8 + 0x18) = uVar4;
      pcStack_88 = FUN_103940d8c;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_103940af0;
      puStack_90 = &UNK_1106afbe0;
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar8 = puStack_80;
      func_0x000107c61174(uVar12);
      func_0x000107c61174(lVar10);
      func_0x000107c61574(puVar8);
      func_0x000107c3e4fc(puVar7);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar9);
    }
    lVar10 = lVar6;
    func_0x000107c61174();
    puVar8 = puVar7;
    FUN_10394115c(puVar7,uVar1,uVar3,uVar11,uVar5,uVar2,lVar6,&PTR_DAT_1106afba0);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(puVar7);
    func_0x000107c42c1c(*(undefined8 *)(lVar10 + _DAT_112fb49e0));
    func_0x000107c61170(lVar10);
    func_0x000107c61170(puVar8);
  }
  return;
}



/* Entry: 103940954; end: 103940aef;  */

undefined * FUN_103940954(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar3 = &UNK_1106afc18;
    func_0x000107c613fc(&UNK_1106afc18,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    uStack_40 = 0x103940d94;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_10130cf24;
    puStack_48 = &UNK_1106afc30;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    puVar3 = puStack_38;
    func_0x000107c61174(puVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c5dc64(param_1);
    func_0x000107c60bd0(ppuVar2);
    puVar3 = puVar1;
    func_0x000107c43bf4(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar1);
  }
  return puVar3;
}



/* Entry: 103940af0; end: 103940b27;  */

void FUN_103940af0(long param_1)

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



/* Entry: 103940b28; end: 103940b87; -[_TtC16SCTilePickerFlow18TilePickerLauncher init] */

void FUN_103940b28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCTilePickerFlow.TilePickerLauncher",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103940b54);
  (*pcVar1)();
}



/* Entry: 103940b88; end: 103940bf3; -[_TtC16SCTilePickerFlow18TilePickerLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103940b88(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fb49e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fb49e8));
  param_1 = param_1 + _DAT_112fb49d8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103940bf4; end: 103940cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103940bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_78 [24];
  
  lVar2 = unaff_x20 + _DAT_112fb49d8;
  func_0x000107c61428(lVar2,auStack_78,0,0);
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 8))(param_1,param_2,param_3,param_4,param_5,param_6,lVar2,lVar3);
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112fb49e0));
  func_0x000107c61180();
  func_0x000107c615e8();
  return;
}



/* Entry: 103940cd8; end: 103940d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103940cd8(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = unaff_x20 + _DAT_112fb49d8;
  func_0x000107c61428(lVar2,auStack_48,0,0);
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar2 + 0x10))();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112fb49e0));
  func_0x000107c61180();
  func_0x000107c615e8();
  return;
}



/* Entry: 103940d6c; end: 103940d8b;  */

void FUN_103940d6c(void)

{
  func_0x000107c61168(&PTR_PTR_1129041f8);
  return;
}



/* Entry: 103940d8c; end: 103940d9b;  */

undefined * FUN_103940d8c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_60;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = &UNK_1106afc18;
    func_0x000107c613fc(&UNK_1106afc18,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar3;
    *(undefined8 *)(puVar5 + 0x18) = uVar1;
    uStack_40 = 0x103940d94;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_10130cf24;
    puStack_48 = &UNK_1106afc30;
    puStack_38 = puVar5;
    func_0x000107c60bc4(&puStack_60);
    puVar5 = puStack_38;
    func_0x000107c61174(puVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c5dc64(lVar2);
    func_0x000107c60bd0(ppuVar4);
    puVar5 = puVar3;
    func_0x000107c43bf4(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
  }
  return puVar5;
}



/* Entry: 103940d9c; end: 10394100f;  */

/* WARNING: Possible PIC construction at 0x000103940eec: Changing call to branch */

long FUN_103940d9c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  ulong auStack_80 [4];
  
  lVar4 = param_1;
  func_0x000107c40794();
  func_0x000107c60234(auStack_80);
  func_0x000107c615e8(lVar4);
  uVar5 = 0;
  FUN_103941010(0,0x112d50c78,&PTR_PTR_1126b25c0);
  plVar6 = &lStack_88;
  func_0x000107c6147c(plVar6,auStack_80,PTR___sypN_11034f1a8 + 8,uVar5,6);
  if (((ulong)plVar6 & 1) != 0) {
    lVar4 = lStack_88;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10394100c);
      (*pcVar3)();
    }
    lVar7 = lVar4;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar7 != 0) {
      auStack_80[0] = 0;
      uVar5 = 0;
      FUN_103941010(0,0x112d55598,&PTR_PTR_1126b25d0);
      func_0x000107c5fc50(lVar7,auStack_80,uVar5);
      func_0x000107c61170(lVar7);
      uVar2 = auStack_80[0];
      if (auStack_80[0] != 0) {
        uVar14 = auStack_80[0] & 0xffffffffffffff8;
        if (auStack_80[0] >> 0x3e == 0) {
          uVar12 = *(ulong *)(uVar14 + 0x10);
        }
        else {
          uVar12 = auStack_80[0];
          if (-1 < (long)auStack_80[0]) {
            uVar12 = uVar14;
          }
          func_0x000107c60480();
        }
        if (uVar12 != 0) {
          uVar13 = 0;
          do {
            if ((uVar2 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar14 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x103940fc0);
                (*pcVar3)();
              }
              param_1 = *(long *)(uVar2 + uVar13 * 8 + 0x20);
              goto code_r0x000107c61174;
            }
            uVar11 = uVar13;
            func_0x00010121c1ac(uVar13,uVar2);
            uVar1 = uVar13 + 1;
            if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103940fbc);
              (*pcVar3)();
            }
            uVar8 = uVar11;
            func_0x000107c4c930();
            func_0x000107c61180();
            if (uVar8 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103941004);
              (*pcVar3)();
            }
            uVar9 = uVar8;
            func_0x000107c3e240();
            func_0x000107c61170(uVar8);
            uVar8 = uVar11;
            if (((int)uVar9 == 5) && (uVar9 = uVar11, func_0x000107c44a6c(), (uVar9 & 1) != 0)) {
              uVar9 = uVar11;
              func_0x000107c4f4ec();
              func_0x000107c61180();
              if (uVar9 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x103941008);
                (*pcVar3)();
              }
              uVar10 = uVar9;
              func_0x000107c44bd0();
              func_0x000107c61170(uVar9);
              if ((int)uVar10 != 0) {
                func_0x000107c4f4ec();
                func_0x000107c61180();
                if (uVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x103941010);
                  (*pcVar3)();
                }
                func_0x000107c55058();
                func_0x000107c61170(uVar11);
              }
            }
            func_0x000107c61170(uVar8);
            uVar13 = uVar13 + 1;
          } while (uVar1 != uVar12);
        }
        func_0x000107c6142c(uVar2);
        return lStack_88;
      }
    }
    func_0x000107c61170(lStack_88);
  }
code_r0x000107c61174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return param_1;
}



/* Entry: 103941010; end: 10394104f;  */

void FUN_103941010(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103941050; end: 10394105f;  */

void FUN_103941050(long param_1,long param_2)

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



/* Entry: 103941060; end: 1039410a7; -[_TtC17SCTilePickerScope17SCTilePickerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103941060(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fb4a18));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fb4a28));
  param_1 = param_1 + _DAT_112fb4a30;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1039410a8; end: 10394110f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039410a8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010036e6f4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fb4a40) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103941110; end: 10394115b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103941110(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb4a40) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10394115c; end: 1039412a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10394115c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar4 = param_1;
  func_0x00010036df98();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar1 = lVar5 + _DAT_112fb4a30;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(long *)(lVar5 + _DAT_112fb4a18) = param_1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112fb4a20);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2[2] = param_4;
  *(undefined1 *)(puVar2 + 3) = param_5;
  *(undefined8 *)(lVar5 + _DAT_112fb4a28) = param_6;
  func_0x000107c61428();
  *(undefined8 *)(lVar1 + 8) = param_8;
  func_0x000107c61604(lVar1,param_7);
  puVar3 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_6);
  plVar6 = &lStack_88;
  func_0x000107c61154(plVar6,puVar3);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  func_0x000107c61574(uStack_90);
  func_0x000107c615e8(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 1039412a4; end: 1039412a7;  */

void FUN_1039412a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039412a8; end: 1039412db;  */

void FUN_1039412a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039412dc; end: 10394130f; -[_TtC17SCTilePickerScope25SCTilePickerScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039412dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb4a40));
  return;
}



/* Entry: 103941310; end: 10394174f;  */

undefined8 FUN_103941310(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if (*(byte *)(param_1 + 2) < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return uVar1;
  }
  return *param_1;
}



/* Entry: 103941750; end: 10394176f; -[ShortcutsCarouselScope viewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103941750(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fb4ab8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103941770; end: 10394178f; -[ShortcutsCarouselScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103941770(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fb4ac0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103941790; end: 10394179f; -[ShortcutsCarouselScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103941790(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fb4ac8);
}



/* Entry: 1039417a0; end: 1039417e7; -[ShortcutsCarouselScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039417a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb4ad0;
  func_0x000107c61428(param_1 + _DAT_112fb4ad0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039417e8; end: 10394183f; -[ShortcutsCarouselScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039417e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb4ad0;
  func_0x000107c61428(param_1 + _DAT_112fb4ad0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103941840; end: 10394184f; -[ShortcutsCarouselScope actionObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103941840(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb4ad8));
  return;
}



/* Entry: 103941850; end: 10394185f; -[ShortcutsCarouselScope configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103941850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb4ae0));
  return;
}



/* Entry: 103941860; end: 1039418ef; -[ShortcutsCarouselScope onLayoutDirty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103941860(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fb4ae8);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1106affb8;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1039418f0; end: 1039418ff; -[ShortcutsCarouselScope loggingSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039418f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fb4af0);
}



/* Entry: 103941900; end: 10394190f; -[ShortcutsCarouselScope recipientSelectionChangesObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103941900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb4af8));
  return;
}



/* Entry: 103941910; end: 103941a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103941910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112fb4ad0;
  func_0x000107c61614(unaff_x20 + _DAT_112fb4ad0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fb4ab8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4ac0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4ac8) = param_3;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112fb4ad8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4ae0) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fb4ae8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4af0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4af8) = param_10;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  puVar4 = auStack_88;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_4);
  return puVar4;
}



/* Entry: 103941a70; end: 103941b7f; -[ShortcutsCarouselScope initWithViewContainer:uiContainer:source:delegate:actionObservable:configuration:onLayoutDirty:loggingSource:recipientSelectionChangesObservable:] */

undefined8
FUN_103941a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1106affa0;
  func_0x000107c613fc(&UNK_1106affa0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_11);
  uVar2 = param_3;
  FUN_103942050(param_3,param_4,param_5,param_6,param_7,param_8,0x103942200,puVar1,param_10,param_11
               );
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_6);
  return uVar2;
}



/* Entry: 103941b80; end: 103941bab; -[ShortcutsCarouselScope init] */

void FUN_103941b80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShortcutsCarouselScope.ShortcutsCarouselScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103941bac);
  (*pcVar1)();
}



/* Entry: 103941bac; end: 103941c37; -[ShortcutsCarouselScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103941bf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103941bfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103941bac(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fb4ab8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fb4ac0));
  FUN_10394218c(param_1 + _DAT_112fb4ad0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb4ad8));
  return;
}



/* Entry: 103941c38; end: 103941ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103941c38(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034a870();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fb4b08) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103941ca4; end: 103941cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103941ca4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb4b08) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103941cf0; end: 103941e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103941cf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x00010034a550();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112fb4ad0;
  func_0x000107c61614(lVar5 + _DAT_112fb4ad0,0);
  *(long *)(lVar5 + _DAT_112fb4ab8) = param_1;
  *(undefined8 *)(lVar5 + _DAT_112fb4ac0) = param_2;
  *(undefined8 *)(lVar5 + _DAT_112fb4ac8) = param_3;
  func_0x000107c61428(lVar5 + lVar3,auStack_78,1,0);
  func_0x000107c61604(lVar5 + lVar3,param_4);
  *(undefined8 *)(lVar5 + _DAT_112fb4ad8) = param_5;
  *(undefined8 *)(lVar5 + _DAT_112fb4ae0) = param_6;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112fb4ae8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(lVar5 + _DAT_112fb4af0) = param_9;
  *(undefined8 *)(lVar5 + _DAT_112fb4af8) = param_10;
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c61174(param_10);
  plVar6 = &lStack_88;
  func_0x000107c61154(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  func_0x000107c61574(uStack_90);
  func_0x000107c615e8(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 103941e94; end: 103941fdb; -[_TtC22ShortcutsCarouselScope30ShortcutsCarouselScopeServices buildWithViewContainer:uiContainer:source:delegate:actionObservable:configuration:onLayoutDirty:loggingSource:recipientSelectionChangesObservable:] */

void FUN_103941e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1106aff78;
  func_0x000107c613fc(&UNK_1106aff78,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  uVar2 = param_11;
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_1);
  uVar3 = param_3;
  FUN_103941cf0(param_3,param_4,param_5,param_6,param_7,param_8,0x1039421d8,puVar1,param_10,param_11
               );
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103941fdc; end: 103942007; -[_TtC22ShortcutsCarouselScope30ShortcutsCarouselScopeServices init] */

void FUN_103941fdc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShortcutsCarouselScope.ShortcutsCarouselScopeServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103942008);
  (*pcVar1)();
}



/* Entry: 103942008; end: 10394200b;  */

void FUN_103942008(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10394200c; end: 10394203f;  */

void FUN_10394200c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103942040; end: 10394204f; -[_TtC22ShortcutsCarouselScope30ShortcutsCarouselScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103942040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb4b08));
  return;
}



/* Entry: 103942050; end: 10394218b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103942050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar3 = _DAT_112fb4ad0;
  func_0x000107c61614(unaff_x20 + _DAT_112fb4ad0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fb4ab8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4ac0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4ac8) = param_3;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112fb4ad8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4ae0) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fb4ae8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4af0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4af8) = param_10;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar2);
  return;
}



/* Entry: 10394218c; end: 1039421af;  */

undefined8 FUN_10394218c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1039421b0; end: 103942207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039421b0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034a870();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb4b08) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103942208; end: 1039422db;  */

void FUN_103942208(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039422dc; end: 1039422fb;  */

void FUN_1039422dc(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1039422fc; end: 10394236f; -[SCShortcutsCarouselAction description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039422fc(long param_1)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + _DAT_112fb4b78);
  if (bVar1 < 5) {
    if ((3 < bVar1 - 1) && (*(long *)(param_1 + _DAT_112fb4b80 + 8) == 0)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103942334);
      (*pcVar2)();
    }
  }
  else if ((bVar1 == 5) && (*(long *)(param_1 + _DAT_112fb4b88 + 8) == 0)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103942370);
    (*pcVar2)();
  }
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103942370; end: 10394248b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103942370(long param_1)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)(param_1 + _DAT_112fb4b78);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      lVar3 = ((undefined8 *)(param_1 + _DAT_112fb4b80))[1];
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103942488);
        (*pcVar2)();
      }
      uVar4 = *(undefined8 *)(param_1 + _DAT_112fb4b80);
      func_0x000107c61434(lVar3);
    }
    else if (bVar1 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else if (bVar1 < 5) {
    if (bVar1 == 3) {
      uVar4 = 2;
    }
    else {
      uVar4 = 3;
    }
  }
  else if (bVar1 == 5) {
    lVar3 = ((undefined8 *)(param_1 + _DAT_112fb4b88))[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10394248c);
      (*pcVar2)();
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_112fb4b88);
    func_0x000107c61434(lVar3);
  }
  else {
    uVar4 = 4;
  }
  func_0x000107c61170(param_1);
  return uVar4;
}



/* Entry: 10394248c; end: 1039424d3; -[SCShortcutsCarouselAction init] */

void FUN_10394248c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "ShortcutsCarouselScope/ShortcutsCarouselActionWrapper.swift",0x3b,2,0x46,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039424d4);
  (*pcVar1)();
}



/* Entry: 1039424d4; end: 1039424d7; -[SCShortcutsCarouselAction copyWithZone:] */

void FUN_1039424d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1039424d8; end: 103942563; +[SCShortcutsCarouselAction selectShortcutWithShortcutId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039424d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fb4b78) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b80);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b88);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103942564; end: 10394256b; +[SCShortcutsCarouselAction clearSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103942564(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fb4b78) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b88);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10394256c; end: 103942573; +[SCShortcutsCarouselAction resetCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394256c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fb4b78) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b88);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103942574; end: 10394257b; +[SCShortcutsCarouselAction pauseUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103942574(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fb4b78) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b88);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10394257c; end: 103942583; +[SCShortcutsCarouselAction resumeUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394257c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fb4b78) = 4;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b88);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103942584; end: 103942613; +[SCShortcutsCarouselAction startSessionWithSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103942584(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fb4b78) = 5;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b88);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103942614; end: 10394261b; +[SCShortcutsCarouselAction endSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103942614(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fb4b78) = 6;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b88);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10394261c; end: 103942763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394261c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fb4b78) = param_3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112fb4b88);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103942764; end: 103942817; -[SCShortcutsCarouselAction matchSelectShortcut:clearSelection:resetCarousel:pauseUpdates:resumeUpdates:startSession:endSession:] */

void FUN_103942764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x00010394268c(0x103942a64,auStack_40,0x103942a68,auStack_60,FUN_103942aac,auStack_80,
                      0x103942ab0,auStack_a0,0x103942ab4,auStack_c0,0x103942abc,auStack_e0,
                      0x103942ab8,auStack_100);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103942818; end: 10394284b;  */

void FUN_103942818(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10394284c; end: 10394288b; -[SCShortcutsCarouselAction .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010394286c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103942870) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394284c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fb4b80 + 8))
  ;
  return;
}



/* Entry: 10394288c; end: 1039428ab;  */

void FUN_10394288c(void)

{
  func_0x000107c61168(&PTR_PTR_112904620);
  return;
}



/* Entry: 1039428ac; end: 103942a13;  */

int FUN_1039428ac(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103942928;
        goto LAB_10394290c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10394290c:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_103942928:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103942a14; end: 103942a53;  */

void FUN_103942a14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb4bb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc27860;
  func_0x000107c61520(&UNK_10dc27860,&UNK_1106b0070);
  puRam0000000112fb4bb8 = puVar1;
  return;
}



/* Entry: 103942a54; end: 103942a73;  */

ulong FUN_103942a54(ulong param_1)

{
  if (6 < param_1) {
    param_1 = 7;
  }
  return param_1;
}


