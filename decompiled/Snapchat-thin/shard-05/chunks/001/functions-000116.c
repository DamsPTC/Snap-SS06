/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b7c2f4; end: 103b7c303; -[_TtC27SCOperaLoadingIndicatorView25OperaLoadingIndicatorView isAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c2f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ff0660),PTR_s_isAnimating_1125f8a48);
  return;
}



/* Entry: 103b7c304; end: 103b7c323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c304(void)

{
  long unaff_x20;
  
  func_0x000107c49a20(*(undefined8 *)(unaff_x20 + _DAT_112ff0660));
  return;
}



/* Entry: 103b7c324; end: 103b7c333; -[_TtC27SCOperaLoadingIndicatorView25OperaLoadingIndicatorView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ff0660),PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 103b7c334; end: 103b7c363;  */

void FUN_103b7c334(void)

{
  FUN_103b7c01c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b7c364; end: 103b7c373; -[_TtC27SCOperaLoadingIndicatorView25OperaLoadingIndicatorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff0660));
  return;
}



/* Entry: 103b7c374; end: 103b7c37b; -[_TtC27SCOperaLoadingIndicatorView25OperaLoadingIndicatorView initWithColor:size:] */

void FUN_103b7c374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103b7c128();
  return;
}



/* Entry: 103b7c37c; end: 103b7c467;  */

uint FUN_103b7c37c(uint *param_1,int param_2)

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



/* Entry: 103b7c468; end: 103b7c46f;  */

undefined8 FUN_103b7c468(void)

{
  return 1;
}



/* Entry: 103b7c470; end: 103b7c4af;  */

void FUN_103b7c470(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ff0690;
  func_0x0001000285a8(0x112ff0690,&UNK_10dc5ab90);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103b7c4b0; end: 103b7c4b7;  */

undefined8 FUN_103b7c4b0(void)

{
  return 1;
}



/* Entry: 103b7c4b8; end: 103b7c533;  */

void FUN_103b7c4b8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b7c534; end: 103b7c537;  */

void FUN_103b7c534(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff06a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5aba0;
  func_0x000107c61520(&UNK_10dc5aba0,&UNK_1106dac20);
  puRam0000000112ff06a0 = puVar1;
  return;
}



/* Entry: 103b7c538; end: 103b7c5a3;  */

void FUN_103b7c538(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff06a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5aba0;
  func_0x000107c61520(&UNK_10dc5aba0,&UNK_1106dac20);
  puRam0000000112ff06a0 = puVar1;
  return;
}



/* Entry: 103b7c5a4; end: 103b7c5a7;  */

void FUN_103b7c5a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff06b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5ac48;
  func_0x000107c61520(&UNK_10dc5ac48,&UNK_1106dab80);
  puRam0000000112ff06b8 = puVar1;
  return;
}



/* Entry: 103b7c5a8; end: 103b7c613;  */

void FUN_103b7c5a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff06b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5ac48;
  func_0x000107c61520(&UNK_10dc5ac48,&UNK_1106dab80);
  puRam0000000112ff06b8 = puVar1;
  return;
}



/* Entry: 103b7c614; end: 103b7c697;  */

void FUN_103b7c614(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103b7c698; end: 103b7c69b;  */

void FUN_103b7c698(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff06d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5acb8;
  func_0x000107c61520(&UNK_10dc5acb8,&UNK_1106dab80);
  puRam0000000112ff06d0 = puVar1;
  return;
}



/* Entry: 103b7c69c; end: 103b7c6db;  */

void FUN_103b7c69c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff06d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5acb8;
  func_0x000107c61520(&UNK_10dc5acb8,&UNK_1106dab80);
  puRam0000000112ff06d0 = puVar1;
  return;
}



/* Entry: 103b7c6dc; end: 103b7c6df;  */

void FUN_103b7c6dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff06d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5ac70;
  func_0x000107c61520(&UNK_10dc5ac70,&UNK_1106dab80);
  puRam0000000112ff06d8 = puVar1;
  return;
}



/* Entry: 103b7c6e0; end: 103b7c71f;  */

void FUN_103b7c6e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff06d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5ac70;
  func_0x000107c61520(&UNK_10dc5ac70,&UNK_1106dab80);
  puRam0000000112ff06d8 = puVar1;
  return;
}



/* Entry: 103b7c720; end: 103b7c813;  */

uint FUN_103b7c720(uint *param_1,int param_2)

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



/* Entry: 103b7c814; end: 103b7c85f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c814(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff0770) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b7c860; end: 103b7c8bf; -[_TtC29SCSnapDocPageResolverServices46SCDefaultSnapDocPageResolverPluginSaberService init] */

void FUN_103b7c860(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapDocPageResolverServices.SCDefaultSnapDocPageResolverPluginSaberService"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7c88c);
  (*pcVar1)();
}



/* Entry: 103b7c8c0; end: 103b7c8df; -[_TtC29SCSnapDocPageResolverServices46SCDefaultSnapDocPageResolverPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c8c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff0770));
  return;
}



/* Entry: 103b7c8e0; end: 103b7c92b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c8e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff07b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b7c92c; end: 103b7c98b; -[SCDefaultSnapDocPageResolverScope init] */

