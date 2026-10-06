/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1012670b8; end: 1012670cf;  */

void FUN_1012670b8(void)

{
  long unaff_x20;
  
  FUN_101266714(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1012670d0; end: 1012670df;  */

undefined8 FUN_1012670d0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_28,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000101251f94(uVar1);
  func_0x000107c61574(uStack_28);
  return uVar1;
}



/* Entry: 1012670e0; end: 1012670f7;  */

void FUN_1012670e0(void)

{
  FUN_101266810();
  return;
}



/* Entry: 1012670f8; end: 1012670ff;  */

void FUN_1012670f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101267100; end: 10126714b;  */

void FUN_101267100(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  func_0x000107c61618(unaff_x20 + 0x10);
  return;
}



/* Entry: 10126714c; end: 10126715f;  */

void FUN_10126714c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_1012524a0();
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c451d0();
  func_0x000107c61180();
  if (lVar1 == 0) {
    if (lRam0000000112d6be18 != -1) {
      func_0x000107c61568(0x112d6be18,0x101253e2c);
    }
    func_0x000107c615f0(uRam00000001137ff2a8);
  }
  return;
}



/* Entry: 101267160; end: 10126722b;  */

/* WARNING: Possible PIC construction at 0x0001012671f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012671f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101267160(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d6c940);
  uVar3 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
  puVar2 = PTR_PTR_1126b1008;
  func_0x000107c610f8(PTR_PTR_1126b1008);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c46c0c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10126722c; end: 101267273;  */

undefined8 FUN_10126722c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d6ca28;
  func_0x0001000285a8(0x112d6ca28,&UNK_10d92f678);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101267274; end: 101267293;  */

undefined8 FUN_101267274(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618(lVar1);
  func_0x00010127bb68(uVar2,uVar3,lVar1,*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(lVar1);
  return uVar2;
}



/* Entry: 101267294; end: 1012672c3;  */

void FUN_101267294(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  (**(code **)(unaff_x20 + 0x18))();
  uVar2 = *puVar1;
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1012672c4; end: 1012672cb;  */

void FUN_1012672c4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1012672cc; end: 101267303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012672cc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d6c868);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d6c868) = 0;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101267304; end: 10126731b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101267304(char *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  undefined *puVar12;
  long unaff_x20;
  char *pcVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + _DAT_112d6c8d8) == lVar1) {
      if ((*(byte *)(lVar3 + _DAT_112d6c8d0) & 1) != 0) {
        if (param_1 != (char *)0x0) {
          puVar4 = PTR_PTR_1126a6840;
          func_0x000107c61168(PTR_PTR_1126a6840);
          func_0x000107c6148c(param_1,puVar4);
          if (param_1 != (char *)0x0) {
            func_0x000107c5dbc0();
            func_0x000107c61180();
            if (param_1 != (char *)0x0) {
              func_0x000107c41848();
              func_0x000107c615e8(param_1);
            }
          }
        }
        func_0x000107c61170(lVar3);
        return;
      }
      if ((param_2 == 0) && (param_1 != (char *)0x0)) {
        puVar4 = PTR_PTR_1126a6840;
        func_0x000107c61168(PTR_PTR_1126a6840);
        pcVar5 = param_1;
        func_0x000107c6148c(param_1,puVar4);
        lVar9 = _DAT_112d6c850;
        if (pcVar5 != (char *)0x0) {
          pcVar13 = *(char **)(lVar3 + _DAT_112d6c850);
          if (pcVar13 == (char *)0x0) {
            func_0x000107c61174(param_1);
          }
          else {
            func_0x000107c61174(param_1);
            if (pcVar5 != pcVar13) {
              func_0x000107c4ff34(pcVar13);
              pcVar13 = *(char **)(lVar3 + lVar9);
            }
          }
          *(char **)(lVar3 + lVar9) = pcVar5;
          func_0x000107c61174(param_1);
          func_0x000107c61170(pcVar13);
          func_0x000107c61174(param_1);
          uVar7 = 0xd000000000000011;
          func_0x000107c5fadc(0xd000000000000011,0x800000010ef32010);
          func_0x000107c520f4(pcVar5);
          func_0x000107c61170(uVar7);
          FUN_1012651e8(pcVar5);
          func_0x000107c5a050(pcVar5);
          func_0x000107c61174();
          lVar9 = lVar3;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar9 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012651d8);
            (*pcVar2)();
          }
          func_0x000107c3d89c();
          func_0x000107c61170(lVar9);
          lVar8 = lVar3;
          func_0x000107c5de64();
          func_0x000107c61180();
          lVar9 = 0;
          if (lVar8 != 0) {
            lVar9 = 0x5f64656966696e75;
            func_0x000107c5fadc(0x5f64656966696e75,0xef656c69666f7270);
            func_0x000107c520f4(lVar8);
            func_0x000107c61170(lVar8);
            func_0x000107c61170();
          }
          func_0x0001008478a8();
          func_0x000107c613fc();
          *(undefined8 *)(lVar9 + 0x18) = 9;
          *(undefined8 *)(lVar9 + 0x10) = 4;
          pcVar13 = pcVar5;
          func_0x000107c4acb0();
          func_0x000107c61180();
          lVar8 = lVar3;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012651dc);
            (*pcVar2)();
          }
          lVar10 = lVar8;
          func_0x000107c4acb0();
          func_0x000107c61180();
          func_0x000107c61170(lVar8);
          pcVar11 = pcVar13;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(pcVar13);
          func_0x000107c61170(lVar10);
          *(char **)(lVar9 + 0x20) = pcVar11;
          pcVar13 = pcVar5;
          func_0x000107c5ce8c();
          func_0x000107c61180();
          lVar8 = lVar3;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012651e0);
            (*pcVar2)();
          }
          lVar10 = lVar8;
          func_0x000107c5ce8c();
          func_0x000107c61180();
          func_0x000107c61170(lVar8);
          pcVar11 = pcVar13;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(pcVar13);
          func_0x000107c61170(lVar10);
          *(char **)(lVar9 + 0x28) = pcVar11;
          pcVar13 = pcVar5;
          func_0x000107c5cbe4();
          func_0x000107c61180();
          lVar8 = lVar3;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012651e4);
            (*pcVar2)();
          }
          lVar10 = lVar8;
          func_0x000107c5cbe4();
          func_0x000107c61180();
          func_0x000107c61170(lVar8);
          pcVar11 = pcVar13;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(pcVar13);
          func_0x000107c61170(lVar10);
          *(char **)(lVar9 + 0x30) = pcVar11;
          pcVar13 = pcVar5;
          func_0x000107c3ec1c();
          func_0x000107c61180();
          lVar8 = lVar3;
          func_0x000107c5de64();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          if (lVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012651e8);
            (*pcVar2)();
          }
          puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
          lVar10 = lVar8;
          func_0x000107c3ec1c(lVar8);
          func_0x000107c61180();
          func_0x000107c61170(lVar8);
          pcVar11 = pcVar13;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(pcVar13);
          func_0x000107c61170(lVar10);
          *(char **)(lVar9 + 0x38) = pcVar11;
          uVar7 = 0;
          FUN_10126736c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
          lVar8 = lVar9;
          func_0x000107c5fc48(lVar9,uVar7);
          func_0x000107c61574(lVar9);
          func_0x000107c3d048(puVar4);
          func_0x000107c61170();
          FUN_101261710();
          lVar9 = lVar8;
          func_0x0001008479c8();
          func_0x000107c613fc();
          *(undefined8 *)(lVar9 + 0x18) = 3;
          *(undefined8 *)(lVar9 + 0x10) = 1;
          *(char **)(lVar9 + 0x20) = pcVar5;
          uVar7 = 0;
          FUN_10126736c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
          func_0x000107c61174(param_1);
          lVar10 = lVar9;
          func_0x000107c5fc48(lVar9,uVar7);
          func_0x000107c61574(lVar9);
          func_0x000107c497d0(lVar8);
          func_0x000107c615e8(lVar8);
          func_0x000107c61170(lVar10);
          func_0x000107c5dbc0();
          func_0x000107c61180();
          func_0x000107c61170(param_1);
          if (pcVar5 == (char *)0x0) {
            func_0x000107c61170(lVar3);
            func_0x000107c61170(param_1);
            return;
          }
          puVar4 = &UNK_11039a0b0;
          func_0x000107c613fc(&UNK_11039a0b0,0x18,7);
          func_0x000107c61614(puVar4 + 0x10,lVar3);
          puVar12 = &UNK_11039a418;
          func_0x000107c613fc(&UNK_11039a418,0x20,7);
          *(undefined **)(puVar12 + 0x10) = puVar4;
          *(long *)(puVar12 + 0x18) = lVar1;
          uStack_88 = 0x10126730c;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000b0c7c;
          puStack_90 = &UNK_11039a430;
          ppuVar6 = &puStack_a8;
          puStack_80 = puVar12;
          func_0x000107c60bc4(ppuVar6);
          func_0x000107c61574(puStack_80);
          func_0x000107c5e080(pcVar5);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(param_1);
          func_0x000107c60bd0(ppuVar6);
          param_1 = pcVar5;
          goto LAB_101264ce0;
        }
      }
      puVar4 = (undefined *)0x112d6ca30;
      func_0x0001000285a8(0x112d6ca30,&UNK_10d92f680);
      uVar7 = 0x112d6ca38;
      puStack_a8 = puVar4;
      func_0x0001000285a8(0x112d6ca38,&UNK_10d92f688);
      func_0x000107c5fb18(&puStack_a8,uVar7);
      func_0x000107c6142c(uVar7);
      param_1 = "dismiss()";
      func_0x0001000c10c0("dismiss()");
      func_0x000107c61180();
      puVar4 = &UNK_11039a0b0;
      func_0x000107c613fc(&UNK_11039a0b0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar3);
      uStack_88 = 0x101267430;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11039a3e0;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar4;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_80);
      func_0x000107c4e524(param_1);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar3);
      goto LAB_101264ce0;
    }
    func_0x000107c61170(lVar3);
  }
  if (param_1 == (char *)0x0) {
    return;
  }
  puVar4 = PTR_PTR_1126a6840;
  func_0x000107c61168(PTR_PTR_1126a6840);
  func_0x000107c6148c(param_1,puVar4);
  if (param_1 == (char *)0x0) {
    return;
  }
  func_0x000107c5dbc0();
  func_0x000107c61180();
  if (param_1 == (char *)0x0) {
    return;
  }
  func_0x000107c41848();
LAB_101264ce0:
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 10126731c; end: 101267363;  */

void FUN_10126731c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101267364; end: 10126736b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101267364(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
  }
  else {
    func_0x000107c610f8(PTR_PTR_1126b3e88);
    func_0x000107c4887c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10126736c; end: 1012673ab;  */

void FUN_10126736c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1012673ac; end: 101267437;  */

void FUN_1012673ac(long param_1,long param_2)

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



/* Entry: 101267438; end: 10126745f;  */

void FUN_101267438(void)

{
  FUN_101266ab0();
  return;
}



/* Entry: 101267460; end: 10126759f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101267460(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  lVar4 = *(long *)(unaff_x20 + _DAT_112d6ca48);
  if (lVar4 != 0) {
    pcStack_40 = FUN_10126768c;
    uStack_38 = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100ab47f8;
    puStack_48 = &UNK_11039a548;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c615f0(lVar4);
    func_0x000107c4f018();
    func_0x000107c60bd0(ppuVar1);
    func_0x000107c4fc3c(lVar4);
    func_0x000107c615e8(lVar4);
    return;
  }
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112d6ca50) + _DAT_112fde9c8);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s_attachUI__1125a0c08,param_1);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d6ca58);
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef32070);
  func_0x000108c7a5d0(uVar3,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1012675a0; end: 1012675eb;  */

void FUN_1012675a0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d6ca60,&UNK_10d92f690);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1012676ac,param_1);
  return;
}



