/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013474cc; end: 101347513; -[_TtC16SCSnapEditorImpl24SnapEditorViewController dealloc] */

void FUN_1013474cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x00010134a964();
  puVar1 = PTR_s_dealloc_112525b20;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  return;
}



/* Entry: 101347514; end: 10134757b; -[_TtC16SCSnapEditorImpl24SnapEditorViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101347514(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d74dd0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74de0));
  func_0x00010134ca68(param_1 + _DAT_112d74df0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d74df8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112d74e00);
  return;
}



/* Entry: 10134757c; end: 1013475a3; -[_TtC16SCSnapEditorImpl24SnapEditorViewController initWithCoder:] */

void FUN_10134757c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10134c5c4();
  return;
}



/* Entry: 1013475a4; end: 10134772b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013475a4(code *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  
  lVar1 = _DAT_112d74de0;
  lVar7 = *(long *)(unaff_x20 + _DAT_112d74de0);
  if (lVar7 == 0) {
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d74e00);
    func_0x000107c61618();
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar4 = *puVar3;
      puStack_70 = puVar2;
      func_0x000107c61174(uVar4);
      func_0x0001000b0da8(0xd000000000000025,0x800000010ef38280,FUN_10134c92c,&puStack_80);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(uVar4);
    }
    lVar7 = *(long *)(unaff_x20 + lVar1);
    if (lVar7 == 0) {
      if (param_1 == (code *)0x0) {
        return;
      }
      (*param_1)();
      return;
    }
  }
  puVar5 = &UNK_1103a5a80;
  func_0x000107c613fc(&UNK_1103a5a80,0x20,7);
  *(code **)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = (undefined8 *)&UNK_1000f6b44;
  ppuVar6 = &puStack_80;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61174(lVar7);
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c61574(puVar5);
  func_0x000107c5e078(lVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(lVar7);
  return;
}



/* Entry: 10134772c; end: 101347883; -[_TtC16SCSnapEditorImpl24SnapEditorViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134772c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x00010134a964();
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  lVar2 = *(long *)(param_1 + _DAT_112d74de0);
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000107c5a378();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101347884; end: 1013478b3; -[_TtC16SCSnapEditorImpl24SnapEditorViewController viewDidAppear:] */

void FUN_101347884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x0001013477b8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013478b4; end: 101348a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013478b4(long param_1,undefined *param_2)