void FUN_103b7c92c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapDocPageResolverServices.SCDefaultSnapDocPageResolverScope",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7c958);
  (*pcVar1)();
}



/* Entry: 103b7c98c; end: 103b7c99b; -[SCDefaultSnapDocPageResolverScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c98c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff07b0));
  return;
}



/* Entry: 103b7c99c; end: 103b7c9ab; -[_TtC29SCSnapDocPageResolverServices34SCSnapDocOperaPageResolverServices snapDocOperaPageResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c99c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff07e0));
  return;
}



/* Entry: 103b7c9ac; end: 103b7c9f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c9ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff07e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b7c9f8; end: 103b7ca57; -[_TtC29SCSnapDocPageResolverServices34SCSnapDocOperaPageResolverServices init] */

void FUN_103b7c9f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapDocPageResolverServices.SCSnapDocOperaPageResolverServices",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7ca24);
  (*pcVar1)();
}



/* Entry: 103b7ca58; end: 103b7ca67; -[_TtC29SCSnapDocPageResolverServices34SCSnapDocOperaPageResolverServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7ca58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff07e0));
  return;
}



/* Entry: 103b7ca68; end: 103b7cb8f;  */

undefined * FUN_103b7ca68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = 0xe000000000000000;
  lVar1 = param_1;
  func_0x000107c42c98();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    uVar3 = param_2;
  }
  func_0x000107c5fb78(lVar4,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x7e,0xe100000000000000);
  func_0x000107c4c9b4();
  puVar2 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  uVar3 = 0;
  func_0x000107c4c950(param_1);
  puVar2 = PTR_PTR_1126b08b8;
  func_0x000107c610f8(PTR_PTR_1126b08b8);
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c4766c(puVar2);
  func_0x000107c61170(uVar3);
  return puVar2;
}



/* Entry: 103b7cb90; end: 103b7cf63;  */

undefined * FUN_103b7cb90(undefined1 *param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 **ppuVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  
  ppuVar11 = &puStack_70;
  puVar2 = param_1;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7cf58);
    (*pcVar1)();
  }
  puVar14 = puVar2;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar14 == (undefined1 *)0x0) {
    return (undefined *)0x0;
  }
  puStack_70 = (undefined1 *)0x0;
  uVar3 = 0;
  func_0x000101de16dc(0);
  func_0x000107c5fc50(puVar14,&puStack_70,uVar3);
  func_0x000107c61170(puVar14);
  puVar2 = puStack_70;
  if (puStack_70 == (undefined1 *)0x0) {
    return (undefined *)0x0;
  }
  puVar14 = (undefined1 *)((ulong)puStack_70 & 0xffffffffffffff8);
  if ((ulong)puStack_70 >> 0x3e == 0) {
    puVar12 = *(undefined1 **)(puVar14 + 0x10);
    if (puVar12 == (undefined1 *)0x1) {
LAB_103b7cc28:
      if (((ulong)puVar2 & 0xc000000000000001) == 0) {
        if (*(long *)(puVar14 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7cf54);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(puVar2 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = 0;
        ppuVar11 = (undefined1 **)puVar2;
        func_0x00010121c1ac();
      }
LAB_103b7cc44:
      func_0x000107c6142c(puVar2);
      func_0x000107c61174();
      uVar13 = uVar4;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar13 != 0) {
        uVar9 = uVar13;
        func_0x000107c4c99c();
        func_0x000107c61180();
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7cf5c);
          (*pcVar1)();
        }
        func_0x000107c4c9b4();
        func_0x000107c61170(uVar9);
        puVar2 = param_1;
        func_0x000107c44fd8();
        func_0x000107c61180();
        if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7cf60);
          (*pcVar1)();
        }
        puVar14 = puVar2;
        func_0x000107c44fd8();
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        if (puVar14 != (undefined1 *)0x0) {
          puVar2 = puVar14;
          func_0x000107c5faec();
          func_0x000107c61170(puVar14);
          uVar9 = (ulong)puVar2 & 0xffffffffffff;
          if (((ulong)ppuVar11 & 0x2000000000000000) != 0) {
            uVar9 = (ulong)ppuVar11 >> 0x38 & 0xf;
          }
          if (uVar9 != 0) {
            uVar3 = 0xe100000000000000;
            puStack_70 = puVar2;
            puStack_68 = (undefined1 *)ppuVar11;
            func_0x000107c5fb78(0x2d,0xe100000000000000);
            func_0x000107c4f56c();
            func_0x000107c61180();
            if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7cf64);
              (*pcVar1)();
            }
            puVar2 = param_1;
            func_0x000107c5b698();
            func_0x000107c61180();
            func_0x000107c61170(param_1);
            if (puVar2 == (undefined1 *)0x0) {
              puVar14 = (undefined1 *)0x0;
              uVar3 = 0xe000000000000000;
            }
            else {
              puVar14 = puVar2;
              func_0x000107c5faec(puVar2);
              func_0x000107c61170(puVar2);
            }
            func_0x000107c5fb78(puVar14,uVar3);
            func_0x000107c6142c(uVar3);
            puVar14 = puStack_68;
            puVar2 = puStack_70;
            puVar5 = PTR_PTR_1126b25b8;
            func_0x000107c610f8(PTR_PTR_1126b25b8);
            func_0x000107c5fadc(puVar2,puVar14);
            func_0x000107c6142c(puVar14);
            func_0x000107c46814(puVar5);
            func_0x000107c61170(puVar2);
            puVar6 = PTR_PTR_1126bcf20;
            func_0x000107c610f8(PTR_PTR_1126bcf20);
            func_0x000107c453e4();
            func_0x000107c56438();
            puVar7 = puVar5;
            FUN_103b7ca68(puVar5,puVar6);
            func_0x000107c61170(uVar13);
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar6);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar4);
            return puVar7;
          }
          func_0x000107c6142c(ppuVar11);
        }
        func_0x000107c61170(uVar13);
      }
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar4);
      return (undefined *)0x0;
    }
  }
  else {
    puVar12 = puStack_70;
    if (-1 < (long)puStack_70) {
      puVar12 = puVar14;
    }
    puVar8 = puVar12;
    func_0x000107c60480();
    func_0x000107c60480();
    if (puVar8 == (undefined1 *)0x1) {
      if (puVar12 != (undefined1 *)0x0) goto LAB_103b7cc28;
      goto LAB_103b7cf0c;
    }
  }
  if (puVar12 != (undefined1 *)0x0) {
    uVar13 = 0;
    do {
      if (((ulong)puVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar14 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7cf40);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(puVar2 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar13;
        ppuVar11 = (undefined1 **)puVar2;
        func_0x00010121c1ac();
      }
      puVar8 = (undefined1 *)(uVar13 + 1);
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7cf3c);
        (*pcVar1)();
      }
      uVar9 = uVar4;
      func_0x000107c4abb4();
      if ((int)uVar9 == 1) {
        uVar9 = uVar4;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (uVar9 != 0) {
          uVar10 = uVar9;
          func_0x000107c3e240();
          func_0x000107c61170(uVar9);
          if ((int)uVar10 == 5) goto LAB_103b7cc44;
        }
      }
      func_0x000107c61170(uVar4);
      uVar13 = uVar13 + 1;
    } while (puVar8 != puVar12);
  }
