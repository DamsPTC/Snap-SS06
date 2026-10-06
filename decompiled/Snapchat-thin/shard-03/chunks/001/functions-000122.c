/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10257fcec; end: 10257fd3f;  */

void FUN_10257fcec(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    pcVar1 = FUN_10257fd40;
  }
  else {
    pcVar1 = FUN_10257ff44;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0xa8),*(undefined8 *)(lVar2 + 0xb0));
  return;
}



/* Entry: 10257fd40; end: 10257ff43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257fd40(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  cVar1 = *(char *)(unaff_x22 + 0xd0);
  func_0x000107c61170(uVar6);
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar7 = *(long *)(unaff_x22 + 0x50);
  lVar3 = lVar7;
  func_0x000107c4ec94();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  lVar7 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar7 != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x22 + 0x90) + 0x10) + 1;
    puVar4 = (undefined8 *)(*(long *)(unaff_x22 + 0x90) + 0x28);
    do {
      lVar3 = lVar3 + -1;
      if (lVar3 == 0) {
        uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
        func_0x000107c615e8(lVar7);
        uVar8 = 0;
        goto LAB_10257fee0;
      }
      uVar6 = puVar4[-1];
      uVar8 = *puVar4;
      func_0x000107c61434(uVar8);
      func_0x000107c5fadc(uVar6,uVar8);
      lVar2 = lVar7;
      func_0x000107c4b91c();
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(uVar8);
      puVar4 = puVar4 + 2;
    } while (lVar2 == 0);
    func_0x000107c615e8(lVar7);
  }
  if (cVar1 == '\0') {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar8 = 2;
LAB_10257fee0:
    FUN_10257ffb8(uVar6,uVar8);
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0x90);
    if (1 < *(ulong *)(lVar3 + 0x10)) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
      FUN_1025802f4();
      func_0x000100083b20(unaff_x22 + 0x50);
      lVar7 = *(long *)(unaff_x22 + 0x50);
      uVar8 = *(undefined8 *)(lVar7 + _DAT_112fccff0);
      func_0x000107c615f0(uVar8);
      func_0x000107c61170(lVar7);
      func_0x000107c3e2c0(uVar8);
      func_0x000107c615e8(uVar6);
      func_0x000107c615e8(uVar8);
      func_0x000107c61170(lVar3);
      goto LAB_10257feec;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    if (*(ulong *)(lVar3 + 0x10) != 0) {
      uVar6 = *(undefined8 *)(lVar3 + 0x20);
      uVar8 = *(undefined8 *)(lVar3 + 0x28);
      func_0x000107c61434(uVar8);
      FUN_1025807ec(uVar6,uVar8);
      func_0x000107c615e8(uVar5);
      func_0x000107c6142c(uVar8);
      goto LAB_10257feec;
    }
  }
  func_0x000107c615e8(uVar5);
LAB_10257feec:
                    /* WARNING: Could not recover jumptable at 0x00010257ff08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10257ff44; end: 10257ffb7;  */

void FUN_10257ff44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c61654();
  func_0x000107c615e8(uVar3);
  func_0x000107c614ac(uVar2);
  func_0x000107c61170(uVar1);
  FUN_10257ffb8(*(undefined8 *)(unaff_x22 + 0x90),2);
                    /* WARNING: Could not recover jumptable at 0x00010257ffb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10257ffb8; end: 102580257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257ffb8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  if ((param_2 != 1) &&
     (FUN_102581898(param_1,param_2 == 0,&UNK_106875124,&UNK_10687513c,&UNK_106875154), param_1 != 0
     )) {
    puVar2 = &UNK_110522228;
    func_0x000107c613fc(&UNK_110522228,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
    *(long *)(puVar2 + 0x18) = param_1;
    puVar5 = &UNK_110522250;
    func_0x000107c613fc(&UNK_110522250,0x20,7);
    *(undefined **)(puVar5 + 0x10) = &UNK_10dab9af8;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    uVar3 = 0x22;
    func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9b00,puVar5,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(uVar3);
  }
  func_0x000100083b20(&puStack_88);
  puVar5 = puStack_88;
  lVar1 = _DAT_112fccff8;
  func_0x000107c61428(puStack_88 + _DAT_112fccff8,auStack_58,0,0);
  puVar2 = puVar5 + lVar1;
  func_0x000107c61618();
  func_0x000107c61170(puVar5);
  if (puVar2 != (undefined *)0x0) {
    puVar5 = puVar2;
    func_0x000107c61150(puVar2,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_onShareLocationActionCompletedWi_1126173d0);
    if (((ulong)puVar5 & 1) != 0) {
      func_0x000107c4dd2c(puVar2);
    }
    func_0x000107c615e8(puVar2);
  }
  if (param_2 == 0) {
    func_0x000100083b20(&puStack_88);
    puVar5 = *(undefined **)(puStack_88 + _DAT_112fccff0);
    func_0x000107c615f0(puVar5);
    func_0x000107c61170(puStack_88);
    puVar2 = &UNK_1105221d8;
    func_0x000107c613fc(&UNK_1105221d8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uStack_68 = 0x102585560;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000b0c7c;
    puStack_70 = &UNK_1105221f0;
    ppuVar4 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_60);
    func_0x000107c41864(puVar5);
    func_0x000107c60bd0(ppuVar4);
  }
  else {
    func_0x000100083b20(&puStack_88);
    puVar2 = puStack_88;
    lVar1 = _DAT_112fccff8;
    func_0x000107c61428(puStack_88 + _DAT_112fccff8,&puStack_88,0,0);
    puVar5 = puVar2 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(puVar2);
    if (puVar5 == (undefined *)0x0) {
      return;
    }
    func_0x000107c5a954(puVar5);
  }
  func_0x000107c615e8(puVar5);
  return;
}



/* Entry: 102580258; end: 1025802f3;  */