{
  code cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  code *pcVar19;
  code *pcVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined **ppuVar25;
  undefined1 auStack_290 [16];
  undefined *puStack_280;
  char *pcStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  code *pcStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined8 *puStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  char cStack_c0;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lStack_1d0 = *(long *)(lVar2 + -8);
  lStack_1c8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1d0 + 0x40));
  lVar18 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_1d8 = (long)&puStack_280 + lVar18;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = 0x7373655370616e73;
  *(undefined8 *)(lVar2 + 0x28) = 0xed000064496e6f69;
  puVar4 = PTR___sSSN_11034da80;
  pcVar19 = *(code **)(param_1 + _DAT_112d74bb0);
  uVar16 = *(undefined8 *)(pcVar19 + _DAT_11302bae0);
  uVar21 = *(undefined8 *)(pcVar19 + _DAT_11302bae0 + 8);
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = uVar16;
  *(undefined8 *)(lVar2 + 0x38) = uVar21;
  func_0x000107c61434();
  lVar12 = lVar2;
  func_0x000100214a84();
  func_0x000107c61588(lVar2);
  puVar15 = (undefined *)0x112d4b5f0;
  FUN_10134c99c((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  lVar2 = _DAT_11302baf0;
  lVar3 = *(long *)(pcVar19 + _DAT_11302baf0);
  lStack_e8 = lVar12;
  if (lVar3 != 0) {
    func_0x000107c3f144();
    func_0x000107c3116c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      puStack_d8 = (undefined *)0x0;
      lStack_e0 = 0;
      puStack_c8 = (undefined *)0x0;
      uStack_d0 = 0;
      puVar15 = (undefined *)0x112d387f8;
      FUN_10134c99c(&lStack_e0,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(&puStack_170,0x6f4d6172656d6163,0xea00000000006564);
      FUN_10134c99c(&puStack_170,0x112d387f8,&UNK_10d902650);
      lVar2 = *(long *)(pcVar19 + lVar2);
    }
    else {
      lVar22 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      uStack_d0 = 0;
      puStack_c8 = puVar4;
      lStack_e0 = lVar22;
      puStack_d8 = puVar15;
      func_0x000100102924(&lStack_e0,&puStack_170);
      lVar3 = lVar12;
      func_0x000107c61558(lVar12);
      puVar15 = (undefined *)0x6f4d6172656d6163;
      lStack_e0 = lVar12;
      func_0x0001001029e8(&puStack_170,0x6f4d6172656d6163,0xea00000000006564,lVar3);
      lVar2 = *(long *)(pcVar19 + lVar2);
      lStack_e8 = lStack_e0;
    }
    if (lVar2 != 0) {
      func_0x000107c3d0f8();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar12 = lVar2;
        func_0x000107c5fc54();
        func_0x000107c61170(lVar2);
        puVar15 = (undefined *)0x112d38270;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        lStack_e0 = lVar12;
        puStack_c8 = puVar15;
        if (puVar15 == (undefined *)0x0) {
          puVar15 = (undefined *)0x112d387f8;
          FUN_10134c99c(&lStack_e0,0x112d387f8,&UNK_10d902650);
          func_0x000100216878(&puStack_170,0xd000000000000011,0x800000010ef38320);
          FUN_10134c99c(&puStack_170,0x112d387f8,&UNK_10d902650);
        }
        else {
          func_0x000100102924(&lStack_e0,&puStack_170);
          lVar2 = lStack_e8;
          lVar12 = lStack_e8;
          func_0x000107c61558(lStack_e8);
          lStack_e0 = lVar2;
          puVar15 = (undefined *)0xd000000000000011;
          func_0x0001001029e8(&puStack_170,0xd000000000000011,0x800000010ef38320,lVar12);
          lStack_e8 = lStack_e0;
        }
      }
    }
  }
  pcVar20 = pcVar19;
  puStack_1c0 = param_2;
  FUN_101349bf4();
  lVar2 = _DAT_113812270;
  lVar22 = *(long *)(pcVar19 + _DAT_113812270);
  lVar24 = *(long *)(param_1 + _DAT_112d74bc0);
  lVar12 = lVar24;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar3 = lVar12;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  if (lVar3 != 0) {
    lVar12 = lVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar12 != 0) {
      lVar3 = *(long *)(param_1 + _DAT_112d74bf0);
      lStack_1f8 = lVar24;
      func_0x000107c42d48();
      func_0x000107c61180();
      lVar24 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lStack_e8;
      lStack_1e8 = lVar24;
      if (lVar24 == 0) {
        func_0x000100ba52d8(pcVar20,puVar15);
        func_0x000107c615e8(lVar12);
        goto LAB_101347d54;
      }
      lStack_210 = _DAT_11302bad8;
      uVar16 = *(undefined8 *)(pcVar19 + _DAT_11302bad8);
      lStack_1f0 = lVar12;
      func_0x000107c615f0(uVar16);
      func_0x000107c5f9dc(lVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                          PTR___sSSSHsWP_11034da90);
      lStack_208 = param_1;
      pcStack_1e0 = pcVar20;
      if ((puStack_1c0[_DAT_112d74e10] & 1) != 0) {
        func_0x000107c3e6d4(*(undefined8 *)(*(long *)(param_1 + _DAT_112d74bc8) + _DAT_113077160));
      }
      puVar4 = &UNK_1103a58a0;
      func_0x000107c613fc(&UNK_1103a58a0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,puStack_1c0);
      puVar14 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_150 = (code *)0x10134c934;
      puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_168 = 0x42000000;
      pcStack_160 = (code *)&UNK_1000f6b44;
      puStack_158 = (undefined8 *)&UNK_1103a5ac0;
      ppuVar5 = &puStack_170;
      puStack_148 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_148);
      puStack_200 = puVar15;
      if (pcStack_1e0 == (code *)0x0) {
        ppuVar25 = (undefined **)0x0;
      }
      else {
        pcStack_150 = pcStack_1e0;
        puStack_170 = puVar14;
        uStack_168 = 0x42000000;
        pcStack_160 = (code *)0x100f11710;
        puStack_158 = (undefined8 *)&UNK_1103a5b88;
        ppuVar25 = &puStack_170;
        puStack_148 = puVar15;
        func_0x000107c60bc4(ppuVar25);
        puVar4 = puStack_148;
        func_0x000107c6157c(puVar15);
        func_0x000107c61574(puVar4);
      }
      cVar1 = pcVar19[_DAT_11302bb00];
      auStack_290[lVar18 + 1] = lVar22 != 0;
      auStack_290[lVar18] = cVar1;
      lVar22 = lStack_1e8;
      lVar12 = lStack_1f0;
      lVar24 = lStack_1e8;
      func_0x000107c40c2c();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar25);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(uVar16);
      func_0x000107c61170(lVar3);
      lVar18 = lStack_208;
      if (lVar24 == 0) {
        func_0x000100ba52d8(pcStack_1e0,puStack_200);
        func_0x000107c615e8(lVar12);
        func_0x000107c615e8(lVar22);
        goto LAB_101347d54;
      }
      lVar3 = *(long *)(lStack_208 + _DAT_112d74c28);
      func_0x000107c3ff98();
      func_0x000107c61180();
      lVar12 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      pcVar20 = pcStack_1e0;
      if (lVar12 != 0) {
        lVar3 = lStack_1f8;
        func_0x000107c5dbd4(lStack_1f8);
        func_0x000107c61180();
        lVar22 = lVar12;
        func_0x000107c40998();
        func_0x000107c61180();
        func_0x000107c615e8(lVar12);
        func_0x000107c61170(lVar3);
        lStack_218 = lVar22;
        if (lVar22 != 0) {
          lVar3 = *(long *)(lVar18 + _DAT_112d74bb8);
          lStack_258 = lVar3;
          func_0x000107c3dae4();
          func_0x000107c61180();
          lVar12 = lVar3;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          if (lVar12 == 0) {
            lStack_220 = 0;
            puVar15 = puStack_1c0;
          }
          else {
            puVar4 = PTR_PTR_1126aead8;
            func_0x000107c610f8(PTR_PTR_1126aead8);
            puVar15 = puStack_1c0;
            func_0x000107c4807c();
            lVar3 = lVar12;
            func_0x000107c4c1e0();
            func_0x000107c61180();
            lStack_220 = lVar3;
            func_0x000107c615e8(lVar12);
            func_0x000107c61170(puVar4);
          }
          puVar4 = &UNK_1103a5af8;
          func_0x000107c613fc(&UNK_1103a5af8,0x18,7);
          *(undefined **)(puVar4 + 0x10) = puVar15;
          puStack_240 = puVar4;
          func_0x000107c61174();
          puVar4 = puVar15;
          FUN_101348a64();
          puVar6 = PTR_PTR_1126a6b18;
          puStack_228 = puVar4;
          func_0x000107c610f8();
          func_0x000107c45f60();
          lStack_238 = lVar24;
          func_0x000107c56984();
          func_0x000107c553e0(puVar6);
          func_0x00010134ca8c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          uVar7 = (ulong)(byte)pcVar19[_DAT_11302bb38];
          func_0x000107c6010c(uVar7);
          func_0x000107c556ec(puVar6);
          func_0x000107c61170(uVar7);
          uVar7 = (ulong)(*(long *)(pcVar19 + lVar2) != 0);
          func_0x000107c6010c(uVar7);
          func_0x000107c557b8(puVar6);
          func_0x000107c61170(uVar7);
          FUN_10134c6bc(&lStack_e0,pcVar19);
          puVar14 = puStack_c8;
          uVar16 = uStack_d0;
          puVar4 = puStack_d8;
          lVar2 = lStack_e0;
          if (cStack_c0 != '\x01') {
            lVar12 = lStack_e0;
            func_0x000107c609cc(lStack_e0,puStack_d8,uStack_d0,puStack_c8);
            lVar3 = lVar2;
            func_0x000107c609b0(lVar2,puVar4,uVar16,puVar14);
            puVar8 = PTR_PTR_1126c49d8;
            func_0x000107c610f8(PTR_PTR_1126c49d8);
            func_0x000107c495d0(lVar12,lVar3);
            func_0x000107c57d0c(puVar6);
            func_0x000107c61170(puVar8);
            func_0x000107c609c8(lVar2,puVar4,uVar16,puVar14);
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c466c0(lVar2);
            func_0x000107c574fc(puVar6);
            func_0x000107c61170(puVar4);
          }
          puVar9 = (undefined8 *)PTR_PTR_1126a6b20;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar10 = puVar9;
          func_0x0001000298f0();
          func_0x000107c61428();
          uVar16 = *puVar10;
          pcStack_160 = (code *)puVar15;
          puStack_158 = puVar9;
          func_0x000107c61174(uVar16);
          func_0x0001000b0da8(0xd000000000000041,0x800000010ef382b0,0x10134c944,&puStack_170);
          func_0x000107c61170(uVar16);
          puStack_250 = puVar9;
          func_0x000107c5753c(puVar6);
          lVar3 = 0;
          FUN_101343f7c();
          lVar12 = lVar3;
          func_0x000107c610f8();
          lVar2 = lVar12 + _DAT_112d74b60;
          *(undefined8 *)(lVar2 + 8) = 0;
          func_0x000107c61614(lVar2,0);
          *(undefined ***)(lVar2 + 8) = &PTR_DAT_1103a57d8;
          puStack_248 = puVar15;
          func_0x000107c61604();
          plVar11 = &lStack_198;
          lStack_198 = lVar12;
          lStack_190 = lVar3;
          func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
          func_0x000107c52168(puVar6);
          func_0x000107c61170(plVar11);
          uVar23 = *(undefined8 *)(lVar18 + _DAT_112d74be8);
          uVar16 = *(undefined8 *)(lVar18 + _DAT_112d74bf8);
          uVar21 = *(undefined8 *)(lVar18 + _DAT_112d74bd8);
          lVar12 = 0;
          FUN_101347164();
          lVar2 = lVar12;
          puStack_1c0 = puVar6;
          func_0x000107c610f8();
          *(undefined8 *)(lVar2 + _DAT_112d74d90) = uVar16;
          *(undefined8 *)(lVar2 + _DAT_112d74d98) = uVar21;
          puVar15 = PTR_s_init_1125d9248;
          lStack_1a8 = lVar2;
          lStack_1a0 = lVar12;
          func_0x000107c61174(uVar16);
          func_0x000107c61174(uVar21);
          plVar11 = &lStack_1a8;
          func_0x000107c61154(plVar11,puVar15);
          func_0x0001000285a8(0x112d74e70,&UNK_10d9354c8);
          uVar16 = *(undefined8 *)(lVar18 + _DAT_112d74c40);
          func_0x000107c5de34();
          func_0x000107c61180();
          uVar21 = uVar16;
          func_0x0001000bda74();
          func_0x000107c61170(uVar16);
          uStack_230 = *(undefined8 *)(pcVar19 + lStack_210);
          uVar17 = *(undefined8 *)(lVar18 + _DAT_112d74c48);
          func_0x000107c615f0();
          func_0x000107c5da1c();
          func_0x000107c61180();
          lVar22 = 0;
          uStack_268 = uVar17;
          FUN_10134162c();
          lStack_260 = lVar22;
          func_0x000107c610f8();
          lVar2 = _DAT_112d74a58;
          puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
          FUN_10134c2d0();
          lVar3 = lStack_1c8;
          lVar12 = lStack_1d0;
          lVar18 = lStack_1d8;
          uVar16 = uStack_230;
          *(undefined **)(lVar22 + lVar2) = puVar15;
          puVar9 = (undefined8 *)(lVar22 + _DAT_112d74a60);
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined8 *)(lVar22 + _DAT_112d74a28) = uVar23;
          *(long **)(lVar22 + _DAT_112d74a30) = plVar11;
          *(undefined8 *)(lVar22 + _DAT_112d74a38) = uVar21;
          *(undefined8 *)(lVar22 + _DAT_112d74a40) = uStack_230;
          *(undefined8 *)(lVar22 + _DAT_112d74a48) = uVar17;
          pcStack_278 = "ugin dependencies";
          (**(code **)(lStack_1d0 + 0x68))
                    (lStack_1d8,
                     *(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lStack_1c8)
          ;
          puVar15 = PTR_PTR_1126ae790;
          func_0x000107c610f8();
          puStack_280 = puVar15;
          func_0x000107c615f0(uVar16);
          func_0x000107c61174(uVar23);
          func_0x000107c61174();
          plStack_270 = plVar11;
          func_0x000107c6157c(uVar21);
          func_0x000107c61174();
          uVar16 = 0xd000000000000012;
          func_0x000107c5fadc(0xd000000000000012,(ulong)pcStack_278 | 0x8000000000000000);
          func_0x000107c5f800();
          puVar15 = puStack_280;
          func_0x000107c470d0();
          lVar2 = lStack_208;
          func_0x000107c61170(uVar16);
          (**(code **)(lVar12 + 8))(lVar18,lVar3);
          *(undefined **)(lVar22 + _DAT_112d74a50) = puVar15;
          lStack_1b0 = lStack_260;
          plVar11 = &lStack_1b8;
          lStack_1b8 = lVar22;
          func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
          func_0x000107c61170(plStack_270);
          func_0x000107c61574(uVar21);
          func_0x000107c615e8(uStack_230);
          func_0x000107c61170(uStack_268);
          func_0x000107c59370(puStack_1c0);
          func_0x000107c61170(plVar11);
          func_0x000107c52604(puStack_1c0);
          func_0x000107c56a00(puStack_1c0);
          uVar21 = *(undefined8 *)(pcVar19 + _DAT_11302bac0);
          func_0x000107c615f0(uVar21);
          lVar18 = lStack_1f8;
          lVar12 = lStack_1f8;
          func_0x000107c5dbd4(lStack_1f8);
          func_0x000107c61180();
          uVar16 = uVar21;
          func_0x000107c40978(uVar21);
          func_0x000107c61180();
          func_0x000107c615e8(uVar21);
          func_0x000107c61170(lVar12);
          func_0x000107c53e94(puStack_1c0);
          puVar15 = puStack_1c0;
          func_0x000107c615e8(uVar16);
          uVar16 = *(undefined8 *)(lVar2 + _DAT_112d74c68);
          func_0x000107c5dbd4(lVar18);
          func_0x000107c61180();
          func_0x000107c40974();
          func_0x000107c61180();
          func_0x000107c61170(lVar18);
          func_0x000107c593a4(puVar15);
          func_0x000107c615e8(uVar16);
          lVar18 = *(long *)(*(long *)(lVar2 + _DAT_112d74c20) + _DAT_11303f608);
          puVar4 = (undefined *)0x0;
          if (lVar18 != 0) {
            func_0x000107c6157c(lVar18);
            func_0x0001000d224c(&puStack_170);
            func_0x000107c61574(lVar18);
            puVar4 = puStack_170;
          }
          func_0x000107c59ac4(puVar15);
          func_0x000107c615e8(puVar4);
          lVar18 = lStack_258;
          func_0x000107c4d814();
          func_0x000107c61180();
          lVar12 = lVar18;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar18);
          if (lVar12 == 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = lVar12;
            func_0x000107c4c1dc(lVar12);
            func_0x000107c61180();
            func_0x000107c615e8(lVar12);
          }
          func_0x000107c56b20(puVar15);
          func_0x000107c615e8(lVar18);
          FUN_10134c94c(*(long *)(lVar2 + _DAT_112d74bd0) + _DAT_113043c88,&puStack_170);
          pcVar20 = pcStack_150;
          func_0x00010134c9fc(&puStack_170,puStack_158);
          lVar18 = lStack_210;
          uVar21 = *(undefined8 *)(pcVar19 + lStack_210);
          pcVar20 = *(code **)(pcVar20 + 8);
          uVar16 = uVar21;
          func_0x000107c615f0(uVar21);
          (*pcVar20)();
          func_0x000107c615e8(uVar21);
          func_0x000107c5644c(puVar15);
          func_0x000107c615e8(uVar16);
          func_0x00010134c9dc(&puStack_170);
          uVar21 = *(undefined8 *)(lVar2 + _DAT_112d74c30);
          func_0x000107c4ec80(uVar21);
          func_0x000107c61180();
          lVar2 = *(long *)(pcVar19 + _DAT_11302baa8);
          uVar16 = 0;
          FUN_10134676c(0);
          func_0x000107c610f8();
          FUN_10134649c(uVar21,lVar2 == 8,uVar16);
          func_0x000107c59448(puVar15);
          func_0x000107c61170(uVar21);
          puVar13 = PTR_PTR_1126a6b28;
          func_0x000107c610f8();
          lVar2 = lStack_1f0;
          func_0x000107c49520();
          puVar14 = puStack_248;
          uVar16 = *(undefined8 *)(puStack_248 + _DAT_112d74de0);
          *(undefined **)(puStack_248 + _DAT_112d74de0) = puVar13;
          func_0x000107c61174();
          func_0x000107c61170(uVar16);
          FUN_101349918(puVar13);
          puVar6 = PTR___NSConcreteStackBlock_11034bd00;
          uVar21 = *(undefined8 *)(pcVar19 + lVar18);
          pcStack_150 = FUN_101349004;
          puStack_148 = (undefined *)0x0;
          puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_168 = 0x42000000;
          pcStack_160 = FUN_101349054;
          puStack_158 = (undefined8 *)&UNK_1103a5b10;
          ppuVar5 = &puStack_170;
          func_0x000107c60bc4(ppuVar5);
          puVar4 = puStack_148;
          func_0x000107c615f0(uVar21);
          func_0x000107c61574(puVar4);
          uVar16 = uVar21;
          func_0x000107c5e068(uVar21);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar5);
          func_0x000107c615e8(uVar21);
          puVar4 = &UNK_1103a58a0;
          func_0x000107c613fc(&UNK_1103a58a0,0x18,7);
          func_0x000107c61614(puVar4 + 0x10,puVar14);
          puVar14 = &UNK_1103a5b48;
          func_0x000107c613fc(&UNK_1103a5b48,0x28,7);
          puVar8 = puStack_240;
          *(undefined **)(puVar14 + 0x10) = puVar4;
          *(undefined8 *)(puVar14 + 0x18) = 0x10134c93c;
          *(undefined **)(puVar14 + 0x20) = puStack_240;
          pcStack_150 = FUN_10134c990;
          puStack_170 = puVar6;
          uStack_168 = 0x42000000;
          pcStack_160 = FUN_1011b0640;
          puStack_158 = (undefined8 *)&UNK_1103a5b60;
          ppuVar5 = &puStack_170;
          puStack_148 = puVar14;
          func_0x000107c60bc4(ppuVar5);
          puVar4 = puStack_148;
          func_0x000107c6157c(puVar8);
          func_0x000107c61574(puVar4);
          func_0x000107c5dc64(uVar16);
          func_0x000107c615e8(lVar2);
          func_0x000100ba52d8(pcStack_1e0,puStack_200);
          func_0x000107c615e8(lStack_1e8);
          func_0x000107c61170(puVar13);
          func_0x000107c615e8(lStack_220);
          func_0x000107c61170(uVar16);
          func_0x000107c61170(puVar15);
          func_0x000107c61170(puStack_228);
          func_0x000107c615e8(lStack_218);
          func_0x000107c61170(puStack_250);
          func_0x000107c61574(puVar8);
          func_0x000107c61170(lStack_238);
          func_0x000107c60bd0(ppuVar5);
          goto LAB_101347d54;
        }
      }
      func_0x000107c61170(lVar24);
      func_0x000107c615e8(lStack_1f0);
      func_0x000107c615e8(lStack_1e8);
      puVar15 = puStack_200;
    }
  }
  func_0x000100ba52d8(pcVar20,puVar15);
LAB_101347d54:
  func_0x000107c6142c(lStack_e8);
  return;
}



/* Entry: 101348a10; end: 101348a63;  */