/* Entry: 1012675ec; end: 10126764b;  */

void FUN_1012675ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101267970();
  func_0x000107c610f8();
  uVar1 = uStack_38;
  FUN_1012677fc();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10126764c; end: 10126768b;  */

undefined8 FUN_10126764c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_1012677fc(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10126768c; end: 1012676b3;  */

void FUN_10126768c(void)

{
  return;
}



/* Entry: 1012676b4; end: 1012676b7; -[_TtC24MyProfile3Implementation23MyProfile3DeckContainer onUIDidEnterHierarchy:appearance:] */

void FUN_1012676b4(void)

{
  return;
}



/* Entry: 1012676b8; end: 1012676bb; -[_TtC24MyProfile3Implementation23MyProfile3DeckContainer onUIWillAppear:appearance:] */

void FUN_1012676b8(void)

{
  return;
}



/* Entry: 1012676bc; end: 1012676bf; -[_TtC24MyProfile3Implementation23MyProfile3DeckContainer onUIDidAppear:appearance:] */

void FUN_1012676bc(void)

{
  return;
}



/* Entry: 1012676c0; end: 1012676c3; -[_TtC24MyProfile3Implementation23MyProfile3DeckContainer onUIWillDisappear:appearance:] */

void FUN_1012676c0(void)

{
  return;
}



/* Entry: 1012676c4; end: 1012676c7; -[_TtC24MyProfile3Implementation23MyProfile3DeckContainer onUIDidDisappear:appearance:] */

void FUN_1012676c4(void)

{
  return;
}



/* Entry: 1012676c8; end: 101267753; -[_TtC24MyProfile3Implementation23MyProfile3DeckContainer onUIDidExitHierarchy:appearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012676c8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fde9e0;
  lVar2 = *(long *)(param_1 + _DAT_112d6ca50);
  func_0x000107c61428(lVar2 + _DAT_112fde9e0,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61174(param_1);
    func_0x000107c41b30(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 101267754; end: 1012677b3; -[_TtC24MyProfile3Implementation23MyProfile3DeckContainer init] */

void FUN_101267754(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyProfile3Implementation.MyProfile3DeckContainer",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101267780);
  (*pcVar1)();
}



/* Entry: 1012677b4; end: 1012677fb; -[_TtC24MyProfile3Implementation23MyProfile3DeckContainer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012677d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012677d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012677b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6ca50));
  return;
}



/* Entry: 1012677fc; end: 10126795f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012677fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  func_0x000107c614f0();
  lVar3 = _DAT_112d6ca58;
  puVar1 = PTR_PTR_1126b0c28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  *(long *)(unaff_x20 + _DAT_112d6ca50) = param_1;
  lVar3 = *(long *)(param_1 + _DAT_112fde9d8);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
    lVar4 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126b0320;
    func_0x000107c61168(PTR_PTR_1126b0320);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar3);
    func_0x000107c4d044(puVar1);
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5e734();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    puVar1 = puVar2;
    func_0x000107c5e710(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = puVar1;
    func_0x000107c5e50c(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    lVar4 = lVar3;
    func_0x000107c4d048();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar2);
  }
  *(long *)(unaff_x20 + _DAT_112d6ca48) = lVar4;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101267960; end: 10126796f;  */

undefined1  [16] FUN_101267960(void)

{
  return ZEXT816(0x11039a580);
}



/* Entry: 101267970; end: 10126798f;  */

void FUN_101267970(void)

{
  func_0x000107c61168(&PTR_PTR_1127c0418);
  return;
}



/* Entry: 101267990; end: 101267a43; -[_TtC24MyProfile3Implementation30MyProfile3NavigationController viewDidLoad] */

void FUN_101267990(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  lVar3 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010d92f6d0);
    func_0x000107c520f4(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101267a44);
  (*pcVar2)();
}



/* Entry: 101267a44; end: 101267a4b; -[_TtC24MyProfile3Implementation30MyProfile3NavigationController pageViewName] */

undefined8 FUN_101267a44(void)

{
  return 0xd8;
}



/* Entry: 101267a4c; end: 101267a4f; -[_TtC24MyProfile3Implementation30MyProfile3NavigationController preferredStatusBarStyle] */

undefined8 FUN_101267a4c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 101267a50; end: 101267a57; -[_TtC24MyProfile3Implementation30MyProfile3NavigationController prefersStatusBarHidden] */

undefined8 FUN_101267a50(void)

{
  return 0;
}



/* Entry: 101267a58; end: 101267a5f; -[_TtC24MyProfile3Implementation30MyProfile3NavigationController preferredStatusBarUpdateAnimation] */

undefined8 FUN_101267a58(void)

{
  return 1;
}



/* Entry: 101267a60; end: 101267a67; -[_TtC24MyProfile3Implementation30MyProfile3NavigationController sc_handlesStatusBarDuringModalDismissal] */

undefined8 FUN_101267a60(void)

{
  return 1;
}



/* Entry: 101267a68; end: 101267abb; -[_TtC24MyProfile3Implementation30MyProfile3NavigationController initWithNavigationBarClass:toolbarClass:] */

void FUN_101267a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_initWithNavigationBarClass_toolb_1125e9310,param_3,param_4);
  return;
}



/* Entry: 101267abc; end: 101267aff; -[_TtC24MyProfile3Implementation30MyProfile3NavigationController initWithRootViewController:] */

void FUN_101267abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithRootViewController__1125edab8,param_3);
  return;
}



/* Entry: 101267b00; end: 101267bb7; -[_TtC24MyProfile3Implementation30MyProfile3NavigationController initWithNibName:bundle:] */

undefined1 * FUN_101267b00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
  uStack_50 = param_1;
  uStack_48 = uVar1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 101267bb8; end: 101267c37; -[_TtC24MyProfile3Implementation30MyProfile3NavigationController initWithCoder:] */

undefined1 * FUN_101267bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 101267c38; end: 101267c8b;  */

void FUN_101267c38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101267c8c; end: 101267cf7; -[SCProfile3CollectionBridge numberOfSectionsInCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101267c8c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  lVar2 = _DAT_112d6caf0;
  func_0x000107c61428(param_1 + _DAT_112d6caf0,auStack_38,0,0);
  uVar3 = *(ulong *)(param_1 + lVar2);
  if (uVar3 >> 0x3e != 0) {
    uVar1 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar1 = uVar3;
    }
    func_0x000107c60480(uVar1);
  }
  return;
}



/* Entry: 101267cf8; end: 101267d57; -[SCProfile3CollectionBridge collectionView:numberOfItemsInSection:] */

undefined8
FUN_101267cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101268274(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return param_4;
}



/* Entry: 101267d58; end: 101267e1b; -[SCProfile3CollectionBridge collectionView:cellForItemAtIndexPath:] */

void FUN_101267d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  puVar2 = puVar3;
  FUN_10126843c(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101267e1c; end: 10126817f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101267e1c(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  
  if (param_1 == 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112d6cad0);
    func_0x000107c5fadc(param_3,param_4);
    uVar2 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010ef320d0);
    uVar3 = uVar2;
    func_0x000107c5efd4();
    func_0x000107c417e4(lVar6);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    return lVar6;
  }
  lVar6 = param_1;
  func_0x000107c615f0();
  func_0x000107c51b6c();
  lVar5 = param_1;
  if (lVar6 == 2) {
    FUN_10126ce74();
    if ((param_2 & 1) != 0) {
      lVar6 = param_3;
      func_0x000107c5fadc(param_3,param_4);
      lVar4 = lVar6;
      func_0x000107c5efec();
      if (lVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101268180);
        (*pcVar1)();
      }
      func_0x000107c5dee0();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar5 != 0) goto LAB_101268060;
    }
    lVar6 = *(long *)(unaff_x20 + _DAT_112d6cad0);
    func_0x000107c5fadc(param_3,param_4);
    uVar2 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010ef320d0);
    uVar3 = uVar2;
    func_0x000107c5efd4();
    func_0x000107c417e4(lVar6);
  }
  else if (lVar6 == 1) {
    lVar6 = param_3;
    func_0x000107c5fadc(param_3,param_4);
    lVar4 = lVar6;
    func_0x000107c5efec();
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10126817c);
      (*pcVar1)();
    }
    func_0x000107c5dee0();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar5 != 0) {
LAB_101268060:
      func_0x000107c615e8(param_1);
      return lVar5;
    }
    lVar6 = *(long *)(unaff_x20 + _DAT_112d6cad0);
    func_0x000107c5fadc(param_3,param_4);
    uVar2 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010ef320d0);
    uVar3 = uVar2;
    func_0x000107c5efd4();
    func_0x000107c417e4(lVar6);
  }
  else if (lVar6 == 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112d6cad0);
    func_0x000107c5fadc(param_3,param_4);
    uVar2 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010ef320d0);
    uVar3 = uVar2;
    func_0x000107c5efd4();
    func_0x000107c417e4(lVar6);
  }
  else {
    lVar6 = *(long *)(unaff_x20 + _DAT_112d6cad0);
    func_0x000107c5fadc(param_3,param_4);
    uVar2 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010ef320d0);
    uVar3 = uVar2;
    func_0x000107c5efd4();
    func_0x000107c417e4(lVar6);
  }
  func_0x000107c61180();
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  return lVar6;
}