void FUN_102580258(long param_1,undefined1 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  FUN_10258573c(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  **(undefined1 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 1025802f4; end: 1025807eb;  */

undefined * FUN_1025802f4(undefined8 ****param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  
  ppppuVar3 = param_1;
  func_0x00010687516c();
  func_0x000107c61180();
  if (ppppuVar3 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1025807d8);
    (*pcVar2)();
  }
  ppppuVar4 = ppppuVar3;
  func_0x000107c5faec();
  func_0x000107c61170(ppppuVar3);
  ppppuVar3 = &pppuStack_b0;
  ppppuVar15 = (undefined8 ****)PTR___sSSN_11034da80;
  pppuStack_b0 = ppppuVar4;
  pppuStack_a8 = (undefined8 ***)param_2;
  func_0x000107c5fbd4(ppppuVar3,PTR___sSSN_11034da80,
                      PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0);
  ppppuVar4 = ppppuVar3;
  ppppuVar6 = ppppuVar15;
  func_0x000106875184();
  func_0x000107c61180();
  if (ppppuVar4 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1025807dc);
    (*pcVar2)();
  }
  ppppuVar5 = ppppuVar4;
  func_0x000107c5faec();
  func_0x000107c61170(ppppuVar4);
  ppppuVar4 = &pppuStack_b0;
  ppppuVar16 = (undefined8 ****)PTR___sSSN_11034da80;
  pppuStack_b0 = ppppuVar5;
  pppuStack_a8 = ppppuVar6;
  func_0x000107c5fbd4(ppppuVar4,PTR___sSSN_11034da80,
                      PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0);
  ppppuVar6 = param_1;
  pppuStack_80 = ppppuVar4;
  pppuStack_78 = ppppuVar16;
  FUN_102582eb8();
  if (0 < (long)ppppuVar6) {
    if (ppppuVar6 == (undefined8 ****)0x1) {
      func_0x0001068751b4();
      func_0x000107c61180();
      if (ppppuVar6 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1025807e8);
        (*pcVar2)();
      }
      ppppuVar4 = ppppuVar6;
      func_0x000107c5faec();
      func_0x000107c61170(ppppuVar6);
      ppppuVar6 = (undefined8 ****)PTR___sSSN_11034da80;
      pppuStack_b0 = ppppuVar4;
      pppuStack_a8 = ppppuVar16;
      func_0x000107c5fbd4(&pppuStack_b0,PTR___sSSN_11034da80,
                          PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,
                          PTR___sSSSTsWP_11034daa0);
    }
    else {
      ppppuVar4 = ppppuVar6;
      func_0x00010687519c();
      func_0x000107c61180();
      if (ppppuVar4 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1025807ec);
        (*pcVar2)();
      }
      ppppuVar5 = ppppuVar4;
      func_0x000107c5faec();
      func_0x000107c61170(ppppuVar4);
      lVar7 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      puVar8 = PTR___sSiN_11034deb0;
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      puVar9 = PTR___sSis7CVarArgsWP_11034df08;
      *(undefined **)(lVar7 + 0x38) = puVar8;
      *(undefined **)(lVar7 + 0x40) = puVar9;
      *(undefined8 *****)(lVar7 + 0x20) = ppppuVar6;
      ppppuVar6 = ppppuVar16;
      func_0x000107c5fb00(ppppuVar5,ppppuVar16,lVar7);
      func_0x000107c6142c(ppppuVar16);
    }
    func_0x000107c5fb78();
    func_0x000107c6142c();
  }
  func_0x0001068750c4();
  func_0x000107c61180();
  if (ppppuVar6 != (undefined8 ****)0x0) {
    puVar8 = &UNK_1105221d8;
    func_0x000107c613fc(&UNK_1105221d8,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    puVar9 = &UNK_1105224a8;
    func_0x000107c613fc(&UNK_1105224a8,0x20,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(undefined8 *****)(puVar9 + 0x18) = param_1;
    puVar14 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_90 = FUN_102585938;
    pppuStack_b0 = (undefined8 ***)PTR___NSConcreteStackBlock_11034bd00;
    pppuStack_a8 = (undefined8 ***)0x42000000;
    puStack_a0 = &UNK_100de205c;
    puStack_98 = &UNK_1105224c0;
    ppppuVar4 = &pppuStack_b0;
    puStack_88 = puVar9;
    func_0x000107c60bc4(ppppuVar4);
    puVar10 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    func_0x000107c6157c(puVar8);
    func_0x000107c61434(param_1);
    puVar11 = puVar10;
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppppuVar4);
    func_0x000107c61170(ppppuVar6);
    puVar9 = puStack_88;
    func_0x000107c61574(puVar8);
    func_0x000107c61574();
    func_0x000106874f74();
    func_0x000107c61180();
    if (puVar9 != (undefined *)0x0) {
      puVar8 = &UNK_1105221d8;
      func_0x000107c613fc(&UNK_1105221d8,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      puVar12 = &UNK_1105224f8;
      func_0x000107c613fc(&UNK_1105224f8,0x20,7);
      *(undefined **)(puVar12 + 0x10) = puVar8;
      *(undefined8 *****)(puVar12 + 0x18) = param_1;
      pcStack_90 = FUN_10258596c;
      pppuStack_b0 = (undefined8 ***)puVar14;
      pppuStack_a8 = (undefined8 ***)0x42000000;
      puStack_a0 = &UNK_100de205c;
      puStack_98 = &UNK_110522510;
      ppppuVar4 = &pppuStack_b0;
      puStack_88 = puVar12;
      func_0x000107c60bc4(ppppuVar4);
      func_0x000107c61434(param_1);
      func_0x000107c6157c(puVar8);
      func_0x000107c3dad0();
      func_0x000107c61180();
      func_0x000107c60bd0(ppppuVar4);
      func_0x000107c61170(puVar9);
      puVar9 = puStack_88;
      func_0x000107c61574(puVar8);
      func_0x000107c61574();
      pppuVar1 = pppuStack_78;
      ppppuVar4 = (undefined8 ****)pppuStack_80;
      func_0x000100de9c28();
      func_0x000107c613fc();
      *(undefined8 *)(puVar9 + 0x18) = 5;
      *(undefined8 *)(puVar9 + 0x10) = 2;
      *(undefined **)(puVar9 + 0x20) = puVar11;
      *(undefined **)(puVar9 + 0x28) = puVar10;
      puVar8 = PTR_PTR_1126aed78;
      func_0x000107c610f8(PTR_PTR_1126aed78);
      func_0x000107c61174(puVar11);
      func_0x000107c61174(puVar10);
      func_0x000107c5fadc(ppppuVar3,ppppuVar15);
      func_0x000107c6142c(ppppuVar15);
      func_0x000107c5fadc(ppppuVar4,pppuVar1);
      uVar13 = 0;
      FUN_102585aa0(0,0x112d360a8,&PTR_PTR_1126aed70);
      puVar14 = puVar9;
      func_0x000107c5fc48(puVar9,uVar13);
      func_0x000107c61574(puVar9);
      func_0x000107c48d50(puVar8);
      func_0x000107c61170(ppppuVar3);
      func_0x000107c61170(ppppuVar4);
      func_0x000107c61170(puVar14);
      func_0x000107c53fcc(puVar8);
      func_0x000107c6142c(pppuVar1);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar10);
      return puVar8;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1025807e4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1025807e0);
  (*pcVar2)();
}



/* Entry: 1025807ec; end: 102580a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025807ec(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long alStack_68 [3];
  
  if (*(long *)(unaff_x20 + _DAT_112ea6968) == 0) {
    func_0x000100083b20(alStack_68);
    lVar2 = alStack_68[0];
    lVar1 = *(long *)(alStack_68[0] + _DAT_112fcd5d8);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      uVar3 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      lVar1 = lVar2;
      func_0x000107c4c39c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar3);
      if (lVar1 != 0) {
        func_0x000100083b20(alStack_68);
        lVar2 = alStack_68[0];
        func_0x000107c4ec94();
        func_0x000107c61180();
        func_0x000107c61170(alStack_68[0]);
        lVar4 = lVar2;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar4 != 0) {
          uVar3 = param_1;
          func_0x000107c5fadc(param_1,param_2);
          lVar2 = lVar4;
          func_0x000107c4b91c(lVar4);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(uVar3);
          func_0x00010258219c(param_1,param_2,lVar2);
          if ((param_1 & 1) != 0) {
            func_0x000101161440();
            func_0x000107c613fc();
            *(undefined8 *)(param_1 + 0x18) = 3;
            *(undefined8 *)(param_1 + 0x10) = 1;
            *(long *)(param_1 + 0x20) = lVar1;
            func_0x000107c61174(lVar1);
            func_0x000102582360(param_1,lVar2);
            func_0x000107c61170(lVar1);
            func_0x000107c61574(param_1);
            return;
          }
        }
        func_0x000107c61170(lVar1);
        return;
      }
    }
  }
  func_0x000100083b20(alStack_68);
  lVar2 = _DAT_112fccff8;
  func_0x000107c61428(alStack_68[0] + _DAT_112fccff8,alStack_68,0,0);
  lVar2 = alStack_68[0] + lVar2;
  func_0x000107c61618();
  func_0x000107c61170(alStack_68[0]);
  if (lVar2 != 0) {
    func_0x000107c5a954(lVar2);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102580a40; end: 102580b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102580a40(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c4ec90();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    puVar3 = &UNK_110522598;
    func_0x000107c613fc(&UNK_110522598,0x28,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = unaff_x20;
    func_0x000107c615f0(lVar2);
    func_0x000107c61434(param_1);
    func_0x000107c61174();
    uVar4 = 0x22;
    func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9ba8,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 102580b50; end: 102580b6b;  */

void FUN_102580b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102580b6c,0,0);
  return;
}



/* Entry: 102580b6c; end: 102580c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102580b6c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(lVar2 + _DAT_112ea69c0);
  func_0x000100083b20(unaff_x22 + 0x50);
  func_0x000107c61170();
  uVar1 = 0;
  FUN_102585aa0(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar1;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102580c94;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,1);
  uVar1 = 0x112d61d38;
  func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
  *(long *)(unaff_x22 + 0x70) = lVar2;
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_101b778cc;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1105225b0;
  func_0x000107c5be7c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102580c94; end: 102580ceb;  */

