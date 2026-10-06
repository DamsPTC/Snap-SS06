/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010c30e4; end: 1010c335b;  */

undefined * FUN_1010c30e4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c3228);
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
    puVar3 = (undefined *)0x112d5ae80;
    func_0x0001000285a8(0x112d5ae80,&UNK_10d922340);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d5b158;
    func_0x0001000285a8(0x112d5b158,&UNK_10d922348);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1010c335c; end: 1010c350f;  */

void FUN_1010c335c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4d07c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5b1b8(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      puVar4 = &UNK_1103815e8;
      func_0x000107c613fc(&UNK_1103815e8,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = param_1;
      *(long *)(puVar4 + 0x18) = unaff_x20;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_70 = FUN_1010c3510;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      uStack_80 = 0x1010c376c;
      puStack_78 = &UNK_110381600;
      puStack_68 = puVar4;
      func_0x000107c60bc4(&puStack_90);
      puVar4 = puStack_68;
      uVar6 = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c6157c();
      func_0x000107c61574(puVar4);
      func_0x000107c5d440(lVar3);
      func_0x000107c60bd0(ppuVar5);
      puVar4 = &UNK_110381638;
      func_0x000107c613fc(&UNK_110381638,0x18,7);
      *(undefined8 *)(puVar4 + 0x10) = param_1;
      pcStack_70 = (code *)0x1010c3534;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      uStack_80 = 0x1010c3770;
      puStack_78 = &UNK_110381650;
      puStack_68 = puVar4;
      func_0x000107c60bc4(&puStack_90);
      puVar4 = puStack_68;
      func_0x000107c61174(uVar6);
      func_0x000107c61574(puVar4);
      func_0x000107c5d618(lVar3);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 1010c3510; end: 1010c353b;  */

void FUN_1010c3510(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long extraout_x8;
  ulong uVar16;
  long unaff_x20;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [32];
  long lStack_a8;
  undefined1 auStack_a0 [32];
  undefined *apuStack_80 [3];
  long lStack_68;
  
  lVar15 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar19 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar21 = (long)&uStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = param_1;
  func_0x000107c44b94();
  if ((uVar4 & 1) == 0) {
    puVar17 = PTR_PTR_1126cae88;
    func_0x000107c610f8(PTR_PTR_1126cae88);
    func_0x000107c453e4();
    func_0x000107c59bfc(param_1);
    func_0x000107c61170(puVar17);
  }
  uVar4 = param_1;
  func_0x000107c5c730();
  func_0x000107c61180();
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c2b58);
    (*pcVar2)();
  }
  uVar20 = uVar4;
  func_0x000107c4246c();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar20 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c2b5c);
    (*pcVar2)();
  }
  uStack_f0 = uVar7;
  lStack_e8 = lVar15;
  uStack_e0 = param_1;
  uStack_d8 = uVar20;
  lStack_d0 = lVar19;
  func_0x000107c600f4(lVar21);
  FUN_100e15a08();
  func_0x000107c601c0(apuStack_80,lVar3,uVar4);
  puVar18 = PTR___sypN_11034f1a8;
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (lStack_68 != 0) {
    func_0x000100102924(apuStack_80,auStack_a0);
    func_0x000100102924(auStack_a0,auStack_c8);
    uVar7 = 0;
    FUN_1010c3724(0,0x112d5b150,&PTR_PTR_1126d2bc8);
    plVar8 = &lStack_a8;
    func_0x000107c6147c(plVar8,auStack_c8,puVar18 + 8,uVar7,6);
    lVar15 = lStack_a8;
    if ((((ulong)plVar8 & 1) != 0) && (lStack_a8 != 0)) {
      puVar6 = puVar17;
      func_0x000107c61550();
      if (((int)puVar6 == 0) ||
         (((long)puVar17 < 0 || (puVar6 = puVar17, ((ulong)puVar17 >> 0x3e & 1) != 0)))) {
        if ((ulong)puVar17 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar17) {
            puVar5 = puVar17;
          }
          func_0x000107c60480(puVar5);
        }
        puVar6 = (undefined *)0x0;
        FUN_1010c39b4(0,puVar5 + 1,1,puVar17);
      }
      uVar16 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar20 = *(ulong *)(uVar16 + 0x10);
      puVar17 = puVar6;
      if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar20) {
        puVar17 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
        FUN_1010c39b4(puVar17,uVar20 + 1,1,puVar6);
        uVar16 = (ulong)puVar17 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar16 + 0x10) = uVar20 + 1;
      *(long *)(uVar16 + uVar20 * 8 + 0x20) = lVar15;
    }
    func_0x000107c601c0(apuStack_80,lVar3,uVar4);
  }
  func_0x000107c61170(uStack_d8);
  (**(code **)(lStack_d0 + 8))(lVar21,lVar3);
  puVar18 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
  if ((ulong)puVar17 >> 0x3e == 0) {
    puVar6 = *(undefined **)(puVar18 + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar6 = puVar18;
    if ((undefined *)0x7fffffffffffffff < puVar17) {
      puVar6 = puVar17;
    }
    func_0x000107c60480();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
  if (puVar6 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar17 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar18 + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c29a8);
            (*pcVar2)();
          }
          puVar9 = *(undefined **)(puVar17 + (long)puVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar9 = puVar12;
          FUN_1010c3f28(puVar12,puVar17);
        }
        puVar1 = puVar12 + 1;
        if (SCARRY8((long)puVar12,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c29a4);
          (*pcVar2)();
        }
        puVar10 = puVar9;
        func_0x000107c3cf80();
        func_0x000107c61180();
        if (puVar10 != (undefined *)0x0) break;
LAB_1010c28ac:
        func_0x000107c61170(puVar9);
        puVar12 = puVar12 + 1;
        if (puVar1 == puVar6) goto LAB_1010c29c4;
      }
      puVar11 = puVar10;
      func_0x000107c3f63c();
      func_0x000107c61170(puVar10);
      if ((int)puVar11 != 2) goto LAB_1010c28ac;
      puVar12 = puVar5;
      func_0x000107c61558();
      apuStack_80[0] = puVar5;
      if (((ulong)puVar12 & 1) == 0) {
        func_0x0001010c30c8(0,*(long *)(puVar5 + 0x10) + 1,1);
      }
      uVar4 = *(ulong *)(apuStack_80[0] + 0x10);
      if (*(ulong *)(apuStack_80[0] + 0x18) >> 1 <= uVar4) {
        func_0x0001010c30c8(1 < *(ulong *)(apuStack_80[0] + 0x18),uVar4 + 1,1);
      }
      *(ulong *)(apuStack_80[0] + 0x10) = uVar4 + 1;
      *(undefined **)(apuStack_80[0] + uVar4 * 8 + 0x20) = puVar9;
      puVar5 = apuStack_80[0];
      puVar12 = puVar1;
    } while (puVar1 != puVar6);
  }
LAB_1010c29c4:
  func_0x000107c6142c(puVar17);
  if (((long)puVar5 < 0) || (((ulong)puVar5 >> 0x3e & 1) != 0)) {
    puVar17 = puVar5;
    func_0x000107c60480();
    uVar4 = uStack_e0;
  }
  else {
    puVar17 = *(undefined **)(puVar5 + 0x10);
    uVar4 = uStack_e0;
  }
  uStack_e0 = uVar4;
  if (puVar17 != (undefined *)0x0) {
    uVar20 = 0;
    do {
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar5 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c2a88);
          (*pcVar2)();
        }
        uVar16 = *(ulong *)(puVar5 + uVar20 * 8 + 0x20);
        func_0x000107c61174(uVar16);
      }
      else {
        uVar16 = uVar20;
        FUN_1010c3f28(uVar20,puVar5);
      }
      puVar18 = (undefined *)(uVar20 + 1);
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c2a84);
        (*pcVar2)();
      }
      uVar13 = uVar4;
      func_0x000107c5c730();
      func_0x000107c61180();
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c2b50);
        (*pcVar2)();
      }
      uVar14 = uVar13;
      func_0x000107c4246c();
      func_0x000107c61180();
      func_0x000107c61170(uVar13);
      if (uVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c2b54);
        (*pcVar2)();
      }
      func_0x000107c4ff80(uVar14);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar14);
      uVar20 = uVar20 + 1;
    } while (puVar18 != puVar17);
  }
  func_0x000107c61574(puVar5);
  lVar15 = lStack_e8;
  uVar7 = uStack_f0;
  if (lStack_e8 != 0) {
    func_0x000107c6157c(uStack_f0);
    func_0x000107c61174(lVar15);
    lVar3 = lVar15;
    FUN_1010c353c();
    func_0x000107c61574(uVar7);
    func_0x000107c61170(lVar15);
    func_0x000107c5c730();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c2b60);
      (*pcVar2)();
    }
    uVar20 = uVar4;
    func_0x000107c4246c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (uVar20 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c2b64);
      (*pcVar2)();
    }
    func_0x000107c3d798(uVar20);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar20);
  }
  return;
}



/* Entry: 1010c353c; end: 1010c3723;  */

undefined * FUN_1010c353c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126d2bc8;
  func_0x000107c610f8(PTR_PTR_1126d2bc8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  lVar3 = param_1;
  func_0x000107c5c724();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126d2bd0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = puVar4;
    func_0x000107c3f74c();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c3718);
      (*pcVar1)();
    }
    func_0x000107c4d75c(lVar3);
    func_0x000107c5a7f0(puVar5);
    func_0x000107c61170(puVar5);
    puVar5 = puVar4;
    func_0x000107c3f74c();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c371c);
      (*pcVar1)();
    }
    func_0x000107c4d760(lVar3);
    func_0x000107c5a804(puVar5);
    func_0x000107c61170(puVar5);
    puVar5 = puVar4;
    func_0x000107c5b078();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c3720);
      (*pcVar1)();
    }
    func_0x000107c4d768(lVar3);
    func_0x000107c5a724(puVar5);
    func_0x000107c61170(puVar5);
    puVar5 = puVar4;
    func_0x000107c5b078();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c3724);
      (*pcVar1)();
    }
    func_0x000107c4d764(lVar3);
    func_0x000107c550b8(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c508f8(lVar3);
    func_0x000107c57f1c(puVar4);
    func_0x000107c52810(puVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar4);
  }
  puVar4 = PTR_PTR_1126ba918;
  func_0x000107c610f8(PTR_PTR_1126ba918);
  func_0x000107c453e4();
  func_0x000107c51cbc();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c559a4(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c53218(puVar4);
  func_0x000107c52140(puVar2);
  func_0x000107c61170(puVar4);
  return puVar2;
}



/* Entry: 1010c3724; end: 1010c3763;  */

void FUN_1010c3724(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1010c3764; end: 1010c3773;  */

void FUN_1010c3764(long param_1,long param_2)

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



/* Entry: 1010c3774; end: 1010c3803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c3774(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112ff4f40;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_112ff4f40,auStack_38,0,0);
    lVar3 = *(long *)(lVar1 + lVar3);
    func_0x000107c615f0(lVar3);
    func_0x000107c61170(lVar1);
    if (lVar3 != 0) {
      puVar2 = PTR_PTR_1126afee0;
      func_0x000107c61168(PTR_PTR_1126afee0);
      lVar1 = lVar3;
      func_0x000107c6148c(lVar3,puVar2);
      if (lVar1 == 0) {
        func_0x000107c615e8(lVar3);
      }
    }
  }
  return;
}



/* Entry: 1010c3804; end: 1010c384f;  */

void FUN_1010c3804(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010c3850; end: 1010c38af;  */

void FUN_1010c3850(long param_1)

{
  undefined1 uStack_21;
  
  FUN_1010c3774();
  if (param_1 != 0) {
    func_0x000107c61170();
    func_0x0001000d224c(&uStack_21);
  }
  return;
}



/* Entry: 1010c38b0; end: 1010c3917;  */

/* WARNING: Possible PIC construction at 0x0001010c38e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010c38e4) */
/* WARNING: Removing unreachable block (ram,0x0001010c38e8) */

void FUN_1010c38b0(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112d5b228;
    plVar5 = (long *)&UNK_10d9223b0;
  }
  else {
    puVar3 = (ulong *)0x112d5b0a0;
    plVar5 = (long *)&UNK_10d97aac0;
    unaff_x30 = 0x1010c38e4;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 1010c3918; end: 1010c393b;  */

void FUN_1010c3918(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d5b210;
  plVar5 = (long *)&UNK_10d922388;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1010c5288(0,0x112d5b150,&PTR_PTR_1126d2bc8);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1010c393c; end: 1010c39b3;  */

void FUN_1010c393c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1010c5288(0,param_1,param_2);
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



/* Entry: 1010c39b4; end: 1010c3c43;  */

ulong FUN_1010c39b4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c3afc);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1010c3c68(uVar2,uVar4,0x112d5b150,&PTR_PTR_1126d2bc8,0x112d5b210,&UNK_10d922388);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c3af8);
      (*pcVar1)();
    }
    FUN_1010c3cf8(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1010c3c44; end: 1010c3c67;  */

undefined * FUN_1010c3c44(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)0x112d5b150;
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1010c393c(0x112d5b150,&PTR_PTR_1126d2bc8,0x112d5b210,&UNK_10d922388);
    func_0x000107c613fc();
    puVar2 = puVar1;
    func_0x000107c610a4();
    puVar3 = puVar2 + -0x19;
    if (0x1f < (long)puVar2) {
      puVar3 = puVar2 + -0x20;
    }
    *(long *)(puVar1 + 0x10) = param_1;
    *(ulong *)(puVar1 + 0x18) = ((long)puVar3 >> 3) << 1 | 1;
    puVar3 = puVar1;
  }
  return puVar3;
}



/* Entry: 1010c3c68; end: 1010c3cf7;  */

undefined *
FUN_1010c3c68(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1010c393c(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1010c3cf8; end: 1010c3f27;  */

long FUN_1010c3cf8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010c3e0c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1010c3e10);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1010c5288(0,0x112d5b150,&PTR_PTR_1126d2bc8);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1010c5288(0,0x112d5b150,&PTR_PTR_1126d2bc8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010c3e08);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1010c3f28; end: 1010c3f3b;  */

ulong FUN_1010c3f28(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c4020);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c4024);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126d2bc8;
    func_0x000107c61168(PTR_PTR_1126d2bc8);
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
    puVar4 = PTR_PTR_1126d2bc8;
    func_0x000107c61168(PTR_PTR_1126d2bc8);
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
  FUN_1010c5288(0,0x112d5b150,&PTR_PTR_1126d2bc8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c40f8);
  (*pcVar2)();
}



/* Entry: 1010c3f3c; end: 1010c40f7;  */

ulong FUN_1010c3f3c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c4020);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c4024);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1010c5288(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c40f8);
  (*pcVar2)();
}



/* Entry: 1010c40f8; end: 1010c410b;  */