/* Entry: 101268180; end: 101268273; -[SCProfile3CollectionBridge collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_101268180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec(param_4);
  func_0x000107c5efdc(puVar2,param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101268834(param_4,param_2,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 101268274; end: 10126843b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101268274(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112d6caf0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_58,0,0);
  uVar4 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar3 = uVar4;
    }
    func_0x000107c60480();
  }
  if ((long)param_1 < (long)uVar3) {
    func_0x000107c61428(unaff_x20 + lVar1,auStack_70,0x20,0);
    uVar4 = *(ulong *)(unaff_x20 + lVar1);
    if ((uVar4 & 0xc000000000000001) == 0) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101268424);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101268434);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(uVar4 + param_1 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar4 = param_1;
      FUN_10125ff50();
    }
    func_0x000107c614a8(auStack_70);
    lVar7 = uVar4 + _DAT_112d6cd38;
    func_0x000107c61428(lVar7,auStack_70,0,0);
    lVar7 = *(long *)(lVar7 + 0x20);
    func_0x000107c61434(lVar7);
    func_0x000107c61170(uVar4);
    uVar6 = *(undefined8 *)(lVar7 + 0x10);
    func_0x000107c6142c(lVar7);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_88,0x20,0);
    uVar4 = *(ulong *)(unaff_x20 + lVar1);
    if ((uVar4 & 0xc000000000000001) == 0) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101268438);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126843c);
        (*pcVar2)();
      }
      param_1 = *(ulong *)(uVar4 + param_1 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      FUN_10125ff50();
    }
    func_0x000107c614a8(auStack_88);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112d6cd48);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(param_1);
    func_0x000107c41254(uVar5);
    func_0x000107c615e8(uVar5);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 10126843c; end: 101268833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10126843c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  undefined1 *puVar11;
  code *pcVar12;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar10 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_90 + -extraout_x8;
  func_0x000107c5eff4();
  lVar2 = _DAT_112d6caf0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_78,0,0);
  uVar9 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar9 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    lVar1 = _DAT_1137ff2b8;
  }
  else {
    uVar3 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar3 = uVar9;
    }
    func_0x000107c60480();
    lVar1 = _DAT_1137ff2b8;
  }
  _DAT_1137ff2b8 = lVar1;
  if ((long)uVar3 <= lVar10) {
    lVar10 = *(long *)(unaff_x20 + _DAT_112d6cad0);
    uVar4 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010ef32100);
    uVar8 = uVar4;
    func_0x000107c5efd4();
    func_0x000107c417e0(lVar10);
LAB_1012687dc:
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar8);
    return lVar10;
  }
  if ((*(byte *)(unaff_x20 + lVar1) & 1) != 0) {
    lVar10 = *(long *)(unaff_x20 + _DAT_112d6cad0);
    uVar4 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010ef32100);
    uVar8 = uVar4;
    func_0x000107c5efd4();
    func_0x000107c417e0(lVar10);
    goto LAB_1012687dc;
  }
  func_0x000107c5eff4();
  func_0x000107c61428(unaff_x20 + lVar2,auStack_90,0x20,0);
  uVar9 = *(ulong *)(unaff_x20 + lVar2);
  if ((uVar9 & 0xc000000000000001) == 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x101268828);
      (*pcVar12)();
    }
    if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x101268830);
      (*pcVar12)();
    }
    uVar3 = *(ulong *)(uVar9 + uVar3 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    FUN_10125ff50();
  }
  func_0x000107c614a8(auStack_90);
  *(undefined1 *)(unaff_x20 + lVar1) = 1;
  lVar5 = 0;
  func_0x000107c5eff8();
  lVar10 = *(long *)(lVar5 + -8);
  (**(code **)(lVar10 + 0x10))(puVar11,param_1,lVar5);
  pcVar12 = *(code **)(lVar10 + 0x38);
  (*pcVar12)(puVar11,0,1,lVar5);
  lVar2 = _DAT_1137ff2b0;
  func_0x000107c61428(unaff_x20 + _DAT_1137ff2b0,auStack_90,0x21,0);
  FUN_101268c10(puVar11,unaff_x20 + lVar2);
  func_0x000107c614a8(auStack_90);
  lVar10 = _DAT_112d6cd48;
  lVar6 = *(long *)(uVar3 + _DAT_112d6cd48);
  func_0x000107c4d914();
  if (lVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10126882c);
    (*pcVar12)();
  }
  lVar7 = lVar6;
  func_0x000107c5efec();
  if (lVar7 < lVar6) {
    lVar6 = *(long *)(uVar3 + lVar10);
    lVar10 = lVar6;
    func_0x000107c615f0();
    func_0x000107c5efec();
    if (lVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x101268834);
      (*pcVar12)();
    }
    lVar10 = lVar6;
    func_0x000107c3f72c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    if (lVar10 != 0) goto LAB_101268728;
    lVar10 = *(long *)(unaff_x20 + _DAT_112d6cad0);
    uVar4 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010ef32100);
    uVar8 = uVar4;
    func_0x000107c5efd4();
    func_0x000107c417e0(lVar10);
  }
  else {
    lVar10 = *(long *)(unaff_x20 + _DAT_112d6cad0);
    uVar4 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010ef32100);
    uVar8 = uVar4;
    func_0x000107c5efd4();
    func_0x000107c417e0(lVar10);
  }
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
LAB_101268728:
  func_0x000107c61170(uVar3);
  (*pcVar12)(puVar11,1,1,lVar5);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_90,0x21,0);
  FUN_101268c10(puVar11,unaff_x20 + lVar2);
  func_0x000107c614a8(auStack_90);
  *(undefined1 *)(unaff_x20 + lVar1) = 0;
  return lVar10;
}



/* Entry: 101268834; end: 101268c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101268834(ulong param_1,undefined *param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar10 = param_1;
  func_0x000107c5eff4();
  lVar1 = _DAT_112d6caf0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_68,0,0);
  uVar9 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar9 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar3 = uVar9;
    }
    func_0x000107c60480();
  }
  if ((long)uVar3 <= (long)uVar10) {
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112d6cad0);
    func_0x000107c5fadc(param_1,param_2);
    uVar6 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010ef320d0);
    uVar7 = uVar6;
    func_0x000107c5efd4();
    func_0x000107c417e4(uVar3);
    func_0x000107c61180();
    goto LAB_101268bc0;
  }
  func_0x000107c5eff4();
  func_0x000107c61428(unaff_x20 + lVar1,auStack_80,0x20,0);
  puVar8 = *(undefined **)(unaff_x20 + lVar1);
  if (((ulong)puVar8 & 0xc000000000000001) == 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101268c08);
      (*pcVar2)();
    }
    if (*(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101268c0c);
      (*pcVar2)();
    }
    uVar3 = *(ulong *)(puVar8 + uVar3 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    FUN_10125ff50();
  }
  func_0x000107c614a8(auStack_80);
  uVar9 = *(ulong *)(uVar3 + _DAT_112d6cd48);
  func_0x000107c615f0(uVar9);
  func_0x000107c61170(uVar3);
  uVar10 = uVar9;
  func_0x000107c4d914();
  if (uVar10 == 0) {
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112d6cad0);
    func_0x000107c5fadc(param_1,param_2);
    uVar6 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010ef320d0);
    uVar7 = uVar6;
    func_0x000107c5efd4();
    func_0x000107c417e4(uVar3);
    func_0x000107c61180();
LAB_101268b38:
    func_0x000107c615e8(uVar9);
LAB_101268bc0:
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    return uVar3;
  }
  uVar10 = uVar9;
  func_0x000107c50648();
  if (((int)uVar10 == 0) ||
     (uVar10 = uVar9, puVar8 = PTR_s_respondsToSelector__11262c7e0,
     func_0x000107c61150(uVar9,PTR_s_respondsToSelector__11262c7e0,
                         PTR_s_supplementaryViewProvider_1126765b8), (uVar10 & 1) == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = uVar9;
    func_0x000107c5c434();
    func_0x000107c61180();
  }
  uVar4 = *(ulong *)PTR__UICollectionElementKindSectionHeader_110345b00;
  func_0x000107c5faec();
  uVar3 = uVar10;
  if ((param_1 == uVar4) && (param_2 == puVar8)) {
    func_0x000107c6142c(puVar8);
  }
  else {
    uVar5 = param_1;
    func_0x000107c605b8(param_1,param_2,uVar4,puVar8,0);
    func_0x000107c6142c(puVar8);
    if ((uVar5 & 1) == 0) {
      if (uVar10 != 0) {
        func_0x000107c615f0(uVar10);
        uVar4 = param_1;
        func_0x000107c5fadc(param_1,param_2);
        uVar5 = uVar4;
        func_0x000107c5efec();
        if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101268c10);
          (*pcVar2)();
        }
        func_0x000107c5dee0();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        func_0x000107c615e8(uVar10);
        if (uVar3 != 0) goto LAB_101268a58;
      }
      uVar3 = *(ulong *)(unaff_x20 + _DAT_112d6cad0);
      func_0x000107c5fadc(param_1,param_2);
      uVar6 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010ef320d0);
      uVar7 = uVar6;
      func_0x000107c5efd4();
      func_0x000107c417e4(uVar3);
      func_0x000107c61180();
      func_0x000107c615e8(uVar9);
      uVar9 = uVar10;
      goto LAB_101268b38;
    }
  }
  func_0x000107c5eff4();
  FUN_101267e1c(uVar10,puVar8,param_1,param_2,param_3);
LAB_101268a58:
  func_0x000107c615e8(uVar9);
  func_0x000107c615e8(uVar10);
  return uVar3;
}



/* Entry: 101268c10; end: 101268c5f;  */

undefined8 FUN_101268c10(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101268c60; end: 101268d57; -[SCProfile3CollectionBridge collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_101268c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_7);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  FUN_10126a108(param_5,puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 101268d58; end: 101268e03; -[SCProfile3CollectionBridge collectionView:layout:insetForSectionAtIndex:] */

undefined8
FUN_101268d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  FUN_10126a2dc(param_4,param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101268e04; end: 101268e8f; -[SCProfile3CollectionBridge collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

undefined8
FUN_101268e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  FUN_10126a468(param_4,param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101268e90; end: 101268f1b; -[SCProfile3CollectionBridge collectionView:layout:minimumInteritemSpacingForSectionAtIndex:] */

undefined8
FUN_101268e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x00010126a5c8(param_4,param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101268f1c; end: 10126918f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101268f1c(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c5eff4();
  lVar1 = _DAT_112d6caf0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_78,0,0);
  uVar8 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar8 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar3 = uVar8;
    }
    func_0x000107c60480();
  }
  if (param_1 < (long)uVar3) {
    uVar4 = 0;
    FUN_101277678(0);
    uVar8 = param_2;
    func_0x000107c61480(param_2,uVar4);
    if (uVar8 == 0) {
      puVar5 = PTR_PTR_1126b4160;
      func_0x000107c61168(PTR_PTR_1126b4160);
      uVar3 = param_2;
      func_0x000107c6148c(param_2,puVar5);
      uVar8 = 0;
      if (uVar3 != 0) {
        func_0x000107c61174();
        uVar6 = param_2;
        func_0x00010126cd90();
        uVar8 = param_2;
        if (uVar6 != 0) {
          puVar5 = &UNK_11039a5a0;
          func_0x000107c613fc(&UNK_11039a5a0,0x18,7);
          func_0x000107c61614(puVar5 + 0x10,uVar6);
          pcStack_88 = FUN_10126a728;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1001de374;
          puStack_90 = &UNK_11039a5b8;
          ppuVar7 = &puStack_a8;
          puStack_80 = puVar5;
          func_0x000107c60bc4(ppuVar7);
          func_0x000107c61574(puStack_80);
          func_0x000107c55780(uVar3);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c61170(param_2);
          uVar8 = uVar6;
        }
        func_0x000107c61170();
      }
      func_0x000107c5eff4();
      func_0x000107c61428(unaff_x20 + lVar1,&puStack_a8,0x20,0);
      uVar3 = *(ulong *)(unaff_x20 + lVar1);
      if ((uVar3 & 0xc000000000000001) == 0) {
        if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101269188);
          (*pcVar2)();
        }
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10126918c);
          (*pcVar2)();
        }
        uVar8 = *(ulong *)(uVar3 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        FUN_10125ff50();
      }
      func_0x000107c614a8(&puStack_a8);
      uVar3 = *(ulong *)(uVar8 + _DAT_112d6cd48);
      func_0x000107c615f0(uVar3);
      func_0x000107c61170(uVar8);
      uVar8 = uVar3;
      func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_collectionView_willDisplayCell_a_1125adb08);
      if ((uVar8 & 1) != 0) {
        func_0x000107c5efec();
        if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101269190);
          (*pcVar2)();
        }
        func_0x000107c3fd98(uVar3);
      }
      func_0x000107c615e8(uVar3);
    }
  }
  return;
}



/* Entry: 101269190; end: 1012691f3;  */

long FUN_101269190(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c49c80();
    func_0x000107c61170(param_1);
  }
  return lVar1;
}



/* Entry: 1012691f4; end: 1012692d7; -[SCProfile3CollectionBridge collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_1012691f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101268f1c(param_3,param_4,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1012692d8; end: 1012692e3; -[SCProfile3CollectionBridge collectionView:layout:referenceSizeForHeaderInSection:] */

