/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018f52d8; end: 1018f5307;  */

void FUN_1018f52d8(void)

{
  long unaff_x22;
  
  func_0x0001041e66ac();
                    /* WARNING: Could not recover jumptable at 0x0001018f5304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f5308; end: 1018f535b;  */

undefined1  [16] FUN_1018f5308(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c417f0(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1018f535c; end: 1018f5383;  */

undefined1  [16] FUN_1018f535c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb000000004b524f;
  auVar1._0_8_ = 0x5754454e44414b53;
  return auVar1;
}



/* Entry: 1018f5384; end: 1018f553f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f5384(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = param_1;
  func_0x0001030beda8(_DAT_112dd1a98);
  lVar5 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(lVar2 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(lVar2 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(lVar2 + 0x40);
  uVar7 = uVar7 + 0x3f >> 6;
  lVar8 = lVar5;
  if (uVar9 == 0) goto LAB_1018f5404;
LAB_1018f5430:
  do {
    uVar6 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 - 1 & uVar9;
    uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar8 << 6;
    puVar3 = (undefined8 *)(*(long *)(lVar2 + 0x30) + uVar6 * 0x10);
    uStack_c0 = *puVar3;
    lVar5 = puVar3[1];
    lStack_b8 = lVar5;
    func_0x0001000bb420(*(long *)(lVar2 + 0x38) + uVar6 * 0x20,&uStack_b0);
    func_0x000107c61434(lVar5);
    lVar5 = lVar8;
    while( true ) {
      lVar8 = lStack_b8;
      uVar4 = uStack_c0;
      lStack_88 = lStack_b8;
      uStack_90 = uStack_c0;
      uStack_78 = uStack_a8;
      uStack_80 = uStack_b0;
      uStack_68 = uStack_98;
      uStack_70 = uStack_a0;
      if (lStack_b8 == 0) {
        func_0x000107c61574(lVar2);
        return;
      }
      func_0x000100102924(&uStack_80,&uStack_c0);
      puVar3 = &uStack_c0;
      func_0x0001018f56ec(&uStack_c0,uStack_a8);
      func_0x000107c605b0();
      func_0x000107c5fadc(uVar4,lVar8);
      func_0x000107c6142c(lVar8);
      func_0x000107c524f4(param_1);
      func_0x000107c615e8(puVar3);
      func_0x000107c61170(uVar4);
      func_0x0001018f5710(&uStack_c0);
      lVar8 = lVar5;
      if (uVar9 != 0) break;
LAB_1018f5404:
      uVar6 = uVar7;
      if ((long)uVar7 <= lVar5 + 1) {
        uVar6 = lVar5 + 1;
      }
      while( true ) {
        lVar8 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1018f5540);
          (*pcVar1)();
        }
        if ((long)uVar7 <= lVar8) break;
        uVar9 = ((ulong *)(lVar2 + 0x40))[lVar8];
        lVar5 = lVar5 + 1;
        if (uVar9 != 0) goto LAB_1018f5430;
      }
      uVar9 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
      lVar5 = uVar6 - 1;
    }
  } while( true );
}



/* Entry: 1018f5540; end: 1018f558f; -[_TtC35AppImpressionServicesImplementation25SKANSKOverlayConfigurator applyTo:] */

/* WARNING: Possible PIC construction at 0x0001018f5578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f557c) */

void FUN_1018f5540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018f5384(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018f5590; end: 1018f55ef; -[_TtC35AppImpressionServicesImplementation25SKANSKOverlayConfigurator init] */

void FUN_1018f5590(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AppImpressionServicesImplementation.SKANSKOverlayConfigurator",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018f55bc);
  (*pcVar1)();
}



/* Entry: 1018f55f0; end: 1018f561b; -[_TtC35AppImpressionServicesImplementation25SKANSKOverlayConfigurator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1018f55f0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112dd1a98;
  lVar1 = 0;
  func_0x000100b92084();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1018f561c; end: 1018f564b;  */

void FUN_1018f561c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 1018f564c; end: 1018f56b7;  */

void FUN_1018f564c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000100b92084();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,1,&lStack_28,param_1 + 0x50);
  }
  return;
}



/* Entry: 1018f56b8; end: 1018f56cf;  */

void FUN_1018f56b8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1018f4ad4(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018f56d0; end: 1018f5757;  */

void FUN_1018f56d0(long param_1,long param_2)

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



/* Entry: 1018f5758; end: 1018f57f7;  */

void FUN_1018f5758(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1018f57f8; end: 1018f5807;  */

void FUN_1018f57f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1018f5808; end: 1018f587b;  */

void FUN_1018f5808(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f587c,uVar1,uVar2);
  return;
}



/* Entry: 1018f587c; end: 1018f58e7;  */

void FUN_1018f587c(long param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x88) = param_1;
  if (param_1 == 0) {
    param_1 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f58e8,param_1);
  return;
}



/* Entry: 1018f58e8; end: 1018f5937;  */

void FUN_1018f58e8(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1018f5938;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_1018f5a74();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1018f5938; end: 1018f599b;  */

void FUN_1018f5938(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xa0) = *(long *)(lVar4 + 0x30);
  if (*(long *)(lVar4 + 0x30) == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x90);
    uVar3 = *(undefined8 *)(lVar4 + 0x98);
    pcVar1 = FUN_1018f599c;
  }
  else {
    func_0x000107c61654();
    uVar2 = *(undefined8 *)(lVar4 + 0x90);
    uVar3 = *(undefined8 *)(lVar4 + 0x98);
    pcVar1 = (code *)0x1018f5a08;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1018f599c; end: 1018f5a73;  */

void FUN_1018f599c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1018f59d4,*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x80));
  return;
}



/* Entry: 1018f5a74; end: 1018f5cff;  */

void FUN_1018f5a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  uVar3 = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar3);
  uVar4 = uVar1;
  func_0x000107c615cc();
  if ((uVar4 & 1) == 0) {
    func_0x000107c615dc("AppImpressionServicesImplementation/SKStoreProductViewControlling.swift",
                        0x47,1,0x1f,uVar1,uVar3);
  }
  func_0x000107c5f9dc(param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  puVar5 = &UNK_11040f880;
  func_0x000107c613fc(&UNK_11040f880,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  pcStack_50 = FUN_1018f5e5c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1012d20f0;
  puStack_58 = &UNK_11040f898;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c4b760(param_2);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1018f5d00; end: 1018f5d4f;  */

void FUN_1018f5d00(long param_1)

{
  long lVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1018f5ff0;
  plVar2[10] = param_1;
  plVar2[0xb] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar2[0xc] = lVar1;
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[0xd] = lVar3;
  func_0x000100eea164();
  plVar2[0xe] = lVar3;
  func_0x000107c5fca8();
  plVar2[0xf] = lVar1;
  plVar2[0x10] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f587c,lVar1,lVar3);
  return;
}



/* Entry: 1018f5d50; end: 1018f5db3;  */

void FUN_1018f5d50(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sSo28SKStoreProductViewControllerC023_AdAttributionKit_StoreG0E04loadB010parameters10impressionySDySSypG_0efG013AppImpressionVtYaKFTu_11034d508
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1018f5ff4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb8978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___sSo28SKStoreProductViewControllerC023_AdAttributionKit_StoreG0E04loadB010parameters10impressionySDySSypG_0efG013AppImpressionVtYaKF_11034d500
  )(param_1,param_2);
  return;
}



/* Entry: 1018f5db4; end: 1018f5e1f;  */

void FUN_1018f5db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sSo28SKStoreProductViewControllerC023_AdAttributionKit_StoreG0E04loadB010parameters10impression15reengagementURLySDySSypG_0efG013AppImpressionV10Foundation0M0VtYaKFTu_11034d4f8
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1018f5e20;
                    /* WARNING: Could not recover jumptable at 0x00010bdb896c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___sSo28SKStoreProductViewControllerC023_AdAttributionKit_StoreG0E04loadB010parameters10impression15reengagementURLySDySSypG_0efG013AppImpressionV10Foundation0M0VtYaKF_11034d4f0
  )(param_1,param_2,param_3);
  return;
}



/* Entry: 1018f5e20; end: 1018f5e5b;  */