void FUN_102580c94(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xc0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_102580cec;
  }
  else {
    pcVar1 = FUN_102580e9c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102580cec; end: 102580e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102580cec(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c61170(uVar6);
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar2 = _DAT_112fccff8;
  lVar7 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61428(lVar7 + _DAT_112fccff8,unaff_x22 + 0x50,0,0);
  uVar1 = lVar7 + lVar2;
  func_0x000107c61618();
  func_0x000107c61170(lVar7);
  if (uVar1 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x98);
    FUN_102581898(lVar2,*(long *)(unaff_x22 + 0xc0) == 0,&UNK_1068750dc,&UNK_1068750f4,
                  &UNK_10687510c);
    if (lVar2 != 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
      puVar3 = &UNK_1105225e8;
      func_0x000107c613fc(&UNK_1105225e8,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = uVar6;
      *(long *)(puVar3 + 0x18) = lVar2;
      puVar4 = &UNK_110522610;
      func_0x000107c613fc(&UNK_110522610,0x20,7);
      *(undefined **)(puVar4 + 0x10) = &UNK_10dab9bc0;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      func_0x000107c61174(uVar6);
      func_0x000107c61174(lVar2);
      func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9bc8,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574();
      func_0x000107c61574(puVar4);
      func_0x000107c61170(lVar2);
    }
    uVar5 = uVar1;
    func_0x000107c61150(uVar1,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_onShareLocationActionCompletedWi_1126173d0);
    if ((uVar5 & 1) != 0) {
      func_0x000107c4dd2c(uVar1);
    }
    func_0x000107c5a954(uVar1);
    func_0x000107c615e8(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102580e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102580e9c; end: 10258105f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102580e9c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61654();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c614ac(uVar1);
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar3 = _DAT_112fccff8;
  lVar7 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61428(lVar7 + _DAT_112fccff8,unaff_x22 + 0x50,0,0);
  uVar2 = lVar7 + lVar3;
  func_0x000107c61618();
  func_0x000107c61170(lVar7);
  if (uVar2 != 0) {
    lVar3 = *(long *)(unaff_x22 + 0x98);
    FUN_102581898(lVar3,*(long *)(unaff_x22 + 0xc0) == 0,&UNK_1068750dc,&UNK_1068750f4,
                  &UNK_10687510c);
    if (lVar3 != 0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
      puVar4 = &UNK_1105225e8;
      func_0x000107c613fc(&UNK_1105225e8,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar8;
      *(long *)(puVar4 + 0x18) = lVar3;
      puVar5 = &UNK_110522610;
      func_0x000107c613fc(&UNK_110522610,0x20,7);
      *(undefined **)(puVar5 + 0x10) = &UNK_10dab9bc0;
      *(undefined **)(puVar5 + 0x18) = puVar4;
      func_0x000107c61174(uVar8);
      func_0x000107c61174(lVar3);
      func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9bc8,puVar5,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574();
      func_0x000107c61574(puVar5);
      func_0x000107c61170(lVar3);
    }
    uVar6 = uVar2;
    func_0x000107c61150(uVar2,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_onShareLocationActionCompletedWi_1126173d0);
    if ((uVar6 & 1) != 0) {
      func_0x000107c4dd2c(uVar2);
    }
    func_0x000107c5a954(uVar2);
    func_0x000107c615e8(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010258105c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102581060; end: 10258112b;  */

void FUN_102581060(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = &UNK_110522278;
    func_0x000107c613fc(&UNK_110522278,0x18,7);
    *(long *)(puVar1 + 0x10) = param_1;
    func_0x000107c61174(param_1);
    uVar2 = 0x22;
    func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9b10,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 10258112c; end: 102581143;  */

void FUN_10258112c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102581144,0,0);
  return;
}



/* Entry: 102581144; end: 102581267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102581144(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0xa8);
  lVar1 = _DAT_112fccff8;
  lVar3 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c61428(lVar3 + _DAT_112fccff8,unaff_x22 + 0x90,0,0);
  lVar1 = lVar3 + lVar1;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xc0) = lVar1;
  func_0x000107c61170(lVar3);
  if (lVar1 != 0) {
    func_0x000100083b20(unaff_x22 + 0xb0);
    lVar4 = *(long *)(unaff_x22 + 0xb0);
    lVar3 = lVar4;
    func_0x000107c5d9dc();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 200) = lVar4;
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      plVar2 = (long *)0x30;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xd0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_102581268;
      plVar2[3] = *(long *)(unaff_x22 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_102581500,0,0);
      return;
    }
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102581264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102581268; end: 1025812b7;  */

void FUN_102581268(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0xe9) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025812b8,0,0);
  return;
}



/* Entry: 1025812b8; end: 1025813cb;  */

void FUN_1025812b8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xe9) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x22 + 200);
    *(undefined ***)(unaff_x22 + 0xd8) = &PTR____CFConstantStringClassReference_110f72698;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xe8;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1025813cc;
    func_0x000107c61174();
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,1);
    uVar3 = 0x112e06f60;
    func_0x0001000285a8(0x112e06f60,&UNK_10dab9b20);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_102580258;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110522290;
    *(long *)(unaff_x22 + 0x70) = lVar1;
    func_0x000107c5032c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c5a954(uVar3);
  func_0x000107c615e8(uVar3);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 200));
                    /* WARNING: Could not recover jumptable at 0x0001025813c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1025813cc; end: 102581477;  */

void FUN_1025813cc(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xe0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = (code *)0x102581424;
  }
  else {
    pcVar1 = FUN_102581478;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102581478; end: 1025814e7;  */

void FUN_102581478(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c61654();
  func_0x000107c614ac(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  FUN_10258163c();
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c5a954(uVar1);
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 200));
                    /* WARNING: Could not recover jumptable at 0x0001025814e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1025814e8; end: 1025814ff;  */

void FUN_1025814e8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102581500,0,0);
  return;
}



/* Entry: 102581500; end: 10258163b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102581500(void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar1 = *(ulong *)(unaff_x22 + 0x10);
  lVar3 = *(long *)(uVar1 + _DAT_112fcd000);
  func_0x000107c61170();
  if ((lVar3 != 0x14) && (FUN_1025832e4(), (uVar1 & 1) != 0)) {
    plVar2 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x20) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x1025815a4;
    plVar2[0x11] = *(long *)(unaff_x22 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10258342c,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001025815a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10258163c; end: 10258178f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258163c(double param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  uVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(uVar2 - 8);
  uVar3 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x0001090220c8();
  if ((uVar3 & 1) == 0) {
    func_0x000107c5eea0(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar5 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar2);
    func_0x000100083b20(&lStack_58);
    lVar5 = lStack_58;
    lVar4 = lStack_58;
    func_0x000107c3f824();
    func_0x000107c61170(lVar5);
    func_0x000100083b20(&lStack_58);
    lVar5 = lStack_58;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102581784);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102581788);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10258178c);
      (*pcVar1)();
    }
    func_0x000107c53338(lStack_58);
    func_0x000107c61170(lVar5);
    func_0x000100083b20(&lStack_58);
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102581790);
      (*pcVar1)();
    }
    func_0x000107c53334(lStack_58);
    func_0x000107c61170(lStack_58);
  }
  return;
}



/* Entry: 102581790; end: 1025817fb;  */

void FUN_102581790(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025817fc,uVar1,uVar2);
  return;
}



/* Entry: 1025817fc; end: 10258185b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025817fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c5c2e0(uVar2,param_2,uVar1);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102581858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10258185c; end: 102581897;  */