void FUN_101348a10(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10134a254();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101348a64; end: 101348d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101348a64(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_PTR_1126a6b30;
  func_0x000107c610f8(PTR_PTR_1126a6b30);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126a6b38;
  func_0x000107c610f8(PTR_PTR_1126a6b38);
  func_0x000107c453e4();
  lVar1 = _DAT_112d74e00;
  lVar4 = param_1 + _DAT_112d74e00;
  func_0x000107c61618();
  if (lVar4 == 0) {
    uVar8 = 0;
    uVar9 = 0xe000000000000000;
  }
  else {
    lVar7 = *(long *)(lVar4 + _DAT_112d74bb0);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    uVar8 = *(undefined8 *)(lVar7 + _DAT_11302bae0);
    uVar9 = ((undefined8 *)(lVar7 + _DAT_11302bae0))[1];
    func_0x000107c61434(uVar9);
    func_0x000107c61170(lVar7);
  }
  func_0x000107c5fadc(uVar8,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c59478(puVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c566b8(puVar2);
  lVar4 = param_1 + lVar1;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar8 = *(undefined8 *)(lVar4 + _DAT_112d74bb0);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar8);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c55af8(puVar2);
  func_0x000107c61170(puVar5);
  lVar4 = param_1 + lVar1;
  func_0x000107c61618();
  if (lVar4 == 0) {
    uVar8 = 0;
  }
  else {
    lVar7 = *(long *)(lVar4 + _DAT_112d74bb0);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    uVar8 = *(undefined8 *)(lVar7 + _DAT_11302bb20);
    func_0x000107c61174(uVar8);
    func_0x000107c61170(lVar7);
  }
  func_0x000107c543e4(puVar2);
  func_0x000107c61170(uVar8);
  lVar4 = param_1 + lVar1;
  func_0x000107c61618();
  if (lVar4 == 0) {
    uVar8 = 0;
  }
  else {
    lVar7 = *(long *)(lVar4 + _DAT_112d74bb0);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    uVar8 = *(undefined8 *)(lVar7 + _DAT_11302bb28);
    func_0x000107c61174(uVar8);
    func_0x000107c61170(lVar7);
  }
  func_0x000107c59dcc(puVar2);
  func_0x000107c61170(uVar8);
  func_0x00010134ca8c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = (ulong)*(byte *)(param_1 + _DAT_112d74e18);
  func_0x000107c6010c(uVar6);
  func_0x000107c59da0(puVar2);
  func_0x000107c61170(uVar6);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar8 = *(undefined8 *)(param_1 + _DAT_112d74bb0);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar8);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c52150(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  return puVar2;
}



/* Entry: 101348d70; end: 101348e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101348d70(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112d74dd0);
  if (uVar2 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar3 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101348e54);
      (*pcVar1)();
    }
    func_0x000107c61434(uVar2);
    uVar4 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar2 + uVar4 * 8 + 0x20);
        func_0x000107c615f0(uVar5);
      }
      else {
        uVar5 = uVar4;
        FUN_10134ba64(uVar4,uVar2);
      }
      uVar4 = uVar4 + 1;
      func_0x000107c4eb54(uVar5);
      func_0x000107c615e8(uVar5);
    } while (uVar3 != uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
  return;
}



/* Entry: 101348e54; end: 101349003;  */

void FUN_101348e54(ulong param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  uStack_40 = 0x101348f78;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100ff0b04;
  puStack_48 = &UNK_1103a5bb0;
  func_0x000107c60bc4(&puStack_60);
  uVar4 = param_1;
  func_0x000107c4e91c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar1);
  if (uVar4 != 0) {
    uVar2 = 0;
    func_0x00010134ca8c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
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
  if ((0 < (long)uVar4) && (uVar4 == uVar3)) {
    func_0x000107c5b198(param_1);
    func_0x000107c61180();
  }
  return;
}



/* Entry: 101349004; end: 101349053;  */

void FUN_101349004(long *param_1,long param_2)

{
  long lVar1;
  
  FUN_101348e54();
  if (param_2 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    func_0x00010134ca8c(0,0x112d50c78,&PTR_PTR_1126b25c0);
  }
  *param_1 = param_2;
  param_1[3] = lVar1;
  return;
}



/* Entry: 101349054; end: 101349143;  */

void FUN_101349054(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)(auStack_60);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
  if (lStack_48 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x00010134c9fc(auStack_60,lStack_48);
    lVar5 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lStack_48);
    (**(code **)(lVar5 + 8))(puVar4,lStack_48);
    func_0x00010134c9dc(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 101349144; end: 101349387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101349144(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    return;
  }
  if (param_1 == 0) {
LAB_101349364:
    func_0x000107c61170();
  }
  else {
    func_0x000107c615f0(param_1);
    puVar1 = PTR_PTR_1126b25c0;
    func_0x000107c61168(PTR_PTR_1126b25c0);
    lVar2 = param_1;
    func_0x000107c6148c(param_1,puVar1);
    if (lVar2 != 0) {
      func_0x000107c41214();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar2);
        (*param_4)();
        lVar7 = 0x112d54e00;
        FUN_10134b954(0x112d54e00,&PTR_PTR_1126bcf68,0x112d74e78,&UNK_10db629f0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar7 + 0x18) = 3;
        *(undefined8 *)(lVar7 + 0x10) = 1;
        puVar4 = PTR_PTR_1126bcf68;
        func_0x000107c610f8();
        func_0x00010006c00c(lVar3,puVar1);
        lVar5 = lVar3;
        func_0x000107c5ee20(lVar3,puVar1);
        func_0x000107c45ae0();
        func_0x000107c61170(lVar5);
        func_0x00010006c090(lVar3,puVar1);
        *(undefined **)(lVar7 + 0x20) = puVar4;
        uVar6 = 0;
        func_0x00010134ca8c(0,0x112d54e00,&PTR_PTR_1126bcf68);
        lVar5 = lVar7;
        func_0x000107c5fc48(lVar7,uVar6);
        func_0x000107c61574(lVar7);
        func_0x000107c569ac(lVar2);
        func_0x000107c61170(lVar5);
        lVar7 = *(long *)(param_3 + _DAT_112d74de0);
        if (lVar7 == 0) {
          func_0x00010006c090(lVar3,puVar1);
          func_0x000107c615e8(param_1);
        }
        else {
          func_0x000107c61174();
          func_0x000107c61174(lVar2);
          func_0x000107c5a588(lVar7);
          func_0x00010006c090(lVar3,puVar1);
          func_0x000107c61170(lVar7);
          func_0x000107c615e8(param_1);
          func_0x000107c61170(param_3);
          param_3 = lVar2;
        }
        func_0x000107c61170(param_3);
        goto LAB_101349364;
      }
    }
    func_0x000107c61170(param_3);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 101349388; end: 101349917;  */

/* WARNING: Possible PIC construction at 0x000101349468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013494a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010134962c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013496bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013497e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013498ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013498bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013499fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010134967c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101349b80) */
/* WARNING: Removing unreachable block (ram,0x000101349b60) */
/* WARNING: Removing unreachable block (ram,0x000101349b00) */
/* WARNING: Removing unreachable block (ram,0x000101349bf0) */
/* WARNING: Removing unreachable block (ram,0x000101349b34) */
/* WARNING: Removing unreachable block (ram,0x000101349ae0) */
/* WARNING: Removing unreachable block (ram,0x000101349a90) */
/* WARNING: Removing unreachable block (ram,0x000101349bec) */
/* WARNING: Removing unreachable block (ram,0x000101349ac4) */
/* WARNING: Removing unreachable block (ram,0x000101349a70) */
/* WARNING: Removing unreachable block (ram,0x000101349a20) */
/* WARNING: Removing unreachable block (ram,0x000101349be8) */
/* WARNING: Removing unreachable block (ram,0x000101349a54) */
/* WARNING: Removing unreachable block (ram,0x000101349a00) */
/* WARNING: Removing unreachable block (ram,0x000101349968) */
/* WARNING: Removing unreachable block (ram,0x000101349be4) */
/* WARNING: Removing unreachable block (ram,0x0001013499e4) */
/* WARNING: Removing unreachable block (ram,0x0001013498b0) */
/* WARNING: Removing unreachable block (ram,0x00010134989c) */
/* WARNING: Removing unreachable block (ram,0x000101349838) */
/* WARNING: Removing unreachable block (ram,0x00010134980c) */
/* WARNING: Removing unreachable block (ram,0x000101349884) */
/* WARNING: Removing unreachable block (ram,0x000101349888) */
/* WARNING: Removing unreachable block (ram,0x000101349820) */
/* WARNING: Removing unreachable block (ram,0x0001013497e4) */
/* WARNING: Removing unreachable block (ram,0x00010134978c) */
/* WARNING: Removing unreachable block (ram,0x0001013496c0) */
/* WARNING: Removing unreachable block (ram,0x0001013498fc) */
/* WARNING: Removing unreachable block (ram,0x0001013496e0) */
/* WARNING: Removing unreachable block (ram,0x0001013496ec) */
/* WARNING: Removing unreachable block (ram,0x0001013496f0) */
/* WARNING: Removing unreachable block (ram,0x000101349900) */
/* WARNING: Removing unreachable block (ram,0x0001013496f4) */
/* WARNING: Removing unreachable block (ram,0x0001013496fc) */
/* WARNING: Removing unreachable block (ram,0x000101349700) */
/* WARNING: Removing unreachable block (ram,0x000101349904) */
/* WARNING: Removing unreachable block (ram,0x000101349704) */
/* WARNING: Removing unreachable block (ram,0x000101349908) */
/* WARNING: Removing unreachable block (ram,0x000101349724) */
/* WARNING: Removing unreachable block (ram,0x000101349730) */
/* WARNING: Removing unreachable block (ram,0x000101349734) */
/* WARNING: Removing unreachable block (ram,0x00010134990c) */
/* WARNING: Removing unreachable block (ram,0x000101349738) */
/* WARNING: Removing unreachable block (ram,0x000101349740) */
/* WARNING: Removing unreachable block (ram,0x000101349744) */
/* WARNING: Removing unreachable block (ram,0x000101349910) */
/* WARNING: Removing unreachable block (ram,0x000101349748) */
/* WARNING: Removing unreachable block (ram,0x000101349630) */
/* WARNING: Removing unreachable block (ram,0x000101349660) */
/* WARNING: Removing unreachable block (ram,0x000101349664) */
/* WARNING: Removing unreachable block (ram,0x00010134960c) */
/* WARNING: Removing unreachable block (ram,0x00010134966c) */
/* WARNING: Removing unreachable block (ram,0x000101349618) */
/* WARNING: Removing unreachable block (ram,0x000101349504) */
/* WARNING: Removing unreachable block (ram,0x0001013494a8) */
/* WARNING: Removing unreachable block (ram,0x000101349548) */
/* WARNING: Removing unreachable block (ram,0x000101349550) */
/* WARNING: Removing unreachable block (ram,0x0001013494ec) */
/* WARNING: Removing unreachable block (ram,0x00010134946c) */
/* WARNING: Removing unreachable block (ram,0x000101349680) */
/* WARNING: Removing unreachable block (ram,0x000101349698) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101349388(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long extraout_x8;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long alStack_140 [10];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = unaff_x20 + _DAT_112d74e00;
  func_0x000107c61618();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = unaff_x19;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
  }
  else {
    lVar4 = *(long *)(*(long *)(puVar3 + _DAT_112d74c00) + _DAT_113083868);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      uStack_d8 = param_1;
      uStack_d0 = param_2;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c453e4();
      func_0x000107c5c9e4();
      goto code_r0x000107c61170;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) goto code_r0x000107c61170;
  }
  func_0x000107c60e78();
  *(undefined8 *)((long)alStack_140 + lVar2) = unaff_x26;
  *(undefined8 *)((long)alStack_140 + lVar2 + 8) = unaff_x25;
  *(undefined8 *)((long)alStack_140 + lVar2 + 0x10) = unaff_x24;
  *(undefined8 *)((long)alStack_140 + lVar2 + 0x18) = param_1;
  *(undefined8 *)((long)alStack_140 + lVar2 + 0x20) = param_2;
  *(undefined1 **)((long)alStack_140 + lVar2 + 0x28) = auStack_f0 + lVar2;
  *(undefined **)((long)alStack_140 + lVar2 + 0x30) = unaff_x20;
  *(undefined **)((long)alStack_140 + lVar2 + 0x38) = puVar3;
  *(undefined1 **)((long)alStack_140 + lVar2 + 0x40) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_140 + lVar2 + 0x48) = FUN_101349918;
  func_0x000107c5a050();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101349be4);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  puVar3 = unaff_x20;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 101349918; end: 101349bf3;  */

/* WARNING: Possible PIC construction at 0x000101349964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013499fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101349b7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101349b60) */
/* WARNING: Removing unreachable block (ram,0x000101349b00) */
/* WARNING: Removing unreachable block (ram,0x000101349bf0) */
/* WARNING: Removing unreachable block (ram,0x000101349b34) */
/* WARNING: Removing unreachable block (ram,0x000101349ae0) */
/* WARNING: Removing unreachable block (ram,0x000101349a90) */
/* WARNING: Removing unreachable block (ram,0x000101349bec) */
/* WARNING: Removing unreachable block (ram,0x000101349ac4) */
/* WARNING: Removing unreachable block (ram,0x000101349a70) */
/* WARNING: Removing unreachable block (ram,0x000101349a20) */
/* WARNING: Removing unreachable block (ram,0x000101349be8) */
/* WARNING: Removing unreachable block (ram,0x000101349a54) */
/* WARNING: Removing unreachable block (ram,0x000101349a00) */
/* WARNING: Removing unreachable block (ram,0x000101349968) */
/* WARNING: Removing unreachable block (ram,0x000101349be4) */
/* WARNING: Removing unreachable block (ram,0x0001013499e4) */
/* WARNING: Removing unreachable block (ram,0x000101349b80) */

void FUN_101349918(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5a050(param_1,param_2,0);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101349be4);
  (*pcVar1)();
}



/* Entry: 101349bf4; end: 101349d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101349bf4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 unaff_x20;
  code *pcVar5;
  undefined *puVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c614f0();
  func_0x000107c444c4(*(undefined8 *)(param_2 + _DAT_11302bad8));
  lVar2 = _DAT_113812288;
  lVar4 = *(long *)(param_2 + _DAT_11302baf8);
  if (lVar4 == 0) {
    func_0x000107c61428(param_2 + _DAT_113812288,auStack_68,0,0);
    lVar2 = param_2 + lVar2;
    func_0x000107c61618();
    lVar1 = _DAT_113812278;
    if (lVar2 == 0) {
      func_0x000107c61428(param_2 + _DAT_113812278,auStack_80,0,0);
      param_2 = param_2 + lVar1;
      func_0x000107c61618();
      if (param_2 == 0) {
        pcVar5 = (code *)0x0;
        puVar6 = (undefined *)0x0;
        goto LAB_101349d30;
      }
      func_0x000107c61170();
    }
    puVar3 = &UNK_1103a58a0;
    func_0x000107c613fc(&UNK_1103a58a0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar6 = &UNK_1103a5968;
    func_0x000107c613fc(&UNK_1103a5968,0x30,7);
    *(undefined **)(puVar6 + 0x10) = puVar3;
    *(long *)(puVar6 + 0x18) = lVar2;
    *(undefined8 *)(puVar6 + 0x20) = param_1;
    *(undefined8 *)(puVar6 + 0x28) = unaff_x20;
    pcVar5 = FUN_10134b8fc;
  }
  else {
    puVar6 = &UNK_1103a5990;
    func_0x000107c613fc(&UNK_1103a5990,0x28,7);
    *(long *)(puVar6 + 0x10) = lVar4;
    *(undefined8 *)(puVar6 + 0x18) = param_1;
    *(undefined8 *)(puVar6 + 0x20) = unaff_x20;
    pcVar5 = (code *)0x10134b90c;
  }
LAB_101349d30:
  func_0x000107c61174(lVar4);
  auVar7._8_8_ = puVar6;
  auVar7._0_8_ = pcVar5;
  return auVar7;
}



/* Entry: 101349d68; end: 101349dd3;  */

undefined * FUN_101349d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x000107c46db4();
  func_0x000107c61180();
  FUN_10134c824(param_1,param_2);
  func_0x000107c53840(puVar1,param_3,param_2);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 101349dd4; end: 10134a1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101349dd4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    puVar7 = (undefined *)0x0;
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  }
  else {
    lVar1 = param_2 + _DAT_112d74e00;
    func_0x000107c61618();
    if (lVar1 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar6 = *(long *)(lVar1 + _DAT_112d74bb0);
      func_0x000107c61174();
      func_0x000107c61170(lVar1);
      lVar1 = _DAT_113812278;
      func_0x000107c61428(lVar6 + _DAT_113812278,auStack_80,0,0);
      puVar7 = (undefined *)(lVar6 + lVar1);
      func_0x000107c61618();
      lVar1 = _DAT_113812280;
      if (puVar7 != (undefined *)0x0) {
        func_0x000107c61428(lVar6 + _DAT_113812280,auStack_c8,0,0);
        lVar1 = lVar6 + lVar1;
        func_0x000107c61618();
        if (lVar1 != 0) {
          func_0x000107c5a050();
          func_0x000107c52ab8(lVar1);
          func_0x000107c3ec60(puVar7);
          func_0x000107c54b80(lVar1);
          func_0x000107c3d89c(puVar7);
          func_0x000107c61170(lVar1);
        }
      }
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61170(param_2);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  }
  PTR__OBJC_CLASS___UIImageView_1126aec28 = puVar2;
  if (param_3 != 0) {
    func_0x000107c610f8(puVar2);
    func_0x000107c61174(param_3);
    func_0x000107c453e4(puVar2);
    puVar3 = &UNK_1103a59b8;
    func_0x000107c613fc(&UNK_1103a59b8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,puVar2);
    puVar4 = &UNK_1103a59e0;
    func_0x000107c613fc(&UNK_1103a59e0,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_4;
    pcStack_90 = FUN_10134c8b0;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_10134a1dc;
    puStack_98 = &UNK_1103a59f8;
    ppuVar5 = &puStack_b0;
    puStack_88 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_88);
    func_0x000107c5dc64(param_3);
    func_0x000107c60bd0(ppuVar5);
    if (puVar7 == (undefined *)0x0) {
      func_0x000107c61170(param_3);
      puVar7 = puVar2;
    }
    else {
      func_0x000107c61174(puVar2);
      func_0x000107c5a050();
      func_0x000107c52ab8(puVar2);
      func_0x000107c3ec60(puVar7);
      func_0x000107c54b80(puVar2);
      func_0x000107c61170(puVar2);
      func_0x000107c3d89c(puVar7);
      func_0x000107c61170(param_3);
      func_0x000107c61170(puVar2);
    }
  }
  return puVar7;
}



