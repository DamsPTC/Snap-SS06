/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101cf5700; end: 101cf5703;  */

void FUN_101cf5700(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fe160;
  func_0x000107c61520(&UNK_10d9fe160,&UNK_1104706b8);
  puRam0000000112e1c990 = puVar1;
  return;
}



/* Entry: 101cf5704; end: 101cf5743;  */

void FUN_101cf5704(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fe160;
  func_0x000107c61520(&UNK_10d9fe160,&UNK_1104706b8);
  puRam0000000112e1c990 = puVar1;
  return;
}



/* Entry: 101cf5744; end: 101cf583f;  */

undefined1  [16] FUN_101cf5744(void)

{
  return ZEXT816(0x110470628);
}



/* Entry: 101cf5840; end: 101cf587b; -[_TtC56SCLensExplorerDeeplinkPresentationServicesImplementation39LensExplorerDeeplinkPresentationHandler init] */

void FUN_101cf5840(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101cf587c; end: 101cf58cf;  */

void FUN_101cf587c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101cf58d0; end: 101cf598f; -[_TtC56SCLensExplorerDeeplinkPresentationServicesImplementation39LensExplorerDeeplinkPresentationHandler canHandleDeepLinkUrl:] */

uint FUN_101cf58d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar3,param_3);
  func_0x000107c61174(param_1);
  puVar2 = puVar3;
  FUN_101cf5a1c();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = puVar3;
    FUN_101cf613c(puVar3);
    uVar4 = (uint)puVar2;
  }
  else {
    uVar4 = 1;
  }
  func_0x000107c61170(param_1);
  (**(code **)(lVar5 + 8))(puVar3,lVar1);
  return uVar4 & 1;
}



/* Entry: 101cf5990; end: 101cf5a1b; -[_TtC56SCLensExplorerDeeplinkPresentationServicesImplementation39LensExplorerDeeplinkPresentationHandler presentationTypeFromDeepLinkUrl:] */

void FUN_101cf5990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar3,param_3);
  puVar2 = puVar3;
  func_0x000101cf6f00(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101cf5a1c; end: 101cf5d37;  */

uint FUN_101cf5a1c(ulong param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  func_0x000107c5edc8();
  if (param_2 == 0) goto LAB_101cf5d0c;
  uVar7 = param_1;
  lVar6 = param_2;
  func_0x000107c5edbc();
  uVar9 = 0;
  if (lVar6 == 0) {
LAB_101cf5ba8:
    func_0x000107c6142c(param_2);
  }
  else {
    if ((param_1 == 0x7461686370616e73) && (param_2 == -0x1800000000000000)) {
      func_0x000107c6142c(0xe800000000000000);
LAB_101cf5aac:
      if ((uVar7 == 0x7078655f736e656c) && (lVar6 == -0x12ffff8d9a8d9094)) {
        func_0x000107c6142c();
      }
      else {
        func_0x000107c605b8(uVar7,lVar6,0x7078655f736e656c,0xed00007265726f6c,0);
        func_0x000107c6142c();
        if ((uVar7 & 1) == 0) {
LAB_101cf5d0c:
          uVar9 = 0;
          goto LAB_101cf5d10;
        }
      }
      func_0x000107c5ed74();
      uVar7 = *(ulong *)(lVar6 + 0x10);
      func_0x000107c6142c();
      if (1 < uVar7) {
        func_0x000107c5ed74();
        if (*(ulong *)(lVar6 + 0x10) < 2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101cf5d30);
          (*pcVar1)();
        }
        uVar2 = *(undefined8 *)(lVar6 + 0x30);
        uVar8 = *(undefined8 *)(lVar6 + 0x38);
        func_0x000107c61434(uVar8);
        func_0x000107c6142c(lVar6);
        lVar3 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
LAB_101cf5b68:
        func_0x000107c61538();
        param_2 = lVar3;
        func_0x000100403a6c();
        func_0x000107c61408(lVar3 + 0x20,4,PTR___sSSN_11034da80);
        func_0x0001000f66f0(uVar2,uVar8,param_2);
        uVar9 = (uint)uVar2;
        func_0x000107c6142c(uVar8);
        goto LAB_101cf5ba8;
      }
    }
    else {
      func_0x000107c605b8(param_1,param_2,0x7461686370616e73,0xe800000000000000,0);
      func_0x000107c6142c(param_2);
      if ((param_1 & 1) != 0) goto LAB_101cf5aac;
      lVar3 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      lVar4 = lVar3;
      func_0x000107c61538();
      lVar5 = lVar4;
      func_0x000100403a6c();
      func_0x000107c61408(lVar4 + 0x20,3,PTR___sSSN_11034da80);
      func_0x0001000f66f0(uVar7,lVar6,lVar5);
      func_0x000107c6142c(lVar6);
      func_0x000107c6142c();
      if ((uVar7 & 1) == 0) goto LAB_101cf5d0c;
      func_0x000107c5ed74();
      uVar7 = *(ulong *)(lVar5 + 0x10);
      func_0x000107c6142c();
      if (uVar7 < 2) goto LAB_101cf5d0c;
      func_0x000107c5ed74();
      if (*(ulong *)(lVar5 + 0x10) < 2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101cf5d34);
        (*pcVar1)();
      }
      uVar7 = *(ulong *)(lVar5 + 0x30);
      lVar6 = *(long *)(lVar5 + 0x38);
      func_0x000107c61434(lVar6);
      func_0x000107c6142c(lVar5);
      if ((uVar7 == 0x7078655f736e656c) && (lVar6 == -0x12ffff8d9a8d9094)) {
        func_0x000107c6142c();
      }
      else {
        func_0x000107c605b8(uVar7,lVar6,0x7078655f736e656c,0xed00007265726f6c,0);
        func_0x000107c6142c();
        if ((uVar7 & 1) == 0) goto LAB_101cf5d0c;
      }
      func_0x000107c5ed74();
      uVar7 = *(ulong *)(lVar6 + 0x10);
      func_0x000107c6142c();
      if (2 < uVar7) {
        func_0x000107c5ed74();
        if (*(ulong *)(lVar6 + 0x10) < 3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101cf5d38);
          (*pcVar1)();
        }
        uVar2 = *(undefined8 *)(lVar6 + 0x40);
        uVar8 = *(undefined8 *)(lVar6 + 0x48);
        func_0x000107c61434(uVar8);
        func_0x000107c6142c(lVar6);
        goto LAB_101cf5b68;
      }
    }
    uVar9 = 1;
  }
LAB_101cf5d10:
  return uVar9 & 1;
}



/* Entry: 101cf5d38; end: 101cf613b;  */