void FUN_1018f5e20(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018f5e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018f5e5c; end: 1018f5e7f;  */

void FUN_1018f5e5c(ulong param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  pcVar1 = (char *)0x0;
  func_0x000107c5fcec();
  pcVar2 = pcVar1;
  func_0x000107c5fce8();
  pcVar3 = pcVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(pcVar1,pcVar3);
  pcVar4 = pcVar1;
  func_0x000107c615cc();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "AppImpressionServicesImplementation/SKStoreProductViewControlling.swift";
    func_0x000107c615dc("AppImpressionServicesImplementation/SKStoreProductViewControlling.swift",
                        0x47,1,0x20,pcVar1,pcVar3);
  }
  if (param_2 == 0) {
    if ((param_1 & 1) != 0) {
      func_0x000107c61450(uVar9);
      goto LAB_1018f5ce8;
    }
    FUN_1018f5e80();
    puVar5 = &UNK_11040f940;
    func_0x000107c613f8(&UNK_11040f940,pcVar4,0,0);
    uVar6 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar8 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar8 = puVar5;
  }
  else {
    uVar6 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar7 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar7 = param_2;
    func_0x000107c614b0(param_2);
  }
  func_0x000107c61454(uVar9,uVar6);
LAB_1018f5ce8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(pcVar2);
  return;
}



/* Entry: 1018f5e80; end: 1018f5ebf;  */

void FUN_1018f5e80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd1ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d992d0c;
  func_0x000107c61520(&UNK_10d992d0c,&UNK_11040f940);
  puRam0000000112dd1ad8 = puVar1;
  return;
}



/* Entry: 1018f5ec0; end: 1018f5faf;  */

uint FUN_1018f5ec0(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1018f5fb0; end: 1018f5fef;  */

void FUN_1018f5fb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd1ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d992ce4;
  func_0x000107c61520(&UNK_10d992ce4,&UNK_11040f940);
  puRam0000000112dd1ae0 = puVar1;
  return;
}



/* Entry: 1018f5ff0; end: 1018f5ff7;  */

void FUN_1018f5ff0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018f5e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018f5ff8; end: 1018f6053; -[_TtC39WebBrowserPrivacyConsentServiceProvider35WebBrowserPrivacyConsentInfoManager init] */

void FUN_1018f5ff8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowserPrivacyConsentServiceProvider.WebBrowserPrivacyConsentInfoManager",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018f6024);
  (*pcVar1)();
}



/* Entry: 1018f6054; end: 1018f60bb; -[_TtC39WebBrowserPrivacyConsentServiceProvider35WebBrowserPrivacyConsentInfoManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001018f60a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f60a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f6054(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd1ae8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd1af0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd1af8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dd1b00));
  return;
}



/* Entry: 1018f60bc; end: 1018f60db;  */

void FUN_1018f60bc(void)

{
  func_0x000107c61168(&PTR_PTR_1127ec048);
  return;
}



/* Entry: 1018f60dc; end: 1018f61df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1018f60dc(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_50);
  lVar1 = lStack_50;
  if (lStack_50 != 0) {
    func_0x0001000d224c(&lStack_50);
    if (lStack_50 != 0) {
      lVar3 = lVar1;
      func_0x000107c614f0();
      lVar4 = lVar3;
      (**(code **)(lStack_48 + 8))();
      uVar2 = (uint)lVar4;
      if ((uVar2 & 0xff) == 2) {
        lVar4 = lStack_50;
        func_0x000107c5e1c4();
        if (lVar4 == 0) {
          func_0x000107c615e8(lVar1);
          func_0x000107c61170(lStack_50);
          goto LAB_1018f61c0;
        }
        uVar2 = (uint)(lVar4 == 2);
        (**(code **)(lStack_48 + 0x10))(lVar4 == 2,lVar3,lStack_48);
      }
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lStack_50);
      goto LAB_1018f61c4;
    }
    func_0x000107c615e8(lVar1);
  }
LAB_1018f61c0:
  uVar2 = 0;
LAB_1018f61c4:
  return uVar2 & 1;
}



/* Entry: 1018f61e0; end: 1018f6213; -[_TtC39WebBrowserPrivacyConsentServiceProvider35WebBrowserPrivacyConsentInfoManager getPrivacyConsentValue] */

uint FUN_1018f61e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1018f60dc();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1018f6214; end: 1018f62d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f6214(uint param_1)

{
  long lVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_50);
  lVar1 = lStack_50;
  if (lStack_50 != 0) {
    func_0x0001000d224c(&lStack_50);
    if (lStack_50 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      lVar2 = lVar1;
      func_0x000107c614f0(lVar1);
      (**(code **)(lStack_48 + 0x10))(param_1 & 1,lVar2,lStack_48);
      FUN_1018f62d4(param_1 & 1,lStack_50);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lStack_50);
    }
  }
  return;
}



/* Entry: 1018f62d4; end: 1018f64e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f62d4(undefined1 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  puVar2 = PTR_PTR_1126a7d70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_11040fa68;
  func_0x000107c613fc(&UNK_11040fa68,0x19,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  puVar3[0x18] = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1018f6d64;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11040fa80;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar3);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dd1b08);
  uVar5 = uVar8;
  func_0x000107c4f7c0(uVar8);
  func_0x000107c61180();
  func_0x000107c4f7c0(uVar8);
  func_0x000107c61180();
  puVar3 = &UNK_11040fab8;
  func_0x000107c613fc(&UNK_11040fab8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcStack_70 = (code *)0x1018f6d98;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11040fad0;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11040fb08;
  func_0x000107c613fc(&UNK_11040fb08,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcStack_70 = (code *)0x1018f6da8;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ff4e14;
  puStack_78 = &UNK_11040fb20;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c4e568(param_2);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1018f64e8; end: 1018f6517; -[_TtC39WebBrowserPrivacyConsentServiceProvider35WebBrowserPrivacyConsentInfoManager updatePrivacyConsentWithValue:] */

void FUN_1018f64e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1018f6214(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018f6518; end: 1018f6667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f6518(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  func_0x0001000d224c(&lStack_60);
  lVar1 = lStack_60;
  if (lStack_60 != 0) {
    func_0x0001000d224c(&lStack_60);
    if (lStack_60 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      lVar2 = lVar1;
      func_0x000107c614f0(lVar1);
      (**(code **)(lStack_58 + 0x28))(0,lVar2,lStack_58);
      FUN_1018f6668(0,lStack_60);
      puVar3 = PTR_PTR_1126afec0;
      func_0x000107c61168(PTR_PTR_1126afec0);
      func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112dd1b00));
      func_0x000107c51b38(puVar3);
      (**(code **)(lStack_58 + 0x40))(param_1,0,lVar2,lStack_58);
      ppuVar4 = &PTR____CFConstantStringClassReference_110de09d8;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110de09d8);
      ppuVar5 = ppuVar4;
      func_0x000107c5fdd0(param_1);
      func_0x000107c559f0(lStack_60);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lStack_60);
      func_0x000107c61170(ppuVar4);
      func_0x000107c61170(ppuVar5);
    }
  }
  return;
}



/* Entry: 1018f6668; end: 1018f687b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f6668(undefined1 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  puVar2 = PTR_PTR_1126a7d70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_11040fb58;
  func_0x000107c613fc(&UNK_11040fb58,0x19,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  puVar3[0x18] = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x1018f6db8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11040fb70;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar3);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dd1b08);
  uVar5 = uVar8;
  func_0x000107c4f7c0(uVar8);
  func_0x000107c61180();
  func_0x000107c4f7c0(uVar8);
  func_0x000107c61180();
  puVar3 = &UNK_11040fba8;
  func_0x000107c613fc(&UNK_11040fba8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  uStack_70 = 0x1018f6df0;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11040fbc0;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11040fbf8;
  func_0x000107c613fc(&UNK_11040fbf8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  uStack_70 = 0x1018f6dfc;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ff4e14;
  puStack_78 = &UNK_11040fc10;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c4e568(param_2);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1018f687c; end: 1018f68a3; -[_TtC39WebBrowserPrivacyConsentServiceProvider35WebBrowserPrivacyConsentInfoManager didPresentPrivacyPrompt] */

void FUN_1018f687c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1018f6518();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018f68a4; end: 1018f6b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1018f68a4(double param_1,ulong param_2)