LAB_103b7cf0c:
  func_0x000107c6142c(puVar2);
  return (undefined *)0x0;
}



/* Entry: 103b7cf64; end: 103b7cfc3; +[_TtC12SnapDocUtils27SnapDocContentKeyObjcHelper contentKeyFor:mediaId:] */

void FUN_103b7cf64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  FUN_103b7ca68(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b7cfc4; end: 103b7cffb; +[_TtC12SnapDocUtils27SnapDocContentKeyObjcHelper baseMediaContentKeyFrom:] */

void FUN_103b7cfc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103b7cb90();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b7cffc; end: 103b7d037; -[_TtC12SnapDocUtils27SnapDocContentKeyObjcHelper init] */

void FUN_103b7cffc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000103b7d068();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b7d038; end: 103b7d087;  */

void FUN_103b7d038(void)

{
  func_0x000103b7d068();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b7d088; end: 103b7d093;  */

undefined * FUN_103b7d088(void)

{
  return &UNK_10dc5ae80;
}



/* Entry: 103b7d094; end: 103b7d0af; +[SCAdOperaKeys playlistItemType] */

void FUN_103b7d094(void)

{
  func_0x000107c5fadc(0x6441,0xe200000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b7d0b0; end: 103b7d0db; +[SCAdOperaKeys adSnapCreativeId] */

void FUN_103b7d0b0(void)

{
  func_0x000107c5fadc(0xd000000000000013,0x800000010f1a3640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b7d0dc; end: 103b7d10b; +[SCAdOperaKeys adSnapType] */

void FUN_103b7d0dc(void)

{
  func_0x000107c5fadc(0x5f70616e735f6461,0xec00000065707974);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b7d10c; end: 103b7d137; +[SCAdOperaKeys adSnapProductType] */

void FUN_103b7d10c(void)

{
  func_0x000107c5fadc(0xd000000000000014,0x800000010f1a3660);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b7d138; end: 103b7d163; +[SCAdOperaKeys adSnapPublisher] */

void FUN_103b7d138(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1a3680);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b7d164; end: 103b7d16f;  */

undefined * FUN_103b7d164(void)

{
  return &UNK_1106dad68;
}



/* Entry: 103b7d170; end: 103b7d19b; +[SCAdOperaKeys adSnapIsPayToPromote] */

void FUN_103b7d170(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1a36a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b7d19c; end: 103b7d1c7; +[SCAdOperaKeys adSnapId] */

void FUN_103b7d19c(void)

{
  func_0x000107c5fadc(0x5f70616e735f6461,0xea00000000006469);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b7d1c8; end: 103b7d1f3; +[SCAdOperaKeys adSnapServeItemId] */

void FUN_103b7d1c8(void)

{
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1a36c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b7d1f4; end: 103b7d21f; +[SCAdOperaKeys adSnapRequestClientId] */

void FUN_103b7d1f4(void)

{
  func_0x000107c5fadc(0xd000000000000014,0x800000010f1a36e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b7d220; end: 103b7d253; +[SCAdOperaKeys adSnapIndex] */

void FUN_103b7d220(void)

{
  func_0x000107c5fadc(0x5f70616e735f6461,0xed00007865646e69);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b7d254; end: 103b7d25b; +[SCAdOperaKeys topSnapMediaDurationSec] */

undefined8 FUN_103b7d254(void)

{
  return 5;
}



/* Entry: 103b7d25c; end: 103b7d297; -[SCAdOperaKeys init] */

void FUN_103b7d25c(undefined8 param_1)

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



/* Entry: 103b7d298; end: 103b7d2cb;  */

void FUN_103b7d298(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b7d2cc; end: 103b7d2cf; -[SCAdOperaKeys .cxx_destruct] */

void FUN_103b7d2cc(void)

{
  return;
}



/* Entry: 103b7d2d0; end: 103b7d2ef;  */

void FUN_103b7d2d0(void)

{
  func_0x000107c61168(&PTR_PTR_112934dc0);
  return;
}



/* Entry: 103b7d2f0; end: 103b7d2f3; +[SCAdOperaKeys playlistItemGroupType] */

void FUN_103b7d2f0(void)

{
  func_0x000107c5fadc(0x6441,0xe200000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b7d2f4; end: 103b7d3b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7d2f4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112ff0868;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112ff0870;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112ff0878;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff0880) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff0860) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 103b7d3b4; end: 103b7d3db; -[_TtC14WebBrowserTray35WebBrowserTrayContentViewController initWithCoder:] */

void FUN_103b7d3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103b7e168();
  return;
}



/* Entry: 103b7d3dc; end: 103b7d493; -[_TtC14WebBrowserTray35WebBrowserTrayContentViewController loadView] */

/* WARNING: Possible PIC construction at 0x000103b7d428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b7d470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7d42c) */
/* WARNING: Removing unreachable block (ram,0x000103b7d490) */
/* WARNING: Removing unreachable block (ram,0x000103b7d440) */
/* WARNING: Removing unreachable block (ram,0x000103b7d474) */

void FUN_103b7d3dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  func_0x000107c5a568(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103b7d494; end: 103b7dd87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7d494(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_viewDidLoad_112684cd8);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ff0868);
  func_0x000107c5a050(uVar10);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar3 = puVar2;
  func_0x000107c5c5e8();
  func_0x000107c61180();
  func_0x000107c52b50(uVar10);
  func_0x000107c61170(puVar3);
  uVar9 = uVar10;
  func_0x000107c4aba4(uVar10);
  func_0x000107c61180();
  func_0x000107c562f8();
  func_0x000107c61170(uVar9);
  uVar9 = uVar10;
  func_0x000107c4aba4(uVar10);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(uVar9);
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7dd60);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar4);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112ff0870);
  func_0x000107c5a050(uVar13);
  puVar3 = puVar2;
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(uVar13);
  func_0x000107c61170(puVar3);
  func_0x000107c3d89c(uVar10);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ff0878);
  func_0x000107c5a050(uVar14);
  func_0x000107c5c820(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(uVar14);
  func_0x000107c61170(puVar2);
  uVar9 = uVar14;
  func_0x000107c4aba4(uVar14);
  func_0x000107c61180();
  func_0x000107c539d4(0x4004000000000000);
  func_0x000107c61170(uVar9);
  func_0x000107c3d89c(uVar13);
  lVar11 = *(long *)(unaff_x20 + _DAT_112ff0860);
  func_0x000107c3d614();
  lVar4 = lVar11;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7dd64);
    (*pcVar1)();
  }
  func_0x000107c5a050();
  func_0x000107c61170(lVar4);
  lVar4 = lVar11;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7dd68);
    (*pcVar1)();
  }
  func_0x000107c3d89c(uVar10);
  func_0x000107c61170(lVar4);
  func_0x000107c41c30(lVar11);
  uVar9 = uVar13;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar5 = uVar9;
  func_0x000107c40290(0x4037000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  lVar12 = *(long *)(unaff_x20 + _DAT_112ff0880);
  *(undefined8 *)(unaff_x20 + _DAT_112ff0880) = uVar5;
  func_0x000107c61174();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar12 + 0x18) = 0x21;
  *(undefined8 *)(lVar12 + 0x10) = 0x10;
  uVar9 = uVar10;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7dd6c);
    (*pcVar1)();
  }
  lVar6 = lVar4;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar7 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar12 + 0x20) = uVar7;
  uVar9 = uVar10;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7dd70);
    (*pcVar1)();
  }
  lVar6 = lVar4;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar7 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar12 + 0x28) = uVar7;
  uVar9 = uVar10;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7dd74);
    (*pcVar1)();
  }
  lVar6 = lVar4;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar7 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar12 + 0x30) = uVar7;
  uVar9 = uVar10;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7dd78);
    (*pcVar1)();
  }
  lVar4 = unaff_x20;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  uVar7 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar12 + 0x38) = uVar7;
  uVar9 = uVar13;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar7 = uVar10;
  func_0x000107c5cbe4(uVar10);
  func_0x000107c61180();
  uVar8 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar12 + 0x40) = uVar8;
  uVar9 = uVar13;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar7 = uVar10;
  func_0x000107c4acb0(uVar10);
  func_0x000107c61180();
  uVar8 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar12 + 0x48) = uVar8;
  uVar9 = uVar13;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar7 = uVar10;
  func_0x000107c5ce8c(uVar10);
  func_0x000107c61180();
  uVar8 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar12 + 0x50) = uVar8;
  *(undefined8 *)(lVar12 + 0x58) = uVar5;
  func_0x000107c61174(uVar5);
  uVar9 = uVar14;
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar7 = uVar13;
  func_0x000107c3f75c(uVar13);
  func_0x000107c61180();
  uVar8 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar12 + 0x60) = uVar8;
  uVar9 = uVar14;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar7 = uVar13;
  func_0x000107c3ec1c(uVar13);
  func_0x000107c61180();
  uVar8 = uVar9;
  func_0x000107c40284(0xc022000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar12 + 0x68) = uVar8;
  uVar9 = uVar14;
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar7 = uVar9;
  func_0x000107c40290(0x4045000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  *(undefined8 *)(lVar12 + 0x70) = uVar7;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar9 = uVar14;
  func_0x000107c40290(0x4014000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  *(undefined8 *)(lVar12 + 0x78) = uVar9;
  lVar4 = lVar11;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar6 = lVar4;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c3ec1c(uVar13);
    func_0x000107c61180();
    lVar4 = lVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar13);
    *(long *)(lVar12 + 0x80) = lVar4;
    lVar4 = lVar11;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7dd80);
      (*pcVar1)();
    }
    lVar6 = lVar4;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar9 = uVar10;
    func_0x000107c4acb0(uVar10);
    func_0x000107c61180();
    lVar4 = lVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar9);
    *(long *)(lVar12 + 0x88) = lVar4;
    lVar4 = lVar11;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar6 = lVar4;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      uVar9 = uVar10;
      func_0x000107c5ce8c(uVar10);
      func_0x000107c61180();
      lVar4 = lVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar9);
      *(long *)(lVar12 + 0x90) = lVar4;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar11 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar4 = lVar11;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        func_0x000107c61170(lVar11);
        func_0x000107c3ec1c(uVar10);
        func_0x000107c61180();
        lVar11 = lVar4;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(uVar10);
        *(long *)(lVar12 + 0x98) = lVar11;
        uVar9 = 0;
        func_0x000100847984(0);
        lVar4 = lVar12;
        func_0x000107c5fc48(lVar12,uVar9);
        func_0x000107c61574(lVar12);
        func_0x000107c3d048(puVar2);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(lVar4);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7dd88);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7dd84);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7dd7c);
  (*pcVar1)();
}



