/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103199d94; end: 103199edf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103199d94(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_48;
  
  if ((param_1 & 1) == 0) {
    puVar4 = &UNK_110618a98;
    func_0x000107c613fc(&UNK_110618a98,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    func_0x000107c6157c(puVar4);
    FUN_10319962c(FUN_10319a560,puVar4);
    func_0x000107c61578(puVar4,2);
  }
  else {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f48050);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f48038);
      func_0x000107c6157c(uVar5);
      func_0x0001000c74f0(&lStack_48);
      func_0x000107c61574(uVar5);
      if (lStack_48 == 0) {
        func_0x000107c615e8(lVar1);
      }
      else {
        lVar2 = lStack_48;
        func_0x000107c52060();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(param_2);
        }
        lVar3 = lVar1;
        func_0x000107c4a1d0();
        func_0x000107c61170(lVar2);
        *(char *)(unaff_x20 + _DAT_112f48040) = (char)lVar3;
        if ((int)lVar3 != 0) {
          FUN_103198e14();
        }
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(lStack_48);
      }
    }
  }
  return;
}



/* Entry: 103199ee0; end: 103199f0f; -[SCVoiceNotesPreviewController onScrubSync:] */

void FUN_103199ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103199d94(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103199f10; end: 103199f2f; -[SCVoiceNotesPreviewController onSeek:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103199f10(double param_1,long param_2)

{
  *(double *)(param_2 + _DAT_112f48048) = param_1 / 1000.0;
  return;
}



/* Entry: 103199f30; end: 103199fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103199f30(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  FUN_103198e14();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f48038);
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_103199fc4,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112f48030));
  *(undefined1 *)(unaff_x20 + _DAT_112f48040) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f48048) = 0;
  return;
}



/* Entry: 103199fc4; end: 103199ff3;  */

void FUN_103199fc4(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  *param_1 = 0;
  return;
}



/* Entry: 103199ff4; end: 10319a05f; -[SCVoiceNotesPreviewController onSessionEnded] */

void FUN_103199ff4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103199f30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10319a060; end: 10319a513;  */

void FUN_10319a060(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar3 = &UNK_110618c48;
  func_0x000107c613fc(&UNK_110618c48,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_110618c70;
  func_0x000107c613fc(&UNK_110618c70,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10319ace4;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x10319ad34;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_110618c88;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4();
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110618cc0;
  func_0x000107c613fc(&UNK_110618cc0,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = unaff_x20;
  puVar7 = &UNK_110618ce8;
  func_0x000107c613fc(&UNK_110618ce8,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x10319ad54;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = FUN_10319afec;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_110618d00;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4();
  puVar9 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_110618d38;
  func_0x000107c613fc(&UNK_110618d38,0x18,7);
  *(undefined8 *)(puVar9 + 0x10) = unaff_x20;
  puVar10 = &UNK_110618d60;
  func_0x000107c613fc(&UNK_110618d60,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_10319ada4;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_80 = (code *)0x10319aff0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_110618d78;
  ppuVar11 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4();
  puVar12 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar12);
  puVar12 = &UNK_110618db0;
  func_0x000107c613fc(&UNK_110618db0,0x18,7);
  *(undefined8 *)(puVar12 + 0x10) = unaff_x20;
  puVar13 = &UNK_110618dd8;
  func_0x000107c613fc(&UNK_110618dd8,0x20,7);
  *(undefined8 *)(puVar13 + 0x10) = 0x10319b024;
  *(undefined **)(puVar13 + 0x18) = puVar12;
  pcStack_80 = (code *)0x10319aff4;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_110618df0;
  ppuVar14 = &puStack_a0;
  puStack_78 = puVar13;
  func_0x000107c60bc4(ppuVar14);
  puVar15 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar13);
  func_0x000107c61574(puVar15);
  puVar15 = &UNK_110618e28;
  func_0x000107c613fc(&UNK_110618e28,0x18,7);
  *(undefined8 *)(puVar15 + 0x10) = unaff_x20;
  puVar16 = &UNK_110618e50;
  func_0x000107c613fc(&UNK_110618e50,0x20,7);
  *(code **)(puVar16 + 0x10) = FUN_10319adf8;
  *(undefined **)(puVar16 + 0x18) = puVar15;
  pcStack_80 = (code *)0x10319aff8;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_110618e68;
  ppuVar17 = &puStack_a0;
  puStack_78 = puVar16;
  func_0x000107c60bc4();
  puVar1 = puStack_78;
  func_0x000107c61174(unaff_x20);
  func_0x000107c6157c(puVar16);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6d8(param_1);
  func_0x000107c60bd0(ppuVar17);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x6c,0xe6,0xd,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10319a504);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x6c,0xe9,0x1d,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10319a508);
    (*pcVar2)();
  }
  puVar3 = puVar10;
  func_0x000107c61544(puVar10,"",0x6c,0xec,0x1f,1);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10319a50c);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  func_0x000107c61544(puVar13,"",0x6c,0xef,0x1e,1);
  func_0x000107c61574(puVar15);
  func_0x000107c61574(puVar13);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar16;
    func_0x000107c61544(puVar16,"",0x6c,0xf4,0x1b,1);
    func_0x000107c61574(puVar16);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10319a514);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10319a510);
  (*pcVar2)();
}