void FUN_10258185c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102581894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102581898; end: 102581c57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102581898(long param_1,ulong param_2,code *param_3,code *param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lStack_68;
  
  if ((param_2 & 1) == 0) {
    (*param_5)();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102581c50);
      (*pcVar1)();
    }
    puVar7 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    func_0x000107c409d8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      plVar11 = (long *)(param_1 + 0x28);
      lVar8 = lVar9;
      do {
        lVar5 = plVar11[-1];
        lVar6 = *plVar11;
        func_0x000107c61434(lVar6);
        func_0x000100083b20(&lStack_68);
        lVar3 = lStack_68;
        lVar2 = *(long *)(lStack_68 + _DAT_112fcd5d8);
        func_0x000107c61174();
        func_0x000107c61170(lVar3);
        lVar3 = lVar2;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar3 == 0) {
          func_0x000107c6142c(lVar6);
        }
        else {
          lVar2 = lVar5;
          func_0x000107c5fadc(lVar5,lVar6);
          lVar4 = lVar3;
          func_0x000107c4c39c();
          func_0x000107c61180();
          func_0x000107c61170(lVar2);
          if (lVar4 != 0) {
            lVar2 = ((long *)(lVar4 + _DAT_112fcd620))[1];
            if (lVar2 == 0) {
              func_0x000107c61170(lVar4);
              func_0x000107c615e8(lVar3);
            }
            else {
              lVar10 = *(long *)(lVar4 + _DAT_112fcd620);
              func_0x000107c61434(lVar2);
              func_0x000107c5fadc(lVar10,lVar2);
              func_0x000107c6142c(lVar2);
              lVar2 = lVar10;
              func_0x00010901e6c8();
              func_0x000107c61180();
              func_0x000107c61170(lVar10);
              if (lVar2 == 0) {
                func_0x000107c6142c(lVar6);
                func_0x000107c615e8(lVar3);
                func_0x000107c61170(lVar4);
                goto LAB_1025818f4;
              }
              func_0x000107c61170(lVar2);
              func_0x000107c615e8(lVar3);
              func_0x000107c61170(lVar4);
            }
            lVar8 = lVar6;
            FUN_102582d08();
            lVar3 = lVar8;
            func_0x000107c6142c();
            if (lVar8 != 0) {
              if (lVar9 + -1 == 0) {
                (*param_3)();
                func_0x000107c61180();
                if (lVar6 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102581c54);
                  (*pcVar1)();
                }
                lVar2 = lVar6;
                func_0x000107c5faec();
                func_0x000107c61170(lVar6);
                lVar6 = 0x112d36008;
                func_0x0001000285a8(0x112d36008,&UNK_10d900720);
                func_0x000107c613fc();
                *(undefined8 *)(lVar6 + 0x18) = 2;
                *(undefined8 *)(lVar6 + 0x10) = 1;
                *(undefined **)(lVar6 + 0x38) = PTR___sSSN_11034da80;
                lVar9 = lVar6;
                func_0x00010075bbf0();
                *(long *)(lVar6 + 0x40) = lVar9;
                *(long *)(lVar6 + 0x20) = lVar5;
                *(long *)(lVar6 + 0x28) = lVar8;
              }
              else {
                (*param_4)();
                func_0x000107c61180();
                if (lVar6 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102581c58);
                  (*pcVar1)();
                }
                lVar2 = lVar6;
                func_0x000107c5faec();
                func_0x000107c61170(lVar6);
                lVar6 = 0x112d36008;
                func_0x0001000285a8(0x112d36008,&UNK_10d900720);
                func_0x000107c613fc();
                *(undefined8 *)(lVar6 + 0x18) = 4;
                *(undefined8 *)(lVar6 + 0x10) = 2;
                *(undefined **)(lVar6 + 0x38) = PTR___sSSN_11034da80;
                lVar4 = lVar6;
                func_0x00010075bbf0();
                *(long *)(lVar6 + 0x20) = lVar5;
                *(long *)(lVar6 + 0x28) = lVar8;
                puVar7 = PTR___sSis7CVarArgsWP_11034df08;
                *(undefined **)(lVar6 + 0x60) = PTR___sSiN_11034deb0;
                *(undefined **)(lVar6 + 0x68) = puVar7;
                *(long *)(lVar6 + 0x40) = lVar4;
                *(long *)(lVar6 + 0x48) = lVar9 + -1;
              }
              lVar9 = lVar3;
              func_0x000107c5fb00(lVar2,lVar3,lVar6);
              func_0x000107c6142c(lVar3);
              puVar7 = PTR_PTR_1126afde0;
              func_0x000107c61168(PTR_PTR_1126afde0);
              func_0x000107c5fadc(lVar2,lVar9);
              func_0x000107c6142c(lVar9);
              func_0x000107c40930(puVar7);
              func_0x000107c61180();
              func_0x000107c61170(lVar2);
              return puVar7;
            }
            break;
          }
          func_0x000107c6142c(lVar6);
          func_0x000107c615e8(lVar3);
        }
LAB_1025818f4:
        plVar11 = plVar11 + 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    puVar7 = (undefined *)0x0;
  }
  return puVar7;
}



/* Entry: 102581c58; end: 102581cc3;  */

void FUN_102581c58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102585bc4,uVar1,uVar2);
  return;
}



/* Entry: 102581cc4; end: 102581d2f;  */

void FUN_102581cc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102581d30,uVar1,uVar2);
  return;
}



/* Entry: 102581d30; end: 102581d6b;  */

void FUN_102581d30(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  FUN_102581d6c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102581d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102581d6c; end: 102582757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102581d6c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined8 *puVar15;
  ulong uVar16;
  long alStack_78 [3];
  
  if (*(long *)(unaff_x20 + _DAT_112ea6968) == 0) {
    func_0x000100083b20(alStack_78);
    lVar5 = alStack_78[0];
    lVar4 = *(long *)(alStack_78[0] + _DAT_112fcd5d8);
    func_0x000107c61174();
    func_0x000107c61170(lVar5);
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      func_0x000100083b20(alStack_78);
      lVar4 = alStack_78[0];
      lVar10 = alStack_78[0];
      func_0x000107c4ec94();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      lVar4 = lVar10;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      if (lVar4 != 0) {
        uVar12 = *(ulong *)(param_1 + 0x10);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar12 != 0) {
          uVar16 = 0;
LAB_102581efc:
          uVar1 = uVar16;
          if (uVar16 <= uVar12) {
            uVar1 = uVar12;
          }
          puVar15 = (undefined8 *)(param_1 + 0x28 + uVar16 * 0x10);
          uVar16 = uVar16 + 1;
          do {
            if (uVar16 - uVar1 == 1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102582188);
              (*pcVar3)();
            }
            uVar7 = puVar15[-1];
            uVar2 = *puVar15;
            func_0x000107c61434(uVar2);
            uVar6 = uVar7;
            func_0x000107c5fadc(uVar7,uVar2);
            lVar10 = lVar4;
            func_0x000107c4b91c();
            func_0x000107c61170(uVar6);
            if (lVar10 == 0 || lVar10 == 0xb) {
              func_0x000107c6142c(uVar2);
            }
            else {
              func_0x000107c5fadc(uVar7,uVar2);
              lVar10 = lVar5;
              func_0x000107c4c39c();
              func_0x000107c61180();
              func_0x000107c61170(uVar7);
              func_0x000107c6142c(uVar2);
              if (lVar10 != 0) goto code_r0x000102581fbc;
            }
            uVar16 = uVar16 + 1;
            puVar15 = puVar15 + 2;
            if (uVar16 - uVar12 == 1) break;
          } while( true );
        }
joined_r0x000102582144:
        if ((ulong)puVar9 >> 0x3e == 0) {
          puVar14 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar14 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar9) {
            puVar14 = puVar9;
          }
          func_0x000107c60480();
        }
        if (puVar14 != (undefined *)0x0) {
          if (((ulong)puVar9 & 0xc000000000000001) == 0) {
            if (*(long *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10258219c);
              (*pcVar3)();
            }
            lVar10 = *(long *)(puVar9 + 0x20);
            func_0x000107c61174();
          }
          else {
            lVar10 = 0;
            func_0x00010111c5a8(0,puVar9);
          }
          uVar7 = *(undefined8 *)(lVar10 + _DAT_112fcd610);
          uVar2 = ((undefined8 *)(lVar10 + _DAT_112fcd610))[1];
          func_0x000107c61434(uVar2);
          func_0x000107c5fadc(uVar7,uVar2);
          func_0x000107c6142c(uVar2);
          lVar11 = lVar4;
          func_0x000107c4b91c(lVar4);
          func_0x000107c61170(uVar7);
          func_0x000102582360(puVar9,lVar11);
          func_0x000107c615e8(lVar5);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(lVar10);
          func_0x000107c6142c(puVar9);
          return;
        }
        func_0x000107c6142c(puVar9);
        FUN_10257ffb8(param_1,2);
        func_0x000107c615e8(lVar5);
        goto LAB_102581dfc;
      }
      func_0x000107c615e8(lVar5);
    }
  }
  func_0x000100083b20(alStack_78);
  lVar4 = _DAT_112fccff8;
  func_0x000107c61428(alStack_78[0] + _DAT_112fccff8,alStack_78,0,0);
  lVar4 = alStack_78[0] + lVar4;
  func_0x000107c61618();
  func_0x000107c61170(alStack_78[0]);
  if (lVar4 == 0) {
    return;
  }
  func_0x000107c5a954(lVar4);
LAB_102581dfc:
  func_0x000107c615e8(lVar4);
  return;
code_r0x000102581fbc:
  puVar14 = puVar9;
  func_0x000107c61550();
  if ((((int)puVar14 == 0) || ((long)puVar9 < 0)) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar9 >> 0x3e == 0) {
      puVar14 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar14 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar9) {
        puVar14 = puVar9;
      }
      func_0x000107c60480(puVar14);
    }
    puVar8 = (undefined *)0x0;
    func_0x000101136a20(0,puVar14 + 1,1,puVar9);
    puVar9 = puVar8;
  }
  uVar13 = (ulong)puVar9 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar13 + 0x10);
  if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar1) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
    func_0x000101136a20(puVar9,uVar1 + 1,1);
    uVar13 = (ulong)puVar9 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar13 + 0x10) = uVar1 + 1;
  *(long *)(uVar13 + uVar1 * 8 + 0x20) = lVar10;
  if (uVar16 == uVar12) goto joined_r0x000102582144;
  goto LAB_102581efc;
}