{
  double dVar1;
  double dVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  long lVar7;
  ulong unaff_x20;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dStack_70;
  long lStack_68;
  
  func_0x000104044018();
  if ((param_2 & 1) != 0) {
    return 1;
  }
  func_0x0001000d224c(&dStack_70);
  dVar1 = dStack_70;
  if (dStack_70 != 0.0) {
    func_0x0001000d224c(&dStack_70);
    dVar2 = dStack_70;
    if (dStack_70 == 0.0) {
      func_0x000107c615e8(dVar1);
    }
    else {
      uVar3 = unaff_x20;
      func_0x000107c44204();
      if ((uVar3 & 1) == 0) {
        puVar4 = PTR_PTR_1126afec0;
        func_0x000107c61168(PTR_PTR_1126afec0);
        func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112dd1b00));
        func_0x000107c51b38(puVar4);
        dVar9 = param_1;
        func_0x0001000d224c(&dStack_70);
        dVar6 = dStack_70;
        dVar5 = dStack_70;
        func_0x000107c5c9e0();
        func_0x000107c615e8();
        func_0x0001040441b8();
        if (dVar6 == 0.0) {
          dVar9 = (double)(long)dVar5 * 24.0 * 60.0;
        }
        else {
          func_0x000107c4223c();
          func_0x000107c61170(dVar6);
        }
        func_0x0001000d224c(&dStack_70);
        dVar6 = dStack_70;
        dVar5 = dStack_70;
        func_0x000107c3f410();
        func_0x000107c615e8(dVar6);
        if (SUB84(dVar5,0) != 0) {
          dVar6 = dVar1;
          func_0x000107c614f0();
          pcVar8 = *(code **)(lStack_68 + 0x20);
          dVar5 = dVar6;
          (*pcVar8)();
          if (((ulong)dVar5 & 1) != 0) {
LAB_1018f6a08:
            func_0x000107c615e8(dVar1);
            func_0x000107c61170(dVar2);
            return 1;
          }
          dVar5 = dVar6;
          (*pcVar8)(dVar6,lStack_68);
          if (((SUB84(dVar5,0) & 0xff) == 2) &&
             (dVar5 = dVar2, func_0x000107c5e1d8(), dVar5 == 9.88131291682493e-324)) {
            (**(code **)(lStack_68 + 0x28))(1,dVar6,lStack_68);
            goto LAB_1018f6a08;
          }
          func_0x0001000d224c(&dStack_70);
          dVar5 = dStack_70;
          func_0x000107c42664();
          func_0x000107c615e8(dStack_70);
          if ((SUB84(dVar5,0) == 0) ||
             ((dVar5 = dVar2, func_0x000107c5e1c4(), dVar5 == 0.0 &&
              (dVar5 = dVar6, (**(code **)(lStack_68 + 8))(dVar6,lStack_68),
              (SUB84(dVar5,0) & 0xff) == 2)))) {
            dVar9 = dVar9 * 60.0;
            dVar10 = dVar9 * 1000.0;
            dVar5 = dVar6;
            lVar7 = lStack_68;
            (**(code **)(lStack_68 + 0x38))();
            if (((uint)lVar7 & 0xff) == 1) {
              func_0x000107c5e1c8(dVar2);
              dVar5 = dVar9;
            }
            if (dVar10 < param_1 - dVar5) {
              (**(code **)(lStack_68 + 0x28))(1,dVar6,lStack_68);
              FUN_1018f6668(1,dVar2);
              goto LAB_1018f6a08;
            }
            (**(code **)(lStack_68 + 0x28))(0,dVar6,lStack_68);
            FUN_1018f6668(0,dVar2);
          }
        }
      }
      func_0x000107c615e8(dVar1);
      func_0x000107c61170(dVar2);
    }
  }
  return 0;
}



/* Entry: 1018f6b98; end: 1018f6bcb; -[_TtC39WebBrowserPrivacyConsentServiceProvider35WebBrowserPrivacyConsentInfoManager shouldPresentPrivacyPrompt] */

uint FUN_1018f6b98(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1018f68a4();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1018f6bcc; end: 1018f6d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f6bcc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuStack_60;
  long lStack_58;
  
  func_0x0001000d224c(&ppuStack_60);
  ppuVar1 = ppuStack_60;
  if (ppuStack_60 != (undefined **)0x0) {
    func_0x0001000d224c(&ppuStack_60);
    if (ppuStack_60 == (undefined **)0x0) {
      func_0x000107c615e8(ppuVar1);
    }
    else {
      ppuVar2 = ppuVar1;
      func_0x000107c614f0();
      ppuVar3 = ppuVar2;
      (**(code **)(lStack_58 + 8))();
      if (((uint)ppuVar3 & 0xff) != 2) {
        FUN_1018f62d4((uint)ppuVar3 & 1,ppuStack_60);
      }
      ppuVar3 = ppuVar2;
      (**(code **)(lStack_58 + 0x20))(ppuVar2,lStack_58);
      if (((uint)ppuVar3 & 0xff) != 2) {
        FUN_1018f6668((uint)ppuVar3 & 1,ppuStack_60);
      }
      (**(code **)(lStack_58 + 0x38))(ppuVar2);
      if (((uint)lStack_58 & 0xff) == 1) {
        func_0x000107c615e8(ppuVar1);
        ppuVar3 = ppuStack_60;
      }
      else {
        ppuVar4 = &PTR____CFConstantStringClassReference_110de09d8;
        func_0x000107c61174(&PTR____CFConstantStringClassReference_110de09d8);
        ppuVar3 = ppuVar4;
        func_0x000107c5fdd0(ppuVar2);
        func_0x000107c559f0(ppuStack_60);
        func_0x000107c615e8(ppuVar1);
        func_0x000107c61170(ppuStack_60);
        func_0x000107c61170(ppuVar4);
      }
      func_0x000107c61170(ppuVar3);
    }
  }
  return;
}



/* Entry: 1018f6d3c; end: 1018f6d63; -[_TtC39WebBrowserPrivacyConsentServiceProvider35WebBrowserPrivacyConsentInfoManager syncRemoteStorage] */

void FUN_1018f6d3c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1018f6bcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018f6d64; end: 1018f6dff;  */

void FUN_1018f6d64(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 1;
  if (*(char *)(unaff_x20 + 0x18) != '\0') {
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c224d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setWebBrowsingEnablePrivacyConse_112666d70,
             uVar1);
  return;
}



/* Entry: 1018f6e00; end: 1018f6e53;  */

void FUN_1018f6e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 1018f6e54; end: 1018f6e6f;  */

void FUN_1018f6e54(long *param_1,long *param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)0x0;
  if (*param_2 != 0) {
    ppuVar1 = &PTR_DAT_11040fcf8;
  }
  *param_1 = *param_2;
  param_1[1] = (long)ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1018f6e70; end: 1018f6f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f6e70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  puVar1 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = 0;
  FUN_1018f60bc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112dd1ae8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112dd1af0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112dd1af8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112dd1b08) = param_5;
  *(undefined **)(lVar3 + _DAT_112dd1b00) = puVar1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1018f6f58; end: 1018f6f63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f6f58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_60;
  puVar5 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar6 = 0;
  FUN_1018f60bc();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112dd1ae8) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112dd1af0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112dd1af8) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112dd1b08) = uVar4;
  *(undefined **)(lVar7 + _DAT_112dd1b00) = puVar5;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(uVar4);
  func_0x000107c61154(&lStack_60,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1018f6f64; end: 1018f6f8f;  */

/* WARNING: Possible PIC construction at 0x0001018f6f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018f6f80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f6f74) */
/* WARNING: Removing unreachable block (ram,0x0001018f6f84) */

void FUN_1018f6f64(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018f6f90; end: 1018f70f3;  */

void FUN_1018f6f90(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018f70f4; end: 1018f717b;  */

void FUN_1018f70f4(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(byte *)(param_1 + 1) == 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)(*(byte *)(param_1 + 1) & 1);
    func_0x000107c5fca0(uVar2);
  }
  uVar3 = *param_1;
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc0140);
  func_0x000107c56bd8(uVar3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 1018f717c; end: 1018f725f;  */

byte FUN_1018f717c(void)

{
  undefined8 uVar1;
  byte *pbVar2;
  byte bVar3;
  long unaff_x20;
  byte bStack_29;
  undefined1 auStack_28 [8];
  
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc0160);
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  bVar3 = 2;
  if (unaff_x20 != 0) {
    uVar1 = 0x112d373e8;
    func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
    pbVar2 = &bStack_29;
    func_0x000107c6147c(pbVar2,auStack_28,uVar1,PTR___sSbN_11034dd40,6);
    bVar3 = bStack_29;
    if ((int)pbVar2 == 0) {
      bVar3 = 2;
    }
  }
  return bVar3;
}



/* Entry: 1018f7260; end: 1018f73a7;  */

void FUN_1018f7260(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(byte *)(param_1 + 1) == 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)(*(byte *)(param_1 + 1) & 1);
    func_0x000107c5fca0(uVar2);
  }
  uVar3 = *param_1;
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc0160);
  func_0x000107c56bd8(uVar3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 1018f73a8; end: 1018f73df;  */

undefined1  [16] FUN_1018f73a8(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[2] = unaff_x20;
  plVar1 = param_1;
  func_0x0001018f72e8();
  *param_1 = (long)plVar1;
  *(undefined1 *)(param_1 + 1) = param_2;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1018f73e0;
  return auVar2;
}



/* Entry: 1018f73e0; end: 1018f7463;  */

void FUN_1018f73e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = param_1;
    func_0x000107c5fdd0(*param_1);
  }
  uVar3 = param_1[2];
  uVar1 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010efc0180);
  func_0x000107c56bd8(uVar3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar2);
  return;
}