/* Entry: 103b7dd88; end: 103b7ddaf; -[_TtC14WebBrowserTray35WebBrowserTrayContentViewController viewDidLoad] */

void FUN_103b7dd88(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b7d494();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b7ddb0; end: 103b7de7b; -[_TtC14WebBrowserTray35WebBrowserTrayContentViewController viewDidLayoutSubviews] */

void FUN_103b7ddb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_viewDidLayoutSubviews_112684cc8;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar2);
  puVar2 = PTR_PTR_1126b08d8;
  func_0x000107c61168(PTR_PTR_1126b08d8);
  uVar1 = param_1;
  func_0x000107c5de64(param_1);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x00010085b3c8(0x4020000000000000,0x3fe0000000000000,0,0xc008000000000000,puVar2,uVar1,puVar3
                     );
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b7de7c; end: 103b7e07f;  */

/* WARNING: Possible PIC construction at 0x000103b7dec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b7def0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b7df64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b7df94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b7dfa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b7dfd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b7dfec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b7e054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7dff0) */
/* WARNING: Removing unreachable block (ram,0x000103b7dfdc) */
/* WARNING: Removing unreachable block (ram,0x000103b7dfac) */
/* WARNING: Removing unreachable block (ram,0x000103b7e078) */
/* WARNING: Removing unreachable block (ram,0x000103b7dfc0) */
/* WARNING: Removing unreachable block (ram,0x000103b7df98) */
/* WARNING: Removing unreachable block (ram,0x000103b7df68) */
/* WARNING: Removing unreachable block (ram,0x000103b7e074) */
/* WARNING: Removing unreachable block (ram,0x000103b7df7c) */
/* WARNING: Removing unreachable block (ram,0x000103b7def4) */
/* WARNING: Removing unreachable block (ram,0x000103b7df04) */
/* WARNING: Removing unreachable block (ram,0x000103b7df0c) */
/* WARNING: Removing unreachable block (ram,0x000103b7df10) */
/* WARNING: Removing unreachable block (ram,0x000103b7df14) */
/* WARNING: Removing unreachable block (ram,0x000103b7df2c) */
/* WARNING: Removing unreachable block (ram,0x000103b7df30) */
/* WARNING: Removing unreachable block (ram,0x000103b7df34) */
/* WARNING: Removing unreachable block (ram,0x000103b7df38) */
/* WARNING: Removing unreachable block (ram,0x000103b7dec4) */
/* WARNING: Removing unreachable block (ram,0x000103b7dec8) */
/* WARNING: Removing unreachable block (ram,0x000103b7e07c) */
/* WARNING: Removing unreachable block (ram,0x000103b7dedc) */
/* WARNING: Removing unreachable block (ram,0x000103b7dee0) */
/* WARNING: Removing unreachable block (ram,0x000103b7e058) */