undefined1  [16]
FUN_1012692d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  FUN_10126a74c(param_5,param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1012692e4; end: 1012692ef; -[SCProfile3CollectionBridge collectionView:layout:referenceSizeForFooterInSection:] */

undefined1  [16]
FUN_1012692e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  (*(code *)0x10126a8b4)(param_5,param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1012692f0; end: 10126938b;  */

undefined1  [16]
FUN_1012692f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  undefined1 auVar1 [16];
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  (*param_8)(param_5,param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 10126938c; end: 101269497; -[SCProfile3CollectionBridge collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:] */

void FUN_10126938c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec(param_5);
  func_0x000107c5efdc(puVar2,param_6);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10126aa1c(param_4,param_5,param_2,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 101269498; end: 101269577; -[SCProfile3CollectionBridge collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_101269498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10126abc8(param_4,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 101269578; end: 10126a107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101269578(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  byte param_5,uint param_6)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long extraout_x8;
  undefined *puVar11;
  long unaff_x20;
  ulong uVar12;
  code *pcVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  undefined *puVar19;
  double dVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  double dVar24;
  undefined *puVar25;
  undefined *puVar26;
  double dVar27;
  undefined *puVar28;
  undefined1 auStack_3b0 [12];
  uint uStack_3a4;
  long lStack_3a0;
  undefined8 uStack_398;
  ulong uStack_390;
  undefined *puStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  long lStack_368;
  ulong uStack_360;
  ulong uStack_358;
  uint uStack_34c;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  undefined8 *puStack_330;
  undefined *puStack_310;
  undefined1 auStack_308 [88];
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  double dStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  double dStack_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  double dStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  double dStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [40];
  
  lVar1 = 0x112d54580;
  uStack_34c = param_6;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_3b0 + -extraout_x8;
  uStack_398 = *(undefined8 *)(unaff_x20 + _DAT_112d6cad0);
  func_0x000107c3ec60();
  func_0x000107c609cc();
  uStack_3a4 = (uint)*(byte *)(unaff_x20 + _DAT_1137ff2d0);
  lStack_3a0 = _DAT_1137ff2d0;
  *(byte *)(unaff_x20 + _DAT_1137ff2d0) = param_5 ^ 1;
  lVar1 = _DAT_112d6caf0;
  dVar16 = param_1;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_c8,0,0);
  uStack_390 = *(ulong *)(unaff_x20 + lVar1);
  if (uStack_390 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uStack_390 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uStack_390 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uStack_390) {
      uVar12 = uStack_390;
    }
    func_0x000107c60480();
  }
  lVar1 = _DAT_1137ff2b0;
  func_0x000107c61434(uStack_390);
  if (uVar12 != 0) {
    uStack_348 = *(ulong *)PTR__UICollectionElementKindSectionHeader_110345b00;
    uStack_370 = *(ulong *)PTR__UICollectionElementKindSectionFooter_110345af8;
    uStack_358 = uStack_390 & 0xc000000000000001;
    uStack_360 = uStack_390 & 0xffffffffffffff8;
    lStack_368 = uStack_390 + 0x20;
    puVar25 = *(undefined **)PTR__UIEdgeInsetsZero_110345bb0;
    puVar26 = *(undefined **)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    dVar27 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    puVar28 = *(undefined **)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    uVar8 = 0;
    uStack_380 = uVar12;
    do {
      if (uStack_358 == 0) {
        if (*(ulong *)(uStack_360 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10126a0ec);
          (*pcVar13)();
        }
        uVar2 = *(ulong *)(lStack_368 + uVar8 * 8);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar8;
        FUN_10125ff50(uVar8,uStack_390);
      }
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10126a0e8);
        (*pcVar13)();
      }
      puVar3 = *(undefined **)(uVar2 + _DAT_112d6cd48);
      func_0x000107c615f0();
      puVar19 = puVar3;
      func_0x000107c4d914();
      if ((long)puVar19 < 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10126a0f0);
        (*pcVar13)();
      }
      puVar15 = (undefined8 *)(uVar2 + _DAT_112d6cd38);
      uStack_340 = uVar2;
      uStack_338 = uVar8 + 1;
      func_0x000107c61428(puVar15,auStack_e0,1,0);
      puVar11 = *(undefined **)(puVar15[4] + 0x10);
      puVar10 = puVar11;
      if (puVar19 <= puVar11) {
        puVar10 = puVar19;
      }
      if ((uStack_34c & 1) == 0) {
        puVar11 = puVar19;
        puVar10 = puVar19;
      }
      dStack_e8 = 0.0;
      dStack_f0 = 0.0;
      dStack_f8 = 0.0;
      dStack_100 = 0.0;
      dVar16 = dVar27;
      puVar19 = puVar25;
      puVar21 = puVar28;
      puVar23 = puVar26;
      puStack_330 = puVar15;
      if (puVar11 != (undefined *)0x0) {
        puVar19 = puVar3;
        puVar4 = puVar25;
        func_0x000107c50648();
        puVar21 = (undefined *)0x4030000000000000;
        if (((int)puVar19 == 0) ||
           (puVar19 = puVar3,
           func_0x000107c61150(puVar3,PTR_s_respondsToSelector__11262c7e0,
                               PTR_s_sectionInsets_112633270), ((ulong)puVar19 & 1) == 0)) {
          puVar23 = (undefined *)0x4030000000000000;
        }
        else {
          puVar19 = puVar3;
          func_0x000107c51b80();
          func_0x000107c61180();
          puVar23 = (undefined *)0x4030000000000000;
          if (puVar19 != (undefined *)0x0) {
            func_0x000107c3abf4();
            func_0x000107c61170(puVar19);
            puVar21 = param_4;
            puVar23 = puVar4;
          }
        }
        puStack_310 = PTR_DAT_11269e010;
        puVar4 = puVar3;
        func_0x000107c61494(puVar3,1,&puStack_310);
        if (puVar4 == (undefined *)0x0) {
          if (uVar8 == 0) goto LAB_1012699e0;
LAB_1012699d0:
          puVar19 = (undefined *)0x4018000000000000;
          dVar16 = 6.0;
        }
        else {
          func_0x000107c5ab70();
          dVar16 = 6.0;
          if (uVar8 == 0) {
LAB_1012699e0:
            dVar16 = 6.0;
            puVar19 = (undefined *)0x0;
          }
          else {
            puVar19 = (undefined *)0xc018000000000000;
            if ((int)puVar4 == 0) goto LAB_1012699d0;
          }
        }
      }
      puVar4 = puVar3;
      puStack_138 = puVar19;
      puStack_130 = puVar23;
      dStack_128 = dVar16;
      puStack_120 = puVar21;
      func_0x000107c50648();
      uVar22 = 0;
      uVar17 = 0;
      if (((ulong)puVar4 & 1) != 0) {
        puVar19 = puVar3;
        func_0x000107c61150(puVar3,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_minimumSectionLineSpacing_112611398);
        uVar17 = 0;
        if (((ulong)puVar19 & 1) != 0) {
          func_0x000107c4cf98(puVar3);
        }
      }
      puVar19 = puVar3;
      uStack_110 = uVar17;
      func_0x000107c50648();
      if (((int)puVar19 != 0) &&
         (puVar19 = puVar3,
         func_0x000107c61150(puVar3,PTR_s_respondsToSelector__11262c7e0,
                             PTR_s_minimumSectionInteritemSpacing_112611390),
         ((ulong)puVar19 & 1) != 0)) {
        func_0x000107c4cf94(puVar3);
        uVar22 = uVar17;
      }
      puVar15 = puStack_330;
      puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uStack_108 = uVar22;
      if (puVar11 == (undefined *)0x0) {
        puStack_118 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uStack_1a0 = dStack_e8;
        puStack_1e8 = puStack_130;
        puStack_1f0 = puStack_138;
        puStack_1d8 = puStack_120;
        dStack_1e0 = dStack_128;
        uStack_1b8 = dStack_100;
        uStack_1a8 = dStack_f0;
        uStack_1b0 = dStack_f8;
        uStack_1c8 = uStack_110;
        puStack_1d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uStack_188 = puStack_330[1];
        uStack_190 = *puStack_330;
        uStack_178 = puStack_330[3];
        uStack_180 = puStack_330[2];
        uStack_158 = puStack_330[7];
        uStack_160 = puStack_330[6];
        uStack_148 = puStack_330[9];
        uStack_150 = puStack_330[8];
        uStack_140 = puStack_330[10];
        uStack_168 = puStack_330[5];
        uStack_170 = puStack_330[4];
        puStack_330[10] = dStack_e8;
        puStack_330[7] = dStack_100;
        puStack_330[6] = uVar22;
        puStack_330[9] = dStack_f0;
        puStack_330[8] = dStack_f8;
        puStack_330[3] = puStack_120;
        puStack_330[2] = dStack_128;
        puStack_330[5] = uStack_110;
        puStack_330[4] = puVar19;
        puStack_330[1] = puStack_130;
        *puStack_330 = puStack_138;
        puVar9 = &uStack_250;
        uStack_1c0 = uVar22;
        FUN_10126ad2c(&puStack_1f0,puVar9);
        func_0x00010126ad68(&uStack_190);
        func_0x00010126ad68(&puStack_1f0);
        puStack_118 = puVar19;
        func_0x000107c5faec(uStack_348);
        func_0x000107c6142c(puVar9);
        dStack_100 = 0.0;
        dStack_f8 = 0.0;
        func_0x000107c5faec(uStack_370);
        func_0x000107c615e8(puVar3);
        func_0x000107c6142c(puVar9);
        uVar2 = uStack_338;
        dVar24 = 0.0;
        dStack_260 = 0.0;
      }
      else {
        uVar22 = 0;
        FUN_100f6e330(0);
        puVar19 = puVar11;
        func_0x000107c5fc70(puVar11,uVar22);
        *(undefined **)(puVar19 + 0x10) = puVar11;
        func_0x000107c60ee4(puVar19 + 0x20,(long)puVar11 << 4);
        uStack_1c8 = uStack_110;
        uStack_1b8 = dStack_100;
        uStack_1c0 = uStack_108;
        uStack_1a8 = dStack_f0;
        uStack_1b0 = dStack_f8;
        uStack_1a0 = dStack_e8;
        puStack_1e8 = puStack_130;
        puStack_1f0 = puStack_138;
        puStack_1d8 = puStack_120;
        dStack_1e0 = dStack_128;
        uStack_188 = puStack_330[1];
        uStack_190 = *puStack_330;
        uStack_178 = puStack_330[3];
        uStack_180 = puStack_330[2];
        uStack_158 = puStack_330[7];
        uStack_160 = puStack_330[6];
        uStack_148 = puStack_330[9];
        uStack_150 = puStack_330[8];
        uStack_140 = puStack_330[10];
        uStack_168 = puStack_330[5];
        uStack_170 = puStack_330[4];
        puStack_330[10] = dStack_e8;
        puStack_330[7] = dStack_100;
        puStack_330[6] = uStack_108;
        puStack_330[9] = dStack_f0;
        puStack_330[8] = dStack_f8;
        puStack_330[3] = puStack_120;
        puStack_330[2] = dStack_128;
        puStack_330[5] = uStack_110;
        puStack_330[4] = puVar19;
        puStack_330[1] = puStack_130;
        *puStack_330 = puStack_138;
        dVar16 = dStack_128;
        puStack_1d0 = puVar19;
        puStack_118 = puVar19;
        FUN_10126ad2c(&puStack_1f0,&uStack_250);
        func_0x00010126ad68(&uStack_190);
        puStack_2b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar21 = puVar11;
        func_0x000101275284(0,puVar11,0);
        puVar19 = (undefined *)0x0;
        do {
          puVar23 = puStack_2b0;
          dVar24 = 0.0;
          dVar20 = dVar16;
          dVar18 = 0.0;
          if ((long)puVar19 < (long)puVar10) {
            func_0x000107c5efe8(puVar14,puVar19,uVar8);
            lVar5 = 0;
            func_0x000107c5eff8();
            pcVar13 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
            (*pcVar13)(puVar14,0,1,lVar5);
            func_0x000107c61428(unaff_x20 + lVar1,&uStack_250,0x21,0);
            FUN_101268c10(puVar14,unaff_x20 + lVar1);
            func_0x000107c614a8(&uStack_250);
            dVar24 = param_1;
            func_0x000107c5b080(puVar3);
            dVar20 = dVar16;
            (*pcVar13)(puVar14,1,1,lVar5);
            func_0x000107c61428(unaff_x20 + lVar1,&uStack_250,0x21,0);
            puVar21 = (undefined *)(unaff_x20 + lVar1);
            FUN_101268c10(puVar14);
            func_0x000107c614a8(&uStack_250);
            dVar18 = dVar16;
          }
          dVar16 = dVar20;
          uVar12 = *(ulong *)(puVar23 + 0x10);
          puVar4 = (undefined *)(uVar12 + 1);
          puStack_2b0 = puVar23;
          if (*(ulong *)(puVar23 + 0x18) >> 1 <= uVar12) {
            puVar21 = puVar4;
            func_0x000101275284(1 < *(ulong *)(puVar23 + 0x18),puVar4,1);
          }
          puVar23 = puStack_2b0;
          puVar19 = puVar19 + 1;
          *(undefined **)(puStack_2b0 + 0x10) = puVar4;
          *(double *)(puStack_2b0 + uVar12 * 0x10 + 0x20) = dVar24;
          *(double *)(puStack_2b0 + uVar12 * 0x10 + 0x28) = dVar18;
        } while (puVar11 != puVar19);
        func_0x00010126ad68(&puStack_1f0);
        uVar12 = uStack_348;
        uVar2 = uStack_348;
        puStack_118 = puVar23;
        func_0x000107c5faec();
        puVar10 = puVar21;
        func_0x000107c61174(uVar12);
        func_0x000107c61174();
        puVar19 = puVar3;
        func_0x000107c50648();
        if ((int)puVar19 == 0) {
          func_0x000107c61170(uVar12);
          func_0x000107c61170(uVar12);
          func_0x000107c6142c(puVar21);
          dVar24 = 0.0;
          dVar20 = dVar16;
          dStack_f8 = 0.0;
        }
        else {
          puVar19 = puVar3;
          puVar11 = PTR_s_respondsToSelector__11262c7e0;
          func_0x000107c61150(puVar3,PTR_s_respondsToSelector__11262c7e0,
                              PTR_s_supplementaryViewProvider_1126765b8);
          puVar10 = puVar11;
          if (((ulong)puVar19 & 1) == 0) {
LAB_101269d48:
            func_0x000107c61170(uVar12);
            func_0x000107c61170(uVar12);
          }
          else {
            puVar19 = puVar3;
            func_0x000107c5c434();
            func_0x000107c61180();
            puVar10 = puVar11;
            if (puVar19 == (undefined *)0x0) goto LAB_101269d48;
            uVar6 = uStack_348;
            func_0x000107c5faec();
            if ((uVar2 == uVar6) && (puVar21 == puVar11)) {
              puVar10 = puVar11;
              func_0x000107c61170(uVar12);
              func_0x000107c6142c(puVar11);
            }
            else {
              puVar10 = puVar21;
              func_0x000107c605b8(uVar2,puVar21,uVar6,puVar11,0);
              func_0x000107c61170(uVar12);
              func_0x000107c6142c(puVar11);
              if ((uVar2 & 1) == 0) {
                dVar24 = param_1;
                func_0x000107c4fb48(puVar19);
                dVar20 = dVar16;
                func_0x000107c615e8(puVar19);
                func_0x000107c61170(uVar12);
                func_0x000107c6142c(puVar21);
                dStack_f8 = dVar16;
                goto LAB_101269d68;
              }
            }
            uVar2 = uVar8;
            FUN_10126ce74();
            if ((uVar2 & 1) != 0) {
              dVar18 = param_1;
              func_0x000107c4fb48(puVar19);
              dVar20 = dVar16;
              func_0x000107c61170(uVar12);
              func_0x000107c615e8(puVar19);
              func_0x000107c6142c(puVar21);
              dVar24 = dVar18;
              dStack_f8 = dVar16;
              if (dVar18 == 0.0) {
                dVar24 = 0.0;
                if (dVar16 != 0.0) {
                  dVar24 = dVar18;
                }
                dStack_f8 = 0.0;
                if (dVar16 != 0.0) {
                  dStack_f8 = dVar16;
                }
              }
              goto LAB_101269d68;
            }
            func_0x000107c61170(uVar12);
            func_0x000107c615e8(puVar19);
          }
          func_0x000107c6142c(puVar21);
          dVar24 = 0.0;
          dVar20 = dVar16;
          dStack_f8 = 0.0;
        }
LAB_101269d68:
        uVar6 = uStack_370;
        uVar12 = uStack_370;
        dStack_100 = dVar24;
        func_0x000107c5faec();
        uStack_378 = uVar12;
        func_0x000107c61174(uVar6);
        func_0x000107c61174();
        puVar19 = puVar3;
        func_0x000107c50648();
        if (((ulong)puVar19 & 1) == 0) {
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar6);
          func_0x000107c615e8(puVar3);
          func_0x000107c6142c(puVar10);
          uVar2 = uStack_338;
        }
        else {
          puVar19 = puVar3;
          puVar11 = PTR_s_respondsToSelector__11262c7e0;
          func_0x000107c61150(puVar3,PTR_s_respondsToSelector__11262c7e0,
                              PTR_s_supplementaryViewProvider_1126765b8);
          uVar2 = uStack_338;
          if (((ulong)puVar19 & 1) != 0) {
            puVar19 = puVar3;
            func_0x000107c5c434();
            func_0x000107c61180();
            if (puVar19 != (undefined *)0x0) {
              uVar12 = uStack_348;
              puStack_388 = puVar19;
              func_0x000107c5faec();
              if ((uStack_378 == uVar12) && (puVar10 == puVar11)) {
                func_0x000107c61170(uVar6);
                func_0x000107c6142c(puVar11);
              }
              else {
                uVar7 = uStack_378;
                func_0x000107c605b8(uStack_378,puVar10,uVar12,puVar11,0);
                func_0x000107c61170(uVar6);
                func_0x000107c6142c(puVar11);
                uVar12 = uStack_380;
                puVar19 = puStack_388;
                if ((uVar7 & 1) == 0) {
                  dVar24 = param_1;
                  func_0x000107c4fb48(puStack_388);
                  func_0x000107c615e8(puVar19);
                  func_0x000107c61170(uVar6);
                  func_0x000107c615e8(puVar3);
                  func_0x000107c6142c(puVar10);
                  puVar15 = puStack_330;
                  dStack_260 = dVar20;
                  goto LAB_1012697ac;
                }
              }
              uVar12 = uStack_380;
              FUN_10126ce74();
              puVar19 = puStack_388;
              if ((uVar8 & 1) == 0) {
                func_0x000107c61170(uVar6);
                func_0x000107c615e8(puVar3);
                func_0x000107c615e8(puStack_388);
                func_0x000107c6142c(puVar10);
                dVar24 = 0.0;
                puVar15 = puStack_330;
                dStack_260 = 0.0;
              }
              else {
                dVar16 = param_1;
                func_0x000107c4fb48(puStack_388);
                func_0x000107c61170(uVar6);
                func_0x000107c615e8(puVar19);
                func_0x000107c615e8(puVar3);
                func_0x000107c6142c(puVar10);
                puVar15 = puStack_330;
                dVar24 = dVar16;
                dStack_260 = dVar20;
                if (dVar16 == 0.0) {
                  dVar24 = 0.0;
                  if (dVar20 != 0.0) {
                    dVar24 = dVar16;
                  }
                  dStack_260 = 0.0;
                  if (dVar20 != 0.0) {
                    dStack_260 = dVar20;
                  }
                }
              }
              goto LAB_1012697ac;
            }
          }
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar6);
          func_0x000107c615e8(puVar3);
          func_0x000107c6142c(puVar10);
        }
        uVar12 = uStack_380;
        puVar15 = puStack_330;
        dVar24 = 0.0;
        dStack_260 = 0.0;
      }
LAB_1012697ac:
      uVar8 = uStack_340;
      uStack_288 = uStack_110;
      puStack_290 = puStack_118;
      dStack_278 = dStack_100;
      uStack_280 = uStack_108;
      puStack_2a8 = puStack_130;
      puStack_2b0 = puStack_138;
      puStack_298 = puStack_120;
      dStack_2a0 = dStack_128;
      dStack_270 = dStack_f8;
      uStack_248 = puVar15[1];
      uStack_250 = *puVar15;
      uStack_238 = puVar15[3];
      uStack_240 = puVar15[2];
      uStack_200 = puVar15[10];
      uStack_218 = puVar15[7];
      uStack_220 = puVar15[6];
      uStack_208 = puVar15[9];
      uStack_210 = puVar15[8];
      uStack_228 = puVar15[5];
      uStack_230 = puVar15[4];
      puVar15[10] = dStack_260;
      puVar15[7] = dStack_100;
      puVar15[6] = uStack_108;
      puVar15[9] = dVar24;
      puVar15[8] = dStack_f8;
      puVar15[3] = puStack_120;
      puVar15[2] = dStack_128;
      puVar15[5] = uStack_110;
      puVar15[4] = puStack_118;
      puVar15[1] = puStack_130;
      *puVar15 = puStack_138;
      dVar16 = dStack_f8;
      param_4 = puStack_118;
      dStack_268 = dVar24;
      dStack_f0 = dVar24;
      dStack_e8 = dStack_260;
      FUN_10126ad2c(&puStack_2b0,auStack_308);
      func_0x00010126ad68(&uStack_250);
      func_0x000107c61170(uVar8);
      func_0x00010126ad68(&puStack_138);
      uVar8 = uVar2;
    } while (uVar2 != uVar12);
  }
  func_0x000107c6142c(uStack_390);
  func_0x000107c3ec60(uStack_398);
  func_0x000107c609cc();
  *(double *)(unaff_x20 + _DAT_1137ff2c8) = dVar16;
  *(char *)(unaff_x20 + lStack_3a0) = (char)uStack_3a4;
  return;
}



