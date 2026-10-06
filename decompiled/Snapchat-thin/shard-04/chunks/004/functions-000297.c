/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10349a260; end: 10349a283;  */

void FUN_10349a260(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10349a284; end: 10349a2b7;  */

void FUN_10349a284(void)

{
  long *plVar1;
  long *unaff_x20;
  
  plVar1 = (long *)(*unaff_x20 + 0x10);
  func_0x0001000a8868(plVar1,*(undefined8 *)(*unaff_x20 + 0x28));
  FUN_10349a9c4(*(undefined8 *)(*plVar1 + 0x18),*(undefined8 *)(*plVar1 + 0x20));
  return;
}



/* Entry: 10349a2b8; end: 10349a2bf;  */

undefined8 FUN_10349a2b8(void)

{
  return 0;
}



/* Entry: 10349a2c0; end: 10349a3d3;  */

void FUN_10349a2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  func_0x0001000285a8(0x112d3b7e0,&UNK_10d904cd0);
  func_0x000107c4ae28(param_2);
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c4ae24();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x0001000bda74(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c3fa04(param_3);
  func_0x000107c61180();
  uVar2 = 0;
  func_0x00010349b500();
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10349b5cc();
  func_0x000107c61170(param_1);
  ppuStack_48 = &PTR_DAT_11065bf68;
  auStack_68[0] = uVar1;
  uStack_50 = uVar2;
  FUN_10349a3f4(auStack_68,unaff_x20 + 0x10);
  return;
}



/* Entry: 10349a3d4; end: 10349a3f3;  */

void FUN_10349a3d4(void)

{
  func_0x000107c61168(&PTR_PTR_112f72858);
  return;
}



/* Entry: 10349a3f4; end: 10349a40b;  */

undefined8 * FUN_10349a3f4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10349a40c; end: 10349a52f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10349a40c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112f4beb8,&UNK_10db9bc80);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f728b8);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c4b28c(uVar4);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar1 = uVar4;
  func_0x000100759c94(uVar4,0);
  func_0x000107c61170(uVar4);
  puVar2 = &UNK_11065bf50;
  func_0x000107c613fc(&UNK_11065bf50,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uVar4 = 0x112f728c0;
  func_0x0001000285a8(0x112f728c0,&UNK_10dbcddb8);
  uVar3 = 0;
  func_0x000100775264(0,1,FUN_10349a6b0,puVar2,uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar2);
  func_0x00010488b298();
  func_0x000107c61574(uVar3);
  return puVar2;
}



/* Entry: 10349a530; end: 10349a6af;  */