/* Entry: 10319a514; end: 10319a55f;  */

void FUN_10319a514(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10319a560; end: 10319a697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319a560(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  puVar4 = auStack_68;
  func_0x000107c61428(unaff_x20 + 0x10,puVar4,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112f48038);
    func_0x000107c6157c(uVar5);
    func_0x0001000c74f0(&lStack_70);
    func_0x000107c61574(uVar5);
    if (lStack_70 != 0) {
      lVar2 = *(long *)(lVar1 + _DAT_112f48050);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        uVar5 = *(undefined8 *)(lVar1 + _DAT_112f48048);
        lVar3 = lStack_70;
        func_0x000107c52060();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar4);
        }
        func_0x000107c51be4(uVar5,lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c615e8(lVar2);
      }
      if (*(char *)(lVar1 + _DAT_112f48040) == '\x01') {
        *(undefined1 *)(lVar1 + _DAT_112f48040) = 0;
        FUN_1031991d8();
      }
      func_0x000107c61170(lVar1);
      lVar1 = lStack_70;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10319a698; end: 10319a6cb;  */

void FUN_10319a698(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10319a6cc; end: 10319a737; -[SCVoiceNotesPreviewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319a6cc(long param_1)

{
  func_0x00010006c090(*(undefined8 *)(param_1 + _DAT_112f48008),
                      ((undefined8 *)(param_1 + _DAT_112f48008))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f48050));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f48058));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f48030));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f48038));
  return;
}



/* Entry: 10319a738; end: 10319a757;  */

void FUN_10319a738(void)

{
  func_0x000107c61168(&PTR_PTR_1128bdd18);
  return;
}



/* Entry: 10319a758; end: 10319a76b;  */

void FUN_10319a758(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110618ac0;
  if (lRam0000000112f48088 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f48088 = param_1;
  }
  return;
}



/* Entry: 10319a76c; end: 10319a7d7;  */

void FUN_10319a76c(void)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar2 = *(undefined1 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10319a7d8;
  plVar4[2] = lVar1;
  plVar4[3] = lVar3;
  plVar5 = (long *)0x30;
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar4[4] = (long)plVar5;
  *plVar5 = (long)plVar4;
  plVar5[1] = (long)FUN_103199d40;
  plVar5[3] = lVar3;
  *(undefined1 *)(plVar5 + 5) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103199870,0,0);
  return;
}



/* Entry: 10319a7d8; end: 10319a813;  */

void FUN_10319a7d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010319a810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10319a814; end: 10319a88b;  */

void FUN_10319a814(void)

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
  plVar5[1] = 0x10319b008;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10319a88c; end: 10319a8c7;  */

void FUN_10319a88c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010319a8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10319a8c8; end: 10319a94b;  */

void FUN_10319a8c8(undefined8 param_1)

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
  plVar5[1] = 0x10319b010;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10319a94c; end: 10319a9b7;  */

void FUN_10319a94c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010319a988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10319a9b8; end: 10319aa23;  */

void FUN_10319a9b8(void)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined4 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x10319b014;
  plVar4[5] = lVar1;
  plVar4[6] = lVar2;
  *(undefined4 *)(plVar4 + 8) = uVar3;
  func_0x000107c61174(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x103199424,0,0);
  return;
}