ulong FUN_1010c40f8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c4020);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c4024);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b25f0;
    func_0x000107c61168(PTR_PTR_1126b25f0);
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
    puVar4 = PTR_PTR_1126b25f0;
    func_0x000107c61168(PTR_PTR_1126b25f0);
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
  FUN_1010c5288(0,0x112d538a0,&PTR_PTR_1126b25f0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c40f8);
  (*pcVar2)();
}



/* Entry: 1010c410c; end: 1010c41bb;  */

void FUN_1010c410c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_1010c39b4();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1010c41bc; end: 1010c420b;  */

/* WARNING: Removing unreachable block (ram,0x0001010c39e8) */
/* WARNING: Removing unreachable block (ram,0x0001010c3a0c) */
/* WARNING: Removing unreachable block (ram,0x0001010c39f0) */
/* WARNING: Removing unreachable block (ram,0x0001010c3af8) */
/* WARNING: Removing unreachable block (ram,0x0001010c39fc) */
/* WARNING: Removing unreachable block (ram,0x0001010c3a04) */
/* WARNING: Removing unreachable block (ram,0x0001010c3a68) */
/* WARNING: Removing unreachable block (ram,0x0001010c3a7c) */
/* WARNING: Removing unreachable block (ram,0x0001010c3a88) */
/* WARNING: Removing unreachable block (ram,0x0001010c3a90) */

ulong FUN_1010c41bc(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_1010c3c68(uVar4,uVar3,0x112d5b150,&PTR_PTR_1126d2bc8,0x112d5b210,&UNK_10d922388);
  if (-1 < (long)uVar4) {
    FUN_1010c3cf8(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c3af8);
  (*pcVar1)();
}



/* Entry: 1010c420c; end: 1010c43f7;  */

undefined * FUN_1010c420c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar2 = param_1;
  func_0x000107c5c724();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126d2bc8;
    func_0x000107c610f8(PTR_PTR_1126d2bc8);
    func_0x000107c453e4();
    func_0x000107c5a0f8();
    puVar3 = PTR_PTR_1126d2bd0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar4 = puVar3;
    func_0x000107c3f74c();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c43ec);
      (*pcVar1)();
    }
    func_0x000107c4d75c(lVar2);
    func_0x000107c5a7f0(puVar4);
    func_0x000107c61170(puVar4);
    puVar4 = puVar3;
    func_0x000107c3f74c();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c43f0);
      (*pcVar1)();
    }
    func_0x000107c4d760(lVar2);
    func_0x000107c5a804(puVar4);
    func_0x000107c61170(puVar4);
    puVar4 = puVar3;
    func_0x000107c5b078();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c43f4);
      (*pcVar1)();
    }
    func_0x000107c4d768(lVar2);
    func_0x000107c5a724(puVar4);
    func_0x000107c61170(puVar4);
    puVar4 = puVar3;
    func_0x000107c5b078();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c43f8);
      (*pcVar1)();
    }
    func_0x000107c4d764(lVar2);
    func_0x000107c550b8(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c508f8(lVar2);
    func_0x000107c57f1c(puVar3);
    func_0x000107c52810(puVar5);
    puVar4 = PTR_PTR_1126ba918;
    func_0x000107c610f8(PTR_PTR_1126ba918);
    func_0x000107c453e4();
    func_0x000107c51cbc();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c559a4(puVar4);
    func_0x000107c61170(param_1);
    func_0x000107c53218(puVar4);
    func_0x000107c52140(puVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
  }
  return puVar5;
}



/* Entry: 1010c43f8; end: 1010c4503;  */

void FUN_1010c43f8(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1010c44e0);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0;
  FUN_1010c5288(0,0x112d5b150,&PTR_PTR_1126d2bc8);
  func_0x000107c61408(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1010c44e4);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
      lVar3 = uVar7 - param_2;
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
      lVar3 = uVar7 - param_2;
    }
    if (SBORROW8(uVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1010c44fc);
      (*pcVar5)();
    }
    uVar7 = lVar1 + param_3 * 8;
    uVar2 = uVar8 + 0x20 + param_2 * 8;
    if (uVar7 != uVar2 || uVar2 + lVar3 * 8 <= uVar7) {
      func_0x000107c610b8(uVar7,uVar2,lVar3 << 3);
    }
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1010c4500);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1010c4504);
    (*pcVar5)();
  }
  return;
}



/* Entry: 1010c4504; end: 1010c45c7;  */

/* WARNING: Removing unreachable block (ram,0x0001010c4500) */

void FUN_1010c4504(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010c45a4);
    (*pcVar3)();
  }
  uVar7 = *unaff_x20;
  if (uVar7 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar7 & 0xffffffffffffff8;
    if ((uVar7 & 0x8000000000000000) != 0) {
      uVar6 = uVar7;
    }
    func_0x000107c60480();
  }
  if ((long)uVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010c45bc);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010c45c0);
    (*pcVar3)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (uVar7 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar7 & 0xffffffffffffff8;
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar6 = uVar7;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar6,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010c45c8);
      (*pcVar3)();
    }
    FUN_1010c410c(uVar6 + lVar1,1);
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010c44e0);
      (*pcVar3)();
    }
    uVar8 = *unaff_x20;
    uVar6 = uVar8 & 0xffffffffffffff8;
    uVar7 = uVar6 + 0x20 + param_1 * 8;
    uVar4 = 0;
    FUN_1010c5288(0,0x112d5b150,&PTR_PTR_1126d2bc8);
    func_0x000107c61408(uVar7,lVar1,uVar4);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010c44e4);
      (*pcVar3)();
    }
    if (lVar2 != 0) {
      if (uVar8 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar6 + 0x10);
        lVar1 = uVar5 - param_2;
      }
      else {
        uVar5 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar5 = uVar8;
        }
        func_0x000107c60480();
        lVar1 = uVar5 - param_2;
      }
      if (SBORROW8(uVar5,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1010c44fc);
        (*pcVar3)();
      }
      uVar5 = uVar6 + 0x20 + param_2 * 8;
      if (uVar7 != uVar5 || uVar5 + lVar1 * 8 <= uVar7) {
        func_0x000107c610b8(uVar7,uVar5,lVar1 << 3);
      }
      if (uVar8 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar6 + 0x10);
      }
      else {
        uVar7 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar7 = uVar8;
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar7,lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1010c4500);
        (*pcVar3)();
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + lVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1010c45c4);
  (*pcVar3)();
}



/* Entry: 1010c45c8; end: 1010c5287;  */

/* WARNING: Possible PIC construction at 0x0001010c4634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010c46d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010c48bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010c49a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010c48e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010c46f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010c48e4) */
/* WARNING: Removing unreachable block (ram,0x0001010c49a4) */
/* WARNING: Removing unreachable block (ram,0x0001010c49a8) */
/* WARNING: Removing unreachable block (ram,0x0001010c4a2c) */
/* WARNING: Removing unreachable block (ram,0x0001010c49ac) */
/* WARNING: Removing unreachable block (ram,0x0001010c4a40) */
/* WARNING: Removing unreachable block (ram,0x0001010c49b0) */
/* WARNING: Removing unreachable block (ram,0x0001010c4a5c) */
/* WARNING: Removing unreachable block (ram,0x0001010c49bc) */
/* WARNING: Removing unreachable block (ram,0x0001010c48c0) */
/* WARNING: Removing unreachable block (ram,0x0001010c48d0) */
/* WARNING: Removing unreachable block (ram,0x0001010c48ec) */
/* WARNING: Removing unreachable block (ram,0x0001010c4928) */
/* WARNING: Removing unreachable block (ram,0x0001010c4ad4) */
/* WARNING: Removing unreachable block (ram,0x0001010c492c) */
/* WARNING: Removing unreachable block (ram,0x0001010c4ad8) */
/* WARNING: Removing unreachable block (ram,0x0001010c493c) */
/* WARNING: Removing unreachable block (ram,0x0001010c4adc) */
/* WARNING: Removing unreachable block (ram,0x0001010c4944) */
/* WARNING: Removing unreachable block (ram,0x0001010c48f0) */
/* WARNING: Removing unreachable block (ram,0x0001010c4960) */
/* WARNING: Removing unreachable block (ram,0x0001010c4970) */
/* WARNING: Removing unreachable block (ram,0x0001010c4974) */
/* WARNING: Removing unreachable block (ram,0x0001010c4980) */
/* WARNING: Removing unreachable block (ram,0x0001010c4978) */
/* WARNING: Removing unreachable block (ram,0x0001010c4990) */
/* WARNING: Removing unreachable block (ram,0x0001010c48d8) */
/* WARNING: Removing unreachable block (ram,0x0001010c49cc) */
/* WARNING: Removing unreachable block (ram,0x0001010c4a58) */
/* WARNING: Removing unreachable block (ram,0x0001010c49d4) */
/* WARNING: Removing unreachable block (ram,0x0001010c4a54) */
/* WARNING: Removing unreachable block (ram,0x0001010c49dc) */
/* WARNING: Removing unreachable block (ram,0x0001010c4a18) */
/* WARNING: Removing unreachable block (ram,0x0001010c4a20) */
/* WARNING: Removing unreachable block (ram,0x0001010c49e4) */
/* WARNING: Removing unreachable block (ram,0x0001010c49ec) */
/* WARNING: Removing unreachable block (ram,0x0001010c49f8) */
/* WARNING: Removing unreachable block (ram,0x0001010c46d8) */
/* WARNING: Removing unreachable block (ram,0x0001010c473c) */
/* WARNING: Removing unreachable block (ram,0x0001010c4ae0) */
/* WARNING: Removing unreachable block (ram,0x0001010c4744) */
/* WARNING: Removing unreachable block (ram,0x0001010c475c) */
/* WARNING: Removing unreachable block (ram,0x0001010c4760) */
/* WARNING: Removing unreachable block (ram,0x0001010c474c) */
/* WARNING: Removing unreachable block (ram,0x0001010c4758) */
/* WARNING: Removing unreachable block (ram,0x0001010c4864) */
/* WARNING: Removing unreachable block (ram,0x0001010c4870) */
/* WARNING: Removing unreachable block (ram,0x0001010c49fc) */
/* WARNING: Removing unreachable block (ram,0x0001010c487c) */
/* WARNING: Removing unreachable block (ram,0x0001010c4a4c) */
/* WARNING: Removing unreachable block (ram,0x0001010c4880) */
/* WARNING: Removing unreachable block (ram,0x0001010c4a50) */
/* WARNING: Removing unreachable block (ram,0x0001010c4890) */
/* WARNING: Removing unreachable block (ram,0x0001010c4898) */
/* WARNING: Removing unreachable block (ram,0x0001010c48dc) */
/* WARNING: Removing unreachable block (ram,0x0001010c48ac) */
/* WARNING: Removing unreachable block (ram,0x0001010c46e8) */
/* WARNING: Removing unreachable block (ram,0x0001010c46f0) */
/* WARNING: Removing unreachable block (ram,0x0001010c4638) */
/* WARNING: Removing unreachable block (ram,0x0001010c46fc) */
/* WARNING: Removing unreachable block (ram,0x0001010c4a44) */
/* WARNING: Removing unreachable block (ram,0x0001010c4704) */

void FUN_1010c45c8(undefined8 param_1,undefined *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  puVar7 = param_2;
  func_0x000107c4b4a4();
  func_0x000107c61180();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar7 == (undefined *)0x0) {
    uVar5 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e;
    if (uVar5 == 0) {
      puVar7 = *(undefined **)
                (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar7 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
      if (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0x8000000000000000) != 0) {
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      func_0x000107c60480();
    }
    if (puVar7 == (undefined *)0x0) {
      if (uVar5 == 0) {
        puVar7 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar7 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
        if (((ulong)puVar3 & 0x8000000000000000) != 0) {
          puVar7 = puVar3;
        }
        func_0x000107c60480();
      }
      if ((ulong)puVar3 >> 0x3e == 0) {
        puVar4 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar4 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar3) {
          puVar4 = puVar3;
        }
        func_0x000107c60480();
      }
      if ((long)puVar4 < (long)puVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c4a9c);
        (*pcVar1)();
      }
      FUN_1010c4504(puVar7);
      puVar7 = puVar3;
      func_0x000107c61550();
      if ((((int)puVar7 == 0) || ((long)puVar3 < 0)) ||
         (puVar7 = puVar3, ((ulong)puVar3 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar4 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar4 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar4 = puVar3;
          }
          func_0x000107c60480(puVar4);
        }
        puVar7 = (undefined *)0x0;
        FUN_1010c39b4(0,puVar4 + 1,1,puVar3);
      }
      uVar6 = (ulong)puVar7 & 0xffffffffffffff8;
      uVar5 = *(ulong *)(uVar6 + 0x10);
      puVar3 = puVar7;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_1010c39b4(puVar3,uVar5 + 1,1,puVar7);
        uVar6 = (ulong)puVar3 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar5 + 1;
      *(undefined8 *)(uVar6 + uVar5 * 8 + 0x20) = param_1;
      uVar2 = 0;
      FUN_1010c5288(0,0x112d5b150,&PTR_PTR_1126d2bc8);
      func_0x000107c61174(param_1);
      puVar7 = puVar3;
      func_0x000107c5fc48(puVar3,uVar2);
      func_0x000107c55ebc(param_2);
      func_0x000107c6142c(puVar3);
    }
    else {
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c4a4c);
          (*pcVar1)();
        }
        puVar7 = *(undefined **)(puVar3 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar7 = (undefined *)0x0;
        FUN_1010c3f3c(0,puVar3,&PTR_PTR_1126d2bc8,0x112d5b150);
      }
      puVar3 = puVar7;
      func_0x000107c3cf80();
      func_0x000107c61180();
      if (puVar3 != (undefined *)0x0) {
        func_0x000107c3f63c();
        puVar7 = puVar3;
      }
    }
  }
  else {
    uVar2 = 0;
    FUN_1010c5288(0,0x112d5b150,&PTR_PTR_1126d2bc8);
    func_0x000107c5fc54(puVar7,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1010c5288; end: 1010c52c7;  */

void FUN_1010c5288(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1010c52c8; end: 1010c5357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c52c8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 uStack_49;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112fde478;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_112fde478,auStack_48,0,0);
    lVar2 = *(long *)(lVar1 + lVar2);
    func_0x000107c615f0(lVar2);
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c615e8(lVar2);
      func_0x0001000d224c(&uStack_49);
    }
  }
  return;
}