/* Entry: 1018f7464; end: 1018f7467;  */

byte FUN_1018f7464(void)

{
  undefined8 uVar1;
  byte *pbVar2;
  byte bVar3;
  long unaff_x20;
  byte bStack_29;
  undefined1 auStack_28 [8];
  
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc0140);
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  bVar3 = 2;
  if (unaff_x20 != 0) {
    uVar1 = 0x112d373e8;
    func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
    pbVar2 = &bStack_29;
    func_0x000107c6147c(pbVar2,auStack_28,uVar1,PTR___sSbN_11034dd40,6);
    bVar3 = bStack_29;
    if ((int)pbVar2 == 0) {
      bVar3 = 2;
    }
  }
  return bVar3;
}



/* Entry: 1018f7468; end: 1018f753f;  */

void FUN_1018f7468(uint param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((param_1 & 0xff) == 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)(param_1 & 1);
    func_0x000107c5fca0(uVar2);
  }
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc0140);
  func_0x000107c56bd8();
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018f7540; end: 1018f7547;  */

void FUN_1018f7540(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1018f7548; end: 1018f761f;  */

void FUN_1018f7548(uint param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((param_1 & 0xff) == 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)(param_1 & 1);
    func_0x000107c5fca0(uVar2);
  }
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc0160);
  func_0x000107c56bd8();
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018f7620; end: 1018f7623;  */

undefined1  [16] FUN_1018f7620(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = (uint)&uStack_40;
  uVar2 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010efc0180);
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (unaff_x20 == 0) {
    uStack_40 = 0;
    uVar3 = 1;
  }
  else {
    uVar2 = 0x112d373e8;
    func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
    func_0x000107c6147c(&uStack_40,auStack_38,uVar2,PTR___sSdN_11034dd90,6);
    if (uVar1 == 0) {
      uStack_40 = 0;
    }
    uVar3 = (ulong)(uVar1 ^ 1);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uStack_40;
  return auVar4;
}



/* Entry: 1018f7624; end: 1018f76fb;  */

void FUN_1018f7624(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 == '\x01') {
    param_1 = 0;
  }
  else {
    func_0x000107c5fdd0(param_1);
  }
  uVar1 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010efc0180);
  func_0x000107c56bd8();
  func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018f76fc; end: 1018f7727;  */

void FUN_1018f76fc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1018f7728; end: 1018f772f;  */

void FUN_1018f7728(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1018f7730; end: 1018f7993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1018f7730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [96];
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar7 = 0;
  FUN_1018f8bf8();
  lVar8 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112dd1d78);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar8 + _DAT_112dd1d80) = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112dd1d88);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112dd1d90);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar8 + _DAT_112dd1d98) = 0;
  *(undefined8 *)(lVar8 + _DAT_112dd1da0) = 0;
  *(undefined8 *)(lVar8 + _DAT_112dd1d40) = uVar11;
  *(undefined8 *)(lVar8 + _DAT_112dd1d48) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112dd1d50) = uVar10;
  *(undefined8 *)(lVar8 + _DAT_112dd1d58) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112dd1d60) = uVar2;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112dd1d68);
  uVar14 = *param_7;
  uVar13 = param_7[3];
  uVar12 = param_7[2];
  puVar1[1] = param_7[1];
  *puVar1 = uVar14;
  puVar1[3] = uVar13;
  puVar1[2] = uVar12;
  uVar13 = param_7[5];
  uVar12 = param_7[4];
  uVar15 = param_7[7];
  uVar14 = param_7[6];
  uVar17 = param_7[9];
  uVar16 = param_7[8];
  puVar1[10] = param_7[10];
  puVar1[7] = uVar15;
  puVar1[6] = uVar14;
  puVar1[9] = uVar17;
  puVar1[8] = uVar16;
  puVar1[5] = uVar13;
  puVar1[4] = uVar12;
  *(undefined8 *)(lVar8 + _DAT_112dd1d70) = uVar5;
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar3);
  func_0x000107c615f0(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar2);
  FUN_1018f7a34(param_7,auStack_c0);
  puVar6 = PTR_s_init_1125d9248;
  lStack_d0 = lVar8;
  lStack_c8 = lVar7;
  func_0x000107c6157c(uVar5);
  plVar9 = &lStack_d0;
  func_0x000107c61154(plVar9,puVar6);
  uVar11 = 0;
  lVar8 = 0;
  if (param_7[1] != 1) {
    uVar11 = *param_7;
    lVar8 = param_7[1];
  }
  puVar1 = (undefined8 *)((long)plVar9 + _DAT_112dd1d78);
  uVar10 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar10);
  puVar1 = (undefined8 *)((long)plVar9 + _DAT_112dd1d88);
  uVar10 = puVar1[1];
  *puVar1 = uVar11;
  puVar1[1] = lVar8;
  func_0x000107c61434(param_2);
  func_0x000107c61434(lVar8);
  func_0x000107c6142c(uVar10);
  puVar1 = (undefined8 *)((long)plVar9 + _DAT_112dd1d90);
  uVar11 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61434();
  func_0x000107c6142c(uVar11);
  uVar11 = *(undefined8 *)((long)plVar9 + _DAT_112dd1d98);
  *(undefined8 *)((long)plVar9 + _DAT_112dd1d98) = param_5;
  func_0x000107c61174();
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)((long)plVar9 + _DAT_112dd1da0);
  *(undefined8 *)((long)plVar9 + _DAT_112dd1da0) = param_6;
  func_0x000107c61174();
  func_0x000107c61170(uVar11);
  return plVar9;
}



/* Entry: 1018f7994; end: 1018f79df;  */

void FUN_1018f7994(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018f79e0; end: 1018f7a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1018f79e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [96];
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar7 = 0;
  FUN_1018f8bf8();
  lVar8 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112dd1d78);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar8 + _DAT_112dd1d80) = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112dd1d88);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112dd1d90);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar8 + _DAT_112dd1d98) = 0;
  *(undefined8 *)(lVar8 + _DAT_112dd1da0) = 0;
  *(undefined8 *)(lVar8 + _DAT_112dd1d40) = uVar11;
  *(undefined8 *)(lVar8 + _DAT_112dd1d48) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112dd1d50) = uVar10;
  *(undefined8 *)(lVar8 + _DAT_112dd1d58) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112dd1d60) = uVar2;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112dd1d68);
  uVar14 = *param_7;
  uVar13 = param_7[3];
  uVar12 = param_7[2];
  puVar1[1] = param_7[1];
  *puVar1 = uVar14;
  puVar1[3] = uVar13;
  puVar1[2] = uVar12;
  uVar13 = param_7[5];
  uVar12 = param_7[4];
  uVar15 = param_7[7];
  uVar14 = param_7[6];
  uVar17 = param_7[9];
  uVar16 = param_7[8];
  puVar1[10] = param_7[10];
  puVar1[7] = uVar15;
  puVar1[6] = uVar14;
  puVar1[9] = uVar17;
  puVar1[8] = uVar16;
  puVar1[5] = uVar13;
  puVar1[4] = uVar12;
  *(undefined8 *)(lVar8 + _DAT_112dd1d70) = uVar5;
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar3);
  func_0x000107c615f0(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar2);
  FUN_1018f7a34(param_7,auStack_c0);
  puVar6 = PTR_s_init_1125d9248;
  lStack_d0 = lVar8;
  lStack_c8 = lVar7;
  func_0x000107c6157c(uVar5);
  plVar9 = &lStack_d0;
  func_0x000107c61154(plVar9,puVar6);
  uVar11 = 0;
  lVar8 = 0;
  if (param_7[1] != 1) {
    uVar11 = *param_7;
    lVar8 = param_7[1];
  }
  puVar1 = (undefined8 *)((long)plVar9 + _DAT_112dd1d78);
  uVar10 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar10);
  puVar1 = (undefined8 *)((long)plVar9 + _DAT_112dd1d88);
  uVar10 = puVar1[1];
  *puVar1 = uVar11;
  puVar1[1] = lVar8;
  func_0x000107c61434(param_2);
  func_0x000107c61434(lVar8);
  func_0x000107c6142c(uVar10);
  puVar1 = (undefined8 *)((long)plVar9 + _DAT_112dd1d90);
  uVar11 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61434();
  func_0x000107c6142c(uVar11);
  uVar11 = *(undefined8 *)((long)plVar9 + _DAT_112dd1d98);
  *(undefined8 *)((long)plVar9 + _DAT_112dd1d98) = param_5;
  func_0x000107c61174();
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)((long)plVar9 + _DAT_112dd1da0);
  *(undefined8 *)((long)plVar9 + _DAT_112dd1da0) = param_6;
  func_0x000107c61174();
  func_0x000107c61170(uVar11);
  return plVar9;
}