/* Entry: 10319aa24; end: 10319aa9b;  */

void FUN_10319aa24(void)

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
  plVar5[1] = 0x10319b018;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10319aa9c; end: 10319aac7;  */

void FUN_10319aa9c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10319aac8; end: 10319ab4b;  */

void FUN_10319aac8(undefined8 param_1)

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
  plVar5[1] = 0x10319b01c;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10319ab4c; end: 10319acc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319ab4c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_58 [24];
  
  ppuVar4 = &puStack_90;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + _DAT_112f48038);
    uStack_80 = param_1;
    func_0x000107c6157c(uVar5);
    func_0x000100075034(FUN_10319afd8,&puStack_90,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar5);
    func_0x000107c4e904(param_1);
    func_0x000107c61180();
    puVar3 = &UNK_110618a98;
    func_0x000107c613fc(&UNK_110618a98,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar2);
    uStack_70 = 0x10319b004;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x10319b000;
    puStack_78 = &UNK_110618c10;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    uVar5 = param_1;
    func_0x000107c5c320(param_1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_1);
    func_0x000107c3e924(uVar5);
    func_0x000107c61170(uVar5);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10319acc8; end: 10319ace3;  */

void FUN_10319acc8(long param_1,long param_2)

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



/* Entry: 10319ace4; end: 10319ada3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319ace4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f48058);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10319ada4; end: 10319ada7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319ada4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f48058);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10319ada8; end: 10319adf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319ada8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f48058);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10319adf8; end: 10319ae8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319adf8(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_103198e14();
  uVar2 = *(undefined8 *)(lVar1 + _DAT_112f48038);
  func_0x000107c6157c(uVar2);
  func_0x000100075034(FUN_103199fc4,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  func_0x000107c42194(*(undefined8 *)(lVar1 + _DAT_112f48030));
  *(undefined1 *)(lVar1 + _DAT_112f48040) = 0;
  *(undefined8 *)(lVar1 + _DAT_112f48048) = 0;
  return;
}



/* Entry: 10319ae90; end: 10319aea7;  */