/* Entry: 102582758; end: 1025827c3;  */

void FUN_102582758(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025827c4,uVar1,uVar2);
  return;
}



/* Entry: 1025827c4; end: 102582aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025827c4(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar5 = *(long *)(unaff_x22 + 0x10);
  lVar7 = lVar5;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar5 != 0) {
    lVar7 = lVar5;
    func_0x000107c4b894();
    func_0x000107c615e8(lVar5);
    if (lVar7 == 1) {
      func_0x000100083b20(unaff_x22 + 0x10);
      lVar5 = *(long *)(unaff_x22 + 0x10);
      lVar7 = lVar5;
      func_0x000107c4c440();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      lVar5 = lVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      if (lVar5 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar5;
        func_0x000107c443cc(lVar5);
        func_0x000107c615e8(lVar5);
      }
      uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
      func_0x000100083b20(unaff_x22 + 0x10);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
      puVar3 = &UNK_1105221d8;
      func_0x000107c613fc(&UNK_1105221d8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,uVar4);
      *(code **)(unaff_x22 + 0x30) = FUN_1025858d8;
      *(undefined **)(unaff_x22 + 0x38) = puVar3;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
      *(undefined **)(unaff_x22 + 0x28) = &UNK_110522420;
      lVar5 = unaff_x22 + 0x10;
      func_0x000107c60bc4(lVar5);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
      func_0x000105efd850(lVar7,uVar6,uVar4,lVar5);
      func_0x000107c61180();
      func_0x000107c60bd0(lVar5);
      func_0x000107c61170(uVar6);
      func_0x000100083b20(unaff_x22 + 0x10);
      lVar5 = *(long *)(unaff_x22 + 0x10);
      uVar4 = *(undefined8 *)(lVar5 + _DAT_112fccff0);
      func_0x000107c615f0(uVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c3e2c0(uVar4);
      func_0x000107c615e8(uVar4);
      func_0x000107c61170(lVar7);
      goto LAB_102582ae8;
    }
  }
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar5 = *(long *)(unaff_x22 + 0x10);
  lVar7 = lVar5;
  func_0x000107c4ec94();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar5 == 0) {
    func_0x000100083b20(unaff_x22 + 0x10);
    lVar7 = _DAT_112fccff8;
    lVar5 = *(long *)(unaff_x22 + 0x10);
    func_0x000107c61428(lVar5 + _DAT_112fccff8,unaff_x22 + 0x10,0,0);
    uVar1 = lVar5 + lVar7;
    func_0x000107c61618();
    func_0x000107c61170(lVar5);
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c61150(uVar1,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_onExitGhostModeWith__112616a28);
      if ((uVar2 & 1) != 0) {
        func_0x000107c4dc04(uVar1);
      }
      func_0x000107c5a954(uVar1);
      func_0x000107c615e8(uVar1);
    }
  }
  else {
    lVar7 = lVar5;
    func_0x000107c4b918(lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000102582360(PTR___swiftEmptyArrayStorage_11034f1c8,lVar7);
  }
LAB_102582ae8:
                    /* WARNING: Could not recover jumptable at 0x000102582afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102582b00; end: 102582d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102582b00(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long alStack_60 [3];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000100083b20(alStack_60);
    lVar1 = _DAT_112fccff8;
    func_0x000107c61428(alStack_60[0] + _DAT_112fccff8,alStack_60,0,0);
    uVar2 = alStack_60[0] + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(alStack_60[0]);
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c61150(uVar2,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_onExitGhostModeWith__112616a28);
      if ((uVar3 & 1) != 0) {
        func_0x000107c4dc04(uVar2);
      }
      func_0x000107c5a954(uVar2);
      func_0x000107c615e8(uVar2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102582d08; end: 102582eb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102582d08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = *(long *)(lStack_48 + _DAT_112fcd5d8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    lVar1 = lVar2;
    func_0x000107c4c39c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar1 == 0) {
      func_0x000107c615e8(lVar2);
    }
    else {
      lVar5 = ((long *)(lVar1 + _DAT_112fcd620))[1];
      if (lVar5 == 0) {
        func_0x000107c615e8(lVar2);
        lVar5 = *(long *)(lVar1 + _DAT_112fcd618);
        lVar4 = ((long *)(lVar1 + _DAT_112fcd618))[1];
        func_0x000107c61434(lVar4);
        func_0x000107c61170(lVar1);
        goto LAB_102582ea0;
      }
      lVar6 = *(long *)(lVar1 + _DAT_112fcd620);
      func_0x000107c61434(lVar5);
      lVar4 = lVar5;
      func_0x000107c5fadc(lVar6,lVar5);
      func_0x000107c6142c(lVar5);
      lVar3 = lVar6;
      func_0x00010901e6c8();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar3 != 0) {
        lVar5 = lVar3;
        func_0x000107c5faec(lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar1);
        goto LAB_102582ea0;
      }
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar1);
    }
  }
  lVar5 = 0;
  lVar4 = 0;
LAB_102582ea0:
  auVar7._8_8_ = lVar4;
  auVar7._0_8_ = lVar5;
  return auVar7;
}



/* Entry: 102582eb8; end: 10258316f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102582eb8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long lStack_70;
  undefined *puStack_68;
  
  func_0x000100083b20(&puStack_68);
  puVar10 = puStack_68;
  lVar4 = *(long *)(puStack_68 + _DAT_112fcd5d8);
  func_0x000107c61174();
  func_0x000107c61170(puVar10);
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 == 0) {
    uVar13 = 0xffffffffffffffff;
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar9 != 0) {
      uVar15 = 0;
LAB_102582f68:
      uVar11 = uVar15;
      if (uVar15 <= uVar9) {
        uVar11 = uVar9;
      }
      plVar14 = (long *)(param_1 + 0x28 + uVar15 * 0x10);
      uVar15 = uVar15 + 1;
      lVar4 = param_2;
      do {
        if (uVar15 - uVar11 == 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102583170);
          (*pcVar3)();
        }
        uVar1 = plVar14[-1];
        lVar12 = *plVar14;
        func_0x000107c61434(lVar12);
        func_0x000100083b20(&lStack_70);
        lVar2 = lStack_70;
        uVar6 = *(ulong *)(lStack_70 + _DAT_113083f78);
        func_0x000107c61174();
        func_0x000107c61170(lVar2);
        uVar7 = uVar6;
        func_0x000107c5d984();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        uVar6 = uVar7;
        func_0x000107c5faec();
        param_2 = lVar4;
        func_0x000107c61170(uVar7);
        if (uVar1 == uVar6 && lVar12 == lVar4) {
          func_0x000107c6142c(lVar12);
          lVar12 = lVar4;
        }
        else {
          uVar7 = uVar1;
          param_2 = lVar12;
          func_0x000107c605b8(uVar1,lVar12,uVar6,lVar4,0);
          func_0x000107c6142c(lVar4);
          if ((uVar7 & 1) == 0) {
            uVar7 = uVar1;
            param_2 = lVar12;
            func_0x000107c5fadc(uVar1);
            lVar4 = lVar5;
            func_0x000107c43a00();
            func_0x000107c61170(uVar7);
            if ((int)lVar4 != 1) goto LAB_102583090;
          }
        }
        func_0x000107c6142c(lVar12);
        uVar15 = uVar15 + 1;
        plVar14 = plVar14 + 2;
        lVar4 = param_2;
        if (uVar15 - uVar9 == 1) break;
      } while( true );
    }
LAB_102583134:
    uVar13 = *(undefined8 *)(puVar10 + 0x10);
    func_0x000107c615e8(lVar5);
    func_0x000107c61574(puVar10);
  }
  return uVar13;
LAB_102583090:
  puVar8 = puVar10;
  func_0x000107c61558();
  puStack_68 = puVar10;
  if (((ulong)puVar8 & 1) == 0) {
    param_2 = *(long *)(puVar10 + 0x10) + 1;
    func_0x000100403514(0,param_2,1);
  }
  uVar11 = *(ulong *)(puStack_68 + 0x10);
  lVar4 = uVar11 + 1;
  if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar11) {
    param_2 = lVar4;
    func_0x000100403514(1 < *(ulong *)(puStack_68 + 0x18),lVar4,1);
  }
  *(long *)(puStack_68 + 0x10) = lVar4;
  *(ulong *)(puStack_68 + uVar11 * 0x10 + 0x20) = uVar1;
  *(long *)(puStack_68 + uVar11 * 0x10 + 0x28) = lVar12;
  puVar10 = puStack_68;
  if (uVar15 == uVar9) goto LAB_102583134;
  goto LAB_102582f68;
}



/* Entry: 102583170; end: 102583277;  */