/* Entry: 1010c5358; end: 1010c55f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c5358(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_88 [24];
  
  if (param_2 != 0) {
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    lVar8 = _DAT_112fde478;
    if (lVar3 != 0) {
      func_0x000107c61428(lVar3 + _DAT_112fde478,auStack_88,0,0);
      lVar8 = *(long *)(lVar3 + lVar8);
      func_0x000107c615f0(lVar8);
      func_0x000107c61174();
      func_0x000107c61170(lVar3);
      lVar3 = param_2;
      if (lVar8 != 0) {
        func_0x000107c5c724();
        func_0x000107c61180();
        if (lVar3 == 0) {
          puVar9 = (undefined *)0x0;
          puVar11 = (undefined *)0x0;
          puVar10 = (undefined *)0x1;
        }
        else {
          func_0x000107c4d75c();
          uVar7 = param_1;
          func_0x000107c4d760(lVar3);
          puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          func_0x000107c61168();
          puVar10 = puVar9;
          func_0x000107c5dc50(param_1,uVar7);
          func_0x000107c61180();
          func_0x000107c4d768(lVar3);
          uVar7 = param_1;
          func_0x000107c4d764(lVar3);
          func_0x000107c5dc58(param_1,uVar7,puVar9);
          func_0x000107c61180();
          func_0x000107c508f8(lVar3);
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c466c0(param_1);
          func_0x000107c61170(lVar3);
        }
        bVar2 = puVar10 != (undefined *)0x1;
        puVar1 = (undefined *)0x0;
        if (bVar2) {
          puVar1 = puVar11;
        }
        puVar11 = (undefined *)0x0;
        if (bVar2) {
          puVar11 = puVar9;
        }
        puVar9 = (undefined *)0x0;
        if (bVar2) {
          puVar9 = puVar10;
        }
        func_0x000107c5fadc(param_3,param_4);
        lVar4 = param_2;
        func_0x000107c51cbc();
        func_0x000107c61180();
        uVar7 = param_4;
        if (lVar4 == 0) {
          func_0x000107c5faec();
          uVar7 = param_4;
          func_0x000107c5fadc();
          func_0x000107c6142c(param_4);
        }
        lVar5 = param_2;
        func_0x000107c4d3e4();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar7);
        }
        lVar6 = param_2;
        func_0x000107c5dcc4();
        func_0x000107c61180();
        lVar3 = lVar6;
        if (lVar6 == 0) {
          func_0x000107c5fc54();
          lVar3 = lVar6;
          func_0x000107c5fc48();
          func_0x000107c6142c(lVar6);
        }
        func_0x000107c5d6b4(lVar8);
        func_0x000107c61170(param_2);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(param_3);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar5);
      }
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 1010c55f4; end: 1010c563f;  */

void FUN_1010c55f4(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010c5640; end: 1010c5683;  */

uint FUN_1010c5640(uint param_1)

{
  FUN_1010c52c8();
  return param_1 & 1;
}



/* Entry: 1010c5684; end: 1010c568b;  */

void FUN_1010c5684(undefined1 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c1790);
      (*pcVar1)();
    }
    uVar4 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010ef24730);
    lVar2 = lVar3;
    func_0x000107c3ebd4();
    uVar5 = (undefined1)lVar2;
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar4);
  }
  *param_1 = uVar5;
  return;
}



/* Entry: 1010c568c; end: 1010c56cf; -[SCLensVenuePostCaptureIntegrationEntryPoint end] */

void FUN_1010c568c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010c56d0; end: 1010c5703;  */

void FUN_1010c56d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010c5704; end: 1010c579b; -[SCLensVenuePostCaptureIntegrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c5704(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d5b2d8);
  func_0x000107c61610(param_1 + _DAT_112d5b2e0);
  func_0x000107c61610(param_1 + _DAT_112d5b2e8);
  func_0x000107c61610(param_1 + _DAT_112d5b2f0);
  func_0x000107c61610(param_1 + _DAT_112d5b2f8);
  func_0x000107c61610(param_1 + _DAT_112d5b300);
  func_0x000107c61610(param_1 + _DAT_112d5b308);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5b310));
  return;
}



/* Entry: 1010c579c; end: 1010c57bb;  */

void FUN_1010c579c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ae808);
  return;
}



/* Entry: 1010c57bc; end: 1010c57c3;  */

void FUN_1010c57bc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = lVar4;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c1b54);
      (*pcVar1)();
    }
    uVar3 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010ef24760);
    lVar4 = lVar2;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 1010c57c4; end: 1010c5807; -[SCLensVenuePreCaptureIntegrationEntryPoint end] */

void FUN_1010c57c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010c5808; end: 1010c583b;  */

void FUN_1010c5808(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010c583c; end: 1010c58c3; -[SCLensVenuePreCaptureIntegrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c583c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d5b340);
  func_0x000107c61610(param_1 + _DAT_112d5b348);
  func_0x000107c61610(param_1 + _DAT_112d5b350);
  func_0x000107c61610(param_1 + _DAT_112d5b358);
  func_0x000107c61610(param_1 + _DAT_112d5b360);
  func_0x000107c61610(param_1 + _DAT_112d5b368);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5b370));
  return;
}



/* Entry: 1010c58c4; end: 1010c58e3;  */

void FUN_1010c58c4(void)

{
  func_0x000107c61168(&PTR_PTR_1127ae8f8);
  return;
}



/* Entry: 1010c58e4; end: 1010c5a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1010c58e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,undefined8 param_14,undefined8 param_15)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  func_0x000107c61174(param_4);
  lVar2 = param_5;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + 0x18) = lVar2;
    *(undefined8 *)(unaff_x20 + 0x20) = param_6;
    *(undefined8 *)(unaff_x20 + 0x28) = param_7;
    *(undefined8 *)(unaff_x20 + 0x30) = param_8;
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_8);
    uVar3 = param_9;
    func_0x000107c44580();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x40) = param_10;
    *(undefined8 *)(unaff_x20 + 0x48) = param_11;
    *(undefined8 *)(unaff_x20 + 0x50) = param_12;
    *(undefined8 *)(unaff_x20 + 0x58) = param_14;
    uVar3 = *(undefined8 *)(param_13 + _DAT_113092298);
    func_0x000107c615f0(uVar3);
    func_0x000107c61170(param_13);
    *(undefined8 *)(unaff_x20 + 0x60) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x68) = param_15;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c5a6c);
  (*pcVar1)();
}



/* Entry: 1010c5a6c; end: 1010c609b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c5a6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  long unaff_x20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  long *plVar24;
  long lVar25;
  undefined8 uVar26;
  undefined **ppuVar27;
  undefined8 uVar28;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  long lStack_108;
  long lStack_100;
  undefined1 auStack_f8 [24];
  long lStack_e0;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long alStack_a0 [4];
  undefined **ppuStack_80;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113077298);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61174();
  uVar5 = uVar19;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c41920();
  func_0x000107c61180();
  func_0x000107c5d9dc();
  func_0x000107c61180();
  uVar28 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x50) + _DAT_113083898);
  lVar21 = *(long *)(unaff_x20 + 0x58);
  func_0x000107c61174();
  func_0x000107c5b200();
  func_0x000107c61180();
  lVar25 = _DAT_112fde470;
  ppuStack_80 = (undefined **)0x0;
  alStack_a0[1] = 0;
  alStack_a0[0] = 0;
  alStack_a0[3] = 0;
  alStack_a0[2] = 0;
  lVar22 = *(long *)(unaff_x20 + 0x68);
  func_0x000107c61428(lVar22 + _DAT_112fde470,auStack_b8,0,0);
  lVar10 = _DAT_112ff4f48;
  lVar25 = *(long *)(lVar22 + lVar25);
  if (lVar25 == 0) {
    lVar25 = *(long *)(unaff_x20 + 0x30);
    func_0x000107c61428(lVar25 + _DAT_112ff4f48,auStack_d0,0,0);
    uVar26 = *(undefined8 *)(lVar25 + lVar10);
    lVar9 = 0;
    func_0x0001010cb56c();
    lVar10 = lVar9;
    func_0x000107c613fc();
    *(undefined1 *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x20) = 1;
    *(undefined8 *)(lVar10 + 0x10) = uVar26;
    func_0x000107c61174(uVar26);
    ppuVar27 = &PTR_DAT_110381d50;
  }
  else {
    lVar9 = 0;
    func_0x0001010cb23c();
    lVar10 = lVar9;
    func_0x000107c613fc();
    *(undefined1 *)(lVar10 + 0x10) = 0;
    *(long *)(lVar10 + 0x18) = lVar25;
    func_0x000107c615f0(lVar25);
    ppuVar27 = &PTR_DAT_110381d68;
  }
  FUN_1010c6328(alStack_a0);
  lVar25 = 0;
  alStack_a0[0] = lVar10;
  alStack_a0[3] = lVar9;
  ppuStack_80 = ppuVar27;
  func_0x0001010c7a8c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar25 + 0x10) = uVar4;
  *(undefined8 *)(lVar25 + 0x18) = uVar15;
  *(undefined8 *)(lVar25 + 0x20) = uVar6;
  *(undefined8 *)(lVar25 + 0x28) = uVar7;
  *(undefined8 *)(lVar25 + 0x30) = uVar28;
  *(undefined8 *)(lVar25 + 0x38) = uVar2;
  *(undefined8 *)(lVar25 + 0x40) = uVar8;
  *(undefined8 *)(lVar25 + 0x48) = 0;
  func_0x0001010c6370(alStack_a0,auStack_f8);
  if (lStack_e0 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010c6098);
    (*pcVar3)();
  }
  lVar9 = 0;
  func_0x0001010c6cec();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar28);
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(lVar25);
  pcVar11 = "LensVenuesPickerController";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar9 + 0x40) = pcVar11;
  *(undefined8 *)(lVar9 + 0x48) = 0;
  FUN_1010c63c0(auStack_f8,lVar9 + 0x10);
  *(long *)(lVar9 + 0x38) = lVar25;
  lVar10 = lVar21;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = lVar10;
    func_0x000107c42bf8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
  }
  FUN_1010cb954(0);
  lVar10 = lVar20;
  FUN_1010cb740();
  func_0x000107c61170(lVar20);
  func_0x0001010c6370(alStack_a0,auStack_f8);
  if (lStack_e0 != 0) {
    puVar12 = &UNK_1103817f8;
    func_0x000107c613fc(&UNK_1103817f8,0x18,7);
    *(long *)(puVar12 + 0x10) = lVar22;
    lVar13 = 0;
    FUN_1010caadc();
    lVar14 = lVar13;
    func_0x000107c610f8();
    lVar20 = _DAT_112d5b730;
    func_0x000107c61174();
    func_0x000107c6157c(lVar10);
    func_0x000107c61174(lVar22);
    func_0x000107c6157c(lVar9);
    func_0x000107c61174();
    func_0x000107c61174();
    pcVar11 = "LensVenuesProvider";
    func_0x0001000c10c0();
    func_0x000107c61180();
    *(char **)(lVar14 + lVar20) = pcVar11;
    *(undefined8 *)(lVar14 + _DAT_112d5b758) = 0;
    *(undefined8 *)(lVar14 + _DAT_112d5b760) = 0;
    lVar22 = _DAT_112d5b770;
    uVar15 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(lVar14 + lVar22) = uVar15;
    lVar22 = _DAT_112d5b718;
    uVar15 = 0;
    func_0x00010006a340();
    func_0x000107c613fc();
    func_0x00010006a360();
    *(undefined8 *)(lVar14 + lVar22) = uVar15;
    *(undefined8 *)(lVar14 + _DAT_112d5b738) = uVar4;
    *(undefined8 *)(lVar14 + _DAT_112d5b740) = uVar5;
    *(long *)(lVar14 + _DAT_112d5b748) = lVar9;
    *(undefined8 *)(lVar14 + _DAT_112d5b728) = uVar19;
    func_0x0001010c63f8(auStack_f8,lVar14 + _DAT_112d5b750);
    *(long *)(lVar14 + _DAT_112d5b768) = lVar10;
    *(ulong *)(lVar14 + _DAT_112d5b778) =
         CONCAT17(in_register_00005007,
                  CONCAT16(in_register_00005006,
                           CONCAT15(in_register_00005005,
                                    CONCAT14(in_register_00005004,
                                             CONCAT13(in_register_00005003,
                                                      CONCAT12(in_register_00005002,
                                                               CONCAT11(in_register_00005001,in_b0))
                                                     )))));
    puVar1 = (undefined8 *)(lVar14 + _DAT_112d5b710);
    *puVar1 = 0x1010c63d8;
    puVar1[1] = puVar12;
    puVar17 = PTR_s_init_1125d9248;
    lStack_108 = lVar14;
    lStack_100 = lVar13;
    func_0x000107c61174();
    func_0x000107c6157c(lVar10);
    func_0x000107c6157c(lVar9);
    func_0x000107c61174(uVar19);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(puVar12);
    plVar16 = &lStack_108;
    func_0x000107c61154(plVar16,puVar17);
    plVar24 = *(long **)((long)plVar16 + _DAT_112d5b768);
    puVar17 = &UNK_110381820;
    func_0x000107c613fc(&UNK_110381820,0x18,7);
    func_0x000107c61614(puVar17 + 0x10,plVar16);
    pcVar23 = *(code **)(*plVar24 + 0x60);
    func_0x000107c61174();
    pcVar3 = FUN_1010c643c;
    puVar18 = puVar17;
    (*pcVar23)(FUN_1010c643c);
    func_0x000107c61574(puVar17);
    pcVar23 = pcVar3;
    func_0x000107c614f0(pcVar3);
    (**(code **)(puVar18 + 0x10))(*(undefined8 *)((long)plVar16 + _DAT_112d5b770),pcVar23,puVar18);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(lVar9);
    func_0x000107c61170(uVar19);
    func_0x000107c61574(lVar10);
    func_0x000107c61574(puVar12);
    func_0x000107c615e8(pcVar3);
    func_0x0001000834e4(auStack_f8);
    func_0x000107c61170(plVar16);
    param_1[3] = lVar13;
    param_1[4] = &PTR_DAT_110381ad0;
    func_0x000107c61574(lVar10);
    func_0x000107c61574(lVar9);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar21);
    *param_1 = plVar16;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61574(lVar25);
    FUN_1010c6328(alStack_a0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1010c609c);
  (*pcVar3)();
}



/* Entry: 1010c609c; end: 1010c619b;  */

/* WARNING: Possible PIC construction at 0x0001010c60a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010c60b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010c60c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010c60d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010c60e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010c60dc) */
/* WARNING: Removing unreachable block (ram,0x0001010c60cc) */
/* WARNING: Removing unreachable block (ram,0x0001010c60bc) */
/* WARNING: Removing unreachable block (ram,0x0001010c60ac) */
/* WARNING: Removing unreachable block (ram,0x0001010c60ec) */

void FUN_1010c609c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1010c619c; end: 1010c623b;  */

void FUN_1010c619c(long *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_68 [40];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar1 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef248b0);
  fVar4 = -1.0;
  func_0x000107c436e4(0xbf800000,uVar3);
  func_0x000107c61170(uVar1);
  FUN_1010c5a6c(auStack_68,(double)fVar4);
  func_0x000103a91858(0);
  func_0x000107c610f8();
  puVar2 = auStack_68;
  func_0x000103a91778();
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 1010c623c; end: 1010c62d3;  */

void FUN_1010c623c(undefined8 param_1)

{
  if (lRam0000000112d5b3c8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e62216c);
  return;
}



/* Entry: 1010c62d4; end: 1010c6327;  */