/* Entry: 10134a1dc; end: 10134a253;  */

/* WARNING: Possible PIC construction at 0x00010134a238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010134a23c) */

void FUN_10134a1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10134a254; end: 10134a413;  */

void FUN_10134a254(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c614f0();
  uVar3 = 0;
  func_0x000107c60714();
  puVar1 = &UNK_1103a58a0;
  func_0x000107c613fc(&UNK_1103a58a0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uStack_40 = 0x10134b8b8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103a5930;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5fb28(unaff_x20,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000100162d98(unaff_x20 + 0x20,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(unaff_x20);
  return;
}



/* Entry: 10134a414; end: 10134a7e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134a414(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  if ((*(byte *)(unaff_x20 + _DAT_112d74e20) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112d74e20) = 1;
    lVar4 = _DAT_112d74e00;
    lVar9 = unaff_x20 + _DAT_112d74e00;
    func_0x000107c61618();
    if (lVar9 != 0) {
      lVar7 = *(long *)(lVar9 + _DAT_112d74bb0);
      func_0x000107c61174();
      func_0x000107c61170(lVar9);
      lVar9 = *(long *)(lVar7 + _DAT_11302baa8);
      func_0x000107c61170(lVar7);
      if (lVar9 == 0xc) {
        return;
      }
    }
    lVar9 = unaff_x20 + lVar4;
    func_0x000107c61618();
    if (lVar9 != 0) {
      uVar8 = *(ulong *)(lVar9 + _DAT_112d74c30);
      func_0x000107c61174();
      func_0x000107c61170(lVar9);
      uVar1 = uVar8;
      func_0x000107c4ec80();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      uVar8 = uVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar1);
      if (uVar8 != 0) {
        uVar2 = 0xd000000000000021;
        func_0x000107c5fadc(0xd000000000000021,0x800000010ef38250);
        uVar1 = uVar8;
        func_0x000107c4d9c0();
        func_0x000107c61180();
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar2);
        if (uVar1 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
          uVar8 = uVar1;
          func_0x000107c6148c(uVar1,puVar3);
          if (uVar8 == 0) {
            func_0x000107c615e8(uVar1);
          }
          else {
            func_0x000107c3ebcc();
            func_0x000107c615e8(uVar1);
            if ((uVar8 & 1) != 0) {
              return;
            }
          }
        }
      }
    }
    lVar4 = unaff_x20 + lVar4;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar7 = *(long *)(lVar4 + _DAT_112d74c38);
      func_0x000107c61174();
      func_0x000107c61170(lVar4);
      lVar9 = lVar7;
      func_0x000107c5d9dc();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      lVar4 = lVar9;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      if (lVar4 != 0) {
        puVar3 = &UNK_1103a58a0;
        func_0x000107c613fc(&UNK_1103a58a0,0x18,7);
        func_0x000107c61614(puVar3 + 0x10);
        puVar5 = &UNK_1103a58c8;
        func_0x000107c613fc(&UNK_1103a58c8,0x20,7);
        *(undefined **)(puVar5 + 0x10) = puVar3;
        *(long *)(puVar5 + 0x18) = lVar4;
        pcStack_50 = FUN_10134b88c;
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0x42000000;
        pcStack_60 = FUN_1010ca3e8;
        puStack_58 = &UNK_1103a58e0;
        puStack_48 = puVar5;
        func_0x000107c60bc4(&puStack_70);
        puVar3 = puStack_48;
        func_0x000107c615f0(lVar4);
        func_0x000107c61574(puVar3);
        func_0x000107c43188(lVar4);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c615e8(lVar4);
      }
    }
  }
  return;
}



/* Entry: 10134a7e8; end: 10134a937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134a7e8(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (((param_1 & 1) == 0) && (*(char *)(param_2 + _DAT_112d74e28) == '\x01')) {
      param_2 = param_2 + _DAT_112d74e00;
      func_0x000107c61618();
      if (param_2 != 0) {
        lVar1 = *(long *)(param_2 + _DAT_112d74c30);
        func_0x000107c61174();
        func_0x000107c61170(param_2);
        lVar2 = lVar1;
        func_0x000107c4ec80();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar1 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c45a48();
          uVar4 = 0xd000000000000021;
          func_0x000107c5fadc(0xd000000000000021,0x800000010ef38250);
          func_0x000107c56bcc(lVar1);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(uVar4);
        }
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10134a938; end: 10134a983; -[_TtC16SCSnapEditorImpl24SnapEditorViewController initWithNibName:bundle:] */

void FUN_10134a938(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapEditorImpl.SnapEditorViewController",0x29,"init(nibName:bundle:)",0x15,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10134a964);
  (*pcVar1)();
}



/* Entry: 10134a984; end: 10134aa67;  */

/* WARNING: Possible PIC construction at 0x00010134aa38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010134aa48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010134aa3c) */
/* WARNING: Removing unreachable block (ram,0x00010134aa4c) */

void FUN_10134a984(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0x44524143534944;
  func_0x000107c5fadc(0x44524143534944,0xe700000000000000);
  uVar4 = 0;
  func_0x00010134ca8c(0,0x112d51360,&PTR_PTR_1126becd8);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar4);
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c5fc48(puVar2,puVar1);
  func_0x000107c420b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10134aa68; end: 10134aae3; -[_TtC16SCSnapEditorImpl24SnapEditorViewController bounds] */

undefined8 FUN_10134aa68(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(param_2);
    func_0x000107c61170(lVar2);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10134aae4);
  (*pcVar1)();
}



/* Entry: 10134aae4; end: 10134ab13; -[_TtC16SCSnapEditorImpl24SnapEditorViewController uiContainerFactory] */

void FUN_10134aae4(void)

{
  func_0x000107c610f8(PTR_PTR_1126b42c0);
  func_0x000107c494f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10134ab14; end: 10134ab17; -[_TtC16SCSnapEditorImpl24SnapEditorViewController uiViewController] */

void FUN_10134ab14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10134ab18; end: 10134ab97; -[_TtC16SCSnapEditorImpl24SnapEditorViewController captureLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134ab18(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112d74e00;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_112d74bb0);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    uVar1 = *(undefined8 *)(lVar2 + _DAT_113812268);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10134ab98; end: 10134aba7; -[_TtC16SCSnapEditorImpl24SnapEditorViewController contentContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134ab98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d74de0));
  return;
}



/* Entry: 10134aba8; end: 10134acef; -[_TtC16SCSnapEditorImpl24SnapEditorViewController captureDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134aba8(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  param_1 = param_1 + _DAT_112d74e00;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x000107c5eea4();
    (**(code **)(*(long *)(param_1 + -8) + 0x38))(puVar4,1,1,param_1);
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112d74bb0);
    func_0x000107c61174(lVar3);
    func_0x000107c61170(param_1);
    FUN_10134ca20(lVar3 + _DAT_113812260,puVar4,0x112d373d8,&UNK_10d9014c0);
    func_0x000107c61170(lVar3);
    lVar3 = 0;
    func_0x000107c5eea4();
    lVar5 = *(long *)(lVar3 + -8);
    puVar1 = puVar4;
    (**(code **)(lVar5 + 0x30))(puVar4,1,lVar3);
    uVar2 = 0;
    if ((int)puVar1 != 1) {
      func_0x000107c5ee70(0);
      (**(code **)(lVar5 + 8))(puVar4,lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10134acf0; end: 10134ae77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134acf0(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,byte param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_101349388(param_1,param_2);
  lVar1 = unaff_x20 + _DAT_112d74e00;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = 0;
    func_0x000107c5fd0c();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffa0 + -extraout_x8,1,1,lVar2);
    func_0x000107c5fcec(0);
    func_0x000107c61174();
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_6);
    uVar3 = param_7;
    func_0x000107c61434();
    func_0x000107c5fce8();
    uVar4 = uVar3;
    func_0x000100eea164();
    puVar5 = &UNK_1103a5878;
    func_0x000107c613fc(&UNK_1103a5878,0x49,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar3;
    *(undefined8 *)(puVar5 + 0x18) = uVar4;
    *(long *)(puVar5 + 0x20) = lVar1;
    puVar5[0x28] = param_3 & 1;
    puVar5[0x29] = param_4 & 1;
    *(undefined8 *)(puVar5 + 0x30) = param_5;
    *(undefined8 *)(puVar5 + 0x38) = param_6;
    *(undefined8 *)(puVar5 + 0x40) = param_7;
    puVar5[0x48] = param_8 & 1;
    func_0x0001000abba4(0,0,&stack0xffffffffffffffa0 + -extraout_x8,&UNK_10d9354a0,puVar5);
    func_0x000107c61574();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10134ae78; end: 10134af87; -[_TtC16SCSnapEditorImpl24SnapEditorViewController dismissWithAction:didSend:didPost:postedClientIds:postedStoryIds:precaptureLensIds:isCrossPostingSpotlightToStories:] */

/* WARNING: Possible PIC construction at 0x00010134af50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010134af60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010134af54) */
/* WARNING: Removing unreachable block (ram,0x00010134af64) */

void FUN_10134ae78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5fc54(param_6,PTR___sSSN_11034da80);
  uVar2 = 0;
  func_0x00010134ca8c(0,0x112d51360,&PTR_PTR_1126becd8);
  func_0x000107c5fc54(param_7,uVar2);
  func_0x000107c5fc54(param_8,puVar1);
  func_0x000107c61174(param_1);
  FUN_10134acf0(param_3,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10134af88; end: 10134b0b3; -[_TtC16SCSnapEditorImpl24SnapEditorViewController exit:] */

void FUN_10134af88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1103a5800;
  func_0x000107c613fc(&UNK_1103a5800,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103a5828;
  func_0x000107c613fc(&UNK_1103a5828,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d935470;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1103a5850;
  func_0x000107c613fc(&UNK_1103a5850,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d935480;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_1);
  FUN_100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10d935490,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 10134b0b4; end: 10134b127;  */

void FUN_10134b0b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10134b128,uVar1,uVar2);
  return;
}



/* Entry: 10134b128; end: 10134b19b;  */

void FUN_10134b128(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c61174();
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10134b19c,uVar2,uVar3);
  return;
}



/* Entry: 10134b19c; end: 10134b207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134b19c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  lVar1 = lVar1 + _DAT_112d74e00;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101345b7c();
    func_0x000107c61170(lVar1);
  }
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x18));
  (**(code **)(lVar1 + 0x10))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010134b204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10134b208; end: 10134b2c7; -[_TtC16SCSnapEditorImpl24SnapEditorViewController backgroundExitBehavior] */

void FUN_10134b208(void)

{
  func_0x00010451429c(0);
  func_0x000104514100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10134b2c8; end: 10134b2cf; -[_TtC16SCSnapEditorImpl24SnapEditorViewController shouldPreventOperaBackgroundDismiss] */

undefined8 FUN_10134b2c8(void)

{
  return 1;
}



/* Entry: 10134b2d0; end: 10134b2eb; -[_TtC16SCSnapEditorImpl24SnapEditorViewController permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134b2d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112d74e28) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentViewController_animated_c_112621588,param_3,1,0);
  return;
}



/* Entry: 10134b2ec; end: 10134b32f; -[_TtC16SCSnapEditorImpl24SnapEditorViewController defaultProjectNameV3] */

void FUN_10134b2ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001040702b0();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10134b330; end: 10134b443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10134b330(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long unaff_x20;
  
  func_0x000107c602fc(0x33);
  func_0x000107c5fb78(0xd000000000000023,0x800000010ef38220);
  bVar3 = *(char *)(unaff_x20 + _DAT_112d74e10) == '\0';
  uVar2 = 0x65757274;
  if (bVar3) {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0x6e696c656d69740a,0xec000000203d2065);
  bVar3 = *(char *)(unaff_x20 + _DAT_112d74e18) == '\0';
  uVar2 = 0x65757274;
  if (bVar3) {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 10134b444; end: 10134b4ab; -[_TtC16SCSnapEditorImpl24SnapEditorViewController jiraMetaInfo] */

void FUN_10134b444(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10134b330();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10134b4ac; end: 10134b55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10134b4ac(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20 + _DAT_112d74e00;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + _DAT_112d74bb0);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    lVar2 = *(long *)(lVar1 + _DAT_11302baa8);
    func_0x000107c61170(lVar1);
    if (((lVar2 - 0xcU < 0x3a && (1L << (lVar2 - 0xcU & 0x3f) & 0x22000400800001bU) != 0) ||
        (lVar2 == 0x5a)) || (lVar2 == 0x51)) {
      return 0x7f;
    }
  }
  return 0xce;
}



/* Entry: 10134b560; end: 10134b593; -[_TtC16SCSnapEditorImpl24SnapEditorViewController pageViewName] */

undefined8 FUN_10134b560(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10134b4ac();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10134b594; end: 10134b5f7;  */

void FUN_10134b594(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10134cb30;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[4] = lVar1;
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  plVar3[6] = lVar2;
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10134b128,lVar1,lVar2);
  return;
}



/* Entry: 10134b5f8; end: 10134b66f;  */

void FUN_10134b5f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10134cb24;
  FUN_100e8ded0(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10134b670; end: 10134b6d7;  */

void FUN_10134b670(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010134b6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10134b6d8; end: 10134b75b;  */

void FUN_10134b6d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10134cb2c;
  FUN_100e8df9c(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10134b75c; end: 10134b79b;  */

void FUN_10134b75c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010134b798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10134b79c; end: 10134b84f;  */

void FUN_10134b79c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long unaff_x22;
  long lVar10;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x29);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x48);
  plVar8 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10134b850;
  *(undefined1 *)((long)plVar8 + 0x6a) = uVar5;
  plVar8[10] = lVar6;
  plVar8[0xb] = lVar9;
  *(undefined1 *)((long)plVar8 + 0x69) = uVar4;
  *(undefined1 *)(plVar8 + 0xd) = uVar3;
  plVar8[8] = lVar10;
  plVar8[9] = lVar7;
  lVar6 = 0;
  func_0x000107c5fcec(0,uVar1,uVar2);
  lVar7 = lVar6;
  func_0x000107c5fce8();
  plVar8[0xc] = lVar7;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar6,lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1013459b8,lVar6,lVar7);
  return;
}



/* Entry: 10134b850; end: 10134b88b;  */

void FUN_10134b850(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010134b888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10134b88c; end: 10134b8bf;  */

void FUN_10134b88c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_1 == 4) {
      puVar3 = &UNK_1103a58a0;
      func_0x000107c613fc(&UNK_1103a58a0,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,lVar2);
      uStack_68 = 0x10134b8b0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_100288f10;
      puStack_70 = &UNK_1103a5908;
      ppuVar4 = &puStack_88;
      puStack_60 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_60;
      lVar5 = lVar2;
      func_0x000107c61174(lVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c503a8(uVar1);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(lVar5);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10134b8c0; end: 10134b8fb;  */

void FUN_10134b8c0(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10134b8fc; end: 10134b953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10134b8fc(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    puVar10 = (undefined *)0x0;
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  }
  else {
    lVar2 = lVar1 + _DAT_112d74e00;
    func_0x000107c61618();
    if (lVar2 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      lVar9 = *(long *)(lVar2 + _DAT_112d74bb0);
      func_0x000107c61174();
      func_0x000107c61170(lVar2);
      lVar2 = _DAT_113812278;
      func_0x000107c61428(lVar9 + _DAT_113812278,auStack_80,0,0);
      puVar10 = (undefined *)(lVar9 + lVar2);
      func_0x000107c61618();
      lVar2 = _DAT_113812280;
      if (puVar10 != (undefined *)0x0) {
        func_0x000107c61428(lVar9 + _DAT_113812280,auStack_c8,0,0);
        lVar2 = lVar9 + lVar2;
        func_0x000107c61618();
        if (lVar2 != 0) {
          func_0x000107c5a050();
          func_0x000107c52ab8(lVar2);
          func_0x000107c3ec60(puVar10);
          func_0x000107c54b80(lVar2);
          func_0x000107c3d89c(puVar10);
          func_0x000107c61170(lVar2);
        }
      }
      func_0x000107c61170(lVar9);
    }
    func_0x000107c61170(lVar1);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  }
  PTR__OBJC_CLASS___UIImageView_1126aec28 = puVar3;
  if (lVar4 != 0) {
    func_0x000107c610f8(puVar3);
    func_0x000107c61174(lVar4);
    func_0x000107c453e4(puVar3);
    puVar5 = &UNK_1103a59b8;
    func_0x000107c613fc(&UNK_1103a59b8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,puVar3);
    puVar6 = &UNK_1103a59e0;
    func_0x000107c613fc(&UNK_1103a59e0,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = uVar11;
    *(undefined8 *)(puVar6 + 0x20) = uVar8;
    pcStack_90 = FUN_10134c8b0;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_10134a1dc;
    puStack_98 = &UNK_1103a59f8;
    ppuVar7 = &puStack_b0;
    puStack_88 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_88);
    func_0x000107c5dc64(lVar4);
    func_0x000107c60bd0(ppuVar7);
    if (puVar10 == (undefined *)0x0) {
      func_0x000107c61170(lVar4);
      puVar10 = puVar3;
    }
    else {
      func_0x000107c61174(puVar3);
      func_0x000107c5a050();
      func_0x000107c52ab8(puVar3);
      func_0x000107c3ec60(puVar10);
      func_0x000107c54b80(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c3d89c(puVar10);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar3);
    }
  }
  return puVar10;
}



/* Entry: 10134b954; end: 10134b9cb;  */

void FUN_10134b954(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x00010134ca8c(0,param_1,param_2);
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



/* Entry: 10134b9cc; end: 10134ba03;  */

void FUN_10134b9cc(double param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  double dVar3;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  dVar3 = 0.0;
  if (param_1 != 0.0) {
    dVar3 = param_1;
  }
  func_0x000107c60688(uVar1,dVar3);
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(double *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == param_1) {
        return;
      }
      uVar1 = uVar1 + 1 & ~uVar2;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
    return;
  }
  return;
}



/* Entry: 10134ba04; end: 10134ba63;  */

void FUN_10134ba04(double param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(double *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 10134ba64; end: 10134bc07;  */

ulong FUN_10134ba64(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10134bb3c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10134bb40);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000010,0x800000010ef38340);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10134bc08);
  (*pcVar2)();
}



/* Entry: 10134bc08; end: 10134bdc7;  */

ulong FUN_10134bc08(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10134bcec);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10134bcf0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
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
    puVar4 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
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
  func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10134bdc8);
  (*pcVar2)();
}



/* Entry: 10134bdc8; end: 10134beff;  */

void FUN_10134bdc8(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar2 = param_2;
  uVar5 = param_3;
  FUN_10134b9cc();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  uVar3 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10134be90);
    (*pcVar1)();
  }
  if (*(long *)(lVar9 + 0x18) < (long)uVar3) {
    uVar4 = (uint)param_3 & 1;
    FUN_10134c05c();
    FUN_10134b9cc(param_1);
    uVar2 = uVar3;
    if (((uint)uVar5 & 1) != (uVar4 & 1)) {
      func_0x000107c60624(PTR___sSdN_11034dd90);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10134be58);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_10134bf00();
    lVar6 = *unaff_x20;
    goto joined_r0x00010134bea4;
  }
  lVar6 = *unaff_x20;
joined_r0x00010134bea4:
  if ((uVar5 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 8);
    *(ulong *)(*(long *)(lVar6 + 0x38) + uVar2 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar9 = lVar6 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar9 + 0x40) = *(ulong *)(lVar9 + 0x40) | 1L << (uVar2 & 0x3f);
  *(undefined8 *)(*(long *)(lVar6 + 0x30) + uVar2 * 8) = param_1;
  *(ulong *)(*(long *)(lVar6 + 0x38) + uVar2 * 8) = param_2;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10134bf00);
    (*pcVar1)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  return;
}