/* Entry: 10126a108; end: 10126a2db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10126a108(double param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c3ec60();
  func_0x000107c609cc();
  if ((0.0 < param_1) && (0.1 < ABS(param_1 - *(double *)(unaff_x20 + _DAT_1137ff2c8)))) {
    *(double *)(unaff_x20 + _DAT_1137ff2c8) = param_1;
    param_2 = 1;
    FUN_101269578(1,1);
  }
  func_0x000107c5eff4();
  lVar5 = _DAT_112d6caf0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_58,0,0);
  uVar4 = *(ulong *)(unaff_x20 + lVar5);
  if (uVar4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar3 = uVar4;
    }
    func_0x000107c60480();
  }
  uVar6 = 0;
  uVar7 = 0;
  if (param_2 < (long)uVar3) {
    func_0x000107c5eff4();
    func_0x000107c61428(unaff_x20 + lVar5,auStack_70,0x20,0);
    uVar4 = *(ulong *)(unaff_x20 + lVar5);
    if ((uVar4 & 0xc000000000000001) == 0) {
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126a2d0);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126a2d4);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(uVar4 + uVar3 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      FUN_10125ff50();
    }
    func_0x000107c614a8(auStack_70);
    lVar5 = uVar3 + _DAT_112d6cd38;
    func_0x000107c61428(lVar5,auStack_70,0,0);
    lVar5 = *(long *)(lVar5 + 0x20);
    func_0x000107c61434(lVar5);
    func_0x000107c61170();
    func_0x000107c5efec();
    if ((long)uVar3 < *(long *)(lVar5 + 0x10)) {
      func_0x000107c5efec();
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126a2d8);
        (*pcVar2)();
      }
      if (*(ulong *)(lVar5 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126a2dc);
        (*pcVar2)();
      }
      lVar1 = lVar5 + uVar3 * 0x10;
      uVar6 = *(undefined8 *)(lVar1 + 0x20);
      uVar7 = *(undefined8 *)(lVar1 + 0x28);
    }
    func_0x000107c6142c(lVar5);
  }
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Entry: 10126a2dc; end: 10126a467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10126a2dc(double param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c3ec60();
  func_0x000107c609cc();
  if ((0.0 < param_1) && (0.1 < ABS(param_1 - *(double *)(unaff_x20 + _DAT_1137ff2c8)))) {
    *(double *)(unaff_x20 + _DAT_1137ff2c8) = param_1;
    FUN_101269578(1,1);
  }
  lVar2 = _DAT_112d6caf0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_68,0,0);
  uVar5 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar5 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar4 = uVar5;
    }
    func_0x000107c60480();
  }
  if ((long)param_3 < (long)uVar4) {
    func_0x000107c61428(unaff_x20 + lVar2,auStack_80,0x20,0);
    uVar5 = *(ulong *)(unaff_x20 + lVar2);
    if ((uVar5 & 0xc000000000000001) == 0) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10126a464);
        (*pcVar3)();
      }
      if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= param_3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10126a468);
        (*pcVar3)();
      }
      param_3 = *(ulong *)(uVar5 + param_3 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      FUN_10125ff50();
    }
    func_0x000107c614a8(auStack_80);
    puVar1 = (undefined8 *)(param_3 + _DAT_112d6cd38);
    func_0x000107c61428(puVar1,auStack_80,0,0);
    uVar6 = *puVar1;
    func_0x000107c61170(param_3);
  }
  else {
    uVar6 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  return uVar6;
}



/* Entry: 10126a468; end: 10126a727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10126a468(double param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c3ec60();
  func_0x000107c609cc();
  if ((0.0 < param_1) && (0.1 < ABS(param_1 - *(double *)(unaff_x20 + _DAT_1137ff2c8)))) {
    *(double *)(unaff_x20 + _DAT_1137ff2c8) = param_1;
    FUN_101269578(1,1);
  }
  lVar1 = _DAT_112d6caf0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_58,0,0);
  uVar4 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar3 = uVar4;
    }
    func_0x000107c60480();
  }
  uVar5 = 0;
  if ((long)param_3 < (long)uVar3) {
    func_0x000107c61428(unaff_x20 + lVar1,auStack_70,0x20,0);
    uVar4 = *(ulong *)(unaff_x20 + lVar1);
    if ((uVar4 & 0xc000000000000001) == 0) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126a5c4);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= param_3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126a5c8);
        (*pcVar2)();
      }
      param_3 = *(ulong *)(uVar4 + param_3 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      FUN_10125ff50();
    }
    func_0x000107c614a8(auStack_70);
    lVar1 = param_3 + _DAT_112d6cd38;
    func_0x000107c61428(lVar1,auStack_70,0,0);
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    func_0x000107c61170(param_3);
  }
  return uVar5;
}



/* Entry: 10126a728; end: 10126a74b;  */