void FUN_102583170(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c420a8(param_1,param_2,1,0);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &UNK_110522548;
    func_0x000107c613fc(&UNK_110522548,0x20,7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    puVar2 = &UNK_110522570;
    func_0x000107c613fc(&UNK_110522570,0x20,7);
    *(undefined **)(puVar2 + 0x10) = &UNK_10dab9b90;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    func_0x000107c61174(param_2);
    func_0x000107c61434(param_3);
    uVar3 = 0x22;
    func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9b98,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 102583278; end: 1025832e3;  */

void FUN_102583278(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c420a8(param_1,param_2,1,0);
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10257ffb8(param_3,1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1025832e4; end: 102583413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1025832e4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  func_0x000107c3e944();
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      func_0x000107c5eea0(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee70();
      (**(code **)(lVar4 + 8))(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
      lVar1 = lVar2;
      func_0x000107c3da20(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      return 0x11 < lVar1;
    }
  }
  return false;
}



/* Entry: 102583414; end: 10258342b;  */

void FUN_102583414(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10258342c,0,0);
  return;
}



/* Entry: 10258342c; end: 10258356b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258342c(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  lVar1 = lVar3;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x90) = lVar3;
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10258356c;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    puVar2 = &UNK_1105222c8;
    func_0x000107c613fc(&UNK_1105222c8,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(code **)(unaff_x22 + 0x70) = FUN_1025856d8;
    *(undefined **)(unaff_x22 + 0x78) = puVar2;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1010ca3e8;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1105222e0;
    lVar1 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar1);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4318c(lVar3);
    func_0x000107c60bd0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102583568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10258356c; end: 1025835df;  */

void FUN_10258356c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1025835ac,0,0);
  return;
}



/* Entry: 1025835e0; end: 102583713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1025835e0(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_60 [8];
  ulong uStack_58;
  
  uVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(uVar1 - 8);
  uVar2 = uVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x0001090220c8();
  if ((uVar2 & 1) == 0) {
    func_0x000100083b20(&uStack_58);
    uVar2 = uStack_58;
    uVar3 = uStack_58;
    func_0x000107c3f824();
    func_0x000107c61170(uVar2);
    func_0x000100083b20(&uStack_58);
    uVar2 = uStack_58;
    func_0x000107c3f828();
    func_0x000107c61170(uStack_58);
    if (0 < (long)uVar3) {
      dVar5 = 1.5;
      func_0x000107c611f8(0x3ff8000000000000,(double)uVar3 + -1.0);
      dVar5 = dVar5 * 3.0 * 86400.0;
      dVar6 = dVar5 + (double)(long)uVar2;
      func_0x000107c5eea0(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee8c();
      (**(code **)(lVar4 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar1);
      return dVar6 < dVar5;
    }
  }
  return true;
}



/* Entry: 102583714; end: 10258377b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_102583714(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar2 = *(ulong *)(lStack_28 + _DAT_112fcd000);
  func_0x000107c61170();
  if (uVar2 < 0x12) {
    uVar1 = *(undefined4 *)(&UNK_10dab9bd4 + uVar2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10258377c; end: 10258393f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258377c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000100083b20(&puStack_70);
  puVar2 = puStack_70;
  puVar1 = puStack_70;
  func_0x000107c4e26c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 == (undefined *)0x0) {
    func_0x000102582be0(1);
  }
  else {
    puVar3 = PTR_PTR_1126b0ea8;
    func_0x000107c610f8(PTR_PTR_1126b0ea8);
    func_0x000107c453e4();
    puVar1 = PTR_PTR_1126b5538;
    func_0x000107c610f8(PTR_PTR_1126b5538);
    func_0x000107c453e4();
    func_0x000107c56068(puVar3);
    func_0x000107c61170(puVar1);
    FUN_102583714();
    func_0x000107c548e4(puVar3);
    func_0x000100083b20(&puStack_70);
    uVar5 = *(undefined8 *)(puStack_70 + _DAT_112fccff0);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(puStack_70);
    puVar1 = &UNK_1105221d8;
    func_0x000107c613fc(&UNK_1105221d8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    uStack_50 = 0x102585780;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ff4e10;
    puStack_58 = &UNK_110522358;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c4ab94(puVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 102583940; end: 102583997;  */

void FUN_102583940(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000102582be0(1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102583998; end: 1025839f7; -[_TtC31ShareLocationFlowImplementation26ShareLocationFlowPresenter init] */

void FUN_102583998(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShareLocationFlowImplementation.ShareLocationFlowPresenter",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025839c4);
  (*pcVar1)();
}



/* Entry: 1025839f8; end: 102583aff; -[_TtC31ShareLocationFlowImplementation26ShareLocationFlowPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025839f8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea69c0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea6978));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea6988));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea6998));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea69a0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea69a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea69b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea69d0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea69d8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea6980));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea69b8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea69c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea69e0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea6990));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea6968));
  return;
}



/* Entry: 102583b00; end: 102583b9f; -[_TtC31ShareLocationFlowImplementation26ShareLocationFlowPresenter permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102583b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_112fccff0);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(lStack_38);
  func_0x000107c3e2c0(uVar1,param_2,param_3);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102583ba0; end: 102583d47; -[_TtC31ShareLocationFlowImplementation26ShareLocationFlowPresenter permissionsManagerModalPresentationContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102583ba0(undefined8 param_1)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000107c61174();
  func_0x000100083b20(&lStack_28);
  func_0x000107c61170(param_1);
  uVar1 = *(undefined8 *)(lStack_28 + _DAT_112fccff0);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(lStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102583d48; end: 102583daf; -[_TtC31ShareLocationFlowImplementation26ShareLocationFlowPresenter permissionsPromptSource] */

void FUN_102583d48(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102583c0c();
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



/* Entry: 102583db0; end: 102583e47; -[_TtC31ShareLocationFlowImplementation26ShareLocationFlowPresenter dialogDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102583db0(undefined8 param_1)

{
  long lVar1;
  long alStack_48 [3];
  
  func_0x000107c61174();
  func_0x000100083b20(alStack_48);
  lVar1 = _DAT_112fccff8;
  func_0x000107c61428(alStack_48[0] + _DAT_112fccff8,alStack_48,0,0);
  lVar1 = alStack_48[0] + lVar1;
  func_0x000107c61618();
  func_0x000107c61170(alStack_48[0]);
  if (lVar1 != 0) {
    func_0x000107c5a954(lVar1);
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102583e48; end: 102583eb7;  */

void FUN_102583e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102583eb8,uVar1,uVar2);
  return;
}



/* Entry: 102583eb8; end: 102583fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102583eb8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(lVar3 + _DAT_112fcd008);
  func_0x000107c61434(uVar4);
  func_0x000107c61170(lVar3);
  uVar1 = uVar4;
  func_0x000107c5fc48(uVar4,PTR___sSSN_11034da80);
  *(undefined8 *)(unaff_x22 + 200) = uVar1;
  func_0x000107c6142c(uVar4);
  func_0x000100083b20(unaff_x22 + 0x50);
  func_0x000107c61170();
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102584000;
  lVar3 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar3,1);
  uVar1 = 0x112ea6a10;
  func_0x0001000285a8(0x112ea6a10,&UNK_10dab9b50);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
  *(long *)(unaff_x22 + 0x70) = lVar3;
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_10258427c;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1105223a8;
  func_0x000107c5d608(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102584000; end: 102584053;  */

void FUN_102584000(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    pcVar1 = FUN_102584054;
  }
  else {
    pcVar1 = FUN_102584164;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0xb8),*(undefined8 *)(lVar2 + 0xc0));
  return;
}