undefined1  [16] FUN_101cf5d38(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  lVar1 = 0;
  lStack_70 = param_3;
  uStack_68 = param_2;
  func_0x000107c5ebbc();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_78 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = uVar15 - extraout_x12_00;
  lVar7 = 0x112dc3380;
  func_0x0001000285a8(0x112dc3380,&UNK_10d9fe290);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar13 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar13 - extraout_x12_01;
  lVar7 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar8 - extraout_x8_01;
  lVar2 = 0;
  func_0x000107c5ec24();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar7 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ebe4(lVar10,param_1,0);
  lVar3 = lVar10;
  (**(code **)(extraout_x12_02 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x000101cf7028(lVar10,0x112d4b5b0,&UNK_10d912140);
  }
  else {
    lVar3 = lVar7;
    lStack_80 = lVar13;
    (**(code **)(extraout_x12_02 + 0x20))(lVar7,lVar10,lVar2);
    func_0x000107c5ebc4();
    if (lVar3 == 0) {
      pcVar14 = *(code **)(extraout_x12_02 + 8);
    }
    else {
      lStack_90 = lVar8;
      lStack_88 = extraout_x12_02;
      uVar9 = *(ulong *)(lVar3 + 0x10);
      lStack_a0 = lVar7;
      lStack_98 = lVar2;
      if (uVar9 != 0) {
        uVar12 = 0;
        do {
          if (*(ulong *)(lVar3 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x101cf613c);
            (*pcVar14)();
          }
          (**(code **)(lVar11 + 0x10))
                    (lVar6,lVar3 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                                   ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff)) +
                           *(long *)(lVar11 + 0x48) * uVar12,lVar1);
          pcVar14 = *(code **)(lVar11 + 0x20);
          uVar4 = uVar15;
          lVar7 = lVar6;
          (*pcVar14)(uVar15,lVar6,lVar1);
          func_0x000107c5ebb4();
          if ((uVar4 == uStack_68) && (lVar7 == lStack_70)) {
            func_0x000107c6142c(lVar3);
            lVar3 = lVar7;
LAB_101cf6010:
            func_0x000107c6142c(lVar3);
            lVar3 = lStack_90;
            (*pcVar14)(lStack_90,uVar15,lVar1);
            uVar5 = 0;
            goto LAB_101cf6034;
          }
          func_0x000107c605b8();
          func_0x000107c6142c(lVar7);
          if ((uVar4 & 1) != 0) goto LAB_101cf6010;
          uVar12 = uVar12 + 1;
          (**(code **)(lVar11 + 8))(uVar15,lVar1);
        } while (uVar9 != uVar12);
      }
      func_0x000107c6142c(lVar3);
      uVar5 = 1;
      lVar3 = lStack_90;
LAB_101cf6034:
      lVar8 = lStack_78;
      lVar2 = lStack_98;
      lVar7 = lStack_a0;
      (**(code **)(lVar11 + 0x38))(lVar3,uVar5,1,lVar1);
      lVar6 = lStack_80;
      func_0x000101cf6fd8(lVar3,lStack_80);
      lVar10 = lVar6;
      (**(code **)(lVar11 + 0x30))(lVar6,1,lVar1);
      if ((int)lVar10 != 1) {
        lVar10 = lVar8;
        (**(code **)(lVar11 + 0x20))(lVar8,lVar6,lVar1);
        func_0x000107c5ebb8();
        (**(code **)(lVar11 + 8))(lVar8,lVar1);
        func_0x000101cf7028(lVar3,0x112dc3380,&UNK_10d9fe290);
        (**(code **)(lStack_88 + 8))(lVar7,lVar2);
        goto LAB_101cf60ac;
      }
      func_0x000101cf7028(lVar3,0x112dc3380,&UNK_10d9fe290);
      pcVar14 = *(code **)(lStack_88 + 8);
    }
    (*pcVar14)(lVar7,lVar2);
  }
  lVar10 = 0;
  lVar6 = 0;
LAB_101cf60ac:
  auVar16._8_8_ = lVar6;
  auVar16._0_8_ = lVar10;
  return auVar16;
}



/* Entry: 101cf613c; end: 101cf631b;  */

uint FUN_101cf613c(ulong param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = param_1;
  func_0x000107c5edbc();
  if (param_2 != 0) {
    if ((uVar5 == 0xd000000000000011) && (param_2 == -0x7ffffffef0ff4050)) {
      func_0x000107c6142c();
    }
    else {
      func_0x000107c605b8();
      func_0x000107c6142c();
      if ((uVar5 & 1) == 0) goto LAB_101cf62d8;
    }
    func_0x000107c5ed74();
    uVar5 = *(ulong *)(param_2 + 0x10);
    func_0x000107c6142c();
    if (2 < uVar5) {
      func_0x000107c5ed74();
      if (*(ulong *)(param_2 + 0x10) < 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101cf6318);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_2 + 0x30);
      lVar3 = *(long *)(param_2 + 0x38);
      func_0x000107c61434(lVar3);
      func_0x000107c6142c(param_2);
      if ((uVar5 == 0x697463656c6c6f63) && (lVar3 == -0x14ffffffff8c9191)) {
        func_0x000107c6142c();
      }
      else {
        func_0x000107c605b8(uVar5,lVar3,0x697463656c6c6f63,0xeb00000000736e6f,0);
        func_0x000107c6142c();
        if ((uVar5 & 1) == 0) goto LAB_101cf62d8;
      }
      func_0x000107c5ed74();
      if (*(ulong *)(lVar3 + 0x10) < 3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101cf631c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(lVar3 + 0x40);
      uVar1 = *(ulong *)(lVar3 + 0x48);
      func_0x000107c6142c();
      uVar5 = uVar5 & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar5 = uVar1 >> 0x38 & 0xf;
      }
      if (uVar5 != 0) {
        lVar3 = 0x7079745f77656976;
        FUN_101cf5d38(param_1,0x7079745f77656976,0xe900000000000065);
        if (lVar3 != 0) {
          if ((param_1 == 0x7078655f736e656c) && (lVar3 == -0x12ffff8d9a8d9094)) {
            uVar4 = 1;
          }
          else {
            func_0x000107c605b8();
            uVar4 = (uint)param_1;
          }
          func_0x000107c6142c(lVar3);
          goto LAB_101cf62dc;
        }
      }
    }
  }
LAB_101cf62d8:
  uVar4 = 0;
LAB_101cf62dc:
  return uVar4 & 1;
}



/* Entry: 101cf631c; end: 101cf6fd7;  */

undefined1  [16] FUN_101cf631c(ulong param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5edc8();
  uVar3 = param_1;
  if (param_2 != 0) {
    if ((param_1 == 0x7461686370616e73) && (param_2 == 0xe800000000000000)) {
      func_0x000107c6142c();
      uVar3 = 1;
      goto LAB_101cf6398;
    }
    func_0x000107c605b8();
    func_0x000107c6142c();
    uVar3 = param_2;
    if ((param_1 & 1) != 0) {
      uVar3 = 1;
      goto LAB_101cf6398;
    }
  }
  param_2 = uVar3;
  uVar3 = 2;
LAB_101cf6398:
  func_0x000107c5ed74();
  uVar6 = *(ulong *)(param_2 + 0x10);
  func_0x000107c6142c();
  if (uVar3 < uVar6) {
    func_0x000107c5ed74();
    if (*(ulong *)(param_2 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101cf6400);
      (*pcVar2)();
    }
    lVar1 = param_2 + uVar3 * 0x10;
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    func_0x000107c61434(uVar5);
    func_0x000107c6142c(param_2);
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
  }
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar4;
  return auVar7;
}



/* Entry: 101cf6fd8; end: 101cf7067;  */

undefined8 FUN_101cf6fd8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dc3380;
  func_0x0001000285a8(0x112dc3380,&UNK_10d9fe290);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101cf7068; end: 101cf7087;  */

void FUN_101cf7068(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 101cf7088; end: 101cf713f;  */

undefined * FUN_101cf7088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  ppuVar2 = &puStack_50;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_30 = FUN_101cf7140;
  uStack_28 = 0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  pcStack_40 = FUN_101cf715c;
  puStack_38 = &UNK_1104707c8;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c3e4fc(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar3 = PTR_PTR_1126a9190;
  func_0x000107c610f8(PTR_PTR_1126a9190);
  func_0x000107c46454();
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 101cf7140; end: 101cf715b;  */

void FUN_101cf7140(void)

{
  func_0x000101cf58b0(0);
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101cf715c; end: 101cf7193;  */

void FUN_101cf715c(long param_1)

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



/* Entry: 101cf7194; end: 101cf71bf;  */

void FUN_101cf7194(long param_1,long param_2)

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



/* Entry: 101cf71c0; end: 101cf722b;  */

void FUN_101cf71c0(undefined8 param_1)

{
  if (lRam0000000112e1cae8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e687184);
  return;
}



/* Entry: 101cf722c; end: 101cf72ef;  */

void FUN_101cf722c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_40 = FUN_101cf7140;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101cf715c;
  puStack_48 = &UNK_1104707f0;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc(puVar1,param_3,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar3 = PTR_PTR_1126a9190;
  func_0x000107c610f8();
  func_0x000107c46454();
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 101cf72f0; end: 101cf72f7;  */

void FUN_101cf72f0(long param_1,long param_2)

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



/* Entry: 101cf72f8; end: 101cf73bf;  */

void FUN_101cf72f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
    auStack_68[0] = 0;
    func_0x000104888f7c(auStack_68);
  }
  else {
    func_0x0001000d224c(auStack_90);
    func_0x000107c61574(lVar1);
    FUN_101cf73c0(auStack_90,auStack_68);
    func_0x0001000a8868(auStack_68,uStack_50);
    (**(code **)(lStack_48 + 8))(param_1,param_2,uStack_50,lStack_48);
    func_0x0001000834e4(auStack_68);
  }
  return;
}



/* Entry: 101cf73c0; end: 101cf73d7;  */

undefined8 * FUN_101cf73c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101cf73d8; end: 101cf747f;  */

uint FUN_101cf73d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long unaff_x20;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x0001000d224c(auStack_90);
    func_0x000107c61574(lVar1);
    FUN_101cf73c0(auStack_90,auStack_68);
    func_0x0001000a8868(auStack_68,uStack_50);
    (**(code **)(lStack_48 + 0x10))(param_1,param_2,uStack_50,lStack_48);
    uVar2 = (uint)param_1;
    func_0x0001000834e4(auStack_68);
  }
  return uVar2 & 1;
}



