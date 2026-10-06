/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d4e410; end: 102d4e62b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d4e410(long param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar11 = param_2 & 0xffffffffffffff8;
    if (param_2 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar9 = uVar11;
      if (0x7fffffffffffffff < param_2) {
        uVar9 = param_2;
      }
      func_0x000107c60480();
    }
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar10 = 0;
    while (uVar9 != uVar10) {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4e618);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(param_2 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar10;
        func_0x000100fb0ef8(uVar10,param_2);
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4e614);
        (*pcVar1)();
      }
      uVar12 = uVar10 + 1;
      uVar3 = uVar2;
      func_0x000107c4c9b0();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      uVar10 = uVar10 + 1;
      if (uVar3 != 0) {
        puVar5 = puVar6;
        func_0x000107c61550();
        if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
           (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar4 = puVar6;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          func_0x0001016dbd60(0,puVar4 + 1,1,puVar6);
        }
        uVar2 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar10 = *(ulong *)(uVar2 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar10) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar2 + 0x18));
          func_0x0001016dbd60(puVar6,uVar10 + 1,1,puVar5);
          uVar2 = (ulong)puVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar2 + 0x10) = uVar10 + 1;
        *(ulong *)(uVar2 + uVar10 * 8 + 0x20) = uVar3;
        uVar10 = uVar12;
      }
    }
    lVar7 = param_1 + _DAT_112f10fc0;
    func_0x000107c61618();
    if (lVar7 == 0) {
      func_0x000107c6142c(puVar6);
      func_0x000107c61170(param_1);
    }
    else {
      lVar8 = lVar7 + _DAT_112f10ee0;
      func_0x000107c61618();
      if (lVar8 != 0) {
        FUN_102d51dc0(puVar6,1);
        func_0x000107c615e8(lVar8);
      }
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar7);
      func_0x000107c6142c(puVar6);
    }
  }
  return;
}



/* Entry: 102d4e62c; end: 102d4e64f; -[_TtC38SCGenerativeAIOnboardingImplementation38GenerativeAIOnboardingCameraRollRouter onItemsSelectionChangedWithItems:] */

void FUN_102d4e62c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_102d4fe44(0,0x112d4c1d0,&PTR_PTR_1126c66e0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_102d4e318(param_3,"onItemsSelectionChanged(with:)",&UNK_1105c8f68,0x102d4fe00,&UNK_1105c8f80);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102d4e650; end: 102d4e6ef;  */

void FUN_102d4e650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_102d4fe44(0,0x112d4c1d0,&PTR_PTR_1126c66e0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_102d4e318(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102d4e6f0; end: 102d4e92f;  */

void FUN_102d4e6f0(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "onSkipPressed()";
  func_0x0001000c10c0("onSkipPressed()");
  func_0x000107c61180();
  puVar2 = &UNK_1105c8c70;
  func_0x000107c613fc(&UNK_1105c8c70,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_40 = 0x102d4fde0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105c8dc8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102d4e930; end: 102d4e957; -[_TtC38SCGenerativeAIOnboardingImplementation38GenerativeAIOnboardingCameraRollRouter onSkipPressed] */

void FUN_102d4e930(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102d4e6f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d4e958; end: 102d4e9bb; -[_TtC38SCGenerativeAIOnboardingImplementation38GenerativeAIOnboardingCameraRollRouter presentationControllerDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000102d4e9a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d4e9a8) */

void FUN_102d4e958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d4fd34(&DAT_112f10fb0,&DAT_112f10fc0,FUN_102d4dc3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d4e9bc; end: 102d4e9df; -[_TtC38SCGenerativeAIOnboardingImplementation38GenerativeAIOnboardingCameraRollRouter adaptivePresentationStyleForPresentationController:] */

undefined8 FUN_102d4e9bc(void)

{
  return 1;
}



/* Entry: 102d4e9e0; end: 102d4ecdf;  */

/* WARNING: Possible PIC construction at 0x000102d4ea98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d4eaec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d4eb04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d4eaf0) */
/* WARNING: Removing unreachable block (ram,0x000102d4ea9c) */
/* WARNING: Removing unreachable block (ram,0x000102d4eb08) */

void FUN_102d4e9e0(long param_1,ulong param_2,char param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar7 = &puStack_90;
  lVar2 = param_1;
  if ((param_2 & 1) != 0) {
    if (param_3 == '\x01') {
      func_0x000102d5b10c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 3;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(long *)(lVar2 + 0x20) = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c5de94();
      func_0x000107c61180();
      uVar3 = 0;
      FUN_102d4fe44(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
      func_0x000107c5fc54(unaff_x20,uVar3);
      goto code_r0x000107c61170;
    }
    func_0x000107c4f6f4();
    func_0x000107c5cf40();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    lVar2 = 0;
    if (unaff_x20 != 0) {
      pcStack_70 = FUN_102d4ece0;
      puStack_68 = (undefined *)0x0;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1013c1f34;
      puStack_78 = &UNK_1105c8e90;
      func_0x000107c60bc4(&puStack_90);
      puVar5 = &UNK_1105c8e00;
      func_0x000107c613fc(&UNK_1105c8e00,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_1105c8ec8;
      func_0x000107c613fc(&UNK_1105c8ec8,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(long *)(puVar6 + 0x18) = param_1;
      pcStack_70 = (code *)0x102d4fdf8;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1013c1f34;
      puStack_78 = &UNK_1105c8ee0;
      puStack_68 = puVar6;
      func_0x000107c60bc4(&puStack_90);
      puVar1 = puStack_68;
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar1);
      func_0x000107c3dcb8(unaff_x20);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(unaff_x20);
      return;
    }
  }
  func_0x000102d5b10c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 3;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(long *)(lVar2 + 0x20) = param_1;
  uVar3 = 0;
  FUN_102d4fe44(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x000107c61174(param_1);
  unaff_x20 = lVar2;
  func_0x000107c5fc48(lVar2,uVar3);
  func_0x000107c61574(lVar2);
  func_0x000107c5a570();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 102d4ece0; end: 102d4ece3;  */

void FUN_102d4ece0(void)

{
  return;
}



/* Entry: 102d4ece4; end: 102d4ee3f;  */

void FUN_102d4ece4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000102d5b10c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x20) = param_3;
    uVar2 = 0;
    FUN_102d4fe44(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c61174(param_3);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c5a570(param_2);
    func_0x000107c61170(param_2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102d4ee40; end: 102d4ee63;  */

void FUN_102d4ee40(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 102d4ee64; end: 102d4f247;  */

undefined * FUN_102d4ee64(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
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
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d4f054);
      (*pcVar2)();
    }
    puVar6 = puStack_68;
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        func_0x000107c61174();
        uVar4 = 0x112d74dc8;
        func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        func_0x000101351ca4(uVar7,param_1);
        uVar4 = 0x112d74dc8;
        uStack_90 = uVar3;
        func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 102d4f248; end: 102d4f25b;  */

void FUN_102d4f248(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x000102d4f768(uVar2 + uVar4,1,FUN_102d55dbc);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    (*(code *)0x102d4f984)
              (uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
               (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4f350);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4f354);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4f34c);
  (*pcVar1)();
}



/* Entry: 102d4f25c; end: 102d4f353;  */

void FUN_102d4f25c(ulong param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x000102d4f768(uVar2 + uVar4,1,param_2);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    (*param_3)(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
               (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4f350);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4f354);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4f34c);
  (*pcVar1)();
}



/* Entry: 102d4f354; end: 102d4f38b;  */

void FUN_102d4f354(long param_1)

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



/* Entry: 102d4f38c; end: 102d4f3df;  */

void FUN_102d4f38c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102d4f3e0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102d4f3e0; end: 102d4f81b;  */

undefined * FUN_102d4f3e0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d4f514);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000102d5b028();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_102d4fe44(0,0x112dd79c8,&PTR_PTR_1126b97d0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102d4f81c; end: 102d4fadb;  */

ulong FUN_102d4f81c(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4f984);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4f978);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_102d4fe44(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4f97c);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4f980);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          func_0x000100f3b77c(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 102d4fadc; end: 102d4fd33;  */

void FUN_102d4fadc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar5 = &puStack_70;
  lVar2 = 0x6f747475625f6b6f;
  func_0x000107c5fadc(0x6f747475625f6b6f,0xe90000000000006e);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = lVar2;
  func_0x000107c312f4(lVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4fd30);
    (*pcVar1)();
  }
  pcStack_50 = FUN_102d4c9f4;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100de205c;
  puStack_58 = &UNK_1105c8f30;
  func_0x000107c60bc4(&puStack_70);
  puVar6 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61574(uStack_48);
  lVar2 = -0x2fffffffffffffd6;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f10b020);
  lVar7 = 0;
  func_0x000107c5fe40();
  lVar4 = lVar2;
  func_0x000107c312f4(lVar2,lVar7);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170();
  if (lVar4 != 0) {
    func_0x000100de9c28();
    func_0x000107c613fc();
    *(undefined8 *)(lVar7 + 0x18) = 3;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    *(undefined **)(lVar7 + 0x20) = puVar6;
    puVar8 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    uVar3 = 0;
    FUN_102d4fe44(0,0x112d360a8,&PTR_PTR_1126aed70);
    func_0x000107c61174(puVar6);
    lVar2 = lVar7;
    func_0x000107c5fc48(lVar7,uVar3);
    func_0x000107c61574(lVar7);
    func_0x000107c4656c(puVar8);
    func_0x000107c61170(lVar4);
    func_0x000107c61170();
    FUN_102d4bf88();
    lVar4 = lVar2;
    FUN_102d4c8a0();
    func_0x000107c61170(lVar2);
    if (lVar4 != 0) {
      func_0x000107c4f018(lVar4);
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4fd34);
  (*pcVar1)();
}



/* Entry: 102d4fd34; end: 102d4fdbb;  */

/* WARNING: Possible PIC construction at 0x000102d4fd7c: Changing call to branch */

void FUN_102d4fd34(long *param_1,long *param_2,code *param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + *param_1);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = unaff_x20 + *param_2;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    (*param_3)();
  }
  else {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 102d4fdbc; end: 102d4fe07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d4fdbc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112f10fb0;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + _DAT_112f10fb0);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(*(undefined8 *)(lVar3 + lVar2));
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102d4fe08; end: 102d4fe33;  */

void FUN_102d4fe08(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102d4fe34; end: 102d4fe43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d4fe34(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  lVar11 = _DAT_112f10fb0;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + _DAT_112f10fb0);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(*(undefined8 *)(lVar4 + lVar11));
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    uVar15 = uVar2 & 0xffffffffffffff8;
    if (uVar2 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar12 = uVar15;
      if (0x7fffffffffffffff < uVar2) {
        uVar12 = uVar2;
      }
      func_0x000107c60480();
    }
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar14 = 0;
    while (uVar12 != uVar14) {
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar15 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102d4e2d0);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(uVar2 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar14;
        func_0x000100fb0ef8(uVar14,uVar2);
      }
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d4e2cc);
        (*pcVar3)();
      }
      uVar16 = uVar14 + 1;
      uVar7 = uVar6;
      func_0x000107c4c9b0();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      uVar14 = uVar14 + 1;
      if (uVar7 != 0) {
        puVar9 = puVar10;
        func_0x000107c61550();
        if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
           (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar10 >> 0x3e == 0) {
            puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar10) {
              puVar8 = puVar10;
            }
            func_0x000107c60480(puVar8);
          }
          puVar9 = (undefined *)0x0;
          func_0x0001016dbd60(0,puVar8 + 1,1,puVar10);
        }
        uVar6 = (ulong)puVar9 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar6 + 0x10);
        puVar10 = puVar9;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar14) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          func_0x0001016dbd60(puVar10,uVar14 + 1,1,puVar9);
          uVar6 = (ulong)puVar10 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar14 + 1;
        *(ulong *)(uVar6 + uVar14 * 8 + 0x20) = uVar7;
        uVar14 = uVar16;
      }
    }
    lVar11 = lVar4 + _DAT_112f10fc0;
    func_0x000107c61618();
    if (lVar11 == 0) {
      func_0x000107c6142c(puVar10);
      func_0x000107c61170(lVar4);
    }
    else {
      lVar5 = lVar11 + _DAT_112f10ee0;
      func_0x000107c61618();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(lVar11);
        func_0x000107c6142c(puVar10);
      }
      else {
        puVar1 = (undefined8 *)(lVar5 + _DAT_112f11238);
        uVar13 = *puVar1;
        *puVar1 = puVar10;
        *(undefined1 *)(puVar1 + 1) = 1;
        func_0x000107c61434(puVar10);
        func_0x000107c6142c(uVar13);
        func_0x000107c61614(auStack_80,lVar5);
        puVar9 = puVar10;
        func_0x000102d4f054(puVar10);
        FUN_102d51b54();
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(lVar11);
        func_0x000107c615e8(lVar5);
        func_0x000107c6142c(puVar10);
        func_0x000107c6142c(puVar9);
        func_0x000107c61610(auStack_80);
      }
    }
  }
  return;
}