long FUN_10319ae90(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 10319aea8; end: 10319aeeb;  */

void FUN_10319aea8(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 10319aeec; end: 10319aeef;  */

void FUN_10319aeec(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10319a060(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10319aef0; end: 10319af47;  */

void FUN_10319aef0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10319a060(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10319af48; end: 10319af5b;  */

void FUN_10319af48(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110618ef0;
  if (lRam0000000112f48098 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f48098 = param_1;
  }
  return;
}



/* Entry: 10319af5c; end: 10319af9f;  */

void FUN_10319af5c(long param_1,long *param_2,long param_3)

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



/* Entry: 10319afa0; end: 10319afd7;  */

void FUN_10319afa0(long param_1,long param_2)

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



/* Entry: 10319afd8; end: 10319afeb;  */

void FUN_10319afd8(void)

{
  FUN_10319aea8();
  return;
}



/* Entry: 10319afec; end: 10319b047;  */

void FUN_10319afec(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10319b048; end: 10319b09f;  */

void FUN_10319b048(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112f467d8,&UNK_10db93a70);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 10319b0a0; end: 10319b0a7;  */

void FUN_10319b0a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  FUN_10319be08(0);
  func_0x000107c610f8();
  func_0x00010319bcac(uVar1,1);
  *param_1 = uVar1;
  return;
}



/* Entry: 10319b0a8; end: 10319b11f;  */

void FUN_10319b0a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  FUN_10319be08(0);
  func_0x000107c610f8();
  func_0x00010319bcac(uVar1,param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10319b120; end: 10319b13f;  */

undefined1  [16] FUN_10319b120(void)

{
  return ZEXT816(0x110618f98);
}



/* Entry: 10319b140; end: 10319b15f; -[_TtC22SCChatInputEditMessage30ChatInputEditMessageController inputItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319b140(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f480b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10319b160; end: 10319b173; -[_TtC22SCChatInputEditMessage30ChatInputEditMessageController setInputItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319b160(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f480b8,param_3);
  return;
}



/* Entry: 10319b174; end: 10319b193; -[_TtC22SCChatInputEditMessage30ChatInputEditMessageController inputController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319b174(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f480c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10319b194; end: 10319b1a7; -[_TtC22SCChatInputEditMessage30ChatInputEditMessageController setInputController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319b194(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f480c0,param_3);
  return;
}



/* Entry: 10319b1a8; end: 10319b24b;  */

/* WARNING: Possible PIC construction at 0x00010319b218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319b230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319b21c) */
/* WARNING: Removing unreachable block (ram,0x00010319b248) */
/* WARNING: Removing unreachable block (ram,0x00010319b220) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319b1a8(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126b2950;
  func_0x000107c61168(PTR_PTR_1126b2950);
  if ((param_1 & 1) == 0) {
    func_0x000107c4cdb4();
  }
  else {
    func_0x000107c4cdb0();
  }
  func_0x000107c61180();
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f480a0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c3f888();
    func_0x000107c61180();
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10319b24c; end: 10319b28f; -[_TtC22SCChatInputEditMessage30ChatInputEditMessageController didSelectInputItem:] */

void FUN_10319b24c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10319b3e0();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10319b290; end: 10319b293; -[_TtC22SCChatInputEditMessage30ChatInputEditMessageController didDeselectInputItem:] */

void FUN_10319b290(void)

{
  return;
}



/* Entry: 10319b294; end: 10319b297; -[_TtC22SCChatInputEditMessage30ChatInputEditMessageController didCollapseInputItem:] */

void FUN_10319b294(void)

{
  return;
}



/* Entry: 10319b298; end: 10319b29b; -[_TtC22SCChatInputEditMessage30ChatInputEditMessageController didUncollapseInputItem:] */

void FUN_10319b298(void)

{
  return;
}



/* Entry: 10319b29c; end: 10319b2fb; -[_TtC22SCChatInputEditMessage30ChatInputEditMessageController init] */

void FUN_10319b29c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatInputEditMessage.ChatInputEditMessageController",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10319b2c8);
  (*pcVar1)();
}



/* Entry: 10319b2fc; end: 10319b353; -[_TtC22SCChatInputEditMessage30ChatInputEditMessageController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010319b338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319b33c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10319b2fc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f480a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f480a8));
  param_1 = param_1 + _DAT_112f480b8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10319b354; end: 10319b373;  */

void FUN_10319b354(void)

{
  func_0x000107c61168(&PTR_PTR_1128bde20);
  return;
}



/* Entry: 10319b374; end: 10319b39b;  */

void FUN_10319b374(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110619060;
  if (lRam0000000112f480f0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f480f0 = param_1;
  }
  return;
}



/* Entry: 10319b39c; end: 10319b3df;  */

void FUN_10319b39c(long param_1,long *param_2,long param_3)

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



/* Entry: 10319b3e0; end: 10319b45f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319b3e0(void)

{
  char cVar1;
  long lVar2;
  long unaff_x20;
  
  cVar1 = *(char *)(unaff_x20 + _DAT_112f480b0);
  FUN_10319b1a8(cVar1 == '\0');
  lVar2 = unaff_x20 + _DAT_112f480c0;
  func_0x000107c61618();
  if (cVar1 == '\0') {
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c3fb20(lVar2);
  }
  else {
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c4ea1c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10319b460; end: 10319b473;  */

bool FUN_10319b460(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10319b474; end: 10319b51f;  */

void FUN_10319b474(void)

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



/* Entry: 10319b520; end: 10319b523;  */

void FUN_10319b520(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f48100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db950d0;
  func_0x000107c61520(&UNK_10db950d0,&UNK_110619110);
  puRam0000000112f48100 = puVar1;
  return;
}



/* Entry: 10319b524; end: 10319b563;  */

void FUN_10319b524(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f48100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db950d0;
  func_0x000107c61520(&UNK_10db950d0,&UNK_110619110);
  puRam0000000112f48100 = puVar1;
  return;
}



/* Entry: 10319b564; end: 10319b6c7;  */

int FUN_10319b564(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10319b5e0;
        goto LAB_10319b5c4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10319b5c4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10319b5e0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10319b6c8; end: 10319b6e7; -[_TtC22SCChatInputEditMessage26ChatInputEditMessagePlugin inputContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319b6c8(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f48120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10319b6e8; end: 10319b6fb; -[_TtC22SCChatInputEditMessage26ChatInputEditMessagePlugin setInputContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319b6e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f48120,param_3);
  return;
}



/* Entry: 10319b6fc; end: 10319b71b; -[_TtC22SCChatInputEditMessage26ChatInputEditMessagePlugin inputItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319b6fc(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f48128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10319b71c; end: 10319b72f; -[_TtC22SCChatInputEditMessage26ChatInputEditMessagePlugin setInputItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319b71c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f48128,param_3);
  return;
}



/* Entry: 10319b730; end: 10319b73f; -[_TtC22SCChatInputEditMessage26ChatInputEditMessagePlugin position] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10319b730(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f48130);
}



/* Entry: 10319b740; end: 10319b74f; -[_TtC22SCChatInputEditMessage26ChatInputEditMessagePlugin setPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319b740(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112f48130) = param_3;
  return;
}



/* Entry: 10319b750; end: 10319b75f; -[_TtC22SCChatInputEditMessage26ChatInputEditMessagePlugin pluginType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10319b750(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f48138);
}



/* Entry: 10319b760; end: 10319b76f; -[_TtC22SCChatInputEditMessage26ChatInputEditMessagePlugin setPluginType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319b760(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112f48138) = param_3;
  return;
}



/* Entry: 10319b770; end: 10319b98f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319b770(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f48120,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f48128,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f48130) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f48138) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112f48108) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f48110) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112f48118) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10319b990; end: 10319b9df; -[_TtC22SCChatInputEditMessage26ChatInputEditMessagePlugin configureInputItem:] */

/* WARNING: Possible PIC construction at 0x00010319b9c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319b9cc) */

void FUN_10319b990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010319b834(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10319b9e0; end: 10319bac3; -[_TtC22SCChatInputEditMessage26ChatInputEditMessagePlugin createItemController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319b9e0(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112f48108);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112f48110);
  uVar1 = *(undefined1 *)(param_1 + _DAT_112f48118);
  lVar3 = 0;
  FUN_10319b354();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112f480b8,0);
  func_0x000107c61614(lVar4 + _DAT_112f480c0,0);
  *(undefined8 *)(lVar4 + _DAT_112f480a0) = uVar5;
  *(undefined8 *)(lVar4 + _DAT_112f480a8) = uVar6;
  *(undefined1 *)(lVar4 + _DAT_112f480b0) = uVar1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61154(&lStack_50,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10319bac4; end: 10319bacb; -[_TtC22SCChatInputEditMessage26ChatInputEditMessagePlugin createDrawer] */

void FUN_10319bac4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10319bacc; end: 10319bb2b; -[_TtC22SCChatInputEditMessage26ChatInputEditMessagePlugin init] */

void FUN_10319bacc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatInputEditMessage.ChatInputEditMessagePlugin",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10319baf8);
  (*pcVar1)();
}



/* Entry: 10319bb2c; end: 10319bb83; -[_TtC22SCChatInputEditMessage26ChatInputEditMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010319bb68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319bb6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10319bb2c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f48108));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f48110));
  param_1 = param_1 + _DAT_112f48120;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10319bb84; end: 10319bba3;  */

void FUN_10319bb84(void)

{
  func_0x000107c61168(&PTR_PTR_1128bdf00);
  return;
}



/* Entry: 10319bba4; end: 10319bbe7; -[_TtC22SCChatInputEditMessage28ChatInputEditMessageProvider providerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10319bba4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f48168;
  func_0x000107c61428(param_1 + _DAT_112f48168,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 10319bbe8; end: 10319bd1f; -[_TtC22SCChatInputEditMessage28ChatInputEditMessageProvider setProviderType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319bbe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f48168;
  func_0x000107c61428(param_1 + _DAT_112f48168,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10319bd20; end: 10319bd8f; -[_TtC22SCChatInputEditMessage28ChatInputEditMessageProvider createPluginWithActiveConversationInformation:replyAllGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319bd20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f48170);
  FUN_10319bb84(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar1);
  FUN_10319b770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10319bd90; end: 10319bd97; -[_TtC22SCChatInputEditMessage28ChatInputEditMessageProvider createObserverWithActiveConversationInformation:replyAllGroupId:] */

void FUN_10319bd90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10319bd98; end: 10319bdf7; -[_TtC22SCChatInputEditMessage28ChatInputEditMessageProvider init] */

void FUN_10319bd98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatInputEditMessage.ChatInputEditMessageProvider",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10319bdc4);
  (*pcVar1)();
}



/* Entry: 10319bdf8; end: 10319be07; -[_TtC22SCChatInputEditMessage28ChatInputEditMessageProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319bdf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f48170));
  return;
}



/* Entry: 10319be08; end: 10319be27;  */

void FUN_10319be08(void)

{
  func_0x000107c61168(&PTR_PTR_1128bdff0);
  return;
}



/* Entry: 10319be28; end: 10319c00f;  */

void FUN_10319be28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f467d8,&UNK_10db93a70);
  puVar1 = &UNK_110619210;
  func_0x000107c613fc(&UNK_110619210,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(0x10319becc,puVar1);
  return;
}



/* Entry: 10319c010; end: 10319c01f;  */

undefined1  [16] FUN_10319c010(void)

{
  return ZEXT816(0x110619238);
}



/* Entry: 10319c020; end: 10319c1bb;  */

void FUN_10319c020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f467d8,&UNK_10db93a70);
  puVar1 = &UNK_110619300;
  func_0x000107c613fc(&UNK_110619300,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x10319c0b8,puVar1);
  return;
}



/* Entry: 10319c1bc; end: 10319c1cb;  */

undefined1  [16] FUN_10319c1bc(void)

{
  return ZEXT816(0x110619328);
}



/* Entry: 10319c1cc; end: 10319c24b;  */

void FUN_10319c1cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f467d8,&UNK_10db93a70);
  puVar1 = &UNK_1106193f0;
  func_0x000107c613fc(&UNK_1106193f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10319c24c,puVar1);
  return;
}



/* Entry: 10319c24c; end: 10319c3e3;  */

void FUN_10319c24c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  uVar1 = uStack_58;
  func_0x0001000285a8(0x112d655b0,&UNK_10d92a3c0);
  uVar5 = uVar1;
  func_0x000107c4d490(uVar1);
  func_0x000107c61180();
  uVar2 = uVar5;
  func_0x000100759c94();
  func_0x000107c61170(uVar5);
  uVar5 = 0x112d655b8;
  func_0x0001000285a8(0x112d655b8,&UNK_10db95230);
  uVar3 = 0;
  func_0x000100759f5c(0,1,FUN_10319c3f4,0,uVar5);
  func_0x000107c61574(uVar2);
  func_0x0001000285a8(0x112f481a8,&UNK_10db9c1e0);
  uVar5 = uVar1;
  func_0x000107c406f4(uVar1);
  func_0x000107c61180();
  uVar2 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  func_0x0001000285a8(0x112d61fd0,&UNK_10d9295a0);
  func_0x000100083b20(&uStack_58);
  uVar5 = uStack_58;
  func_0x000107c4cdb8(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  uVar4 = uVar5;
  func_0x0001000bda74(uVar5);
  func_0x000107c61170(uVar5);
  uVar5 = 0;
  FUN_10319d89c(0);
  func_0x000107c610f8();
  func_0x00010319d5dc(uVar3,uVar2,uVar4,uVar5);
  func_0x000107c61170(uVar1);
  *param_1 = uVar3;
  return;
}



/* Entry: 10319c3e4; end: 10319c3f3;  */

undefined1  [16] FUN_10319c3e4(void)

{
  return ZEXT816(0x110619418);
}



/* Entry: 10319c3f4; end: 10319c40f;  */

void FUN_10319c3f4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c615f0();
  return;
}



/* Entry: 10319c410; end: 10319c42f; -[_TtC36SCChatInputStopQueryPluginEntryPoint30SCChatInputStopQueryController inputItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319c410(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f481b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10319c430; end: 10319c443; -[_TtC36SCChatInputStopQueryPluginEntryPoint30SCChatInputStopQueryController setInputItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319c430(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f481b0,param_3);
  return;
}



/* Entry: 10319c444; end: 10319c463; -[_TtC36SCChatInputStopQueryPluginEntryPoint30SCChatInputStopQueryController inputController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319c444(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f481b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10319c464; end: 10319c477; -[_TtC36SCChatInputStopQueryPluginEntryPoint30SCChatInputStopQueryController setInputController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319c464(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f481b8,param_3);
  return;
}



/* Entry: 10319c478; end: 10319c5ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319c478(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  long *plStack_48;
  
  func_0x0001000d224c(&plStack_48);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48;
    func_0x000107c51e58();
    func_0x000107c61180();
    func_0x000107c615e8(plStack_48);
    if (plVar1 != (long *)0x0) {
      func_0x0001000285a8(0x112f48220,&UNK_10db95298);
      plVar2 = plVar1;
      func_0x0001000b637c();
      plVar3 = plVar2;
      FUN_10319ceb0();
      func_0x000104884898();
      func_0x000107c61574(plVar2);
      puVar4 = &UNK_1106194e0;
      func_0x000107c613fc(&UNK_1106194e0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      pcVar5 = FUN_10319cf44;
      puVar7 = puVar4;
      (**(code **)(*plVar3 + 0x60))(FUN_10319cf44);
      func_0x000107c61574(plVar3);
      func_0x000107c61574(puVar4);
      pcVar6 = pcVar5;
      func_0x000107c614f0(pcVar5);
      (**(code **)(puVar7 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f481e8),pcVar6,puVar7);
      func_0x000107c61170(plVar1);
      func_0x000107c615e8(pcVar5);
    }
  }
  return;
}



/* Entry: 10319c5ac; end: 10319c823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319c5ac(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar11 = (undefined *)*param_1;
  cVar1 = *(char *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  puVar4 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar4 == (undefined *)0x0) {
    return;
  }
  if (cVar1 == '\x01') {
    iVar3 = 2;
    puStack_a8 = puVar11;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_a8,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
  }
  else {
    func_0x000107c44174();
    func_0x000107c61180();
    if (puVar11 != (undefined *)0x0) {
      lVar12 = *(long *)((long)(puVar4 + _DAT_112f481e0) + 8);
      if (lVar12 != 0) {
        lVar13 = *(long *)(puVar4 + _DAT_112f481e0);
        FUN_10319cf04(0,0x112d4e810,&PTR_PTR_1126b0cd8);
        func_0x000107c61434(lVar12);
        func_0x000103c1912c(lVar13,lVar12);
        if (lVar13 != 0) {
          puVar6 = &UNK_110619508;
          func_0x000107c613fc(&UNK_110619508,0x18,7);
          *(long *)(puVar6 + 0x10) = lVar13;
          puVar7 = &UNK_110619530;
          func_0x000107c613fc(&UNK_110619530,0x18,7);
          *(long *)(puVar7 + 0x10) = lVar13;
          puVar8 = PTR_PTR_1126b2730;
          func_0x000107c610f8(PTR_PTR_1126b2730);
          puVar2 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x10319ce8c;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_110619548;
          ppuVar9 = &puStack_a8;
          puStack_80 = puVar6;
          func_0x000107c60bc4(ppuVar9);
          uStack_b8 = 0x10319ce90;
          puStack_d8 = puVar2;
          uStack_d0 = 0x42000000;
          puStack_c8 = &UNK_1011adf84;
          puStack_c0 = &UNK_110619570;
          ppuVar10 = &puStack_d8;
          puStack_b0 = puVar7;
          func_0x000107c60bc4(ppuVar10);
          func_0x000107c61174(lVar13);
          func_0x000107c61174();
          func_0x000107c48b60(puVar8);
          func_0x000107c60bd0(ppuVar10);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c61574(puStack_b0);
          func_0x000107c61574(puStack_80);
          func_0x000107c3f4e8(puVar11);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(lVar13);
          puVar4 = puVar8;
          goto LAB_10319c800;
        }
      }
      func_0x000107c61170(puVar4);
      puVar4 = puVar11;
    }
  }
LAB_10319c800:
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 10319c824; end: 10319c867; -[_TtC36SCChatInputStopQueryPluginEntryPoint30SCChatInputStopQueryController didSelectInputItem:] */

void FUN_10319c824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10319cdd8();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10319c868; end: 10319c86b; -[_TtC36SCChatInputStopQueryPluginEntryPoint30SCChatInputStopQueryController didDeselectInputItem:] */

void FUN_10319c868(void)

{
  return;
}