/* Entry: 102584054; end: 102584163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102584054(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  lVar6 = *(long *)(unaff_x22 + 0x90);
  lVar7 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 200));
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ea6970);
  if (*(char *)((long)puVar1 + 0x11) != '\x01') {
    uVar5 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = *(undefined1 *)(puVar1 + 2);
    func_0x000100083b20(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar7 = *(long *)(unaff_x22 + 0x70);
    FUN_10258573c(unaff_x22 + 0x50,uVar2);
    (**(code **)(lVar7 + 8))(uVar5,uVar3,uVar4,lVar6 == 0,uVar2,lVar7);
    func_0x000102585760(unaff_x22 + 0x50);
  }
  lVar7 = _DAT_112ea6968;
  lVar8 = *(long *)(unaff_x22 + 0xa8);
  if (*(long *)(lVar8 + _DAT_112ea6968) == 0) {
    uVar5 = 0;
  }
  else {
    func_0x000107c42018();
    uVar5 = *(undefined8 *)(lVar8 + lVar7);
  }
  *(undefined8 *)(lVar8 + lVar7) = 0;
  func_0x000107c61170(uVar5);
  func_0x000102582be0(lVar6);
                    /* WARNING: Could not recover jumptable at 0x000102584160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102584164; end: 10258427b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102584164(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c61654();
  func_0x000107c614ac(uVar6);
  lVar7 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 200));
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ea6970);
  if (*(char *)((long)puVar1 + 0x11) != '\x01') {
    uVar6 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = *(undefined1 *)(puVar1 + 2);
    func_0x000100083b20(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar7 = *(long *)(unaff_x22 + 0x70);
    FUN_10258573c(unaff_x22 + 0x50,uVar2);
    (**(code **)(lVar7 + 8))(uVar6,uVar3,uVar4,0,uVar2,lVar7);
    func_0x000102585760(unaff_x22 + 0x50);
  }
  lVar7 = _DAT_112ea6968;
  lVar5 = *(long *)(unaff_x22 + 0xa8);
  if (*(long *)(lVar5 + _DAT_112ea6968) == 0) {
    uVar6 = 0;
  }
  else {
    func_0x000107c42018();
    uVar6 = *(undefined8 *)(lVar5 + lVar7);
  }
  *(undefined8 *)(lVar5 + lVar7) = 0;
  func_0x000107c61170(uVar6);
  func_0x000102582be0(2);
                    /* WARNING: Could not recover jumptable at 0x000102584278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10258427c; end: 102584317;  */

void FUN_10258427c(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  FUN_10258573c(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 102584318; end: 1025843d7; -[_TtC31ShareLocationFlowImplementation26ShareLocationFlowPresenter promptViewControllerDidRequestLocationSharing:permissionsPromptPresentationDelegate:actionType:users:source:completion:] */

/* WARNING: Possible PIC construction at 0x0001025843b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025843b8) */

void FUN_102584318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_8 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1105221b0;
    func_0x000107c613fc(&UNK_1105221b0,0x18,7);
    *(long *)(puVar1 + 0x10) = param_8;
    uVar2 = 0x102585558;
  }
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_102585040(param_5);
  FUN_102585548(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1025843d8; end: 10258442f;  */

void FUN_1025843d8(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102584430; end: 10258449b;  */

void FUN_102584430(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10258449c,uVar1,uVar2);
  return;
}



/* Entry: 10258449c; end: 1025845cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10258449c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ea6970);
  if (*(char *)((long)puVar1 + 0x11) != '\x01') {
    uVar6 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = *(undefined1 *)(puVar1 + 2);
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    FUN_10258573c(unaff_x22 + 0x10,uVar3);
    (**(code **)(lVar2 + 8))(uVar6,uVar4,uVar5,0,uVar3,lVar2);
    func_0x000102585760(unaff_x22 + 0x10);
  }
  lVar7 = *(long *)(unaff_x22 + 0x38);
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0x10) + _DAT_112fcd000);
  func_0x000107c61170();
  lVar2 = _DAT_112ea6968;
  if (lVar8 == 5) {
    if (*(long *)(lVar7 + _DAT_112ea6968) != 0) {
      func_0x000107c42018();
    }
    func_0x000102582be0(1);
  }
  else {
    uVar6 = 0;
    if (*(long *)(lVar7 + _DAT_112ea6968) != 0) {
      func_0x000107c42018();
      uVar6 = *(undefined8 *)(lVar7 + lVar2);
    }
    *(undefined8 *)(lVar7 + lVar2) = 0;
    func_0x000107c61170(uVar6);
    FUN_10258377c();
  }
                    /* WARNING: Could not recover jumptable at 0x0001025845cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1025845d0; end: 10258469b; -[_TtC31ShareLocationFlowImplementation26ShareLocationFlowPresenter promptViewControllerDidRequestSettingsLaunch:uiContainer:completion:] */

void FUN_1025845d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110522160;
  func_0x000107c613fc(&UNK_110522160,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_110522188;
  func_0x000107c613fc(&UNK_110522188,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab9ae0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x22;
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9ae8,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10258469c; end: 102584707;  */

void FUN_10258469c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102584708,uVar1,uVar2);
  return;
}



/* Entry: 102584708; end: 1025847df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102584708(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  if (*(long *)(lVar2 + _DAT_112ea6968) != 0) {
    func_0x000107c42018();
  }
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x38) + _DAT_112ea6970);
  if (*(char *)((long)puVar1 + 0x11) != '\x01') {
    uVar3 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = *(undefined1 *)(puVar1 + 2);
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    FUN_10258573c(unaff_x22 + 0x10,uVar4);
    (**(code **)(lVar2 + 8))(uVar3,uVar5,uVar6,0,uVar4,lVar2);
    func_0x000102585760(unaff_x22 + 0x10);
  }
  func_0x000102582be0(1);
                    /* WARNING: Could not recover jumptable at 0x0001025847dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1025847e0; end: 1025848ab; -[_TtC31ShareLocationFlowImplementation26ShareLocationFlowPresenter promptViewControllerWantsToDismiss:completion:] */

void FUN_1025847e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110522110;
  func_0x000107c613fc(&UNK_110522110,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_110522138;
  func_0x000107c613fc(&UNK_110522138,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab9ad0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x22;
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9ad8,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025848ac; end: 1025849d3;  */

void FUN_1025848ac(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  lVar3 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar1;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
  lVar3 = 0;
  func_0x000104638d5c();
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar1;
  lVar3 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x98) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  lVar3 = *(long *)(lVar3 + 0x40);
  *(long *)(unaff_x22 + 0xa8) = lVar3;
  uVar1 = lVar3 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar1;
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025849d4,uVar4,uVar5);
  return;
}



/* Entry: 1025849d4; end: 102584d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025849d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  code *pcVar17;
  long lVar18;
  long unaff_x22;
  undefined8 uVar19;
  ulong uVar20;
  
  lVar18 = *(long *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  lVar12 = _DAT_112ea6968;
  uVar7 = 0;
  if (*(long *)(lVar18 + _DAT_112ea6968) != 0) {
    func_0x000107c42018();
    uVar7 = *(undefined8 *)(lVar18 + lVar12);
  }
  *(undefined8 *)(lVar18 + lVar12) = 0;
  func_0x000107c61170(uVar7);
  func_0x000100083b20(unaff_x22 + 0x40);
  lVar18 = *(long *)(unaff_x22 + 0x40);
  lVar12 = lVar18;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar18);
  if (lVar12 != 0) {
    func_0x000107c61170(lVar12);
    func_0x000100083b20(unaff_x22 + 0x58);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x000107c4ffe8(uVar7);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c61170(uVar7);
  }
  lVar12 = *(long *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar18 = *(long *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar8 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar9 = puVar8;
  func_0x000107c43bf4();
  func_0x000107c61180();
  (**(code **)(lVar18 + 0x10))(uVar3,uVar14,uVar7);
  uVar16 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar20 = uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff);
  puVar10 = &UNK_110522318;
  func_0x000107c613fc(&UNK_110522318,uVar20 + lVar12,uVar16 | 7);
  (**(code **)(lVar18 + 0x20))(puVar10 + uVar20,uVar3,uVar7);
  *(code **)(unaff_x22 + 0x30) = FUN_1025856f0;
  *(undefined **)(unaff_x22 + 0x38) = puVar10;
  puVar11 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_100e38b5c;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_110522330;
  func_0x000107c60bc4();
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c5dc64(puVar9);
  func_0x000107c60bd0(puVar11);
  func_0x000107c61170(puVar9);
  pcVar17 = *(code **)(lVar18 + 0x38);
  (*pcVar17)(uVar5,1,1,uVar7);
  (*pcVar17)(uVar2,1,1,uVar7);
  lVar12 = 0;
  func_0x0001046305a8();
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar6,1,1,lVar12);
  func_0x000104638e24(uVar4,10,uVar5,0,uVar2,0,0,0,0,uVar6,0,0,0,0,0,0,0);
  uVar13 = 0;
  func_0x0001000956f0(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000100e39298(uVar4,uVar1);
  func_0x000104652fec(0);
  func_0x000107c610f8();
  uVar7 = uVar1;
  func_0x000104651d90(uVar1);
  func_0x000100083b20(unaff_x22 + 0x48);
  lVar12 = *(long *)(unaff_x22 + 0x48);
  uVar19 = *(undefined8 *)(lVar12 + _DAT_112fccff0);
  func_0x000107c615f0(uVar19);
  func_0x000107c61170(lVar12);
  uVar14 = uVar7;
  func_0x000103c5d254(uVar7,puVar8,uVar19,uVar15,0,0,0,0);
  func_0x000107c615e8(uVar19);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000100083b20(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c42c1c(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar7);
  func_0x000100e392dc(uVar4);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000102584d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102584d90; end: 102584ddf;  */

void FUN_102584d90(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102584de0; end: 102584f67; -[_TtC31ShareLocationFlowImplementation26ShareLocationFlowPresenter promptViewControllerDidRequestWebPageLaunch:url:] */

void FUN_102584de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x12;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  long alStack_60 [2];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = &stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar8 - extraout_x12;
  func_0x000107c5edb4(lVar6,param_4);
  (**(code **)(lVar9 + 0x10))(puVar8,lVar6,lVar1);
  uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar10 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  puVar2 = &UNK_1105220c0;
  func_0x000107c613fc(&UNK_1105220c0,uVar10 + lVar7,uVar5 | 7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  (**(code **)(lVar9 + 0x20))(puVar2 + uVar10,puVar8,lVar1);
  puVar3 = &UNK_1105220e8;
  func_0x000107c613fc(&UNK_1105220e8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10dab9ac0;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  *(undefined **)(lVar6 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar4 = 0x22;
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9ac8,puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  (**(code **)(lVar9 + 8))(lVar6,lVar1);
  return;
}



/* Entry: 102584f68; end: 102584f8b; -[_TtC31ShareLocationFlowImplementation26ShareLocationFlowPresenter tray:positionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102584f68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 2) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112ea6968);
    *(undefined8 *)(param_1 + _DAT_112ea6968) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 102584f8c; end: 102584ffb; -[_TtC31ShareLocationFlowImplementation26ShareLocationFlowPresenter tray:heightForPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102584f8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea6a18;
  uVar3 = 0xbff0000000000000;
  if (param_4 == 8) {
    lVar2 = *(long *)(param_1 + _DAT_112ea6968);
    if (lVar2 == 0) {
      uVar3 = 0x4082200000000000;
    }
    else {
      func_0x000107c61428(0xbff0000000000000,lVar2 + _DAT_112ea6a18,auStack_38,0,0);
      uVar3 = *(undefined8 *)(lVar2 + lVar1);
    }
  }
  return uVar3;
}



/* Entry: 102584ffc; end: 10258503f; -[_TtC31ShareLocationFlowImplementation26ShareLocationFlowPresenter webBrowserDidDismiss:] */

void FUN_102584ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x0001025851ac();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102585040; end: 102585253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102585040(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  long alStack_48 [3];
  
  func_0x000100083b20(alStack_48);
  lVar2 = alStack_48[0];
  lVar1 = alStack_48[0];
  func_0x000107c4ec90();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x000100083b20(alStack_48);
    lVar2 = _DAT_112fccff8;
    func_0x000107c61428(alStack_48[0] + _DAT_112fccff8,alStack_48,0,0);
    lVar2 = alStack_48[0] + lVar2;
    func_0x000107c61618();
    func_0x000107c61170(alStack_48[0]);
    if (lVar2 != 0) {
      func_0x000107c5a954(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  else {
    puVar3 = &UNK_110522390;
    func_0x000107c613fc(&UNK_110522390,0x28,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = unaff_x20;
    func_0x000107c615f0(lVar2);
    func_0x000107c61174();
    uVar4 = 0x22;
    func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9b48,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 102585254; end: 102585263;  */

undefined1  [16] FUN_102585254(void)

{
  return ZEXT816(0x1105220a0);
}



/* Entry: 102585264; end: 102585283;  */

void FUN_102585264(void)

{
  func_0x000107c61168(&PTR_PTR_11284f1e0);
  return;
}



/* Entry: 102585284; end: 1025852ef;  */

void FUN_102585284(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1025852f0; end: 10258535f;  */

void FUN_1025852f0(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102585bec;
  plVar4[0xc] = lVar3;
  plVar4[0xd] = unaff_x20 + (uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff));
  lVar3 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xe] = uVar5;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xf] = uVar1;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar5;
  lVar3 = 0;
  func_0x000104638d5c();
  uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x11] = uVar1;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x12] = uVar5;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar4[0x13] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0x14] = lVar3;
  lVar3 = *(long *)(lVar3 + 0x40);
  plVar4[0x15] = lVar3;
  uVar5 = lVar3 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x16] = uVar5;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0x17] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025849d4,lVar2,lVar3);
  return;
}



/* Entry: 102585360; end: 1025853cf;  */

void FUN_102585360(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102585bf0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1025853d0; end: 10258541b;  */

void FUN_1025853d0(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102585c00;
  plVar2[7] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[8] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102584708,lVar1,lVar3);
  return;
}



/* Entry: 10258541c; end: 10258548b;  */

void FUN_10258541c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102585bf4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10258548c; end: 1025854d7;  */

void FUN_10258548c(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102585bf8;
  plVar2[7] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[8] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10258449c,lVar1,lVar3);
  return;
}



/* Entry: 1025854d8; end: 102585547;  */

void FUN_1025854d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102585bfc;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102585548; end: 102585583;  */

void FUN_102585548(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102585584; end: 1025855d3;  */

void FUN_102585584(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102585c08;
  plVar3[3] = lVar2;
  plVar3[4] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025817fc,lVar1,lVar2);
  return;
}



/* Entry: 1025855d4; end: 102585643;  */

void FUN_1025855d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102585c04;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102585644; end: 10258569b;  */

void FUN_102585644(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10258569c;
  plVar1[0x17] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102581144,0,0);
  return;
}