/* Entry: 1018f7a34; end: 1018f7a83;  */

undefined8 FUN_1018f7a34(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dd1d18;
  func_0x0001000285a8(0x112dd1d18,&UNK_10d992f70);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1018f7a84; end: 1018f7ad3;  */

void FUN_1018f7a84(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11040fe68;
  if (lRam0000000112dd1d20 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112dd1d20 = param_1;
  }
  return;
}



/* Entry: 1018f7ad4; end: 1018f7b17;  */

void FUN_1018f7ad4(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1018f7b18; end: 1018f7c13;  */

/* WARNING: Possible PIC construction at 0x0001018f7bd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f7bdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f7b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd1d78);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd1d88);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c6142c(uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd1d90);
  uVar2 = puVar1[1];
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61434(param_6);
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112dd1d98);
  *(undefined8 *)(unaff_x20 + _DAT_112dd1d98) = param_7;
  func_0x000107c61174(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1018f7c14; end: 1018f7c23; -[_TtC30WebBrowsingLoggingServicesImpl28WebBrowsingBrowserLoggerImpl trackCommon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f7c14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dd1d80));
  return;
}



/* Entry: 1018f7c24; end: 1018f7c57; -[_TtC30WebBrowsingLoggingServicesImpl28WebBrowsingBrowserLoggerImpl setTrackCommon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f7c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dd1d80);
  *(undefined8 *)(param_1 + _DAT_112dd1d80) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018f7c58; end: 1018f7cc3; -[_TtC30WebBrowsingLoggingServicesImpl28WebBrowsingBrowserLoggerImpl logAsmEventWithEvent:] */

/* WARNING: Possible PIC construction at 0x0001018f7cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f7cb0) */

void FUN_1018f7c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018f851c(param_3,2,&UNK_11040ff90,FUN_1018f8ca8,&UNK_11040ffa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018f7cc4; end: 1018f8313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f7cc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112dd1d58);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dd1da0);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dd1d90);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112dd1d90))[1];
  lVar11 = unaff_x20 + _DAT_112dd1d68;
  if (*(long *)(lVar11 + 8) == 1) {
    uVar7 = 0;
    uVar10 = 0;
    uStack_a0 = 0;
    uVar9 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar11 + 0x10);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uStack_a0 = *(undefined8 *)(lVar11 + 0x20);
    uVar9 = *(undefined8 *)(lVar11 + 0x28);
    func_0x000107c61434(uVar9);
    func_0x000107c61434(uVar7);
  }
  func_0x000107c61434(uVar2);
  uVar3 = uVar8;
  func_0x000107c61174();
  lVar11 = param_1;
  func_0x000107c3ec98();
  func_0x000107c61180();
  if (lVar11 == 0) {
    lVar11 = ((undefined8 *)(unaff_x20 + _DAT_112dd1d78))[1];
    if (lVar11 != 0) {
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112dd1d78);
      func_0x000107c61434(lVar11);
      func_0x000107c5fadc(uVar12,lVar11);
      func_0x000107c6142c(lVar11);
    }
    func_0x000107c52e58(param_1);
  }
  func_0x000107c61170();
  lVar11 = param_1;
  func_0x000107c5b028();
  func_0x000107c61180();
  if (lVar11 == 0) {
    lVar11 = ((undefined8 *)(unaff_x20 + _DAT_112dd1d88))[1];
    if (lVar11 != 0) {
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112dd1d88);
      func_0x000107c61434(lVar11);
      func_0x000107c5fadc(uVar12,lVar11);
      func_0x000107c6142c(lVar11);
    }
    func_0x000107c592c4(param_1);
  }
  func_0x000107c61170();
  lVar11 = param_1;
  func_0x000107c4ab80();
  func_0x000107c61180();
  if (lVar11 == 0) {
    func_0x000107c55b04(param_1);
  }
  else {
    func_0x000107c61170();
  }
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 == 0) {
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(uVar9);
    func_0x000107c6142c(uVar7);
  }
  else {
    puVar4 = &UNK_11040ff40;
    func_0x000107c613fc(&UNK_11040ff40,0x58,7);
    *(long *)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = uVar8;
    *(undefined8 *)(puVar4 + 0x20) = uVar1;
    *(undefined8 *)(puVar4 + 0x28) = uVar2;
    *(undefined8 *)(puVar4 + 0x30) = uVar10;
    *(undefined8 *)(puVar4 + 0x38) = uVar7;
    *(undefined8 *)(puVar4 + 0x40) = uStack_a0;
    *(undefined8 *)(puVar4 + 0x48) = uVar9;
    *(undefined8 *)(puVar4 + 0x50) = uVar6;
    pcStack_78 = FUN_1018f8c40;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_11040ff58;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_70;
    func_0x000107c61174(uVar3);
    func_0x000107c61174(param_1);
    func_0x000107c61174(uVar6);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(lStack_68);
    func_0x000107c61170(uVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lStack_68);
  }
  return;
}



/* Entry: 1018f8314; end: 1018f8363; -[_TtC30WebBrowsingLoggingServicesImpl28WebBrowsingBrowserLoggerImpl logActionWithEvent:] */

/* WARNING: Possible PIC construction at 0x0001018f834c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f8350) */

void FUN_1018f8314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018f7cc4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018f8364; end: 1018f8477; -[_TtC30WebBrowsingLoggingServicesImpl28WebBrowsingBrowserLoggerImpl setCommonWithSessionId:siid:conversationId:launchSource:browserType:] */

/* WARNING: Possible PIC construction at 0x0001018f8448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f844c) */

void FUN_1018f8364(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec();
  uVar4 = param_2;
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = uVar4;
  }
  if (param_5 == 0) {
    param_5 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  uVar2 = param_6;
  func_0x000107c61174(param_6);
  uVar3 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_1);
  FUN_1018f7b18(param_3,param_2,param_4,uVar1,param_5,uVar4,param_6,param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1018f8478; end: 1018f84f3;  */

/* WARNING: Possible PIC construction at 0x0001018f84d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f84dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f8478(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd1d78);
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd1d88);
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dd1d90);
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112dd1d98);
  *(undefined8 *)(unaff_x20 + _DAT_112dd1d98) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1018f84f4; end: 1018f851b; -[_TtC30WebBrowsingLoggingServicesImpl28WebBrowsingBrowserLoggerImpl resetCommon] */

void FUN_1018f84f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1018f8478();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018f851c; end: 1018f86b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f851c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = _DAT_112dd1d80;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dd1d80);
  lVar5 = lVar2;
  if (lVar2 == 0) {
    FUN_1018f8720();
    lVar2 = 0;
    lVar5 = param_2;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dd1d48);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112dd1d50);
  func_0x000107c61174(lVar2);
  lVar2 = lVar5;
  FUN_1018fc30c(lVar5,uVar4,uVar6);
  func_0x000107c61170(lVar5);
  lVar5 = *(long *)(unaff_x20 + lVar1);
  if (lVar5 != 0) {
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c61170(lVar5);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dd1d60);
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 == 0) {
    func_0x000107c61170(lVar2);
  }
  else {
    func_0x000107c613fc(param_3,0x28,7);
    *(undefined8 *)(param_3 + 0x10) = param_1;
    *(long *)(param_3 + 0x18) = lVar2;
    *(undefined8 *)(param_3 + 0x20) = uVar4;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    ppuVar3 = &puStack_98;
    uStack_80 = param_5;
    uStack_78 = param_4;
    lStack_70 = param_3;
    func_0x000107c60bc4(ppuVar3);
    lVar1 = lStack_70;
    func_0x000107c61174(lVar2);
    func_0x000107c61174(param_1);
    func_0x000107c61174(uVar4);
    func_0x000107c61574(lVar1);
    func_0x000107c4e524(lStack_68);
    func_0x000107c61170(lVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lStack_68);
  }
  return;
}



/* Entry: 1018f86b4; end: 1018f871f; -[_TtC30WebBrowsingLoggingServicesImpl28WebBrowsingBrowserLoggerImpl logSpectrumAutofillEventWithEvent:] */

/* WARNING: Possible PIC construction at 0x0001018f8708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f870c) */