/* Entry: 10134bf00; end: 10134c05b;  */

void FUN_10134bf00(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112d74e80,&UNK_10d9354d0);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_10134bfdc;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_10134bfdc:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10134c05c);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_10134c034;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_10134c034:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10134c05c; end: 10134c2cf;  */

void FUN_10134c05c(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar14 = 0x112d74e80;
  func_0x0001000285a8(0x112d74e80,&UNK_10d9354d0);
  lVar4 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,uVar14);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_10134c298:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar11 = uVar11 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar15 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10134c2cc);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar11 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar11 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_10134c298;
        }
        uVar11 = puVar13[lVar15];
        lVar6 = lVar6 + 1;
      } while (uVar11 == 0);
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar15 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar15 << 6;
    dVar17 = *(double *)(*(long *)(lVar12 + 0x30) + uVar5 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar14);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    dVar16 = 0.0;
    if (dVar17 != 0.0) {
      dVar16 = dVar17;
    }
    func_0x000107c60688(uVar5,dVar16);
    uVar9 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
    uVar7 = uVar5 >> 6;
    uVar10 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar9 >> 6;
      do {
        uVar10 = uVar7 + 1;
        if ((uVar10 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10134c2d0);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar10 != uVar5) {
          uVar7 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar5 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    *(double *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = dVar17;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar15;
  } while( true );
}



/* Entry: 10134c2d0; end: 10134c3db;  */

undefined * FUN_10134c2d0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112d74e80);
  puVar2 = puVar8;
  func_0x000107c60498();
  uVar10 = *(ulong *)(param_1 + 0x20);
  puVar9 = *(undefined **)(param_1 + 0x28);
  puVar3 = puVar2;
  FUN_10134b9cc(uVar10);
  if ((uVar5 & 1) == 0) {
    puVar6 = (ulong *)(param_1 + 0x38);
    do {
      puVar4 = puVar9;
      uVar7 = (ulong)puVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) =
           *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + (long)puVar3 * 8) = uVar10;
      *(undefined **)(*(long *)(puVar2 + 0x38) + (long)puVar3 * 8) = puVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10134c3dc);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61174();
        return puVar2;
      }
      uVar10 = puVar6[-1];
      puVar9 = (undefined *)*puVar6;
      func_0x000107c61174();
      FUN_10134b9cc(uVar10);
      puVar3 = puVar4;
      puVar6 = puVar6 + 2;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10134c3ac);
  (*pcVar1)();
}