void FUN_1010c62d4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1010c6328; end: 1010c63bf;  */

undefined8 FUN_1010c6328(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d5b4c8;
  func_0x0001000285a8(0x112d5b4c8,&UNK_10d922548);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1010c63c0; end: 1010c63d7;  */

undefined8 * FUN_1010c63c0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1010c63d8; end: 1010c643b;  */

void FUN_1010c63d8(void)

{
  func_0x000103a90728();
  return;
}



/* Entry: 1010c643c; end: 1010c6443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c643c(char *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  if (cVar1 != '\0') {
    lVar5 = lVar2;
    (**(code **)(lVar2 + _DAT_112d5b710))();
    if (lVar5 != 0) {
LAB_1010c8f90:
      func_0x000107c61170();
      lVar5 = lVar2;
      func_0x000107c614f0(lVar2);
      uVar3 = 1;
      func_0x0001007d6c8c(1,0xd000000000000010,0x800000010ef25120,lVar2,lVar5,&PTR_DAT_110381af8);
      FUN_1010c7aac();
      puVar4 = &UNK_110381978;
      func_0x000107c613fc(&UNK_110381978,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar2);
      func_0x00010075a04c(0,1,0x1010caf50,puVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61574(uVar3);
      func_0x000107c61574(puVar4);
      return;
    }
    lVar5 = *(long *)(lVar2 + _DAT_112d5b740);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c4b88c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
      if (lVar6 != 0) goto LAB_1010c8f90;
    }
    lVar5 = lVar2;
    func_0x000107c614f0(lVar2);
    func_0x0001007d6c8c(1,0xd000000000000034,0x800000010ef250e0,lVar2,lVar5,&PTR_DAT_110381af8);
  }
  func_0x000107c61170();
  return;
}



/* Entry: 1010c6444; end: 1010c6b33;  */

void FUN_1010c6444(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lStack_118;
  undefined *apuStack_108 [9];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined *puStack_70;
  
  lStack_118 = *(long *)(param_2 + 0x10);
  puVar14 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lStack_118 != 0) {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001010c7508(0,lStack_118,0);
    puVar11 = (undefined8 *)(param_2 + 0x20);
    puVar13 = puVar11;
    lVar15 = lStack_118;
    do {
      puVar14 = puStack_70;
      uVar18 = puVar13[1];
      puVar17 = (undefined *)*puVar13;
      uVar20 = puVar13[3];
      uVar19 = puVar13[2];
      puStack_98 = (undefined *)puVar13[5];
      pcStack_a0 = (code *)puVar13[4];
      uVar12 = puVar13[7];
      uStack_90 = puVar13[6];
      uVar10 = puVar13[8];
      puVar3 = PTR_PTR_1126baaf0;
      puStack_c0 = puVar17;
      uStack_b8 = uVar18;
      puStack_b0 = (undefined *)uVar19;
      puStack_a8 = (undefined *)uVar20;
      uStack_88 = uVar12;
      uStack_80 = uVar10;
      func_0x000107c610f8();
      FUN_1010c7524(&puStack_c0,apuStack_108);
      func_0x000107c5fadc(uVar12,uVar10);
      puVar4 = puVar17;
      func_0x000107c5fadc(puVar17,uVar18);
      func_0x000107c5fadc(uVar19,uVar20);
      func_0x000107c5fadc(puVar17,uVar18);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sypN_11034f1a8 + 8);
      func_0x000107c494a0();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar19);
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar5);
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c68a8);
        (*pcVar2)();
      }
      func_0x0001010c7560(&puStack_c0);
      uVar6 = *(ulong *)(puVar14 + 0x10);
      puStack_70 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar6) {
        func_0x0001010c7508(1 < *(ulong *)(puVar14 + 0x18),uVar6 + 1,1);
      }
      puVar4 = puStack_70;
      *(ulong *)(puStack_70 + 0x10) = uVar6 + 1;
      *(undefined **)(puStack_70 + uVar6 * 8 + 0x20) = puVar3;
      puVar13 = puVar13 + 9;
      lVar15 = lVar15 + -1;
      puVar14 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    } while (lVar15 != 0);
    do {
      uVar12 = puVar11[5];
      pcStack_a0 = (code *)puVar11[4];
      uVar21 = puVar11[7];
      uVar19 = puVar11[6];
      uVar16 = puVar11[8];
      uStack_b8 = puVar11[1];
      puStack_c0 = (undefined *)*puVar11;
      puStack_a8 = (undefined *)puVar11[3];
      puStack_b0 = (undefined *)puVar11[2];
      puStack_98 = (undefined *)uVar12;
      uStack_90 = uVar19;
      uStack_88 = uVar21;
      uStack_80 = uVar16;
      FUN_1010c7524(&puStack_c0,apuStack_108);
      func_0x000107c61434(uVar19);
      func_0x000107c61434(uVar16);
      puVar3 = puVar14;
      func_0x000107c61558();
      uVar6 = uVar21;
      uVar8 = uVar16;
      apuStack_108[0] = puVar14;
      func_0x000100029284();
      uVar9 = (ulong)~(uint)uVar8 & 1;
      lVar15 = *(long *)(puVar14 + 0x10) + uVar9;
      if (SCARRY8(*(long *)(puVar14 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c68a0);
        (*pcVar2)();
      }
      if (*(long *)(puVar14 + 0x18) < lVar15) {
        func_0x0001001833c8(lVar15,puVar3);
        uVar6 = uVar21;
        uVar9 = uVar16;
        func_0x000100029284();
        if (((uint)uVar8 & 1) != ((uint)uVar9 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c68b8);
          (*pcVar2)();
        }
joined_r0x0001010c6790:
        if ((uVar8 & 1) != 0) goto LAB_1010c662c;
LAB_1010c6730:
        puVar14 = apuStack_108[0];
        *(ulong *)(apuStack_108[0] + (uVar6 >> 6) * 8 + 0x40) =
             *(ulong *)(apuStack_108[0] + (uVar6 >> 6) * 8 + 0x40) | 1L << (uVar6 & 0x3f);
        puVar1 = (ulong *)(*(long *)(apuStack_108[0] + 0x30) + uVar6 * 0x10);
        *puVar1 = uVar21;
        puVar1[1] = uVar16;
        puVar13 = (undefined8 *)(*(long *)(apuStack_108[0] + 0x38) + uVar6 * 0x10);
        *puVar13 = uVar12;
        puVar13[1] = uVar19;
        func_0x0001010c7560(&puStack_c0);
        if (SCARRY8(*(long *)(puVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c68a4);
          (*pcVar2)();
        }
        *(long *)(puVar14 + 0x10) = *(long *)(puVar14 + 0x10) + 1;
      }
      else {
        if (((ulong)puVar3 & 1) == 0) {
          func_0x000100184498();
          goto joined_r0x0001010c6790;
        }
        if ((uVar8 & 1) == 0) goto LAB_1010c6730;
LAB_1010c662c:
        puVar14 = apuStack_108[0];
        puVar13 = (undefined8 *)(*(long *)(apuStack_108[0] + 0x38) + uVar6 * 0x10);
        uVar10 = puVar13[1];
        *puVar13 = uVar12;
        puVar13[1] = uVar19;
        func_0x000107c6142c(uVar10);
        func_0x0001010c7560(&puStack_c0);
        func_0x000107c6142c(uVar16);
      }
      puVar11 = puVar11 + 9;
      lStack_118 = lStack_118 + -1;
    } while (lStack_118 != 0);
  }
  uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar3 = &UNK_1103818b0;
  func_0x000107c613fc(&UNK_1103818b0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,unaff_x20);
  puVar5 = &UNK_1103818d8;
  func_0x000107c613fc(&UNK_1103818d8,0x50,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  *(undefined **)(puVar5 + 0x28) = puVar14;
  *(undefined8 *)(puVar5 + 0x30) = param_3;
  *(undefined8 *)(puVar5 + 0x38) = param_4;
  *(undefined8 *)(puVar5 + 0x40) = param_5;
  *(undefined8 *)(puVar5 + 0x48) = param_6;
  pcStack_a0 = FUN_1010c77f8;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1103818f0;
  ppuVar7 = &puStack_c0;
  puStack_98 = puVar5;
  func_0x000107c60bc4(ppuVar7);
  puVar14 = puStack_98;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c61574(puVar14);
  func_0x000107c4e524(uVar12);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 1010c6b34; end: 1010c6c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c6b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined1 auStack_170 [72];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_f0 = 0;
  uStack_e8 = 0xe000000000000000;
  uStack_128 = 0;
  uStack_120 = 0xe000000000000000;
  uStack_118 = 0;
  uStack_110 = 0xe000000000000000;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0xe000000000000000;
  puStack_80 = &uStack_128;
  uStack_78 = param_1;
  func_0x0001044052b4(FUN_1010c7850,&uStack_90,FUN_1010cb738,0,0x1010cb73c,0);
  uStack_b8 = uStack_100;
  uStack_c0 = uStack_108;
  uStack_a8 = uStack_f0;
  uStack_b0 = uStack_f8;
  uStack_a0 = uStack_e8;
  uStack_d8 = uStack_120;
  uStack_e0 = uStack_128;
  uStack_c8 = uStack_110;
  uStack_d0 = uStack_118;
  uStack_68 = uStack_100;
  uStack_70 = uStack_108;
  uStack_58 = uStack_f0;
  uStack_60 = uStack_f8;
  uStack_50 = uStack_e8;
  uStack_88 = uStack_120;
  uStack_90 = uStack_128;
  uStack_78 = uStack_110;
  puStack_80 = (undefined8 *)uStack_118;
  FUN_1010c7524(&uStack_e0,auStack_170);
  func_0x0001010c7560(&uStack_90);
  (*param_4)(&uStack_e0);
  func_0x0001010c7560(&uStack_e0);
  func_0x000107c61428(param_6 + 0x10,&uStack_128,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61648();
  if (param_6 != 0) {
    uVar1 = *(undefined8 *)(param_6 + 0x48);
    *(undefined8 *)(param_6 + 0x48) = 0;
    func_0x000107c61574();
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1010c6c50; end: 1010c6caf;  */

void FUN_1010c6c50(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  (*param_1)();
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x48);
    *(undefined8 *)(param_3 + 0x48) = 0;
    func_0x000107c61574();
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1010c6cb0; end: 1010c6d0b;  */

void FUN_1010c6cb0(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010c6d0c; end: 1010c7057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c6d0c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar12 = unaff_x20 + _DAT_112d5b5c8;
  uVar13 = *(undefined8 *)(lVar12 + 0x18);
  lVar1 = *(long *)(lVar12 + 0x20);
  func_0x0001000a8868(lVar12,uVar13);
  (**(code **)(lVar1 + 8))(puVar3,uVar13,lVar1);
  puVar4 = &UNK_110381860;
  func_0x000107c613fc(&UNK_110381860,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  lVar12 = *(long *)(unaff_x20 + _DAT_112d5b5d0);
  uVar13 = *(undefined8 *)(lVar12 + 0x18);
  uVar5 = *(undefined8 *)(lVar12 + 0x28);
  func_0x000107c615f0(uVar13);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(lVar12 + 0x10);
  uVar14 = *(undefined8 *)(lVar12 + 0x40);
  if (param_2 == 0) {
    func_0x000107c61174(uVar15);
    func_0x000107c61174(uVar14);
  }
  else {
    uVar6 = 0;
    FUN_1010c7468(0);
    func_0x000107c61174(uVar15);
    func_0x000107c61174(uVar14);
    func_0x000107c5fc48(param_2,uVar6);
  }
  if (param_3 != 0) {
    func_0x000107c5f9dc(param_3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  puVar7 = PTR_PTR_1126d4d10;
  func_0x000107c610f8();
  pcStack_70 = FUN_1010c73b4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1010c73bc;
  puStack_78 = &UNK_110381878;
  ppuVar8 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c6157c(puVar4);
  func_0x000107c49454();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c615e8(uVar13);
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(puStack_68);
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c61174(puVar7);
    puVar9 = puVar7;
    FUN_1010c78ac();
    puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar11 = puVar10;
    func_0x000107c3fdd0(0x3fd3333333333333);
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    puVar10 = PTR_PTR_1126c6008;
    func_0x000107c610f8();
    func_0x000107c61174(puVar3);
    func_0x000107c47830();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar11);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d5b5d8);
    *(undefined **)(unaff_x20 + _DAT_112d5b5d8) = puVar10;
    func_0x000107c61174(puVar10);
    func_0x000107c61170(uVar13);
    func_0x000107c5ae24(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c7058);
  (*pcVar2)();
}



/* Entry: 1010c7058; end: 1010c71a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c7058(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  byte bStack_69;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112d5b5b0;
  if (param_5 != 0) {
    uVar3 = *(undefined8 *)(param_5 + _DAT_112d5b5b0);
    func_0x000107c6157c(uVar3);
    func_0x0001000c74f0(&bStack_69);
    func_0x000107c61574(uVar3);
    if ((bStack_69 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_5 + lVar2);
      func_0x000107c6157c(uVar3);
      func_0x000100075034(0x1010c7894,0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar3);
      (**(code **)(param_5 + _DAT_112d5b5c0))(param_1,param_2,param_3 & 1,param_4);
      lVar2 = param_5 + _DAT_112d5b5c8;
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
      lVar1 = *(long *)(lVar2 + 0x20);
      func_0x0001000a8868(lVar2,uVar3);
      (**(code **)(lVar1 + 0x10))(uVar3,lVar1);
      lVar2 = *(long *)(param_5 + _DAT_112d5b5d8);
      if (lVar2 != 0) {
        func_0x000107c61174();
        func_0x000107c44df0();
        func_0x000107c61170(lVar2);
      }
    }
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 1010c71a8; end: 1010c728b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c71a8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  byte bStack_31;
  
  lVar1 = _DAT_112d5b5b0;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d5b5b0);
  func_0x000107c6157c(uVar3);
  func_0x0001000c74f0(&bStack_31);
  func_0x000107c61574(uVar3);
  if ((bStack_31 & 1) == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c6157c(uVar3);
    func_0x000100075034(FUN_1010c7880,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar3);
    (**(code **)(unaff_x20 + _DAT_112d5b5b8))();
    lVar1 = unaff_x20 + _DAT_112d5b5c8;
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar3);
    (**(code **)(lVar2 + 0x10))(uVar3,lVar2);
    if (*(long *)(unaff_x20 + _DAT_112d5b5d8) != 0) {
      func_0x000107c44df0();
    }
  }
  return;
}



/* Entry: 1010c728c; end: 1010c72b3; -[_TtC23LensVenuesProvidingImplP33_9837F69E7AD655DE5F962618A81EE46114PickerWorkflow trayViewControllerDismissed] */

void FUN_1010c728c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010c71a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010c72b4; end: 1010c7313; -[_TtC23LensVenuesProvidingImplP33_9837F69E7AD655DE5F962618A81EE46114PickerWorkflow init] */

void FUN_1010c72b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensVenuesProvidingImpl.PickerWorkflow",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c72e0);
  (*pcVar1)();
}



/* Entry: 1010c7314; end: 1010c7393; -[_TtC23LensVenuesProvidingImplP33_9837F69E7AD655DE5F962618A81EE46114PickerWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c7314(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5b5b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5b5b8 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5b5c0 + 8));
  func_0x0001000834e4(param_1 + _DAT_112d5b5c8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5b5d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d5b5d8));
  return;
}



/* Entry: 1010c7394; end: 1010c73b3;  */

void FUN_1010c7394(void)

{
  func_0x000107c61168(&PTR_PTR_1127ae9e0);
  return;
}



/* Entry: 1010c73b4; end: 1010c73bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c73b4(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  byte bStack_69;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112d5b5b0;
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112d5b5b0);
    func_0x000107c6157c(uVar4);
    func_0x0001000c74f0(&bStack_69);
    func_0x000107c61574(uVar4);
    if ((bStack_69 & 1) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + lVar3);
      func_0x000107c6157c(uVar4);
      func_0x000100075034(0x1010c7894,0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar4);
      (**(code **)(lVar2 + _DAT_112d5b5c0))(param_1,param_2,param_3 & 1,param_4);
      lVar3 = lVar2 + _DAT_112d5b5c8;
      uVar4 = *(undefined8 *)(lVar3 + 0x18);
      lVar1 = *(long *)(lVar3 + 0x20);
      func_0x0001000a8868(lVar3,uVar4);
      (**(code **)(lVar1 + 0x10))(uVar4,lVar1);
      lVar3 = *(long *)(lVar2 + _DAT_112d5b5d8);
      if (lVar3 != 0) {
        func_0x000107c61174();
        func_0x000107c44df0();
        func_0x000107c61170(lVar3);
      }
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1010c73bc; end: 1010c744b;  */

/* WARNING: Possible PIC construction at 0x0001010c742c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010c7430) */

void FUN_1010c73bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  (*pcVar1)(param_1,param_3,param_4,param_5);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1010c744c; end: 1010c7467;  */

void FUN_1010c744c(long param_1,long param_2)

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



/* Entry: 1010c7468; end: 1010c7523;  */

void FUN_1010c7468(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4edb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126baaf0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d4edb8 = puVar1;
  return;
}



/* Entry: 1010c7524; end: 1010c7593;  */

undefined8 FUN_1010c7524(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103a90df0)(param_2,param_1);
  return param_2;
}



/* Entry: 1010c7594; end: 1010c75af;  */

void FUN_1010c7594(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1010c76d4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1010c75b0; end: 1010c76d3;  */

undefined * FUN_1010c75b0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c76d4);
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
    func_0x0001010c74ac();
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
    func_0x0001010c7468(0);
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



/* Entry: 1010c76d4; end: 1010c77f7;  */

undefined * FUN_1010c76d4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c77f8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d5b610;
    func_0x0001000285a8(0x112d5b610,&UNK_10d9225b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1106c79f8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x48 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1010c77f8; end: 1010c7817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c77f8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  long unaff_x20;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c61428(lVar10 + 0x10,auStack_78,0,0);
  lVar10 = lVar10 + 0x10;
  func_0x000107c61648();
  if (lVar10 != 0) {
    puVar13 = &UNK_1103818b0;
    puVar11 = puVar13;
    func_0x000107c613fc(&UNK_1103818b0,0x18,7);
    func_0x000107c61644(puVar11 + 0x10,lVar10);
    puVar12 = &UNK_110381928;
    func_0x000107c613fc(&UNK_110381928,0x28,7);
    *(undefined8 *)(puVar12 + 0x10) = uVar19;
    *(undefined8 *)(puVar12 + 0x18) = uVar6;
    *(undefined **)(puVar12 + 0x20) = puVar11;
    func_0x000107c613fc(&UNK_1103818b0,0x18,7);
    func_0x000107c61644(puVar13 + 0x10,lVar10);
    puVar14 = &UNK_110381950;
    func_0x000107c613fc(&UNK_110381950,0x28,7);
    *(undefined8 *)(puVar14 + 0x10) = uVar3;
    *(undefined8 *)(puVar14 + 0x18) = uVar7;
    *(undefined **)(puVar14 + 0x20) = puVar13;
    uVar19 = *(undefined8 *)(lVar10 + 0x38);
    lVar15 = 0;
    FUN_1010c7394();
    lVar16 = lVar15;
    func_0x000107c610f8();
    lVar9 = _DAT_112d5b5b0;
    uStack_79 = 0;
    func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(puVar11);
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(puVar13);
    puVar17 = &uStack_79;
    func_0x00010006c248();
    *(undefined1 **)(lVar16 + lVar9) = puVar17;
    *(undefined8 *)(lVar16 + _DAT_112d5b5d8) = 0;
    puVar1 = (undefined8 *)(lVar16 + _DAT_112d5b5b8);
    *puVar1 = FUN_1010c7844;
    puVar1[1] = puVar14;
    *(undefined8 *)(lVar16 + _DAT_112d5b5d0) = uVar19;
    puVar1 = (undefined8 *)(lVar16 + _DAT_112d5b5c0);
    *puVar1 = 0x1010c780c;
    puVar1[1] = puVar12;
    func_0x0001010c63f8(lVar10 + 0x10,lVar16 + _DAT_112d5b5c8);
    puVar8 = PTR_s_init_1125d9248;
    lStack_90 = lVar16;
    lStack_88 = lVar15;
    func_0x000107c6157c(puVar14);
    func_0x000107c6157c(uVar19);
    func_0x000107c6157c(puVar12);
    plVar18 = &lStack_90;
    func_0x000107c61154(plVar18,puVar8);
    uVar19 = *(undefined8 *)(lVar10 + 0x48);
    *(long **)(lVar10 + 0x48) = plVar18;
    func_0x000107c61170(uVar19);
    func_0x000107c61174(plVar18);
    FUN_1010c6d0c(uVar4,uVar2,uVar5);
    func_0x000107c61574(puVar11);
    func_0x000107c61574(puVar13);
    func_0x000107c61170(plVar18);
    func_0x000107c61574(puVar12);
    func_0x000107c61574(puVar14);
    func_0x000107c61574(lVar10);
  }
  return;
}



/* Entry: 1010c7818; end: 1010c7843;  */

void FUN_1010c7818(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1010c7844; end: 1010c784f;  */

void FUN_1010c7844(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  (**(code **)(unaff_x20 + 0x10))(*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(lVar1 + 0x48) = 0;
    func_0x000107c61574();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1010c7850; end: 1010c787b;  */

void FUN_1010c7850(void)

{
  FUN_1010cb5e4();
  return;
}



/* Entry: 1010c787c; end: 1010c787f;  */

void FUN_1010c787c(long param_1,long param_2)

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



/* Entry: 1010c7880; end: 1010c78a7;  */

void FUN_1010c7880(void)

{
  FUN_100ca26dc();
  return;
}



/* Entry: 1010c78a8; end: 1010c78ab;  */

void FUN_1010c78a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1010c78ac; end: 1010c7a17;  */

undefined * FUN_1010c78ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x48);
  puVar3 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    puVar2 = puVar1;
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c5af88(puVar1,param_2,0xd5);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3fdd0(0x3fc999999999999a);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c5af88(puVar1,param_2,0xd6);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0;
    puVar3 = PTR_PTR_1126b1f08;
    func_0x000107c610f8();
    func_0x000107c47fac(uVar5,0x4038000000000000,0x4034000000000000);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar1);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined **)(unaff_x20 + 0x48) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar5);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar3;
}



/* Entry: 1010c7a18; end: 1010c7aab;  */

void FUN_1010c7a18(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1010c7aac; end: 1010c7b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1010c7aac(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_38;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  (**(code **)(unaff_x20 + _DAT_112d5b710))();
  uVar2 = 0x112d5b720;
  func_0x0001000285a8(0x112d5b720,&UNK_10d922620);
  func_0x000100087bd4(&uStack_38,0x1010cafc0,auStack_60,uVar2);
  func_0x000107c61170(lVar1);
  return uStack_38;
}



/* Entry: 1010c7b4c; end: 1010c7c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c7b4c(long *param_1,double param_2,double param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  
  lVar1 = _DAT_112d5b758;
  lVar2 = *(long *)(param_4 + _DAT_112d5b758);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_4 + _DAT_112d5b760);
    if (lVar3 == 0) {
      if (param_5 == 0) {
        func_0x000107c6157c(lVar2);
        goto LAB_1010c7c54;
      }
    }
    else if (param_5 != 0) {
      func_0x000107c6157c(lVar2);
      func_0x000107c61174(lVar3);
      func_0x000107c4077c();
      dVar5 = param_2;
      func_0x000107c4077c(param_5);
      if (param_2 == dVar5) {
        func_0x000107c4077c(lVar3);
        dVar5 = param_3;
        func_0x000107c4077c(param_5);
        func_0x000107c61170(lVar3);
        if (param_3 == dVar5) goto LAB_1010c7c54;
      }
      else {
        func_0x000107c61170(lVar3);
      }
      func_0x000107c61574(lVar2);
    }
  }
  lVar2 = param_5;
  FUN_1010c7c78();
  uVar4 = *(undefined8 *)(param_4 + lVar1);
  *(long *)(param_4 + lVar1) = lVar2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar4);
  uVar4 = *(undefined8 *)(param_4 + _DAT_112d5b760);
  *(long *)(param_4 + _DAT_112d5b760) = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61170(uVar4);
LAB_1010c7c54:
  *param_1 = lVar2;
  return;
}



/* Entry: 1010c7c78; end: 1010c7d77;  */

undefined8 FUN_1010c7c78(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  func_0x000107c614f0();
  func_0x0001007d6c8c(1,0xd000000000000025,0x800000010ef24d50);
  func_0x0001000285a8(0x112d5b720,&UNK_10d922620);
  puVar1 = &UNK_110381978;
  func_0x000107c613fc(&UNK_110381978,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110381c20;
  func_0x000107c613fc(&UNK_110381c20,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = unaff_x20;
  func_0x000107c61174(param_1);
  uVar3 = 0;
  func_0x0001048897a0(0,1,0,FUN_1010cae68,puVar2);
  func_0x000107c61574(puVar2);
  return uVar3;
}



/* Entry: 1010c7d78; end: 1010c83c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c7d78(double param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar14 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar14 - extraout_x12;
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    puVar7 = (undefined8 *)0x3;
    func_0x0001007d6c6c(3,0xd000000000000014,0x800000010ef24ce0,param_5,&PTR_DAT_110381af8);
    FUN_1010cae74();
    puVar2 = &UNK_1106c7aa0;
    func_0x000107c613f8(&UNK_1106c7aa0,puVar7,0,0);
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined1 *)(puVar7 + 2) = 3;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar2);
    return;
  }
  uStack_a0 = param_2;
  func_0x0001000285a8(0x112d5b7b0,&UNK_10d922688);
  func_0x000107c613fc();
  puVar2 = (undefined *)0x0;
  func_0x00010095c380();
  if (param_4 == 0) {
    lVar4 = *(long *)(param_3 + _DAT_112d5b740);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar5 = param_3;
    func_0x000107c614f0(param_3);
    if (lVar4 == 0) {
      puVar7 = (undefined8 *)0x3;
      func_0x0001007d6c8c(3,0xd00000000000001a,0x800000010ef24d80,param_3,lVar5,&PTR_DAT_110381af8);
      FUN_1010cae74();
      puVar8 = &UNK_1106c7aa0;
      func_0x000107c613f8(&UNK_1106c7aa0,puVar7,0,0);
      puVar7[1] = 0;
      *puVar7 = 2;
      *(undefined1 *)(puVar7 + 2) = 3;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar8);
      func_0x000107c61170(param_3);
      goto LAB_1010c7f50;
    }
    func_0x0001007d6c8c(1,0xd00000000000002a,0x800000010ef24da0,param_3,lVar5,&PTR_DAT_110381af8);
    lVar5 = lVar4;
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (lVar5 == 0) {
      lVar1 = param_3;
      func_0x000107c614f0(param_3);
      func_0x0001007d6c8c(3,0xd000000000000025,0x800000010ef24dd0,param_3,lVar1,&PTR_DAT_110381af8);
      FUN_1010c83c8(puVar2);
      func_0x000107c615e8(lVar4);
      uVar9 = uStack_a0;
    }
    else {
      func_0x000107c5eea0(lVar13);
      lVar6 = lVar5;
      func_0x000107c5ca64(lVar5);
      func_0x000107c61180();
      func_0x000107c5ee94(puVar14);
      func_0x000107c61170(lVar6);
      func_0x000107c5ee68(puVar14);
      pcVar12 = *(code **)(lVar11 + 8);
      (*pcVar12)(puVar14,lVar1);
      (*pcVar12)(lVar13,lVar1);
      lStack_98 = 0;
      uStack_90 = 0xe000000000000000;
      func_0x000107c602fc(0x2b);
      func_0x000107c5fb78(0xd000000000000014,0x800000010ef24e00);
      lStack_a8 = lVar5;
      func_0x000107c5ca64(lVar5);
      func_0x000107c61180();
      func_0x000107c5ee94(lVar13);
      func_0x000107c61170(lVar5);
      FUN_1010caec0();
      func_0x000107c6057c(lVar1,lVar5);
      func_0x000107c5fb78();
      func_0x000107c6142c(lVar5);
      (*pcVar12)(lVar13,lVar1);
      func_0x000107c5fb78(0xd000000000000013,0x800000010ef24e20);
      func_0x000107c5fddc(param_1,&lStack_98,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar9 = uStack_90;
      lVar1 = lStack_98;
      lVar11 = param_3;
      func_0x000107c614f0(param_3);
      func_0x0001007d6c8c(1,lVar1,uVar9,param_3,lVar11,&PTR_DAT_110381af8);
      func_0x000107c6142c(uVar9);
      uVar9 = uStack_a0;
      if ((*(double *)(param_3 + _DAT_112d5b778) < 0.0) ||
         (param_1 <= *(double *)(param_3 + _DAT_112d5b778))) {
        lVar1 = param_3;
        func_0x000107c614f0(param_3);
        func_0x0001007d6c8c(1,0xd00000000000002f,0x800000010ef24e40,param_3,lVar1,&PTR_DAT_110381af8
                           );
        lVar1 = lStack_a8;
        lStack_98 = lStack_a8;
        func_0x000100b60084(&lStack_98);
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(lVar4);
      }
      else {
        lStack_98 = 0;
        uStack_90 = 0xe000000000000000;
        func_0x000107c602fc(0x25);
        func_0x000107c5fb78(0xd000000000000023,0x800000010ef24e70);
        func_0x000107c5fddc(param_1,&lStack_98,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        uVar10 = uStack_90;
        lVar1 = lStack_98;
        lVar11 = param_3;
        func_0x000107c614f0(param_3);
        func_0x0001007d6c8c(1,lVar1,uVar10,param_3,lVar11,&PTR_DAT_110381af8);
        func_0x000107c6142c(uVar10);
        FUN_1010c83c8(puVar2);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lStack_a8);
      }
    }
  }
  else {
    func_0x000107c61174();
    lVar1 = param_3;
    func_0x000107c614f0(param_3);
    func_0x0001007d6c8c(1,0xd000000000000036,0x800000010ef24ea0,param_3,lVar1,&PTR_DAT_110381af8);
    lStack_98 = param_4;
    func_0x000100b60084(&lStack_98);
    func_0x000107c61170(param_4);
    uVar9 = uStack_a0;
  }
  uVar10 = *(undefined8 *)(puVar2 + 0x10);
  puVar8 = &UNK_110381978;
  func_0x000107c613fc(&UNK_110381978,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,param_3);
  puVar3 = &UNK_110381c48;
  func_0x000107c613fc(&UNK_110381c48,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar8;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar9);
  func_0x00010075a04c(0,1,FUN_1010caeb4,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar10);
  puVar2 = puVar3;
LAB_1010c7f50:
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 1010c83c8; end: 1010c868b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c83c8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  ppuVar9 = &puStack_80;
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001007d6c8c(1,0xd000000000000021,0x800000010ef24fd0);
  lVar3 = *(long *)(unaff_x20 + _DAT_112d5b740);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    puVar10 = (undefined8 *)0x3;
    func_0x0001007d6c6c(3,0xd00000000000001a,0x800000010ef24d80,lVar2,&PTR_DAT_110381af8);
    FUN_1010cae74();
    puVar11 = &UNK_1106c7aa0;
    func_0x000107c613f8(&UNK_1106c7aa0,puVar10,0,0);
    puVar10[1] = 0;
    *puVar10 = 2;
    *(undefined1 *)(puVar10 + 2) = 3;
    func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar11);
    return;
  }
  lVar4 = lVar3;
  func_0x000107c4b88c();
  func_0x000107c61180();
  func_0x0001007d6c8c(1,0xd000000000000019,0x800000010ef25000);
  lVar7 = lVar2;
  func_0x000107c614e4(lVar2);
  func_0x000107c5fb18(&puStack_80,lVar7);
  uVar6 = 0;
  func_0x0001048b0ec8(0);
  func_0x000107c610f8();
  func_0x0001048b0b48(ppuVar5,lVar7,0x20,uVar6);
  lVar7 = *(long *)(unaff_x20 + _DAT_112d5b730);
  func_0x000107c4f7c0();
  func_0x000107c61180();
  if (lVar7 != 0) {
    puVar11 = &UNK_110381978;
    func_0x000107c613fc(&UNK_110381978,0x18,7);
    func_0x000107c61614(puVar11 + 0x10);
    puVar8 = &UNK_110381cc0;
    func_0x000107c613fc(&UNK_110381cc0,0x30,7);
    *(undefined **)(puVar8 + 0x10) = puVar11;
    *(undefined8 *)(puVar8 + 0x18) = param_1;
    *(long *)(puVar8 + 0x20) = lVar4;
    *(long *)(puVar8 + 0x28) = lVar2;
    pcStack_60 = FUN_1010caf44;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1010c8c0c;
    puStack_68 = &UNK_110381cd8;
    puStack_58 = puVar8;
    func_0x000107c60bc4(&puStack_80);
    puVar11 = puStack_58;
    func_0x000107c6157c(param_1);
    func_0x000107c61174(lVar4);
    func_0x000107c61574(puVar11);
    func_0x000107c503b0(0x4024000000000000,lVar3);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(ppuVar5);
    func_0x000107c61170(lVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c868c);
  (*pcVar1)();
}



/* Entry: 1010c868c; end: 1010c878b;  */

void FUN_1010c868c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  uVar4 = *param_1;
  cVar1 = *(char *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    puVar2 = (undefined8 *)0x3;
    func_0x0001007d6c6c(3,0xd000000000000014,0x800000010ef24ce0,param_4,&PTR_DAT_110381af8);
    FUN_1010cae74();
    puVar3 = &UNK_1106c7aa0;
    func_0x000107c613f8(&UNK_1106c7aa0,puVar2,0,0);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 3;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar3);
  }
  else {
    if (cVar1 == '\x01') {
      func_0x00010488ade0();
    }
    else {
      FUN_1010c878c(uVar4,param_3);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1010c878c; end: 1010c89d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c878c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001007d6c8c(1,0xd000000000000023,0x800000010ef24ee0);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d5b738);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x0001007d6c8c(1,0xd00000000000001f,0x800000010ef24f40);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d5b730);
    func_0x000107c4f7c0(uVar3);
    func_0x000107c61180();
    puVar7 = &UNK_110381978;
    func_0x000107c613fc(&UNK_110381978,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar4 = &UNK_110381c70;
    func_0x000107c613fc(&UNK_110381c70,0x30,7);
    *(undefined **)(puVar4 + 0x10) = puVar7;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    *(long *)(puVar4 + 0x28) = lVar1;
    pcStack_60 = FUN_1010caf04;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_10103696c;
    puStack_68 = &UNK_110381c88;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar7 = puStack_58;
    func_0x000107c6157c(param_2);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar7);
    func_0x000107c4302c(lVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    return;
  }
  puVar6 = (undefined8 *)0x3;
  func_0x0001007d6c8c(3,0xd000000000000021,0x800000010ef24f10);
  FUN_1010cae74();
  puVar7 = &UNK_1106c7aa0;
  func_0x000107c613f8(&UNK_1106c7aa0,puVar6,0,0);
  puVar6[1] = 0;
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 2) = 3;
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar7);
  return;
}