long FUN_10126a728(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49c80();
    func_0x000107c61170(lVar1);
  }
  return lVar2;
}



/* Entry: 10126a74c; end: 10126aa1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10126a74c(double param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c3ec60();
  func_0x000107c609cc();
  if ((0.0 < param_1) && (0.1 < ABS(param_1 - *(double *)(unaff_x20 + _DAT_1137ff2c8)))) {
    *(double *)(unaff_x20 + _DAT_1137ff2c8) = param_1;
    FUN_101269578(1,1);
  }
  lVar1 = _DAT_112d6caf0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_58,0,0);
  uVar4 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar3 = uVar4;
    }
    func_0x000107c60480();
  }
  uVar5 = 0;
  uVar6 = 0;
  if ((long)param_3 < (long)uVar3) {
    func_0x000107c61428(unaff_x20 + lVar1,auStack_70,0x20,0);
    uVar4 = *(ulong *)(unaff_x20 + lVar1);
    if ((uVar4 & 0xc000000000000001) == 0) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126a8b0);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= param_3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126a8b4);
        (*pcVar2)();
      }
      param_3 = *(ulong *)(uVar4 + param_3 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      FUN_10125ff50();
    }
    func_0x000107c614a8(auStack_70);
    lVar1 = param_3 + _DAT_112d6cd38;
    func_0x000107c61428(lVar1,auStack_70,0,0);
    uVar5 = *(undefined8 *)(lVar1 + 0x38);
    uVar6 = *(undefined8 *)(lVar1 + 0x40);
    func_0x000107c61170(param_3);
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Entry: 10126aa1c; end: 10126abc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126aa1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c5eff4();
  lVar1 = _DAT_112d6caf0;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_68,0,0);
  uVar4 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar3 = uVar4;
    }
    func_0x000107c60480();
  }
  if (param_1 < (long)uVar3) {
    func_0x000107c5eff4();
    func_0x000107c61428(unaff_x20 + lVar1,auStack_80,0x20,0);
    uVar4 = *(ulong *)(unaff_x20 + lVar1);
    if ((uVar4 & 0xc000000000000001) == 0) {
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126abc0);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126abc4);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(uVar4 + uVar3 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      FUN_10125ff50();
    }
    func_0x000107c614a8(auStack_80);
    uVar5 = *(ulong *)(uVar3 + _DAT_112d6cd48);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(uVar3);
    uVar4 = uVar5;
    func_0x000107c61150(uVar5,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_collectionViewWillDisplaySupplem_1125adc68);
    if ((uVar4 & 1) == 0) {
      func_0x000107c615e8(uVar5);
    }
    else {
      uVar4 = uVar5;
      func_0x000107c615f0();
      func_0x000107c5efec();
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126abc8);
        (*pcVar2)();
      }
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c3fdb0(uVar5);
      func_0x000107c615ec(uVar5,2);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 10126abc8; end: 10126ad2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126abc8(long param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c5eff4();
  lVar1 = _DAT_112d6caf8;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf8,auStack_58,0,0);
  uVar4 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar3 = uVar4;
    }
    func_0x000107c60480();
  }
  if (param_1 < (long)uVar3) {
    func_0x000107c5eff4();
    func_0x000107c61428(unaff_x20 + lVar1,auStack_70,0x20,0);
    uVar4 = *(ulong *)(unaff_x20 + lVar1);
    if ((uVar4 & 0xc000000000000001) == 0) {
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126ad24);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126ad28);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(uVar4 + uVar3 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      FUN_10125ff50();
    }
    func_0x000107c614a8(auStack_70);
    uVar5 = *(ulong *)(uVar3 + _DAT_112d6cd48);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(uVar3);
    uVar4 = uVar5;
    func_0x000107c61150(uVar5,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_collectionViewDidEndDisplayingCe_1125adbb8);
    if ((uVar4 & 1) != 0) {
      func_0x000107c5efec();
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126ad2c);
        (*pcVar2)();
      }
      func_0x000107c3fda0(uVar5);
    }
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 10126ad2c; end: 10126ad9b;  */

undefined8 FUN_10126ad2c(undefined8 param_1,undefined8 param_2)

{
  FUN_101278410(param_2,param_1);
  return param_2;
}



/* Entry: 10126ad9c; end: 10126b10f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126ad9c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar6;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar10 = 0x112d54580;
  uStack_98 = param_3;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar7 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = _DAT_1137ff2b0;
  lVar9 = lVar7 - extraout_x12;
  func_0x000107c61428(unaff_x20 + _DAT_1137ff2b0,auStack_78,0,0);
  FUN_10126b110(unaff_x20 + lVar10,puVar11);
  puVar2 = puVar11;
  (**(code **)(lVar12 + 0x30))(puVar11,1,lVar1);
  if ((int)puVar2 == 1) {
    uVar4 = 0x12d54580;
    FUN_10126c718(puVar11,0x112d54580,&UNK_10d91b480);
    FUN_10126d12c();
    lVar10 = _DAT_112d6caf0;
    if ((uVar4 & 0xff) != 1) {
      func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_90,0x20,0);
      uVar5 = *(ulong *)(unaff_x20 + lVar10);
      if ((uVar5 & 0xc000000000000001) == 0) {
        if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10126b10c);
          (*pcVar6)();
        }
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10126b110);
          (*pcVar6)();
        }
        uVar5 = *(ulong *)(uVar5 + param_1 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = param_1;
        FUN_10125ff50();
      }
      func_0x000107c614a8(auStack_90);
      lVar10 = uVar5 + _DAT_112d6cd38;
      func_0x000107c61428(lVar10,auStack_90,0,0);
      lVar9 = *(long *)(lVar10 + 0x20);
      func_0x000107c61434(lVar9);
      func_0x000107c61170(uVar5);
      lVar10 = *(long *)(lVar9 + 0x10);
      func_0x000107c6142c(lVar9);
      if (((lVar10 != 0) && (-1 < param_4)) && (param_4 < lVar10)) {
        func_0x000107c5efe8(lVar7,param_4,param_1);
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d6cad0);
        func_0x000107c5fadc(param_2,uStack_98);
        uVar3 = param_2;
        func_0x000107c5efd4();
        func_0x000107c417e0(uVar8);
        func_0x000107c61180();
        func_0x000107c61170(param_2);
        func_0x000107c61170(uVar3);
        pcVar6 = *(code **)(lVar12 + 8);
        lVar9 = lVar7;
        goto LAB_10126b0d0;
      }
    }
    FUN_101277678(0);
    func_0x000107c610f8();
    func_0x000107c469a4(0,0,0,0);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar9,puVar11,lVar1);
    if (*(char *)(unaff_x20 + _DAT_1137ff2d0) == '\x01') {
      FUN_10126c4a0(param_2,uStack_98,param_1);
      (**(code **)(lVar12 + 8))(lVar9,lVar1);
      return;
    }
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d6cad0);
    func_0x000107c5fadc(param_2,uStack_98);
    uVar3 = param_2;
    func_0x000107c5efd4();
    func_0x000107c417e0(uVar8);
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar3);
    pcVar6 = *(code **)(lVar12 + 8);
LAB_10126b0d0:
    (*pcVar6)(lVar9,lVar1);
  }
  return;
}



/* Entry: 10126b110; end: 10126b15f;  */