/* Entry: 101cf7480; end: 101cf74a3;  */

void FUN_101cf7480(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cf74a4; end: 101cf74e7;  */

void FUN_101cf74a4(void)

{
  FUN_101cf72f8();
  return;
}



/* Entry: 101cf74e8; end: 101cf74f7;  */

void FUN_101cf74e8(undefined8 param_1)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_weakAssign_11034f5c8)(*unaff_x20 + 0x10,param_1);
  return;
}



/* Entry: 101cf74f8; end: 101cf7537;  */

void FUN_101cf74f8(void)

{
  func_0x000107c61168(&PTR_PTR_112e1cbd0);
  return;
}



/* Entry: 101cf7538; end: 101cf7593;  */

void FUN_101cf7538(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  FUN_101cf74f8();
  lVar2 = lVar1;
  func_0x000107c613fc();
  func_0x000107c61644(lVar2 + 0x10,0);
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104708b0;
  *param_1 = lVar2;
  return;
}



/* Entry: 101cf7594; end: 101cf75a3;  */

void FUN_101cf7594(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cf75a4; end: 101cf7617;  */

void FUN_101cf75a4(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112e1cc30,&UNK_10d9fe310);
  func_0x000107c613fc();
  pcVar1 = FUN_101cf7538;
  func_0x0001000bdd8c(FUN_101cf7538,0);
  uVar2 = 0;
  func_0x000100287374(0);
  func_0x000107c610f8();
  func_0x00010076c488(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 101cf7618; end: 101cf772f;  */

void FUN_101cf7618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 101cf7730; end: 101cf780b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cf7730(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112d5a5e8,&UNK_10d921370);
  func_0x000107c5cdc8();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  uVar3 = *(undefined8 *)(param_3 + _DAT_11303ff30);
  uVar2 = *(undefined8 *)(param_3 + _DAT_11303ff58);
  FUN_101cfbb08(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  FUN_101cf7e40(uVar1,uVar3,uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110470c30;
  return;
}



/* Entry: 101cf780c; end: 101cf7813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cf780c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d5a5e8,&UNK_10d921370);
  func_0x000107c5cdc8();
  func_0x000107c61180();
  uVar2 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(lVar1 + _DAT_11303ff30);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_11303ff58);
  FUN_101cfbb08(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  FUN_101cf7e40(uVar2,uVar4,uVar3);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110470c30;
  return;
}



/* Entry: 101cf7814; end: 101cf782f;  */

/* WARNING: Possible PIC construction at 0x000101cf7820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cf7824) */

void FUN_101cf7814(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101cf7830; end: 101cf787b;  */

void FUN_101cf7830(void)

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



/* Entry: 101cf787c; end: 101cf7933;  */

void FUN_101cf787c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1104709d0;
  func_0x000107c613fc(&UNK_1104709d0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  func_0x0001000285a8(0x112e1cd00,&UNK_10d9fe350);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar1);
  pcVar3 = FUN_101cf79b0;
  func_0x0001000bdd8c(FUN_101cf79b0,puVar2);
  uVar4 = 0;
  func_0x0001002adeac(0);
  func_0x000107c610f8();
  func_0x000103a1b42c(pcVar3,uVar4);
  *param_1 = pcVar3;
  return;
}



/* Entry: 101cf7934; end: 101cf79af;  */

void FUN_101cf7934(undefined8 param_1)

{
  if (lRam0000000112e1cd48 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6872a0);
  return;
}



/* Entry: 101cf79b0; end: 101cf79b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cf79b0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d5a5e8,&UNK_10d921370);
  func_0x000107c5cdc8();
  func_0x000107c61180();
  uVar2 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(lVar1 + _DAT_11303ff30);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_11303ff58);
  FUN_101cfbb08(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  FUN_101cf7e40(uVar2,uVar4,uVar3);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110470c30;
  return;
}



/* Entry: 101cf79b4; end: 101cf79f7;  */

void FUN_101cf79b4(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBOWV_11034d658 + 0x40;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0x68);
  return;
}



/* Entry: 101cf79f8; end: 101cf7a67;  */

undefined8 FUN_101cf79f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101cf7a2c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101cf7a68; end: 101cf7b4f;  */

uint FUN_101cf7a68(undefined8 param_1)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong **ppuVar3;
  long lVar4;
  uint uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong *puStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  puVar2 = unaff_x20;
  func_0x000107c614f0();
  puVar1 = PTR__swift_isaMask_11034f488;
  uVar6 = *unaff_x20;
  uVar7 = *(ulong *)PTR__swift_isaMask_11034f488;
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    ppuVar3 = &puStack_68;
    func_0x000107c6147c(ppuVar3,auStack_60,PTR___sypN_11034f1a8 + 8,puVar2,6);
    if (((ulong)ppuVar3 & 1) != 0) {
      lVar4 = (long)puStack_68 + *(long *)((*(ulong *)puVar1 & *puStack_68) + 0x68);
      func_0x000107c5fab8(lVar4,(long)unaff_x20 + *(long *)((*unaff_x20 & *(ulong *)puVar1) + 0x68),
                          *(undefined8 *)((uVar7 & uVar6) + 0x50),
                          *(undefined8 *)(*(long *)((uVar7 & uVar6) + 0x60) + 8));
      uVar5 = (uint)lVar4;
      func_0x000107c61170(puStack_68);
      goto LAB_101cf7b34;
    }
  }
  uVar5 = 0;
LAB_101cf7b34:
  return uVar5 & 1;
}



/* Entry: 101cf7b50; end: 101cf7bcf;  */

uint FUN_101cf7b50(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_101cf7a68(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101cf7bd0; end: 101cf7bef;  */

void FUN_101cf7bd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExternalMusicFetcher.WrappedKey",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cf7de0);
  (*pcVar1)();
}



/* Entry: 101cf7bf0; end: 101cf7c23;  */

void FUN_101cf7bf0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101cf7c24; end: 101cf7c4f;  */

void FUN_101cf7c24(ulong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000101cf7c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x50) + -8)
              + 8))((long)param_1 +
                    *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x68));
  return;
}



/* Entry: 101cf7c50; end: 101cf7caf;  */

void FUN_101cf7c50(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x58) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cf7cb0; end: 101cf7cbb;  */

void FUN_101cf7cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e687304);
  return;
}



/* Entry: 101cf7cbc; end: 101cf7d2b;  */

void FUN_101cf7cbc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61524(param_1,0,1,&lStack_28,param_1 + 0x68);
  }
  return;
}



/* Entry: 101cf7d2c; end: 101cf7d37;  */

void FUN_101cf7d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e687380);
  return;
}



/* Entry: 101cf7d38; end: 101cf7da7;  */

void FUN_101cf7d38(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x58);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61524(param_1,0,1,&lStack_28,param_1 + 0x68);
  }
  return;
}



/* Entry: 101cf7da8; end: 101cf7db3;  */

void FUN_101cf7da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e6873dc);
  return;
}



/* Entry: 101cf7db4; end: 101cf7ddf;  */

void FUN_101cf7db4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExternalMusicFetcher.WrappedKey",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cf7de0);
  (*pcVar1)();
}



/* Entry: 101cf7de0; end: 101cf7deb;  */