/* Entry: 1010c89d8; end: 1010c8c0b;  */

void FUN_1010c89d8(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    puVar3 = (undefined8 *)0x3;
    func_0x0001007d6c6c(3,0xd000000000000014,0x800000010ef24ce0,param_5,&PTR_DAT_110381af8);
    FUN_1010cae74();
    puVar1 = &UNK_1106c7aa0;
    func_0x000107c613f8(&UNK_1106c7aa0,puVar3,0,0);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 3;
    func_0x00010488ade0();
LAB_1010c8afc:
    func_0x000107c614ac(puVar1);
  }
  else {
    if (param_1 == 0) {
      if (param_4 == 0) {
        lVar2 = param_2;
        func_0x000107c614f0();
        puVar3 = (undefined8 *)0x3;
        func_0x0001007d6c8c(3,0xd000000000000044,0x800000010ef25020,param_2,lVar2,&PTR_DAT_110381af8
                           );
        FUN_1010cae74();
        puVar1 = &UNK_1106c7aa0;
        func_0x000107c613f8(&UNK_1106c7aa0,puVar3,0,0);
        puVar3[1] = 0;
        *puVar3 = 4;
        *(undefined1 *)(puVar3 + 2) = 3;
        func_0x00010488ade0();
        func_0x000107c61170(param_2);
        goto LAB_1010c8afc;
      }
      func_0x000107c61174();
      lVar2 = param_2;
      func_0x000107c614f0(param_2);
      func_0x0001007d6c8c(3,0xd000000000000037,0x800000010ef25070,param_2,lVar2,&PTR_DAT_110381af8);
      lStack_60 = param_4;
      func_0x000100b60084(&lStack_60);
      func_0x000107c61170(param_4);
    }
    else {
      func_0x000107c61174();
      lVar2 = param_2;
      func_0x000107c614f0(param_2);
      func_0x0001007d6c8c(1,0xd000000000000023,0x800000010ef250b0,param_2,lVar2,&PTR_DAT_110381af8);
      lStack_60 = param_1;
      func_0x000100b60084(&lStack_60);
      func_0x000107c61170(param_1);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1010c8c0c; end: 1010c8c5b;  */

void FUN_1010c8c0c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1010c8c5c; end: 1010c8f2b;  */

void FUN_1010c8c5c(long param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 == 0) {
    puVar1 = (undefined8 *)0x3;
    func_0x0001007d6c6c(3,0xd000000000000014,0x800000010ef24ce0,param_7,&PTR_DAT_110381af8);
    FUN_1010cae74();
    puVar2 = &UNK_1106c7aa0;
    func_0x000107c613f8(&UNK_1106c7aa0,puVar1,0,0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 3;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar2);
  }
  else if (param_1 == 0) {
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x3d);
    func_0x000107c5fb78(0xd00000000000003b,0x800000010ef24f60);
    if (param_2 >> 0x3e == 0) {
      uVar3 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = param_2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_2) {
        uVar3 = param_2;
      }
      func_0x000107c60480();
    }
    puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    uStack_80 = uVar3;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar2);
    uVar3 = uStack_70;
    uVar5 = uStack_78;
    lVar4 = param_4;
    func_0x000107c614f0(param_4);
    func_0x0001007d6c8c(1,uVar5,uVar3,param_4,lVar4,&PTR_DAT_110381af8);
    func_0x000107c6142c(uVar3);
    uStack_78 = param_6;
    uStack_70 = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c61174(param_6);
    func_0x000100b60084(&uStack_78);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_4);
  }
  else {
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c614b0(param_1);
    func_0x000107c602fc(0x24);
    func_0x000107c6142c(uStack_70);
    uStack_78 = 0xd000000000000022;
    uStack_70 = 0x800000010ef24fa0;
    func_0x000107c614cc(param_1,auStack_88,auStack_a0);
    uVar5 = uStack_90;
    func_0x000107c60640(uStack_98,uStack_90);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar5);
    uVar3 = uStack_70;
    uVar5 = uStack_78;
    lVar4 = param_4;
    func_0x000107c614f0(param_4);
    puVar1 = (undefined8 *)0x3;
    func_0x0001007d6c8c(3,uVar5,uVar3,param_4,lVar4,&PTR_DAT_110381af8);
    FUN_1010cae74();
    puVar2 = &UNK_1106c7aa0;
    func_0x000107c613f8(&UNK_1106c7aa0,puVar1,0,0);
    *puVar1 = uVar5;
    puVar1[1] = uVar3;
    *(undefined1 *)(puVar1 + 2) = 0;
    func_0x00010488ade0();
    func_0x000107c61170(param_4);
    func_0x000107c614ac(puVar2);
    func_0x000107c614ac(param_1);
  }
  return;
}