undefined8 FUN_10126b110(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10126b160; end: 10126b1eb; -[SCProfile3CollectionBridge collectionViewSection:dequeueReusableCellWithReuseIdentifier:forIndexInSection:] */

void FUN_10126b160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10126ad9c(param_3,param_4,param_2,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10126b1ec; end: 10126b34f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126b1ec(undefined8 param_1)

{
  int iVar1;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar1 = (int)puVar2;
  func_0x000107c4a02c();
  if (iVar1 == 0) {
    puVar2 = &UNK_11039a5f0;
    func_0x000107c613fc(&UNK_11039a5f0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_11039a618;
    func_0x000107c613fc(&UNK_11039a618,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    pcStack_40 = FUN_10126c6bc;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_11039a630;
    ppuVar4 = &puStack_60;
    puStack_38 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_38;
    func_0x000107c615f0(param_1);
    func_0x000107c61574(puVar2);
    func_0x0001000d76cc("SCProfile3CollectionBridge.collectionViewSectionUpdateIfNeeded",ppuVar4);
    func_0x000107c60bd0(ppuVar4);
  }
  else {
    pcVar6 = *(code **)(unaff_x20 + _DAT_112d6cae8);
    if (pcVar6 != (code *)0x0) {
      uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d6cae8))[1];
      func_0x000107c6157c(uVar5);
      (*pcVar6)();
      func_0x00010058d43c(pcVar6,uVar5);
    }
    func_0x000107c61428(unaff_x20 + _DAT_112d6cb08,&puStack_60,0x21,0);
    FUN_10125e974(auStack_68,param_1);
    func_0x000107c614a8(&puStack_60);
    FUN_101270458();
  }
  return;
}



/* Entry: 10126b350; end: 10126b3ab;  */

void FUN_10126b350(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10126b1ec(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10126b3ac; end: 10126b3f3; -[SCProfile3CollectionBridge collectionViewSectionUpdateIfNeeded:] */

void FUN_10126b3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10126b1ec(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10126b3f4; end: 10126b5b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126b3f4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puVar3;
  
  lVar2 = 0;
  func_0x000107c5ef8c();
  lVar9 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar1 = (int)puVar3;
  func_0x000107c4a02c();
  if (iVar1 == 0) {
    puVar3 = &UNK_11039a5f0;
    func_0x000107c613fc(&UNK_11039a5f0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    (**(code **)(lVar9 + 0x10))(auStack_90 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
    uVar6 = (ulong)*(byte *)(lVar9 + 0x50);
    uVar8 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
    puVar4 = &UNK_11039a668;
    func_0x000107c613fc(&UNK_11039a668,uVar8 + lVar7,uVar6 | 7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    (**(code **)(lVar9 + 0x20))
              (puVar4 + uVar8,auStack_90 + -(lVar7 + 0xfU & 0xfffffffffffffff0),lVar2);
    pcStack_60 = FUN_10126c6e0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11039a680;
    ppuVar5 = &puStack_80;
    puStack_58 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_58;
    func_0x000107c615f0(param_1);
    func_0x000107c61574(puVar3);
    func_0x0001000d76cc("SCProfile3CollectionBridge.collectionViewResultSection",ppuVar5);
    func_0x000107c60bd0(ppuVar5);
  }
  else {
    func_0x000107c58d90(param_1);
    func_0x000107c61428(unaff_x20 + _DAT_112d6cb08,&puStack_80,0x21,0);
    FUN_10125e974(auStack_88,param_1);
    func_0x000107c614a8(&puStack_80);
    FUN_101270458();
  }
  return;
}



/* Entry: 10126b5b4; end: 10126b623;  */

void FUN_10126b5b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10126b3f4(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10126b624; end: 10126b6df; -[SCProfile3CollectionBridge collectionViewResultSection:reloadCellsAtIndexesIfNeeded:] */

void FUN_10126b624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ef8c();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ef74(puVar2,param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10126b3f4(param_3,puVar2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 10126b6e0; end: 10126bdff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126b6e0(long param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong **ppuVar11;
  undefined *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  long extraout_x8;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long unaff_x20;
  ulong *puVar19;
  long lVar20;
  ulong uVar21;
  ulong *puVar22;
  long lVar23;
  ulong uStack_170;
  ulong *puStack_168;
  ulong uStack_160;
  ulong *puStack_158;
  ulong *puStack_150;
  ulong uStack_148;
  ulong uStack_140;
  long lStack_138;
  ulong *puStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_118;
  ulong *puStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_88;
  ulong auStack_80 [4];
  
  puVar4 = (ulong *)0x0;
  lStack_138 = param_2;
  func_0x000107c5eff8();
  uStack_118 = puVar4[-1];
  puStack_110 = puVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uStack_118 + 0x40));
  lVar23 = _DAT_112d6caf0;
  puVar13 = (ulong *)((long)&uStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar4 = auStack_80;
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,puVar4,0,0);
  puVar19 = *(ulong **)(unaff_x20 + lVar23);
  if ((ulong)puVar19 >> 0x3e == 0) {
    puVar22 = *(ulong **)(((ulong)puVar19 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar22 = (ulong *)((ulong)puVar19 & 0xffffffffffffff8);
    if ((ulong *)0x7fffffffffffffff < puVar19) {
      puVar22 = puVar19;
    }
    func_0x000107c60480();
  }
  if (puVar22 != (ulong *)0x0) {
    func_0x000107c61434(puVar19);
    uVar21 = 0;
    do {
      if (((ulong)puVar19 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar19 & 0xffffffffffffff8) + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10126bde4);
          (*pcVar2)();
        }
        uVar17 = puVar19[uVar21 + 4];
        func_0x000107c61174();
      }
      else {
        uVar17 = uVar21;
        puVar4 = puVar19;
        FUN_10125ff50();
      }
      lVar23 = *(long *)(uVar17 + _DAT_112d6cd48);
      func_0x000107c61170();
      if (lVar23 == param_1) {
        func_0x000107c6142c(puVar19);
        puVar19 = (ulong *)(lStack_138 + 0x40);
        uVar17 = 1L << ((ulong)*(byte *)(lStack_138 + 0x20) & 0x3f);
        uVar21 = 0xffffffffffffffff;
        if ((*(byte *)(lStack_138 + 0x20) & 0x3f) < 6) {
          uVar21 = ~(-1L << (uVar17 & 0x3f));
        }
        uVar21 = uVar21 & *puVar19;
        lStack_120 = *(long *)(unaff_x20 + _DAT_112d6cad0);
        uVar17 = uVar17 + 0x3f >> 6;
        func_0x000107c61434();
        lVar23 = 0;
        puStack_130 = puVar13;
        puStack_158 = puVar19;
        uStack_160 = uVar17;
        goto joined_r0x00010126b880;
      }
      puVar5 = (ulong *)(uVar21 + 1);
      if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10126bdd8);
        (*pcVar2)();
      }
      uVar21 = uVar21 + 1;
    } while (puVar5 != puVar22);
    func_0x000107c6142c(puVar19);
  }
  return;
joined_r0x00010126b880:
  while (uVar21 == 0) {
    bVar3 = SCARRY8(lVar23,1);
    lVar23 = lVar23 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10126bddc);
      (*pcVar2)();
    }
    if ((long)uVar17 <= lVar23) {
      func_0x000107c61574(lStack_138);
      return;
    }
    uVar21 = puVar19[lVar23];
  }
  uVar17 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
  uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
  uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
  uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) | lVar23 << 6;
  puVar1 = (undefined8 *)(*(long *)(lStack_138 + 0x30) + uVar17 * 0x10);
  uStack_100 = *puVar1;
  uStack_e8 = puVar1[1];
  puVar19 = *(ulong **)(*(long *)(lStack_138 + 0x38) + uVar17 * 8);
  if (((ulong)puVar19 & 0xc000000000000001) == 0) {
    uVar16 = -1L << ((ulong)(byte)puVar19[4] & 0x3f);
    uVar18 = ~uVar16;
    puVar22 = puVar19 + 8;
    uVar16 = -uVar16;
    uVar17 = 0xffffffffffffffff;
    if (uVar16 < 0x40) {
      uVar17 = ~(-1L << (uVar16 & 0x3f));
    }
    uVar17 = uVar17 & *puVar22;
    puVar5 = puVar19;
  }
  else {
    puVar5 = (ulong *)((ulong)puVar19 & 0xffffffffffffff8);
    if ((ulong *)0x7fffffffffffffff < puVar19) {
      puVar5 = puVar19;
    }
    func_0x000107c60418();
    puVar22 = (ulong *)0x0;
    uVar18 = 0;
    uVar17 = 0;
    puVar5 = (ulong *)((ulong)puVar5 | 0x8000000000000000);
  }
  uStack_140 = uVar21 - 1 & uVar21;
  uStack_148 = uVar18;
  func_0x000107c61434(uStack_e8);
  func_0x000107c61434();
  uStack_108 = uVar18 + 0x40 >> 6;
  lVar20 = 0;
  puStack_f8 = puVar5;
  puStack_f0 = puVar22;
  do {
    uVar21 = uVar17;
    lVar8 = lVar20;
    if ((long)puStack_f8 < 0) {
      func_0x000107c60444();
      if (puVar19 == (ulong *)0x0) break;
      uVar10 = 0;
      puStack_d0 = puVar19;
      FUN_10126c7d0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar12 = PTR___syXlN_11034f1a0;
      func_0x000107c6147c(&puStack_b0,&puStack_d0,PTR___syXlN_11034f1a0 + 8,uVar10,7);
      uVar10 = 0x112d6cab8;
      puStack_d0 = puVar4;
      func_0x0001000285a8(0x112d6cab8,&UNK_10da47130);
      func_0x000107c6147c(&puStack_a8,&puStack_d0,puVar12 + 8,uVar10,7);
      puVar22 = puStack_b0;
      puVar19 = puStack_a8;
    }
    else {
      while (uVar21 == 0) {
        lVar7 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10126bdd4);
          (*pcVar2)();
        }
        if ((long)uStack_108 <= lVar7) {
          uVar17 = 0;
          goto LAB_10126bd60;
        }
        lVar8 = lVar7;
        uVar21 = puStack_f0[lVar7];
      }
      uVar16 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar21 = uVar21 - 1 & uVar21;
      uVar16 = lVar8 << 9 | LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) << 3;
      puVar22 = *(ulong **)(puStack_f8[6] + uVar16);
      puVar19 = *(ulong **)(puStack_f8[7] + uVar16);
      puStack_b0 = puVar22;
      func_0x000107c61174(puVar22);
      func_0x000107c615f0(puVar19);
    }
    if (puVar22 == (ulong *)0x0) break;
    puVar4 = puVar22;
    func_0x000107c5d388();
    if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10126bde0);
      (*pcVar2)();
    }
    uStack_e0 = uVar21;
    func_0x000107c5efe8(puVar13);
    uVar10 = uStack_100;
    func_0x000107c5fadc(uStack_100,uStack_e8);
    uVar6 = uVar10;
    func_0x000107c5efd4();
    lVar7 = lStack_120;
    func_0x000107c5c430();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar6);
    lVar20 = lVar8;
    if (lVar7 == 0) {
      puVar4 = puStack_110;
      (**(code **)(uStack_118 + 8))(puVar13);
      func_0x000107c61170(puVar22);
      func_0x000107c615e8();
      uVar17 = uStack_e0;
    }
    else {
      puStack_88 = PTR_DAT_11269e018;
      lVar8 = lVar7;
      func_0x000107c61494(lVar7,1,&puStack_88);
      if (lVar8 == 0) {
        func_0x000107c61170(lVar7);
        func_0x000107c615e8(puVar19);
LAB_10126bd08:
        func_0x000107c61170(puVar22);
      }
      else {
        func_0x000107c61174();
        lVar9 = lVar8;
        func_0x000107c5def8();
        func_0x000107c61180();
        if (lVar9 == 0) {
          puStack_c8 = (ulong *)0x0;
          puStack_d0 = (ulong *)0x0;
          lStack_b8 = 0;
          uStack_c0 = 0;
        }
        else {
          func_0x000107c60234(&puStack_d0);
          func_0x000107c615e8(lVar9);
        }
        puStack_a8 = puStack_c8;
        puStack_b0 = puStack_d0;
        lStack_98 = lStack_b8;
        uStack_a0 = uStack_c0;
        lStack_128 = lVar7;
        if (lStack_b8 == 0) {
          FUN_10126c718(&puStack_b0,0x112d387f8,&UNK_10d902650);
          puVar4 = (ulong *)0x0;
        }
        else {
          uVar10 = 0;
          FUN_10126c7d0(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          ppuVar11 = &puStack_d8;
          func_0x000107c6147c(ppuVar11,&puStack_b0,PTR___sypN_11034f1a8 + 8,uVar10,6);
          puVar4 = puStack_d8;
          if ((int)ppuVar11 == 0) {
            puVar4 = (ulong *)0x0;
          }
        }
        puVar12 = PTR__OBJC_CLASS___NSObject_1126b1300;
        func_0x000107c61168(PTR__OBJC_CLASS___NSObject_1126b1300);
        puVar13 = puVar19;
        func_0x000107c6148c(puVar19,puVar12);
        if (puVar13 != (ulong *)0x0) {
          func_0x000107c615f0(puVar19);
          if (puVar4 != (ulong *)0x0) {
            FUN_10126c7d0(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            puVar5 = puVar4;
            func_0x000107c61174();
            puVar14 = puVar13;
            func_0x000107c61174(puVar13);
            puVar15 = puVar5;
            puStack_150 = puVar19;
            func_0x000107c60118(puVar5,puVar14);
            puVar19 = puStack_150;
            puStack_168 = puVar5;
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar14);
            if (((ulong)puVar15 & 1) != 0) {
              func_0x000107c61170(puStack_168);
              func_0x000107c61170(puVar14);
              goto LAB_10126bd10;
            }
          }
LAB_10126bcc0:
          func_0x000107c5a588(lVar8);
          lVar8 = lStack_128;
          func_0x000107c56a14(lStack_128);
          func_0x000107c61170(puVar13);
          func_0x000107c615e8(puVar19);
          func_0x000107c61170(puVar22);
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lVar8);
          puVar22 = puVar4;
          goto LAB_10126bd08;
        }
        if (puVar4 != (ulong *)0x0) goto LAB_10126bcc0;
LAB_10126bd10:
        lVar8 = lStack_128;
        func_0x000107c61170(lStack_128);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(puVar22);
        func_0x000107c615e8(puVar19);
      }
      puVar13 = puStack_130;
      puVar19 = puStack_130;
      puVar4 = puStack_110;
      (**(code **)(uStack_118 + 8))();
      uVar17 = uStack_e0;
    }
  } while( true );