void FUN_101cf7de0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 101cf7dec; end: 101cf7e3f;  */

undefined8 FUN_101cf7dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101cf7e40(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101cf7e40; end: 101cf7f2b;  */

void FUN_101cf7e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = 0x112e1cd08;
  func_0x0001000285a8(0x112e1cd08,&UNK_10d9fe4a0);
  func_0x000107c613fc();
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  *(long *)(unaff_x20 + 0x28) = lVar1;
  lVar1 = 0x112e1cd10;
  func_0x0001000285a8(0x112e1cd10,&UNK_10d9fe360);
  func_0x000107c613fc();
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  *(long *)(unaff_x20 + 0x30) = lVar1;
  lVar1 = 0x112e1cd18;
  func_0x0001000285a8(0x112e1cd18,&UNK_10d9fe4b0);
  func_0x000107c613fc();
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  *(long *)(unaff_x20 + 0x38) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 101cf7f2c; end: 101cf7f43;  */

void FUN_101cf7f2c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf7f44,0,0);
  return;
}



/* Entry: 101cf7f44; end: 101cf827b;  */

void FUN_101cf7f44(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long unaff_x22;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x50);
  puVar3 = PTR___ss6UInt64VN_11034f048;
  puVar9 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c();
  lVar10 = *(long *)(lVar12 + 0x38);
  lVar12 = *(long *)(lVar10 + 0x10);
  puVar4 = (ulong *)0x112e1cf78;
  func_0x0001000285a8(0x112e1cf78,&UNK_10d9fe4c0);
  puVar5 = puVar4;
  func_0x000107c610f8();
  puVar8 = PTR__swift_isaMask_11034f488;
  puVar1 = (undefined8 *)
           ((long)puVar5 + *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0x68));
  *puVar1 = puVar3;
  puVar1[1] = puVar9;
  plVar11 = (long *)(unaff_x22 + 0x10);
  *plVar11 = (long)puVar5;
  *(ulong **)(unaff_x22 + 0x18) = puVar4;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c6157c(lVar10);
  func_0x000107c61434(puVar9);
  func_0x000107c61154(plVar11,puVar2);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(plVar11);
  if (lVar12 != 0) {
    lVar13 = *(long *)(unaff_x22 + 0x58);
    uVar6 = *(undefined8 *)(lVar12 + 0x10);
    func_0x000107c61174(uVar6);
    func_0x000107c61574(lVar12);
    func_0x000107c61574(lVar10);
    lVar10 = *(long *)(lVar13 + 0x30);
    lVar12 = *(long *)(lVar10 + 0x10);
    puVar4 = (ulong *)0x112e1cf88;
    func_0x0001000285a8(0x112e1cf88,&UNK_10d9fe4e0);
    puVar5 = puVar4;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)((long)puVar5 + *(long *)((*(ulong *)puVar8 & *puVar5) + 0x68));
    *puVar1 = puVar3;
    puVar1[1] = puVar9;
    plVar11 = (long *)(unaff_x22 + 0x20);
    *plVar11 = (long)puVar5;
    *(ulong **)(unaff_x22 + 0x28) = puVar4;
    puVar8 = PTR_s_init_1125d9248;
    func_0x000107c61434(puVar9);
    func_0x000107c6157c(lVar10);
    func_0x000107c61154(plVar11,puVar8);
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(plVar11);
    if (lVar12 != 0) {
      uVar7 = *(undefined8 *)(lVar12 + 0x10);
      func_0x000107c61174(uVar7);
      func_0x000107c61574(lVar12);
      func_0x000107c61574(lVar10);
      func_0x000107c6142c(puVar9);
      puVar8 = PTR_PTR_1126a6138;
      func_0x000107c610f8(PTR_PTR_1126a6138);
      func_0x000107c48e04();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101cf814c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(puVar8);
      return;
    }
    func_0x000107c61170(uVar6);
  }
  func_0x000107c61574(lVar10);
  func_0x000107c6142c();
  func_0x0001000d224c(unaff_x22 + 0x38);
  lVar12 = *(long *)(unaff_x22 + 0x38);
  *(long *)(unaff_x22 + 0x60) = lVar12;
  if (lVar12 != 0) {
    func_0x0001000285a8(0x112d5a900,&UNK_10d921528);
    func_0x000107c44154();
    func_0x000107c61180();
    lVar10 = lVar12;
    func_0x000100759c94();
    *(long *)(unaff_x22 + 0x68) = lVar10;
    func_0x000107c61170(lVar12);
    plVar11 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_101cf827c;
                    /* WARNING: Could not recover jumptable at 0x000101cf8224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_101cfb8c4();
    return;
  }
  FUN_101cf8454();
  func_0x000107c613f8(&UNK_1106bf798,puVar9,0,0);
  *puVar9 = 0x80;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101cf8278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101cf827c; end: 101cf82cf;  */

void FUN_101cf827c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x78) = param_1;
  *(undefined1 *)(lVar1 + 0x80) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf82d0,0,0);
  return;
}



/* Entry: 101cf82d0; end: 101cf8453;  */