void FUN_1018f86b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018f851c(param_3,1,&UNK_11040fef0,FUN_1018f8c18,&UNK_11040ff08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018f8720; end: 1018f8a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1018f8720(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  char cStack_89;
  undefined8 uStack_88;
  long lStack_80;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112dd1d50));
  lVar1 = unaff_x20 + _DAT_112dd1d68;
  lVar8 = *(long *)(lVar1 + 0x38);
  if (*(long *)(lVar1 + 8) == 1 || lVar8 == 0) {
    uVar11 = 0;
    lVar8 = -0x2000000000000000;
  }
  else {
    uVar11 = *(undefined8 *)(lVar1 + 0x30);
    func_0x000107c61434(lVar8);
  }
  param_1 = param_1 * 1000.0;
  if (*(long *)(unaff_x20 + _DAT_112dd1d70) != 0) {
    func_0x0001000d224c(&uStack_88);
    uVar7 = uStack_88;
    func_0x000107c614f0(uStack_88);
    uStack_a0 = 0xd00000000000001f;
    uStack_98 = 0x800000010efb44e0;
    uStack_90 = 0;
    (**(code **)(lStack_80 + 8))
              (&cStack_89,&uStack_a0,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar7,lStack_80);
    func_0x000107c615e8(uStack_88);
    if (cStack_89 == '\x01') {
      FUN_1018fe824(0);
      func_0x000107c61434(lVar8);
      uStack_b0 = uVar11;
      lVar9 = lVar8;
      FUN_1018fe1ec(param_1,uVar11,lVar8,param_2);
      func_0x000107c6142c(lVar8);
      param_2 = lVar9;
      goto LAB_1018f88b0;
    }
  }
  uVar7 = uVar11;
  func_0x000107c5fadc(uVar11,lVar8);
  uVar4 = uVar7;
  func_0x000107bbeb74(param_1);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  uStack_b0 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
LAB_1018f88b0:
  lVar9 = ((undefined8 *)(unaff_x20 + _DAT_112dd1d88))[1];
  if (lVar9 == 0) {
    uStack_b8 = 0;
    lVar12 = -0x2000000000000000;
  }
  else {
    uStack_b8 = *(undefined8 *)(unaff_x20 + _DAT_112dd1d88);
    lVar12 = lVar9;
  }
  if (*(long *)(lVar1 + 8) == 1) {
    uStack_c8 = 0;
    lVar13 = 0;
  }
  else {
    uStack_c8 = *(undefined8 *)(lVar1 + 0x10);
    lVar13 = *(long *)(lVar1 + 0x18);
    func_0x000107c61434(lVar13);
  }
  func_0x0001002ed07c(0);
  func_0x000107c61434(lVar9);
  uVar5 = 0;
  func_0x000107c60110();
  lVar9 = *(long *)(lVar1 + 8);
  uVar7 = *(undefined8 *)(lVar1 + 0x40);
  uVar4 = *(undefined8 *)(lVar1 + 0x48);
  uVar10 = *(undefined8 *)(lVar1 + 0x50);
  func_0x000107c5fadc(uStack_b0,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(uVar11,lVar8);
  func_0x000107c6142c(lVar8);
  func_0x000107c5fadc(uStack_b8,lVar12);
  func_0x000107c6142c(lVar12);
  if (lVar13 == 0) {
    uStack_c8 = 0;
  }
  else {
    func_0x000107c5fadc(uStack_c8,lVar13);
    func_0x000107c6142c(lVar13);
  }
  bVar3 = lVar9 != 1;
  uVar2 = 10;
  if (bVar3) {
    uVar2 = uVar10;
  }
  uVar10 = 0x17;
  if (bVar3) {
    uVar10 = uVar4;
  }
  uVar4 = 0;
  if (bVar3) {
    uVar4 = uVar7;
  }
  puVar6 = PTR_PTR_1126b9150;
  func_0x000107c610f8(PTR_PTR_1126b9150);
  uVar7 = 0x736461;
  func_0x000107c5fadc(0x736461,0xe300000000000000);
  func_0x000107c30ad4(param_1,puVar6,uStack_b0,uVar11,uStack_b8,uStack_c8,0,0,0,0,uVar5,uVar4,uVar10
                      ,3,3,uVar2,uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uStack_b0);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uStack_b8);
  func_0x000107c61170(uStack_c8);
  func_0x000107c61170(uVar7);
  return puVar6;
}



/* Entry: 1018f8a7c; end: 1018f8adb; -[_TtC30WebBrowsingLoggingServicesImpl28WebBrowsingBrowserLoggerImpl init] */

void FUN_1018f8a7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowsingLoggingServicesImpl.WebBrowsingBrowserLoggerImpl",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018f8aa8);
  (*pcVar1)();
}



/* Entry: 1018f8adc; end: 1018f8bf7; -[_TtC30WebBrowsingLoggingServicesImpl28WebBrowsingBrowserLoggerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001018f8b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018f8ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018f8bd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f8ba4) */
/* WARNING: Removing unreachable block (ram,0x0001018f8b30) */
/* WARNING: Removing unreachable block (ram,0x0001018f8bdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f8adc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd1d40));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd1d48));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dd1d50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dd1d58));
  return;
}



/* Entry: 1018f8bf8; end: 1018f8c17;  */

void FUN_1018f8bf8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ec128);
  return;
}



/* Entry: 1018f8c18; end: 1018f8c3f;  */

/* WARNING: Possible PIC construction at 0x0001018fd5e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd71c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd8a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd8c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd8d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd97c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd98c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fda34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fda04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fda14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd94c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd95c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018fd950) */
/* WARNING: Removing unreachable block (ram,0x0001018fd9b8) */
/* WARNING: Removing unreachable block (ram,0x0001018fd9a8) */
/* WARNING: Removing unreachable block (ram,0x0001018fda18) */
/* WARNING: Removing unreachable block (ram,0x0001018fda08) */
/* WARNING: Removing unreachable block (ram,0x0001018fda38) */
/* WARNING: Removing unreachable block (ram,0x0001018fd990) */
/* WARNING: Removing unreachable block (ram,0x0001018fda24) */
/* WARNING: Removing unreachable block (ram,0x0001018fd980) */
/* WARNING: Removing unreachable block (ram,0x0001018fd8d4) */
/* WARNING: Removing unreachable block (ram,0x0001018fd970) */
/* WARNING: Removing unreachable block (ram,0x0001018fd8c4) */
/* WARNING: Removing unreachable block (ram,0x0001018fd8a8) */
/* WARNING: Removing unreachable block (ram,0x0001018fd81c) */
/* WARNING: Removing unreachable block (ram,0x0001018fd9e8) */
/* WARNING: Removing unreachable block (ram,0x0001018fd9f0) */
/* WARNING: Removing unreachable block (ram,0x0001018fd824) */
/* WARNING: Removing unreachable block (ram,0x0001018fda00) */
/* WARNING: Removing unreachable block (ram,0x0001018fd830) */
/* WARNING: Removing unreachable block (ram,0x0001018fda64) */
/* WARNING: Removing unreachable block (ram,0x0001018fd840) */
/* WARNING: Removing unreachable block (ram,0x0001018fd8dc) */
/* WARNING: Removing unreachable block (ram,0x0001018fd900) */
/* WARNING: Removing unreachable block (ram,0x0001018fd8e0) */
/* WARNING: Removing unreachable block (ram,0x0001018fd90c) */
/* WARNING: Removing unreachable block (ram,0x0001018fd84c) */
/* WARNING: Removing unreachable block (ram,0x0001018fd878) */
/* WARNING: Removing unreachable block (ram,0x0001018fd88c) */
/* WARNING: Removing unreachable block (ram,0x0001018fd930) */
/* WARNING: Removing unreachable block (ram,0x0001018fd890) */
/* WARNING: Removing unreachable block (ram,0x0001018fd720) */
/* WARNING: Removing unreachable block (ram,0x0001018fd70c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001018fd644) */
/* WARNING: Removing unreachable block (ram,0x0001018fd5e4) */
/* WARNING: Removing unreachable block (ram,0x0001018fd6ac) */
/* WARNING: Removing unreachable block (ram,0x0001018fd6b4) */
/* WARNING: Removing unreachable block (ram,0x0001018fd5ec) */
/* WARNING: Removing unreachable block (ram,0x0001018fd6c4) */
/* WARNING: Removing unreachable block (ram,0x0001018fd734) */
/* WARNING: Removing unreachable block (ram,0x0001018fd948) */
/* WARNING: Removing unreachable block (ram,0x0001018fd79c) */
/* WARNING: Removing unreachable block (ram,0x0001018fd7b8) */
/* WARNING: Removing unreachable block (ram,0x0001018fd7c4) */
/* WARNING: Removing unreachable block (ram,0x0001018fd998) */
/* WARNING: Removing unreachable block (ram,0x0001018fd7d8) */
/* WARNING: Removing unreachable block (ram,0x0001018fd6f0) */
/* WARNING: Removing unreachable block (ram,0x0001018fd5f8) */
/* WARNING: Removing unreachable block (ram,0x0001018fd9e4) */
/* WARNING: Removing unreachable block (ram,0x0001018fd600) */
/* WARNING: Removing unreachable block (ram,0x0001018fd64c) */
/* WARNING: Removing unreachable block (ram,0x0001018fd668) */
/* WARNING: Removing unreachable block (ram,0x0001018fd650) */
/* WARNING: Removing unreachable block (ram,0x0001018fd674) */
/* WARNING: Removing unreachable block (ram,0x0001018fd620) */
/* WARNING: Removing unreachable block (ram,0x0001018fd62c) */
/* WARNING: Removing unreachable block (ram,0x0001018fd684) */
/* WARNING: Removing unreachable block (ram,0x0001018fd630) */
/* WARNING: Removing unreachable block (ram,0x0001018fd960) */
/* WARNING: Removing unreachable block (ram,0x0001018fd9c4) */