void FUN_103b7de7c(void)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c5e3f8();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7e074);
  (*pcVar1)();
}



/* Entry: 103b7e080; end: 103b7e0df; -[_TtC14WebBrowserTray35WebBrowserTrayContentViewController initWithNibName:bundle:] */

void FUN_103b7e080(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowserTray.WebBrowserTrayContentViewController",0x32,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7e0ac);
  (*pcVar1)();
}



/* Entry: 103b7e0e0; end: 103b7e147; -[_TtC14WebBrowserTray35WebBrowserTrayContentViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b7e0fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b7e11c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7e100) */
/* WARNING: Removing unreachable block (ram,0x000103b7e120) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7e0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff0860));
  return;
}



/* Entry: 103b7e148; end: 103b7e167;  */

void FUN_103b7e148(void)

{
  func_0x000107c61168(&PTR_PTR_112934e70);
  return;
}



/* Entry: 103b7e168; end: 103b7e21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7e168(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112ff0868;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112ff0870;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112ff0878;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff0880) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "WebBrowserTray/WebBrowserTrayContentViewController.swift",0x38,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103b7e220);
  (*pcVar2)();
}



/* Entry: 103b7e220; end: 103b7e267; -[WebBrowserTrayUIContainer delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7e220(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff08b0;
  func_0x000107c61428(param_1 + _DAT_112ff08b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b7e268; end: 103b7e2bf; -[WebBrowserTrayUIContainer setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7e268(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff08b0;
  func_0x000107c61428(param_1 + _DAT_112ff08b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b7e2c0; end: 103b7e303; -[WebBrowserTrayUIContainer halfScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b7e2c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff08b8;
  func_0x000107c61428(param_1 + _DAT_112ff08b8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103b7e304; end: 103b7e353; -[WebBrowserTrayUIContainer setHalfScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7e304(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff08b8;
  func_0x000107c61428(param_1 + _DAT_112ff08b8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103b7e354; end: 103b7e397; -[WebBrowserTrayUIContainer defaultTrayHeightPercentage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b7e354(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff08c0;
  func_0x000107c61428(param_1 + _DAT_112ff08c0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 103b7e398; end: 103b7e3e7; -[WebBrowserTrayUIContainer setDefaultTrayHeightPercentage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7e398(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff08c0;
  func_0x000107c61428(param_2 + _DAT_112ff08c0,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 103b7e3e8; end: 103b7e457;  */