void FUN_101cf82d0(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x78);
  if (*(char *)(unaff_x22 + 0x80) == '\x01') {
    *(long *)(unaff_x22 + 0x40) = lVar6;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x40,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    if (lVar6 != 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
      FUN_101cf8494(uVar4);
      func_0x000107c615e8(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101cf8388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar4);
      return;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c602fc(0x2a);
    func_0x000107c6142c(0xe000000000000000);
    *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
    puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
    puVar2 = (undefined1 *)0x800000010f00c120;
    func_0x000107c6142c();
    FUN_101cf8454();
    func_0x000107c613f8(&UNK_1106bf798,puVar2,0,0);
    *puVar2 = 0x43;
    func_0x000107c61654();
  }
  func_0x000107c615e8(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101cf8450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101cf8454; end: 101cf8493;  */

void FUN_101cf8454(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1cf80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3b5a8;
  func_0x000107c61520(&UNK_10dc3b5a8,&UNK_1106bf798);
  puRam0000000112e1cf80 = puVar1;
  return;
}



/* Entry: 101cf8494; end: 101cf8763;  */

void FUN_101cf8494(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar5 = param_1;
  func_0x000107c5cd58();
  func_0x000107c61180();
  uVar1 = uVar5;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = uVar1;
  func_0x000107c5cda4();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c2bb50();
  func_0x000107c61170(uVar5);
  puVar2 = PTR___ss6UInt64VN_11034f048;
  puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c6157c(uVar5);
  func_0x000107c3e734(param_1);
  func_0x000107c61180();
  FUN_101cfc0e0();
  func_0x000107c61574(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61434(puVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c5cd58(param_1);
  func_0x000107c61180();
  FUN_101cfc0e0();
  func_0x000107c61574(uVar5);
  func_0x000107c6142c(puVar3);
  func_0x000107c602fc(0x2a);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(puVar2,puVar3);
  func_0x000107c6142c(puVar3);
  uVar4 = 0xe200000000000000;
  func_0x000107c5fb78(0x202c,0xe200000000000000);
  uVar5 = param_1;
  func_0x000107c5cd58(param_1);
  func_0x000107c61180();
  uVar1 = uVar5;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = uVar1;
  func_0x000107c3e1a4(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar5;
  func_0x000107c5faec(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c5fb78(uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  uVar4 = 0xe300000000000000;
  func_0x000107c5fb78(0x202d20,0xe300000000000000);
  func_0x000107c5cd58(param_1);
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar1 = uVar5;
  func_0x000107c5cab0(uVar5);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = uVar1;
  func_0x000107c5faec(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c5fb78(uVar5,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(0x800000010f00c2a0);
  return;
}



/* Entry: 101cf8764; end: 101cf877b;  */

void FUN_101cf8764(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf877c,0,0);
  return;
}



/* Entry: 101cf877c; end: 101cf89b3;  */

void FUN_101cf877c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long unaff_x22;
  long lVar9;
  
  lVar7 = *(long *)(*(long *)(unaff_x22 + 0x48) + 0x30);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c6157c(lVar7);
  puVar2 = PTR___ss6UInt64VN_11034f048;
  puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c();
  lVar9 = *(long *)(lVar7 + 0x10);
  puVar3 = (ulong *)0x112e1cf88;
  func_0x0001000285a8(0x112e1cf88,&UNK_10d9fe4e0);
  puVar4 = puVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)
           ((long)puVar4 + *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x68));
  *puVar1 = puVar2;
  puVar1[1] = puVar6;
  plVar8 = (long *)(unaff_x22 + 0x10);
  *plVar8 = (long)puVar4;
  *(ulong **)(unaff_x22 + 0x18) = puVar3;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61434(puVar6);
  func_0x000107c61154(plVar8,puVar2);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(plVar8);
  if (lVar9 != 0) {
    uVar5 = *(undefined8 *)(lVar9 + 0x10);
    func_0x000107c61174(uVar5);
    func_0x000107c61574(lVar9);
    func_0x000107c61574(lVar7);
    func_0x000107c6142c(puVar6);
                    /* WARNING: Could not recover jumptable at 0x000101cf889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar5);
    return;
  }
  func_0x000107c61574(lVar7);
  func_0x000107c6142c();
  func_0x0001000d224c(unaff_x22 + 0x28);
  lVar9 = *(long *)(unaff_x22 + 0x28);
  *(long *)(unaff_x22 + 0x50) = lVar9;
  if (lVar9 != 0) {
    func_0x0001000285a8(0x112d5a900,&UNK_10d921528);
    func_0x000107c44154();
    func_0x000107c61180();
    lVar7 = lVar9;
    func_0x000100759c94();
    *(long *)(unaff_x22 + 0x58) = lVar7;
    func_0x000107c61170(lVar9);
    plVar8 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_101cf89b4;
                    /* WARNING: Could not recover jumptable at 0x000101cf8964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_101cfb8c4();
    return;
  }
  FUN_101cf8454();
  func_0x000107c613f8(&UNK_1106bf798,puVar6,0,0);
  *puVar6 = 0x80;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101cf89b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101cf89b4; end: 101cf8a07;  */

void FUN_101cf89b4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x68) = param_1;
  *(undefined1 *)(lVar1 + 0x70) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf8a08,0,0);
  return;
}



/* Entry: 101cf8a08; end: 101cf8bbb;  */

void FUN_101cf8a08(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x68);
  if (*(char *)(unaff_x22 + 0x70) == '\x01') {
    *(long *)(unaff_x22 + 0x30) = lVar7;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x30,uVar6,PTR___ss5ErrorWS_11034ee10);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
    if (lVar7 != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x70);
      FUN_101cf8494(uVar5);
      uVar8 = uVar5;
      func_0x000107c3e734(uVar5);
      func_0x000107c61180();
      func_0x000101cfb9f4(uVar5,uVar1);
      func_0x000107c615e8(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101cf8aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar8);
      return;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x000107c602fc(0x2a);
    func_0x000107c6142c(0xe000000000000000);
    *(undefined8 *)(unaff_x22 + 0x38) = uVar8;
    puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    puVar3 = (undefined1 *)0x800000010f00c120;
    func_0x000107c6142c();
    FUN_101cf8454();
    func_0x000107c613f8(&UNK_1106bf798,puVar3,0,0);
    *puVar3 = 0x42;
    func_0x000107c61654();
  }
  func_0x000107c615e8(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101cf8bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101cf8bbc; end: 101cf8bdb;  */

void FUN_101cf8bbc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_1;
  *(undefined8 **)(unaff_x22 + 0x158) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x160) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf8bdc,0,0);
  return;
}



/* Entry: 101cf8bdc; end: 101cf8d6b;  */

void FUN_101cf8bdc(undefined1 *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x140);
  lVar9 = *(long *)(unaff_x22 + 0x140);
  *(long *)(unaff_x22 + 0x168) = lVar9;
  if (lVar9 == 0) {
    FUN_101cf8454();
    func_0x000107c613f8(&UNK_1106bf798,param_1,0,0);
    *param_1 = 0x80;
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101cf8cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x150);
  *(long *)(unaff_x22 + 0x130) = lVar9;
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x160);
  iVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar3 != 0) {
    func_0x0001000285a8(0x112d52688,&UNK_10d9190a8);
    plVar4 = (long *)(ulong)*(uint *)(
                                     PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x170) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101cf8d6c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
    )();
    return;
  }
  uVar5 = 0x112d52688;
  func_0x0001000285a8(0x112d52688,&UNK_10d9190a8);
  *(undefined8 *)(unaff_x22 + 0x178) = uVar5;
  func_0x000107c615ac(unaff_x22 + 0x10,uVar5);
  *(long *)(unaff_x22 + 0x148) = unaff_x22 + 0x10;
  plVar4 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x180) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101cf8dc8;
  lVar1 = *(long *)(unaff_x22 + 0x158);
  lVar2 = *(long *)(unaff_x22 + 0x160);
  lVar8 = *(long *)(unaff_x22 + 0x150);
  plVar4[0x10] = lVar9;
  plVar4[0x11] = lVar2;
  plVar4[0xe] = lVar8;
  plVar4[0xf] = lVar1;
  plVar4[0xd] = unaff_x22 + 0x148;
  lVar9 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar7 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xf;
  uVar6 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x12] = uVar6;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x13] = uVar7;
  lVar9 = 0x112e1d090;
  func_0x0001000285a8(0x112e1d090,&UNK_10d9fe618);
  plVar4[0x14] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar4[0x15] = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x16] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf913c,0,0);
  return;
}



/* Entry: 101cf8d6c; end: 101cf8dc7;  */

void FUN_101cf8d6c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101cf9028;
  }
  else {
    *(long *)(lVar2 + 0x1a0) = unaff_x20;
    pcVar1 = (code *)0x101cf905c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101cf8dc8; end: 101cf8e73;  */

void FUN_101cf8dc8(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x188) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x180));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf8ef8,0,0);
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(lVar2 + 400) = plVar1;
  func_0x0001000285a8(0x112d52690,&UNK_10d9190b0);
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_101cf8e74;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101cf8e74; end: 101cf8ef7;  */

void FUN_101cf8e74(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101cf8ebc,0,0);
  return;
}



/* Entry: 101cf8ef8; end: 101cf8f8b;  */

void FUN_101cf8ef8(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(unaff_x22 + 0x10,uVar3,uVar1,PTR___ss5ErrorWS_11034ee10);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar2;
  func_0x0001000285a8(0x112d52690,&UNK_10d9190b0);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101cf8f8c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101cf8f8c; end: 101cf8fd3;  */

void FUN_101cf8f8c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x198));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf8fd4,0,0);
  return;
}



/* Entry: 101cf8fd4; end: 101cf9027;  */

void FUN_101cf8fd4(void)

{
  long unaff_x22;
  
  func_0x000107c615a8(unaff_x22 + 0x10);
  func_0x000107c61654();
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x188);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101cf905c,0,0);
  return;
}



/* Entry: 101cf9028; end: 101cf913b;  */

void FUN_101cf9028(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x168));
                    /* WARNING: Could not recover jumptable at 0x000101cf9058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101cf913c; end: 101cf94af;  */