void FUN_1018f8c18(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  FUN_1018fc7ac();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126e14b0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c42af0(uVar3);
    FUN_1018fa080();
    func_0x000107c54700(puVar2);
    func_0x000107c516b4();
    func_0x000107c58bd4(puVar2);
    func_0x000107c610f8(PTR_PTR_1126ae740);
    func_0x000107c453e4();
    func_0x000107c43858(uVar3);
    func_0x000107c61180();
    FUN_1018fdda8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c5fc54(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1018f8c40; end: 1018f8ca7;  */

void FUN_1018f8c40(void)

{
  long unaff_x20;
  
  func_0x0001018f7fe8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1018f8ca8; end: 1018f8cb3;  */

/* WARNING: Possible PIC construction at 0x0001018fcac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fce64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fce88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fcf88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fcf9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fd078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fcea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fceb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fccf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fcef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018fcf54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018fcef8) */
/* WARNING: Removing unreachable block (ram,0x0001018fcf60) */
/* WARNING: Removing unreachable block (ram,0x0001018fcf50) */
/* WARNING: Removing unreachable block (ram,0x0001018fccf8) */
/* WARNING: Removing unreachable block (ram,0x0001018fcd10) */
/* WARNING: Removing unreachable block (ram,0x0001018fceb4) */
/* WARNING: Removing unreachable block (ram,0x0001018fcea4) */
/* WARNING: Removing unreachable block (ram,0x0001018fd034) */
/* WARNING: Removing unreachable block (ram,0x0001018fcfa0) */
/* WARNING: Removing unreachable block (ram,0x0001018fd038) */
/* WARNING: Removing unreachable block (ram,0x0001018fcfd0) */
/* WARNING: Removing unreachable block (ram,0x0001018fd050) */
/* WARNING: Removing unreachable block (ram,0x0001018fd06c) */
/* WARNING: Removing unreachable block (ram,0x0001018fcfec) */
/* WARNING: Removing unreachable block (ram,0x0001018fcf8c) */
/* WARNING: Removing unreachable block (ram,0x0001018fce8c) */
/* WARNING: Removing unreachable block (ram,0x0001018fcf68) */
/* WARNING: Removing unreachable block (ram,0x0001018fce68) */
/* WARNING: Removing unreachable block (ram,0x0001018fce90) */
/* WARNING: Removing unreachable block (ram,0x0001018fce74) */
/* WARNING: Removing unreachable block (ram,0x0001018fcac4) */
/* WARNING: Removing unreachable block (ram,0x0001018fcf58) */
/* WARNING: Removing unreachable block (ram,0x0001018fd078) */

undefined * FUN_1018f8ca8(undefined *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x22;
  long *plVar10;
  undefined8 unaff_x25;
  long lVar11;
  undefined8 unaff_x27;
  long lVar12;
  long alStack_120 [12];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 auStack_98 [4];
  long lStack_78;
  
  puVar7 = *(undefined **)(unaff_x20 + 0x10);
  puVar1 = *(undefined **)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  puVar6 = puVar1;
  func_0x000107c5fb10();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar1;
  FUN_1018fc7ac();
  if (puVar4 == (undefined *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return (undefined *)0x0;
    }
    func_0x000107c60e78();
    *(long *)((long)alStack_120 + lVar11) = lVar12;
    *(undefined8 *)((long)alStack_120 + lVar11 + 8) = unaff_x27;
    *(undefined1 **)((long)alStack_120 + lVar11 + 0x10) = auStack_c0 + lVar11;
    *(undefined8 *)((long)alStack_120 + lVar11 + 0x18) = unaff_x25;
    *(undefined **)((long)alStack_120 + lVar11 + 0x20) = puVar1;
    *(long *)((long)alStack_120 + lVar11 + 0x28) = lVar3;
    *(undefined8 *)((long)alStack_120 + lVar11 + 0x30) = unaff_x22;
    *(undefined8 *)((long)alStack_120 + lVar11 + 0x38) = uVar9;
    *(undefined **)((long)alStack_120 + lVar11 + 0x40) = puVar7;
    *(undefined8 *)((long)alStack_120 + lVar11 + 0x48) = unaff_x19;
    *(undefined1 **)((long)alStack_120 + lVar11 + 0x50) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_120 + lVar11 + 0x58) = FUN_1018fd0bc;
    puVar7 = PTR_PTR_1126ae740;
    func_0x000107c610f8(PTR_PTR_1126ae740);
    func_0x000107c453e4();
    lVar11 = *(long *)(puVar4 + 0x10);
    if (lVar11 != 0) {
      plVar10 = (long *)(puVar4 + 0x28);
      do {
        lVar3 = plVar10[-1];
        lVar12 = *plVar10;
        if (((((lVar3 != 0x6c69616d65 || lVar12 != -0x1b00000000000000) &&
              (uVar8 = 0x6c69616d65,
              func_0x000107c605b8(0x6c69616d65,0xe500000000000000,lVar3,lVar12,0), (uVar8 & 1) == 0)
              ) && (lVar3 != 0x6d614e7473726966 || lVar12 != -0x16ffffffffffff9b)) &&
            (uVar8 = 0, func_0x000107c605b8(0x6d614e7473726966,0xe900000000000065,lVar3,lVar12,0),
            (uVar8 & 1) == 0)) &&
           (((lVar3 != 0x656d614e7473616c || (lVar12 != -0x1800000000000000)) &&
            ((uVar8 = 0, func_0x000107c605b8(0x656d614e7473616c,0xe800000000000000,lVar3,lVar12,0),
             (uVar8 & 1) == 0 && ((lVar3 != 0x73736572646461 || (lVar12 != -0x1900000000000000))))))
           )) {
          uVar8 = 0x73736572646461;
          func_0x000107c605b8(0x73736572646461,0xe700000000000000,lVar3,lVar12,0);
          if (((uVar8 & 1) == 0) && ((lVar3 != 0x79746963 || (lVar12 != -0x1c00000000000000)))) {
            uVar8 = 0x79746963;
            func_0x000107c605b8(0x79746963,0xe400000000000000,lVar3,lVar12,0);
            if (((uVar8 & 1) == 0) && ((lVar3 != 0x6c6174736f70 || (lVar12 != -0x1a00000000000000)))
               ) {
              uVar8 = 0;
              func_0x000107c605b8(0x6c6174736f70,0xe600000000000000,lVar3,lVar12,0);
              if (((uVar8 & 1) == 0) &&
                 ((lVar3 != 0x6d754e656e6f6870 || (lVar12 != -0x14ffffffff8d9a9e)))) {
                uVar8 = 0;
                func_0x000107c605b8(0x6d754e656e6f6870,0xeb00000000726562,lVar3,lVar12,0);
                if (((uVar8 & 1) == 0) &&
                   ((lVar3 != 0x6574617473 || (lVar12 != -0x1b00000000000000)))) {
                  uVar8 = 0x6574617473;
                  func_0x000107c605b8(0x6574617473,0xe500000000000000,lVar3,lVar12,0);
                  if (((uVar8 & 1) == 0) &&
                     ((lVar3 != 0x626d754e64726163 || (lVar12 != -0x15ffffffffff8d9b)))) {
                    uVar8 = 0x626d754e64726163;
                    func_0x000107c605b8(0x626d754e64726163,0xea00000000007265,lVar3,lVar12,0);
                    if (((uVar8 & 1) == 0) &&
                       ((lVar3 != 0x61436e4f656d616e || (lVar12 != -0x15ffffffffff9b8e)))) {
                      uVar8 = 0;
                      func_0x000107c605b8(0x61436e4f656d616e,0xea00000000006472,lVar3,lVar12,0);
                      if (((uVar8 & 1) == 0) &&
                         ((lVar3 != 0x6974617269707865 || (lVar12 != -0x11ff9a8b9ebb9191)))) {
                        uVar8 = 0x6974617269707865;
                        func_0x000107c605b8(0x6974617269707865,0xee00657461446e6f,lVar3,lVar12,0);
                        if (((uVar8 & 1) == 0) &&
                           ((lVar3 != 0x767663 || (lVar12 != -0x1d00000000000000)))) {
                          func_0x000107c605b8(0x767663,0xe300000000000000,lVar3,lVar12,0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        plVar10 = plVar10 + 2;
        func_0x000107c3d93c(puVar7);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    return puVar7;
  }
  puVar5 = puVar7;
  func_0x000107c5cc48();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar6);
  }
  func_0x000107c30b10(puVar1);
  puVar6 = puVar7;
  func_0x000107c42af0();
  puVar1 = PTR___sSSN_11034da80;
  iVar2 = (int)puVar6;
  if (iVar2 < 2) {
    if ((iVar2 == 0) || (iVar2 != 1)) goto code_r0x000107c61170;
    puStack_b8 = (undefined *)0x6469645f77656976;
    uStack_b0 = 0xef7261657070615f;
    puStack_a0 = PTR___sSSN_11034da80;
    func_0x000100102924(&puStack_b8,auStack_98);
    puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c61558(PTR___swiftEmptyDictionarySingleton_11034f1d0);
    puStack_b8 = puVar7;
    func_0x0001001029e8(auStack_98,0x745f6c616e676973,0xeb00000000657079,puVar4);
    puVar7 = puStack_b8;
    puStack_a0 = PTR___sSdN_11034dd90;
    puStack_b8 = param_1;
    func_0x000100102924(&puStack_b8,auStack_98);
    puVar4 = puVar7;
    func_0x000107c61558(puVar7);
    puStack_b8 = puVar7;
    func_0x0001001029e8(auStack_98,0xd000000000000012,0x800000010efc0470,puVar4);
    puVar4 = puStack_b8;
    puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    func_0x000107c5f9dc(puVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    auStack_98[0] = 0;
    func_0x000107c41300(puVar7);
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        func_0x000107c4e48c(puVar7);
        func_0x000107c61180();
        func_0x000107c5faec();
        puVar4 = puVar7;
      }
      else if (iVar2 == 4) {
        func_0x000107c5d7e8(puVar7);
        func_0x000107c61180();
        func_0x000107c5faec();
        puVar4 = puVar7;
      }
      goto code_r0x000107c61170;
    }
    puStack_b8 = (undefined *)0xd000000000000010;
    uStack_b0 = 0x800000010efc0490;
    puStack_a0 = PTR___sSSN_11034da80;
    func_0x000100102924(&puStack_b8,auStack_98);
    puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c61558(PTR___swiftEmptyDictionarySingleton_11034f1d0);
    puStack_b8 = puVar7;
    func_0x0001001029e8(auStack_98,0x745f6c616e676973,0xeb00000000657079,puVar4);
    puVar7 = puStack_b8;
    puStack_a0 = PTR___sSdN_11034dd90;
    puStack_b8 = param_1;
    func_0x000100102924(&puStack_b8,auStack_98);
    puVar4 = puVar7;
    func_0x000107c61558(puVar7);
    puStack_b8 = puVar7;
    func_0x0001001029e8(auStack_98,0xd000000000000012,0x800000010efc0470,puVar4);
    puVar4 = puStack_b8;
    puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    func_0x000107c5f9dc(puVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    auStack_98[0] = 0;
    func_0x000107c41300(puVar7);
  }
  func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return puVar4;
}



/* Entry: 1018f8cb4; end: 1018f8d07;  */

/* WARNING: Possible PIC construction at 0x0001018f8ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018f8cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f8ce4) */
/* WARNING: Removing unreachable block (ram,0x0001018f8cf4) */

void FUN_1018f8cb4(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1018f8d08; end: 1018f8d17;  */

void FUN_1018f8d08(long param_1,long param_2)

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



/* Entry: 1018f8d18; end: 1018f8d73; -[_TtC30WebBrowsingLoggingServicesImpl32WebBrowsingInstantPageLoggerImpl userAgent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f8d18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112dd1df8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112dd1df8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1018f8d74; end: 1018f8dbf; -[_TtC30WebBrowsingLoggingServicesImpl32WebBrowsingInstantPageLoggerImpl setUserAgent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f8d74(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112dd1df8);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 1018f8dc0; end: 1018f8dcf; -[_TtC30WebBrowsingLoggingServicesImpl32WebBrowsingInstantPageLoggerImpl trackCommon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f8dc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dd1e00));
  return;
}



/* Entry: 1018f8dd0; end: 1018f8e03; -[_TtC30WebBrowsingLoggingServicesImpl32WebBrowsingInstantPageLoggerImpl setTrackCommon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f8dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dd1e00);
  *(undefined8 *)(param_1 + _DAT_112dd1e00) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018f8e04; end: 1018f8e6b; -[_TtC30WebBrowsingLoggingServicesImpl32WebBrowsingInstantPageLoggerImpl logAsmEventWithEvent:] */

/* WARNING: Possible PIC construction at 0x0001018f8e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f8e58) */

void FUN_1018f8e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018f90c8(param_3,&UNK_1104100d0,FUN_1018f9438,&UNK_1104100e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018f8e6c; end: 1018f8ed3; -[_TtC30WebBrowsingLoggingServicesImpl32WebBrowsingInstantPageLoggerImpl logInstantPageEventWithEvent:] */

/* WARNING: Possible PIC construction at 0x0001018f8ebc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f8ec0) */

void FUN_1018f8e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018f90c8(param_3,&UNK_110410080,0x1018f93f8,&UNK_110410098);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018f8ed4; end: 1018f9077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f8ed4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar2 = _DAT_112dd1e00;
  lVar3 = *(long *)(unaff_x20 + _DAT_112dd1e00);
  if (lVar3 != 0) {
    func_0x000107c61174();
    lVar4 = lVar3;
    FUN_1018fc30c();
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long *)(unaff_x20 + lVar2) = lVar4;
    func_0x000107c61174();
    func_0x000107c61170(uVar7);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dd1df0);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112dd1df8);
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112dd1df8))[1];
    func_0x000107c61434(uVar1);
    func_0x0001000d224c(&lStack_58);
    if (lStack_58 == 0) {
      func_0x000107c6142c(uVar1);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar4);
    }
    else {
      puVar5 = &UNK_110410030;
      func_0x000107c613fc(&UNK_110410030,0x38,7);
      *(undefined8 *)(puVar5 + 0x10) = param_1;
      *(long *)(puVar5 + 0x18) = lVar4;
      *(undefined8 *)(puVar5 + 0x20) = uVar7;
      *(undefined8 *)(puVar5 + 0x28) = uVar1;
      *(undefined8 *)(puVar5 + 0x30) = uVar8;
      uStack_68 = 0x1018f93e8;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_110410048;
      ppuVar6 = &puStack_88;
      puStack_60 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar5 = puStack_60;
      func_0x000107c61174(lVar4);
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar8);
      func_0x000107c61574(puVar5);
      func_0x000107c4e524(lStack_58);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(lStack_58);
    }
  }
  return;
}



/* Entry: 1018f9078; end: 1018f90c7; -[_TtC30WebBrowsingLoggingServicesImpl32WebBrowsingInstantPageLoggerImpl logCheckoutEventWithEvent:] */

/* WARNING: Possible PIC construction at 0x0001018f90b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f90b4) */

void FUN_1018f9078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018f8ed4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018f90c8; end: 1018f924b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f90c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = _DAT_112dd1e00;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dd1e00);
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar3 = lVar2;
    FUN_1018fc30c();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dd1df0);
    func_0x0001000d224c(&lStack_68);
    if (lStack_68 == 0) {
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
    }
    else {
      func_0x000107c613fc(param_2,0x28,7);
      *(undefined8 *)(param_2 + 0x10) = param_1;
      *(long *)(param_2 + 0x18) = lVar3;
      *(undefined8 *)(param_2 + 0x20) = uVar5;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f6b44;
      ppuVar4 = &puStack_98;
      uStack_80 = param_4;
      uStack_78 = param_3;
      lStack_70 = param_2;
      func_0x000107c60bc4(ppuVar4);
      lVar1 = lStack_70;
      func_0x000107c61174(lVar3);
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar5);
      func_0x000107c61574(lVar1);
      func_0x000107c4e524(lStack_68);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lStack_68);
    }
  }
  return;
}



/* Entry: 1018f924c; end: 1018f92b3; -[_TtC30WebBrowsingLoggingServicesImpl32WebBrowsingInstantPageLoggerImpl logSpectrumAutofillEventWithEvent:] */

/* WARNING: Possible PIC construction at 0x0001018f929c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018f92a0) */

void FUN_1018f924c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018f90c8(param_3,&UNK_11040ffe0,FUN_1018f93c0,&UNK_11040fff8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018f92b4; end: 1018f9313; -[_TtC30WebBrowsingLoggingServicesImpl32WebBrowsingInstantPageLoggerImpl init] */

void FUN_1018f92b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowsingLoggingServicesImpl.WebBrowsingInstantPageLoggerImpl",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018f92e0);
  (*pcVar1)();
}