/* Entry: 1010c8f2c; end: 1010c90cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c8f2c(char *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  if (cVar1 != '\0') {
    lVar4 = param_2;
    (**(code **)(param_2 + _DAT_112d5b710))();
    if (lVar4 != 0) {
LAB_1010c8f90:
      func_0x000107c61170();
      lVar4 = param_2;
      func_0x000107c614f0(param_2);
      uVar2 = 1;
      func_0x0001007d6c8c(1,0xd000000000000010,0x800000010ef25120,param_2,lVar4,&PTR_DAT_110381af8);
      FUN_1010c7aac();
      puVar3 = &UNK_110381978;
      func_0x000107c613fc(&UNK_110381978,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_2);
      func_0x00010075a04c(0,1,0x1010caf50,puVar3);
      func_0x000107c61170(param_2);
      func_0x000107c61574(uVar2);
      func_0x000107c61574(puVar3);
      return;
    }
    lVar4 = *(long *)(param_2 + _DAT_112d5b740);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c4b88c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar5 != 0) goto LAB_1010c8f90;
    }
    lVar4 = param_2;
    func_0x000107c614f0(param_2);
    func_0x0001007d6c8c(1,0xd000000000000034,0x800000010ef250e0,param_2,lVar4,&PTR_DAT_110381af8);
  }
  func_0x000107c61170();
  return;
}



/* Entry: 1010c90cc; end: 1010c92e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c90cc(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  uVar5 = *param_1;
  uVar1 = param_1[1];
  cVar2 = *(char *)(param_1 + 2);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (cVar2 == '\x01') {
      uStack_90 = 0;
      uStack_88 = 0xe000000000000000;
      func_0x000107c602fc(0x1d);
      func_0x000107c6142c(uStack_88);
      uStack_90 = 0xd00000000000001b;
      uStack_88 = 0x800000010ef25140;
      func_0x000107c614cc(uVar5,auStack_60,auStack_78);
      uVar5 = uStack_68;
      func_0x000107c60640(uStack_70,uStack_68);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar5);
      uVar3 = uStack_88;
      uVar5 = uStack_90;
      lVar4 = param_2;
      func_0x000107c614f0(param_2);
      func_0x0001007d6c8c(3,uVar5,uVar3,param_2,lVar4,&PTR_DAT_110381af8);
      func_0x000107c6142c(uVar3);
      lStack_80 = param_2;
      func_0x000100087bd4(0x1010cb028,&uStack_90,PTR___sytN_11034f1b0 + 8);
    }
    else {
      uStack_90 = 0;
      uStack_88 = 0xe000000000000000;
      func_0x000107c602fc(0x26);
      func_0x000107c6142c(uStack_88);
      uStack_90 = 0xd00000000000001c;
      uStack_88 = 0x800000010ef25160;
      if (uVar1 >> 0x3e != 0) {
        func_0x000107c60480();
      }
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      func_0x000107c5fb78(0x736e6f6974706f20,0xe800000000000000);
      uVar3 = uStack_88;
      uVar5 = uStack_90;
      lVar4 = param_2;
      func_0x000107c614f0(param_2);
      func_0x0001007d6c8c(1,uVar5,uVar3,param_2,lVar4,&PTR_DAT_110381af8);
      func_0x000107c6142c(uVar3);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1010c92e4; end: 1010c9343; -[_TtC23LensVenuesProvidingImpl18LensVenuesProvider init] */

void FUN_1010c92e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensVenuesProvidingImpl.LensVenuesProvider",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010c9310);
  (*pcVar1)();
}



/* Entry: 1010c9344; end: 1010c941f; -[_TtC23LensVenuesProvidingImpl18LensVenuesProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001010c9380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010c93c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010c93f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010c93c8) */
/* WARNING: Removing unreachable block (ram,0x0001010c9384) */
/* WARNING: Removing unreachable block (ram,0x0001010c93f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c9344(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5b738));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5b740));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5b748));
  return;
}



/* Entry: 1010c9420; end: 1010c957f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c9420(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_80 [16];
  undefined8 uStack_58;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  uVar2 = 1;
  func_0x0001007d6c8c(1,0xd000000000000019,0x800000010ef249c0);
  (**(code **)(unaff_x20 + _DAT_112d5b710))();
  uVar3 = 0x112d5b720;
  func_0x0001000285a8(0x112d5b720,&UNK_10d922620);
  func_0x000100087bd4(&uStack_58,FUN_1010c9580,auStack_80,uVar3);
  func_0x000107c61170(uVar2);
  puVar4 = &UNK_110381978;
  func_0x000107c613fc(&UNK_110381978,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_1103819a0;
  func_0x000107c613fc(&UNK_1103819a0,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(long *)(puVar5 + 0x28) = lVar1;
  func_0x000107c6157c(param_2);
  func_0x00010075a04c(0,1,FUN_1010c9ad8,puVar5);
  func_0x000107c61574(uStack_58);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 1010c9580; end: 1010c959b;  */