void FUN_101cf913c(void)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0x70) + 0x10);
  if (lVar8 != 0) {
    lVar13 = *(long *)(unaff_x22 + 0x78);
    puVar14 = (undefined8 *)(*(long *)(unaff_x22 + 0x70) + 0x20);
    do {
      while( true ) {
        uVar11 = *puVar14;
        lVar15 = *(long *)(lVar13 + 0x30);
        *(undefined8 *)(unaff_x22 + 0x58) = uVar11;
        func_0x000107c6157c(lVar15);
        puVar1 = PTR___ss6UInt64VN_11034f048;
        puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        func_0x000107c6057c();
        lVar17 = *(long *)(lVar15 + 0x10);
        puVar2 = (ulong *)0x112e1cf88;
        func_0x0001000285a8(0x112e1cf88,&UNK_10d9fe4e0);
        puVar3 = puVar2;
        func_0x000107c610f8();
        puVar7 = (undefined8 *)
                 ((long)puVar3 +
                 *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x68));
        *puVar7 = puVar1;
        puVar7[1] = puVar6;
        *(ulong **)(unaff_x22 + 0x48) = puVar3;
        *(ulong **)(unaff_x22 + 0x50) = puVar2;
        puVar1 = PTR_s_init_1125d9248;
        func_0x000107c61434(puVar6);
        lVar4 = unaff_x22 + 0x48;
        func_0x000107c61154(lVar4,puVar1);
        func_0x000107c4d9c0();
        func_0x000107c61180();
        func_0x000107c6142c(puVar6);
        func_0x000107c61170(lVar4);
        func_0x000107c61574(lVar15);
        if (lVar17 != 0) break;
        uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
        uVar16 = *(ulong *)(unaff_x22 + 0x80);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
        lVar4 = 0;
        func_0x000107c5fd0c();
        lVar17 = *(long *)(lVar4 + -8);
        (**(code **)(lVar17 + 0x38))(uVar9,1,1,lVar4);
        puVar1 = &UNK_110470ca0;
        func_0x000107c613fc(&UNK_110470ca0,0x38,7);
        *(long *)(puVar1 + 0x10) = 0;
        *(undefined8 *)(puVar1 + 0x18) = 0;
        *(ulong *)(puVar1 + 0x20) = uVar16;
        *(undefined8 *)(puVar1 + 0x28) = uVar11;
        *(undefined8 *)(puVar1 + 0x30) = uVar10;
        func_0x0001000abe04(uVar9,uVar12);
        (**(code **)(lVar17 + 0x30))(uVar12,1,lVar4);
        func_0x000107c615f0(uVar16);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
        if ((int)uVar12 == 1) {
          func_0x0001000abe54(uVar11);
          uVar16 = 0x3100;
        }
        else {
          func_0x000107c5fd08();
          (**(code **)(lVar17 + 8))(uVar11,lVar4);
          uVar16 = uVar16 & 0xff | 0x3100;
        }
        lVar4 = *(long *)(puVar1 + 0x10);
        if (lVar4 == 0) {
          lVar17 = 0;
          lVar15 = 0;
        }
        else {
          lVar15 = *(long *)(puVar1 + 0x18);
          lVar17 = lVar4;
          func_0x000107c614f0();
          func_0x000107c615f0(lVar4);
          func_0x000107c5fca8();
          func_0x000107c615e8(lVar4);
        }
        uVar12 = **(undefined8 **)(unaff_x22 + 0x68);
        func_0x000107c6157c(puVar1);
        uVar11 = 0x112d52688;
        func_0x0001000285a8(0x112d52688,&UNK_10d9190a8);
        puVar7 = (undefined8 *)0x0;
        if (lVar15 != 0 || lVar17 != 0) {
          *(undefined8 *)(unaff_x22 + 0x10) = 0;
          *(undefined8 *)(unaff_x22 + 0x18) = 0;
          *(long *)(unaff_x22 + 0x20) = lVar17;
          *(long *)(unaff_x22 + 0x28) = lVar15;
          puVar7 = (undefined8 *)(unaff_x22 + 0x10);
        }
        uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
        *(undefined8 *)(unaff_x22 + 0x30) = 1;
        *(undefined8 **)(unaff_x22 + 0x38) = puVar7;
        *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
        func_0x000107c615bc(uVar16,unaff_x22 + 0x30,uVar11,&UNK_10d9fe628,puVar1);
        func_0x000107c61574(puVar1);
        func_0x000107c61574(uVar16);
        func_0x0001000abe54(uVar9);
        lVar8 = lVar8 + -1;
        puVar14 = puVar14 + 1;
        if (lVar8 == 0) goto LAB_101cf93fc;
      }
      func_0x000107c61574(lVar17);
      lVar8 = lVar8 + -1;
      puVar14 = puVar14 + 1;
    } while (lVar8 != 0);
  }
LAB_101cf93fc:
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar9 = **(undefined8 **)(unaff_x22 + 0x68);
  uVar11 = 0x112d52688;
  func_0x0001000285a8(0x112d52688,&UNK_10d9190a8);
  uVar12 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd80(uVar10,uVar9,uVar11,uVar12,PTR___ss5ErrorWS_11034ee10);
  *(undefined **)(unaff_x22 + 0xb8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScg8IteratorV4nextxSgyYaKFTu_11034fe80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101cf94b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg8IteratorV4nextxSgyYaKF_11034fe78)
            (plVar5,unaff_x22 + 0x60,*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 101cf94b0; end: 101cf950b;  */

void FUN_101cf94b0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101cf950c;
  }
  else {
    pcVar1 = FUN_101cf9750;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101cf950c; end: 101cf974f;  */

void FUN_101cf950c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  ulong uVar11;
  ulong uVar12;
  
  lVar10 = *(long *)(unaff_x22 + 0x60);
  if (lVar10 == 1) {
    uVar4 = *(ulong *)(unaff_x22 + 0xb8);
    (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))
              (*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0xa0));
    if (uVar4 >> 0x3e == 0) {
      puVar6 = *(undefined1 **)((uVar4 & 0xffffffffffffff8) + 0x10);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    }
    else {
      puVar6 = (undefined1 *)(uVar4 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < *(undefined1 **)(unaff_x22 + 0xb8)) {
        puVar6 = *(undefined1 **)(unaff_x22 + 0xb8);
      }
      func_0x000107c60480();
      uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    }
    if (puVar6 == (undefined1 *)0x0) {
      FUN_101cf8454();
      func_0x000107c613f8(&UNK_1106bf798,puVar6,0,0);
      *puVar6 = 2;
      func_0x000107c61654();
      func_0x000107c6142c(uVar9);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
      func_0x000107c615c0(uVar1);
      func_0x000107c615c0(uVar9);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    }
    else {
      uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
      func_0x000107c6142c(uVar9);
      func_0x000107c615c0(uVar8);
      func_0x000107c615c0(uVar2);
      func_0x000107c615c0(uVar1);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x000101cf9710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (lVar10 != 0) {
    uVar12 = *(ulong *)(unaff_x22 + 0xb8);
    FUN_101cf8494(lVar10);
    lVar3 = lVar10;
    func_0x000107c3e734();
    func_0x000107c61180();
    uVar4 = uVar12;
    func_0x000107c61550();
    uVar11 = *(ulong *)(unaff_x22 + 0xb8);
    if ((((int)uVar4 == 0) || ((uVar12 >> 0x3e & 1) != 0)) || (uVar4 = uVar11, (long)uVar11 < 0)) {
      if (uVar11 >> 0x3e == 0) {
        uVar12 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar12 = uVar12 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar11) {
          uVar12 = uVar11;
        }
        func_0x000107c60480(uVar12);
        uVar11 = *(ulong *)(unaff_x22 + 0xb8);
      }
      uVar4 = 0;
      FUN_101cfbc08(0,uVar12 + 1,1,uVar11);
      uVar12 = uVar4;
    }
    uVar12 = uVar12 & 0xffffffffffffff8;
    uVar11 = *(ulong *)(uVar12 + 0x10);
    uVar7 = uVar4;
    if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar11) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
      FUN_101cfbc08(uVar7,uVar11 + 1,1,uVar4);
      uVar12 = uVar7 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar12 + 0x10) = uVar11 + 1;
    *(long *)(uVar12 + uVar11 * 8 + 0x20) = lVar3;
    func_0x000100fd71bc(lVar10);
    *(ulong *)(unaff_x22 + 0xb8) = uVar7;
  }
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScg8IteratorV4nextxSgyYaKFTu_11034fe80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101cf94b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg8IteratorV4nextxSgyYaKF_11034fe78)
            (plVar5,(long *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 101cf9750; end: 101cf97b7;  */

void FUN_101cf9750(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))
            (*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101cf97b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101cf97b8; end: 101cf97d3;  */

void FUN_101cf97b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf97d4,0,0);
  return;
}



/* Entry: 101cf97d4; end: 101cf984b;  */

/* WARNING: Removing unreachable block (ram,0x000101cf97f8) */

void FUN_101cf97d4(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c5fd64();
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101cf984c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
  return;
}



/* Entry: 101cf984c; end: 101cf9893;  */