undefined8 FUN_103b7e3e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  func_0x000103b7f044(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103b7e458; end: 103b7e493; -[WebBrowserTrayUIContainer initWithHostViewController:] */

undefined8 FUN_103b7e458(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000103b7f044();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 103b7e494; end: 103b7e527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7e494(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112ff08c8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4f090();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c420a8(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b7e528; end: 103b7e54b; -[WebBrowserTrayUIContainer dealloc] */

void FUN_103b7e528(void)

{
  func_0x000107c61174();
  FUN_103b7e494();
  return;
}



/* Entry: 103b7e54c; end: 103b7e5c7; -[WebBrowserTrayUIContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7e54c(long param_1)

{
  FUN_103b7f12c(param_1 + _DAT_112ff08b0);
  func_0x000107c61610(param_1 + _DAT_112ff08d0);
  func_0x000107c61610(param_1 + _DAT_112ff08c8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff08d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff08e0));
  if (*(long *)(param_1 + _DAT_112ff08e8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112ff08e8))[1]);
    return;
  }
  return;
}



/* Entry: 103b7e5c8; end: 103b7e7a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7e5c8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar7 = &puStack_70;
  FUN_103b7e7a4(0,0,0);
  lVar2 = unaff_x20 + _DAT_112ff08d0;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar4 = puVar3;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7e7a4);
      (*pcVar1)();
    }
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c5677c(puVar3);
    func_0x000107c61604(unaff_x20 + _DAT_112ff08c8,puVar3);
    lVar6 = lVar2;
    func_0x000107c4f078();
    func_0x000107c61180();
    if (lVar6 == 0) {
      lVar6 = lVar2;
      func_0x000107c61174(lVar2);
    }
    puVar4 = &UNK_1106dae08;
    func_0x000107c613fc(&UNK_1106dae08,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_1106dae30;
    func_0x000107c613fc(&UNK_1106dae30,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    *(undefined8 *)(puVar5 + 0x20) = param_1;
    pcStack_50 = FUN_103b7f150;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1106dae48;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c61174(puVar3);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar4);
    func_0x000107c4f018(lVar6);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 103b7e7a4; end: 103b7e8fb;  */

/* WARNING: Possible PIC construction at 0x000103b7e8ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b7e8c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7e8b0) */
/* WARNING: Removing unreachable block (ram,0x000103b7e8b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7e7a4(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  
  lVar4 = _DAT_112ff08c8;
  lVar6 = *(long *)(unaff_x20 + _DAT_112ff08d8);
  if (lVar6 == 0) {
    lVar6 = unaff_x20 + _DAT_112ff08c8;
    func_0x000107c61618();
    if (lVar6 == 0) {
      func_0x000107c61604(unaff_x20 + lVar4,0);
      if (param_2 != (code *)0x0) {
        (*param_2)();
      }
      return;
    }
    func_0x000107c4f090();
    func_0x000107c61180();
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff08e8);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    puVar5 = &UNK_1106daea8;
    func_0x000107c613fc(&UNK_1106daea8,0x30,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar2;
    *(undefined8 *)(puVar5 + 0x18) = uVar3;
    *(code **)(puVar5 + 0x20) = param_2;
    *(undefined8 *)(puVar5 + 0x28) = param_3;
    *puVar1 = FUN_103b7f248;
    puVar1[1] = puVar5;
    func_0x000100b64c10(uVar2,uVar3);
    func_0x000100b64c10(uVar2,uVar3);
    func_0x000107c61174(lVar6);
    func_0x000100b64c10(param_2,param_3);
    func_0x00010058d43c(uVar2,uVar3);
    func_0x000107c42018(lVar6);
    func_0x00010058d43c(uVar2,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 103b7e8fc; end: 103b7e9bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7e8fc(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112ff08c8;
    func_0x000107c61618();
    if ((lVar1 != 0) && (func_0x000107c61170(), lVar1 == param_2)) {
      FUN_103b7e9bc(param_3,param_2);
      goto LAB_103b7e9a0;
    }
    func_0x000107c61170(param_1);
  }
  func_0x000107c4f090();
  func_0x000107c61180();
  if (param_2 == 0) {
    return;
  }
  func_0x000107c420a8();
  param_1 = param_2;
LAB_103b7e9a0:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b7e9bc; end: 103b7eb53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7e9bc(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  FUN_103b7e148(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  FUN_103b7d2f4();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ff08e0);
  *(undefined8 *)(unaff_x20 + _DAT_112ff08e0) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  func_0x000107c61428(unaff_x20 + _DAT_112ff08b8,auStack_68,0,0);
  puVar2 = PTR_PTR_1126b0a08;
  func_0x000107c610f8();
  func_0x000107c48e8c();
  func_0x000107c52684();
  func_0x000107c54d20(0x3ff0000000000000,puVar2);
  func_0x000107c5a070(puVar2);
  func_0x000107c5a05c(puVar2);
  func_0x000107c52aa4(puVar2);
  func_0x000107c5a074(puVar2);
  func_0x000107c5a068(puVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ff08d8);
  *(undefined **)(unaff_x20 + _DAT_112ff08d8) = puVar2;
  func_0x000107c61174(puVar2);
  func_0x000107c61170(uVar3);
  lVar1 = _DAT_112ff08c0;
  func_0x000107c61428(unaff_x20 + _DAT_112ff08c0,auStack_80,0,0);
  func_0x000107c4ef2c(*(undefined8 *)(unaff_x20 + lVar1),puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 103b7eb54; end: 103b7eba3; -[WebBrowserTrayUIContainer attachUI:] */

/* WARNING: Possible PIC construction at 0x000103b7eb8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7eb90) */

void FUN_103b7eb54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103b7e5c8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103b7eba4; end: 103b7eca7; -[WebBrowserTrayUIContainer detachUI:] */

void FUN_103b7eba4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1106dae80;
    func_0x000107c613fc(&UNK_1106dae80,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_103b7f23c;
  }
  func_0x000107c61174(param_1);
  FUN_103b7e7a4(1,pcVar2,puVar1);
  func_0x000107c61170(param_1);
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
  return;
}



/* Entry: 103b7eca8; end: 103b7ecd3; -[WebBrowserTrayUIContainer init] */

void FUN_103b7eca8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowserTray.WebBrowserTrayUIContainer",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7ecd4);
  (*pcVar1)();
}



/* Entry: 103b7ecd4; end: 103b7ed8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7ecd4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  if (param_2 == 0x10) {
    uVar2 = 0x10;
  }
  else {
    if (param_2 != 8) goto LAB_103b7ed0c;
    uVar2 = 0x1a;
  }
  func_0x000107c52684(param_1,param_2,uVar2);
LAB_103b7ed0c:
  if ((param_2 == 0x10) != (bool)*(char *)(unaff_x20 + _DAT_112ff08f0)) {
    *(bool *)(unaff_x20 + _DAT_112ff08f0) = param_2 == 0x10;
    lVar1 = _DAT_112ff08b0;
    func_0x000107c61428(unaff_x20 + _DAT_112ff08b0,auStack_48,0,0);
    lVar1 = unaff_x20 + lVar1;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c5cfbc();
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 103b7ed8c; end: 103b7ede3; -[WebBrowserTrayUIContainer tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x000103b7edcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7edd0) */

void FUN_103b7ed8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103b7ecd4(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103b7ede4; end: 103b7ee4b; -[WebBrowserTrayUIContainer tray:heightForPosition:] */

undefined8
FUN_103b7ede4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_103b7f178(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 103b7ee4c; end: 103b7ef7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7ee4c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*(long *)(unaff_x20 + _DAT_112ff08d8) != 0 && param_1 == *(long *)(unaff_x20 + _DAT_112ff08d8)
     ) {
    *(undefined8 *)(unaff_x20 + _DAT_112ff08d8) = 0;
    func_0x000107c61170();
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ff08e0);
    *(undefined8 *)(unaff_x20 + _DAT_112ff08e0) = 0;
    func_0x000107c61170(uVar3);
    if (*(char *)(unaff_x20 + _DAT_112ff08f0) == '\x01') {
      *(undefined1 *)(unaff_x20 + _DAT_112ff08f0) = 0;
      lVar4 = _DAT_112ff08b0;
      func_0x000107c61428(unaff_x20 + _DAT_112ff08b0,auStack_60,0,0);
      lVar4 = unaff_x20 + lVar4;
      func_0x000107c61618();
      if (lVar4 != 0) {
        func_0x000107c5cfbc();
        func_0x000107c615e8(lVar4);
      }
    }
    func_0x000103b7ec34();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff08e8);
    pcVar2 = (code *)*puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar4 = _DAT_112ff08b0;
    func_0x000107c61428(unaff_x20 + _DAT_112ff08b0,auStack_48,0,0);
    lVar4 = unaff_x20 + lVar4;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000107c5cfc0();
      func_0x000107c615e8(lVar4);
    }
    if (pcVar2 != (code *)0x0) {
      func_0x000107c6157c(uVar3);
      (*pcVar2)();
      func_0x00010058d43c(pcVar2,uVar3);
      func_0x00010058d43c(pcVar2,uVar3);
    }
  }
  return;
}