LAB_10126bd60:
  puVar4 = puStack_f0;
  FUN_10126c710(puStack_f8,puStack_f0,uStack_148,lVar20,uVar17);
  func_0x000107c6142c(uStack_e8);
  puVar19 = puStack_158;
  uVar21 = uStack_140;
  uVar17 = uStack_160;
  goto joined_r0x00010126b880;
}



/* Entry: 10126be00; end: 10126be93; -[SCProfile3CollectionBridge collectionViewSection:supplementaryViewModelsUpdated:] */

void FUN_10126be00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d6cac0;
  func_0x0001000285a8(0x112d6cac0,&UNK_10d92f710);
  func_0x000107c5f9e8(param_4,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10126b6e0(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 10126be94; end: 10126bed7; -[SCProfile3CollectionBridge collectionViewSection:didUpdateLayoutWithInteraction:] */

void FUN_10126be94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10126c758();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10126bed8; end: 10126c05b; -[SCProfile3CollectionBridge collectionViewSection:indexPathForCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126bed8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar4 - extraout_x12_00;
  lVar5 = *(long *)(param_1 + _DAT_112d6cad0);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c4534c();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c5efe8(lVar2,0xffffffffffffffff,0);
  }
  else {
    func_0x000107c5efdc(puVar3);
    func_0x000107c61170(lVar5);
    pcVar6 = *(code **)(lVar7 + 0x20);
    (*pcVar6)(lVar4,puVar3,lVar1);
    (*pcVar6)(lVar2,lVar4,lVar1);
  }
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c5efd4();
  (**(code **)(lVar7 + 8))(lVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10126c05c; end: 10126c2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10126c05c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  uVar4 = param_2;
  func_0x000107c5eff8();
  uVar3 = (uint)uVar4;
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_10126d12c();
  lVar6 = _DAT_112d6caf0;
  if ((uVar3 & 0xff) == 1) {
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  }
  else {
    if (-1 < (long)param_2) {
      func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_78,0x20,0);
      uVar4 = *(ulong *)(unaff_x20 + lVar6);
      if ((uVar4 & 0xc000000000000001) == 0) {
        if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10126c2a4);
          (*pcVar1)();
        }
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10126c2a8);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(uVar4 + param_1 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = param_1;
        FUN_10125ff50();
      }
      func_0x000107c614a8(auStack_78);
      lVar6 = uVar4 + _DAT_112d6cd38;
      func_0x000107c61428(lVar6,auStack_78,0,0);
      lVar6 = *(long *)(lVar6 + 0x20);
      func_0x000107c61434(lVar6);
      func_0x000107c61170(uVar4);
      uVar4 = *(ulong *)(lVar6 + 0x10);
      func_0x000107c6142c(lVar6);
      if (param_2 < uVar4) {
        func_0x000107c5efe8(puVar5,param_2,param_1);
        lVar6 = *(long *)(unaff_x20 + _DAT_112d6cad0);
        func_0x000107c5efd4();
        func_0x000107c3f730();
        func_0x000107c61180();
        func_0x000107c61170(param_2);
        if (lVar6 != 0) {
          (**(code **)(lVar7 + 8))(puVar5,lVar2);
          return lVar6;
        }
        func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
        func_0x000107c466bc();
        func_0x000107c61654();
        (**(code **)(lVar7 + 8))(puVar5,lVar2);
        return 0;
      }
    }
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  }
  func_0x000107c466bc();
  func_0x000107c61654();
  return unaff_x20;
}



/* Entry: 10126c2a8; end: 10126c367; -[SCProfile3CollectionBridge collectionViewSection:cellForItemAtIndexInSection:error:] */

/* WARNING: Removing unreachable block (ram,0x00010126c310) */
/* WARNING: Removing unreachable block (ram,0x00010126c344) */
/* WARNING: Removing unreachable block (ram,0x00010126c314) */

void FUN_10126c2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10126c05c(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10126c368; end: 10126c43b; -[SCProfile3CollectionBridge sectionInsetsForCollectionViewSection:] */

undefined8 FUN_10126c368(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  func_0x000107c615f0(param_4);
  uVar1 = param_4;
  func_0x000107c50648();
  if (((int)uVar1 != 0) &&
     (uVar1 = param_4,
     func_0x000107c61150(param_4,PTR_s_respondsToSelector__11262c7e0,PTR_s_sectionInsets_112633270),
     (uVar1 & 1) != 0)) {
    uVar1 = param_4;
    func_0x000107c51b80();
    func_0x000107c61180();
    if (uVar1 != 0) {
      func_0x000107c3abf4();
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(param_4);
      return param_1;
    }
  }
  func_0x000107c615e8(param_4);
  return 0x4008000000000000;
}



/* Entry: 10126c43c; end: 10126c43f; -[SCProfile3CollectionBridge collectionViewSection:scrollToItemAtIndexInSection:scrollPosition:animated:] */

void FUN_10126c43c(void)

{
  return;
}



/* Entry: 10126c440; end: 10126c49f; -[SCProfile3CollectionBridge presentingViewControllerForCollectionViewSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126c440(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6cad8;
  func_0x000107c61428(param_1 + _DAT_112d6cad8,auStack_38,0,0);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c453e4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10126c4a0; end: 10126c6bb;  */

/* WARNING: Possible PIC construction at 0x00010126c68c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010126c690) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126c4a0(long param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined1 auStack_58 [24];
  
  uVar4 = (uint)param_2;
  FUN_10126d12c();
  lVar6 = _DAT_112d6caf0;
  if ((uVar4 & 0xff) == 1) {
    FUN_101277678(0);
    func_0x000107c610f8();
    goto code_r0x000107c469a4;
  }
  func_0x000107c61428(unaff_x20 + _DAT_112d6caf0,auStack_58,0x20,0);
  uVar5 = *(ulong *)(unaff_x20 + lVar6);
  if ((uVar5 & 0xc000000000000001) == 0) {
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10126c6b8);
      (*pcVar1)();
    }
    if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10126c6bc);
      (*pcVar1)();
    }
    param_3 = *(ulong *)(uVar5 + param_3 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    FUN_10125ff50();
  }
  func_0x000107c614a8(auStack_58);
  puVar7 = *(undefined **)(param_3 + _DAT_112d6cd48);
  func_0x000107c615f0(puVar7);
  func_0x000107c61170(param_3);
  puVar2 = puVar7;
  func_0x000107c5084c();
  func_0x000107c61180();
  func_0x000107c615e8(puVar7);
  if (puVar2 == (undefined *)0x0) {
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10124b9b8();
    if (*(long *)(puVar7 + 0x10) != 0) goto LAB_10126c604;
LAB_10126c668:
    func_0x000107c6142c(puVar7);
LAB_10126c670:
    FUN_101277678(0);
  }
  else {
    uVar3 = 0x112d6cac8;
    func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
    puVar7 = puVar2;
    func_0x000107c5f9e8(puVar2,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(puVar2);
    if (*(long *)(puVar7 + 0x10) == 0) goto LAB_10126c668;
LAB_10126c604:
    func_0x000107c61434(puVar7);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      func_0x000107c6142c(puVar7);
      goto LAB_10126c668;
    }
    lVar6 = *(long *)(*(long *)(puVar7 + 0x38) + param_1 * 8);
    func_0x000107c61430(puVar7,2);
    uVar3 = 0;
    FUN_10126c7d0(0,0x112d62a98,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    func_0x000107c61488(lVar6,uVar3);
    if (lVar6 == 0) goto LAB_10126c670;
    func_0x000107c614e8();
  }
  func_0x000107c610f8();
code_r0x000107c469a4:
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,0,0);
  return;
}



/* Entry: 10126c6bc; end: 10126c6df;  */

void FUN_10126c6bc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10126b1ec(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10126c6e0; end: 10126c70f;  */

void FUN_10126c6e0(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = 0;
  func_0x000107c5ef8c();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10126b3f4(uVar1,unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)));
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10126c710; end: 10126c717;  */

void FUN_10126c710(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10126c718; end: 10126c757;  */

undefined8 FUN_10126c718(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10126c758; end: 10126c7cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126c758(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = _DAT_1137ff2c0;
  if ((*(byte *)(unaff_x20 + _DAT_1137ff2c0) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_1137ff2c0) = 1;
    FUN_101269578(1,1);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d6cad0);
    func_0x000107c3fda4(uVar2);
    func_0x000107c61180();
    func_0x000107c4990c();
    func_0x000107c61170(uVar2);
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
  }
  return;
}



/* Entry: 10126c7d0; end: 10126c80f;  */

void FUN_10126c7d0(undefined8 param_1,long *param_2,long *param_3)

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