void FUN_101cf984c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf9894,0,0);
  return;
}



/* Entry: 101cf9894; end: 101cf9943;  */

void FUN_101cf9894(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x0001000285a8(0x112d5a900,&UNK_10d921528);
  func_0x000107c44154();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000100759c94();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000107c61170(uVar1);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101cf9944;
                    /* WARNING: Could not recover jumptable at 0x000101cf9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101cfb8c4();
  return;
}



/* Entry: 101cf9944; end: 101cf9997;  */

void FUN_101cf9944(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x50) = param_1;
  *(undefined1 *)(lVar1 + 0x58) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf9998,0,0);
  return;
}



/* Entry: 101cf9998; end: 101cf9ac3;  */

void FUN_101cf9998(void)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x50);
  if (*(char *)(unaff_x22 + 0x58) == '\x01') {
    *(long *)(unaff_x22 + 0x10) = lVar5;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
    if (lVar5 == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
      func_0x000107c602fc(0x34);
      func_0x000107c5fb78(0xd000000000000032,0x800000010f00c260);
      *(undefined8 *)(unaff_x22 + 0x18) = uVar4;
      puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar3);
      func_0x000107c6142c(0xe000000000000000);
    }
    **(undefined8 **)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x50);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101cf9ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101cf9ac4; end: 101cf9adb;  */

void FUN_101cf9ac4(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf9adc,0,0);
  return;
}



/* Entry: 101cf9adc; end: 101cf9d2b;  */

void FUN_101cf9adc(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined *puVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  long unaff_x22;
  long lVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  
  lVar11 = *(long *)(*(long *)(unaff_x22 + 0x88) + 0x28);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c6157c(lVar11);
  puVar6 = PTR___ss6UInt64VN_11034f048;
  puVar9 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c();
  lVar13 = *(long *)(lVar11 + 0x10);
  puVar7 = (ulong *)0x112e1cf90;
  func_0x0001000285a8(0x112e1cf90,&UNK_10d9fe510);
  puVar8 = puVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)
           ((long)puVar8 + *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar8) + 0x68));
  *puVar1 = puVar6;
  puVar1[1] = puVar9;
  plVar12 = (long *)(unaff_x22 + 0x58);
  *plVar12 = (long)puVar8;
  *(ulong **)(unaff_x22 + 0x60) = puVar7;
  puVar6 = PTR_s_init_1125d9248;
  func_0x000107c61434(puVar9);
  func_0x000107c61154(plVar12,puVar6);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(plVar12);
  if (lVar13 != 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar3 = *(undefined8 *)(lVar13 + 0x10);
    uVar4 = *(undefined8 *)(lVar13 + 0x18);
    uVar15 = *(undefined4 *)(lVar13 + 0x20);
    uVar5 = *(undefined1 *)(lVar13 + 0x24);
    func_0x000107c61434(uVar4);
    func_0x000107c61574(lVar13);
    func_0x000107c61574(lVar11);
    func_0x000107c6142c(puVar9);
    func_0x000107c602fc(0x2b);
    func_0x000107c6142c(0xe000000000000000);
    *(undefined8 *)(unaff_x22 + 0x78) = uVar14;
    puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c6142c(0x800000010f00c180);
                    /* WARNING: Could not recover jumptable at 0x000101cf9c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar15,uVar3,uVar4,uVar5);
    return;
  }
  func_0x000107c61574(lVar11);
  func_0x000107c6142c(puVar9);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar13 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar3);
  piVar10 = *(int **)(lVar13 + 0x28);
  iVar2 = *piVar10;
  plVar12 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_101cf9d2c;
                    /* WARNING: Could not recover jumptable at 0x000101cf9d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar10))(*(undefined8 *)(unaff_x22 + 0x80),uVar3,lVar13);
  return;
}



/* Entry: 101cf9d2c; end: 101cf9d7f;  */

void FUN_101cf9d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long **)(lVar1 + 0x38) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined8 *)(lVar1 + 0x48) = param_2;
  *(undefined8 *)(lVar1 + 0x50) = param_3;
  *(undefined8 *)(lVar1 + 0x98) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf9d80,0,0);
  return;
}



/* Entry: 101cf9d80; end: 101cf9ed3;  */

void FUN_101cf9d80(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined4 uVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x98);
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar1 = *(undefined4 *)(unaff_x22 + 0x54);
    uVar6 = *(undefined4 *)(unaff_x22 + 0x50);
    func_0x0001000834e4(unaff_x22 + 0x10);
    FUN_101cf9ed4(uVar6,uVar5,lVar4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101cf9e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar6,uVar5,lVar4,uVar1);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c602fc(0x26);
  func_0x000107c6142c(0xe000000000000000);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
  puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  puVar2 = (undefined1 *)0x800000010f00c150;
  func_0x000107c6142c();
  FUN_101cf8454();
  func_0x000107c613f8(&UNK_1106bf798,puVar2,0,0);
  *puVar2 = 0x40;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101cf9ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101cf9ed4; end: 101cfa0a3;  */

void FUN_101cf9ed4(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  ulong *puStack_80;
  ulong *puStack_78;
  
  lVar10 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c6157c(lVar10);
  puVar9 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  puVar2 = PTR___ss6UInt64VN_11034f048;
  puVar3 = PTR___ss6UInt64VN_11034f048;
  puVar8 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c();
  lVar4 = 0x112e1d080;
  func_0x0001000285a8(0x112e1d080,&UNK_10d9fe608);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = param_2;
  *(undefined8 *)(lVar4 + 0x18) = param_3;
  *(undefined4 *)(lVar4 + 0x20) = param_1;
  *(undefined1 *)(lVar4 + 0x24) = param_4;
  uVar11 = *(undefined8 *)(lVar10 + 0x10);
  puVar5 = (ulong *)0x112e1cf90;
  func_0x0001000285a8(0x112e1cf90,&UNK_10d9fe510);
  puVar6 = puVar5;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)
           ((long)puVar6 + *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x68));
  *puVar1 = puVar3;
  puVar1[1] = puVar8;
  puVar3 = PTR_s_init_1125d9248;
  puStack_80 = puVar6;
  puStack_78 = puVar5;
  func_0x000107c61438(param_3,2);
  func_0x000107c61434(puVar8);
  ppuVar7 = &puStack_80;
  func_0x000107c61154(ppuVar7,puVar3);
  func_0x000107c56bcc(uVar11);
  func_0x000107c61574(lVar10);
  func_0x000107c6142c(puVar8);
  func_0x000107c6142c(param_3);
  func_0x000107c61574(lVar4);
  func_0x000107c61170(ppuVar7);
  func_0x000107c602fc(0x1d);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c6057c(puVar2,puVar9);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar9);
  func_0x000107c6142c(0x800000010f00c210);
  return;
}



/* Entry: 101cfa0a4; end: 101cfa0c3;  */

void FUN_101cfa0a4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x170) = param_1;
  *(undefined8 **)(unaff_x22 + 0x178) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x180) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cfa0c4,0,0);
  return;
}



/* Entry: 101cfa0c4; end: 101cfa207;  */

void FUN_101cfa0c4(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar9 = unaff_x22 + 0x140;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x170);
  func_0x0001000d224c(lVar9);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar10;
  *(long *)(unaff_x22 + 0x130) = lVar9;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar5;
  iVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar3 != 0) {
    func_0x0001000285a8(0x112e1cf98,&UNK_10d9fe530);
    plVar4 = (long *)(ulong)*(uint *)(
                                     PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x188) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101cfa208;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
    )();
    return;
  }
  uVar5 = 0x112e1cf98;
  func_0x0001000285a8(0x112e1cf98,&UNK_10d9fe530);
  *(undefined8 *)(unaff_x22 + 400) = uVar5;
  func_0x000107c615ac(unaff_x22 + 0x10,uVar5);
  *(long *)(unaff_x22 + 0x168) = unaff_x22 + 0x10;
  plVar4 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101cfa264;
  lVar1 = *(long *)(unaff_x22 + 0x178);
  lVar2 = *(long *)(unaff_x22 + 0x180);
  lVar8 = *(long *)(unaff_x22 + 0x170);
  plVar4[0x1f] = lVar9;
  plVar4[0x20] = lVar2;
  plVar4[0x1d] = lVar8;
  plVar4[0x1e] = lVar1;
  plVar4[0x1c] = unaff_x22 + 0x168;
  lVar9 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar7 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xf;
  uVar6 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x21] = uVar6;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x22] = uVar7;
  lVar9 = 0x112e1d078;
  func_0x0001000285a8(0x112e1d078,&UNK_10d9fe5f0);
  plVar4[0x23] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar4[0x24] = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x25] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cfa5d8,0,0);
  return;
}