/* Entry: 103b7ef80; end: 103b7efcf; -[WebBrowserTrayUIContainer trayDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000103b7efb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7efbc) */

void FUN_103b7ef80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103b7ee4c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103b7efd0; end: 103b7f12b; -[WebBrowserTrayUIContainer tray:animateAuxiliaryViewsForTrayPosition:] */

/* WARNING: Possible PIC construction at 0x000103b7f01c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7f020) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7efd0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112ff08e0);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c61174(lVar1);
    FUN_103b7de7c(param_4 == 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 103b7f12c; end: 103b7f14f;  */

undefined8 FUN_103b7f12c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b7f150; end: 103b7f177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7f150(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112ff08c8;
    func_0x000107c61618();
    if ((lVar2 != 0) && (func_0x000107c61170(), lVar2 == lVar3)) {
      FUN_103b7e9bc(uVar4,lVar3);
      goto LAB_103b7e9a0;
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c4f090();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c420a8();
  lVar1 = lVar3;
LAB_103b7e9a0:
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 103b7f178; end: 103b7f21b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b7f178(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  if (param_2 == 0x10) {
    lVar2 = unaff_x20 + _DAT_112ff08c8;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7f21c);
        (*pcVar1)();
      }
      lVar2 = lVar3;
      func_0x000107c5e3f8();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar2 != 0) {
        func_0x000107c3ec60(lVar2);
        func_0x000107c609b0();
        func_0x000107c61170(lVar2);
        return param_1;
      }
    }
  }
  return 0xbff0000000000000;
}



/* Entry: 103b7f21c; end: 103b7f23b;  */

void FUN_103b7f21c(void)

{
  func_0x000107c61168(&PTR_PTR_112934f50);
  return;
}



/* Entry: 103b7f23c; end: 103b7f247;  */

void FUN_103b7f23c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103b7f244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103b7f248; end: 103b7f287;  */

void FUN_103b7f248(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



/* Entry: 103b7f288; end: 103b7f297; -[WebBrowsingThirdPartyLoginScope plugInRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7f288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff0920));
  return;
}



/* Entry: 103b7f298; end: 103b7f2a7; -[WebBrowsingThirdPartyLoginScope thirdPartyLoginSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b7f298(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff0928);
}



/* Entry: 103b7f2a8; end: 103b7f30b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7f2a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff0920) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff0928) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b7f30c; end: 103b7f37b; -[WebBrowsingThirdPartyLoginScope initWithPlugInRegistry:thirdPartyLoginSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7f30c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff0920) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff0928) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}