void FUN_10349a530(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 auStack_68 [24];
  
  uVar7 = *param_2;
  puVar6 = auStack_68;
  func_0x000107c61428(param_3 + 0x10,puVar6,0,0);
  uVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (uVar1 == 0) {
    *param_1 = 0;
  }
  else {
    uVar2 = uVar1;
    if (uVar7 != 0) {
      uVar2 = uVar7;
      func_0x000107c61174();
      uVar3 = uVar2;
      func_0x000107c44300();
      func_0x000107c61180();
      if (uVar3 == 0) {
        func_0x000107c61170(uVar2);
      }
      else {
        uVar4 = uVar3;
        func_0x000107c44730();
        if ((uVar4 & 1) != 0) {
          uVar2 = uVar3;
          FUN_103498dc8();
          puVar5 = &UNK_11065bf50;
          func_0x000107c613fc(&UNK_11065bf50,0x18,7);
          func_0x000107c61614(puVar5 + 0x10,uVar1);
          FUN_103499e58(0);
          func_0x000107c610f8();
          func_0x000107c6157c(puVar5);
          FUN_1034998f0(uVar2,puVar6,uVar7,FUN_10349a898,puVar5);
          func_0x000107c61170(uVar1);
          func_0x000107c61574(puVar5);
          func_0x000107c615e8(uVar3);
          *param_1 = uVar2;
          return;
        }
        func_0x000107c61170(uVar2);
        func_0x000107c615e8(uVar3);
        uVar2 = uVar3;
      }
    }
    func_0x00010349a858();
    func_0x000107c613f8(&UNK_11071de20,uVar2,0,0);
    func_0x000107c61654();
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 10349a6b0; end: 10349a6c7;  */

void FUN_10349a6b0(void)

{
  FUN_10349a530();
  return;
}



/* Entry: 10349a6c8; end: 10349a72f; -[_TtC25SponsoredLensCTAPresenter38SponsoredLensFilterCTAViewProviderImpl ctaViewForFilterId:] */

void FUN_10349a6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_10349a40c(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10349a730; end: 10349a79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349a730(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      func_0x000107c445d0(*(undefined8 *)(param_2 + _DAT_112f728c8));
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 10349a7a0; end: 10349a7ff; -[_TtC25SponsoredLensCTAPresenter38SponsoredLensFilterCTAViewProviderImpl init] */

void FUN_10349a7a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensCTAPresenter.SponsoredLensFilterCTAViewProviderImpl",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10349a7cc);
  (*pcVar1)();
}



/* Entry: 10349a800; end: 10349a837; -[_TtC25SponsoredLensCTAPresenter38SponsoredLensFilterCTAViewProviderImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010349a81c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010349a820) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349a800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f728b8));
  return;
}



/* Entry: 10349a838; end: 10349a897;  */

void FUN_10349a838(void)

{
  func_0x000107c61168(&PTR_PTR_1128de208);
  return;
}



/* Entry: 10349a898; end: 10349a89f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349a898(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c445d0(*(undefined8 *)(lVar1 + _DAT_112f728c8));
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 10349a8a0; end: 10349a94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10349a8a0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long *plVar4;
  undefined8 uVar5;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar3 = *(long **)(unaff_x20 + 0x38);
  plVar4 = plVar3;
  if (plVar3 == (long *)0x1) {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      lVar1 = 0;
      FUN_10349a094();
      lVar2 = lVar1;
      func_0x000107c610f8();
      *(long *)(lVar2 + _DAT_112f727e8) = lStack_38;
      plVar4 = &lStack_48;
      lStack_48 = lVar2;
      lStack_40 = lVar1;
      func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
    *(long **)(unaff_x20 + 0x38) = plVar4;
    func_0x000107c615f0(plVar4);
    FUN_10349b520(uVar5);
  }
  func_0x00010349b530(plVar3);
  return plVar4;
}



/* Entry: 10349a950; end: 10349a9c3;  */

void FUN_10349a950(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  func_0x000107c61574(uVar3);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  uVar1 = 0;
  if (lVar2 != 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c4ff34();
    func_0x000107c61170(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  }
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10349a9c4; end: 10349aaeb;  */

/* WARNING: Possible PIC construction at 0x00010349aa14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349aa4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349aa9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010349aa50) */
/* WARNING: Removing unreachable block (ram,0x00010349aa18) */
/* WARNING: Removing unreachable block (ram,0x00010349aaa0) */

void FUN_10349a9c4(long *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x60);
  func_0x000107c6157c();
  (*pcVar1)(0x10349b540);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 10349aaec; end: 10349ac13;  */

void FUN_10349aaec(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar6 = *param_1;
  puVar3 = &UNK_11065bf90;
  func_0x000107c613fc(&UNK_11065bf90,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,param_2);
  puVar4 = &UNK_11065c0a8;
  func_0x000107c613fc(&UNK_11065c0a8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10349b5c4;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_50 = 0x10349b6ec;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10006eb60;
  puStack_58 = &UNK_11065c0c0;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c7cc(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x6e,0x3f,0x39,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10349ac14);
  (*pcVar2)();
}



/* Entry: 10349ac14; end: 10349af97;  */

void FUN_10349ac14(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
LAB_10349ac64:
    func_0x000107c61574(param_1);
    return;
  }
  uVar3 = param_1 + 0x10;
  func_0x000107c61618();
  if (uVar3 == 0) goto LAB_10349ac64;
  uVar1 = uVar3;
  func_0x000107c5b7b8();
  func_0x000107c61180();
  func_0x000107c61170();
  if (uVar1 == 0) goto LAB_10349ac64;
  FUN_10349a8a0();
  if (uVar3 == 0) {
    func_0x000107c61170(uVar1);
    goto LAB_10349ac64;
  }
  uVar2 = uVar3;
  func_0x000107c40e18();
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x48) = uVar2;
  func_0x000107c615f0(uVar2);
  func_0x000107c615e8(uVar10);
  uVar3 = *(ulong *)(param_1 + 0x50);
  if (uVar3 != 0) {
    func_0x000107c61174();
    uVar4 = uVar3;
    func_0x000107c4a4d8();
    if (((int)uVar4 != 0) && (uVar4 = uVar3, func_0x000107c4a400(), (uVar4 & 1) == 0)) {
      uVar4 = uVar2;
      func_0x000107c5de64(uVar2);
      func_0x000107c61180();
      func_0x000107c550d8();
      func_0x000107c61170(uVar4);
      func_0x000107c5d510(uVar2);
      goto LAB_10349ad40;
    }
    func_0x000107c61170(uVar3);
  }
  uVar3 = uVar2;
  func_0x000107c5de64(uVar2);
  func_0x000107c61180();
  func_0x000107c550d8();
LAB_10349ad40:
  func_0x000107c61170(uVar3);
  uVar3 = uVar2;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c3d89c(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar6 = puVar5;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar6 + 0x18) = 9;
  *(undefined8 *)(puVar6 + 0x10) = 4;
  uVar4 = uVar3;
  func_0x000107c4ace0();
  func_0x000107c61180();
  uVar7 = uVar1;
  func_0x000107c4ace0(uVar1);
  func_0x000107c61180();
  uVar8 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  *(ulong *)(puVar6 + 0x20) = uVar8;
  uVar4 = uVar3;
  func_0x000107c50890();
  func_0x000107c61180();
  uVar7 = uVar1;
  func_0x000107c50890(uVar1);
  func_0x000107c61180();
  uVar8 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  *(ulong *)(puVar6 + 0x28) = uVar8;
  uVar4 = uVar3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar7 = uVar1;
  func_0x000107c3ec1c(uVar1);
  func_0x000107c61180();
  uVar8 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  *(ulong *)(puVar6 + 0x30) = uVar8;
  uVar4 = uVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar7 = uVar1;
  func_0x000107c5cbe4(uVar1);
  func_0x000107c61180();
  uVar8 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  *(ulong *)(puVar6 + 0x38) = uVar8;
  uVar10 = 0;
  func_0x000100847984(0);
  puVar9 = puVar6;
  func_0x000107c5fc48(puVar6,uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c3d048(puVar5);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 10349af98; end: 10349b22b;  */

void FUN_10349af98(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar3 = &puStack_a0;
  ppuVar5 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  uVar9 = *param_1;
  puVar2 = &UNK_11065bfb8;
  func_0x000107c613fc(&UNK_11065bfb8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x10349b550;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10349b558;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100fe4704;
  puStack_88 = &UNK_11065bfd0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(&puStack_a0);
  puVar4 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_11065c008;
  func_0x000107c613fc(&UNK_11065c008,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x10349b594;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  pcStack_80 = (code *)0x10349b6e8;
  puStack_a0 = puVar8;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100fe4704;
  puStack_88 = &UNK_11065c020;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11065c058;
  func_0x000107c613fc(&UNK_11065c058,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x10349b59c;
  *(undefined8 *)(puVar6 + 0x18) = param_2;
  pcStack_80 = FUN_10349b5a4;
  puStack_a0 = puVar8;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_11065c070;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar8 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c4c5f0(uVar9);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar8 = puVar2;
  func_0x000107c61544(puVar2,"",0x6e,0x5c,0x33,1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar8 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10349b224);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x6e,0x5e,0x1d,1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = puVar6;
    func_0x000107c61544(puVar6,"",0x6e,0x69,0x22,1);
    func_0x000107c61574(puVar6);
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10349b22c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10349b228);
  (*pcVar1)();
}



/* Entry: 10349b22c; end: 10349b2bb;  */

void FUN_10349b22c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x48);
    func_0x000107c615f0(lVar2);
    func_0x000107c61574(param_2);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5de64(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c550d8(lVar1);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 10349b2bc; end: 10349b3bf;  */

void FUN_10349b2bc(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    *(ulong *)(param_2 + 0x50) = param_1;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    uVar1 = param_1;
    func_0x000107c4a4d8();
    if (((int)uVar1 != 0) && (uVar1 = param_1, func_0x000107c4a400(), (int)uVar1 == 0)) {
      if (*(long *)(param_2 + 0x48) != 0) {
        func_0x000107c5d510();
      }
      func_0x000107c44300();
      func_0x000107c61180();
      if (param_1 != 0) {
        uVar1 = param_1;
        func_0x000107c44730();
        if ((uVar1 & 1) != 0) {
          lVar2 = *(long *)(param_2 + 0x48);
          if (lVar2 != 0) {
            func_0x000107c5de64();
            func_0x000107c61180();
            func_0x000107c550d8();
            func_0x000107c61170(lVar2);
          }
          func_0x000107c61574(param_2);
          func_0x000107c615e8(param_1);
          return;
        }
        func_0x000107c615e8(param_1);
      }
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10349b3c0; end: 10349b483;  */

void FUN_10349b3c0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  lVar2 = param_1 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x50);
    *(undefined8 *)(lVar2 + 0x50) = 0;
    func_0x000107c61574();
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_50,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    func_0x000107c615f0(lVar2);
    func_0x000107c61574(param_1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5de64(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c550d8(lVar1);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 10349b484; end: 10349b51f;  */

void FUN_10349b484(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_10349b520(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10349b520; end: 10349b557;  */

void FUN_10349b520(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 10349b558; end: 10349b577;  */

void FUN_10349b558(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10349b578; end: 10349b5a3;  */

void FUN_10349b578(long param_1,long param_2)

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



/* Entry: 10349b5a4; end: 10349b5c3;  */

void FUN_10349b5a4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10349b5c4; end: 10349b5cb;  */

void FUN_10349b5c4(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    return;
  }
  if (*(long *)(lVar1 + 0x48) != 0) {
LAB_10349ac64:
    func_0x000107c61574(lVar1);
    return;
  }
  uVar4 = lVar1 + 0x10;
  func_0x000107c61618();
  if (uVar4 == 0) goto LAB_10349ac64;
  uVar2 = uVar4;
  func_0x000107c5b7b8();
  func_0x000107c61180();
  func_0x000107c61170();
  if (uVar2 == 0) goto LAB_10349ac64;
  FUN_10349a8a0();
  if (uVar4 == 0) {
    func_0x000107c61170(uVar2);
    goto LAB_10349ac64;
  }
  uVar3 = uVar4;
  func_0x000107c40e18();
  func_0x000107c61180();
  func_0x000107c615e8(uVar4);
  uVar11 = *(undefined8 *)(lVar1 + 0x48);
  *(ulong *)(lVar1 + 0x48) = uVar3;
  func_0x000107c615f0(uVar3);
  func_0x000107c615e8(uVar11);
  uVar4 = *(ulong *)(lVar1 + 0x50);
  if (uVar4 != 0) {
    func_0x000107c61174();
    uVar5 = uVar4;
    func_0x000107c4a4d8();
    if (((int)uVar5 != 0) && (uVar5 = uVar4, func_0x000107c4a400(), (uVar5 & 1) == 0)) {
      uVar5 = uVar3;
      func_0x000107c5de64(uVar3);
      func_0x000107c61180();
      func_0x000107c550d8();
      func_0x000107c61170(uVar5);
      func_0x000107c5d510(uVar3);
      goto LAB_10349ad40;
    }
    func_0x000107c61170(uVar4);
  }
  uVar4 = uVar3;
  func_0x000107c5de64(uVar3);
  func_0x000107c61180();
  func_0x000107c550d8();
LAB_10349ad40:
  func_0x000107c61170(uVar4);
  uVar4 = uVar3;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c3d89c(uVar2);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar7 = puVar6;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 9;
  *(undefined8 *)(puVar7 + 0x10) = 4;
  uVar5 = uVar4;
  func_0x000107c4ace0();
  func_0x000107c61180();
  uVar8 = uVar2;
  func_0x000107c4ace0(uVar2);
  func_0x000107c61180();
  uVar9 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  *(ulong *)(puVar7 + 0x20) = uVar9;
  uVar5 = uVar4;
  func_0x000107c50890();
  func_0x000107c61180();
  uVar8 = uVar2;
  func_0x000107c50890(uVar2);
  func_0x000107c61180();
  uVar9 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  *(ulong *)(puVar7 + 0x28) = uVar9;
  uVar5 = uVar4;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar8 = uVar2;
  func_0x000107c3ec1c(uVar2);
  func_0x000107c61180();
  uVar9 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  *(ulong *)(puVar7 + 0x30) = uVar9;
  uVar5 = uVar4;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar8 = uVar2;
  func_0x000107c5cbe4(uVar2);
  func_0x000107c61180();
  uVar9 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  *(ulong *)(puVar7 + 0x38) = uVar9;
  uVar11 = 0;
  func_0x000100847984(0);
  puVar10 = puVar7;
  func_0x000107c5fc48(puVar7,uVar11);
  func_0x000107c61574(puVar7);
  func_0x000107c3d048(puVar6);
  func_0x000107c61574(lVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar10);
  return;
}



/* Entry: 10349b5cc; end: 10349b6cf;  */

void FUN_10349b5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c61614(unaff_x20 + 0x10,0);
  *(undefined8 *)(unaff_x20 + 0x38) = 1;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  func_0x000107c61604(unaff_x20 + 0x10,param_1);
  func_0x0001000285a8(0x112f421d0,&UNK_10db8f100);
  uVar2 = param_1;
  func_0x000107c3f6a0();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x0001000b637c();
  func_0x000107c61170(uVar2);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  func_0x0001000285a8(0x112f43d90,&UNK_10db90020);
  func_0x000107c4b3dc();
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x0001000b637c();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  return;
}



/* Entry: 10349b6d0; end: 10349b6ef;  */

void FUN_10349b6d0(long param_1,long param_2)

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



/* Entry: 10349b6f0; end: 10349b6fb; -[SCSponsoredLensCTAARBarViewEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b6f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72a80;
  func_0x000107c61428(param_1 + _DAT_112f72a80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10349b6fc; end: 10349b707; -[SCSponsoredLensCTAARBarViewEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b6fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72a80;
  func_0x000107c61428(param_1 + _DAT_112f72a80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10349b708; end: 10349b713; -[SCSponsoredLensCTAARBarViewEntryPoint mainCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b708(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72a88;
  func_0x000107c61428(param_1 + _DAT_112f72a88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10349b714; end: 10349b71f; -[SCSponsoredLensCTAARBarViewEntryPoint setMainCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b714(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72a88;
  func_0x000107c61428(param_1 + _DAT_112f72a88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10349b720; end: 10349b72b; -[SCSponsoredLensCTAARBarViewEntryPoint carouselService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b720(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72a90;
  func_0x000107c61428(param_1 + _DAT_112f72a90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10349b72c; end: 10349b737; -[SCSponsoredLensCTAARBarViewEntryPoint setCarouselService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b72c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72a90;
  func_0x000107c61428(param_1 + _DAT_112f72a90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10349b738; end: 10349b743; -[SCSponsoredLensCTAARBarViewEntryPoint arBarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b738(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72a98;
  func_0x000107c61428(param_1 + _DAT_112f72a98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10349b744; end: 10349b74f; -[SCSponsoredLensCTAARBarViewEntryPoint setArBarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b744(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72a98;
  func_0x000107c61428(param_1 + _DAT_112f72a98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10349b750; end: 10349b75b; -[SCSponsoredLensCTAARBarViewEntryPoint cameraConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b750(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72aa0;
  func_0x000107c61428(param_1 + _DAT_112f72aa0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10349b75c; end: 10349b767; -[SCSponsoredLensCTAARBarViewEntryPoint setCameraConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b75c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72aa0;
  func_0x000107c61428(param_1 + _DAT_112f72aa0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10349b768; end: 10349b773; -[SCSponsoredLensCTAARBarViewEntryPoint lensCTAHandlingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b768(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72aa8;
  func_0x000107c61428(param_1 + _DAT_112f72aa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10349b774; end: 10349b77f; -[SCSponsoredLensCTAARBarViewEntryPoint setLensCTAHandlingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b774(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72aa8;
  func_0x000107c61428(param_1 + _DAT_112f72aa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10349b780; end: 10349b78b; -[SCSponsoredLensCTAARBarViewEntryPoint sponsoredLensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b780(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72ab0;
  func_0x000107c61428(param_1 + _DAT_112f72ab0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10349b78c; end: 10349b797; -[SCSponsoredLensCTAARBarViewEntryPoint setSponsoredLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b78c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72ab0;
  func_0x000107c61428(param_1 + _DAT_112f72ab0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10349b798; end: 10349b7a3; -[SCSponsoredLensCTAARBarViewEntryPoint sponsoredLensCameraHeatMapServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b798(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72ab8;
  func_0x000107c61428(param_1 + _DAT_112f72ab8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10349b7a4; end: 10349b7af; -[SCSponsoredLensCTAARBarViewEntryPoint setSponsoredLensCameraHeatMapServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b7a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72ab8;
  func_0x000107c61428(param_1 + _DAT_112f72ab8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10349b7b0; end: 10349b7bb; -[SCSponsoredLensCTAARBarViewEntryPoint cameraHardwareServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b7b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72ac0;
  func_0x000107c61428(param_1 + _DAT_112f72ac0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10349b7bc; end: 10349b7c7; -[SCSponsoredLensCTAARBarViewEntryPoint setCameraHardwareServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b7bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72ac0;
  func_0x000107c61428(param_1 + _DAT_112f72ac0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10349b7c8; end: 10349b7d3; -[SCSponsoredLensCTAARBarViewEntryPoint lensLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b7c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72ac8;
  func_0x000107c61428(param_1 + _DAT_112f72ac8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10349b7d4; end: 10349b7df; -[SCSponsoredLensCTAARBarViewEntryPoint setLensLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b7d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72ac8;
  func_0x000107c61428(param_1 + _DAT_112f72ac8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10349b7e0; end: 10349b7eb; -[SCSponsoredLensCTAARBarViewEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b7e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72ad0;
  func_0x000107c61428(param_1 + _DAT_112f72ad0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10349b7ec; end: 10349b7f7; -[SCSponsoredLensCTAARBarViewEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b7ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72ad0;
  func_0x000107c61428(param_1 + _DAT_112f72ad0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10349b7f8; end: 10349b803; -[SCSponsoredLensCTAARBarViewEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b7f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72ad8;
  func_0x000107c61428(param_1 + _DAT_112f72ad8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10349b804; end: 10349b80f; -[SCSponsoredLensCTAARBarViewEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b804(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72ad8;
  func_0x000107c61428(param_1 + _DAT_112f72ad8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10349b810; end: 10349b81b; -[SCSponsoredLensCTAARBarViewEntryPoint lensAlwaysOnMediaPickerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b810(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72ae0;
  func_0x000107c61428(param_1 + _DAT_112f72ae0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10349b81c; end: 10349b827; -[SCSponsoredLensCTAARBarViewEntryPoint setLensAlwaysOnMediaPickerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b81c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72ae0;
  func_0x000107c61428(param_1 + _DAT_112f72ae0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10349b828; end: 10349b833; -[SCSponsoredLensCTAARBarViewEntryPoint miniCameraActivationStateServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b828(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f72ae8;
  func_0x000107c61428(param_1 + _DAT_112f72ae8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10349b834; end: 10349b877;  */

void FUN_10349b834(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10349b878; end: 10349b883; -[SCSponsoredLensCTAARBarViewEntryPoint setMiniCameraActivationStateServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b878(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f72ae8;
  func_0x000107c61428(param_1 + _DAT_112f72ae8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10349b884; end: 10349b8d7;  */

void FUN_10349b884(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10349b8d8; end: 10349c08f;  */

/* WARNING: Possible PIC construction at 0x00010349bc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bc40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bc60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bc78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bc88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bcf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bd00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bd10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bd20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bd30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bd40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349c010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349c020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349c040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349c050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349c060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bfb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bfc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bfd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bfe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349c000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bf60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bf70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bf80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bf90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bfa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bf10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bf20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bf30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bf40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349be80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349be90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349beb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349be50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349be60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349be70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349be20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349be30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bdf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349be00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bdd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bde0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349bdc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010349bde4) */
/* WARNING: Removing unreachable block (ram,0x00010349bdd4) */
/* WARNING: Removing unreachable block (ram,0x00010349be04) */
/* WARNING: Removing unreachable block (ram,0x00010349bdf4) */
/* WARNING: Removing unreachable block (ram,0x00010349be34) */
/* WARNING: Removing unreachable block (ram,0x00010349be24) */
/* WARNING: Removing unreachable block (ram,0x00010349be74) */
/* WARNING: Removing unreachable block (ram,0x00010349be64) */
/* WARNING: Removing unreachable block (ram,0x00010349be54) */
/* WARNING: Removing unreachable block (ram,0x00010349beb4) */
/* WARNING: Removing unreachable block (ram,0x00010349bea4) */
/* WARNING: Removing unreachable block (ram,0x00010349be94) */
/* WARNING: Removing unreachable block (ram,0x00010349be84) */
/* WARNING: Removing unreachable block (ram,0x00010349bef4) */
/* WARNING: Removing unreachable block (ram,0x00010349bee4) */
/* WARNING: Removing unreachable block (ram,0x00010349bed4) */
/* WARNING: Removing unreachable block (ram,0x00010349bec4) */
/* WARNING: Removing unreachable block (ram,0x00010349bf44) */
/* WARNING: Removing unreachable block (ram,0x00010349bf34) */
/* WARNING: Removing unreachable block (ram,0x00010349bf24) */
/* WARNING: Removing unreachable block (ram,0x00010349bf14) */
/* WARNING: Removing unreachable block (ram,0x00010349bfa4) */
/* WARNING: Removing unreachable block (ram,0x00010349bf94) */
/* WARNING: Removing unreachable block (ram,0x00010349bf84) */
/* WARNING: Removing unreachable block (ram,0x00010349bf74) */
/* WARNING: Removing unreachable block (ram,0x00010349bf64) */
/* WARNING: Removing unreachable block (ram,0x00010349c004) */
/* WARNING: Removing unreachable block (ram,0x00010349bff4) */
/* WARNING: Removing unreachable block (ram,0x00010349bfe4) */
/* WARNING: Removing unreachable block (ram,0x00010349bfd4) */
/* WARNING: Removing unreachable block (ram,0x00010349bfc4) */
/* WARNING: Removing unreachable block (ram,0x00010349bfb4) */
/* WARNING: Removing unreachable block (ram,0x00010349c064) */
/* WARNING: Removing unreachable block (ram,0x00010349c054) */
/* WARNING: Removing unreachable block (ram,0x00010349c044) */
/* WARNING: Removing unreachable block (ram,0x00010349c034) */
/* WARNING: Removing unreachable block (ram,0x00010349c024) */
/* WARNING: Removing unreachable block (ram,0x00010349c014) */
/* WARNING: Removing unreachable block (ram,0x00010349bd44) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x00010349bd34) */
/* WARNING: Removing unreachable block (ram,0x00010349bd24) */
/* WARNING: Removing unreachable block (ram,0x00010349bd14) */
/* WARNING: Removing unreachable block (ram,0x00010349bd04) */
/* WARNING: Removing unreachable block (ram,0x00010349bcf4) */
/* WARNING: Removing unreachable block (ram,0x00010349bce4) */
/* WARNING: Removing unreachable block (ram,0x00010349bcd0) */
/* WARNING: Removing unreachable block (ram,0x00010349bca4) */
/* WARNING: Removing unreachable block (ram,0x00010349bc8c) */
/* WARNING: Removing unreachable block (ram,0x00010349bc7c) */
/* WARNING: Removing unreachable block (ram,0x00010349bc64) */
/* WARNING: Removing unreachable block (ram,0x00010349bc54) */
/* WARNING: Removing unreachable block (ram,0x00010349bc44) */
/* WARNING: Removing unreachable block (ram,0x00010349bc34) */
/* WARNING: Removing unreachable block (ram,0x00010349bdc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349b8d8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4c144();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c3f6b4();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c3e0b0();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c3f084();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = unaff_x20;
            func_0x000107c4ae28();
            func_0x000107c61180();
            if (lVar6 != 0) {
              lVar7 = unaff_x20;
              func_0x000107c5b7d4();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                lVar8 = unaff_x20;
                func_0x000107c5b7c4();
                func_0x000107c61180();
                if (lVar8 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  lVar9 = unaff_x20;
                  func_0x000107c3f0f8();
                  func_0x000107c61180();
                  if (lVar9 != 0) {
                    lVar10 = unaff_x20;
                    func_0x000107c4b258();
                    func_0x000107c61180();
                    if (lVar10 != 0) {
                      lVar11 = unaff_x20;
                      func_0x000107c5d900();
                      func_0x000107c61180();
                      if (lVar11 == 0) {
                        func_0x000107c61170(lVar1);
                        lVar1 = lVar2;
                      }
                      else {
                        lVar12 = unaff_x20;
                        func_0x000107c3fa0c();
                        func_0x000107c61180();
                        if (lVar12 == 0) {
                          func_0x000107c61170(lVar1);
                          lVar1 = lVar2;
                        }
                        else {
                          lVar2 = unaff_x20;
                          func_0x000107c4ade4();
                          func_0x000107c61180();
                          if (lVar2 != 0) {
                            func_0x000107c4cf58();
                            func_0x000107c61180();
                            if (unaff_x20 != 0) {
                              lVar13 = 0;
                              func_0x000103498d44();
                              func_0x000107c613fc();
                              *(undefined8 *)(lVar13 + 0x78) = 0;
                              *(undefined8 *)(lVar13 + 0x80) = 0;
                              puVar14 = PTR_PTR_1126ae810;
                              func_0x000107c610f8();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c453e4();
                              *(undefined **)(lVar13 + 0x88) = puVar14;
                              *(long *)(lVar13 + 0x20) = lVar1;
                              func_0x000107c61174();
                              func_0x000107c4ae78();
                              func_0x000107c61180();
                              *(long *)(lVar13 + 0x10) = lVar3;
                              *(long *)(lVar13 + 0x18) = lVar4;
                              *(long *)(lVar13 + 0x30) = lVar6;
                              uVar15 = *(undefined8 *)(lVar7 + _DAT_113013078);
                              *(undefined8 *)(lVar13 + 0x40) = uVar15;
                              *(long *)(lVar13 + 0x28) = lVar5;
                              uVar16 = *(undefined8 *)(lVar8 + _DAT_112f72b20);
                              *(undefined8 *)(lVar13 + 0x48) = uVar16;
                              *(long *)(lVar13 + 0x50) = lVar9;
                              *(long *)(lVar13 + 0x58) = lVar10;
                              *(long *)(lVar13 + 0x60) = lVar11;
                              *(long *)(lVar13 + 0x68) = lVar12;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174(lVar11);
                              func_0x000107c61174(lVar12);
                              func_0x000107c615f0(uVar15);
                              func_0x000107c61174(uVar16);
                              func_0x000107c4ade4(lVar2);
                              func_0x000107c61180();
                              lVar1 = lVar7;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10349c090; end: 10349c117; -[SCSponsoredLensCTAARBarViewEntryPoint begin] */

void FUN_10349c090(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10349b8d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10349c118; end: 10349c14b; -[SCSponsoredLensCTAARBarViewEntryPoint end] */

void FUN_10349c118(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010349c0b8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10349c14c; end: 10349c7eb;  */

void FUN_10349c14c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x656d61436e69616d;
      if (((param_2 == 0x656d61436e69616d) && (param_3 == -0x109a8f909cac9e8e)) ||
         (func_0x000107c605b8(0x656d61436e69616d,0xef65706f63536172,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c561a0();
      }
      else {
        uVar2 = 0x6c6573756f726163;
        if (((param_2 == 0x6c6573756f726163) && (param_3 == -0x109a9c96898d9aad)) ||
           (func_0x000107c605b8(0x6c6573756f726163,0xef65636976726553,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5325c();
        }
        else {
          uVar2 = 0x7265537261427261;
          if (((param_2 == 0x7265537261427261) && (param_3 == -0x12ffff8c9a9c968a)) ||
             (func_0x000107c605b8(0x7265537261427261,0xed00007365636976,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c52898();
          }
          else {
            uVar2 = 0xd00000000000001b;
            if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10dd740)) ||
               (func_0x000107c605b8(0xd00000000000001b,0x800000010ef228c0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c52fdc();
            }
            else {
              uVar2 = 0xd000000000000017;
              if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef0f77a80)) ||
                 (func_0x000107c605b8(0xd000000000000017,0x800000010f088580,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55c0c();
              }
              else {
                uVar2 = 0;
                if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0eac1a0)) {
                  func_0x000107c605b8(0xd000000000000022,0x800000010f153e60,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0eac170)) {
                      uVar2 = 0;
                      func_0x000107c605b8(0xd000000000000022,0x800000010f153e90,param_2,param_3,0);
                      if ((uVar2 & 1) == 0) {
                        uVar2 = 0;
                        if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10ecf30))
                           || (func_0x000107c605b8(0xd000000000000016,0x800000010ef130d0,param_2,
                                                   param_3,0), (uVar2 & 1) != 0)) {
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c53024();
                        }
                        else {
                          if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ecf70))
                          {
                            uVar2 = 0;
                            func_0x000107c605b8(0xd000000000000012,0x800000010ef13090,param_2,
                                                param_3,0);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = 0;
                              if (((param_2 == -0x2fffffffffffffec) &&
                                  (param_3 == -0x7ffffffef10ef610)) ||
                                 (func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,
                                                      param_3,0), (uVar2 & 1) != 0)) {
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c5a2fc();
                              }
                              else {
                                uVar2 = 0;
                                if (((param_2 == -0x2fffffffffffffe6) &&
                                    (param_3 == -0x7ffffffef10ed550)) ||
                                   (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,
                                                        param_2,param_3,0), (uVar2 & 1) != 0)) {
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c53414();
                                }
                                else {
                                  uVar2 = 0xd00000000000001f;
                                  if (((param_2 == -0x2fffffffffffffe1) &&
                                      (param_3 == -0x7ffffffef0eac140)) ||
                                     (func_0x000107c605b8(0xd00000000000001f,0x800000010f153ec0,
                                                          param_2,param_3,0), (uVar2 & 1) != 0)) {
                                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c55be0();
                                  }
                                  else {
                                    uVar2 = 0xd000000000000021;
                                    if (((param_2 != -0x2fffffffffffffdf) ||
                                        (param_3 != -0x7ffffffef0ed9390)) &&
                                       (func_0x000107c605b8(0xd000000000000021,0x800000010f126c70,
                                                            param_2,param_3,0), (uVar2 & 1) == 0)) {
                                      func_0x000107c602fc(0x15);
                                      func_0x000107c6142c(0xe000000000000000);
                                      func_0x000107c5fb78(param_2,param_3);
                                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                          0x800000010ef0fc20,
                                                                                                                    
                                                  "SponsoredLensCTAPresenter/SCSponsoredLensCTAARBarViewEntryPoint.swift"
                                                  ,0x45,2,0x6b,0);
                    /* WARNING: Does not return */
                                      pcVar1 = (code *)SoftwareBreakpoint(1,0x10349c7ec);
                                      (*pcVar1)();
                                    }
                                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c566d8();
                                  }
                                }
                              }
                              goto LAB_10349c1e0;
                            }
                          }
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c55db4();
                        }
                        goto LAB_10349c1e0;
                      }
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c59650();
                    goto LAB_10349c1e0;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c59654();
              }
            }
          }
        }
      }
      goto LAB_10349c1e0;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_10349c1e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10349c7ec; end: 10349c897; -[SCSponsoredLensCTAARBarViewEntryPoint setValue:forIvarName:] */

void FUN_10349c7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10349c14c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10349c898; end: 10349c9fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349c898(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f72a80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f72a88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f72a90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f72a98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f72aa0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f72aa8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f72ab0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f72ab8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f72ac0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f72ac8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f72ad0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f72ad8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f72ae0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f72ae8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f72af0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10349c9fc; end: 10349ca1b; -[SCSponsoredLensCTAARBarViewEntryPoint init] */

void FUN_10349c9fc(void)

{
  FUN_10349c898();
  return;
}



/* Entry: 10349ca1c; end: 10349ca4f;  */

void FUN_10349ca1c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10349ca50; end: 10349cb57; -[SCSponsoredLensCTAARBarViewEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349ca50(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f72a80);
  func_0x000107c61610(param_1 + _DAT_112f72a88);
  func_0x000107c61610(param_1 + _DAT_112f72a90);
  func_0x000107c61610(param_1 + _DAT_112f72a98);
  func_0x000107c61610(param_1 + _DAT_112f72aa0);
  func_0x000107c61610(param_1 + _DAT_112f72aa8);
  func_0x000107c61610(param_1 + _DAT_112f72ab0);
  func_0x000107c61610(param_1 + _DAT_112f72ab8);
  func_0x000107c61610(param_1 + _DAT_112f72ac0);
  func_0x000107c61610(param_1 + _DAT_112f72ac8);
  func_0x000107c61610(param_1 + _DAT_112f72ad0);
  func_0x000107c61610(param_1 + _DAT_112f72ad8);
  func_0x000107c61610(param_1 + _DAT_112f72ae0);
  func_0x000107c61610(param_1 + _DAT_112f72ae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f72af0));
  return;
}



/* Entry: 10349cb58; end: 10349cb77;  */

void FUN_10349cb58(void)

{
  func_0x000107c61168(&PTR_PTR_1128de2d0);
  return;
}



/* Entry: 10349cb78; end: 10349cc0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349cb78(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f72b20) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10349cc10; end: 10349cc6f; -[_TtC36SponsoredLensCameraAnalyticsServices52SCMainCameraScopedSponsoredLensCameraHeatMapServices init] */

void FUN_10349cc10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensCameraAnalyticsServices.SCMainCameraScopedSponsoredLensCameraHeatMapServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10349cc3c);
  (*pcVar1)();
}



/* Entry: 10349cc70; end: 10349cc7f; -[_TtC36SponsoredLensCameraAnalyticsServices52SCMainCameraScopedSponsoredLensCameraHeatMapServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349cc70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f72b20));
  return;
}



/* Entry: 10349cc80; end: 10349cd07;  */

void FUN_10349cc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 10349cd08; end: 10349cd9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349cd08(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f72c08) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10349cda0; end: 10349cdff; -[SponsoredLensCameraHeatMapServices init] */

void FUN_10349cda0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensCameraAnalyticsServices.SponsoredLensCameraHeatMapServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10349cdcc);
  (*pcVar1)();
}



/* Entry: 10349ce00; end: 10349ce0f; -[SponsoredLensCameraHeatMapServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10349ce00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f72c08));
  return;
}



/* Entry: 10349ce10; end: 10349ce73;  */

void FUN_10349ce10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_6;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  return;
}



/* Entry: 10349ce74; end: 10349ce87;  */

void FUN_10349ce74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_6;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  return;
}



/* Entry: 10349ce88; end: 10349d00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10349ce88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4b27c();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c5d2e0();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_113083868);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11302bac8);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = &UNK_11065c250;
  func_0x000107c613fc(&UNK_11065c250,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  *(undefined8 *)(puVar3 + 0x30) = uVar6;
  *(undefined8 *)(puVar3 + 0x38) = uVar9;
  func_0x0001000285a8(0x112f72c38,&UNK_10dbcdfe0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar9);
  func_0x000107c615f4(uVar7,2);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar6);
  pcVar4 = FUN_10349d154;
  func_0x0001000bdd8c(FUN_10349d154,puVar3);
  pcVar5 = pcVar4;
  func_0x0001000bf56c();
  uVar6 = 0;
  func_0x000103ed6690(0);
  func_0x000107c610f8();
  func_0x000103ed65d4(pcVar5,uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c615e8(uVar7);
  func_0x000107c61574(pcVar4);
  return pcVar5;
}



/* Entry: 10349d00c; end: 10349d153;  */

/* WARNING: Possible PIC construction at 0x00010349d0f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010349d0fc) */

void FUN_10349d00c(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_3 != 0) {
      lVar1 = 0;
      func_0x00010349e640();
      lVar2 = lVar1;
      func_0x000107c613fc();
      func_0x000107c61614(lVar2 + 0x18,0);
      *(undefined **)(lVar2 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined8 *)(lVar2 + 0x10) = param_4;
      ppuStack_68 = &PTR_DAT_11065c310;
      lVar3 = 0;
      alStack_88[0] = lVar2;
      lStack_70 = lVar1;
      func_0x00010349df20();
      func_0x000107c613fc();
      *(long *)(lVar3 + 0x10) = param_2;
      *(undefined8 *)(lVar3 + 0x18) = param_5;
      *(undefined8 *)(lVar3 + 0x20) = param_6;
      FUN_10349d2b4(alStack_88,lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x50) = param_7;
      *(long *)(lVar3 + 0x58) = param_3;
      *param_1 = lVar3;
      func_0x000107c615f0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)(param_5);
      return;
    }
    func_0x000107c615e8(param_2);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10349d154; end: 10349d163;  */

/* WARNING: Possible PIC construction at 0x00010349d0f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010349d0fc) */

void FUN_10349d154(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar7 = 0;
      func_0x00010349e640();
      lVar8 = lVar7;
      func_0x000107c613fc();
      func_0x000107c61614(lVar8 + 0x18,0);
      *(undefined **)(lVar8 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined8 *)(lVar8 + 0x10) = uVar1;
      ppuStack_68 = &PTR_DAT_11065c310;
      lVar9 = 0;
      alStack_88[0] = lVar8;
      lStack_70 = lVar7;
      func_0x00010349df20();
      func_0x000107c613fc();
      *(long *)(lVar9 + 0x10) = lVar5;
      *(undefined8 *)(lVar9 + 0x18) = uVar3;
      *(undefined8 *)(lVar9 + 0x20) = uVar2;
      FUN_10349d2b4(alStack_88,lVar9 + 0x28);
      *(undefined8 *)(lVar9 + 0x50) = uVar4;
      *(long *)(lVar9 + 0x58) = lVar6;
      *param_1 = lVar9;
      func_0x000107c615f0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)(uVar3);
      return;
    }
    func_0x000107c615e8(lVar5);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10349d164; end: 10349d19f;  */

/* WARNING: Possible PIC construction at 0x00010349d170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349d180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349d190: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010349d184) */
/* WARNING: Removing unreachable block (ram,0x00010349d174) */
/* WARNING: Removing unreachable block (ram,0x00010349d194) */

void FUN_10349d164(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10349d1a0; end: 10349d20b;  */

void FUN_10349d1a0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10349d20c; end: 10349d28f;  */

void FUN_10349d20c(undefined8 param_1)

{
  if (lRam0000000112f72c68 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e76a610);
  return;
}



/* Entry: 10349d290; end: 10349d2b3;  */

void FUN_10349d290(undefined8 *param_1,undefined8 param_2)

{
  FUN_10349ce88();
  *param_1 = param_2;
  return;
}



/* Entry: 10349d2b4; end: 10349d2cb;  */

undefined8 * FUN_10349d2b4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10349d2cc; end: 10349d38f;  */

void FUN_10349d2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_7;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  return;
}



/* Entry: 10349d390; end: 10349d51f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10349d390(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4b27c();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c5d2e0();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_113083868);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  func_0x000107c5b1fc();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar5 = &UNK_11065c290;
  func_0x000107c613fc(&UNK_11065c290,0x40,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar2;
  *(undefined8 *)(puVar5 + 0x18) = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar9;
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
  *(undefined8 *)(puVar5 + 0x38) = uVar4;
  func_0x0001000285a8(0x112f72c38,&UNK_10dbcdfe0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar1);
  pcVar6 = FUN_10349d640;
  func_0x0001000bdd8c(FUN_10349d640,puVar5);
  pcVar7 = pcVar6;
  func_0x0001000bf56c();
  uVar8 = 0;
  func_0x000103ed67c8(0);
  func_0x000107c610f8();
  func_0x000103ed670c(pcVar7,uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61574(pcVar6);
  return pcVar7;
}



/* Entry: 10349d520; end: 10349d63f;  */

/* WARNING: Possible PIC construction at 0x00010349d5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349d5f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010349d5e8) */
/* WARNING: Removing unreachable block (ram,0x00010349d5f8) */

void FUN_10349d520(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long alStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_3 != 0) {
      lVar1 = 0;
      func_0x00010349df88();
      lVar2 = lVar1;
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x10) = param_4;
      ppuStack_58 = &PTR_DAT_11065c320;
      lVar3 = 0;
      alStack_78[0] = lVar2;
      lStack_60 = lVar1;
      func_0x00010349df20();
      func_0x000107c613fc();
      *(long *)(lVar3 + 0x10) = param_2;
      *(undefined8 *)(lVar3 + 0x18) = param_5;
      *(undefined8 *)(lVar3 + 0x20) = param_6;
      FUN_10349d2b4(alStack_78,lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x50) = param_7;
      *(long *)(lVar3 + 0x58) = param_3;
      *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)(param_4);
      return;
    }
    func_0x000107c615e8(param_2);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10349d640; end: 10349d64f;  */

/* WARNING: Possible PIC construction at 0x00010349d5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349d5f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010349d5e8) */
/* WARNING: Removing unreachable block (ram,0x00010349d5f8) */

void FUN_10349d640(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long alStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar7 = 0;
      func_0x00010349df88();
      lVar8 = lVar7;
      func_0x000107c613fc();
      *(undefined8 *)(lVar8 + 0x10) = uVar1;
      ppuStack_58 = &PTR_DAT_11065c320;
      lVar9 = 0;
      alStack_78[0] = lVar8;
      lStack_60 = lVar7;
      func_0x00010349df20();
      func_0x000107c613fc();
      *(long *)(lVar9 + 0x10) = lVar5;
      *(undefined8 *)(lVar9 + 0x18) = uVar3;
      *(undefined8 *)(lVar9 + 0x20) = uVar2;
      FUN_10349d2b4(alStack_78,lVar9 + 0x28);
      *(undefined8 *)(lVar9 + 0x50) = uVar4;
      *(long *)(lVar9 + 0x58) = lVar6;
      *param_1 = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
      return;
    }
    func_0x000107c615e8(lVar5);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10349d650; end: 10349d68b;  */

/* WARNING: Possible PIC construction at 0x00010349d65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349d66c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349d67c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010349d670) */
/* WARNING: Removing unreachable block (ram,0x00010349d660) */
/* WARNING: Removing unreachable block (ram,0x00010349d680) */

void FUN_10349d650(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10349d68c; end: 10349d6f7;  */

void FUN_10349d68c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10349d6f8; end: 10349d77b;  */

void FUN_10349d6f8(undefined8 param_1)

{
  if (lRam0000000112f72d60 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e76a674);
  return;
}



/* Entry: 10349d77c; end: 10349d79f;  */

void FUN_10349d77c(undefined8 *param_1,undefined8 param_2)

{
  FUN_10349d390();
  *param_1 = param_2;
  return;
}



/* Entry: 10349d7a0; end: 10349d903;  */

/* WARNING: Possible PIC construction at 0x00010349d850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349d89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010349d8e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010349d8a0) */
/* WARNING: Removing unreachable block (ram,0x00010349d854) */
/* WARNING: Removing unreachable block (ram,0x00010349d8ec) */

void FUN_10349d7a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112f4beb8,&UNK_10db9bc80);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c4b28c(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar1 = uVar2;
  func_0x000100759c94(uVar2,0);
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  func_0x000100c70ba8(0);
  func_0x000100759f5c(0,1,FUN_10349d904,0,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10349d904; end: 10349d92f;  */

void FUN_10349d904(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61174();
  return;
}



/* Entry: 10349d930; end: 10349d99f;  */

void FUN_10349d930(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10349d9a0(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}