/* Entry: 10134c3dc; end: 10134c4eb;  */

undefined * FUN_10134c3dc(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d74e68,&UNK_10d9354c0);
    puVar8 = puVar11;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar12 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar12[-3];
      uVar5 = puVar12[-2];
      uVar4 = puVar12[-1];
      uVar6 = *puVar12;
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_100fac43c();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10134c4e8);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10134c4ec);
        (*pcVar7)();
      }
      puVar12 = puVar12 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar11 = puVar11 + -1;
    } while (puVar11 != (undefined *)0x0);
    func_0x000107c61574(puVar8);
  }
  return puVar8;
}



/* Entry: 10134c4ec; end: 10134c5c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134c4ec(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(unaff_x20 + _DAT_112d74dd8) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112d74dd8) = 1;
    lVar1 = unaff_x20 + _DAT_112d74e00;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar4 = *(long *)(lVar1 + _DAT_112d74bb0);
      func_0x000107c61174();
      func_0x000107c61170(lVar1);
      lVar1 = _DAT_11302bad0;
      func_0x000107c61428(lVar4 + _DAT_11302bad0,auStack_38,0,0);
      uVar2 = lVar4 + lVar1;
      func_0x000107c61618();
      func_0x000107c61170(lVar4);
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x000107c61150(uVar2,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_snapEditorViewDidLoad_11266ddb0);
        if ((uVar3 & 1) != 0) {
          func_0x000107c5b2a8(uVar2);
        }
        func_0x000107c615e8(uVar2);
      }
    }
  }
  return;
}



/* Entry: 10134c5c4; end: 10134c6bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134c5c4(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined **)(unaff_x20 + _DAT_112d74dd0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + _DAT_112d74dd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d74de0) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112d74df0,0);
  lVar1 = _DAT_112d74df8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  func_0x000107c61614(unaff_x20 + _DAT_112d74e00,0);
  *(undefined1 *)(unaff_x20 + _DAT_112d74e20) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d74e28) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCSnapEditorImpl/SnapEditorViewController.swift",0x2f,2,0x62,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10134c6bc);
  (*pcVar2)();
}



/* Entry: 10134c6bc; end: 10134c823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134c6bc(double *param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_113812280;
  func_0x000107c61428(param_6 + _DAT_113812280,auStack_58,0,0);
  lVar1 = param_6 + lVar1;
  func_0x000107c61618();
  dVar4 = 0.0;
  dVar8 = 0.0;
  if (lVar1 == 0) {
    uVar3 = 1;
    param_4 = 0.0;
    param_5 = 0.0;
    goto LAB_10134c804;
  }
  lVar2 = lVar1;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (lVar2 == 0) {
LAB_10134c7f0:
    func_0x000107c61170(lVar1);
  }
  else {
    func_0x000107c444c4(*(undefined8 *)(param_6 + _DAT_11302bad8));
    dVar5 = dVar4;
    func_0x000107c3ec60(lVar1);
    dVar8 = param_3;
    func_0x000107c4073c(lVar1);
    if (((dVar4 <= 0.0) || (dVar6 = dVar5, func_0x000107c609cc(), dVar6 <= 0.0)) ||
       (dVar6 = dVar5, func_0x000107c609b0(dVar5,dVar8,param_4,param_5), dVar6 <= 0.0)) {
      func_0x000107c61170(lVar2);
      goto LAB_10134c7f0;
    }
    dVar6 = dVar5;
    func_0x000107c609b0(dVar5,dVar8,param_4,param_5);
    dVar7 = dVar5;
    func_0x000107c609cc(dVar5,dVar8,param_4,param_5);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    if (ABS(dVar4 * dVar6 - dVar7) < 1.0) {
      uVar3 = 0;
      dVar4 = dVar5;
      goto LAB_10134c804;
    }
  }
  uVar3 = 1;
  param_4 = 0.0;
  param_5 = 0.0;
  dVar4 = 0.0;
  dVar8 = 0.0;
LAB_10134c804:
  param_1[1] = dVar8;
  *param_1 = dVar4;
  param_1[3] = param_5;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 4) = uVar3;
  return;
}



/* Entry: 10134c824; end: 10134c8af;  */

undefined8 FUN_10134c824(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  if (0.0 < param_1) {
    dVar2 = param_1;
    func_0x000107c5b078();
    if ((dVar2 <= 0.0) || (func_0x000107c5b078(param_3), param_2 <= 0.0)) {
      uVar1 = 1;
    }
    else {
      func_0x000107c5b078(param_3);
      func_0x000107c5b078(param_3);
      uVar1 = 2;
      if (0.01 <= ABS(dVar2 / param_2 - param_1)) {
        uVar1 = 1;
      }
    }
    return uVar1;
  }
  return 1;
}



/* Entry: 10134c8b0; end: 10134c8bf;  */

void FUN_10134c8b0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    if (param_1 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c61174();
      uVar4 = 0;
      lVar1 = lVar6;
      func_0x000107c60714(lVar6,0);
      puVar2 = &UNK_1103a5a30;
      func_0x000107c613fc(&UNK_1103a5a30,0x30,7);
      *(long *)(puVar2 + 0x10) = lVar5;
      *(long *)(puVar2 + 0x18) = param_1;
      *(undefined8 *)(puVar2 + 0x20) = uVar7;
      *(long *)(puVar2 + 0x28) = lVar6;
      pcStack_78 = FUN_10134c8c0;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f6b44;
      puStack_80 = &UNK_1103a5a48;
      ppuVar3 = &puStack_98;
      puStack_70 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_70;
      func_0x000107c61174(param_1);
      func_0x000107c61174(lVar5);
      func_0x000107c61574(puVar2);
      func_0x000107c5fb28(lVar1,uVar4);
      func_0x000107c6142c(uVar4);
      func_0x000100162d98(lVar1 + 0x20,ppuVar3);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(param_1);
      func_0x000107c61574(lVar1);
    }
  }
  return;
}



/* Entry: 10134c8c0; end: 10134c903;  */

void FUN_10134c8c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_10134c824(*(undefined8 *)(unaff_x20 + 0x20),uVar2);
  func_0x000107c53840(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setImage__1126481e8,uVar2);
  return;
}



/* Entry: 10134c904; end: 10134c92b;  */