/* Entry: 10258569c; end: 1025856d7;  */

void FUN_10258569c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001025856d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1025856d8; end: 1025856ef;  */

void FUN_1025856d8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1025856f0; end: 10258573b;  */

void FUN_1025856f0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0(param_1,0,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10258573c; end: 102585787;  */

long * FUN_10258573c(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 102585788; end: 1025857f3;  */

void FUN_102585788(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102585c0c;
  plVar3[0x14] = lVar1;
  plVar3[0x15] = lVar4;
  plVar3[0x13] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x16] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x17] = lVar1;
  plVar3[0x18] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102583eb8,lVar1,lVar2);
  return;
}



/* Entry: 1025857f4; end: 102585803;  */

long FUN_1025857f4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 102585804; end: 102585867;  */

void FUN_102585804(long param_1)

{
  func_0x000102585760(param_1 + 0x20);
  return;
}



/* Entry: 102585868; end: 1025858d7;  */

void FUN_102585868(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102585c14;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1025858d8; end: 1025858df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025858d8(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long alStack_60 [3];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000100083b20(alStack_60);
    lVar1 = _DAT_112fccff8;
    func_0x000107c61428(alStack_60[0] + _DAT_112fccff8,alStack_60,0,0);
    uVar3 = alStack_60[0] + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(alStack_60[0]);
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_onExitGhostModeWith__112616a28);
      if ((uVar4 & 1) != 0) {
        func_0x000107c4dc04(uVar3);
      }
      func_0x000107c5a954(uVar3);
      func_0x000107c615e8(uVar3);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1025858e0; end: 102585937;  */

void FUN_1025858e0(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102585c18;
  plVar2[3] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[4] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[5] = lVar1;
  plVar2[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10257fa20,lVar1,lVar3);
  return;
}



/* Entry: 102585938; end: 10258593f;  */

void FUN_102585938(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c420a8(param_1,lVar1,1,0);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_110522548;
    func_0x000107c613fc(&UNK_110522548,0x20,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(undefined8 *)(puVar2 + 0x18) = uVar4;
    puVar3 = &UNK_110522570;
    func_0x000107c613fc(&UNK_110522570,0x20,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10dab9b90;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    func_0x000107c61174(lVar1);
    func_0x000107c61434(uVar4);
    uVar4 = 0x22;
    func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9b98,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 102585940; end: 10258596b;  */

void FUN_102585940(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10258596c; end: 102585973;  */

void FUN_10258596c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c420a8(param_1,lVar2,1,0);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10257ffb8(uVar1,1);
    func_0x000107c61170(lVar2);
  }
  return;
}