/* Entry: 102d4fe44; end: 102d4fec7;  */

void FUN_102d4fe44(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102d4fec8; end: 102d4ff43;  */

void FUN_102d4fec8(long param_1,long param_2)

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



/* Entry: 102d4ff44; end: 102d50063;  */

long FUN_102d4ff44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  lVar2 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
    *(undefined8 *)(unaff_x20 + 0x18) = param_5;
    *(undefined8 *)(unaff_x20 + 0x20) = param_6;
    *(undefined8 *)(unaff_x20 + 0x28) = param_2;
    *(undefined8 *)(unaff_x20 + 0x30) = param_4;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d4ffe0);
  (*pcVar1)();
}



/* Entry: 102d50064; end: 102d5020f;  */

void FUN_102d50064(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar7 = &puStack_80;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar6 = &UNK_1105c9040;
  puVar3 = puVar6;
  func_0x000107c613fc(&UNK_1105c9040,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_102d50374;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x102d505ec;
  puStack_68 = &UNK_1105c9058;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  func_0x000107c613fc(&UNK_1105c9040,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar3 = &UNK_1105c9090;
  func_0x000107c613fc(&UNK_1105c9090,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar6;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  pcStack_60 = FUN_102d50458;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  uStack_70 = 0x102d505e8;
  puStack_68 = &UNK_1105c90a8;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar6 = puStack_58;
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  uVar8 = 0;
  func_0x0001003406a8(0);
  func_0x000107c610f8();
  func_0x0001037e18a0(puVar2,puVar5,uVar8);
  return;
}



/* Entry: 102d50210; end: 102d50373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102d50210(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c43d50();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    lVar4 = 0;
    func_0x000102d5409c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f112d8) = 0;
    *(undefined8 *)(lVar5 + _DAT_112f112d0) = uVar2;
    *(undefined8 *)(lVar5 + _DAT_112f112e0) = uVar3;
    *(undefined8 *)(lVar5 + _DAT_112f112c8) = uVar7;
    *(undefined8 *)(lVar5 + _DAT_112f112e8) = uVar6;
    puVar1 = PTR_s_init_1125d9248;
    lStack_78 = lVar5;
    lStack_70 = lVar4;
    func_0x000107c615f4(uVar6,2);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar7);
    plVar8 = &lStack_78;
    func_0x000107c61154(plVar8,puVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(uVar6);
    func_0x000107c61574(param_1);
  }
  return plVar8;
}



/* Entry: 102d50374; end: 102d50397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102d50374(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c43d50();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
    lVar5 = 0;
    func_0x000102d5409c();
    lVar6 = lVar5;
    func_0x000107c610f8();
    *(undefined8 *)(lVar6 + _DAT_112f112d8) = 0;
    *(undefined8 *)(lVar6 + _DAT_112f112d0) = uVar3;
    *(undefined8 *)(lVar6 + _DAT_112f112e0) = uVar4;
    *(undefined8 *)(lVar6 + _DAT_112f112c8) = uVar8;
    *(undefined8 *)(lVar6 + _DAT_112f112e8) = uVar7;
    puVar1 = PTR_s_init_1125d9248;
    lStack_78 = lVar6;
    lStack_70 = lVar5;
    func_0x000107c615f4(uVar7,2);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar8);
    plVar9 = &lStack_78;
    func_0x000107c61154(plVar9,puVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar8);
    func_0x000107c615e8(uVar7);
    func_0x000107c61574(lVar2);
  }
  return plVar9;
}



/* Entry: 102d50398; end: 102d50457;  */

long FUN_102d50398(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x000107c61174();
    func_0x000107c61574(param_1);
    lVar1 = lVar2;
    func_0x000107c4ddb8();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c3e2a8(lVar2);
    }
  }
  return lVar2;
}



/* Entry: 102d50458; end: 102d5045f;  */

long FUN_102d50458(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = *(long *)(lVar3 + 0x28);
    func_0x000107c61174();
    func_0x000107c61574(lVar3);
    lVar1 = lVar2;
    func_0x000107c4ddb8();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar3 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar3 != 0) {
      func_0x000107c3e2a8(lVar3);
    }
  }
  return lVar3;
}



/* Entry: 102d50460; end: 102d50497;  */

void FUN_102d50460(long param_1)

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



/* Entry: 102d50498; end: 102d504cb;  */

/* WARNING: Possible PIC construction at 0x000102d504ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d504bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d504b0) */
/* WARNING: Removing unreachable block (ram,0x000102d504c0) */