void FUN_10134c904(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 10134c92c; end: 10134c94b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134c92c(void)

{
  code cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long extraout_x8;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x20;
  code *pcVar20;
  code *pcVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined **ppuVar26;
  undefined1 auStack_290 [16];
  undefined *puStack_280;
  char *pcStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  code *pcStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined8 *puStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  char cStack_c0;
  
  lVar19 = *(long *)(unaff_x20 + 0x10);
  puVar4 = *(undefined **)(unaff_x20 + 0x18);
  lVar2 = 0;
  func_0x000107c5f804();
  lStack_1d0 = *(long *)(lVar2 + -8);
  lStack_1c8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1d0 + 0x40));
  lVar13 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_1d8 = (long)&puStack_280 + lVar13;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = 0x7373655370616e73;
  *(undefined8 *)(lVar2 + 0x28) = 0xed000064496e6f69;
  puVar15 = PTR___sSSN_11034da80;
  pcVar20 = *(code **)(lVar19 + _DAT_112d74bb0);
  uVar17 = *(undefined8 *)(pcVar20 + _DAT_11302bae0);
  uVar22 = *(undefined8 *)(pcVar20 + _DAT_11302bae0 + 8);
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = uVar17;
  *(undefined8 *)(lVar2 + 0x38) = uVar22;
  func_0x000107c61434();
  lVar6 = lVar2;
  func_0x000100214a84();
  func_0x000107c61588(lVar2);
  puVar16 = (undefined *)0x112d4b5f0;
  FUN_10134c99c((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  lVar2 = _DAT_11302baf0;
  lVar3 = *(long *)(pcVar20 + _DAT_11302baf0);
  lStack_e8 = lVar6;
  if (lVar3 != 0) {
    func_0x000107c3f144();
    func_0x000107c3116c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      puStack_d8 = (undefined *)0x0;
      lStack_e0 = 0;
      puStack_c8 = (undefined *)0x0;
      uStack_d0 = 0;
      puVar16 = (undefined *)0x112d387f8;
      FUN_10134c99c(&lStack_e0,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(&puStack_170,0x6f4d6172656d6163,0xea00000000006564);
      FUN_10134c99c(&puStack_170,0x112d387f8,&UNK_10d902650);
      lVar2 = *(long *)(pcVar20 + lVar2);
    }
    else {
      lVar23 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      uStack_d0 = 0;
      puStack_c8 = puVar15;
      lStack_e0 = lVar23;
      puStack_d8 = puVar16;
      func_0x000100102924(&lStack_e0,&puStack_170);
      lVar3 = lVar6;
      func_0x000107c61558(lVar6);
      puVar16 = (undefined *)0x6f4d6172656d6163;
      lStack_e0 = lVar6;
      func_0x0001001029e8(&puStack_170,0x6f4d6172656d6163,0xea00000000006564,lVar3);
      lVar2 = *(long *)(pcVar20 + lVar2);
      lStack_e8 = lStack_e0;
    }
    if (lVar2 != 0) {
      func_0x000107c3d0f8();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar6 = lVar2;
        func_0x000107c5fc54();
        func_0x000107c61170(lVar2);
        puVar16 = (undefined *)0x112d38270;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        lStack_e0 = lVar6;
        puStack_c8 = puVar16;
        if (puVar16 == (undefined *)0x0) {
          puVar16 = (undefined *)0x112d387f8;
          FUN_10134c99c(&lStack_e0,0x112d387f8,&UNK_10d902650);
          func_0x000100216878(&puStack_170,0xd000000000000011,0x800000010ef38320);
          FUN_10134c99c(&puStack_170,0x112d387f8,&UNK_10d902650);
        }
        else {
          func_0x000100102924(&lStack_e0,&puStack_170);
          lVar2 = lStack_e8;
          lVar6 = lStack_e8;
          func_0x000107c61558(lStack_e8);
          lStack_e0 = lVar2;
          puVar16 = (undefined *)0xd000000000000011;
          func_0x0001001029e8(&puStack_170,0xd000000000000011,0x800000010ef38320,lVar6);
          lStack_e8 = lStack_e0;
        }
      }
    }
  }
  pcVar21 = pcVar20;
  puStack_1c0 = puVar4;
  FUN_101349bf4();
  lVar2 = _DAT_113812270;
  lVar23 = *(long *)(pcVar20 + _DAT_113812270);
  lVar25 = *(long *)(lVar19 + _DAT_112d74bc0);
  lVar6 = lVar25;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar3 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar3 != 0) {
    lVar6 = lVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar6 != 0) {
      lVar3 = *(long *)(lVar19 + _DAT_112d74bf0);
      lStack_1f8 = lVar25;
      func_0x000107c42d48();
      func_0x000107c61180();
      lVar25 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lStack_e8;
      lStack_1e8 = lVar25;
      if (lVar25 == 0) {
        func_0x000100ba52d8(pcVar21,puVar16);
        func_0x000107c615e8(lVar6);
        goto LAB_101347d54;
      }
      lStack_210 = _DAT_11302bad8;
      uVar17 = *(undefined8 *)(pcVar20 + _DAT_11302bad8);
      lStack_1f0 = lVar6;
      func_0x000107c615f0(uVar17);
      func_0x000107c5f9dc(lVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                          PTR___sSSSHsWP_11034da90);
      lStack_208 = lVar19;
      pcStack_1e0 = pcVar21;
      if ((puStack_1c0[_DAT_112d74e10] & 1) != 0) {
        func_0x000107c3e6d4(*(undefined8 *)(*(long *)(lVar19 + _DAT_112d74bc8) + _DAT_113077160));
      }
      puVar4 = &UNK_1103a58a0;
      func_0x000107c613fc(&UNK_1103a58a0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,puStack_1c0);
      puVar15 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_150 = (code *)0x10134c934;
      puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_168 = 0x42000000;
      pcStack_160 = (code *)&UNK_1000f6b44;
      puStack_158 = (undefined8 *)&UNK_1103a5ac0;
      ppuVar5 = &puStack_170;
      puStack_148 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_148);
      puStack_200 = puVar16;
      if (pcStack_1e0 == (code *)0x0) {
        ppuVar26 = (undefined **)0x0;
      }
      else {
        pcStack_150 = pcStack_1e0;
        puStack_170 = puVar15;
        uStack_168 = 0x42000000;
        pcStack_160 = (code *)0x100f11710;
        puStack_158 = (undefined8 *)&UNK_1103a5b88;
        ppuVar26 = &puStack_170;
        puStack_148 = puVar16;
        func_0x000107c60bc4(ppuVar26);
        puVar4 = puStack_148;
        func_0x000107c6157c(puVar16);
        func_0x000107c61574(puVar4);
      }
      cVar1 = pcVar20[_DAT_11302bb00];
      auStack_290[lVar13 + 1] = lVar23 != 0;
      auStack_290[lVar13] = cVar1;
      lVar6 = lStack_1e8;
      lVar13 = lStack_1f0;
      lVar23 = lStack_1e8;
      func_0x000107c40c2c();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar26);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(uVar17);
      func_0x000107c61170(lVar3);
      lVar19 = lStack_208;
      if (lVar23 == 0) {
        func_0x000100ba52d8(pcStack_1e0,puStack_200);
        func_0x000107c615e8(lVar13);
        func_0x000107c615e8(lVar6);
        goto LAB_101347d54;
      }
      lVar6 = *(long *)(lStack_208 + _DAT_112d74c28);
      func_0x000107c3ff98();
      func_0x000107c61180();
      lVar13 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      pcVar21 = pcStack_1e0;
      if (lVar13 != 0) {
        lVar6 = lStack_1f8;
        func_0x000107c5dbd4(lStack_1f8);
        func_0x000107c61180();
        lVar3 = lVar13;
        func_0x000107c40998();
        func_0x000107c61180();
        func_0x000107c615e8(lVar13);
        func_0x000107c61170(lVar6);
        lStack_218 = lVar3;
        if (lVar3 != 0) {
          lVar6 = *(long *)(lVar19 + _DAT_112d74bb8);
          lStack_258 = lVar6;
          func_0x000107c3dae4();
          func_0x000107c61180();
          lVar13 = lVar6;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          if (lVar13 == 0) {
            lStack_220 = 0;
            puVar16 = puStack_1c0;
          }
          else {
            puVar4 = PTR_PTR_1126aead8;
            func_0x000107c610f8(PTR_PTR_1126aead8);
            puVar16 = puStack_1c0;
            func_0x000107c4807c();
            lVar6 = lVar13;
            func_0x000107c4c1e0();
            func_0x000107c61180();
            lStack_220 = lVar6;
            func_0x000107c615e8(lVar13);
            func_0x000107c61170(puVar4);
          }
          puVar4 = &UNK_1103a5af8;
          func_0x000107c613fc(&UNK_1103a5af8,0x18,7);
          *(undefined **)(puVar4 + 0x10) = puVar16;
          puStack_240 = puVar4;
          func_0x000107c61174();
          puVar4 = puVar16;
          FUN_101348a64();
          puVar7 = PTR_PTR_1126a6b18;
          puStack_228 = puVar4;
          func_0x000107c610f8();
          func_0x000107c45f60();
          lStack_238 = lVar23;
          func_0x000107c56984();
          func_0x000107c553e0(puVar7);
          func_0x00010134ca8c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          uVar8 = (ulong)(byte)pcVar20[_DAT_11302bb38];
          func_0x000107c6010c(uVar8);
          func_0x000107c556ec(puVar7);
          func_0x000107c61170(uVar8);
          uVar8 = (ulong)(*(long *)(pcVar20 + lVar2) != 0);
          func_0x000107c6010c(uVar8);
          func_0x000107c557b8(puVar7);
          func_0x000107c61170(uVar8);
          FUN_10134c6bc(&lStack_e0,pcVar20);
          puVar15 = puStack_c8;
          uVar17 = uStack_d0;
          puVar4 = puStack_d8;
          lVar2 = lStack_e0;
          if (cStack_c0 != '\x01') {
            lVar13 = lStack_e0;
            func_0x000107c609cc(lStack_e0,puStack_d8,uStack_d0,puStack_c8);
            lVar6 = lVar2;
            func_0x000107c609b0(lVar2,puVar4,uVar17,puVar15);
            puVar9 = PTR_PTR_1126c49d8;
            func_0x000107c610f8(PTR_PTR_1126c49d8);
            func_0x000107c495d0(lVar13,lVar6);
            func_0x000107c57d0c(puVar7);
            func_0x000107c61170(puVar9);
            func_0x000107c609c8(lVar2,puVar4,uVar17,puVar15);
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c466c0(lVar2);
            func_0x000107c574fc(puVar7);
            func_0x000107c61170(puVar4);
          }
          puVar10 = (undefined8 *)PTR_PTR_1126a6b20;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar11 = puVar10;
          func_0x0001000298f0();
          func_0x000107c61428();
          uVar17 = *puVar11;
          pcStack_160 = (code *)puVar16;
          puStack_158 = puVar10;
          func_0x000107c61174(uVar17);
          func_0x0001000b0da8(0xd000000000000041,0x800000010ef382b0,0x10134c944,&puStack_170);
          func_0x000107c61170(uVar17);
          puStack_250 = puVar10;
          func_0x000107c5753c(puVar7);
          lVar6 = 0;
          FUN_101343f7c();
          lVar13 = lVar6;
          func_0x000107c610f8();
          lVar2 = lVar13 + _DAT_112d74b60;
          *(undefined8 *)(lVar2 + 8) = 0;
          func_0x000107c61614(lVar2,0);
          *(undefined ***)(lVar2 + 8) = &PTR_DAT_1103a57d8;
          puStack_248 = puVar16;
          func_0x000107c61604();
          plVar12 = &lStack_198;
          lStack_198 = lVar13;
          lStack_190 = lVar6;
          func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
          func_0x000107c52168(puVar7);
          func_0x000107c61170(plVar12);
          uVar24 = *(undefined8 *)(lVar19 + _DAT_112d74be8);
          uVar17 = *(undefined8 *)(lVar19 + _DAT_112d74bf8);
          uVar22 = *(undefined8 *)(lVar19 + _DAT_112d74bd8);
          lVar13 = 0;
          FUN_101347164();
          lVar2 = lVar13;
          puStack_1c0 = puVar7;
          func_0x000107c610f8();
          *(undefined8 *)(lVar2 + _DAT_112d74d90) = uVar17;
          *(undefined8 *)(lVar2 + _DAT_112d74d98) = uVar22;
          puVar16 = PTR_s_init_1125d9248;
          lStack_1a8 = lVar2;
          lStack_1a0 = lVar13;
          func_0x000107c61174(uVar17);
          func_0x000107c61174(uVar22);
          plVar12 = &lStack_1a8;
          func_0x000107c61154(plVar12,puVar16);
          func_0x0001000285a8(0x112d74e70,&UNK_10d9354c8);
          uVar17 = *(undefined8 *)(lVar19 + _DAT_112d74c40);
          func_0x000107c5de34();
          func_0x000107c61180();
          uVar22 = uVar17;
          func_0x0001000bda74();
          func_0x000107c61170(uVar17);
          uStack_230 = *(undefined8 *)(pcVar20 + lStack_210);
          uVar18 = *(undefined8 *)(lVar19 + _DAT_112d74c48);
          func_0x000107c615f0();
          func_0x000107c5da1c();
          func_0x000107c61180();
          lVar3 = 0;
          uStack_268 = uVar18;
          FUN_10134162c();
          lStack_260 = lVar3;
          func_0x000107c610f8();
          lVar2 = _DAT_112d74a58;
          puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
          FUN_10134c2d0();
          lVar6 = lStack_1c8;
          lVar13 = lStack_1d0;
          lVar19 = lStack_1d8;
          uVar17 = uStack_230;
          *(undefined **)(lVar3 + lVar2) = puVar16;
          puVar10 = (undefined8 *)(lVar3 + _DAT_112d74a60);
          *puVar10 = 0;
          puVar10[1] = 0;
          *(undefined8 *)(lVar3 + _DAT_112d74a28) = uVar24;
          *(long **)(lVar3 + _DAT_112d74a30) = plVar12;
          *(undefined8 *)(lVar3 + _DAT_112d74a38) = uVar22;
          *(undefined8 *)(lVar3 + _DAT_112d74a40) = uStack_230;
          *(undefined8 *)(lVar3 + _DAT_112d74a48) = uVar18;
          pcStack_278 = "ugin dependencies";
          (**(code **)(lStack_1d0 + 0x68))
                    (lStack_1d8,
                     *(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lStack_1c8)
          ;
          puVar16 = PTR_PTR_1126ae790;
          func_0x000107c610f8();
          puStack_280 = puVar16;
          func_0x000107c615f0(uVar17);
          func_0x000107c61174(uVar24);
          func_0x000107c61174();
          plStack_270 = plVar12;
          func_0x000107c6157c(uVar22);
          func_0x000107c61174();
          uVar17 = 0xd000000000000012;
          func_0x000107c5fadc(0xd000000000000012,(ulong)pcStack_278 | 0x8000000000000000);
          func_0x000107c5f800();
          puVar16 = puStack_280;
          func_0x000107c470d0();
          lVar2 = lStack_208;
          func_0x000107c61170(uVar17);
          (**(code **)(lVar13 + 8))(lVar19,lVar6);
          *(undefined **)(lVar3 + _DAT_112d74a50) = puVar16;
          lStack_1b0 = lStack_260;
          plVar12 = &lStack_1b8;
          lStack_1b8 = lVar3;
          func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
          func_0x000107c61170(plStack_270);
          func_0x000107c61574(uVar22);
          func_0x000107c615e8(uStack_230);
          func_0x000107c61170(uStack_268);
          func_0x000107c59370(puStack_1c0);
          func_0x000107c61170(plVar12);
          func_0x000107c52604(puStack_1c0);
          func_0x000107c56a00(puStack_1c0);
          uVar22 = *(undefined8 *)(pcVar20 + _DAT_11302bac0);
          func_0x000107c615f0(uVar22);
          lVar19 = lStack_1f8;
          lVar13 = lStack_1f8;
          func_0x000107c5dbd4(lStack_1f8);
          func_0x000107c61180();
          uVar17 = uVar22;
          func_0x000107c40978(uVar22);
          func_0x000107c61180();
          func_0x000107c615e8(uVar22);
          func_0x000107c61170(lVar13);
          func_0x000107c53e94(puStack_1c0);
          puVar16 = puStack_1c0;
          func_0x000107c615e8(uVar17);
          uVar17 = *(undefined8 *)(lVar2 + _DAT_112d74c68);
          func_0x000107c5dbd4(lVar19);
          func_0x000107c61180();
          func_0x000107c40974();
          func_0x000107c61180();
          func_0x000107c61170(lVar19);
          func_0x000107c593a4(puVar16);
          func_0x000107c615e8(uVar17);
          lVar19 = *(long *)(*(long *)(lVar2 + _DAT_112d74c20) + _DAT_11303f608);
          puVar4 = (undefined *)0x0;
          if (lVar19 != 0) {
            func_0x000107c6157c(lVar19);
            func_0x0001000d224c(&puStack_170);
            func_0x000107c61574(lVar19);
            puVar4 = puStack_170;
          }
          func_0x000107c59ac4(puVar16);
          func_0x000107c615e8(puVar4);
          lVar19 = lStack_258;
          func_0x000107c4d814();
          func_0x000107c61180();
          lVar13 = lVar19;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar19);
          if (lVar13 == 0) {
            lVar19 = 0;
          }
          else {
            lVar19 = lVar13;
            func_0x000107c4c1dc(lVar13);
            func_0x000107c61180();
            func_0x000107c615e8(lVar13);
          }
          func_0x000107c56b20(puVar16);
          func_0x000107c615e8(lVar19);
          FUN_10134c94c(*(long *)(lVar2 + _DAT_112d74bd0) + _DAT_113043c88,&puStack_170);
          pcVar21 = pcStack_150;
          func_0x00010134c9fc(&puStack_170,puStack_158);
          lVar19 = lStack_210;
          uVar22 = *(undefined8 *)(pcVar20 + lStack_210);
          pcVar21 = *(code **)(pcVar21 + 8);
          uVar17 = uVar22;
          func_0x000107c615f0(uVar22);
          (*pcVar21)();
          func_0x000107c615e8(uVar22);
          func_0x000107c5644c(puVar16);
          func_0x000107c615e8(uVar17);
          func_0x00010134c9dc(&puStack_170);
          uVar22 = *(undefined8 *)(lVar2 + _DAT_112d74c30);
          func_0x000107c4ec80(uVar22);
          func_0x000107c61180();
          lVar2 = *(long *)(pcVar20 + _DAT_11302baa8);
          uVar17 = 0;
          FUN_10134676c(0);
          func_0x000107c610f8();
          FUN_10134649c(uVar22,lVar2 == 8,uVar17);
          func_0x000107c59448(puVar16);
          func_0x000107c61170(uVar22);
          puVar14 = PTR_PTR_1126a6b28;
          func_0x000107c610f8();
          lVar2 = lStack_1f0;
          func_0x000107c49520();
          puVar15 = puStack_248;
          uVar17 = *(undefined8 *)(puStack_248 + _DAT_112d74de0);
          *(undefined **)(puStack_248 + _DAT_112d74de0) = puVar14;
          func_0x000107c61174();
          func_0x000107c61170(uVar17);
          FUN_101349918(puVar14);
          puVar7 = PTR___NSConcreteStackBlock_11034bd00;
          uVar22 = *(undefined8 *)(pcVar20 + lVar19);
          pcStack_150 = FUN_101349004;
          puStack_148 = (undefined *)0x0;
          puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_168 = 0x42000000;
          pcStack_160 = FUN_101349054;
          puStack_158 = (undefined8 *)&UNK_1103a5b10;
          ppuVar5 = &puStack_170;
          func_0x000107c60bc4(ppuVar5);
          puVar4 = puStack_148;
          func_0x000107c615f0(uVar22);
          func_0x000107c61574(puVar4);
          uVar17 = uVar22;
          func_0x000107c5e068(uVar22);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar5);
          func_0x000107c615e8(uVar22);
          puVar4 = &UNK_1103a58a0;
          func_0x000107c613fc(&UNK_1103a58a0,0x18,7);
          func_0x000107c61614(puVar4 + 0x10,puVar15);
          puVar15 = &UNK_1103a5b48;
          func_0x000107c613fc(&UNK_1103a5b48,0x28,7);
          puVar9 = puStack_240;
          *(undefined **)(puVar15 + 0x10) = puVar4;
          *(undefined8 *)(puVar15 + 0x18) = 0x10134c93c;
          *(undefined **)(puVar15 + 0x20) = puStack_240;
          pcStack_150 = FUN_10134c990;
          puStack_170 = puVar7;
          uStack_168 = 0x42000000;
          pcStack_160 = FUN_1011b0640;
          puStack_158 = (undefined8 *)&UNK_1103a5b60;
          ppuVar5 = &puStack_170;
          puStack_148 = puVar15;
          func_0x000107c60bc4(ppuVar5);
          puVar4 = puStack_148;
          func_0x000107c6157c(puVar9);
          func_0x000107c61574(puVar4);
          func_0x000107c5dc64(uVar17);
          func_0x000107c615e8(lVar2);
          func_0x000100ba52d8(pcStack_1e0,puStack_200);
          func_0x000107c615e8(lStack_1e8);
          func_0x000107c61170(puVar14);
          func_0x000107c615e8(lStack_220);
          func_0x000107c61170(uVar17);
          func_0x000107c61170(puVar16);
          func_0x000107c61170(puStack_228);
          func_0x000107c615e8(lStack_218);
          func_0x000107c61170(puStack_250);
          func_0x000107c61574(puVar9);
          func_0x000107c61170(lStack_238);
          func_0x000107c60bd0(ppuVar5);
          goto LAB_101347d54;
        }
      }
      func_0x000107c61170(lVar23);
      func_0x000107c615e8(lStack_1f0);
      func_0x000107c615e8(lStack_1e8);
      puVar16 = puStack_200;
    }
  }
  func_0x000100ba52d8(pcVar21,puVar16);