/* Entry: 101cfa208; end: 101cfa263;  */

void FUN_101cfa208(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x188));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101cfa4c4;
  }
  else {
    *(long *)(lVar2 + 0x1b8) = unaff_x20;
    pcVar1 = (code *)0x101cfa4f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101cfa264; end: 101cfa30f;  */

void FUN_101cfa264(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x1a0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x198));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101cfa394,0,0);
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x1a8) = plVar1;
  func_0x0001000285a8(0x112e1cfa0,&UNK_10d9fe538);
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_101cfa310;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101cfa310; end: 101cfa393;  */

void FUN_101cfa310(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101cfa358,0,0);
  return;
}



/* Entry: 101cfa394; end: 101cfa427;  */

void FUN_101cfa394(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 400);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(unaff_x22 + 0x10,uVar3,uVar1,PTR___ss5ErrorWS_11034ee10);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1b0) = plVar2;
  func_0x0001000285a8(0x112e1cfa0,&UNK_10d9fe538);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101cfa428;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101cfa428; end: 101cfa46f;  */

void FUN_101cfa428(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cfa470,0,0);
  return;
}



/* Entry: 101cfa470; end: 101cfa4c3;  */

void FUN_101cfa470(void)

{
  long unaff_x22;
  
  func_0x000107c615a8(unaff_x22 + 0x10);
  func_0x000107c61654();
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x1a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101cfa4f8,0,0);
  return;
}



/* Entry: 101cfa4c4; end: 101cfa5d7;  */

void FUN_101cfa4c4(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x140);
                    /* WARNING: Could not recover jumptable at 0x000101cfa4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101cfa5d8; end: 101cfa94f;  */

void FUN_101cfa5d8(void)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0xe8) + 0x10);
  if (lVar8 != 0) {
    lVar13 = *(long *)(unaff_x22 + 0xf0);
    puVar14 = (undefined8 *)(*(long *)(unaff_x22 + 0xe8) + 0x20);
    do {
      while( true ) {
        uVar11 = *puVar14;
        lVar15 = *(long *)(lVar13 + 0x28);
        *(undefined8 *)(unaff_x22 + 200) = uVar11;
        func_0x000107c6157c(lVar15);
        puVar1 = PTR___ss6UInt64VN_11034f048;
        puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        func_0x000107c6057c();
        lVar17 = *(long *)(lVar15 + 0x10);
        puVar2 = (ulong *)0x112e1cf90;
        func_0x0001000285a8(0x112e1cf90,&UNK_10d9fe510);
        puVar3 = puVar2;
        func_0x000107c610f8();
        puVar7 = (undefined8 *)
                 ((long)puVar3 +
                 *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x68));
        *puVar7 = puVar1;
        puVar7[1] = puVar6;
        *(ulong **)(unaff_x22 + 0x88) = puVar3;
        *(ulong **)(unaff_x22 + 0x90) = puVar2;
        puVar1 = PTR_s_init_1125d9248;
        func_0x000107c61434(puVar6);
        lVar4 = unaff_x22 + 0x88;
        func_0x000107c61154(lVar4,puVar1);
        func_0x000107c4d9c0();
        func_0x000107c61180();
        func_0x000107c6142c(puVar6);
        func_0x000107c61170(lVar4);
        func_0x000107c61574(lVar15);
        if (lVar17 != 0) break;
        uVar16 = *(ulong *)(unaff_x22 + 0x108);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
        uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
        lVar4 = 0;
        func_0x000107c5fd0c();
        lVar17 = *(long *)(lVar4 + -8);
        (**(code **)(lVar17 + 0x38))(uVar9,1,1,lVar4);
        func_0x000101209b40(uVar12,unaff_x22 + 0x10);
        puVar1 = &UNK_110470c78;
        func_0x000107c613fc(&UNK_110470c78,0x58,7);
        *(long *)(puVar1 + 0x10) = 0;
        *(undefined8 *)(puVar1 + 0x18) = 0;
        func_0x000101209b84(unaff_x22 + 0x10,puVar1 + 0x20);
        *(undefined8 *)(puVar1 + 0x48) = uVar11;
        *(undefined8 *)(puVar1 + 0x50) = uVar10;
        func_0x0001000abe04(uVar9,uVar16);
        (**(code **)(lVar17 + 0x30))(uVar16,1,lVar4);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x108);
        if ((int)uVar16 == 1) {
          func_0x0001000abe54(uVar11);
          uVar16 = 0x3100;
        }
        else {
          func_0x000107c5fd08();
          (**(code **)(lVar17 + 8))(uVar11,lVar4);
          uVar16 = uVar16 & 0xff | 0x3100;
        }
        lVar4 = *(long *)(puVar1 + 0x10);
        if (lVar4 == 0) {
          lVar17 = 0;
          lVar15 = 0;
        }
        else {
          lVar15 = *(long *)(puVar1 + 0x18);
          lVar17 = lVar4;
          func_0x000107c614f0();
          func_0x000107c615f0(lVar4);
          func_0x000107c5fca8();
          func_0x000107c615e8(lVar4);
        }
        uVar12 = **(undefined8 **)(unaff_x22 + 0xe0);
        func_0x000107c6157c(puVar1);
        uVar11 = 0x112e1cf98;
        func_0x0001000285a8(0x112e1cf98,&UNK_10d9fe530);
        puVar7 = (undefined8 *)0x0;
        if (lVar15 != 0 || lVar17 != 0) {
          *(undefined8 *)(unaff_x22 + 0x38) = 0;
          *(undefined8 *)(unaff_x22 + 0x40) = 0;
          *(long *)(unaff_x22 + 0x48) = lVar17;
          *(long *)(unaff_x22 + 0x50) = lVar15;
          puVar7 = (undefined8 *)(unaff_x22 + 0x38);
        }
        uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
        *(undefined8 *)(unaff_x22 + 0x58) = 1;
        *(undefined8 **)(unaff_x22 + 0x60) = puVar7;
        *(undefined8 *)(unaff_x22 + 0x68) = uVar12;
        func_0x000107c615bc(uVar16,unaff_x22 + 0x58,uVar11,&UNK_10d9fe600,puVar1);
        func_0x000107c61574(puVar1);
        func_0x000107c61574(uVar16);
        func_0x0001000abe54(uVar9);
        lVar8 = lVar8 + -1;
        puVar14 = puVar14 + 1;
        if (lVar8 == 0) goto LAB_101cfa89c;
      }
      func_0x000107c61574(lVar17);
      lVar8 = lVar8 + -1;
      puVar14 = puVar14 + 1;
    } while (lVar8 != 0);
  }
LAB_101cfa89c:
  uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar9 = **(undefined8 **)(unaff_x22 + 0xe0);
  uVar11 = 0x112e1cf98;
  func_0x0001000285a8(0x112e1cf98,&UNK_10d9fe530);
  uVar12 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd80(uVar10,uVar9,uVar11,uVar12,PTR___ss5ErrorWS_11034ee10);
  *(undefined **)(unaff_x22 + 0x130) = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScg8IteratorV4nextxSgyYaKFTu_11034fe80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x138) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101cfa950;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg8IteratorV4nextxSgyYaKF_11034fe78)
            (plVar5,unaff_x22 + 0x70,*(undefined8 *)(unaff_x22 + 0x118));
  return;
}



/* Entry: 101cfa950; end: 101cfa9ab;  */

void FUN_101cfa950(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x140) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x138));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101cfa9ac;
  }
  else {
    pcVar1 = FUN_101cfad50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}