void FUN_102d50498(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102d504cc; end: 102d5052f;  */

void FUN_102d504cc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c615e8(uVar1);
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



/* Entry: 102d50530; end: 102d505bb;  */

void FUN_102d50530(undefined8 param_1)

{
  if (lRam0000000112f11060 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e72bb80);
  return;
}



/* Entry: 102d505bc; end: 102d505df;  */

void FUN_102d505bc(undefined8 *param_1,undefined8 param_2)

{
  FUN_102d50064();
  *param_1 = param_2;
  return;
}



/* Entry: 102d505e0; end: 102d505ef;  */

void FUN_102d505e0(long param_1,long param_2)

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



/* Entry: 102d505f0; end: 102d5086b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d505f0(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lVar6;
  
  iVar2 = (int)&uStack_80;
  plVar4 = (long *)(unaff_x20 + _DAT_112f111d8);
  func_0x0001000a8868(plVar4,plVar4[3]);
  lVar5 = *(long *)(*plVar4 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    lVar6 = lVar5;
    func_0x000107c49e78();
    uVar3 = (uint)lVar6;
    func_0x000107c615e8(lVar5);
  }
  *(char *)(unaff_x20 + _DAT_112f11260) = (char)uVar3;
  lVar5 = unaff_x20 + _DAT_112f11268;
  func_0x000107c61618();
  if (lVar5 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    lVar6 = lVar5;
    func_0x000107c43e30();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    if (lVar6 == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c60234(&uStack_80,lVar6);
      func_0x000107c615e8(lVar6);
    }
    uStack_58 = uStack_78;
    uStack_60 = uStack_80;
    lStack_48 = lStack_68;
    uStack_50 = uStack_70;
    if (lStack_68 != 0) {
      uVar7 = 0x112ebbe78;
      func_0x0001000285a8(0x112ebbe78,&UNK_10dad51a0);
      func_0x000107c6147c(&uStack_80,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar7,6);
      uVar7 = uStack_80;
      if (iVar2 == 0) {
        uVar7 = 0;
      }
      goto LAB_102d50720;
    }
  }
  func_0x00010006e7f4(&uStack_60);
  uVar7 = 0;
LAB_102d50720:
  func_0x0001000a8868(unaff_x20 + _DAT_112f111d0,*(undefined8 *)(unaff_x20 + _DAT_112f111d0 + 0x18))
  ;
  FUN_102d4c20c(2,uVar7);
  lVar5 = unaff_x20 + _DAT_112f111e0;
  func_0x000107c61428(lVar5,&uStack_60,0x21,0);
  uVar1 = *(undefined8 *)(lVar5 + 0x18);
  lVar6 = *(long *)(lVar5 + 0x20);
  func_0x0001000c6518(lVar5,uVar1);
  (**(code **)(lVar6 + 0x10))(uVar3 ^ 1,uVar1,lVar6);
  func_0x000107c614a8(&uStack_60);
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 102d5086c; end: 102d509a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5086c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112f111d0,*(undefined8 *)(unaff_x20 + _DAT_112f111d0 + 0x18))
  ;
  FUN_102d4c450(param_1,param_2);
  lVar4 = *(long *)(unaff_x20 + _DAT_112f11250);
  if ((lVar4 != 0) && (lVar6 = *(long *)(lVar4 + 0x10), lVar6 != 0)) {
    lVar5 = lVar4 + 0x20;
    func_0x000107c61434(lVar4);
    do {
      func_0x000102d53abc(lVar5,auStack_78);
      lVar2 = lStack_58;
      uVar3 = uStack_60;
      func_0x0001000a8868(auStack_78,uStack_60);
      (**(code **)(lVar2 + 0x28))(uVar3,lVar2);
      func_0x0001000834e4(auStack_78);
      lVar5 = lVar5 + 0x28;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(lVar4);
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f11258);
  *(undefined **)(unaff_x20 + _DAT_112f11258) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar3);
  lVar4 = _DAT_112f11230;
  func_0x000107c61428(unaff_x20 + _DAT_112f11230,auStack_78,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined **)(unaff_x20 + lVar4) = puVar1;
  func_0x000107c6142c(uVar3);
  *(undefined1 *)(unaff_x20 + _DAT_112f11260) = 0;
  func_0x000100c82230();
  return;
}



/* Entry: 102d509a4; end: 102d509af;  */

void FUN_102d509a4(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000102d53b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102d509b0; end: 102d509cf;  */

void FUN_102d509b0(void)

{
  func_0x000107c61168(&PTR_PTR_112f11168);
  return;
}



/* Entry: 102d509d0; end: 102d509e3;  */

bool FUN_102d509d0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102d509e4; end: 102d50ab7;  */

void FUN_102d509e4(void)

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



/* Entry: 102d50ab8; end: 102d50ac3;  */

void FUN_102d50ab8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 102d50ac4; end: 102d50c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d50ac4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f11270;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f11270);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000102d50b24();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 102d50c04; end: 102d50f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d50c04(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  plVar7 = (long *)(unaff_x20 + _DAT_112f111e0);
  func_0x000107c61428(plVar7,auStack_78,0,0);
  plVar3 = plVar7;
  func_0x0001000a8868(plVar7,plVar7[3]);
  if (*(char *)(*plVar3 + 0x68) == '\x01') {
    func_0x000107c61428(plVar7,auStack_a8,0x21,0);
    lVar11 = plVar7[3];
    lVar10 = plVar7[4];
    func_0x0001000c6518(plVar7,lVar11);
    (**(code **)(lVar10 + 0xa0))(0,0,lVar11,lVar10);
    func_0x000107c614a8(auStack_a8);
  }
  lVar11 = *(long *)(unaff_x20 + _DAT_112f11250);
  if (lVar11 != 0) {
    lVar10 = *(long *)(lVar11 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar10 != 0) {
      puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61434(lVar11);
      func_0x000102d4f3a8(0,lVar10,0);
      lVar12 = lVar11 + 0x20;
      do {
        puVar8 = puStack_80;
        func_0x000102d53abc(lVar12,auStack_a8);
        lVar2 = lStack_88;
        puVar4 = auStack_a8;
        func_0x0001000a8868(puVar4,uStack_90);
        FUN_102d50ac4();
        puVar5 = puVar4;
        (**(code **)(lVar2 + 0x18))();
        func_0x000107c61170(puVar4);
        func_0x0001000834e4(auStack_a8);
        uVar1 = *(ulong *)(puVar8 + 0x10);
        puStack_80 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          func_0x000102d4f3a8(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
        }
        puVar8 = puStack_80;
        *(ulong *)(puStack_80 + 0x10) = uVar1 + 1;
        *(undefined1 **)(puStack_80 + uVar1 * 8 + 0x20) = puVar5;
        lVar12 = lVar12 + 0x28;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      func_0x000107c6142c(lVar11);
    }
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f11258);
    *(undefined **)(unaff_x20 + _DAT_112f11258) = puVar8;
    func_0x000107c6142c(uVar6);
  }
  if (*(char *)(unaff_x20 + _DAT_112f11218) == '\x01') {
    func_0x000107c61428(plVar7,auStack_a8,0x21,0);
    lVar11 = plVar7[3];
    lVar10 = plVar7[4];
    func_0x0001000c6518(plVar7,lVar11);
    (**(code **)(lVar10 + 0x28))(0,0,lVar11,lVar10);
    func_0x000107c614a8(auStack_a8);
    FUN_102d50f08(0);
  }
  else {
    plVar7 = (long *)(unaff_x20 + _DAT_112f111d0);
    func_0x0001000a8868(plVar7,plVar7[3]);
    lVar10 = *plVar7;
    FUN_102d4bf88();
    puVar8 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    func_0x000107c61170(plVar7);
    func_0x000103f30594(0);
    func_0x000107c610f8();
    func_0x000107c61174(puVar8);
    puVar9 = puVar8;
    func_0x000103f303d4();
    lVar11 = _DAT_11302f2e0;
    func_0x000107c61428(puVar9 + _DAT_11302f2e0,auStack_a8,1,0);
    func_0x000107c61604(puVar9 + lVar11,lVar10);
    func_0x000107c42c1c(*(undefined8 *)(lVar10 + _DAT_112f10ef8));
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
  }
  return;
}



/* Entry: 102d50f08; end: 102d510b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d50f08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  
  func_0x0001000d224c(auStack_78);
  uVar1 = auStack_78[0];
  func_0x000107c3ebcc();
  func_0x000107c61170(auStack_78[0]);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0001000285a8(0x112f112a8,&UNK_10db44ce8);
    func_0x000107c613fc();
    uVar1 = 1;
    func_0x00010008747c();
  }
  if (*(byte *)(unaff_x20 + _DAT_112f11248) < 5) {
    *(undefined1 *)(unaff_x20 + _DAT_112f11248) = 3;
  }
  func_0x000102d53abc(unaff_x20 + _DAT_112f111d0,auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(&uStack_80);
  uVar2 = uStack_80;
  func_0x000107c3ebcc(uStack_80);
  func_0x000107c61170(uStack_80);
  puVar3 = &UNK_1105c91f8;
  func_0x000107c613fc(&UNK_1105c91f8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1105c9248;
  func_0x000107c613fc(&UNK_1105c9248,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(puVar3);
  func_0x000102d4c734(uVar1,uVar2,0x102d53a3c,puVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61578(uVar1,2);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 102d510b8; end: 102d51157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d510b8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112f11238);
    func_0x000107c61434(uVar1);
    FUN_102d51158();
    func_0x000107c61170(param_1);
    func_0x000107c6142c(uVar1);
  }
  return;
}



/* Entry: 102d51158; end: 102d5180b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d51158(ulong param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  char *pcVar12;
  long *plVar13;
  long extraout_x12;
  long extraout_x13;
  undefined *puVar14;
  undefined8 uVar15;
  long unaff_x20;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined **ppuVar21;
  undefined1 auStack_e0 [4];
  uint uStack_dc;
  ulong uStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *apuStack_98 [3];
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  
  lVar5 = 0;
  uStack_a0 = param_3;
  func_0x000107c5eea4();
  lStack_b8 = *(long *)(lVar5 + -8);
  lStack_b0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_d0 = extraout_x13;
  puStack_c8 = auStack_e0 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_c0 = (long)(auStack_e0 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  func_0x000107c5eea0();
  lVar5 = _DAT_112f11230;
  func_0x000107c61428(unaff_x20 + _DAT_112f11230,auStack_80,0,0);
  uVar19 = *(ulong *)(unaff_x20 + lVar5);
  if (uVar19 >> 0x3e == 0) {
    uVar20 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar20 = uVar19 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar19) {
      uVar20 = uVar19;
    }
    func_0x000107c60480();
  }
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_a8 = param_4;
  if (uVar20 != 0) {
    apuStack_98[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_d8 = param_1;
    func_0x000107c61434(uVar19);
    func_0x000102d4f3c4(0,uVar20 & ((long)uVar20 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar20 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102d517f4);
      (*pcVar4)();
    }
    uStack_dc = (uint)param_2;
    uVar17 = 0;
    do {
      puVar14 = apuStack_98[0];
      if ((uVar19 & 0xc000000000000001) == 0) {
        uVar16 = *(ulong *)(uVar19 + uVar17 * 8 + 0x20);
        func_0x000107c6157c(uVar16);
      }
      else {
        uVar16 = uVar17;
        FUN_102d568fc(uVar17,uVar19);
      }
      uVar18 = *(undefined8 *)(uVar16 + 0x10);
      func_0x000107c6157c(uVar18);
      func_0x000107c61574(uVar16);
      uVar16 = *(ulong *)(puVar14 + 0x10);
      apuStack_98[0] = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar16) {
        func_0x000102d4f3c4(1 < *(ulong *)(puVar14 + 0x18),uVar16 + 1,1);
      }
      puVar14 = apuStack_98[0];
      uVar17 = uVar17 + 1;
      *(ulong *)(apuStack_98[0] + 0x10) = uVar16 + 1;
      *(undefined8 *)(apuStack_98[0] + uVar16 * 8 + 0x20) = uVar18;
    } while (uVar20 != uVar17);
    func_0x000107c6142c(uVar19);
    param_2 = (ulong)uStack_dc;
    param_1 = uStack_d8;
  }
  puStack_68 = puVar14;
  func_0x000102d523c0(param_1,param_2);
  func_0x000107c61434();
  FUN_102d4f248();
  if (param_1 >> 0x3e == 0) {
    uVar19 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar19 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar19 = param_1;
    }
    func_0x000107c60480(uVar19);
  }
  func_0x000107c6142c(param_1);
  lVar5 = unaff_x20 + _DAT_112f111e0;
  func_0x000107c61428(lVar5,apuStack_98,0x21,0);
  uVar18 = *(undefined8 *)(lVar5 + 0x18);
  lVar1 = *(long *)(lVar5 + 0x20);
  func_0x0001000c6518(lVar5,uVar18);
  (**(code **)(lVar1 + 0x70))(uVar19,uVar18,lVar1);
  uVar18 = *(undefined8 *)(lVar5 + 0x18);
  lVar1 = *(long *)(lVar5 + 0x20);
  func_0x0001000c6518(lVar5,uVar18);
  (**(code **)(lVar1 + 0x88))(uStack_a0,0,uVar18,lVar1);
  ppuVar9 = apuStack_98;
  func_0x000107c614a8(ppuVar9);
  FUN_102d50ac4();
  ppuVar21 = ppuVar9;
  func_0x000107c5e468();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar9);
  func_0x000107c61170(ppuVar21);
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_112f111d8);
  func_0x0001000a8868(puVar6,puVar6[3]);
  puVar14 = puStack_68;
  lVar5 = lStack_a8;
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112f11270);
  ppuVar21 = *(undefined ***)(unaff_x20 + _DAT_112f11258);
  uVar15 = *puVar6;
  if (lStack_a8 == 0) {
    func_0x000107c61174(uVar18);
    func_0x000107c61434(ppuVar21);
  }
  else {
    if ((ulong)puStack_68 >> 0x3e != 0) {
      puVar7 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puStack_68) {
        puVar7 = puStack_68;
      }
      func_0x000107c60480(puVar7);
    }
    puVar7 = PTR__OBJC_CLASS___NSProgress_1126b8028;
    func_0x000107c61168();
    func_0x000107c61174(uVar18);
    func_0x000107c61434(ppuVar21);
    lVar5 = lStack_a8;
    func_0x000107c6157c(lStack_a8);
    func_0x000107c4f404();
    func_0x000107c61180();
    func_0x000107c53628();
    apuStack_98[0] = puVar7;
    func_0x000100087c34(apuStack_98);
    func_0x000107c61170(puVar7);
    func_0x000107c61574(lVar5);
  }
  func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
  puVar7 = puVar14;
  FUN_102d49758(puVar14,lVar5);
  puVar8 = puVar7;
  func_0x000100b658a4();
  func_0x000107c6142c(puVar7);
  if ((ulong)ppuVar21 >> 0x3e == 0) {
    ppuVar9 = *(undefined ***)(((ulong)ppuVar21 & 0xffffffffffffff8) + 0x10);
  }
  else {
    ppuVar9 = (undefined **)((ulong)ppuVar21 & 0xffffffffffffff8);
    if ((undefined **)0x7fffffffffffffff < ppuVar21) {
      ppuVar9 = ppuVar21;
    }
    func_0x000107c60480();
  }
  if ((long)ppuVar9 < 1) {
    func_0x0001000285a8(0x112f112b0,&UNK_10db44cf8);
    apuStack_98[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar9 = apuStack_98;
    func_0x000100854cb0(ppuVar9);
  }
  else {
    func_0x0001000285a8(0x112f11030,&UNK_10db44b50);
    ppuVar9 = ppuVar21;
    func_0x000100b658a4(ppuVar21);
  }
  ppuVar10 = ppuVar9;
  func_0x0001006c733c();
  puVar7 = &UNK_1105c9270;
  func_0x000107c613fc(&UNK_1105c9270,0x18,7);
  func_0x000107c61644(puVar7 + 0x10,uVar15);
  puVar11 = &UNK_1105c9298;
  func_0x000107c613fc(&UNK_1105c9298,0x28,7);
  *(undefined **)(puVar11 + 0x10) = puVar7;
  *(undefined8 *)(puVar11 + 0x18) = uVar18;
  *(undefined8 *)(puVar11 + 0x20) = uStack_a0;
  puVar7 = &UNK_1105c92c0;
  func_0x000107c613fc(&UNK_1105c92c0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x102d53a48;
  *(undefined **)(puVar7 + 0x18) = puVar11;
  func_0x000107c61174(uVar18);
  uVar15 = 0x112f10de8;
  func_0x0001000285a8(0x112f10de8,&UNK_10db44850);
  pcVar4 = FUN_102d53a54;
  func_0x00010068b194(FUN_102d53a54,puVar7,uVar15);
  func_0x000107c61170(uVar18);
  func_0x000107c6142c(ppuVar21);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(ppuVar9);
  func_0x000107c61574(ppuVar10);
  func_0x000107c61574(puVar7);
  pcVar12 = "createIdentity(cameraRollSelfies:bodyType:progressSubject:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  plVar13 = (long *)pcVar12;
  func_0x000100471e0c();
  func_0x000107c61574(pcVar4);
  func_0x000107c615e8(pcVar12);
  puVar7 = &UNK_1105c91f8;
  func_0x000107c613fc(&UNK_1105c91f8,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  lVar3 = lStack_b0;
  lVar1 = lStack_b8;
  lVar5 = lStack_c0;
  puVar2 = puStack_c8;
  (**(code **)(lStack_b8 + 0x10))(puStack_c8,lStack_c0,lStack_b0);
  uVar19 = (ulong)*(byte *)(lVar1 + 0x50);
  uVar20 = uVar19 + 0x18 & (uVar19 ^ 0xffffffffffffffff);
  puVar8 = &UNK_1105c92e8;
  func_0x000107c613fc(&UNK_1105c92e8,uVar20 + lStack_d0,uVar19 | 7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  (**(code **)(lVar1 + 0x20))(puVar8 + uVar20,puVar2,lVar3);
  uVar18 = 0x102d53a7c;
  puVar7 = puVar8;
  (**(code **)(*plVar13 + 0x60))(0x102d53a7c);
  func_0x000107c61574(plVar13);
  func_0x000107c61574(puVar8);
  uVar15 = uVar18;
  func_0x000107c614f0(uVar18);
  (**(code **)(puVar7 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f11228),uVar15,puVar7);
  func_0x000107c615e8(uVar18);
  (**(code **)(lVar1 + 8))(lVar5,lVar3);
  func_0x000107c6142c(puVar14);
  return;
}



/* Entry: 102d5180c; end: 102d51963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5180c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar6 = _DAT_112f11230;
  func_0x000107c61428(unaff_x20 + _DAT_112f11230,auStack_58,1,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined **)(unaff_x20 + lVar6) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar4);
  plVar1 = (long *)(unaff_x20 + _DAT_112f111e0);
  func_0x000107c61428(plVar1,auStack_70,0,0);
  plVar5 = plVar1;
  func_0x0001000a8868(plVar1,plVar1[3]);
  lVar6 = 0;
  if (*(char *)(*plVar5 + 0x68) != '\x01') {
    lVar6 = *(long *)(*plVar5 + 0x60);
  }
  if (!SCARRY8(lVar6,1)) {
    func_0x000107c61428(plVar1,auStack_88,0x21,0);
    lVar7 = plVar1[3];
    lVar2 = plVar1[4];
    func_0x0001000c6518(plVar1,lVar7);
    (**(code **)(lVar2 + 0xa0))(lVar6 + 1,0,lVar7,lVar2);
    func_0x000107c614a8(auStack_88);
    lVar6 = unaff_x20 + _DAT_112f111d0;
    func_0x0001000a8868(lVar6,*(undefined8 *)(lVar6 + 0x18));
    func_0x000102d4c010();
    lVar7 = lVar6;
    func_0x000102d4bf88();
    uVar4 = 1;
    FUN_102d4d8f4(1,param_1);
    func_0x000107c61170(lVar7);
    FUN_102d4cb90(uVar4);
    func_0x000107c61170(lVar6);
    func_0x000107c615e8(uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102d51964);
  (*pcVar3)();
}



/* Entry: 102d51964; end: 102d51b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d51964(undefined8 param_1,byte param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_112f111e0;
  uVar8 = param_1;
  if ((param_2 & 1) != 0) {
    bVar1 = *(byte *)(unaff_x20 + _DAT_112f11248);
    uVar7 = 6;
    if (bVar1 != 3) {
      uVar7 = param_1;
    }
    uVar8 = 7;
    if (bVar1 != 2) {
      uVar8 = uVar7;
    }
    uVar7 = 5;
    if (bVar1 != 0) {
      uVar7 = 4;
    }
    if (bVar1 < 2) {
      uVar8 = uVar7;
    }
  }
  func_0x000107c61428(unaff_x20 + _DAT_112f111e0,auStack_68,0,0);
  func_0x000102d53abc(unaff_x20 + lVar2,auStack_90);
  func_0x0001000a8868(auStack_90,uStack_78);
  lVar2 = _DAT_112f11230;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f11208);
  func_0x000107c61428(unaff_x20 + _DAT_112f11230,auStack_a8,0,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar6 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar5 = uVar6;
    }
    func_0x000107c60480(uVar5);
  }
  FUN_102d4bb98(uVar7,uVar8,uVar5);
  func_0x0001000834e4(auStack_90);
  lVar2 = unaff_x20 + _DAT_112f11268;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c43e34();
    func_0x000107c615e8(lVar2);
  }
  func_0x0001000a8868(unaff_x20 + _DAT_112f111d0,*(undefined8 *)(unaff_x20 + _DAT_112f111d0 + 0x18))
  ;
  puVar3 = &UNK_1105c91f8;
  func_0x000107c613fc(&UNK_1105c91f8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1105c9220;
  func_0x000107c613fc(&UNK_1105c9220,0x30,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  puVar4[0x18] = param_2 & 1;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  *(undefined8 *)(puVar4 + 0x28) = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(puVar3);
  FUN_102d4c450(FUN_102d53a2c,puVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 102d51b54; end: 102d51dbf;  */

/* WARNING: Possible PIC construction at 0x000102d51da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d51d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d51d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d51c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d51cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d51c44) */
/* WARNING: Removing unreachable block (ram,0x000102d51d98) */
/* WARNING: Removing unreachable block (ram,0x000102d51d24) */
/* WARNING: Removing unreachable block (ram,0x000102d51cb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d51b54(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61618();
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      param_2 = param_2 + _DAT_112f111d0;
      func_0x0001000a8868(param_2,*(undefined8 *)(param_2 + 0x18));
      FUN_102d4bf88();
      FUN_102d4d8f4(1,0);
    }
    else if ((*(byte *)(param_2 + _DAT_112f11218) & 1) == 0) {
      param_2 = param_2 + _DAT_112f111d0;
      func_0x0001000a8868(param_2,*(undefined8 *)(param_2 + 0x18));
      FUN_102d4bf88();
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
    }
    else {
      lVar1 = param_2 + _DAT_112f111e0;
      func_0x000107c61428(lVar1,auStack_58,0x21,0);
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      lVar3 = *(long *)(lVar1 + 0x20);
      func_0x0001000c6518(lVar1,uVar2);
      (**(code **)(lVar3 + 0x28))(0,0,uVar2,lVar3);
      func_0x000107c614a8(auStack_58);
      FUN_102d50f08(0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 102d51dc0; end: 102d52cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d51dc0(ulong param_1,ulong param_2)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  long unaff_x20;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  undefined *apuStack_78 [3];
  
  if (((uint)param_2 & 0xff) == 1) {
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102d49234();
    uVar19 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar23 = *(ulong *)(uVar19 + 0x10);
      lVar3 = _DAT_112f11240;
    }
    else {
      uVar23 = param_1;
      if (-1 < (long)param_1) {
        uVar23 = uVar19;
      }
      func_0x000107c60480();
      lVar3 = _DAT_112f11240;
    }
    _DAT_112f11240 = lVar3;
    if (uVar23 != 0) {
      plVar1 = (long *)(unaff_x20 + _DAT_112f111d8);
      uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f11228);
      lVar25 = 4;
      do {
        plVar20 = (long *)(lVar25 + -4);
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(long **)(uVar19 + 0x10) <= plVar20) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102d52344);
            (*pcVar4)();
          }
          plVar6 = *(long **)(param_1 + lVar25 * 8);
          func_0x000107c61174();
          uVar15 = param_2;
        }
        else {
          plVar6 = plVar20;
          uVar15 = param_1;
          func_0x000102d56570();
        }
        if (SCARRY8((long)plVar20,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102d5233c);
          (*pcVar4)();
        }
        uVar26 = lVar25 - 3;
        plVar20 = plVar6;
        func_0x000107c4a77c();
        func_0x000107c61180();
        plVar7 = plVar20;
        func_0x000107c4a77c();
        func_0x000107c61180();
        func_0x000107c61170(plVar20);
        plVar20 = plVar7;
        func_0x000107c5faec();
        func_0x000107c61170(plVar7);
        func_0x000107c61428(unaff_x20 + lVar3,apuStack_78,0x20,0);
        lVar21 = *(long *)(unaff_x20 + lVar3);
        param_2 = uVar15;
        if (*(long *)(lVar21 + 0x10) == 0) {
LAB_102d52024:
          func_0x000107c614a8(apuStack_78);
          lVar21 = 0x112f112b8;
          func_0x0001000285a8(0x112f112b8,&UNK_10db44d08);
          func_0x000107c613fc();
          plVar8 = plVar6;
          func_0x000107c61174();
          puVar9 = (undefined *)0x1;
          func_0x00010008747c();
          plVar10 = plVar1;
          func_0x0001000a8868(plVar1,plVar1[3]);
          plVar7 = (long *)(*plVar10 + 0x10);
          func_0x0001000a8868(plVar7,*(undefined8 *)(*plVar10 + 0x28));
          func_0x0001000a8868(*plVar7 + 0x60,*(undefined8 *)(*plVar7 + 0x78));
          func_0x000102d588e8(0);
          func_0x000107c61174();
          plVar7 = plVar8;
          FUN_102d58908();
          plVar10 = plVar8;
          func_0x000107c61170(plVar8);
          pcVar4 = *(code **)(*plVar7 + 0x58);
          apuStack_78[0] = puVar9;
          FUN_102d53b70();
          ppuVar11 = apuStack_78;
          (*pcVar4)(ppuVar11,lVar21,plVar10);
          func_0x000107c61574(plVar7);
          ppuVar12 = ppuVar11;
          func_0x000107c614f0(ppuVar11);
          (**(code **)(lVar21 + 0x18))(uVar17,ppuVar12,lVar21);
          func_0x000107c615e8(ppuVar11);
          lVar13 = 0;
          func_0x000102d47068();
          func_0x000107c613fc();
          *(undefined **)(lVar13 + 0x10) = puVar9;
          *(long **)(lVar13 + 0x18) = plVar6;
          *(undefined1 *)(lVar13 + 0x20) = 2;
          *(undefined8 *)(lVar13 + 0x28) = 0;
          func_0x000107c61174(plVar8);
          func_0x000107c6157c(puVar9);
          func_0x000107c6157c(lVar13);
          puVar14 = puVar5;
          func_0x000107c61558();
          plVar6 = plVar20;
          uVar16 = uVar15;
          apuStack_78[0] = puVar5;
          func_0x000100029284();
          uVar18 = (ulong)~(uint)uVar16 & 1;
          lVar21 = *(long *)(puVar5 + 0x10) + uVar18;
          if (SCARRY8(*(long *)(puVar5 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102d52340);
            (*pcVar4)();
          }
          if (*(long *)(puVar5 + 0x18) < lVar21) {
            FUN_102d56c08(lVar21,puVar14);
            plVar6 = plVar20;
            func_0x000100029284();
            if (((uint)uVar16 & 1) != ((uint)param_2 & 1)) {
LAB_102d523b0:
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102d523c0);
              (*pcVar4)();
            }
          }
          else {
            param_2 = uVar16;
            if (((ulong)puVar14 & 1) == 0) {
              FUN_102d56a98();
            }
          }
          puVar5 = apuStack_78[0];
          if ((uVar16 & 1) == 0) {
            *(ulong *)(apuStack_78[0] + ((ulong)plVar6 >> 6) * 8 + 0x40) =
                 *(ulong *)(apuStack_78[0] + ((ulong)plVar6 >> 6) * 8 + 0x40) |
                 1L << ((ulong)plVar6 & 0x3f);
            puVar2 = (ulong *)(*(long *)(apuStack_78[0] + 0x30) + (long)plVar6 * 0x10);
            *puVar2 = (ulong)plVar20;
            puVar2[1] = uVar15;
            *(long *)(*(long *)(apuStack_78[0] + 0x38) + (long)plVar6 * 8) = lVar13;
            func_0x000107c61574(puVar9);
            func_0x000107c61170(plVar8);
            func_0x000107c61170(plVar8);
            func_0x000107c61574(lVar13);
            if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102d52348);
              (*pcVar4)();
            }
            *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
          }
          else {
            uVar24 = *(undefined8 *)(*(long *)(apuStack_78[0] + 0x38) + (long)plVar6 * 8);
            *(long *)(*(long *)(apuStack_78[0] + 0x38) + (long)plVar6 * 8) = lVar13;
            func_0x000107c61574(puVar9);
            func_0x000107c61170(plVar8);
            func_0x000107c61170(plVar8);
            func_0x000107c61574(lVar13);
            func_0x000107c6142c(uVar15);
            func_0x000107c61574(uVar24);
          }
        }
        else {
          func_0x000107c61434(lVar21);
          plVar7 = plVar20;
          uVar16 = uVar15;
          func_0x000100029284();
          if ((uVar16 & 1) == 0) {
            func_0x000107c6142c(lVar21);
            goto LAB_102d52024;
          }
          uVar24 = *(undefined8 *)(*(long *)(lVar21 + 0x38) + (long)plVar7 * 8);
          func_0x000107c6157c(uVar24);
          func_0x000107c614a8(apuStack_78);
          func_0x000107c6142c(lVar21);
          func_0x000107c6157c(uVar24);
          puVar14 = puVar5;
          func_0x000107c61558();
          plVar7 = plVar20;
          uVar16 = uVar15;
          apuStack_78[0] = puVar5;
          func_0x000100029284();
          uVar18 = (ulong)~(uint)uVar16 & 1;
          lVar21 = *(long *)(puVar5 + 0x10) + uVar18;
          if (SCARRY8(*(long *)(puVar5 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102d5234c);
            (*pcVar4)();
          }
          if (*(long *)(puVar5 + 0x18) < lVar21) {
            FUN_102d56c08(lVar21,puVar14);
            plVar7 = plVar20;
            func_0x000100029284();
            if (((uint)uVar16 & 1) != ((uint)param_2 & 1)) goto LAB_102d523b0;
LAB_102d52278:
            if ((uVar16 & 1) == 0) goto LAB_102d522e0;
LAB_102d52280:
            puVar5 = apuStack_78[0];
            uVar22 = *(undefined8 *)(*(long *)(apuStack_78[0] + 0x38) + (long)plVar7 * 8);
            *(undefined8 *)(*(long *)(apuStack_78[0] + 0x38) + (long)plVar7 * 8) = uVar24;
            func_0x000107c61170(plVar6);
            func_0x000107c61574(uVar24);
            func_0x000107c6142c(uVar15);
            func_0x000107c61574(uVar22);
          }
          else {
            param_2 = uVar16;
            if (((ulong)puVar14 & 1) != 0) goto LAB_102d52278;
            FUN_102d56a98();
            if ((uVar16 & 1) != 0) goto LAB_102d52280;
LAB_102d522e0:
            puVar5 = apuStack_78[0];
            *(ulong *)(apuStack_78[0] + ((ulong)plVar7 >> 6) * 8 + 0x40) =
                 *(ulong *)(apuStack_78[0] + ((ulong)plVar7 >> 6) * 8 + 0x40) |
                 1L << ((ulong)plVar7 & 0x3f);
            puVar2 = (ulong *)(*(long *)(apuStack_78[0] + 0x30) + (long)plVar7 * 0x10);
            *puVar2 = (ulong)plVar20;
            puVar2[1] = uVar15;
            *(undefined8 *)(*(long *)(apuStack_78[0] + 0x38) + (long)plVar7 * 8) = uVar24;
            func_0x000107c61170(plVar6);
            func_0x000107c61574(uVar24);
            if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102d52350);
              (*pcVar4)();
            }
            *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
          }
        }
        lVar25 = lVar25 + 1;
      } while (uVar26 != uVar23);
    }
    lVar3 = _DAT_112f11240;
    func_0x000107c61428(unaff_x20 + _DAT_112f11240,apuStack_78,1,0);
    uVar17 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined **)(unaff_x20 + lVar3) = puVar5;
    func_0x000107c6142c(uVar17);
  }
  return;
}



/* Entry: 102d52cf4; end: 102d52f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d52cf4(double param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long extraout_x8;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  uVar6 = *param_2;
  cVar2 = *(char *)(param_2 + 1);
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c5eea0(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee68(param_4);
    (**(code **)(lVar8 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5);
    dVar9 = (double)(long)(param_1 * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102d52f94);
      (*pcVar4)();
    }
    if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102d52f98);
      (*pcVar4)();
    }
    if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102d52f9c);
      (*pcVar4)();
    }
    lVar5 = param_3 + _DAT_112f111e0;
    func_0x000107c61428(lVar5,auStack_b0,0x21,0);
    uVar1 = *(undefined8 *)(lVar5 + 0x18);
    lVar8 = *(long *)(lVar5 + 0x20);
    func_0x0001000c6518(lVar5,uVar1);
    (**(code **)(lVar8 + 0x40))((long)dVar9,0,uVar1,lVar8);
    func_0x000107c614a8(auStack_b0);
    if (cVar2 == '\x01') {
      FUN_102d52f9c(uVar6);
    }
    else {
      lVar5 = *(long *)(param_3 + _DAT_112f11250);
      if ((lVar5 != 0) && (lVar8 = *(long *)(lVar5 + 0x10), lVar8 != 0)) {
        lVar7 = lVar5 + 0x20;
        func_0x000107c61434(lVar5);
        do {
          func_0x000102d53abc(lVar7,auStack_b0);
          lVar3 = lStack_90;
          uVar1 = uStack_98;
          func_0x0001000a8868(auStack_b0,uStack_98);
          (**(code **)(lVar3 + 0x20))(uVar6,uVar1,lVar3);
          func_0x0001000834e4(auStack_b0);
          lVar7 = lVar7 + 0x28;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        func_0x000107c6142c(lVar5);
      }
      if ((*(byte *)(param_3 + _DAT_112f11260) & 1) == 0) {
        lVar5 = *(long *)(param_3 + _DAT_112f111f0);
        FUN_102d53b00(uVar6,cVar2);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000102d4b88c(uVar6,cVar2);
        }
        else {
          func_0x000107c3d078();
          func_0x000102d4b88c(uVar6,cVar2);
          func_0x000107c615e8(lVar5);
        }
      }
      FUN_102d51964(0,0,uVar6);
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102d52f9c; end: 102d530b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d52f9c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  lVar1 = unaff_x20 + _DAT_112f111e0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000c6518(lVar1,*(undefined8 *)(lVar1 + 0x18));
  pcVar5 = *(code **)(lVar2 + 0x58);
  func_0x000107c6157c(param_1);
  (*pcVar5)();
  func_0x000107c614a8(auStack_58);
  func_0x0001000a8868(unaff_x20 + _DAT_112f111d0,*(undefined8 *)(unaff_x20 + _DAT_112f111d0 + 0x18))
  ;
  puVar3 = &UNK_1105c91f8;
  func_0x000107c613fc(&UNK_1105c91f8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1105c9310;
  func_0x000107c613fc(&UNK_1105c9310,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(puVar3);
  FUN_102d4c918(FUN_102d53b50,puVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 102d530b4; end: 102d53133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d530b4(long param_1)

{
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000102d53abc(param_1 + _DAT_112f111d0,auStack_60);
    func_0x000107c61170(param_1);
    func_0x0001000a8868(auStack_60,uStack_48);
    FUN_102d4fadc();
    func_0x0001000834e4(auStack_60);
  }
  return;
}



/* Entry: 102d53134; end: 102d53263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d53134(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  char cStack_59;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112f11268;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c43e2c();
      func_0x000107c615e8(lVar1);
    }
    if (*(char *)(param_1 + _DAT_112f11210) == '\x01' && param_4 == 0) {
      func_0x0001000a8868(param_1 + _DAT_112f111d0,*(undefined8 *)(param_1 + _DAT_112f111d0 + 0x18))
      ;
      FUN_102d4d018();
    }
    if (((param_2 & 1) == 0) && (*(char *)(param_1 + _DAT_112f11260) == '\x01')) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112f11220);
      func_0x000107c6157c(uVar2);
      func_0x0001000d224c(&cStack_59);
      func_0x000107c61574(uVar2);
      if (cStack_59 == '\x01') {
        func_0x0001000a8868(param_1 + _DAT_112f111d0,
                            *(undefined8 *)(param_1 + _DAT_112f111d0 + 0x18));
        FUN_102d4ca00();
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102d53264; end: 102d532c3; -[_TtC38SCGenerativeAIOnboardingImplementation30GenerativeAIOnboardingWorkflow init] */

void FUN_102d53264(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenerativeAIOnboardingImplementation.GenerativeAIOnboardingWorkflow",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d53290);
  (*pcVar1)();
}



/* Entry: 102d532c4; end: 102d533db; -[_TtC38SCGenerativeAIOnboardingImplementation30GenerativeAIOnboardingWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d53310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d53314) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d532c4(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112f111d0);
  func_0x0001000834e4(param_1 + _DAT_112f111d8);
  func_0x0001000834e4(param_1 + _DAT_112f111e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f111e8));
  return;
}



/* Entry: 102d533dc; end: 102d533fb;  */

void FUN_102d533dc(void)

{
  func_0x000107c61168(&PTR_PTR_1128a26c0);
  return;
}



/* Entry: 102d533fc; end: 102d53563;  */

int FUN_102d533fc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102d53478;
        goto LAB_102d5345c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102d5345c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102d53478:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102d53564; end: 102d535a3;  */

void FUN_102d53564(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f112a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db44cac;
  func_0x000107c61520(&UNK_10db44cac,&UNK_1105c9168);
  puRam0000000112f112a0 = puVar1;
  return;
}



/* Entry: 102d535a4; end: 102d539f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d535a4(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  long extraout_x8;
  ulong uVar14;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined *puVar19;
  long *plVar20;
  undefined1 uVar21;
  long lVar22;
  long alStack_b0 [3];
  undefined8 *puStack_98;
  long lStack_90;
  long alStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar4 = 0;
  FUN_102d4690c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar16 = (undefined8 *)((long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = (undefined8 *)((long)puVar16 - extraout_x12);
  alStack_b0[1] = _DAT_113804f38;
  FUN_102d53bc0(param_1 + _DAT_113804f38,puVar15);
  puVar5 = puVar15;
  alStack_b0[2] = lVar4;
  func_0x000107c614c4(puVar15,lVar4);
  plVar20 = (long *)*puVar15;
  puStack_98 = puVar16;
  if ((int)puVar5 == 1) {
    uVar21 = 3;
  }
  else {
    lVar4 = 0x112f10ab8;
    func_0x0001000285a8(0x112f10ab8,&UNK_10db44560);
    iVar2 = *(int *)(lVar4 + 0x30);
    lVar4 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar4 + -8) + 8))((long)puVar15 + (long)iVar2,lVar4);
    uVar21 = 0;
  }
  uVar17 = *(undefined8 *)(param_1 + _DAT_113804f40);
  lVar4 = 0x112f112b8;
  func_0x0001000285a8(0x112f112b8,&UNK_10db44d08);
  func_0x000107c613fc();
  lVar6 = 1;
  func_0x00010008747c();
  lVar22 = unaff_x20 + _DAT_112f111d8;
  func_0x0001000a8868(lVar22,*(undefined8 *)(lVar22 + 0x18));
  plVar7 = plVar20;
  FUN_102d494d4(plVar20,uVar21,uVar17);
  pcVar18 = *(code **)(*plVar7 + 0x58);
  plVar8 = plVar7;
  alStack_88[0] = lVar6;
  FUN_102d53b70();
  plVar9 = alStack_88;
  (*pcVar18)(plVar9,lVar4,plVar8);
  func_0x000107c61574(plVar7);
  plVar7 = plVar9;
  func_0x000107c614f0(plVar9);
  (**(code **)(lVar4 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f11228),plVar7,lVar4);
  func_0x000107c615e8(plVar9);
  lVar10 = 0;
  func_0x000102d47068();
  func_0x000107c613fc();
  *(long *)(lVar10 + 0x10) = lVar6;
  *(long **)(lVar10 + 0x18) = plVar20;
  *(undefined1 *)(lVar10 + 0x20) = uVar21;
  *(undefined8 *)(lVar10 + 0x28) = uVar17;
  lVar11 = lVar10;
  FUN_102d509b0();
  func_0x000107c613fc();
  *(long *)(lVar11 + 0x10) = lVar10;
  *(long *)(lVar11 + 0x18) = param_1;
  lVar4 = _DAT_112f11230;
  func_0x000107c61428(unaff_x20 + _DAT_112f11230,alStack_88,0x21,0);
  lStack_90 = lVar6;
  func_0x000107c6157c(lVar6);
  func_0x000107c61174(plVar20);
  func_0x000107c6157c(lVar10);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(lVar11);
  FUN_102d4afd0();
  uVar13 = *(ulong *)(unaff_x20 + lVar4);
  uVar14 = uVar13 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar14 + 0x10);
  if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
    func_0x000102d55b08(uVar13,uVar1 + 1,1);
    uVar14 = uVar13 & 0xffffffffffffff8;
  }
  puVar5 = puStack_98;
  *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
  *(long *)(uVar14 + uVar1 * 8 + 0x20) = lVar11;
  *(ulong *)(unaff_x20 + lVar4) = uVar13;
  func_0x000107c614a8(alStack_88);
  func_0x0001000a8868(lVar22,*(undefined8 *)(lVar22 + 0x18));
  FUN_102d53bc0(param_1 + alStack_b0[1],puVar5);
  puVar15 = puVar5;
  func_0x000107c614c4(puVar5,alStack_b0[2]);
  puVar19 = (undefined *)*puVar5;
  if ((int)puVar15 == 1) {
    puVar12 = puVar19;
    FUN_102d49d60(puVar19);
    func_0x000107c61170(puVar19);
  }
  else {
    lVar4 = 0x112f10ab8;
    func_0x0001000285a8(0x112f10ab8,&UNK_10db44560);
    iVar2 = *(int *)(lVar4 + 0x30);
    puVar12 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
    func_0x000107c61180();
    func_0x000107c61170(puVar19);
    lVar4 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar4 + -8) + 8))((long)puVar5 + (long)iVar2,lVar4);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112f11250);
  if (lVar4 == 0) {
    func_0x000107c61170(puVar12);
    func_0x000107c61574(lVar11);
    func_0x000107c61574(lVar10);
    func_0x000107c61170(plVar20);
    lVar10 = lStack_90;
  }
  else {
    lVar22 = *(long *)(lVar4 + 0x10);
    if (lVar22 == 0) {
      func_0x000107c61574(lVar11);
      func_0x000107c61170(puVar12);
    }
    else {
      lVar6 = lVar4 + 0x20;
      func_0x000107c61434(lVar4);
      do {
        func_0x000102d53abc(lVar6,alStack_88);
        lVar3 = lStack_68;
        uVar17 = uStack_70;
        func_0x0001000a8868(alStack_88,uStack_70);
        (**(code **)(lVar3 + 0x10))(puVar12,uVar17,lVar3);
        func_0x0001000834e4(alStack_88);
        lVar6 = lVar6 + 0x28;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      func_0x000107c61574(lVar11);
      func_0x000107c61170(puVar12);
      func_0x000107c6142c(lVar4);
    }
    func_0x000107c61574(lStack_90);
    func_0x000107c61170(plVar20);
  }
  func_0x000107c61574(lVar10);
  return;
}



/* Entry: 102d539f8; end: 102d53a07;  */

ulong FUN_102d539f8(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 102d53a08; end: 102d53a2b;  */

undefined8 FUN_102d53a08(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d53a2c; end: 102d53a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d53a2c(void)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  char cStack_59;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  bVar2 = *(byte *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar3 = lVar4 + _DAT_112f11268;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c43e2c();
      func_0x000107c615e8(lVar3);
    }
    if (*(char *)(lVar4 + _DAT_112f11210) == '\x01' && lVar1 == 0) {
      func_0x0001000a8868(lVar4 + _DAT_112f111d0,*(undefined8 *)(lVar4 + _DAT_112f111d0 + 0x18));
      FUN_102d4d018();
    }
    if (((bVar2 & 1) == 0) && (*(char *)(lVar4 + _DAT_112f11260) == '\x01')) {
      uVar5 = *(undefined8 *)(lVar4 + _DAT_112f11220);
      func_0x000107c6157c(uVar5);
      func_0x0001000d224c(&cStack_59);
      func_0x000107c61574(uVar5);
      if (cStack_59 == '\x01') {
        func_0x0001000a8868(lVar4 + _DAT_112f111d0,*(undefined8 *)(lVar4 + _DAT_112f111d0 + 0x18));
        FUN_102d4ca00();
      }
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 102d53a54; end: 102d53aff;  */

void FUN_102d53a54(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 102d53b00; end: 102d53b13;  */

void FUN_102d53b00(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102d53b14; end: 102d53b4f;  */

void FUN_102d53b14(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000102d53b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102d53b50; end: 102d53b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d53b50(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000102d53abc(lVar1 + _DAT_112f111d0,auStack_60);
    func_0x000107c61170(lVar1);
    func_0x0001000a8868(auStack_60,uStack_48);
    FUN_102d4fadc();
    func_0x0001000834e4(auStack_60);
  }
  return;
}



/* Entry: 102d53b70; end: 102d53bbf;  */

void FUN_102d53b70(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f112c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f112b8;
  func_0x00010002969c(0x112f112b8,&UNK_10db44d08);
  puVar2 = &DAT_10dd3ca70;
  func_0x000107c61520(&DAT_10dd3ca70,uVar1);
  puRam0000000112f112c0 = puVar2;
  return;
}



/* Entry: 102d53bc0; end: 102d53c03;  */

undefined8 FUN_102d53bc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102d4690c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102d53c04; end: 102d53c0f;  */

undefined8 *** FUN_102d53c04(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined1 *puVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  long unaff_x20;
  undefined8 **ppuStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  
  pppuVar7 = (undefined8 ***)*param_1;
  lVar1 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    puVar4 = (undefined1 *)0x112f11688;
    func_0x0001000285a8(0x112f11688,&UNK_10db45110);
    func_0x000102d598fc();
    ppuVar5 = (undefined8 **)&UNK_1105c9c10;
    func_0x000107c613f8(&UNK_1105c9c10,puVar4,0,0);
    *puVar4 = 2;
    uStack_60 = 1;
    pppuVar7 = &ppuStack_68;
    ppuStack_68 = ppuVar5;
    func_0x000100854cb0(pppuVar7);
    func_0x000107c614ac(ppuVar5);
  }
  else if ((char)lVar1 == '\x01') {
    func_0x0001000285a8(0x112f11688,&UNK_10db45110);
    uStack_60 = 1;
    ppuStack_68 = pppuVar7;
    func_0x000107c614b0(pppuVar7);
    pppuVar3 = &ppuStack_68;
    func_0x000100854cb0(pppuVar3);
    func_0x000107c61574(lVar2);
    func_0x000101c17ab4(pppuVar7,1);
    pppuVar7 = pppuVar3;
  }
  else {
    func_0x0001000a8868(lVar2 + 0x38,*(undefined8 *)(lVar2 + 0x50));
    uVar6 = 0;
    FUN_102d556e4(0);
    FUN_102d5589c(pppuVar7,uVar6,&PTR_DAT_1105c9490);
    func_0x000107c61574(lVar2);
  }
  return pppuVar7;
}



/* Entry: 102d53c10; end: 102d53cdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d53c10(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  uint uVar3;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f112c8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49e78();
    func_0x000107c615e8(lVar1);
    uVar3 = (uint)lVar2 ^ 1;
  }
  func_0x000103f2e0d4(0);
  func_0x000107c610f8();
  func_0x000107c615f4(param_1,2);
  func_0x000107c61174();
  func_0x000103f2de64(param_1,param_1,unaff_x20,param_2,uVar3);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f112d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d53ce0; end: 102d53d37; -[_TtC38SCGenerativeAIOnboardingImplementation30SCGenAIOnboardingPresenterImpl presentOnboardingIn:source:] */

void FUN_102d53ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102d53c10(param_3,param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d53d38; end: 102d53d43;  */

/* WARNING: Possible PIC construction at 0x000102d53df8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d53dfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d53d38(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f112d0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112f112d8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102d53d44; end: 102d53dc3; -[_TtC38SCGenerativeAIOnboardingImplementation30SCGenAIOnboardingPresenterImpl dismissOnboarding] */

/* WARNING: Possible PIC construction at 0x000102d53d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d53dac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d53d84) */
/* WARNING: Removing unreachable block (ram,0x000102d53db0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d53d44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f112d0);
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + _DAT_112f112d8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102d53dc4; end: 102d53dcf;  */

/* WARNING: Possible PIC construction at 0x000102d53df8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d53dfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d53dc4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f112e0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112f112d8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102d53dd0; end: 102d53e5b;  */

/* WARNING: Possible PIC construction at 0x000102d53df8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d53dfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d53dd0(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + *param_1);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112f112d8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102d53e5c; end: 102d53ebf; -[_TtC38SCGenerativeAIOnboardingImplementation30SCGenAIOnboardingPresenterImpl preferredContainerFor:] */

void FUN_102d53e5c(void)

{
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d53ec0; end: 102d53ef3; -[_TtC38SCGenerativeAIOnboardingImplementation30SCGenAIOnboardingPresenterImpl attach:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d53ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f112d8);
  *(undefined8 *)(param_1 + _DAT_112f112d8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102d53ef4; end: 102d53ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d53ef4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000103ed43c4(0);
  func_0x000107c610f8();
  func_0x000107c615f0();
  func_0x000103ed4040();
  lVar1 = _DAT_11302c250;
  func_0x000107c61428(param_1 + _DAT_11302c250,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = unaff_x20;
  func_0x000107c615e8(uVar2);
  func_0x000103f30268(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  lVar3 = param_1;
  func_0x000103f300c8();
  lVar1 = _DAT_11302f2a0;
  func_0x000107c61428(lVar3 + _DAT_11302f2a0,auStack_60,1,0);
  func_0x000107c61604(lVar3 + lVar1,unaff_x20);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f112e0));
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102d53ff8; end: 102d5403f; -[_TtC38SCGenerativeAIOnboardingImplementation30SCGenAIOnboardingPresenterImpl presentGenAISettingsIn:] */

void FUN_102d53ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102d53ef4(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d54040; end: 102d540bb; -[_TtC38SCGenerativeAIOnboardingImplementation30SCGenAIOnboardingPresenterImpl init] */

void FUN_102d54040(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenerativeAIOnboardingImplementation.SCGenAIOnboardingPresenterImpl",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5406c);
  (*pcVar1)();
}



/* Entry: 102d540bc; end: 102d54123; -[_TtC38SCGenerativeAIOnboardingImplementation30SCGenAIOnboardingPresenterImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d540e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d54108: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d540ec) */
/* WARNING: Removing unreachable block (ram,0x000102d5410c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d540bc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f112e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f112d0));
  return;
}



/* Entry: 102d54124; end: 102d54127; -[_TtC38SCGenerativeAIOnboardingImplementation30SCGenAIOnboardingPresenterImpl generativeAIOnboardingScopeWillCompleteWithCancelled:] */

void FUN_102d54124(void)

{
  return;
}



/* Entry: 102d54128; end: 102d5417b; -[_TtC38SCGenerativeAIOnboardingImplementation30SCGenAIOnboardingPresenterImpl generativeAIOnboardingScopeDidCompleteWithCancelled:genAIIdentity:] */

/* WARNING: Possible PIC construction at 0x000102d54164: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d54168) */

void FUN_102d54128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000102d5424c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 102d5417c; end: 102d54183; -[_TtC38SCGenerativeAIOnboardingImplementation30SCGenAIOnboardingPresenterImpl generativeAIOnboardingScopeGetSettingsExposer] */

void FUN_102d5417c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102d54184; end: 102d5433f;  */

/* WARNING: Possible PIC construction at 0x000102d541e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d54218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d541e4) */
/* WARNING: Removing unreachable block (ram,0x000102d541e8) */
/* WARNING: Removing unreachable block (ram,0x000102d5421c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d54184(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  code *pcVar3;
  
  lVar1 = _DAT_112f112d8;
  if (*(ulong **)(unaff_x20 + _DAT_112f112d8) == (ulong *)0x0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f112e0);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      *(undefined8 *)(unaff_x20 + lVar1) = 0;
    }
  }
  else {
    pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 &
                        **(ulong **)(unaff_x20 + _DAT_112f112d8)) + 0x98);
    func_0x000107c61174();
    (*pcVar3)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102d54340; end: 102d54343; -[_TtC38SCGenerativeAIOnboardingImplementation30SCGenAIOnboardingPresenterImpl navigationWrappedUIContainerPresentationDidDismiss] */

void FUN_102d54340(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102d54184();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d54344; end: 102d54347; -[_TtC38SCGenerativeAIOnboardingImplementation30SCGenAIOnboardingPresenterImpl selfieOnboardingSettingsScopeWantsToDismiss] */

void FUN_102d54344(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102d54184();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d54348; end: 102d543cb;  */

void FUN_102d54348(void)

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



/* Entry: 102d543cc; end: 102d543db;  */

void FUN_102d543cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102d543dc; end: 102d5441f;  */

void FUN_102d543dc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d54420; end: 102d5449b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102d54420(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f113c8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f113c8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___PHCachingImageManager_1126c3270;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c52698();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 102d5449c; end: 102d546ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d5449c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f113d0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f113d0);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    func_0x000102d54508();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    FUN_102d57318(uVar4);
  }
  func_0x000102d57328(lVar3);
  return lVar2;
}



/* Entry: 102d546ac; end: 102d547df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102d546ac(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_112f113d8;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112f113d8);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(lVar6 + 0x68))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar2);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar5 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010f10b260);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar5);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c615e8(uVar5);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c615f0(puVar3);
  return puVar4;
}



/* Entry: 102d547e0; end: 102d54d87;  */

undefined * FUN_102d547e0(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    if (uVar11 == 0) {
LAB_102d54a74:
      puVar7 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x000107c453e4();
      func_0x000107c4a8a4(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      puVar6 = puVar7;
      func_0x000107c5cb24(puVar7);
      func_0x000107c61180();
      goto LAB_102d54b64;
    }
LAB_102d5481c:
    uVar12 = 0;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar12;
        FUN_102d56584(uVar12,param_1,&PTR_PTR_1126c6610,0x112d6bde8);
      }
      func_0x0001000285a8(0x112f11418,&UNK_10db44e38);
      func_0x000107c613fc();
      uVar4 = 1;
      func_0x00010008747c();
      uVar5 = uVar4;
      FUN_102d546ac();
      uVar9 = uVar5;
      func_0x000107c614f0();
      puVar7 = &UNK_1105c94d8;
      func_0x000107c613fc(&UNK_1105c94d8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar6 = &UNK_1105c9528;
      func_0x000107c613fc(&UNK_1105c9528,0x28,7);
      *(undefined **)(puVar6 + 0x10) = puVar7;
      *(undefined8 *)(puVar6 + 0x18) = uVar4;
      *(ulong *)(puVar6 + 0x20) = uVar3;
      func_0x000107c6157c(puVar7);
      func_0x000107c6157c(uVar4);
      func_0x000107c61174(uVar3);
      func_0x00010090569c(FUN_102d573ac,puVar6,uVar9);
      func_0x000107c61574(puVar7);
      func_0x000107c615e8(uVar5);
      func_0x000107c61574(puVar6);
      func_0x000107c6157c(uVar4);
      puVar7 = puVar8;
      func_0x000107c61550();
      if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
         (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar8 >> 0x3e == 0) {
          puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar8) {
            puVar6 = puVar8;
          }
          func_0x000107c60480(puVar6);
        }
        puVar7 = (undefined *)0x0;
        FUN_102d55dd0(0,puVar6 + 1,1,puVar8,FUN_102d5b1b8,0x112f11420,&UNK_10db44e40);
      }
      uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar10 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
        FUN_102d55dd0(puVar8,uVar1 + 1,1,puVar7,FUN_102d5b1b8,0x112f11420,&UNK_10db44e40);
        uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
      *(undefined8 *)(uVar10 + uVar1 * 8 + 0x20) = uVar4;
      func_0x000107c61574(uVar4);
      func_0x000107c61170(uVar3);
    } while (uVar11 != uVar12);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar11 = param_1;
    }
    uVar12 = uVar11;
    func_0x000107c60480();
    if ((long)uVar12 < 1) goto LAB_102d54a74;
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar11 != 0) {
      if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d54a74);
        (*pcVar2)();
      }
      goto LAB_102d5481c;
    }
  }
  func_0x0001000285a8(0x112f11420,&UNK_10db44e40);
  puVar7 = puVar8;
  func_0x000100b658a4(puVar8);
  uVar9 = 0;
  FUN_102d573e0(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar5 = 0x102d54b90;
  func_0x0001000bfde0(0x102d54b90,0,uVar9);
  func_0x000107c61574(puVar7);
  func_0x0001004575f0();
  func_0x000107c61574(uVar5);
  puVar6 = puVar7;
  func_0x000107c5cb24(puVar7);
  func_0x000107c61180();
  func_0x000107c6142c(puVar8);
LAB_102d54b64:
  func_0x000107c61170(puVar7);
  return puVar6;
}



/* Entry: 102d54d88; end: 102d54e03; -[_TtC38SCGenerativeAIOnboardingImplementation32GenAIMemoriesPickerDataValidator validateWithItems:] */

void FUN_102d54d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_102d573e0(0,0x112d6bde8,&PTR_PTR_1126c6610);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102d547e0(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102d54e04; end: 102d54ef3;  */

void FUN_102d54e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c614f0(param_2);
  puVar1 = &UNK_1105c94d8;
  func_0x000107c613fc(&UNK_1105c94d8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  puVar2 = &UNK_1105c9500;
  func_0x000107c613fc(&UNK_1105c9500,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_1);
  func_0x000107c61174(param_4);
  func_0x00010090569c(0x102d55940,puVar2,param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}