LAB_101347d54:
  func_0x000107c6142c(lStack_e8);
  return;
}



/* Entry: 10134c94c; end: 10134c98f;  */

long FUN_10134c94c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10134c990; end: 10134c99b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134c990(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  if (param_1 == 0) {
LAB_101349364:
    func_0x000107c61170();
  }
  else {
    func_0x000107c615f0(param_1);
    puVar3 = PTR_PTR_1126b25c0;
    func_0x000107c61168(PTR_PTR_1126b25c0);
    lVar4 = param_1;
    func_0x000107c6148c(param_1,puVar3);
    if (lVar4 != 0) {
      func_0x000107c41214();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar4);
        (*pcVar1)();
        lVar9 = 0x112d54e00;
        FUN_10134b954(0x112d54e00,&PTR_PTR_1126bcf68,0x112d74e78,&UNK_10db629f0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar9 + 0x18) = 3;
        *(undefined8 *)(lVar9 + 0x10) = 1;
        puVar6 = PTR_PTR_1126bcf68;
        func_0x000107c610f8();
        func_0x00010006c00c(lVar5,puVar3);
        lVar7 = lVar5;
        func_0x000107c5ee20(lVar5,puVar3);
        func_0x000107c45ae0();
        func_0x000107c61170(lVar7);
        func_0x00010006c090(lVar5,puVar3);
        *(undefined **)(lVar9 + 0x20) = puVar6;
        uVar8 = 0;
        func_0x00010134ca8c(0,0x112d54e00,&PTR_PTR_1126bcf68);
        lVar7 = lVar9;
        func_0x000107c5fc48(lVar9,uVar8);
        func_0x000107c61574(lVar9);
        func_0x000107c569ac(lVar4);
        func_0x000107c61170(lVar7);
        lVar9 = *(long *)(lVar2 + _DAT_112d74de0);
        if (lVar9 == 0) {
          func_0x00010006c090(lVar5,puVar3);
          func_0x000107c615e8(param_1);
        }
        else {
          func_0x000107c61174();
          func_0x000107c61174(lVar4);
          func_0x000107c5a588(lVar9);
          func_0x00010006c090(lVar5,puVar3);
          func_0x000107c61170(lVar9);
          func_0x000107c615e8(param_1);
          func_0x000107c61170(lVar2);
          lVar2 = lVar4;
        }
        func_0x000107c61170(lVar2);
        goto LAB_101349364;
      }
    }
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 10134c99c; end: 10134c9db;  */

undefined8 FUN_10134c99c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10134c9dc; end: 10134ca1f;  */

void FUN_10134c9dc(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010134c9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10134ca20; end: 10134cacb;  */

undefined8 FUN_10134ca20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10134cacc; end: 10134cb1b;  */

void FUN_10134cacc(long param_1,long param_2)

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



/* Entry: 10134cb1c; end: 10134cb1f; -[_TtC16SCSnapEditorImpl24SnapEditorViewController shouldPopToRootViewControllerLater] */

uint FUN_10134cb1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010134b230();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10134cb20; end: 10134cb33; -[_TtC16SCSnapEditorImpl24SnapEditorViewController shouldPopToRootViewController] */

uint FUN_10134cb20(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010134b230();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10134cb34; end: 10134cb3f; -[SCSnapEditorEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cb34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74e98;
  func_0x000107c61428(param_1 + _DAT_112d74e98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10134cb40; end: 10134cb4b; -[SCSnapEditorEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cb40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74e98;
  func_0x000107c61428(param_1 + _DAT_112d74e98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10134cb4c; end: 10134cb57; -[SCSnapEditorEntryPoint deckServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cb4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74ea0;
  func_0x000107c61428(param_1 + _DAT_112d74ea0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10134cb58; end: 10134cb63; -[SCSnapEditorEntryPoint setDeckServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cb58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74ea0;
  func_0x000107c61428(param_1 + _DAT_112d74ea0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10134cb64; end: 10134cb6f; -[SCSnapEditorEntryPoint systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cb64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74ea8;
  func_0x000107c61428(param_1 + _DAT_112d74ea8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10134cb70; end: 10134cb7b; -[SCSnapEditorEntryPoint setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cb70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74ea8;
  func_0x000107c61428(param_1 + _DAT_112d74ea8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10134cb7c; end: 10134cb87; -[SCSnapEditorEntryPoint snapEditorPluginSaberService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cb7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74eb0;
  func_0x000107c61428(param_1 + _DAT_112d74eb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10134cb88; end: 10134cb93; -[SCSnapEditorEntryPoint setSnapEditorPluginSaberService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cb88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74eb0;
  func_0x000107c61428(param_1 + _DAT_112d74eb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10134cb94; end: 10134cb9f; -[SCSnapEditorEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cb94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74eb8;
  func_0x000107c61428(param_1 + _DAT_112d74eb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10134cba0; end: 10134cbab; -[SCSnapEditorEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74eb8;
  func_0x000107c61428(param_1 + _DAT_112d74eb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10134cbac; end: 10134cbb7; -[SCSnapEditorEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cbac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74ec0;
  func_0x000107c61428(param_1 + _DAT_112d74ec0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10134cbb8; end: 10134cbc3; -[SCSnapEditorEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cbb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74ec0;
  func_0x000107c61428(param_1 + _DAT_112d74ec0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10134cbc4; end: 10134cbcf; -[SCSnapEditorEntryPoint snapEditorTweakServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cbc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74ec8;
  func_0x000107c61428(param_1 + _DAT_112d74ec8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10134cbd0; end: 10134cbdb; -[SCSnapEditorEntryPoint setSnapEditorTweakServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cbd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74ec8;
  func_0x000107c61428(param_1 + _DAT_112d74ec8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10134cbdc; end: 10134cbe7; -[SCSnapEditorEntryPoint snapEditorHostServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cbdc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74ed0;
  func_0x000107c61428(param_1 + _DAT_112d74ed0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10134cbe8; end: 10134cbf3; -[SCSnapEditorEntryPoint setSnapEditorHostServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cbe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74ed0;
  func_0x000107c61428(param_1 + _DAT_112d74ed0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10134cbf4; end: 10134cbff; -[SCSnapEditorEntryPoint snapDocEditorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cbf4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74ed8;
  func_0x000107c61428(param_1 + _DAT_112d74ed8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10134cc00; end: 10134cc0b; -[SCSnapEditorEntryPoint setSnapDocEditorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cc00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d74ed8;
  func_0x000107c61428(param_1 + _DAT_112d74ed8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10134cc0c; end: 10134cc17; -[SCSnapEditorEntryPoint snapDocSendServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134cc0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d74ee0;
  func_0x000107c61428(param_1 + _DAT_112d74ee0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