void FUN_1010c9580(void)

{
  long unaff_x20;
  
  FUN_1010c7b4c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1010c959c; end: 1010c9ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c959c(undefined8 *param_1,long param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_200 [72];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_120;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  uVar10 = *param_1;
  uVar6 = param_1[1];
  cVar1 = *(char *)(param_1 + 2);
  func_0x000107c61428(param_2 + 0x10,auStack_d8,0,0);
  lVar3 = param_2 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x0001007d6c8c(1,0xd00000000000001f,0x800000010ef24cc0,lVar3,param_5,&PTR_DAT_110381af8);
  func_0x000107c61170(lVar3);
  func_0x000107c61428(param_2 + 0x10,auStack_f0,0,0);
  uVar4 = param_2 + 0x10;
  func_0x000107c61618();
  if (uVar4 == 0) {
    func_0x0001007d6c6c(3,0xd000000000000014,0x800000010ef24ce0,param_5,&PTR_DAT_110381af8);
    uStack_c0 = 0;
    uStack_b8 = 0;
    puStack_b0 = (undefined8 *)CONCAT71(puStack_b0._1_7_,3);
    uStack_78 = 1;
    (*param_3)(&uStack_c0);
  }
  else {
    if (cVar1 == '\x01') {
      uStack_c0 = 0;
      uStack_b8 = 0xe000000000000000;
      func_0x000107c602fc(0x22);
      func_0x000107c6142c(uStack_b8);
      uStack_c0 = 0xd000000000000020;
      uStack_b8 = 0x800000010ef24d00;
      func_0x000107c614cc(uVar10,auStack_f8,auStack_110);
      uVar10 = uStack_100;
      func_0x000107c60640(uStack_108,uStack_100);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar10);
      uVar9 = uStack_b8;
      uVar10 = uStack_c0;
      uVar6 = uVar4;
      func_0x000107c614f0(uVar4);
      func_0x0001007d6c8c(3,uVar10,uVar9,uVar4,uVar6,&PTR_DAT_110381af8);
      puStack_b0 = (undefined8 *)uVar4;
      func_0x000100087bd4(0x1010cb014,&uStack_c0,PTR___sytN_11034f1b0 + 8);
      puStack_b0 = (undefined8 *)((ulong)puStack_b0 & 0xffffffffffffff00);
      uStack_78 = 1;
      uStack_c0 = uVar10;
      uStack_b8 = uVar9;
      (*param_3)(&uStack_c0);
      func_0x000107c6142c(uVar9);
    }
    else {
      if (uVar6 >> 0x3e == 0) {
        uVar13 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar13 = uVar6;
        if (-1 < (long)uVar6) {
          uVar13 = uVar6 & 0xffffffffffffff8;
        }
        func_0x000107c60480();
      }
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar13 != 0) {
        puStack_120 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_1010c7594(0,uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010c9ad8);
          (*pcVar2)();
        }
        uVar14 = 0;
        do {
          puVar12 = puStack_120;
          if ((uVar6 & 0xc000000000000001) == 0) {
            uVar5 = *(ulong *)(uVar6 + uVar14 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar14;
            FUN_10103198c(uVar14,uVar6);
          }
          uStack_180 = 0;
          uStack_178 = 0xe000000000000000;
          uStack_1b8 = 0;
          uStack_1b0 = 0xe000000000000000;
          uStack_1a8 = 0;
          uStack_1a0 = 0xe000000000000000;
          uStack_198 = 0;
          uStack_190 = 0;
          uStack_188 = 0xe000000000000000;
          puStack_b0 = &uStack_1b8;
          uStack_a8 = uVar5;
          func_0x0001044052b4(0x1010caffc,&uStack_c0,FUN_1010cb738,0,0x1010cb73c,0);
          func_0x000107c61170(uVar5);
          uStack_148 = uStack_190;
          uStack_150 = uStack_198;
          uStack_138 = uStack_180;
          uStack_140 = uStack_188;
          uStack_130 = uStack_178;
          uStack_168 = uStack_1b0;
          uStack_170 = uStack_1b8;
          uStack_158 = uStack_1a0;
          uStack_160 = uStack_1a8;
          uStack_98 = uStack_190;
          uStack_a0 = uStack_198;
          uStack_88 = uStack_180;
          uStack_90 = uStack_188;
          uStack_80 = uStack_178;
          uStack_b8 = uStack_1b0;
          uStack_c0 = uStack_1b8;
          uStack_a8 = uStack_1a0;
          puStack_b0 = (undefined8 *)uStack_1a8;
          FUN_1010c7524(&uStack_170,auStack_200);
          func_0x0001010c7560(&uStack_c0);
          uVar5 = *(ulong *)(puVar12 + 0x10);
          puStack_120 = puVar12;
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar5) {
            FUN_1010c7594(1 < *(ulong *)(puVar12 + 0x18),uVar5 + 1,1);
          }
          uVar14 = uVar14 + 1;
          *(ulong *)(puStack_120 + 0x10) = uVar5 + 1;
          *(undefined8 *)(puStack_120 + uVar5 * 0x48 + 0x28) = uStack_168;
          *(undefined8 *)(puStack_120 + uVar5 * 0x48 + 0x20) = uStack_170;
          *(undefined8 *)(puStack_120 + uVar5 * 0x48 + 0x60) = uStack_130;
          *(undefined8 *)(puStack_120 + uVar5 * 0x48 + 0x48) = uStack_148;
          *(undefined8 *)(puStack_120 + uVar5 * 0x48 + 0x40) = uStack_150;
          *(undefined8 *)(puStack_120 + uVar5 * 0x48 + 0x58) = uStack_138;
          *(undefined8 *)(puStack_120 + uVar5 * 0x48 + 0x50) = uStack_140;
          *(undefined8 *)(puStack_120 + uVar5 * 0x48 + 0x38) = uStack_158;
          *(ulong *)(puStack_120 + uVar5 * 0x48 + 0x30) = uStack_160;
          puVar12 = puStack_120;
        } while (uVar13 != uVar14);
      }
      uStack_c0 = 0;
      uStack_b8 = 0xe000000000000000;
      func_0x000107c602fc(0x26);
      func_0x000107c6142c(uStack_b8);
      uStack_c0 = 0xd00000000000001d;
      uStack_b8 = 0x800000010ef24d30;
      uStack_170 = *(undefined8 *)(puVar12 + 0x10);
      puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar7);
      func_0x000107c5fb78(0x7365756e657620,0xe700000000000000);
      uVar11 = uStack_b8;
      uVar9 = uStack_c0;
      uVar6 = uVar4;
      func_0x000107c614f0(uVar4);
      func_0x0001007d6c8c(1,uVar9,uVar11,uVar4,uVar6,&PTR_DAT_110381af8);
      func_0x000107c6142c(uVar11);
      uVar11 = *(undefined8 *)(uVar4 + _DAT_112d5b748);
      puVar7 = &UNK_110381bd0;
      func_0x000107c613fc(&UNK_110381bd0,0x20,7);
      *(code **)(puVar7 + 0x10) = param_3;
      *(undefined8 *)(puVar7 + 0x18) = param_4;
      puVar8 = &UNK_110381bf8;
      func_0x000107c613fc(&UNK_110381bf8,0x20,7);
      *(code **)(puVar8 + 0x10) = param_3;
      *(undefined8 *)(puVar8 + 0x18) = param_4;
      func_0x000107c61580(param_4,2);
      func_0x000107c6157c(uVar11);
      uVar9 = uVar10;
      func_0x000107c61174(uVar10);
      FUN_1010c6444(uVar10,puVar12,FUN_1010cadac,puVar7,0x1010cadf4,puVar8);
      func_0x000107c6142c(puVar12);
      func_0x000107c61574(uVar11);
      func_0x000107c61170(uVar9);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar8);
    }
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 1010c9ad8; end: 1010c9ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c9ad8(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_200 [72];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_120;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar4 = *(code **)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *param_1;
  uVar8 = param_1[1];
  cVar2 = *(char *)(param_1 + 2);
  func_0x000107c61428(lVar1 + 0x10,auStack_d8,0,0);
  lVar5 = lVar1 + 0x10;
  func_0x000107c61618(lVar5);
  func_0x0001007d6c8c(1,0xd00000000000001f,0x800000010ef24cc0,lVar5,uVar13,&PTR_DAT_110381af8);
  func_0x000107c61170(lVar5);
  func_0x000107c61428(lVar1 + 0x10,auStack_f0,0,0);
  uVar6 = lVar1 + 0x10;
  func_0x000107c61618();
  if (uVar6 == 0) {
    func_0x0001007d6c6c(3,0xd000000000000014,0x800000010ef24ce0,uVar13,&PTR_DAT_110381af8);
    uStack_c0 = 0;
    uStack_b8 = 0;
    puStack_b0 = (undefined8 *)CONCAT71(puStack_b0._1_7_,3);
    uStack_78 = 1;
    (*pcVar4)(&uStack_c0);
  }
  else {
    if (cVar2 == '\x01') {
      uStack_c0 = 0;
      uStack_b8 = 0xe000000000000000;
      func_0x000107c602fc(0x22);
      func_0x000107c6142c(uStack_b8);
      uStack_c0 = 0xd000000000000020;
      uStack_b8 = 0x800000010ef24d00;
      func_0x000107c614cc(uVar12,auStack_f8,auStack_110);
      uVar12 = uStack_100;
      func_0x000107c60640(uStack_108,uStack_100);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar12);
      uVar11 = uStack_b8;
      uVar12 = uStack_c0;
      uVar8 = uVar6;
      func_0x000107c614f0(uVar6);
      func_0x0001007d6c8c(3,uVar12,uVar11,uVar6,uVar8,&PTR_DAT_110381af8);
      puStack_b0 = (undefined8 *)uVar6;
      func_0x000100087bd4(0x1010cb014,&uStack_c0,PTR___sytN_11034f1b0 + 8);
      puStack_b0 = (undefined8 *)((ulong)puStack_b0 & 0xffffffffffffff00);
      uStack_78 = 1;
      uStack_c0 = uVar12;
      uStack_b8 = uVar11;
      (*pcVar4)(&uStack_c0);
      func_0x000107c6142c(uVar11);
    }
    else {
      if (uVar8 >> 0x3e == 0) {
        uVar15 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar15 = uVar8;
        if (-1 < (long)uVar8) {
          uVar15 = uVar8 & 0xffffffffffffff8;
        }
        func_0x000107c60480();
      }
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar15 != 0) {
        puStack_120 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_1010c7594(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1010c9ad8);
          (*pcVar4)();
        }
        uVar16 = 0;
        do {
          puVar14 = puStack_120;
          if ((uVar8 & 0xc000000000000001) == 0) {
            uVar7 = *(ulong *)(uVar8 + uVar16 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar7 = uVar16;
            FUN_10103198c(uVar16,uVar8);
          }
          uStack_180 = 0;
          uStack_178 = 0xe000000000000000;
          uStack_1b8 = 0;
          uStack_1b0 = 0xe000000000000000;
          uStack_1a8 = 0;
          uStack_1a0 = 0xe000000000000000;
          uStack_198 = 0;
          uStack_190 = 0;
          uStack_188 = 0xe000000000000000;
          puStack_b0 = &uStack_1b8;
          uStack_a8 = uVar7;
          func_0x0001044052b4(0x1010caffc,&uStack_c0,FUN_1010cb738,0,0x1010cb73c,0);
          func_0x000107c61170(uVar7);
          uStack_148 = uStack_190;
          uStack_150 = uStack_198;
          uStack_138 = uStack_180;
          uStack_140 = uStack_188;
          uStack_130 = uStack_178;
          uStack_168 = uStack_1b0;
          uStack_170 = uStack_1b8;
          uStack_158 = uStack_1a0;
          uStack_160 = uStack_1a8;
          uStack_98 = uStack_190;
          uStack_a0 = uStack_198;
          uStack_88 = uStack_180;
          uStack_90 = uStack_188;
          uStack_80 = uStack_178;
          uStack_b8 = uStack_1b0;
          uStack_c0 = uStack_1b8;
          uStack_a8 = uStack_1a0;
          puStack_b0 = (undefined8 *)uStack_1a8;
          FUN_1010c7524(&uStack_170,auStack_200);
          func_0x0001010c7560(&uStack_c0);
          uVar7 = *(ulong *)(puVar14 + 0x10);
          puStack_120 = puVar14;
          if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar7) {
            FUN_1010c7594(1 < *(ulong *)(puVar14 + 0x18),uVar7 + 1,1);
          }
          uVar16 = uVar16 + 1;
          *(ulong *)(puStack_120 + 0x10) = uVar7 + 1;
          *(undefined8 *)(puStack_120 + uVar7 * 0x48 + 0x28) = uStack_168;
          *(undefined8 *)(puStack_120 + uVar7 * 0x48 + 0x20) = uStack_170;
          *(undefined8 *)(puStack_120 + uVar7 * 0x48 + 0x60) = uStack_130;
          *(undefined8 *)(puStack_120 + uVar7 * 0x48 + 0x48) = uStack_148;
          *(undefined8 *)(puStack_120 + uVar7 * 0x48 + 0x40) = uStack_150;
          *(undefined8 *)(puStack_120 + uVar7 * 0x48 + 0x58) = uStack_138;
          *(undefined8 *)(puStack_120 + uVar7 * 0x48 + 0x50) = uStack_140;
          *(undefined8 *)(puStack_120 + uVar7 * 0x48 + 0x38) = uStack_158;
          *(ulong *)(puStack_120 + uVar7 * 0x48 + 0x30) = uStack_160;
          puVar14 = puStack_120;
        } while (uVar15 != uVar16);
      }
      uStack_c0 = 0;
      uStack_b8 = 0xe000000000000000;
      func_0x000107c602fc(0x26);
      func_0x000107c6142c(uStack_b8);
      uStack_c0 = 0xd00000000000001d;
      uStack_b8 = 0x800000010ef24d30;
      uStack_170 = *(undefined8 *)(puVar14 + 0x10);
      puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar9);
      func_0x000107c5fb78(0x7365756e657620,0xe700000000000000);
      uVar3 = uStack_b8;
      uVar13 = uStack_c0;
      uVar8 = uVar6;
      func_0x000107c614f0(uVar6);
      func_0x0001007d6c8c(1,uVar13,uVar3,uVar6,uVar8,&PTR_DAT_110381af8);
      func_0x000107c6142c(uVar3);
      uVar13 = *(undefined8 *)(uVar6 + _DAT_112d5b748);
      puVar9 = &UNK_110381bd0;
      func_0x000107c613fc(&UNK_110381bd0,0x20,7);
      *(code **)(puVar9 + 0x10) = pcVar4;
      *(undefined8 *)(puVar9 + 0x18) = uVar11;
      puVar10 = &UNK_110381bf8;
      func_0x000107c613fc(&UNK_110381bf8,0x20,7);
      *(code **)(puVar10 + 0x10) = pcVar4;
      *(undefined8 *)(puVar10 + 0x18) = uVar11;
      func_0x000107c61580(uVar11,2);
      func_0x000107c6157c(uVar13);
      uVar11 = uVar12;
      func_0x000107c61174(uVar12);
      FUN_1010c6444(uVar12,puVar14,FUN_1010cadac,puVar9,0x1010cadf4,puVar10);
      func_0x000107c6142c(puVar14);
      func_0x000107c61574(uVar13);
      func_0x000107c61170(uVar11);
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar10);
    }
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1010c9ae4; end: 1010c9c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c9ae4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_80 [16];
  undefined8 uStack_58;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  uVar2 = 1;
  func_0x0001007d6c8c(1,0xd000000000000019,0x800000010ef249e0);
  (**(code **)(unaff_x20 + _DAT_112d5b710))();
  uVar3 = 0x112d5b720;
  func_0x0001000285a8(0x112d5b720,&UNK_10d922620);
  func_0x000100087bd4(&uStack_58,FUN_1010cafac,auStack_80,uVar3);
  func_0x000107c61170(uVar2);
  puVar4 = &UNK_110381978;
  func_0x000107c613fc(&UNK_110381978,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_1103819c8;
  func_0x000107c613fc(&UNK_1103819c8,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(long *)(puVar5 + 0x28) = lVar1;
  func_0x000107c6157c(param_2);
  func_0x00010075a04c(0,1,FUN_1010ca0c8,puVar5);
  func_0x000107c61574(uStack_58);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 1010c9c44; end: 1010ca0c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c9c44(long param_1,undefined8 param_2,undefined8 *param_3,long param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  ulong uVar1;
  char cVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_1f0 [72];
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  uVar7 = *param_3;
  uVar1 = param_3[1];
  cVar2 = *(char *)(param_3 + 2);
  func_0x000107c61428(param_4 + 0x10,auStack_80,0,0);
  lVar5 = param_4 + 0x10;
  func_0x000107c61618(lVar5);
  func_0x0001007d6c8c(1,0xd00000000000001c,0x800000010ef24c00,lVar5,param_7,&PTR_DAT_110381af8);
  func_0x000107c61170(lVar5);
  func_0x000107c61428(param_4 + 0x10,auStack_98,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 == 0) {
    func_0x0001007d6c6c(3,0xd00000000000002f,0x800000010ef24c20,param_7,&PTR_DAT_110381af8);
    (*param_5)(0,0,3,1);
  }
  else {
    if (cVar2 == '\x01') {
      uStack_110 = 0;
      uStack_108 = 0xe000000000000000;
      func_0x000107c602fc(0x24);
      func_0x000107c6142c(uStack_108);
      uStack_110 = 0xd000000000000022;
      uStack_108 = 0x800000010ef24c50;
      func_0x000107c614cc(uVar7,auStack_a0,auStack_b8);
      uVar7 = uStack_a8;
      func_0x000107c60640(uStack_b0,uStack_a8);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      uVar7 = uStack_108;
      uVar1 = uStack_110;
      lVar5 = param_4;
      func_0x000107c614f0(param_4);
      func_0x0001007d6c8c(3,uVar1,uVar7,param_4,lVar5,&PTR_DAT_110381af8);
      puStack_100 = (ulong *)param_4;
      func_0x000100087bd4(FUN_1010cb000,&uStack_110,PTR___sytN_11034f1b0 + 8);
      (*param_5)(uVar1,uVar7,0,1);
      func_0x000107c6142c(uVar7);
    }
    else {
      uStack_110 = 0;
      uStack_108 = 0xe000000000000000;
      func_0x000107c602fc(0x3a);
      func_0x000107c5fb78(0xd000000000000038,0x800000010ef24c80);
      if (uVar1 >> 0x3e == 0) {
        uVar9 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar9 = uVar1;
        if (-1 < (long)uVar1) {
          uVar9 = uVar1 & 0xffffffffffffff8;
        }
        func_0x000107c60480();
      }
      puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      uStack_160 = uVar9;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar8);
      uVar3 = uStack_108;
      uVar10 = uStack_110;
      lVar5 = param_4;
      func_0x000107c614f0(param_4);
      func_0x0001007d6c8c(1,uVar10,uVar3,param_4,lVar5,&PTR_DAT_110381af8);
      func_0x000107c6142c(uVar3);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar9 != 0) {
        puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_1010c7594(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1010ca0c8);
          (*pcVar4)();
        }
        uVar10 = 0;
        do {
          puVar8 = puStack_c8;
          if ((uVar1 & 0xc000000000000001) == 0) {
            uVar6 = *(ulong *)(uVar1 + uVar10 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar6 = uVar10;
            FUN_10103198c(uVar10,uVar1);
          }
          uStack_170 = 0;
          uStack_168 = 0xe000000000000000;
          uStack_1a8 = 0;
          uStack_1a0 = 0xe000000000000000;
          lStack_198 = 0;
          uStack_190 = 0xe000000000000000;
          uStack_188 = 0;
          uStack_180 = 0;
          uStack_178 = 0xe000000000000000;
          puStack_100 = &uStack_1a8;
          uStack_f8 = uVar6;
          func_0x0001044052b4(0x1010cad80,&uStack_110,FUN_1010cb738,0,0x1010cb73c,0,param_9,param_10
                              ,param_6);
          func_0x000107c61170(uVar6);
          uStack_138 = uStack_180;
          uStack_140 = uStack_188;
          uStack_128 = uStack_170;
          uStack_130 = uStack_178;
          uStack_120 = uStack_168;
          uStack_158 = uStack_1a0;
          uStack_160 = uStack_1a8;
          uStack_148 = uStack_190;
          lStack_150 = lStack_198;
          uStack_e8 = uStack_180;
          uStack_f0 = uStack_188;
          uStack_d8 = uStack_170;
          uStack_e0 = uStack_178;
          uStack_d0 = uStack_168;
          uStack_108 = uStack_1a0;
          uStack_110 = uStack_1a8;
          uStack_f8 = uStack_190;
          puStack_100 = (ulong *)lStack_198;
          FUN_1010c7524(&uStack_160,auStack_1f0);
          func_0x0001010c7560(&uStack_110);
          uVar6 = *(ulong *)(puVar8 + 0x10);
          puStack_c8 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar6) {
            FUN_1010c7594(1 < *(ulong *)(puVar8 + 0x18),uVar6 + 1,1);
          }
          uVar10 = uVar10 + 1;
          *(ulong *)(puStack_c8 + 0x10) = uVar6 + 1;
          *(undefined8 *)(puStack_c8 + uVar6 * 0x48 + 0x28) = uStack_158;
          *(ulong *)(puStack_c8 + uVar6 * 0x48 + 0x20) = uStack_160;
          *(undefined8 *)(puStack_c8 + uVar6 * 0x48 + 0x60) = uStack_120;
          *(undefined8 *)(puStack_c8 + uVar6 * 0x48 + 0x48) = uStack_138;
          *(undefined8 *)(puStack_c8 + uVar6 * 0x48 + 0x40) = uStack_140;
          *(undefined8 *)(puStack_c8 + uVar6 * 0x48 + 0x58) = uStack_128;
          *(undefined8 *)(puStack_c8 + uVar6 * 0x48 + 0x50) = uStack_130;
          *(undefined8 *)(puStack_c8 + uVar6 * 0x48 + 0x38) = uStack_148;
          *(long *)(puStack_c8 + uVar6 * 0x48 + 0x30) = lStack_150;
          puVar8 = puStack_c8;
          param_1 = lStack_150;
          param_2 = uStack_140;
        } while (uVar9 != uVar10);
      }
      func_0x000107c4077c(uVar7);
      (*param_5)(param_1,param_2,puVar8,0);
      func_0x000107c6142c(puVar8);
    }
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 1010ca0c8; end: 1010ca0d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ca0c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_1f0 [72];
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  pcVar4 = *(code **)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *param_3;
  uVar1 = param_3[1];
  cVar3 = *(char *)(param_3 + 2);
  func_0x000107c61428(lVar6 + 0x10,auStack_80,0,0);
  lVar5 = lVar6 + 0x10;
  func_0x000107c61618(lVar5);
  func_0x0001007d6c8c(1,0xd00000000000001c,0x800000010ef24c00,lVar5,uVar2,&PTR_DAT_110381af8);
  func_0x000107c61170(lVar5);
  func_0x000107c61428(lVar6 + 0x10,auStack_98,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    func_0x0001007d6c6c(3,0xd00000000000002f,0x800000010ef24c20,uVar2,&PTR_DAT_110381af8);
    (*pcVar4)(0,0,3,1);
  }
  else {
    if (cVar3 == '\x01') {
      uStack_110 = 0;
      uStack_108 = 0xe000000000000000;
      func_0x000107c602fc(0x24);
      func_0x000107c6142c(uStack_108);
      uStack_110 = 0xd000000000000022;
      uStack_108 = 0x800000010ef24c50;
      func_0x000107c614cc(uVar8,auStack_a0,auStack_b8);
      uVar8 = uStack_a8;
      func_0x000107c60640(uStack_b0,uStack_a8);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar8);
      uVar8 = uStack_108;
      uVar1 = uStack_110;
      lVar5 = lVar6;
      func_0x000107c614f0(lVar6);
      func_0x0001007d6c8c(3,uVar1,uVar8,lVar6,lVar5,&PTR_DAT_110381af8);
      puStack_100 = (ulong *)lVar6;
      func_0x000100087bd4(FUN_1010cb000,&uStack_110,PTR___sytN_11034f1b0 + 8);
      (*pcVar4)(uVar1,uVar8,0,1);
      func_0x000107c6142c(uVar8);
    }
    else {
      uStack_110 = 0;
      uStack_108 = 0xe000000000000000;
      func_0x000107c602fc(0x3a);
      func_0x000107c5fb78(0xd000000000000038,0x800000010ef24c80);
      if (uVar1 >> 0x3e == 0) {
        uVar10 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar10 = uVar1;
        if (-1 < (long)uVar1) {
          uVar10 = uVar1 & 0xffffffffffffff8;
        }
        func_0x000107c60480();
      }
      puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      uStack_160 = uVar10;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar9);
      uVar2 = uStack_108;
      uVar11 = uStack_110;
      lVar5 = lVar6;
      func_0x000107c614f0(lVar6);
      func_0x0001007d6c8c(1,uVar11,uVar2,lVar6,lVar5,&PTR_DAT_110381af8);
      func_0x000107c6142c(uVar2);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar10 != 0) {
        puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_1010c7594(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1010ca0c8);
          (*pcVar4)();
        }
        uVar11 = 0;
        do {
          puVar9 = puStack_c8;
          if ((uVar1 & 0xc000000000000001) == 0) {
            uVar7 = *(ulong *)(uVar1 + uVar11 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar7 = uVar11;
            FUN_10103198c(uVar11,uVar1);
          }
          uStack_170 = 0;
          uStack_168 = 0xe000000000000000;
          uStack_1a8 = 0;
          uStack_1a0 = 0xe000000000000000;
          lStack_198 = 0;
          uStack_190 = 0xe000000000000000;
          uStack_188 = 0;
          uStack_180 = 0;
          uStack_178 = 0xe000000000000000;
          puStack_100 = &uStack_1a8;
          uStack_f8 = uVar7;
          func_0x0001044052b4(0x1010cad80,&uStack_110,FUN_1010cb738,0,0x1010cb73c,0,in_x6,in_x7,
                              uVar12);
          func_0x000107c61170(uVar7);
          uStack_138 = uStack_180;
          uStack_140 = uStack_188;
          uStack_128 = uStack_170;
          uStack_130 = uStack_178;
          uStack_120 = uStack_168;
          uStack_158 = uStack_1a0;
          uStack_160 = uStack_1a8;
          uStack_148 = uStack_190;
          lStack_150 = lStack_198;
          uStack_e8 = uStack_180;
          uStack_f0 = uStack_188;
          uStack_d8 = uStack_170;
          uStack_e0 = uStack_178;
          uStack_d0 = uStack_168;
          uStack_108 = uStack_1a0;
          uStack_110 = uStack_1a8;
          uStack_f8 = uStack_190;
          puStack_100 = (ulong *)lStack_198;
          FUN_1010c7524(&uStack_160,auStack_1f0);
          func_0x0001010c7560(&uStack_110);
          uVar7 = *(ulong *)(puVar9 + 0x10);
          puStack_c8 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
            FUN_1010c7594(1 < *(ulong *)(puVar9 + 0x18),uVar7 + 1,1);
          }
          uVar11 = uVar11 + 1;
          *(ulong *)(puStack_c8 + 0x10) = uVar7 + 1;
          *(undefined8 *)(puStack_c8 + uVar7 * 0x48 + 0x28) = uStack_158;
          *(ulong *)(puStack_c8 + uVar7 * 0x48 + 0x20) = uStack_160;
          *(undefined8 *)(puStack_c8 + uVar7 * 0x48 + 0x60) = uStack_120;
          *(undefined8 *)(puStack_c8 + uVar7 * 0x48 + 0x48) = uStack_138;
          *(undefined8 *)(puStack_c8 + uVar7 * 0x48 + 0x40) = uStack_140;
          *(undefined8 *)(puStack_c8 + uVar7 * 0x48 + 0x58) = uStack_128;
          *(undefined8 *)(puStack_c8 + uVar7 * 0x48 + 0x50) = uStack_130;
          *(undefined8 *)(puStack_c8 + uVar7 * 0x48 + 0x38) = uStack_148;
          *(long *)(puStack_c8 + uVar7 * 0x48 + 0x30) = lStack_150;
          puVar9 = puStack_c8;
          param_1 = lStack_150;
          param_2 = uStack_140;
        } while (uVar10 != uVar11);
      }
      func_0x000107c4077c(uVar8);
      (*pcVar4)(param_1,param_2,puVar9,0);
      func_0x000107c6142c(puVar9);
    }
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 1010ca0d4; end: 1010ca3db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ca0d4(code *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001007d6c8c(1,0xd000000000000026,0x800000010ef24a00);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d5b728);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x0001007d6c8c(3,0xd000000000000023,0x800000010ef24a30);
    (*param_1)(0xd000000000000021,0x800000010ef24a60,0x101);
  }
  else {
    func_0x0001007d6c8c(1,0xd00000000000002b,0x800000010ef24a90);
    puVar3 = &UNK_110381978;
    func_0x000107c613fc(&UNK_110381978,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_1103819f0;
    func_0x000107c613fc(&UNK_1103819f0,0x30,7);
    *(code **)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    *(undefined **)(puVar4 + 0x20) = puVar3;
    *(long *)(puVar4 + 0x28) = lVar1;
    pcStack_50 = FUN_1010ca3dc;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1010ca3e8;
    puStack_58 = &UNK_110381a08;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c43188(lVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar2);
  }
  return;
}


