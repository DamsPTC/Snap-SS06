/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ed860c; end: 102ed8613;  */

void FUN_102ed860c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  long lStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_70;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar6 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010f114430);
    func_0x000107c466bc(puVar5);
    func_0x000107c61170(uVar6);
    func_0x00010488ade0(puVar5);
    func_0x000107c61170(puVar5);
  }
  else {
    pcStack_50 = FUN_102f096d4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100f1c768;
    puStack_58 = &UNK_1105e8498;
    lStack_48 = lVar1;
    func_0x000107c60bc4(&puStack_70);
    lVar2 = lStack_48;
    func_0x000107c6157c(lVar1);
    func_0x000107c61574(lVar2);
    func_0x000107c440d8(lVar3);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar3);
  }
  *param_1 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c();
  return;
}



/* Entry: 102ed8614; end: 102ed8647;  */

void FUN_102ed8614(void)

{
  long unaff_x20;
  
  FUN_102ede168(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102ed8648; end: 102ed87b7;  */

/* WARNING: Possible PIC construction at 0x000102ed8790: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ed8794) */

void FUN_102ed8648(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126da278;
    func_0x000107c61168(PTR_PTR_1126da278);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar1);
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126bcf68;
    func_0x000107c610f8(PTR_PTR_1126bcf68);
    func_0x000107c5ee20(param_2,param_3);
    func_0x000107c45ae0(puVar2);
    func_0x000107c61170(param_2);
    puVar3 = puVar1;
    func_0x000107c3d778(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x0001000285a8(0x112ebe818,&UNK_10dada750);
    puVar2 = puVar3;
    func_0x000103edf20c(puVar3);
    puVar1 = &UNK_1105e5e10;
    func_0x000107c613fc(&UNK_1105e5e10,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_6;
    *(undefined8 *)(puVar1 + 0x18) = param_7;
    func_0x000107c6157c(param_7);
    func_0x00010075a04c(0,1,FUN_102ed92c4,puVar1);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar2);
    return;
  }
  return;
}



/* Entry: 102ed87b8; end: 102ed8937;  */

/* WARNING: Removing unreachable block (ram,0x000102ed8858) */

void FUN_102ed87b8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  
  if ((char)param_1[1] != '\x01') {
    lVar1 = *param_1;
    uVar6 = param_2;
    func_0x000107c3eea8();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar1);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    lVar1 = lVar2;
    func_0x0001010282b0(lVar2,uVar6);
    func_0x00010006c090(lVar2,uVar6);
    if (lVar1 != 0) {
      pcVar3 = "editSnapDoc(snapDoc:selection:audioData:mediaManager:composerServices:onEdited:)";
      func_0x0001000c10c0(
                         "editSnapDoc(snapDoc:selection:audioData:mediaManager:composerServices:onEdited:)"
                         );
      func_0x000107c61180();
      puVar4 = &UNK_1105e5e38;
      func_0x000107c613fc(&UNK_1105e5e38,0x28,7);
      *(undefined8 *)(puVar4 + 0x10) = param_2;
      *(undefined8 *)(puVar4 + 0x18) = param_3;
      *(long *)(puVar4 + 0x20) = lVar1;
      pcStack_58 = FUN_102ed92cc;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1105e5e50;
      ppuVar5 = &puStack_78;
      puStack_50 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar4 = puStack_50;
      func_0x000107c6157c(param_3);
      func_0x000107c61174(lVar1);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(pcVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(pcVar3);
    }
  }
  return;
}



/* Entry: 102ed8938; end: 102ed8e33;  */

/* WARNING: Removing unreachable block (ram,0x000102ed8a00) */

undefined1  [16] FUN_102ed8938(undefined *param_1,undefined *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  long extraout_x8;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [32];
  long lStack_b0;
  undefined1 auStack_a8 [32];
  undefined *apuStack_88 [3];
  long lStack_70;
  
  lVar5 = 0;
  func_0x000107c5ed50();
  lVar17 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  func_0x000107c41214();
  func_0x000107c61180();
  if (param_1 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    param_2 = (undefined *)0xf000000000000000;
  }
  else {
    puVar14 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    func_0x00010006c00c(puVar14,param_2);
    puVar15 = puVar14;
    func_0x0001010282b0(puVar14,param_2);
    func_0x00010006c090(puVar14,param_2);
    if (puVar15 != (undefined *)0x0) {
      puVar16 = puVar15;
      func_0x000107c4e8d8();
      func_0x000107c61180();
      if (puVar16 == (undefined *)0x0) {
        func_0x000107c61170(puVar15);
      }
      else {
        puStack_e8 = puVar16;
        puStack_e0 = puVar15;
        func_0x000107c4e928();
        func_0x000107c61180();
        if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ed8e30);
          (*pcVar4)();
        }
        puStack_d8 = puVar16;
        func_0x000107c600f4(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x000100e15a08();
        func_0x000107c601c0(apuStack_88,lVar5,puVar16);
        puVar15 = PTR___sypN_11034f1a8;
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
        while (lStack_70 != 0) {
          func_0x000100102924(apuStack_88,auStack_a8);
          func_0x000100102924(auStack_a8,auStack_d0);
          uVar9 = 0;
          func_0x000101de16dc(0);
          plVar10 = &lStack_b0;
          func_0x000107c6147c(plVar10,auStack_d0,puVar15 + 8,uVar9,6);
          lVar3 = lStack_b0;
          if ((((ulong)plVar10 & 1) != 0) && (lStack_b0 != 0)) {
            puVar15 = puVar13;
            func_0x000107c61550();
            if (((int)puVar15 == 0) ||
               (((long)puVar13 < 0 || (puVar15 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)))) {
              if ((ulong)puVar13 >> 0x3e == 0) {
                puVar6 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar6 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar13) {
                  puVar6 = puVar13;
                }
                func_0x000107c60480(puVar6);
              }
              puVar15 = (undefined *)0x0;
              func_0x000101a10584(0,puVar6 + 1,1,puVar13);
            }
            uVar12 = (ulong)puVar15 & 0xffffffffffffff8;
            uVar1 = *(ulong *)(uVar12 + 0x10);
            puVar13 = puVar15;
            if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
              puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
              func_0x000101a10584(puVar13,uVar1 + 1,1,puVar15);
              uVar12 = (ulong)puVar13 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
            *(long *)(uVar12 + uVar1 * 8 + 0x20) = lVar3;
            puVar15 = PTR___sypN_11034f1a8;
          }
          func_0x000107c601c0(apuStack_88,lVar5,puVar16);
        }
        func_0x000107c61170(puStack_d8);
        (**(code **)(lVar17 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5);
        puVar15 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
        if ((ulong)puVar13 >> 0x3e == 0) {
          puVar16 = *(undefined **)(puVar15 + 0x10);
          puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar16 = puVar15;
          if ((undefined *)0x7fffffffffffffff < puVar13) {
            puVar16 = puVar13;
          }
          func_0x000107c60480();
          puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
        if (puVar16 != (undefined *)0x0) {
          puVar8 = (undefined *)0x0;
          do {
            while( true ) {
              puStack_d8 = puVar6;
              if (((ulong)puVar13 & 0xc000000000000001) == 0) {
                if (*(undefined **)(puVar15 + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x102ed8cf8);
                  (*pcVar4)();
                }
                puVar6 = *(undefined **)(puVar13 + (long)puVar8 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                puVar6 = puVar8;
                func_0x00010121c1ac(puVar8,puVar13);
              }
              puVar11 = puVar8 + 1;
              if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x102ed8cf4);
                (*pcVar4)();
              }
              func_0x0001044e03bc(0);
              puVar7 = puVar6;
              func_0x0001044de834();
              puVar2 = puStack_d8;
              if (((ulong)puVar7 & 1) != 0) break;
              func_0x000107c61170(puVar6);
              puVar6 = puStack_d8;
              puVar8 = puVar8 + 1;
              if (puVar11 == puVar16) goto LAB_102ed8d14;
            }
            puVar8 = puStack_d8;
            func_0x000107c61558();
            apuStack_88[0] = puVar2;
            if (((ulong)puVar8 & 1) == 0) {
              func_0x000101a17c14(0,*(long *)(puVar2 + 0x10) + 1,1);
            }
            uVar1 = *(ulong *)(apuStack_88[0] + 0x10);
            puVar8 = (undefined *)(uVar1 + 1);
            if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar1) {
              puStack_d8 = puVar8;
              func_0x000101a17c14(1 < *(ulong *)(apuStack_88[0] + 0x18),puVar8,1);
              puVar8 = puStack_d8;
            }
            *(undefined **)(apuStack_88[0] + 0x10) = puVar8;
            *(undefined **)(apuStack_88[0] + uVar1 * 8 + 0x20) = puVar6;
            puVar6 = apuStack_88[0];
            puVar8 = puVar11;
          } while (puVar11 != puVar16);
        }
LAB_102ed8d14:
        func_0x000107c6142c(puVar13);
        if (((long)puVar6 < 0) || (((ulong)puVar6 >> 0x3e & 1) != 0)) {
          puVar13 = puVar6;
          func_0x000107c60480();
          puVar15 = puStack_e8;
          puVar16 = puStack_e0;
        }
        else {
          puVar13 = *(undefined **)(puVar6 + 0x10);
          puVar15 = puStack_e8;
          puVar16 = puStack_e0;
        }
        puStack_e8 = puVar15;
        puStack_e0 = puVar16;
        if (puVar13 == (undefined *)0x0) {
          func_0x000107c61170(puVar16);
          func_0x000107c61170(puVar15);
          func_0x000107c61574(puVar6);
        }
        else {
          puVar13 = puVar15;
          func_0x000107c4e928();
          func_0x000107c61180();
          if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ed8e34);
            (*pcVar4)();
          }
          puVar8 = puVar6;
          FUN_10253fea8(puVar6);
          func_0x000107c61574(puVar6);
          puVar6 = PTR___sypN_11034f1a8 + 8;
          puVar11 = puVar8;
          func_0x000107c5fc48(puVar8,puVar6);
          func_0x000107c6142c(puVar8);
          func_0x000107c4ff94(puVar13);
          func_0x000107c61170(puVar13);
          func_0x000107c61170(puVar11);
          puVar13 = puVar16;
          func_0x000107c41214();
          func_0x000107c61180();
          if (puVar13 == (undefined *)0x0) {
            func_0x000107c61170(puVar16);
            func_0x000107c61170(puVar15);
          }
          else {
            puVar8 = puVar13;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar13);
            func_0x000107c61170(puVar16);
            func_0x000107c61170(puVar15);
            func_0x00010006c090(puVar14,param_2);
            puVar14 = puVar8;
            param_2 = puVar6;
          }
        }
      }
    }
  }
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = puVar14;
  return auVar18;
}



/* Entry: 102ed8e34; end: 102ed92c3;  */

void FUN_102ed8e34(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long extraout_x8;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 auStack_100 [2];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined1 auStack_d8 [32];
  long lStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar14 = param_1;
    func_0x000107c4e928();
    func_0x000107c61180();
    if (uVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed92b8);
      (*pcVar3)();
    }
    uVar10 = uVar14;
    uStack_e8 = param_2;
    uStack_e0 = param_1;
    func_0x000107c600f4(auStack_f0 + lVar1);
    func_0x000100e15a08();
    func_0x000107c601c0(auStack_90,lVar4,uVar10);
    puVar13 = PTR___sypN_11034f1a8;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (lStack_78 != 0) {
      func_0x000100102924(auStack_90,auStack_b0);
      func_0x000100102924(auStack_b0,auStack_d8);
      uVar7 = 0;
      func_0x000101de16dc(0);
      plVar8 = &lStack_b8;
      func_0x000107c6147c(plVar8,auStack_d8,puVar13 + 8,uVar7,6);
      lVar2 = lStack_b8;
      if ((((ulong)plVar8 & 1) != 0) && (lStack_b8 != 0)) {
        puVar6 = puVar9;
        func_0x000107c61550();
        if (((int)puVar6 == 0) ||
           (((long)puVar9 < 0 || (puVar6 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)))) {
          if ((ulong)puVar9 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar9) {
              puVar5 = puVar9;
            }
            func_0x000107c60480(puVar5);
          }
          puVar6 = (undefined *)0x0;
          func_0x000101a10584(0,puVar5 + 1,1,puVar9);
        }
        uVar12 = (ulong)puVar6 & 0xffffffffffffff8;
        uVar11 = *(ulong *)(uVar12 + 0x10);
        puVar9 = puVar6;
        if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar11) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
          func_0x000101a10584(puVar9,uVar11 + 1,1,puVar6);
          uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar12 + 0x10) = uVar11 + 1;
        *(long *)(uVar12 + uVar11 * 8 + 0x20) = lVar2;
      }
      func_0x000107c601c0(auStack_90,lVar4,uVar10);
    }
    func_0x000107c61170(uVar14);
    (**(code **)(lVar15 + 8))(auStack_f0 + lVar1,lVar4);
    if ((ulong)puVar9 >> 0x3e == 0) {
      puVar13 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar13 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar9) {
        puVar13 = puVar9;
      }
      func_0x000107c60480();
    }
    if (puVar13 != (undefined *)0x0) {
      uVar14 = 0;
      do {
        if (((ulong)puVar9 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed9264);
            (*pcVar3)();
          }
          uVar10 = *(ulong *)(puVar9 + uVar14 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar10 = uVar14;
          func_0x00010121c1ac(uVar14,puVar9);
        }
        puVar6 = (undefined *)(uVar14 + 1);
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed9260);
          (*pcVar3)();
        }
        func_0x0001044e03bc(0);
        uVar11 = uVar10;
        func_0x0001044de514();
        if ((uVar11 & 1) != 0) {
          func_0x000107c6142c(puVar9);
          uVar14 = uVar10;
          func_0x000107c40dc8();
          func_0x000107c61180();
          if (uVar14 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed92bc);
            (*pcVar3)();
          }
          uVar11 = uVar14;
          func_0x000107c4ce20();
          func_0x000107c61180();
          func_0x000107c61170(uVar14);
          if (uVar11 != 0) {
            uVar14 = uVar11;
            func_0x000107c453bc();
            func_0x000107c61180();
            func_0x000107c61170(uVar11);
            if (uVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed92c4);
              (*pcVar3)();
            }
            uVar11 = uVar14;
            func_0x000107c4d294();
            func_0x000107c61180();
            func_0x000107c61170(uVar14);
            if (uVar11 == 0) {
              func_0x000107c61170(uVar10);
              uVar10 = uStack_e0;
            }
            else {
              uVar14 = uVar11;
              func_0x000107c5cda4();
              if (uVar14 != 0) {
                func_0x000107c5cda4(uVar11);
                uVar14 = uVar11;
                func_0x000107c5cdec(uVar11);
                func_0x000107c60a44(auStack_90,(double)uVar14 / 1000.0,600);
                puVar9 = PTR_PTR_1126b3030;
                func_0x000107c610f8(PTR_PTR_1126b3030);
                uVar7 = 0;
                func_0x000107c5ee20(0,0xc000000000000000);
                *(undefined8 *)((long)auStack_100 + lVar1) = 0;
                *(undefined8 *)((long)auStack_100 + lVar1 + 8) = 0;
                func_0x000107c48e18(puVar9);
                func_0x000107c61170(uVar7);
                func_0x000107c610f8(PTR_PTR_1126b2f20);
                *(undefined8 *)((long)auStack_100 + lVar1) = 0;
                func_0x000107c48588();
                func_0x000107c61170(uStack_e0);
                func_0x000107c61170(uVar11);
                func_0x000107c61170(uVar10);
                func_0x000107c61170(puVar9);
                return;
              }
              func_0x000107c61170(uVar11);
              func_0x000107c61170(uStack_e0);
            }
            func_0x000107c61170(uVar10);
            return;
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed92c0);
          (*pcVar3)();
        }
        func_0x000107c61170(uVar10);
        uVar14 = uVar14 + 1;
      } while (puVar6 != puVar13);
    }
    func_0x000107c61170(uStack_e0);
    func_0x000107c6142c(puVar9);
  }
  return;
}



/* Entry: 102ed92c4; end: 102ed92cb;  */

/* WARNING: Removing unreachable block (ram,0x000102ed8858) */

void FUN_102ed92c4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if ((char)param_1[1] != '\x01') {
    lVar3 = *param_1;
    uVar8 = uVar1;
    func_0x000107c3eea8();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar3);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    lVar3 = lVar4;
    func_0x0001010282b0(lVar4,uVar8);
    func_0x00010006c090(lVar4,uVar8);
    if (lVar3 != 0) {
      pcVar5 = "editSnapDoc(snapDoc:selection:audioData:mediaManager:composerServices:onEdited:)";
      func_0x0001000c10c0(
                         "editSnapDoc(snapDoc:selection:audioData:mediaManager:composerServices:onEdited:)"
                         );
      func_0x000107c61180();
      puVar6 = &UNK_1105e5e38;
      func_0x000107c613fc(&UNK_1105e5e38,0x28,7);
      *(undefined8 *)(puVar6 + 0x10) = uVar1;
      *(undefined8 *)(puVar6 + 0x18) = uVar2;
      *(long *)(puVar6 + 0x20) = lVar3;
      pcStack_58 = FUN_102ed92cc;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1105e5e50;
      ppuVar7 = &puStack_78;
      puStack_50 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_50;
      func_0x000107c6157c(uVar2);
      func_0x000107c61174(lVar3);
      func_0x000107c61574(puVar6);
      func_0x000107c4e524(pcVar5);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar3);
      func_0x000107c615e8(pcVar5);
    }
  }
  return;
}



/* Entry: 102ed92cc; end: 102ed92f3;  */

void FUN_102ed92cc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102ed92f4; end: 102ed9323;  */

void FUN_102ed92f4(long param_1,long param_2)

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



/* Entry: 102ed9324; end: 102ed93cf;  */

void FUN_102ed9324(void)

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



/* Entry: 102ed93d0; end: 102ed93df;  */

void FUN_102ed93d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102ed93e0; end: 102ed941b; -[_TtC24SCSnapDocSendServiceImpl26SnapDocSendRetranscodeUtil init] */

void FUN_102ed93e0(undefined8 param_1)

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



/* Entry: 102ed941c; end: 102ed946f;  */

void FUN_102ed941c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ed9470; end: 102ed9523;  */

void FUN_102ed9470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *param_5;
  func_0x000107c61434(param_2);
  uVar2 = uVar4;
  func_0x000107c61558();
  *param_5 = uVar4;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    func_0x0001000d182c(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *param_5 = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001000d182c(uVar4,uVar2 + 1,1,uVar3);
    *param_5 = uVar4;
  }
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  lVar1 = uVar4 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return;
}



/* Entry: 102ed9524; end: 102ed98f3;  */

bool FUN_102ed9524(long *param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_a8 [72];
  
  uVar5 = *(ulong *)(*param_1 + 0x10);
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c41844();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar17 = uVar6;
  func_0x000107c5bf1c();
  func_0x000107c61180();
  uVar5 = 0;
  func_0x000102eddb40(0,0x112d51360,&PTR_PTR_1126becd8);
  uVar7 = uVar17;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar17);
  if (uVar7 >> 0x3e == 0) {
    uVar17 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar17 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar17 = uVar7;
    }
    func_0x000107c60480();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar2;
  if (uVar17 != 0) {
    uVar18 = 0;
    do {
      if ((uVar7 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed97a4);
          (*pcVar3)();
        }
        uVar8 = *(ulong *)(uVar7 + 0x20 + uVar18 * 8);
        func_0x000107c61174();
        uVar12 = uVar5;
      }
      else {
        uVar8 = uVar18;
        uVar12 = uVar7;
        func_0x000100fb1534();
      }
      bVar4 = SCARRY8(uVar18,1);
      uVar18 = uVar18 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed97a0);
        (*pcVar3)();
      }
      uVar13 = uVar8;
      func_0x000107c5bfec();
      func_0x000107c61180();
      uVar9 = uVar13;
      func_0x000107c5faec();
      uVar5 = uVar12;
      func_0x000107c61170(uVar13);
      if (*(long *)(param_2 + 0x10) != 0) {
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
        puVar10 = auStack_a8;
        uVar5 = uVar9;
        func_0x000107c5fb58(puVar10,uVar9,uVar12);
        func_0x000107c606a8();
        uVar13 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar16 = (ulong)puVar10 & (uVar13 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
          do {
            puVar1 = (ulong *)(*(long *)(param_2 + 0x30) + uVar16 * 0x10);
            uVar11 = *puVar1;
            uVar5 = puVar1[1];
            if ((uVar11 == uVar9 && uVar5 == uVar12) ||
               (func_0x000107c605b8(uVar11,uVar5,uVar9,uVar12,0), (uVar11 & 1) != 0)) {
              func_0x000107c61170(uVar8);
              func_0x000107c6142c(uVar12);
              goto LAB_102ed9618;
            }
            uVar16 = uVar16 + 1 & ~uVar13;
          } while ((*(ulong *)(param_2 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
        }
      }
      func_0x000107c6142c(uVar12);
      puVar14 = puVar2;
      func_0x000107c61558();
      if (((ulong)puVar14 & 1) == 0) {
        uVar5 = *(long *)(puVar2 + 0x10) + 1;
        func_0x000102f03198(0,uVar5,1);
      }
      uVar13 = *(ulong *)(puVar2 + 0x10);
      uVar12 = uVar13 + 1;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar13) {
        uVar5 = uVar12;
        func_0x000102f03198(1 < *(ulong *)(puVar2 + 0x18),uVar12,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar12;
      *(ulong *)(puVar2 + uVar13 * 8 + 0x20) = uVar8;
LAB_102ed9618:
    } while (uVar18 != uVar17);
  }
  func_0x000107c6142c(uVar7);
  if (((long)puVar2 < 0) || (((ulong)puVar2 >> 0x3e & 1) != 0)) {
    puVar14 = puVar2;
    func_0x000107c60480();
  }
  else {
    puVar14 = *(undefined **)(puVar2 + 0x10);
  }
  func_0x000107c61574(puVar2);
  if (puVar14 == (undefined *)0x0) {
    uVar5 = uVar6;
    func_0x000107c40704();
    func_0x000107c61180();
    uVar17 = uVar5;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar5);
    lVar15 = *(long *)(uVar17 + 0x10);
    func_0x000107c6142c(uVar17);
    if (lVar15 == 0) {
      uVar5 = uVar6;
      func_0x000107c4e6d0();
      func_0x000107c61180();
      uVar17 = uVar5;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar5);
      lVar15 = *(long *)(uVar17 + 0x10);
      func_0x000107c6142c(uVar17);
      if (lVar15 == 0) {
        uVar5 = uVar6;
        func_0x000107c4c558();
        func_0x000107c61180();
        uVar17 = uVar5;
        func_0x000107c5fc54();
        func_0x000107c61170(uVar5);
        lVar15 = *(long *)(uVar17 + 0x10);
        func_0x000107c6142c(uVar17);
        func_0x000107c61170(uVar6);
        return lVar15 != 0;
      }
    }
  }
  func_0x000107c61170(uVar6);
  return true;
}



/* Entry: 102ed98f4; end: 102ed9a97;  */

void FUN_102ed98f4(long *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  lVar3 = *(long *)(lVar7 + 0x10);
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c41844();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar4;
  func_0x000107c40704();
  func_0x000107c61180();
  lVar5 = lVar3;
  func_0x000107c5fc54();
  func_0x000107c61170(lVar3);
  lVar3 = *(long *)(lVar5 + 0x10);
  func_0x000107c6142c(lVar5);
  if (lVar3 == 0) {
    lVar3 = lVar4;
    func_0x000107c4e6d0();
    func_0x000107c61180();
    lVar5 = lVar3;
    func_0x000107c5fc54();
    func_0x000107c61170(lVar3);
    lVar3 = *(long *)(lVar5 + 0x10);
    func_0x000107c6142c(lVar5);
    if (lVar3 == 0) {
      lVar3 = lVar4;
      func_0x000107c4c558();
      func_0x000107c61180();
      lVar5 = lVar3;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar3);
      lVar3 = *(long *)(lVar5 + 0x10);
      func_0x000107c6142c(lVar5);
      bVar2 = lVar3 != 0;
      goto LAB_102ed99c0;
    }
  }
  bVar2 = true;
LAB_102ed99c0:
  lVar3 = lVar4;
  func_0x000107c5bf1c(lVar4);
  func_0x000107c61180();
  uVar6 = 0;
  func_0x000102eddb40(0,0x112d51360,&PTR_PTR_1126becd8);
  lVar5 = lVar3;
  func_0x000107c5fc54(lVar3,uVar6);
  func_0x000107c61170(lVar3);
  func_0x000102f0c214(param_2,lVar5);
  func_0x000107c6142c(lVar5);
  func_0x000107c61170(lVar4);
  uVar6 = *(undefined8 *)(lVar7 + 0x88);
  *(undefined8 *)(lVar7 + 0x88) = param_2;
  uVar1 = *(undefined1 *)(lVar7 + 0x90);
  *(bool *)(lVar7 + 0x90) = bVar2;
  func_0x000102edda80(uVar6,uVar1);
  return;
}



/* Entry: 102ed9a98; end: 102ed9d1b;  */

void FUN_102ed9a98(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 1) != '\x01') {
    uVar1 = *param_1;
    func_0x000107c5d784(uVar1,param_2,param_2);
    func_0x000107c61180();
    uStack_40 = param_3;
    uStack_38 = uVar1;
    func_0x000107c61174();
    func_0x000100087bd4(FUN_102eddbcc,auStack_50,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 102ed9d1c; end: 102eda0f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102ed9d1c(ulong *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  
  uVar7 = *param_1;
  if (uVar7 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    func_0x000107c60480();
  }
  if (((uVar3 == 1) && (puVar4 = param_1, func_0x000102ed9be0(), ((ulong)puVar4 & 1) != 0)) &&
     (uVar7 = param_1[9], uVar7 != 0)) {
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_1[8] != 0) {
      puVar8 = *(undefined **)(param_1[8] + _DAT_11307fc80);
      func_0x000107c61434(puVar8);
    }
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (uVar7 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar3 + 0x10);
    }
    else {
      uVar9 = uVar3;
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar9 = uVar7;
      }
      func_0x000107c60480();
    }
    uVar11 = 0;
    do {
      if (uVar9 == uVar11) {
        func_0x000107c6142c(puVar8);
        goto LAB_102ed9e20;
      }
      if ((uVar7 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar3 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed9e8c);
          (*pcVar1)();
        }
        uVar5 = *(ulong *)(uVar7 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar11;
        func_0x000100fb1534(uVar11,uVar7);
      }
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed9e18);
        (*pcVar1)();
      }
      uVar6 = uVar5;
      func_0x000107c5d0f0();
      func_0x000107c61170(uVar5);
      uVar11 = uVar11 + 1;
    } while ((int)uVar6 != 2);
    if (uVar7 >> 0x3e == 0) {
      uVar3 = *(ulong *)(uVar3 + 0x10);
    }
    else {
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar3 = uVar7;
      }
      func_0x000107c60480();
    }
    if ((ulong)puVar8 >> 0x3e == 0) {
      puVar10 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar10 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar10 = puVar8;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(puVar8);
    if (SCARRY8(uVar3,(long)puVar10)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed9ed8);
      (*pcVar1)();
    }
    bVar2 = 1 < (long)(puVar10 + uVar3);
  }
  else {
LAB_102ed9e20:
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 102eda0f4; end: 102eda1ab;  */

undefined * FUN_102eda0f4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126ae780;
  func_0x000107c610f8(PTR_PTR_1126ae780);
  func_0x000107c453e4();
  lVar3 = param_1;
  func_0x000102ed9ed8(param_1);
  func_0x000107c5947c(puVar2,param_2,lVar3);
  puVar4 = PTR_PTR_1126d34d0;
  func_0x000107c610f8(PTR_PTR_1126d34d0);
  func_0x000107c453e4();
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c3f5b8();
    func_0x000107c61170(param_1);
    if ((int)lVar3 == 2) {
      func_0x000107c531d0(puVar4,param_2,2);
    }
    func_0x000107c530a4(puVar2,param_2,puVar4);
    func_0x000107c61170(puVar4);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102eda1ac);
  (*pcVar1)();
}



/* Entry: 102eda1ac; end: 102eda3ef;  */

undefined1  [16] FUN_102eda1ac(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined *puStack_78;
  
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102eda3f0);
    (*pcVar2)();
  }
  lVar3 = param_1;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    puStack_78 = (undefined *)0x0;
    uVar4 = 0;
    func_0x000102eddb40(0,0x112d55598,&PTR_PTR_1126b25d0);
    func_0x000107c5fc50(lVar3,&puStack_78,uVar4);
    func_0x000107c61170(lVar3);
    if (puStack_78 != (undefined *)0x0) {
      puVar8 = puStack_78;
    }
  }
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar9 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar9 = puVar8;
    }
    func_0x000107c60480();
  }
  if (puVar9 != (undefined *)0x0) {
    uVar10 = 0;
    do {
      if (((ulong)puVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102eda3a0);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(puVar8 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar10;
        func_0x00010121c1ac(uVar10,puVar8);
      }
      puVar1 = (undefined *)(uVar10 + 1);
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102eda39c);
        (*pcVar2)();
      }
      uVar6 = uVar5;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar6 != 0) {
        uVar7 = uVar6;
        func_0x000107c5d0f0();
        func_0x000107c61170(uVar6);
        if ((int)uVar7 == 1) {
          uVar6 = uVar5;
          func_0x000107c4c930();
          func_0x000107c61180();
          if (uVar6 != 0) {
            uVar7 = uVar6;
            func_0x000107c3e240();
            func_0x000107c61170(uVar6);
            if ((int)uVar7 == 5) {
              func_0x000107c6142c(puVar8);
              uVar10 = uVar5;
              func_0x000107c4c930();
              func_0x000107c61180();
              if (uVar10 != 0) {
                uVar6 = uVar10;
                func_0x000107c41e40();
                func_0x000107c61180();
                func_0x000107c61170(uVar10);
                if (uVar6 != 0) {
                  uVar10 = uVar6;
                  func_0x000107c5e304(uVar6);
                  dVar12 = (double)(uVar10 & 0xffffffff);
                  uVar10 = uVar6;
                  func_0x000107c44d98(uVar6);
                  func_0x000107c61170(uVar6);
                  func_0x000107c61170(uVar5);
                  dVar11 = (double)(uVar10 & 0xffffffff);
                  goto LAB_102eda3c8;
                }
              }
              func_0x000107c61170(uVar5);
              goto LAB_102eda3c0;
            }
          }
        }
      }
      func_0x000107c61170(uVar5);
      uVar10 = uVar10 + 1;
    } while (puVar1 != puVar9);
  }
  func_0x000107c6142c(puVar8);
LAB_102eda3c0:
  dVar12 = 0.0;
  dVar11 = 0.0;
LAB_102eda3c8:
  auVar13._8_8_ = dVar11;
  auVar13._0_8_ = dVar12;
  return auVar13;
}



/* Entry: 102eda3f0; end: 102eda597;  */

undefined1  [16]
FUN_102eda3f0(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (param_3 == 0) {
    param_1 = 0;
    param_2 = 0;
    goto LAB_102eda578;
  }
  if ((param_4 < 5) && ((1 << (ulong)(param_4 & 0x1f) & 0x16U) != 0)) {
    func_0x000107c61174(param_3);
    uVar1 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010f113de0);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    if ((param_5 & 1) == 0) goto LAB_102eda4e0;
    puVar3 = PTR_PTR_1126c4288;
    func_0x000107c610f8(PTR_PTR_1126c4288);
    func_0x000107c453e4();
    puVar2 = puVar3;
    func_0x000107c30894();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar2;
    func_0x000107c3087c(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
  }
  else {
    func_0x000107c61174(param_3);
LAB_102eda4e0:
    puVar3 = PTR_PTR_1126c4910;
    func_0x000107c610f8(PTR_PTR_1126c4910);
    func_0x000107c453e4();
  }
  puVar2 = PTR_PTR_1126da108;
  func_0x000107c61168(PTR_PTR_1126da108);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  FUN_102eda1ac();
  lVar4 = param_3;
  FUN_102eda0f4(param_3);
  func_0x000107c5de20(param_1,param_2,puVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar3);
LAB_102eda578:
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 102eda598; end: 102edad77;  */

/* WARNING: Removing unreachable block (ram,0x000102eda6b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102eda598(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  ulong *puVar23;
  undefined *puVar24;
  ulong uStack_f0;
  undefined1 auStack_d0 [16];
  undefined **ppuStack_c0;
  undefined1 auStack_b0 [16];
  undefined *puStack_a0;
  undefined *apuStack_98 [3];
  
  uVar11 = 0x800000010f113e20;
  uVar4 = 0xd000000000000035;
  func_0x000107c5fadc(0xd000000000000035,0x800000010f113e20);
  uVar14 = param_4;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar4);
  if ((int)uVar14 == 0) {
    return (undefined *)0x0;
  }
  uVar14 = *param_3;
  if (uVar14 >> 0x3e == 0) {
    if (*(long *)((uVar14 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_102eda6cc;
LAB_102eda628:
    if ((uVar14 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar14 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102edaba8);
        (*pcVar1)();
      }
      puVar15 = *(ulong **)(uVar14 + 0x20);
      func_0x000107c615f0(puVar15);
      uVar14 = uVar11;
    }
    else {
      puVar15 = (ulong *)0x0;
      FUN_10274d138(0,uVar14);
    }
    puVar5 = puVar15;
    func_0x000107c4e090();
    func_0x000107c61180();
    func_0x000107c615e8(puVar15);
    puVar15 = puVar5;
    func_0x000107c3eea8();
    func_0x000107c61180();
    puVar23 = puVar15;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar15);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    puVar15 = puVar23;
    func_0x0001010282b0(puVar23,uVar14);
    func_0x00010006c090(puVar23,uVar14);
    func_0x000107c61170(puVar5);
  }
  else {
    uVar13 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar13 = uVar14;
    }
    func_0x000107c60480();
    if (uVar13 != 0) goto LAB_102eda628;
LAB_102eda6cc:
    puVar15 = (ulong *)0x0;
  }
  puVar5 = param_3;
  func_0x000102ed9b24(param_3,param_5);
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar16 = (undefined *)param_3[7];
  if (puVar16 != (undefined *)0x0) {
    func_0x000107c615f0(puVar16);
    puVar17 = PTR_PTR_1126c33d0;
    func_0x000107c61168(PTR_PTR_1126c33d0);
    puVar6 = puVar16;
    func_0x000107c6148c(puVar16,puVar17);
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c615e8(puVar16);
    }
    else {
      func_0x000107c4c558();
      func_0x000107c61180();
      func_0x000107c615e8(puVar16);
      if (puVar6 != (undefined *)0x0) {
        puVar16 = puVar6;
        func_0x000107c5fc54(puVar6,PTR___sypN_11034f1a8 + 8);
        func_0x000107c61170(puVar6);
        puVar17 = puVar16;
        func_0x000101158fcc();
        func_0x000107c6142c(puVar16);
        if (puVar17 != (undefined *)0x0) {
          puVar19 = puVar17;
        }
      }
    }
  }
  if ((*(byte *)((long)param_3 + 0x62) & 1) == 0) {
    uVar14 = param_3[1];
    uStack_f0 = 0;
    if (-1 < (long)uVar14) goto LAB_102eda7d4;
LAB_102edab78:
    uVar13 = uVar14 & 0xffffffffffffff8;
    uVar11 = uVar13;
    if (0x7fffffffffffffff < uVar14) {
      uVar11 = uVar14;
    }
    func_0x000107c60480();
  }
  else {
    puVar23 = param_3;
    func_0x000102ed9be0();
    uVar14 = param_3[1];
    uStack_f0 = (ulong)puVar23 & 0xffffffff;
    if ((long)uVar14 < 0) goto LAB_102edab78;
LAB_102eda7d4:
    if ((uVar14 >> 0x3e & 1) != 0) goto LAB_102edab78;
    uVar13 = uVar14 & 0xffffffffffffff8;
    uVar11 = *(ulong *)(uVar13 + 0x10);
  }
  uVar18 = 0;
  do {
    uVar12 = uVar18;
    if (uVar11 == uVar12) goto LAB_102eda864;
    if ((uVar14 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar13 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102edab60);
        (*pcVar1)();
      }
      uVar18 = *(ulong *)(uVar14 + uVar12 * 8 + 0x20);
      func_0x000107c6157c(uVar18);
    }
    else {
      uVar18 = uVar12;
      FUN_102f02a90(uVar12,uVar14);
    }
    if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102eda85c);
      (*pcVar1)();
    }
    lVar20 = *(long *)(uVar18 + 0x68);
    lVar7 = lVar20;
    func_0x000107c61174(lVar20);
    func_0x000107c61574(uVar18);
    uVar18 = uVar12 + 1;
  } while (lVar20 == 0);
  func_0x000107c61170(lVar7);
LAB_102eda864:
  puVar23 = param_3;
  FUN_102ed9d1c();
  if ((((((ulong)puVar23 & 1) != 0) || (*(char *)((long)puVar5 + _DAT_112ff5860) == '\x01')) ||
      ((uStack_f0 & 1) != 0)) || (uVar11 != uVar12)) {
    func_0x000107c61170(puVar5);
    func_0x000107c6142c(puVar19);
    puVar5 = puVar15;
    goto LAB_102eda910;
  }
  uVar14 = param_3[8];
  puVar17 = (undefined *)param_3[9];
  puVar23 = param_3;
  func_0x000102ed9be0();
  uVar2 = (undefined4)param_3[2];
  func_0x000107c51edc();
  puVar6 = PTR_PTR_1126c4288;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  apuStack_98[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar14 != 0) {
    puVar21 = *(undefined **)(uVar14 + _DAT_11307fc80);
    func_0x000107c61434(puVar21);
  }
  if ((ulong)puVar21 >> 0x3e == 0) {
    puVar22 = *(undefined **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar22 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar21) {
      puVar22 = puVar21;
    }
    func_0x000107c60480();
  }
  if (puVar22 == (undefined *)0x0) {
    func_0x000107c6142c(puVar21);
    puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    if ((long)puVar22 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102edad74);
      (*pcVar1)();
    }
    puVar24 = (undefined *)0x0;
    do {
      if (((ulong)puVar21 & 0xc000000000000001) == 0) {
        puVar8 = *(undefined **)(puVar21 + (long)puVar24 * 8 + 0x20);
        func_0x000107c61174(puVar8);
      }
      else {
        puVar8 = puVar24;
        func_0x0001011f4b2c(puVar24,puVar21);
      }
      puVar24 = puVar24 + 1;
      ppuStack_c0 = apuStack_98;
      puStack_a0 = puVar6;
      func_0x0001044c2e48(0x102eddd90,auStack_b0,FUN_102eddd8c,auStack_d0);
      func_0x000107c61170(puVar8);
    } while (puVar22 != puVar24);
    func_0x000107c6142c(puVar21);
    puVar23 = (ulong *)((ulong)puVar23 & 0xffffffff);
    puVar21 = apuStack_98[0];
  }
  puVar22 = puVar21;
  func_0x000107c5fc48(puVar21,PTR___sSSN_11034da80);
  puVar24 = puVar6;
  func_0x000107c30880(puVar6,puVar22);
  func_0x000107c61180();
  func_0x000107c61170(puVar22);
  func_0x000107c61170(puVar24);
  if (*(long *)(puVar19 + 0x10) != 0) {
    func_0x000107c30888(puVar6,1);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  if (puVar17 != (undefined *)0x0) {
    puVar16 = puVar17;
  }
  if ((ulong)puVar16 >> 0x3e == 0) {
    puVar22 = *(undefined **)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
    if (puVar22 != (undefined *)0x0) goto LAB_102edaa8c;
LAB_102edabe0:
    func_0x000107c61434(puVar17);
  }
  else {
    puVar22 = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar16) {
      puVar22 = puVar16;
    }
    func_0x000107c60480();
    if (puVar22 == (undefined *)0x0) goto LAB_102edabe0;
LAB_102edaa8c:
    if ((long)puVar22 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102edad78);
      (*pcVar1)();
    }
    func_0x000107c61434(puVar17);
    puVar17 = (undefined *)0x0;
    do {
      if (((ulong)puVar16 & 0xc000000000000001) == 0) {
        puVar24 = *(undefined **)(puVar16 + (long)puVar17 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar24 = puVar17;
        func_0x000100fb1534(puVar17,puVar16);
      }
      puVar8 = puVar24;
      func_0x000107c5d0f0();
      iVar3 = (int)puVar8;
      if (iVar3 < 3) {
        if (iVar3 == 1) {
          func_0x000107c30890(puVar6,1);
        }
        else {
          if (iVar3 != 2) goto LAB_102edab3c;
          func_0x000107c3088c(puVar6,1);
        }
      }
      else if ((iVar3 == 3) || ((iVar3 != 4 && (iVar3 != 6)))) {
LAB_102edab3c:
        func_0x000107c30894(puVar6,1);
      }
      else {
        func_0x000107c30898(puVar6,1);
      }
      puVar17 = puVar17 + 1;
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(puVar24);
    } while (puVar22 != puVar17);
  }
  func_0x000107c6142c(puVar16);
  puVar16 = puVar6;
  func_0x000107c3087c();
  func_0x000107c61180();
  if ((((ulong)puVar23 & 1) == 0) ||
     ((puVar17 = puVar16, func_0x000107c4a1f8(), (int)puVar17 == 0 &&
      ((puVar17 = puVar16, func_0x000107c30874(), (int)puVar17 == 0 ||
       (uVar14 = param_4, func_0x000108f49514(), (uVar14 & 1) == 0)))))) {
    if (puVar15 == (ulong *)0x0) {
      puVar23 = (ulong *)0x0;
    }
    else {
      puVar23 = puVar15;
      FUN_102eda0f4(puVar15);
    }
    puVar17 = PTR_PTR_1126da108;
    func_0x000107c61168(PTR_PTR_1126da108);
    FUN_102eda3f0(puVar15,uVar2,param_4);
    if (puVar15 != (ulong *)0x0) {
      puVar9 = puVar15;
      func_0x000107c61174(puVar15);
      FUN_102eda1ac();
      puVar10 = puVar9;
      FUN_102eda0f4(puVar9);
      func_0x000107c5de20(param_1,param_2,puVar17);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar10);
    }
    func_0x000107c42658(puVar17);
    func_0x000107c6142c(puVar21);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar23);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar15);
    func_0x000107c6142c(puVar19);
    return puVar17;
  }
  func_0x000107c6142c(puVar19);
  func_0x000107c61170(puVar15);
  func_0x000107c6142c(puVar21);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar16);
LAB_102eda910:
  func_0x000107c61170(puVar5);
  return (undefined *)0x1;
}



/* Entry: 102edad78; end: 102edaebf;  */

/* WARNING: Possible PIC construction at 0x000102edadec: Changing call to branch */

void FUN_102edad78(ulong param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_68;
  
  lVar4 = *(long *)(param_2 + 0x38);
  if (lVar4 == 0) {
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
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102edae84);
            (*pcVar1)();
          }
          uVar7 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
          func_0x000107c6157c(uVar7);
        }
        else {
          uVar7 = uVar6;
          FUN_102f02a90(uVar6,param_1);
        }
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102edae80);
          (*pcVar1)();
        }
        uVar8 = uVar6 + 1;
        uStack_68 = uVar7;
        FUN_102ed98f4(&uStack_68,0);
        func_0x000107c61574(uVar7);
        uVar6 = uVar6 + 1;
      } while (uVar8 != uVar5);
    }
  }
  else {
    func_0x000107c615f0(lVar4);
    puVar2 = PTR_PTR_1126c33d0;
    func_0x000107c61168(PTR_PTR_1126c33d0);
    lVar3 = lVar4;
    func_0x000107c6148c(lVar4,puVar2);
    if (lVar3 == 0) {
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c5bf40(lVar3);
    func_0x000107c61180();
    lVar4 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 102edaec0; end: 102edb063;  */

/* WARNING: Removing unreachable block (ram,0x000102edaf68) */

void FUN_102edaec0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000102f0e1c0(uVar1,0);
  uVar2 = uVar1;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar9 = *(long *)(param_1 + 0x68);
  plVar7 = (long *)0x0;
  if (lVar9 != 0) {
    func_0x000107c5eb54();
    func_0x000107c613fc();
    func_0x000107c61174();
    lVar3 = lVar9;
    func_0x000107c5eb50();
    uVar4 = 0;
    lStack_58 = lVar9;
    func_0x00010440a304(0);
    uVar5 = uVar4;
    FUN_102eddb80();
    plVar6 = &lStack_58;
    func_0x000107c5eb4c(plVar6,uVar4,uVar5);
    func_0x000107c61170(lVar9);
    func_0x000107c61574(lVar3);
    plVar7 = plVar6;
    func_0x000107c5ee20(plVar6,uVar4);
    func_0x00010006c090(plVar6,uVar4);
  }
  func_0x000107c53b70(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(plVar7);
  func_0x0001000d224c(&lStack_58);
  lVar9 = lStack_58;
  puVar8 = &UNK_1105e5e88;
  func_0x000107c613fc(&UNK_1105e5e88,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar1;
  *(long *)(puVar8 + 0x18) = param_1;
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(param_1);
  func_0x00010075a04c(0,1,FUN_102eddbc4,puVar8);
  func_0x000107c61574(lVar9);
  func_0x000107c61574(puVar8);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102edb064; end: 102edd993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102edb064(undefined8 param_1,undefined *param_2,ulong *param_3,undefined8 param_4,
                  ulong param_5,ulong *param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong **ppuVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined **ppuVar28;
  undefined *puVar29;
  ulong uVar30;
  undefined1 *puVar31;
  long lVar32;
  long lVar33;
  long *plVar34;
  long lVar35;
  long lVar36;
  undefined1 *puVar37;
  undefined1 **ppuVar38;
  ulong *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  ulong uVar42;
  undefined **ppuVar43;
  undefined **ppuVar44;
  long *plVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  long lVar48;
  undefined1 *puVar49;
  ulong uVar50;
  ulong uVar51;
  undefined1 *puVar52;
  ulong *puVar53;
  undefined *puVar54;
  long unaff_x21;
  ulong uVar55;
  ulong *puVar56;
  ulong uVar57;
  undefined *puVar58;
  ulong *puVar59;
  undefined1 *puVar60;
  ulong uVar61;
  ulong uVar62;
  undefined1 *puVar63;
  ulong *puVar64;
  undefined1 *puStack_2b8;
  undefined1 **ppuStack_2b0;
  ulong *puStack_248;
  ulong uStack_218;
  long alStack_200 [2];
  undefined **ppuStack_1f0;
  undefined *apuStack_1c0 [4];
  ulong *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined1 *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_58;
  
  puVar64 = (ulong *)param_3[1];
  if ((ulong)puVar64 >> 0x3e == 0) {
    puVar12 = *(ulong **)(((ulong)puVar64 & 0xffffffffffffff8) + 0x10);
    puVar39 = (ulong *)0x0;
    if (puVar12 == (ulong *)0x0) goto LAB_102edd860;
  }
  else {
    puVar12 = (ulong *)((ulong)puVar64 & 0xffffffffffffff8);
    if ((ulong *)0x7fffffffffffffff < puVar64) {
      puVar12 = puVar64;
    }
    func_0x000107c60480();
    if (puVar12 == (ulong *)0x0) {
      puVar39 = (ulong *)0x0;
      goto LAB_102edd860;
    }
  }
  uVar2 = (ulong)puVar64 & 0xc000000000000001;
  if (uVar2 == 0) {
    if (*(long *)(((ulong)puVar64 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd8bc);
      (*pcVar7)();
    }
    uVar55 = puVar64[4];
    func_0x000107c61434(puVar64);
    func_0x000107c6157c(uVar55);
  }
  else {
    func_0x000107c61434(puVar64);
    uVar55 = 0;
    FUN_102f02a90(0,puVar64);
  }
  uVar51 = *param_3;
  if (uVar51 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar51 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar51 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar51) {
      uVar13 = uVar51;
    }
    func_0x000107c60480();
  }
  if (uVar13 == 0) {
    func_0x000107c61574(uVar55);
    func_0x000107c6142c();
    puVar39 = puVar64;
LAB_102edd860:
    FUN_102edd994();
    func_0x000107c613f8(&UNK_1105e5f20,puVar39,0,0);
    *(undefined1 *)puVar39 = 0;
    func_0x000107c61654();
    return;
  }
  if ((uVar51 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar51 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd8f0);
      (*pcVar7)();
    }
    puVar52 = *(undefined1 **)(uVar51 + 0x20);
    func_0x000107c615f0(puVar52);
  }
  else {
    FUN_10274d138(0,uVar51);
    func_0x000107c615e8();
    puVar52 = (undefined1 *)0x0;
    FUN_10274d138(0,uVar51);
  }
  puVar14 = puVar52;
  func_0x000107c4e090();
  func_0x000107c61180();
  func_0x000107c615e8(puVar52);
  puVar39 = param_3;
  func_0x000102ed9b24(param_3,param_6);
  bVar4 = *(byte *)((long)param_3 + 0x62);
  if ((bVar4 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    puVar53 = param_3;
    func_0x000102ed9be0();
    uVar9 = (uint)puVar53;
  }
  puVar53 = (ulong *)0x0;
  uVar51 = (ulong)puVar64 & 0xffffffffffffff8;
  do {
    if (puVar12 == puVar53) {
      if (((*(byte *)((long)puVar39 + _DAT_112ff5860) | uVar9) & 1) != 0) goto LAB_102edb2e4;
      puVar53 = param_3;
      func_0x000102ed9be0();
      if ((((ulong)puVar53 & 1) == 0) ||
         (puVar53 = param_3, FUN_102f0e818(), ((ulong)puVar53 & 1) == 0)) {
        ppuStack_2b0 = (undefined1 **)PTR___swiftEmptyArrayStorage_11034f1c8;
        goto LAB_102edc41c;
      }
      puVar56 = (ulong *)param_3[9];
      puVar53 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar56 != (ulong *)0x0) {
        puVar53 = puVar56;
      }
      if ((ulong)puVar53 >> 0x3e == 0) {
        puVar21 = *(ulong **)(((ulong)puVar53 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar21 = (ulong *)((ulong)puVar53 & 0xffffffffffffff8);
        if ((ulong *)0x7fffffffffffffff < puVar53) {
          puVar21 = puVar53;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(puVar56);
      if (puVar21 == (ulong *)0x0) goto LAB_102edbff8;
      puVar52 = (undefined1 *)0x0;
      goto LAB_102edb278;
    }
    if (uVar2 == 0) {
      if (*(ulong **)(uVar51 + 0x10) <= puVar53) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd73c);
        (*pcVar7)();
      }
      puVar56 = (ulong *)puVar64[(long)((long)puVar53 + 4)];
      func_0x000107c6157c(puVar56);
    }
    else {
      puVar56 = puVar53;
      param_6 = puVar64;
      FUN_102f02a90();
    }
    if (SCARRY8((long)puVar53,1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102edb204);
      (*pcVar7)();
    }
    uVar61 = puVar56[0xd];
    uVar13 = uVar61;
    func_0x000107c61174(uVar61);
    func_0x000107c61574(puVar56);
    puVar53 = (ulong *)((long)puVar53 + 1);
  } while (uVar61 == 0);
  func_0x000107c61170(uVar13);
LAB_102edb2e4:
  puVar53 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar54 = (undefined *)param_3[9];
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar54 != (undefined *)0x0) {
    puVar15 = puVar54;
  }
  if ((bVar4 & 1) == 0) {
    puStack_2b8 = *(undefined1 **)((long)puVar39 + _DAT_112ff5868);
    func_0x000107c61174(puStack_2b8);
    func_0x000107c61174(puVar14);
    func_0x000107c61434(puVar54);
  }
  else {
    puVar52 = (undefined1 *)param_3[7];
    puStack_158 = puVar52;
    if (puVar52 == (undefined1 *)0x0) {
      func_0x000107c61174(puVar14);
      func_0x000107c61434(puVar54);
      puStack_2b8 = (undefined1 *)0x0;
    }
    else {
      func_0x000107c61174(puVar14);
      func_0x000107c61434(puVar54);
      FUN_102eddaa8(&puStack_158,&puStack_1a0);
      puVar54 = PTR_PTR_1126c33d0;
      func_0x000107c61168(PTR_PTR_1126c33d0);
      func_0x000107c6148c(puVar52,puVar54);
      if (puVar52 == (undefined1 *)0x0) {
        func_0x000102eddaf8(&puStack_158);
      }
      puStack_2b8 = puVar52;
      func_0x000107c5bf40();
      func_0x000107c61180();
      func_0x000107c61170(puVar52);
    }
  }
  puVar54 = puVar15;
  puVar49 = puStack_2b8;
  func_0x000102f0c074();
  func_0x000107c6142c(puVar15);
  puVar52 = puVar14;
  func_0x000107c3eea8();
  func_0x000107c61180();
  puVar31 = puVar52;
  func_0x000107c5ee30();
  func_0x000107c61170(puVar52);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  puVar52 = puVar31;
  func_0x0001010282b0(puVar31,puVar49);
  if (unaff_x21 != 0) {
    func_0x00010006c090(puVar31,puVar49);
    func_0x000107c6142c(puVar64);
    func_0x000107c61170(puVar39);
    func_0x000107c61574(uVar55);
    func_0x000107c6142c(puVar54);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar14);
    func_0x000107c6142c(PTR___swiftEmptyArrayStorage_11034f1c8);
LAB_102edb470:
    func_0x000107c61170(puStack_2b8);
    return;
  }
  func_0x00010006c090(puVar31);
  if ((ulong)puVar54 >> 0x3e == 0) {
    puVar15 = *(undefined **)((undefined *)((ulong)puVar54 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (undefined *)((ulong)puVar54 & 0xffffffffffffff8);
    if (((ulong)puVar54 & 0x8000000000000000) != 0) {
      puVar15 = puVar54;
    }
    func_0x000107c60480();
  }
  if (puVar15 == (undefined *)0x0) {
    func_0x000107c61170(puVar52);
    ppuStack_2b0 = (undefined1 **)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6142c(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    uVar17 = *(undefined8 *)(uVar55 + 0x38);
    uVar3 = *(undefined8 *)(uVar55 + 0x40);
    uVar46 = *(undefined8 *)(uVar55 + 0x48);
    uVar5 = *(undefined1 *)(uVar55 + 0x50);
    uVar47 = *(undefined8 *)(uVar55 + 0x58);
    uVar6 = *(undefined1 *)(uVar55 + 0x60);
    puVar63 = *(undefined1 **)(uVar55 + 0x68);
    puVar31 = puVar63;
    func_0x000107c61174();
    puVar37 = puVar31;
    func_0x00010011df08();
    func_0x000107c61180();
    puVar16 = puVar37;
    func_0x000107c5faec();
    func_0x000107c61170(puVar37);
    func_0x000107c61434(puVar49);
    puVar37 = puVar49;
    func_0x0001008fc608(puVar16);
    if ((ulong)puVar37 >> 0x3c < 0xf) {
      puVar60 = puVar16;
      func_0x000107c5ee20();
      func_0x000107c5389c(puVar52);
      func_0x000107c61170(puVar60);
      func_0x0001000b44c0(puVar16,puVar37);
    }
    puVar16 = puVar52;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar16 == (undefined1 *)0x0) {
      func_0x000107c6142c(puVar49);
      puVar49 = puVar14;
      func_0x000107c61170();
      FUN_102edd994();
      func_0x000107c613f8(&UNK_1105e5f20,puVar49,0,0);
      *puVar49 = 1;
      func_0x000107c61654();
      func_0x000107c61170(puVar52);
      func_0x000107c61574(uVar55);
      func_0x000107c61170(puVar31);
      func_0x000107c6142c(puVar64);
      func_0x000107c61170(puVar39);
      func_0x000107c6142c(puVar54);
      func_0x000107c61170(puVar14);
      func_0x000107c6142c(PTR___swiftEmptyArrayStorage_11034f1c8);
      goto LAB_102edb470;
    }
    puVar60 = puVar16;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar16);
    puVar40 = PTR_PTR_1126bcf68;
    func_0x000107c610f8();
    func_0x00010006c00c(puVar60,puVar37);
    puVar16 = puVar60;
    func_0x000107c5ee20(puVar60,puVar37);
    func_0x000107c45ae0();
    func_0x000107c61170(puVar16);
    func_0x000107c6142c(puVar49);
    func_0x00010006c090(puVar60,puVar37);
    puStack_110 = puVar52;
    puStack_108 = puVar40;
    uStack_100 = uVar17;
    uStack_f8 = uVar3;
    uStack_f0 = uVar46;
    uStack_e8 = uVar5;
    uStack_e0 = uVar47;
    uStack_d8 = uVar6;
    func_0x000107c61434();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(uVar17);
    ppuVar38 = &puStack_110;
    func_0x000102f0dd84(ppuVar38,param_7,0,1);
    puVar49 = ppuVar38[0xd];
    ppuVar38[0xd] = puVar63;
    func_0x000107c61174(puVar31);
    func_0x000107c61170(puVar49);
    puVar16 = ppuVar38[2];
    func_0x000107c4008c(puVar16);
    func_0x000107c61180();
    puVar49 = puVar16;
    func_0x000107c41844();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    puVar53 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar15 = PTR___sSSN_11034da80;
    puVar58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c53988(puVar49);
    func_0x000107c61170(puVar49);
    func_0x000107c61170(puVar58);
    puVar16 = ppuVar38[2];
    func_0x000107c4008c(puVar16);
    func_0x000107c61180();
    puVar49 = puVar16;
    func_0x000107c41844();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    uVar17 = 0;
    func_0x000102eddb40(0,0x112d51360,&PTR_PTR_1126becd8);
    puVar58 = puVar54;
    func_0x000107c5fc48(puVar54,uVar17);
    func_0x000107c598f8(puVar49);
    func_0x000107c61170(puVar49);
    func_0x000107c61170(puVar58);
    puVar16 = ppuVar38[2];
    func_0x000107c4008c(puVar16);
    func_0x000107c61180();
    puVar49 = puVar16;
    func_0x000107c41844();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    puVar58 = (undefined *)puVar53;
    func_0x000107c5fc48(puVar53,puVar15);
    func_0x000107c57368(puVar49);
    func_0x000107c61170(puVar49);
    func_0x000107c61170(puVar58);
    puVar16 = ppuVar38[2];
    func_0x000107c4008c(puVar16);
    func_0x000107c61180();
    puVar49 = puVar16;
    func_0x000107c41844();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    puVar58 = (undefined *)puVar53;
    func_0x000107c5fc48(puVar53,puVar15);
    func_0x000107c56314(puVar49);
    func_0x000107c61170(puVar49);
    func_0x000107c61170(puVar58);
    FUN_102edd9d4(&puStack_110);
    func_0x000107c61170(puVar40);
    func_0x00010006c090(puVar60,puVar37);
    func_0x000107c61170(puVar31);
    ppuStack_2b0 = ppuVar38;
    FUN_102edaec0(ppuVar38,param_4);
    FUN_102f0bae8();
    func_0x000107c61170(puVar52);
    func_0x000107c6142c(puVar53);
    func_0x000107c613fc(ppuStack_2b0,((ulong)*(uint *)(ppuStack_2b0 + 6) + 7 & 0x1fffffff8) + 8,
                        *(ushort *)((long)ppuStack_2b0 + 0x34) | 7);
    param_1 = 1;
    ppuStack_2b0[3] = (undefined1 *)0x3;
    ppuStack_2b0[2] = (undefined1 *)0x1;
    ppuStack_2b0[4] = (undefined1 *)ppuVar38;
  }
  FUN_102edad78();
  if ((ulong)puVar54 >> 0x3e == 0) {
    puVar15 = *(undefined **)((undefined *)((ulong)puVar54 & 0xffffffffffffff8) + 0x10);
    if (puVar15 != (undefined *)0x0) goto LAB_102edb8bc;
LAB_102edb9b4:
    func_0x000107c6142c(puVar54);
    puVar53 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar15 = (undefined *)((ulong)puVar54 & 0xffffffffffffff8);
    if (((ulong)puVar54 & 0x8000000000000000) != 0) {
      puVar15 = puVar54;
    }
    func_0x000107c60480();
    if (puVar15 == (undefined *)0x0) goto LAB_102edb9b4;
LAB_102edb8bc:
    puVar40 = (undefined *)((ulong)puVar15 & ((long)puVar15 >> 0x3f ^ 0xffffffffffffffffU));
    puStack_1a0 = puVar53;
    func_0x000100403514(0,puVar40,0);
    if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd954);
      (*pcVar7)();
    }
    puVar58 = (undefined *)0x0;
    do {
      puVar53 = puStack_1a0;
      if (((ulong)puVar54 & 0xc000000000000001) == 0) {
        puVar29 = *(undefined **)(puVar54 + (long)puVar58 * 8 + 0x20);
        func_0x000107c61174();
        puVar41 = puVar40;
      }
      else {
        puVar29 = puVar58;
        puVar41 = puVar54;
        func_0x000100fb1534();
      }
      func_0x000107c61174();
      puVar18 = puVar29;
      func_0x000107c5bfec();
      func_0x000107c61180();
      puVar19 = puVar18;
      func_0x000107c5faec();
      puVar40 = puVar41;
      func_0x000107c61170(puVar29);
      func_0x000107c61170(puVar29);
      func_0x000107c61170(puVar18);
      uVar13 = puVar53[2];
      puVar29 = (undefined *)(uVar13 + 1);
      puStack_1a0 = puVar53;
      if (puVar53[3] >> 1 <= uVar13) {
        puVar40 = puVar29;
        func_0x000100403514(1 < puVar53[3],puVar29,1);
      }
      puVar53 = puStack_1a0;
      puVar58 = puVar58 + 1;
      puStack_1a0[2] = (ulong)puVar29;
      puStack_1a0[uVar13 * 2 + 4] = (ulong)puVar19;
      puStack_1a0[uVar13 * 2 + 5] = (ulong)puVar41;
    } while (puVar15 != puVar58);
    func_0x000107c6142c(puVar54);
  }
  puVar56 = puVar53;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar53);
  puVar53 = (ulong *)0x0;
  do {
    if (uVar2 == 0) {
      if (*(ulong **)(uVar51 + 0x10) <= puVar53) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd8c0);
        (*pcVar7)();
      }
      puVar21 = (ulong *)puVar64[(long)((long)puVar53 + 4)];
      func_0x000107c6157c(puVar21);
    }
    else {
      puVar21 = puVar53;
      FUN_102f02a90(puVar53,puVar64);
    }
    if (SCARRY8((long)puVar53,1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd7e8);
      (*pcVar7)();
    }
    puVar59 = (ulong *)((long)puVar53 + 1);
    ppuVar20 = &puStack_1a0;
    puStack_1a0 = puVar21;
    FUN_102ed9524(ppuVar20,puVar56);
    func_0x000107c61574(puVar21);
    if (((ulong)ppuVar20 & 1) != 0) {
      lVar48 = 0;
      uVar61 = 1L << ((ulong)(byte)puVar56[4] & 0x3f);
      uVar13 = 0xffffffffffffffff;
      if (((byte)puVar56[4] & 0x3f) < 6) {
        uVar13 = ~(-1L << (uVar61 & 0x3f));
      }
      uVar13 = uVar13 & puVar56[7];
      goto joined_r0x000102edbbb0;
    }
    puVar53 = (ulong *)((long)puVar53 + 1);
  } while (puVar59 != puVar12);
  func_0x000107c6142c(puVar64);
  func_0x000107c6142c(puVar56);
  func_0x000107c61170(puVar14);
  uVar17 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f113db0);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar17);
  if ((int)param_5 == 0) {
    func_0x000107c61170(puVar39);
    func_0x000107c61574(uVar55);
  }
  else {
    if ((long)puVar12 < 1) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd970);
      (*pcVar7)();
    }
    puVar53 = (ulong *)0x0;
    do {
      if (uVar2 == 0) {
        puVar56 = (ulong *)puVar64[(long)((long)puVar53 + 4)];
        func_0x000107c6157c(puVar56);
      }
      else {
        puVar56 = puVar53;
        FUN_102f02a90(puVar53,puVar64);
      }
      puVar53 = (ulong *)((long)puVar53 + 1);
      uVar17 = 0x112f27e30;
      func_0x0001000285a8(0x112f27e30,&UNK_10db63930);
      func_0x000100087bd4(&puStack_1a0,FUN_102eddd94,puVar56,uVar17);
      puVar21 = puStack_1a0;
      func_0x000107c3f474(puStack_1a0);
      func_0x000107c61574(puVar56);
      func_0x000107c61170(puVar21);
    } while (puVar12 != puVar53);
    func_0x000107c61170(puVar39);
    func_0x000107c61574(uVar55);
  }
  func_0x000107c61170(puVar14);
  puVar14 = puStack_2b8;
LAB_102edbfe8:
  func_0x000107c61170(puVar14);
  return;
  while( true ) {
    func_0x000107c61170(puStack_2b8);
    puVar52 = puVar52 + 1;
    if (puVar59 == puVar21) break;
LAB_102edb278:
    if (((ulong)puVar53 & 0xc000000000000001) == 0) {
      if (*(undefined1 **)(((ulong)puVar53 & 0xffffffffffffff8) + 0x10) <= puVar52) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd900);
        (*pcVar7)();
      }
      puStack_2b8 = (undefined1 *)puVar53[(long)(puVar52 + 4)];
      func_0x000107c61174();
    }
    else {
      puStack_2b8 = puVar52;
      param_6 = puVar53;
      func_0x000100fb1534(puVar52,puVar53);
    }
    puVar59 = (ulong *)(puVar52 + 1);
    if (SCARRY8((long)puVar52,1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd8fc);
      (*pcVar7)();
    }
    puVar31 = puStack_2b8;
    func_0x000107c5d0f0();
    if ((int)puVar31 == 2) {
      func_0x000107c6142c(puVar53);
      puVar52 = puVar14;
      func_0x000107c61174();
      func_0x000107c61174();
      puVar31 = puVar52;
      func_0x000107c3eea8();
      func_0x000107c61180();
      puVar49 = puVar31;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar31);
      func_0x000107c610f8(PTR_PTR_1126b25c0);
      puVar31 = puVar49;
      func_0x0001010282b0(puVar49,param_6);
      if (unaff_x21 != 0) {
        func_0x00010006c090(puVar49,param_6);
        func_0x000107c6142c(PTR___swiftEmptyArrayStorage_11034f1c8);
        func_0x000107c6142c(puVar64);
        func_0x000107c61170(puVar39);
        func_0x000107c61574(uVar55);
        func_0x000107c61170(puVar52);
        func_0x000107c61170(puVar52);
        func_0x000107c61170(puStack_2b8);
        goto LAB_102edb470;
      }
      func_0x00010006c090(puVar49,param_6);
      uStack_198 = *(undefined8 *)(uVar55 + 0x30);
      puStack_1a0 = *(ulong **)(uVar55 + 0x28);
      uStack_188 = *(undefined8 *)(uVar55 + 0x40);
      param_2 = *(undefined **)(uVar55 + 0x38);
      uStack_180 = *(undefined8 *)(uVar55 + 0x48);
      uStack_178 = (undefined1)*(undefined8 *)(uVar55 + 0x50);
      uStack_16f = (undefined7)*(undefined8 *)(uVar55 + 0x59);
      uStack_168 = (undefined1)((ulong)*(undefined8 *)(uVar55 + 0x59) >> 0x38);
      uStack_177 = (undefined7)*(undefined8 *)(uVar55 + 0x51);
      uStack_170 = (undefined1)((ulong)*(undefined8 *)(uVar55 + 0x51) >> 0x38);
      puStack_190 = param_2;
      FUN_1029b8520();
      func_0x000107c613fc();
      *(undefined8 *)(puVar49 + 0x18) = 3;
      *(undefined8 *)(puVar49 + 0x10) = 1;
      *(undefined1 **)(puVar49 + 0x20) = puStack_2b8;
      puVar60 = *(undefined1 **)(uVar55 + 0x68);
      func_0x000107c61174();
      plVar34 = alStack_200;
      FUN_102edda34(&puStack_1a0);
      puVar37 = puVar60;
      func_0x000107c61174();
      puVar16 = puVar37;
      func_0x00010011df08();
      func_0x000107c61180();
      puVar63 = puVar16;
      func_0x000107c5faec();
      func_0x000107c61170(puVar16);
      func_0x000107c61434(plVar34);
      plVar45 = plVar34;
      func_0x0001008fc608(puVar63);
      if ((ulong)plVar45 >> 0x3c < 0xf) {
        puVar16 = puVar63;
        func_0x000107c5ee20();
        func_0x000107c5389c(puVar31);
        func_0x000107c61170(puVar16);
        func_0x0001000b44c0(puVar63,plVar45);
      }
      puVar16 = puVar31;
      func_0x000107c41214();
      func_0x000107c61180();
      if (puVar16 == (undefined1 *)0x0) {
        func_0x000107c6142c(plVar34);
        func_0x000107c61170(puVar52);
        puVar14 = puStack_2b8;
        func_0x000107c61170();
        FUN_102edd994();
        func_0x000107c613f8(&UNK_1105e5f20,puVar14,0,0);
        *puVar14 = 1;
        func_0x000107c61654();
        func_0x000107c61574(puVar49);
        func_0x000107c61170(puVar37);
        func_0x000107c61170(puVar39);
        func_0x000107c61574(uVar55);
        func_0x000107c61170(puVar52);
        func_0x000107c61170(puVar31);
        func_0x000107c61170(puStack_2b8);
        FUN_102edd9d4(&puStack_1a0);
        func_0x000107c6142c(PTR___swiftEmptyArrayStorage_11034f1c8);
        func_0x000107c6142c(puVar64);
        return;
      }
      puVar63 = puVar16;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar16);
      puVar40 = PTR_PTR_1126bcf68;
      func_0x000107c610f8();
      func_0x00010006c00c(puVar63,plVar45);
      puVar16 = puVar63;
      func_0x000107c5ee20(puVar63,plVar45);
      func_0x000107c45ae0();
      func_0x000107c61170(puVar16);
      func_0x000107c6142c(plVar34);
      func_0x00010006c090(puVar63,plVar45);
      puVar15 = puStack_190;
      uStack_a0 = CONCAT71(uStack_16f,uStack_170);
      puStack_c0 = puStack_190;
      uStack_b0 = uStack_180;
      uStack_b8 = uStack_188;
      uStack_a8 = uStack_178;
      uStack_98 = uStack_168;
      puStack_d0 = puVar31;
      puStack_c8 = puVar40;
      func_0x000107c61434(uStack_180);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174(puVar15);
      ppuVar38 = &puStack_d0;
      func_0x000102f0dd84(ppuVar38,param_7,0,0);
      puVar16 = ppuVar38[0xd];
      ppuVar38[0xd] = puVar60;
      func_0x000107c61174();
      func_0x000107c61170(puVar16);
      puVar60 = ppuVar38[2];
      func_0x000107c4008c(puVar60);
      func_0x000107c61180();
      puVar16 = puVar60;
      func_0x000107c41844();
      func_0x000107c61180();
      func_0x000107c61170(puVar60);
      puVar54 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar15 = PTR___sSSN_11034da80;
      puVar58 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
      func_0x000107c53988(puVar16);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar58);
      puVar60 = ppuVar38[2];
      func_0x000107c4008c(puVar60);
      func_0x000107c61180();
      puVar16 = puVar60;
      func_0x000107c41844();
      func_0x000107c61180();
      func_0x000107c61170(puVar60);
      uVar17 = 0;
      func_0x000102eddb40(0,0x112d51360,&PTR_PTR_1126becd8);
      puVar60 = puVar49;
      func_0x000107c5fc48(puVar49,uVar17);
      func_0x000107c598f8(puVar16);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar60);
      puVar60 = ppuVar38[2];
      func_0x000107c4008c(puVar60);
      func_0x000107c61180();
      puVar16 = puVar60;
      func_0x000107c41844();
      func_0x000107c61180();
      func_0x000107c61170(puVar60);
      puVar58 = puVar54;
      func_0x000107c5fc48(puVar54,puVar15);
      func_0x000107c57368(puVar16);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar58);
      puVar60 = ppuVar38[2];
      func_0x000107c4008c(puVar60);
      func_0x000107c61180();
      puVar16 = puVar60;
      func_0x000107c41844();
      func_0x000107c61180();
      func_0x000107c61170(puVar60);
      puVar58 = puVar54;
      func_0x000107c5fc48(puVar54,puVar15);
      func_0x000107c56314(puVar16);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar58);
      FUN_102edd9d4(&puStack_d0);
      func_0x000107c61170(puVar40);
      func_0x00010006c090(puVar63,plVar45);
      func_0x000107c61574(puVar49);
      func_0x000107c61170(puVar37);
      FUN_102edd9d4(&puStack_1a0);
      ppuStack_2b0 = ppuVar38;
      FUN_102edaec0(ppuVar38,param_4);
      FUN_102f0bae8();
      func_0x000107c6142c(puVar54);
      func_0x000107c613fc(ppuStack_2b0,((ulong)*(uint *)(ppuStack_2b0 + 6) + 7 & 0x1fffffff8) + 8,
                          *(ushort *)((long)ppuStack_2b0 + 0x34) | 7);
      param_1 = 1;
      ppuStack_2b0[3] = (undefined1 *)0x3;
      ppuStack_2b0[2] = (undefined1 *)0x1;
      ppuStack_2b0[4] = (undefined1 *)ppuVar38;
      func_0x000107c6157c(ppuVar38);
      FUN_102edad78(ppuStack_2b0,param_3);
      func_0x000107c61170(puStack_2b8);
      func_0x000107c61170(puVar52);
      func_0x000107c61170(puVar31);
      func_0x000107c61574(ppuVar38);
      goto LAB_102edc00c;
    }
  }
LAB_102edbff8:
  func_0x000107c6142c(puVar53);
  puStack_2b8 = (undefined1 *)0x0;
  ppuStack_2b0 = (undefined1 **)PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_102edc00c:
  if (puVar56 == (ulong *)0x0) {
    puVar56 = (ulong *)0x0;
    uVar13 = param_3[8];
    if (uVar13 != 0) goto LAB_102edc030;
    lVar48 = 0;
  }
  else if ((ulong)puVar56 >> 0x3e == 0) {
    puVar56 = (ulong *)((ulong *)((ulong)puVar56 & 0xffffffffffffff8))[2];
    uVar13 = param_3[8];
    lVar48 = 0;
    if (uVar13 != 0) {
LAB_102edc030:
      lVar48 = *(long *)(*(long *)(uVar13 + _DAT_11307fc78) + 0x10);
    }
  }
  else {
    if (-1 < (long)puVar56) {
      puVar56 = (ulong *)((ulong)puVar56 & 0xffffffffffffff8);
    }
    func_0x000107c60480();
    uVar13 = param_3[8];
    if (uVar13 != 0) goto LAB_102edc030;
    lVar48 = 0;
  }
  if (SCARRY8((long)puVar56,lVar48)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd974);
    (*pcVar7)();
  }
  if (((undefined1 *)((long)puVar56 + lVar48) == (undefined1 *)0x1) &&
     (puVar53 = param_3, FUN_102f0e818(), ((ulong)puVar53 & 1) != 0)) {
    func_0x000107c6142c(puVar64);
    uVar17 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f113db0);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar17);
    if ((int)param_5 != 0) {
      if (0 < (long)puVar12) {
        puVar53 = (ulong *)0x0;
        do {
          if (uVar2 == 0) {
            puVar56 = (ulong *)puVar64[(long)((long)puVar53 + 4)];
            func_0x000107c6157c(puVar56);
          }
          else {
            puVar56 = puVar53;
            FUN_102f02a90(puVar53,puVar64);
          }
          puVar53 = (ulong *)((long)puVar53 + 1);
          uVar17 = 0x112f27e30;
          func_0x0001000285a8(0x112f27e30,&UNK_10db63930);
          func_0x000100087bd4(&puStack_1a0,0x102eddda8,puVar56,uVar17);
          puVar21 = puStack_1a0;
          func_0x000107c3f474(puStack_1a0);
          func_0x000107c61574(puVar56);
          func_0x000107c61170(puVar21);
        } while (puVar12 != puVar53);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(puStack_2b8);
        func_0x000107c61170(puVar39);
        func_0x000107c61574(uVar55);
        return;
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd994);
      (*pcVar7)();
    }
    func_0x000107c61170(puVar39);
    func_0x000107c61574(uVar55);
    func_0x000107c61170(puStack_2b8);
    goto LAB_102edbfe8;
  }
  puVar53 = (ulong *)0x0;
  do {
    if (uVar2 == 0) {
      if (*(ulong **)(uVar51 + 0x10) <= puVar53) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd914);
        (*pcVar7)();
      }
      puVar56 = (ulong *)puVar64[(long)((long)puVar53 + 4)];
      func_0x000107c6157c();
    }
    else {
      puVar56 = puVar53;
      FUN_102f02a90(puVar53,puVar64);
    }
    if (SCARRY8((long)puVar53,1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd8f8);
      (*pcVar7)();
    }
    puVar53 = (ulong *)((long)puVar53 + 1);
    uVar61 = puVar56[2];
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar13 = uVar61;
    func_0x000107c41844();
    func_0x000107c61180();
    func_0x000107c61170(uVar61);
    uVar61 = uVar13;
    func_0x000107c5bf1c();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    uVar17 = 0;
    func_0x000102eddb40(0,0x112d51360,&PTR_PTR_1126becd8);
    uVar13 = uVar61;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar61);
    uVar61 = uVar13 & 0xffffffffffffff8;
    if (uVar13 >> 0x3e == 0) {
      uVar62 = *(ulong *)(uVar61 + 0x10);
    }
    else {
      uVar62 = uVar61;
      if (0x7fffffffffffffff < uVar13) {
        uVar62 = uVar13;
      }
      func_0x000107c60480();
    }
    puVar21 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar62 != 0) {
      uVar57 = 0;
      do {
        while( true ) {
          if ((uVar13 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar61 + 0x10) <= uVar57) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd6f4);
              (*pcVar7)();
            }
            uVar30 = *(ulong *)(uVar13 + uVar57 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar30 = uVar57;
            func_0x000100fb1534(uVar57,uVar13);
          }
          uVar22 = uVar57 + 1;
          if (SCARRY8(uVar57,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd6f0);
            (*pcVar7)();
          }
          uVar27 = uVar30;
          func_0x000107c5d0f0();
          if ((int)uVar27 != 2) break;
          func_0x000107c61170(uVar30);
          uVar57 = uVar57 + 1;
          if (uVar22 == uVar62) goto LAB_102edc190;
        }
        puVar59 = puVar21;
        func_0x000107c61558();
        puStack_1a0 = puVar21;
        if (((ulong)puVar59 & 1) == 0) {
          func_0x000102f03198(0,puVar21[2] + 1,1);
        }
        uVar57 = puStack_1a0[2];
        if (puStack_1a0[3] >> 1 <= uVar57) {
          func_0x000102f03198(1 < puStack_1a0[3],uVar57 + 1,1);
        }
        puStack_1a0[2] = uVar57 + 1;
        puStack_1a0[uVar57 + 4] = uVar30;
        puVar21 = puStack_1a0;
        uVar57 = uVar22;
      } while (uVar22 != uVar62);
    }
LAB_102edc190:
    func_0x000107c6142c(uVar13);
    uVar61 = puVar56[2];
    func_0x000107c4008c(uVar61);
    func_0x000107c61180();
    uVar13 = uVar61;
    func_0x000107c41844();
    func_0x000107c61180();
    func_0x000107c61170(uVar61);
    puVar59 = puVar21;
    func_0x000107c5fc48(puVar21,uVar17);
    func_0x000107c61574(puVar21);
    func_0x000107c598f8(uVar13);
    func_0x000107c61574(puVar56);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(puVar59);
  } while (puVar53 != puVar12);
  param_6 = param_3;
  FUN_102edad78(puVar64,param_3);
  goto LAB_102edc410;
joined_r0x000102edbbb0:
  while (uVar13 != 0) {
    uVar62 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar62 = (uVar62 & 0xcccccccccccccccc) >> 2 | (uVar62 & 0x3333333333333333) << 2;
    uVar62 = (uVar62 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar62 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar62 = (uVar62 & 0xff00ff00ff00ff00) >> 8 | (uVar62 & 0xff00ff00ff00ff) << 8;
    uVar62 = (uVar62 & 0xffff0000ffff0000) >> 0x10 | (uVar62 & 0xffff0000ffff) << 0x10;
    uVar13 = uVar13 - 1 & uVar13;
    puVar53 = (ulong *)(puVar56[6] + LZCOUNT(uVar62 >> 0x20 | uVar62 << 0x20) * 0x10 +
                       lVar48 * 0x400);
    uVar62 = *puVar53;
    uVar57 = puVar53[1];
    func_0x000107c61434();
    puVar53 = (ulong *)0x0;
    do {
      if (uVar2 == 0) {
        if (*(ulong **)(uVar51 + 0x10) <= puVar53) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd8c8);
          (*pcVar7)();
        }
        puVar21 = (ulong *)puVar64[(long)((long)puVar53 + 4)];
        func_0x000107c6157c();
      }
      else {
        puVar21 = puVar53;
        FUN_102f02a90(puVar53,puVar64);
      }
      if (SCARRY8((long)puVar53,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd7ec);
        (*pcVar7)();
      }
      puVar53 = (ulong *)((long)puVar53 + 1);
      uVar22 = puVar21[2];
      func_0x000107c4008c();
      func_0x000107c61180();
      uVar30 = uVar22;
      func_0x000107c41844();
      func_0x000107c61180();
      func_0x000107c61170(uVar22);
      uVar22 = uVar30;
      func_0x000107c5bf1c();
      func_0x000107c61180();
      func_0x000107c61170(uVar30);
      uVar23 = 0;
      func_0x000102eddb40(0,0x112d51360,&PTR_PTR_1126becd8);
      uVar27 = uVar22;
      uVar30 = uVar23;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar22);
      if (uVar27 >> 0x3e == 0) {
        uVar22 = *(ulong *)((uVar27 & 0xffffffffffffff8) + 0x10);
        if (uVar22 == 0) goto LAB_102edbc0c;
LAB_102edbd80:
        uStack_218 = uVar27 & 0xffffffffffffff8;
        puStack_248 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar50 = 0;
        do {
          while( true ) {
            if ((uVar27 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uStack_218 + 0x10) <= uVar50) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x102edc404);
                (*pcVar7)();
              }
              uVar24 = *(ulong *)(uVar27 + uVar50 * 8 + 0x20);
              func_0x000107c61174();
              uVar42 = uVar30;
            }
            else {
              uVar24 = uVar50;
              uVar42 = uVar27;
              func_0x000100fb1534();
            }
            uVar1 = uVar50 + 1;
            if (SCARRY8(uVar50,1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x102edc400);
              (*pcVar7)();
            }
            uVar25 = uVar24;
            func_0x000107c5bfec();
            func_0x000107c61180();
            uVar26 = uVar25;
            func_0x000107c5faec();
            uVar30 = uVar42;
            func_0x000107c61170(uVar25);
            if ((uVar26 != uVar62) || (uVar42 != uVar57)) break;
            func_0x000107c61170(uVar24);
            func_0x000107c6142c(uVar42);
LAB_102edbdac:
            uVar50 = uVar50 + 1;
            if (uVar1 == uVar22) goto LAB_102edbc18;
          }
          uVar30 = uVar42;
          func_0x000107c605b8(uVar26,uVar42,uVar62,uVar57,0);
          func_0x000107c6142c(uVar42);
          if ((uVar26 & 1) != 0) {
            func_0x000107c61170(uVar24);
            goto LAB_102edbdac;
          }
          puVar59 = puStack_248;
          func_0x000107c61558();
          puStack_1a0 = puStack_248;
          if (((ulong)puVar59 & 1) == 0) {
            uVar30 = puStack_248[2] + 1;
            func_0x000102f03198(0,uVar30,1);
          }
          uVar42 = puStack_1a0[2];
          uVar50 = uVar42 + 1;
          if (puStack_1a0[3] >> 1 <= uVar42) {
            uVar30 = uVar50;
            func_0x000102f03198(1 < puStack_1a0[3],uVar50,1);
          }
          puStack_1a0[2] = uVar50;
          puStack_1a0[uVar42 + 4] = uVar24;
          uVar50 = uVar1;
          puStack_248 = puStack_1a0;
        } while (uVar1 != uVar22);
      }
      else {
        uVar22 = uVar27 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar27) {
          uVar22 = uVar27;
        }
        func_0x000107c60480();
        if (uVar22 != 0) goto LAB_102edbd80;
LAB_102edbc0c:
        puStack_248 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
      }
LAB_102edbc18:
      func_0x000107c6142c(uVar27);
      uVar22 = puVar21[2];
      func_0x000107c4008c(uVar22);
      func_0x000107c61180();
      uVar30 = uVar22;
      func_0x000107c41844();
      func_0x000107c61180();
      func_0x000107c61170(uVar22);
      puVar59 = puStack_248;
      func_0x000107c5fc48(puStack_248,uVar23);
      func_0x000107c61574(puStack_248);
      func_0x000107c598f8(uVar30);
      func_0x000107c61574(puVar21);
      func_0x000107c61170(uVar30);
      func_0x000107c61170(puVar59);
    } while (puVar53 != puVar12);
    func_0x000107c6142c(uVar57);
  }
  bVar8 = SCARRY8(lVar48,1);
  lVar48 = lVar48 + 1;
  if (bVar8) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd8c4);
    (*pcVar7)();
  }
  if (lVar48 < (long)(uVar61 + 0x3f >> 6)) {
    uVar13 = (puVar56 + 7)[lVar48];
    goto joined_r0x000102edbbb0;
  }
  func_0x000107c61574(puVar56);
  param_6 = param_3;
  FUN_102edad78(puVar64,param_3);
  func_0x000107c61170(puVar14);
LAB_102edc410:
  func_0x000107c61170(puStack_2b8);
LAB_102edc41c:
  uVar61 = *(ulong *)(uVar55 + 0x10);
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar13 = uVar61;
  func_0x000107c41844();
  func_0x000107c61180();
  func_0x000107c61170(uVar61);
  func_0x000107c61174();
  puVar52 = puVar14;
  func_0x000107c3eea8();
  func_0x000107c61180();
  puVar31 = puVar52;
  func_0x000107c5ee30();
  func_0x000107c61170(puVar52);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  puStack_2b8 = puVar31;
  func_0x0001010282b0(puVar31,param_6);
  if (unaff_x21 == 0) {
    func_0x00010006c090(puVar31,param_6);
    func_0x000107c61170(puVar14);
  }
  else {
    func_0x00010006c090(puVar31,param_6);
    func_0x000107c614ac(unaff_x21);
    func_0x000107c61170(puVar14);
    puStack_2b8 = (undefined1 *)0x0;
  }
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar54 = (undefined *)param_3[7];
  if (puVar54 == (undefined *)0x0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c615f0(puVar54);
    puVar40 = PTR_PTR_1126c33d0;
    func_0x000107c61168(PTR_PTR_1126c33d0);
    puVar58 = puVar54;
    func_0x000107c6148c(puVar54,puVar40);
    if (puVar58 == (undefined *)0x0) {
      func_0x000107c615e8(puVar54);
      puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c4c558();
      func_0x000107c61180();
      func_0x000107c615e8(puVar54);
      puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar58 != (undefined *)0x0) {
        puVar54 = puVar58;
        func_0x000107c5fc54(puVar58,PTR___sypN_11034f1a8 + 8);
        func_0x000107c61170(puVar58);
        puVar40 = puVar54;
        func_0x000101158fcc();
        func_0x000107c6142c(puVar54);
        if (puVar40 != (undefined *)0x0) {
          puStack_58 = puVar40;
        }
      }
    }
  }
  uVar57 = param_3[8];
  uVar61 = uVar13;
  func_0x000107c5bf1c();
  func_0x000107c61180();
  ppuVar28 = (undefined **)0x0;
  func_0x000102eddb40(0,0x112d51360,&PTR_PTR_1126becd8);
  uVar62 = uVar61;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar61);
  puVar53 = param_3;
  func_0x000102ed9be0();
  uVar10 = (undefined4)param_3[2];
  func_0x000107c51edc();
  puVar54 = PTR_PTR_1126c4288;
  func_0x000107c610f8();
  func_0x000107c453e4();
  apuStack_1c0[0] = puVar15;
  if (uVar57 != 0) {
    puVar15 = *(undefined **)(uVar57 + _DAT_11307fc80);
    func_0x000107c61434(puVar15);
  }
  if ((ulong)puVar15 >> 0x3e == 0) {
    puVar40 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar40 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar15) {
      puVar40 = puVar15;
    }
    func_0x000107c60480();
  }
  if (puVar40 != (undefined *)0x0) {
    if ((long)puVar40 < 1) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd94c);
      (*pcVar7)();
    }
    puVar58 = (undefined *)0x0;
    do {
      if (((ulong)puVar15 & 0xc000000000000001) == 0) {
        puVar29 = *(undefined **)(puVar15 + (long)puVar58 * 8 + 0x20);
        func_0x000107c61174(puVar29);
      }
      else {
        puVar29 = puVar58;
        func_0x0001011f4b2c(puVar58,puVar15);
      }
      puVar58 = puVar58 + 1;
      ppuStack_1f0 = apuStack_1c0;
      puStack_190 = puVar54;
      func_0x0001044c2e48(FUN_102edda08,&puStack_1a0,FUN_102edda2c,alStack_200);
      func_0x000107c61170(puVar29);
    } while (puVar40 != puVar58);
  }
  func_0x000107c6142c(puVar15);
  puVar15 = apuStack_1c0[0];
  puVar40 = apuStack_1c0[0];
  func_0x000107c5fc48(apuStack_1c0[0],PTR___sSSN_11034da80);
  puVar58 = puVar54;
  func_0x000107c30880(puVar54,puVar40);
  func_0x000107c61180();
  func_0x000107c61170(puVar40);
  func_0x000107c61170(puVar58);
  if (*(long *)(puStack_58 + 0x10) != 0) {
    func_0x000107c30888(puVar54,1);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  if (uVar62 >> 0x3e == 0) {
    uVar61 = *(ulong *)((uVar62 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar61 = uVar62 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar62) {
      uVar61 = uVar62;
    }
    func_0x000107c60480();
  }
  if (uVar61 != 0) {
    if ((long)uVar61 < 1) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd950);
      (*pcVar7)();
    }
    func_0x000107c61434(uVar62);
    uVar57 = 0;
    do {
      if ((uVar62 & 0xc000000000000001) == 0) {
        uVar30 = *(ulong *)(uVar62 + uVar57 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar30 = uVar57;
        func_0x000100fb1534(uVar57,uVar62);
      }
      uVar22 = uVar30;
      func_0x000107c5d0f0();
      iVar11 = (int)uVar22;
      if (iVar11 < 3) {
        if (iVar11 == 1) {
          func_0x000107c30890(puVar54,1);
        }
        else {
          if (iVar11 != 2) goto LAB_102edc81c;
          func_0x000107c3088c(puVar54,1);
        }
      }
      else if ((iVar11 == 3) || ((iVar11 != 4 && (iVar11 != 6)))) {
LAB_102edc81c:
        func_0x000107c30894(puVar54,1);
      }
      else {
        func_0x000107c30898(puVar54,1);
      }
      uVar57 = uVar57 + 1;
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(uVar30);
    } while (uVar61 != uVar57);
    func_0x000107c6142c(uVar62);
  }
  puVar40 = puVar54;
  func_0x000107c3087c();
  func_0x000107c61180();
  if ((((ulong)puVar53 & 1) == 0) ||
     ((puVar58 = puVar40, func_0x000107c4a1f8(), ((ulong)puVar58 & 1) == 0 &&
      ((puVar58 = puVar40, func_0x000107c30874(), (int)puVar58 == 0 ||
       (uVar61 = param_5, func_0x000108f49514(), (uVar61 & 1) == 0)))))) {
    if (puStack_2b8 == (undefined1 *)0x0) {
      puVar52 = (undefined1 *)0x0;
    }
    else {
      puVar52 = puStack_2b8;
      FUN_102eda0f4(puStack_2b8);
    }
    puVar58 = PTR_PTR_1126da108;
    func_0x000107c61168();
    FUN_102eda3f0(puStack_2b8,uVar10,param_5);
    if (puStack_2b8 != (undefined1 *)0x0) {
      puVar31 = puStack_2b8;
      func_0x000107c61174(puStack_2b8);
      FUN_102eda1ac();
      puVar49 = puVar31;
      FUN_102eda0f4(puVar31);
      func_0x000107c5de20(param_1,param_2,puVar58);
      func_0x000107c61170(puVar31);
      func_0x000107c61170(puVar49);
    }
    func_0x000107c42658();
    func_0x000107c6142c(puVar15);
    func_0x000107c61170(puVar40);
    func_0x000107c61170(puVar52);
    func_0x000107c61170(puVar54);
    func_0x000107c6142c(uVar62);
    func_0x000107c6142c(puStack_58);
    if (((ulong)puVar58 & 1) == 0) goto LAB_102edd150;
  }
  else {
    func_0x000107c6142c(puVar15);
    func_0x000107c61170(puVar54);
    func_0x000107c61170(puVar40);
    func_0x000107c6142c(uVar62);
    func_0x000107c6142c(puStack_58);
  }
  lVar48 = 4;
  puVar53 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    uVar61 = lVar48 - 4;
    if (uVar2 == 0) {
      if (*(ulong *)(uVar51 + 0x10) <= uVar61) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd8f4);
        (*pcVar7)();
      }
      uVar62 = puVar64[lVar48];
      func_0x000107c6157c(uVar62);
    }
    else {
      uVar62 = uVar61;
      FUN_102f02a90(uVar61,puVar64);
    }
    if (SCARRY8(uVar61,1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102edd7f0);
      (*pcVar7)();
    }
    uVar17 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f113db0);
    uVar61 = param_5;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar17);
    if ((int)uVar61 != 0) {
      uVar17 = 0x112f27e30;
      func_0x0001000285a8(0x112f27e30,&UNK_10db63930);
      func_0x000100087bd4(&puStack_1a0,FUN_102edda90,uVar62,uVar17);
      puVar56 = puStack_1a0;
      func_0x000107c3f474(puStack_1a0);
      func_0x000107c61170(puVar56);
    }
    puVar31 = *(undefined1 **)(uVar62 + 0x10);
    func_0x000107c4008c();
    func_0x000107c61180();
    puVar52 = puVar31;
    func_0x000107c41844();
    func_0x000107c61180();
    func_0x000107c61170(puVar31);
    uStack_198 = *(undefined8 *)(uVar62 + 0x30);
    puVar56 = *(ulong **)(uVar62 + 0x28);
    uStack_188 = *(undefined8 *)(uVar62 + 0x40);
    puStack_190 = *(undefined **)(uVar62 + 0x38);
    uStack_180 = *(undefined8 *)(uVar62 + 0x48);
    uStack_178 = (undefined1)*(undefined8 *)(uVar62 + 0x50);
    uStack_16f = (undefined7)*(undefined8 *)(uVar62 + 0x59);
    uStack_168 = (undefined1)((ulong)*(undefined8 *)(uVar62 + 0x59) >> 0x38);
    uStack_177 = (undefined7)*(undefined8 *)(uVar62 + 0x51);
    uStack_170 = (undefined1)((ulong)*(undefined8 *)(uVar62 + 0x51) >> 0x38);
    puStack_1a0 = puVar56;
    FUN_102edda34(&puStack_1a0,alStack_200);
    func_0x000107c40794(puVar56);
    func_0x000107c60234(apuStack_1c0);
    func_0x000107c615e8(puVar56);
    uVar17 = 0;
    func_0x000102eddb40(0,0x112d50c78,&PTR_PTR_1126b25c0);
    ppuVar43 = apuStack_1c0;
    func_0x000107c6147c(alStack_200,ppuVar43,PTR___sypN_11034f1a8 + 8,uVar17,7);
    lVar33 = alStack_200[0];
    puVar31 = puVar52;
    func_0x000107c40704();
    func_0x000107c61180();
    ppuVar44 = (undefined **)PTR___sSSN_11034da80;
    puVar49 = puVar31;
    if (puVar31 == (undefined1 *)0x0) {
      func_0x000107c5fc54();
      puVar49 = puVar31;
      func_0x000107c5fc48();
      func_0x000107c6142c(puVar31);
      ppuVar43 = ppuVar44;
    }
    puVar31 = puVar52;
    func_0x000107c5bf1c();
    func_0x000107c61180();
    puVar37 = puVar31;
    if (puVar31 == (undefined1 *)0x0) {
      func_0x000107c5fc54();
      puVar37 = puVar31;
      ppuVar43 = ppuVar28;
      func_0x000107c5fc48();
      func_0x000107c6142c(puVar31);
    }
    puVar31 = puVar52;
    func_0x000107c4e6d0();
    func_0x000107c61180();
    ppuVar44 = (undefined **)PTR___sSSN_11034da80;
    puVar16 = puVar31;
    if (puVar31 == (undefined1 *)0x0) {
      func_0x000107c5fc54();
      puVar16 = puVar31;
      func_0x000107c5fc48();
      func_0x000107c6142c(puVar31);
      ppuVar43 = ppuVar44;
    }
    puVar31 = puVar52;
    func_0x000107c4c558();
    func_0x000107c61180();
    ppuVar44 = (undefined **)PTR___sSSN_11034da80;
    puVar63 = puVar31;
    if (puVar31 == (undefined1 *)0x0) {
      func_0x000107c5fc54();
      puVar63 = puVar31;
      func_0x000107c5fc48();
      func_0x000107c6142c(puVar31);
      ppuVar43 = ppuVar44;
    }
    puVar31 = puVar63;
    func_0x00010011df08();
    func_0x000107c61180();
    puVar60 = puVar31;
    func_0x000107c5faec();
    func_0x000107c61170(puVar31);
    func_0x000107c61434(ppuVar43);
    ppuVar44 = ppuVar43;
    func_0x0001008fc608(puVar60);
    if ((ulong)ppuVar44 >> 0x3c < 0xf) {
      puVar31 = puVar60;
      func_0x000107c5ee20();
      func_0x000107c5389c(lVar33);
      func_0x000107c61170(puVar31);
      func_0x0001000b44c0(puVar60,ppuVar44);
    }
    lVar35 = lVar33;
    func_0x000107c41214();
    func_0x000107c61180();
    if (lVar35 == 0) {
      func_0x000107c6142c(ppuVar43);
      func_0x000107c61170(puVar49);
      func_0x000107c61170(puVar37);
      func_0x000107c61170(puVar16);
      func_0x000107c61170();
      FUN_102edd994();
      func_0x000107c613f8(&UNK_1105e5f20,puVar63,0,0);
      *puVar63 = 1;
      func_0x000107c61654();
      func_0x000107c61170(lVar33);
      FUN_102edd9d4(&puStack_1a0);
      func_0x000107c6142c(puVar53);
      func_0x000107c6142c(puVar64);
      func_0x000107c6142c(ppuStack_2b0);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(puVar39);
      func_0x000107c61574(uVar55);
      func_0x000107c61574(uVar62);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(puVar52);
      goto LAB_102edb470;
    }
    lVar32 = lVar35;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar35);
    puVar54 = PTR_PTR_1126bcf68;
    func_0x000107c610f8();
    func_0x00010006c00c(lVar32,ppuVar44);
    lVar35 = lVar32;
    func_0x000107c5ee20(lVar32,ppuVar44);
    func_0x000107c45ae0();
    func_0x000107c61170(lVar35);
    func_0x000107c6142c(ppuVar43);
    func_0x00010006c090(lVar32,ppuVar44);
    puVar15 = puStack_190;
    uStack_120 = CONCAT71(uStack_16f,uStack_170);
    lStack_150 = lVar33;
    puStack_140 = puStack_190;
    uStack_130 = uStack_180;
    uStack_138 = uStack_188;
    uStack_128 = uStack_178;
    uStack_118 = uStack_168;
    puStack_148 = puVar54;
    func_0x000107c61434(uStack_180);
    func_0x000107c61174();
    func_0x000107c61174(puVar54);
    func_0x000107c61174(puVar15);
    plVar34 = &lStack_150;
    func_0x000102f0dd84(plVar34,param_7,0,0);
    lVar35 = plVar34[0xd];
    plVar34[0xd] = 0;
    func_0x000107c61170(lVar35);
    lVar36 = plVar34[2];
    func_0x000107c4008c(lVar36);
    func_0x000107c61180();
    lVar35 = lVar36;
    func_0x000107c41844();
    func_0x000107c61180();
    func_0x000107c61170(lVar36);
    func_0x000107c53988(lVar35);
    func_0x000107c61170(lVar35);
    func_0x000107c61170(puVar49);
    lVar36 = plVar34[2];
    func_0x000107c4008c(lVar36);
    func_0x000107c61180();
    lVar35 = lVar36;
    func_0x000107c41844();
    func_0x000107c61180();
    func_0x000107c61170(lVar36);
    func_0x000107c598f8(lVar35);
    func_0x000107c61170(lVar35);
    func_0x000107c61170(puVar37);
    lVar36 = plVar34[2];
    func_0x000107c4008c(lVar36);
    func_0x000107c61180();
    lVar35 = lVar36;
    func_0x000107c41844();
    func_0x000107c61180();
    func_0x000107c61170(lVar36);
    func_0x000107c57368(lVar35);
    func_0x000107c61170(lVar35);
    func_0x000107c61170(puVar16);
    lVar36 = plVar34[2];
    func_0x000107c4008c(lVar36);
    func_0x000107c61180();
    lVar35 = lVar36;
    func_0x000107c41844();
    func_0x000107c61180();
    func_0x000107c61170(lVar36);
    func_0x000107c56314(lVar35);
    func_0x000107c61170(lVar35);
    func_0x000107c61170(puVar63);
    FUN_102edd9d4(&lStack_150);
    func_0x000107c61170(puVar54);
    func_0x00010006c090(lVar32,ppuVar44);
    func_0x000107c61170(lVar33);
    FUN_102edd9d4(&puStack_1a0);
    lVar35 = plVar34[0x11];
    uVar5 = *(undefined1 *)(uVar62 + 0x90);
    plVar34[0x11] = *(long *)(uVar62 + 0x88);
    lVar33 = plVar34[0x12];
    *(undefined1 *)(plVar34 + 0x12) = uVar5;
    FUN_102edda70();
    func_0x000102edda80(lVar35,(char)lVar33);
    FUN_102edaec0(plVar34,param_4);
    func_0x000107c6157c(plVar34);
    puVar56 = puVar53;
    func_0x000107c61550();
    if ((((int)puVar56 == 0) || ((long)puVar53 < 0)) ||
       (puVar56 = puVar53, ((ulong)puVar53 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar53 >> 0x3e == 0) {
        puVar21 = *(ulong **)(((ulong)puVar53 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar21 = (ulong *)((ulong)puVar53 & 0xffffffffffffff8);
        if ((ulong *)0x7fffffffffffffff < puVar53) {
          puVar21 = puVar53;
        }
        func_0x000107c60480(puVar21);
      }
      puVar56 = (ulong *)0x0;
      func_0x000102ed6084(0,(undefined1 *)((long)puVar21 + 1),1,puVar53);
    }
    uVar57 = (ulong)puVar56 & 0xffffffffffffff8;
    uVar61 = *(ulong *)(uVar57 + 0x10);
    puVar53 = puVar56;
    if (*(ulong *)(uVar57 + 0x18) >> 1 <= uVar61) {
      puVar53 = (ulong *)(ulong)(1 < *(ulong *)(uVar57 + 0x18));
      func_0x000102ed6084(puVar53,uVar61 + 1,1,puVar56);
      uVar57 = (ulong)puVar53 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar57 + 0x10) = uVar61 + 1;
    *(long **)(uVar57 + uVar61 * 8 + 0x20) = plVar34;
    func_0x000107c61574(plVar34);
    func_0x000107c61574(uVar62);
    func_0x000107c61170(puVar52);
    if ((ulong *)(lVar48 + -3) == puVar12) break;
    lVar48 = lVar48 + 1;
  }
  func_0x000107c6142c(puVar64);
  puVar64 = puVar53;
LAB_102edd150:
  puStack_1a0 = puVar64;
  func_0x000107c61434(puVar64);
  func_0x000102f020fc(ppuStack_2b0);
  func_0x000107c61170(puVar14);
  func_0x000107c6142c(puVar64);
  func_0x000107c61170(puVar39);
  func_0x000107c61574(uVar55);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puStack_2b8);
  return;
}



/* Entry: 102edd994; end: 102edd9d3;  */

void FUN_102edd994(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f27e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db639cc;
  func_0x000107c61520(&UNK_10db639cc,&UNK_1105e5f20);
  puRam0000000112f27e28 = puVar1;
  return;
}



/* Entry: 102edd9d4; end: 102edda07;  */

undefined8 FUN_102edd9d4(undefined8 param_1)

{
  FUN_102f1cc4c();
  return param_1;
}



/* Entry: 102edda08; end: 102edda2b;  */

void FUN_102edda08(void)

{
  long unaff_x20;
  
  func_0x000107c30884(*(undefined8 *)(unaff_x20 + 0x10),1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102edda2c; end: 102edda33;  */

void FUN_102edda2c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long unaff_x20;
  ulong uVar5;
  
  puVar4 = *(ulong **)(unaff_x20 + 0x10);
  uVar5 = *puVar4;
  func_0x000107c61434(param_2);
  uVar2 = uVar5;
  func_0x000107c61558();
  *puVar4 = uVar5;
  uVar3 = uVar5;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    func_0x0001000d182c(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    *puVar4 = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001000d182c(uVar5,uVar2 + 1,1,uVar3);
    *puVar4 = uVar5;
  }
  *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
  lVar1 = uVar5 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return;
}



/* Entry: 102edda34; end: 102edda6f;  */

undefined8 FUN_102edda34(undefined8 param_1,undefined8 param_2)

{
  FUN_102f1cc84(param_2,param_1);
  return param_2;
}



/* Entry: 102edda70; end: 102edda8f;  */

void FUN_102edda70(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102edda90; end: 102eddaa7;  */

void FUN_102edda90(void)

{
  FUN_102f1c340();
  return;
}



/* Entry: 102eddaa8; end: 102eddb7f;  */

undefined8 FUN_102eddaa8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dc3ff0;
  func_0x0001000285a8(0x112dc3ff0,&UNK_10d981690);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102eddb80; end: 102eddbc3;  */

void FUN_102eddb80(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f27e38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x00010440a304(0xff);
  puVar2 = &UNK_10dcf98d8;
  func_0x000107c61520(&UNK_10dcf98d8,uVar1);
  puRam0000000112f27e38 = puVar2;
  return;
}



/* Entry: 102eddbc4; end: 102eddbcb;  */

void FUN_102eddbc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (*(char *)(param_1 + 1) != '\x01') {
    uVar2 = *param_1;
    func_0x000107c5d784(uVar2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x10));
    func_0x000107c61180();
    uStack_40 = uVar1;
    uStack_38 = uVar2;
    func_0x000107c61174();
    func_0x000100087bd4(FUN_102eddbcc,auStack_50,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102eddbcc; end: 102eddbe3;  */

void FUN_102eddbcc(void)

{
  long unaff_x20;
  
  FUN_102f1c2dc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102eddbe4; end: 102eddd4b;  */

int FUN_102eddbe4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102eddc60;
        goto LAB_102eddc44;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102eddc44:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102eddc60:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102eddd4c; end: 102eddd8b;  */

void FUN_102eddd4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f27e40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db639a4;
  func_0x000107c61520(&UNK_10db639a4,&UNK_1105e5f20);
  puRam0000000112f27e40 = puVar1;
  return;
}



/* Entry: 102eddd8c; end: 102eddd93;  */

void FUN_102eddd8c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long unaff_x20;
  ulong uVar5;
  
  puVar4 = *(ulong **)(unaff_x20 + 0x10);
  uVar5 = *puVar4;
  func_0x000107c61434(param_2);
  uVar2 = uVar5;
  func_0x000107c61558();
  *puVar4 = uVar5;
  uVar3 = uVar5;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    func_0x0001000d182c(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    *puVar4 = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    func_0x0001000d182c(uVar5,uVar2 + 1,1,uVar3);
    *puVar4 = uVar5;
  }
  *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
  lVar1 = uVar5 + uVar2 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return;
}



/* Entry: 102eddd94; end: 102edddbb;  */

void FUN_102eddd94(void)

{
  FUN_102edda90();
  return;
}



/* Entry: 102edddbc; end: 102edddc7; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102edddbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f27e48;
  func_0x000107c61428(param_1 + _DAT_112f27e48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102edddc8; end: 102edddd3; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102edddc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f27e48;
  func_0x000107c61428(param_1 + _DAT_112f27e48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102edddd4; end: 102eddddf; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceImpl snapDocEditor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102edddd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f27e50;
  func_0x000107c61428(param_1 + _DAT_112f27e50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102eddde0; end: 102edde23;  */

void FUN_102eddde0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102edde24; end: 102edde2f; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceImpl setSnapDocEditor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102edde24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f27e50;
  func_0x000107c61428(param_1 + _DAT_112f27e50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102edde30; end: 102edde83;  */

void FUN_102edde30(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102edde84; end: 102eddec7; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceImpl retainsSendToScopeAcrossDismissals] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102edde84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f27e58;
  func_0x000107c61428(param_1 + _DAT_112f27e58,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 102eddec8; end: 102eddf17; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceImpl setRetainsSendToScopeAcrossDismissals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eddec8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f27e58;
  func_0x000107c61428(param_1 + _DAT_112f27e58,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102eddf18; end: 102ede05f;  */

void FUN_102eddf18(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  long lStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar2 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar5 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010f114430);
    func_0x000107c466bc(puVar4);
    func_0x000107c61170(uVar5);
    func_0x00010488ade0(puVar4);
    func_0x000107c61170(puVar4);
  }
  else {
    pcStack_50 = FUN_102f096d4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100f1c768;
    puStack_58 = &UNK_1105e8498;
    lStack_48 = param_3;
    func_0x000107c60bc4(&puStack_70);
    lVar1 = lStack_48;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(lVar1);
    func_0x000107c440d8(lVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar2);
  }
  *param_1 = *(undefined8 *)(param_3 + 0x10);
  func_0x000107c6157c();
  return;
}



/* Entry: 102ede060; end: 102ede167;  */

/* WARNING: Possible PIC construction at 0x000102ede0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ede0c8) */
/* WARNING: Removing unreachable block (ram,0x000102ede148) */

void FUN_102ede060(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    puVar2 = (undefined *)0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010f114430);
    func_0x000107c466bc(puVar1);
  }
  else {
    puVar2 = PTR_PTR_1126cdf20;
    func_0x000107c61168(PTR_PTR_1126cdf20);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar2);
    func_0x000107c61180();
    func_0x000107c40b70();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 102ede168; end: 102ede3b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ede168(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 in_stack_00000008;
  
  func_0x000107c4456c();
  func_0x000107c61180();
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ede3a0);
    (*pcVar1)();
  }
  lVar2 = param_3;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ede3a4);
    (*pcVar1)();
  }
  lVar3 = param_3;
  func_0x000107c5b4b8();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ede3a8);
    (*pcVar1)();
  }
  lVar4 = param_3;
  func_0x000107c5b4dc();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c5d9b0(param_4);
    func_0x000107c61180();
    func_0x000107c5b484();
    func_0x000107c61180();
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ede3b0);
      (*pcVar1)();
    }
    lVar5 = param_5;
    func_0x000107c410f8();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c410fc();
      func_0x000107c61180();
      if (param_5 != 0) {
        func_0x000107c51ce4();
        func_0x000107c61180();
        uVar6 = param_8;
        func_0x000103ee5288();
        func_0x000107c4f3e4();
        func_0x000107c61180();
        puVar7 = PTR_PTR_1126c33b8;
        func_0x000107c610f8();
        func_0x000107c46c2c();
        func_0x000107c61170(param_2);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_3);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_8);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(in_stack_00000008);
        *param_1 = puVar7;
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ede3b8);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ede3b4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ede3ac);
  (*pcVar1)();
}



/* Entry: 102ede3b8; end: 102ede417; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceImpl init] */

void FUN_102ede3b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapDocSendServiceImpl.SnapDocSendServiceImpl",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ede3e4);
  (*pcVar1)();
}



/* Entry: 102ede418; end: 102ede913; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ede458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede4b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede4e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede5a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede6a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede6c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ede6e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ede6cc) */
/* WARNING: Removing unreachable block (ram,0x000102ede6ac) */
/* WARNING: Removing unreachable block (ram,0x000102ede68c) */
/* WARNING: Removing unreachable block (ram,0x000102ede65c) */
/* WARNING: Removing unreachable block (ram,0x000102ede63c) */
/* WARNING: Removing unreachable block (ram,0x000102ede61c) */
/* WARNING: Removing unreachable block (ram,0x000102ede5ac) */
/* WARNING: Removing unreachable block (ram,0x000102ede58c) */
/* WARNING: Removing unreachable block (ram,0x000102ede56c) */
/* WARNING: Removing unreachable block (ram,0x000102ede54c) */
/* WARNING: Removing unreachable block (ram,0x000102ede52c) */
/* WARNING: Removing unreachable block (ram,0x000102ede50c) */
/* WARNING: Removing unreachable block (ram,0x000102ede4ec) */
/* WARNING: Removing unreachable block (ram,0x000102ede4bc) */
/* WARNING: Removing unreachable block (ram,0x000102ede49c) */
/* WARNING: Removing unreachable block (ram,0x000102ede47c) */
/* WARNING: Removing unreachable block (ram,0x000102ede45c) */
/* WARNING: Removing unreachable block (ram,0x000102ede6ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ede418(long param_1)

{
  func_0x000100d2b018(param_1 + _DAT_112f27e48);
  func_0x000100d2b018(param_1 + _DAT_112f27e50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f27ea8));
  return;
}



/* Entry: 102ede914; end: 102ede973; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceImpl endSendToSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ede914(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f27e58;
  func_0x000107c61428(param_1 + _DAT_112f27e58,auStack_38,1,0);
  *(undefined1 *)(param_1 + lVar1) = 0;
  func_0x000107c61174(param_1);
  func_0x000102ede748(1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102ede974; end: 102edef47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ede974(undefined *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  long unaff_x20;
  char *pcVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_112f27e48;
  func_0x000107c61428(unaff_x20 + _DAT_112f27e48,auStack_78,0,0);
  pcVar3 = (char *)(unaff_x20 + lVar1);
  func_0x000107c61618();
  if (pcVar3 == (char *)0x0) {
    return;
  }
  uVar4 = param_2;
  puVar6 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(param_2,PTR_s_respondsToSelector__11262c7e0,PTR_s_sendSessionId_112634c60);
  if ((uVar4 & 1) == 0) goto LAB_102edeaf0;
  uVar4 = param_2;
  func_0x000107c51e48();
  func_0x000107c61180();
  if (uVar4 == 0) goto LAB_102edeaf0;
  uVar16 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  func_0x000107c6142c(puVar6);
  uVar4 = uVar16 & 0xffffffffffff;
  if (((ulong)puVar6 & 0x2000000000000000) != 0) {
    uVar4 = (ulong)puVar6 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) goto LAB_102edeaf0;
  pcVar5 = pcVar3;
  func_0x000107c5d17c();
  func_0x000107c61180();
  if (pcVar5 == (char *)0x0) goto LAB_102edeaf0;
  puVar6 = &UNK_1105e5fa0;
  func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar7 = &UNK_1105e5fc8;
  func_0x000107c613fc(&UNK_1105e5fc8,0x28,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(ulong *)(puVar7 + 0x18) = param_2;
  *(char **)(puVar7 + 0x20) = pcVar5;
  uVar4 = param_2;
  puVar13 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(param_2,PTR_s_respondsToSelector__11262c7e0,PTR_s_disableSplitting_1125bdbd8);
  func_0x000107c6157c(puVar6);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(pcVar5);
  if ((uVar4 & 1) == 0) {
LAB_102edeb14:
    uVar16 = 0;
    if ((long)param_1 < 0) goto LAB_102edee10;
LAB_102edeb1c:
    if (((ulong)param_1 >> 0x3e & 1) != 0) goto LAB_102edee10;
    puVar8 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_2;
    func_0x000107c41f1c();
    func_0x000107c61180();
    if (uVar4 == 0) goto LAB_102edeb14;
    uVar16 = uVar4;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar4);
    if (-1 < (long)param_1) goto LAB_102edeb1c;
LAB_102edee10:
    puVar8 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar8 = param_1;
    }
    func_0x000107c60480();
  }
  if (((uVar16 & 1) == 0) && (puVar8 == (undefined *)0x1)) {
    if ((ulong)param_1 >> 0x3e == 0) {
      puVar8 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar8 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < param_1) {
        puVar8 = param_1;
      }
      func_0x000107c60480();
    }
    if (puVar8 != (undefined *)0x0) {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102edef34);
          (*pcVar2)();
        }
        uVar17 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107c615f0(uVar17);
      }
      else {
        uVar17 = 0;
        puVar13 = param_1;
        FUN_10274d138();
      }
      uVar9 = uVar17;
      func_0x000107c4e090();
      func_0x000107c61180();
      func_0x000107c615e8(uVar17);
      uVar17 = uVar9;
      func_0x000107c3eea8();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      uVar9 = uVar17;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar17);
      puVar8 = &UNK_1105e6040;
      func_0x000107c613fc(&UNK_1105e6040,0x28,7);
      *(code **)(puVar8 + 0x10) = FUN_102ee09dc;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      *(undefined **)(puVar8 + 0x20) = param_1;
      pcVar15 = *(char **)(unaff_x20 + _DAT_112f27e60);
      func_0x000107c6157c(puVar7);
      func_0x000107c61434(param_1);
      func_0x000107c5dbd4();
      func_0x000107c61180();
      pcVar10 = pcVar15;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(pcVar15);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (pcVar10 == (char *)0x0) {
        if (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) &&
           (puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8, func_0x000107c60480(),
           puVar14 != (undefined *)0x0)) {
          param_1 = puVar11;
        }
        pcVar10 = "preloadSendTo(with:sendParameters:)";
        func_0x0001000c10c0("preloadSendTo(with:sendParameters:)");
        func_0x000107c61180();
        puVar11 = &UNK_1105e6068;
        func_0x000107c613fc(&UNK_1105e6068,0x30,7);
        *(undefined **)(puVar11 + 0x10) = puVar6;
        *(undefined **)(puVar11 + 0x18) = param_1;
        *(ulong *)(puVar11 + 0x20) = param_2;
        *(char **)(puVar11 + 0x28) = pcVar5;
        uStack_88 = 0x102f0982c;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1105e6080;
        ppuVar12 = &puStack_a8;
        puStack_80 = puVar11;
        func_0x000107c60bc4(ppuVar12);
        puVar11 = puStack_80;
        func_0x000107c6157c(puVar6);
        func_0x000107c615f0(param_2);
        func_0x000107c615f0(pcVar5);
        func_0x000107c61434(param_1);
        func_0x000107c61574(puVar11);
        func_0x000107c4e524(pcVar10);
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c615e8(pcVar3);
        func_0x000107c61574(puVar8);
        func_0x000107c615e8(pcVar10);
        func_0x00010006c090(uVar9,puVar13);
        func_0x000107c615e8(pcVar5);
        func_0x000107c61574(puVar6);
        func_0x000107c61574(puVar7);
        return;
      }
      puVar11 = &UNK_1105e60b8;
      func_0x000107c613fc(&UNK_1105e60b8,0x30,7);
      *(code **)(puVar11 + 0x10) = FUN_102f02a30;
      *(undefined **)(puVar11 + 0x18) = puVar8;
      *(undefined8 *)(puVar11 + 0x20) = uVar9;
      *(undefined **)(puVar11 + 0x28) = puVar13;
      uStack_88 = 0x102f02a34;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100f1c768;
      puStack_90 = &UNK_1105e60d0;
      ppuVar12 = &puStack_a8;
      puStack_80 = puVar11;
      func_0x000107c60bc4(ppuVar12);
      puVar11 = puStack_80;
      func_0x000107c6157c(puVar8);
      func_0x00010006c00c(uVar9,puVar13);
      func_0x000107c61574(puVar11);
      func_0x000107c440d8(pcVar10);
      func_0x000107c615e8(pcVar3);
      func_0x000107c61574(puVar8);
      func_0x00010006c090(uVar9,puVar13);
      func_0x000107c615e8(pcVar5);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar7);
      func_0x000107c60bd0(ppuVar12);
      pcVar3 = pcVar10;
      goto LAB_102edeaf0;
    }
  }
  pcVar10 = "preloadSendTo(with:sendParameters:)";
  func_0x0001000c10c0("preloadSendTo(with:sendParameters:)");
  func_0x000107c61180();
  puVar13 = &UNK_1105e5ff0;
  func_0x000107c613fc(&UNK_1105e5ff0,0x30,7);
  *(undefined **)(puVar13 + 0x10) = puVar6;
  *(undefined **)(puVar13 + 0x18) = param_1;
  *(ulong *)(puVar13 + 0x20) = param_2;
  *(char **)(puVar13 + 0x28) = pcVar5;
  uStack_88 = 0x102ee09e8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_1105e6008;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar13;
  func_0x000107c60bc4(ppuVar12);
  puVar13 = puStack_80;
  func_0x000107c6157c(puVar6);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(pcVar5);
  func_0x000107c61434(param_1);
  func_0x000107c61574(puVar13);
  func_0x000107c4e524(pcVar10);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61574(puVar6);
  func_0x000107c615e8(pcVar5);
  func_0x000107c615e8(pcVar3);
  func_0x000107c61574(puVar7);
  pcVar3 = pcVar10;
LAB_102edeaf0:
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102edef48; end: 102edf04f;  */

void FUN_102edef48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  pcVar1 = "preloadSendTo(with:sendParameters:)";
  func_0x0001000c10c0("preloadSendTo(with:sendParameters:)");
  func_0x000107c61180();
  puVar2 = &UNK_1105e8458;
  func_0x000107c613fc(&UNK_1105e8458,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  uStack_60 = 0x102f09830;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1105e8470;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c61434(param_1);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102edf050; end: 102edf577;  */

/* WARNING: Removing unreachable block (ram,0x000102edf18c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102edf050(long param_1,undefined *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puStack_650;
  undefined *puStack_648;
  long lStack_640;
  undefined *puStack_638;
  long lStack_630;
  long lStack_628;
  long lStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  undefined3 uStack_600;
  undefined5 uStack_5fd;
  undefined3 uStack_5f8;
  undefined5 uStack_5f5;
  undefined3 uStack_5f0;
  undefined5 uStack_5ed;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined1 uStack_5d8;
  undefined7 uStack_5d7;
  long lStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  long lStack_5a8;
  undefined *puStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  long lStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined3 uStack_568;
  undefined5 uStack_565;
  undefined3 uStack_560;
  undefined8 uStack_55d;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined1 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  long lStack_510;
  undefined *puStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined **ppuStack_4b8;
  undefined **ppuStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  undefined *puStack_480;
  undefined *puStack_478;
  long lStack_470;
  undefined *puStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  undefined *puStack_340;
  undefined *puStack_338;
  long lStack_330;
  undefined *puStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined1 auStack_168 [24];
  undefined *puStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  func_0x000107c61428(param_1 + 0x10,auStack_168,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102ed3eb4(&lStack_298);
    plVar1 = (long *)(param_1 + _DAT_112f27fc8);
    lStack_1f8 = plVar1[1];
    lStack_200 = *plVar1;
    lStack_1e8 = plVar1[3];
    lStack_1f0 = plVar1[2];
    lStack_1b8 = plVar1[9];
    lStack_1c0 = plVar1[8];
    lStack_1a8 = plVar1[0xb];
    lStack_1b0 = plVar1[10];
    lStack_1d8 = plVar1[5];
    lStack_1e0 = plVar1[4];
    lStack_1c8 = plVar1[7];
    lStack_1d0 = plVar1[6];
    lStack_188 = plVar1[0xf];
    lStack_190 = plVar1[0xe];
    lStack_178 = plVar1[0x11];
    lStack_180 = plVar1[0x10];
    lStack_170 = plVar1[0x12];
    lStack_198 = plVar1[0xd];
    lStack_1a0 = plVar1[0xc];
    plVar1[1] = lStack_290;
    *plVar1 = lStack_298;
    plVar1[3] = lStack_280;
    plVar1[2] = lStack_288;
    plVar1[9] = lStack_250;
    plVar1[8] = lStack_258;
    plVar1[0xb] = lStack_240;
    plVar1[10] = lStack_248;
    plVar1[5] = lStack_270;
    plVar1[4] = lStack_278;
    plVar1[7] = lStack_260;
    plVar1[6] = lStack_268;
    plVar1[0x12] = lStack_208;
    plVar1[0xf] = lStack_220;
    plVar1[0xe] = lStack_228;
    plVar1[0x11] = lStack_210;
    plVar1[0x10] = lStack_218;
    plVar1[0xd] = lStack_230;
    plVar1[0xc] = lStack_238;
    FUN_102f080f0(&lStack_200,0x112f27e88,&UNK_10db63a18);
    lVar13 = _DAT_112f27ee8;
    lVar3 = *(long *)(param_1 + _DAT_112f27ee8);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(*(undefined8 *)(param_1 + lVar13));
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    puVar4 = param_2;
    FUN_102f04958(param_2,param_3);
    puVar5 = PTR_PTR_1126c4f00;
    func_0x000107c610f8();
    func_0x000107c48f0c();
    func_0x000107c5770c();
    lVar13 = *(long *)(puVar4 + 0x10);
    if (lVar13 == 0) {
      func_0x000107c61174(puVar5);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_340 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61174(puVar5);
      func_0x000102f031f8(0,lVar13,0);
      uVar14 = *(undefined8 *)(param_1 + _DAT_112f27e78);
      puVar12 = (undefined8 *)(puVar4 + 0x20);
      do {
        puVar11 = puStack_340;
        uStack_a8 = puVar12[1];
        uStack_b0 = *puVar12;
        uStack_98 = puVar12[3];
        uStack_a0 = puVar12[2];
        uStack_90 = puVar12[4];
        uStack_7f = *(undefined8 *)((long)puVar12 + 0x31);
        uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)puVar12 + 0x29) >> 0x38);
        uStack_88 = (undefined1)puVar12[5];
        uStack_87 = (undefined7)((ulong)puVar12[5] >> 8);
        FUN_102edda34(&uStack_b0,&puStack_150);
        uVar6 = uVar14;
        func_0x000107c5c734(uVar14);
        func_0x000107c61180();
        puVar7 = &uStack_b0;
        func_0x000102f0dd84(puVar7,uVar6,0,0);
        func_0x000107c615e8(uVar6);
        FUN_102edd9d4(&uStack_b0);
        uVar2 = *(ulong *)(puVar11 + 0x10);
        puStack_340 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar2) {
          func_0x000102f031f8(1 < *(ulong *)(puVar11 + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(puStack_340 + 0x10) = uVar2 + 1;
        *(undefined8 **)(puStack_340 + uVar2 * 8 + 0x20) = puVar7;
        puVar12 = puVar12 + 8;
        lVar13 = lVar13 + -1;
        puVar11 = puStack_340;
      } while (lVar13 != 0);
    }
    func_0x0001000285a8(0x112f27e68,&UNK_10db63a10);
    func_0x000107c613fc();
    lVar13 = 0;
    func_0x00010095c380();
    func_0x000107c6142c(puVar4);
    lStack_630 = 0;
    lStack_628 = 0;
    lStack_610 = 0;
    lStack_618 = 0;
    uStack_600 = 0;
    lStack_608 = 0;
    uStack_5f5 = 0;
    uStack_5f0 = 0;
    uStack_5fd = 0;
    uStack_5f8 = 0;
    uStack_5e8 = 0;
    uStack_5e0 = 0;
    uStack_5d8 = 0;
    lStack_5c8 = 0;
    lStack_5c0 = 0;
    lStack_5d0 = 0;
    uStack_598 = 0;
    uStack_590 = 0;
    uStack_578 = 0;
    uStack_580 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_55d = 0;
    uStack_565 = 0;
    uStack_560 = 0;
    uStack_550 = 0;
    uStack_548 = 0;
    uStack_540 = 0;
    uStack_530 = 0;
    uStack_528 = 0;
    uStack_538 = 0;
    puStack_650 = param_2;
    puStack_648 = puVar11;
    lStack_640 = param_3;
    puStack_638 = puVar5;
    lStack_620 = lVar13;
    puStack_5b8 = param_2;
    puStack_5b0 = puVar11;
    lStack_5a8 = param_3;
    puStack_5a0 = puVar5;
    lStack_588 = lVar13;
    func_0x000107c61434(param_2);
    func_0x000107c615f0(param_3);
    ppuVar10 = &puStack_150;
    FUN_102f04d58(&puStack_650);
    ppuVar8 = &puStack_5b8;
    func_0x000102f04d94();
    uVar14 = uStack_5e0;
    lStack_2e0 = CONCAT53(uStack_5ed,uStack_5f0);
    lStack_2c8 = CONCAT71(uStack_5d7,uStack_5d8);
    ppuStack_2d8 = (undefined **)uStack_5e8;
    ppuStack_2d0 = (undefined **)uStack_5e0;
    lStack_2b8 = lStack_5c8;
    lStack_2c0 = lStack_5d0;
    lStack_2b0 = lStack_5c0;
    lStack_318 = lStack_628;
    lStack_320 = lStack_630;
    lStack_308 = lStack_618;
    lStack_310 = lStack_620;
    lStack_2e8 = CONCAT53(uStack_5f5,uStack_5f8);
    lStack_2f0 = CONCAT53(uStack_5fd,uStack_600);
    lStack_2f8 = lStack_608;
    lStack_300 = lStack_610;
    puStack_338 = puStack_648;
    puStack_340 = puStack_650;
    puStack_328 = puStack_638;
    lStack_330 = lStack_640;
    func_0x00010011df08();
    func_0x000107c61180();
    ppuVar9 = ppuVar8;
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar8);
    func_0x000107c6142c(uVar14);
    lStack_498 = lStack_2b8;
    lStack_4a0 = lStack_2c0;
    lStack_4f8 = lStack_318;
    lStack_500 = lStack_320;
    lStack_4e8 = lStack_308;
    lStack_4f0 = lStack_310;
    lStack_4d8 = lStack_2f8;
    lStack_4e0 = lStack_300;
    lStack_4c8 = lStack_2e8;
    lStack_4d0 = lStack_2f0;
    puStack_518 = puStack_338;
    puStack_520 = puStack_340;
    puStack_508 = puStack_328;
    lStack_510 = lStack_330;
    lStack_4c0 = lStack_2e0;
    lStack_4a8 = lStack_2c8;
    lStack_420 = lStack_2e0;
    lStack_408 = lStack_2c8;
    lStack_3f8 = lStack_2b8;
    lStack_400 = lStack_2c0;
    lStack_458 = lStack_318;
    lStack_460 = lStack_320;
    lStack_448 = lStack_308;
    lStack_450 = lStack_310;
    lStack_438 = lStack_2f8;
    lStack_440 = lStack_300;
    lStack_428 = lStack_2e8;
    lStack_430 = lStack_2f0;
    lStack_490 = lStack_2b0;
    lStack_3f0 = lStack_2b0;
    puStack_478 = puStack_338;
    puStack_480 = puStack_340;
    puStack_468 = puStack_328;
    lStack_470 = lStack_330;
    ppuStack_4b8 = ppuVar9;
    ppuStack_4b0 = ppuVar10;
    ppuStack_418 = ppuVar9;
    ppuStack_410 = ppuVar10;
    ppuStack_2d8 = ppuVar9;
    ppuStack_2d0 = ppuVar10;
    FUN_102f04dc8(&puStack_480);
    lStack_3d8 = plVar1[1];
    lStack_3e0 = *plVar1;
    lStack_3c8 = plVar1[3];
    lStack_3d0 = plVar1[2];
    lStack_3b8 = plVar1[5];
    lStack_3c0 = plVar1[4];
    lStack_3a8 = plVar1[7];
    lStack_3b0 = plVar1[6];
    lStack_398 = plVar1[9];
    lStack_3a0 = plVar1[8];
    lStack_388 = plVar1[0xb];
    lStack_390 = plVar1[10];
    lStack_378 = plVar1[0xd];
    lStack_380 = plVar1[0xc];
    lStack_368 = plVar1[0xf];
    lStack_370 = plVar1[0xe];
    lStack_358 = plVar1[0x11];
    lStack_360 = plVar1[0x10];
    lStack_350 = plVar1[0x12];
    plVar1[1] = (long)puStack_478;
    *plVar1 = (long)puStack_480;
    plVar1[3] = (long)puStack_468;
    plVar1[2] = lStack_470;
    plVar1[9] = lStack_438;
    plVar1[8] = lStack_440;
    plVar1[0xb] = lStack_428;
    plVar1[10] = lStack_430;
    plVar1[5] = lStack_458;
    plVar1[4] = lStack_460;
    plVar1[7] = lStack_448;
    plVar1[6] = lStack_450;
    plVar1[0x12] = lStack_3f0;
    plVar1[0xf] = lStack_408;
    plVar1[0xe] = (long)ppuStack_410;
    plVar1[0x11] = lStack_3f8;
    plVar1[0x10] = lStack_400;
    plVar1[0xd] = (long)ppuStack_418;
    plVar1[0xc] = lStack_420;
    FUN_102f04d58(&puStack_520,&puStack_150);
    FUN_102f080f0(&lStack_3e0,0x112f27e88,&UNK_10db63a18);
    ppuStack_e8 = ppuStack_2d8;
    lStack_f0 = lStack_2e0;
    lStack_d8 = lStack_2c8;
    ppuStack_e0 = ppuStack_2d0;
    lStack_c8 = lStack_2b8;
    lStack_d0 = lStack_2c0;
    lStack_c0 = lStack_2b0;
    lStack_128 = lStack_318;
    lStack_130 = lStack_320;
    lStack_118 = lStack_308;
    lStack_120 = lStack_310;
    lStack_108 = lStack_2f8;
    lStack_110 = lStack_300;
    lStack_f8 = lStack_2e8;
    lStack_100 = lStack_2f0;
    puStack_148 = puStack_338;
    puStack_150 = puStack_340;
    puStack_138 = puStack_328;
    lStack_140 = lStack_330;
    FUN_102edf578(&puStack_150);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar5);
    func_0x000102f04d94(&puStack_340);
  }
  return;
}



/* Entry: 102edf578; end: 102ee09db;  */

/* WARNING: Possible PIC construction at 0x000102edf77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102edf824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102edf8b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102edf8d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102edf924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102edfa14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102edff50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102edfff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee0070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee00b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee0114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee0194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee01d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee0490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee05dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee0854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee0864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee0874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee08a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee08c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee08d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee08f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee0740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee0564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ee02e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102edfdb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102edfe28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102edfe84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102edfe94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102edfea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102edf6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102edfea8) */
/* WARNING: Removing unreachable block (ram,0x000102edfe98) */
/* WARNING: Removing unreachable block (ram,0x000102edfe88) */
/* WARNING: Removing unreachable block (ram,0x000102edfe2c) */
/* WARNING: Removing unreachable block (ram,0x000102edfdb8) */
/* WARNING: Removing unreachable block (ram,0x000102ee02ec) */
/* WARNING: Removing unreachable block (ram,0x000102ee02fc) */
/* WARNING: Removing unreachable block (ram,0x000102ee0328) */
/* WARNING: Removing unreachable block (ram,0x000102ee0568) */
/* WARNING: Removing unreachable block (ram,0x000102ee0744) */
/* WARNING: Removing unreachable block (ram,0x000102ee08f4) */
/* WARNING: Removing unreachable block (ram,0x000102ee08dc) */
/* WARNING: Removing unreachable block (ram,0x000102ee08cc) */
/* WARNING: Removing unreachable block (ram,0x000102ee08a4) */
/* WARNING: Removing unreachable block (ram,0x000102ee0878) */
/* WARNING: Removing unreachable block (ram,0x000102ee08b8) */
/* WARNING: Removing unreachable block (ram,0x000102ee08a0) */
/* WARNING: Removing unreachable block (ram,0x000102ee0868) */
/* WARNING: Removing unreachable block (ram,0x000102ee0858) */
/* WARNING: Removing unreachable block (ram,0x000102ee05e0) */
/* WARNING: Removing unreachable block (ram,0x000102ee0494) */
/* WARNING: Removing unreachable block (ram,0x000102ee04a4) */
/* WARNING: Removing unreachable block (ram,0x000102ee01dc) */
/* WARNING: Removing unreachable block (ram,0x000102ee0198) */
/* WARNING: Removing unreachable block (ram,0x000102ee01a0) */
/* WARNING: Removing unreachable block (ram,0x000102ee0118) */
/* WARNING: Removing unreachable block (ram,0x000102ee0128) */
/* WARNING: Removing unreachable block (ram,0x000102ee0150) */
/* WARNING: Removing unreachable block (ram,0x000102ee0074) */
/* WARNING: Removing unreachable block (ram,0x000102ee0078) */
/* WARNING: Removing unreachable block (ram,0x000102edfff4) */
/* WARNING: Removing unreachable block (ram,0x000102ee0004) */
/* WARNING: Removing unreachable block (ram,0x000102ee002c) */
/* WARNING: Removing unreachable block (ram,0x000102edff54) */
/* WARNING: Removing unreachable block (ram,0x000102edfa18) */
/* WARNING: Removing unreachable block (ram,0x000102edf928) */
/* WARNING: Removing unreachable block (ram,0x000102edf938) */
/* WARNING: Removing unreachable block (ram,0x000102edfb68) */
/* WARNING: Removing unreachable block (ram,0x000102edf978) */
/* WARNING: Removing unreachable block (ram,0x000102edf99c) */
/* WARNING: Removing unreachable block (ram,0x000102edf9c4) */
/* WARNING: Removing unreachable block (ram,0x000102edf8d4) */
/* WARNING: Removing unreachable block (ram,0x000102edf8bc) */
/* WARNING: Removing unreachable block (ram,0x000102edf8c0) */
/* WARNING: Removing unreachable block (ram,0x000102edf828) */
/* WARNING: Removing unreachable block (ram,0x000102edf780) */
/* WARNING: Removing unreachable block (ram,0x000102edf788) */
/* WARNING: Removing unreachable block (ram,0x000102edf6b8) */
/* WARNING: Removing unreachable block (ram,0x000102ee0144) */
/* WARNING: Removing unreachable block (ram,0x000102ee0318) */
/* WARNING: Removing unreachable block (ram,0x000102ee04c0) */
/* WARNING: Removing unreachable block (ram,0x000102ee0020) */
/* WARNING: Removing unreachable block (ram,0x000102ee02a8) */
/* WARNING: Removing unreachable block (ram,0x000102ee0300) */
/* WARNING: Removing unreachable block (ram,0x000102ee02ac) */
/* WARNING: Removing unreachable block (ram,0x000102ee0954) */
/* WARNING: Removing unreachable block (ram,0x000102ee02b8) */
/* WARNING: Removing unreachable block (ram,0x000102ee02d0) */
/* WARNING: Removing unreachable block (ram,0x000102ee00c0) */
/* WARNING: Removing unreachable block (ram,0x000102ee012c) */
/* WARNING: Removing unreachable block (ram,0x000102ee00c4) */
/* WARNING: Removing unreachable block (ram,0x000102ee0950) */
/* WARNING: Removing unreachable block (ram,0x000102ee00d0) */
/* WARNING: Removing unreachable block (ram,0x000102ee00e8) */
/* WARNING: Removing unreachable block (ram,0x000102ee0450) */
/* WARNING: Removing unreachable block (ram,0x000102ee04a8) */
/* WARNING: Removing unreachable block (ram,0x000102ee0454) */
/* WARNING: Removing unreachable block (ram,0x000102ee0948) */
/* WARNING: Removing unreachable block (ram,0x000102ee0460) */
/* WARNING: Removing unreachable block (ram,0x000102ee0478) */
/* WARNING: Removing unreachable block (ram,0x000102edff9c) */
/* WARNING: Removing unreachable block (ram,0x000102ee0008) */
/* WARNING: Removing unreachable block (ram,0x000102edffa0) */
/* WARNING: Removing unreachable block (ram,0x000102ee094c) */
/* WARNING: Removing unreachable block (ram,0x000102edffac) */
/* WARNING: Removing unreachable block (ram,0x000102edffc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102edf578(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  ulong *puVar19;
  long lVar20;
  ulong *puVar21;
  long extraout_x8;
  long lVar22;
  long unaff_x20;
  undefined **ppuVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  undefined1 *puVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 auStack_1e0 [4];
  byte abStack_1c0 [16];
  ulong uStack_1b0;
  ulong uStack_1a8;
  long alStack_1a0 [2];
  undefined1 auStack_190 [12];
  undefined4 uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  uint uStack_16c;
  long lStack_168;
  long lStack_160;
  ulong *puStack_158;
  ulong *puStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  ulong *puStack_128;
  undefined1 *puStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  ulong *puStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_d0;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar24 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar24 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = -extraout_x8;
  puVar28 = auStack_190 + lVar24;
  ppuVar23 = (undefined **)param_1[3];
  if (ppuVar23 == (undefined **)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    ppuVar11 = (undefined **)0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010f114320);
    func_0x000107c466bc(puVar9);
    goto code_r0x000107c61170;
  }
  uVar8 = 0;
  FUN_102f0b9dc();
  lVar26 = *(long *)(*(long *)(unaff_x20 + _DAT_112f27f78) + _DAT_113077200);
  uStack_110 = uVar8;
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar26 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = lVar26;
    func_0x000107c40be4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar26);
    if (lVar22 != 0) {
      FUN_102f0fd5c(lVar22,param_1);
    }
  }
  lVar26 = _DAT_112f27e48;
  func_0x000107c61428(unaff_x20 + _DAT_112f27e48,auStack_90,0,0);
  ppuVar12 = (undefined **)(unaff_x20 + lVar26);
  func_0x000107c61618();
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar11 = ppuVar12;
    func_0x000107c61150();
    if (((ulong)ppuVar11 & 1) == 0) {
      func_0x000107c615e8(ppuVar12);
    }
    else {
      ppuVar11 = ppuVar12;
      func_0x000107c3f560();
      func_0x000107c61180();
      func_0x000107c615e8(ppuVar12);
      if (ppuVar11 != (undefined **)0x0) {
        puStack_c0 = (undefined *)0x0;
        uVar8 = 0;
        func_0x000104409d84(0);
        func_0x000107c5fc50(ppuVar11,&puStack_c0,uVar8);
        goto code_r0x000107c61170;
      }
    }
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_120 = puVar28;
  ppuStack_118 = ppuVar23;
  if (lVar22 != 0) {
    if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
      puVar10 = *(undefined **)
                 (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar10 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      func_0x000107c60480();
    }
    if (puVar10 != (undefined *)0x0) {
      iVar25 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f27e98);
      func_0x000107c615f0(lVar22);
      func_0x000108f487f0();
      if (iVar25 != 0) {
        uVar8 = 0;
        func_0x000104409d84(0);
        ppuVar11 = (undefined **)puVar9;
        func_0x000107c5fc48(puVar9,uVar8);
        func_0x000107c6142c(puVar9);
        func_0x000107c5d424(lVar22);
        func_0x000107c615e8(lVar22);
        goto code_r0x000107c61170;
      }
      func_0x000107c615e8(lVar22);
    }
  }
  func_0x000107c6142c(puVar9);
  puVar14 = param_1;
  FUN_102eeea74();
  uVar29 = param_1[1];
  if (uVar29 >> 0x3e == 0) {
    uVar30 = *(ulong *)((uVar29 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar30 = uVar29 & 0xffffffffffffff8;
    if ((uVar29 & 0x8000000000000000) != 0) {
      uVar30 = uVar29;
    }
    func_0x000107c60480();
  }
  puStack_128 = puVar14;
  if (uVar30 != 0) {
    if ((uVar29 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar29 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102ee09bc);
        (*pcVar7)();
      }
      lVar24 = *(long *)(uVar29 + 0x20);
      func_0x000107c6157c(lVar24);
    }
    else {
      lVar24 = 0;
      FUN_102f02a90(0,uVar29);
    }
    ppuVar11 = *(undefined ***)(lVar24 + 0x38);
    func_0x000107c61174(ppuVar11);
    func_0x000107c61574(lVar24);
    func_0x000107c5c6a8(ppuVar11);
    func_0x000107c61180();
    goto code_r0x000107c61170;
  }
  uStack_100 = 0;
  puVar14 = param_1;
  func_0x000102f0fe50();
  ppuVar12 = (undefined **)param_1[2];
  ppuVar23 = ppuVar12;
  func_0x000107c49fcc();
  if ((int)ppuVar23 != 0) {
    func_0x000107c516a0(ppuVar12);
    func_0x000107c61180();
    func_0x000107c5fc54();
    ppuVar11 = ppuVar12;
    goto code_r0x000107c61170;
  }
  uVar30 = unaff_x20 + lVar26;
  func_0x000107c61618();
  if (uVar30 == 0) {
    uVar27 = 0xffffffffffffffff;
  }
  else {
    uVar27 = uVar30;
    func_0x000107c61150();
    if ((uVar27 & 1) == 0) {
      uVar27 = 0xffffffffffffffff;
    }
    else {
      uVar27 = uVar30;
      func_0x000107c5b3f0(uVar30);
    }
    func_0x000107c615e8(uVar30);
  }
  uVar30 = *(ulong *)(unaff_x20 + _DAT_112f27e98);
  puVar13 = param_1;
  func_0x000102f10934(param_1,uVar27,uVar30);
  uStack_f8 = uVar30;
  if (((ulong)puVar13 & 1) != 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f27fa0);
    puVar9 = &UNK_1105e5fa0;
    func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
    func_0x000107c61614(puVar9 + 0x10);
    if (uVar29 >> 0x3e == 0) {
      uVar30 = *(ulong *)((uVar29 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar30 = uVar29 & 0xffffffffffffff8;
      if ((uVar29 & 0x8000000000000000) != 0) {
        uVar30 = uVar29;
      }
      func_0x000107c60480();
    }
    if (uVar30 != 0) {
      if ((uVar29 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar29 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x102ee09dc);
          (*pcVar7)();
        }
        lVar24 = *(long *)(uVar29 + 0x20);
        func_0x000107c6157c(puVar9);
        func_0x000107c6157c(lVar24);
      }
      else {
        func_0x000107c6157c(puVar9);
        lVar24 = 0;
        FUN_102f02a90(0,uVar29);
      }
      puVar14 = *(ulong **)(lVar24 + 0x28);
      func_0x000107c61174();
      func_0x000107c61574(lVar24);
      FUN_102f10b20();
      if (param_1 == (ulong *)0x0) {
LAB_102edfb80:
        uVar29 = 0;
        uVar30 = 0;
      }
      else {
        if (param_1[2] == 0) {
          func_0x000107c6142c();
          goto LAB_102edfb80;
        }
        uVar29 = param_1[4];
        uVar30 = param_1[5];
        func_0x000107c61434(uVar30);
        func_0x000107c6142c(param_1);
      }
      puVar10 = &UNK_1105e6bd0;
      func_0x000107c613fc(&UNK_1105e6bd0,0x48,7);
      *(undefined8 *)(puVar10 + 0x10) = uStack_110;
      *(code **)(puVar10 + 0x18) = FUN_102f08160;
      *(undefined **)(puVar10 + 0x20) = puVar9;
      *(ulong **)(puVar10 + 0x28) = puVar14;
      *(ulong *)(puVar10 + 0x30) = uVar29;
      *(ulong *)(puVar10 + 0x38) = uVar30;
      *(undefined8 *)(puVar10 + 0x40) = uVar8;
      puVar15 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      puVar16 = &UNK_1105e6bf8;
      func_0x000107c613fc(&UNK_1105e6bf8,0x20,7);
      *(undefined **)(puVar16 + 0x10) = &UNK_10db63af0;
      *(undefined **)(puVar16 + 0x18) = puVar10;
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_a0 = FUN_102f08234;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      pcStack_b0 = (code *)&UNK_10130cf2c;
      puStack_a8 = &UNK_1105e6c10;
      ppuVar23 = &puStack_c0;
      puStack_98 = puVar16;
      func_0x000107c60bc4(ppuVar23);
      puVar16 = puStack_98;
      func_0x000107c61174();
      puStack_108 = puVar14;
      func_0x000107c6157c(puVar9);
      func_0x000107c6157c(uVar8);
      func_0x000107c6157c(puVar10);
      func_0x000107c61574(puVar16);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      puStack_130 = puVar15;
      func_0x000107c60bd0(ppuVar23);
      puVar16 = PTR_PTR_1126b2470;
      func_0x000107c61168();
      puVar9 = &UNK_1105e6c48;
      func_0x000107c613fc(&UNK_1105e6c48,0x20,7);
      *(undefined **)(puVar9 + 0x10) = &UNK_10db63af0;
      *(undefined **)(puVar9 + 0x18) = puVar10;
      pcStack_a0 = (code *)0x102f0823c;
      puStack_c0 = puVar6;
      uStack_b8 = 0x42000000;
      pcStack_b0 = FUN_10279b358;
      puStack_a8 = &UNK_1105e6c60;
      ppuVar23 = &puStack_c0;
      puStack_98 = puVar9;
      func_0x000107c60bc4();
      puVar9 = puStack_98;
      func_0x000107c6157c(puVar10);
      func_0x000107c61574(puVar9);
      func_0x000107c5e560();
      func_0x000107c61180();
      func_0x000107c60bd0();
      FUN_10279b708();
      func_0x000107c613fc();
      ppuVar23[3] = (undefined *)0x3;
      ppuVar23[2] = (undefined *)0x1;
      ppuVar23[4] = puVar16;
      puVar9 = PTR_PTR_1126b2478;
      func_0x000107c610f8(PTR_PTR_1126b2478);
      func_0x000107c61174(puVar16);
      uVar8 = 0x112ebe5f8;
      func_0x0001000285a8(0x112ebe5f8,&UNK_10db74d60);
      ppuVar11 = ppuVar23;
      func_0x000107c5fc48(ppuVar23,uVar8);
      func_0x000107c61574(ppuVar23);
      func_0x000107c47134(puVar9);
      goto code_r0x000107c61170;
    }
    func_0x000107c61574(puVar9);
  }
  puStack_130 = (undefined *)0x0;
  puVar13 = param_1;
  FUN_102eeed60();
  uVar29 = unaff_x20 + lVar26;
  puStack_108 = puVar13;
  func_0x000107c61618();
  if (uVar29 != 0) {
    uVar30 = uVar29;
    func_0x000107c61150();
    if ((uVar30 & 1) != 0) {
      func_0x000107c5b3f0();
    }
    func_0x000107c615e8(uVar29);
  }
  ppuVar23 = (undefined **)(unaff_x20 + lVar26);
  func_0x000107c61618();
  if (ppuVar23 != (undefined **)0x0) {
    ppuVar11 = ppuVar23;
    func_0x000107c3fe68();
    func_0x000107c61180();
    func_0x000107c615e8(ppuVar23);
    if (ppuVar11 != (undefined **)0x0) {
      func_0x000107c4d288(ppuVar11);
      goto code_r0x000107c61170;
    }
  }
  uVar29 = unaff_x20 + lVar26;
  func_0x000107c61618();
  if (uVar29 == 0) {
LAB_102ee0264:
    uVar8 = 4;
    goto code_r0x000102ee0268;
  }
  uVar30 = uVar29;
  func_0x000107c61150();
  if ((uVar30 & 1) == 0) {
    func_0x000107c615e8(uVar29);
    goto LAB_102ee0264;
  }
  uVar30 = uVar29;
  func_0x000107c5b3f0();
  func_0x000107c615e8(uVar29);
  uVar8 = 4;
  uStack_138 = 0xce;
  switch(uVar30) {
  case 0xb:
  case 0x46:
    uVar8 = 6;
    break;
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x27:
  case 0x32:
  case 0x41:
  case 0x45:
  case 0x51:
  case 0x5a:
    uVar8 = 7;
    uStack_138 = 0x7f;
    goto LAB_102ee026c;
  case 0xe:
    uVar8 = 8;
    break;
  default:
    goto LAB_102ee026c;
  case 0x1a:
    uVar8 = 0xf;
    break;
  case 0x3c:
    uVar8 = 0x1a;
    break;
  case 0x6f:
    uVar8 = 0x2e;
  }
code_r0x000102ee0268:
  uStack_138 = 0xce;
LAB_102ee026c:
  puVar13 = param_1;
  FUN_102f10f44();
  if (((ulong)puVar13 & 1) == 0) {
    uStack_d0 = 8;
  }
  else {
    uStack_d0 = 6;
  }
  uStack_140 = *(undefined8 *)(unaff_x20 + _DAT_112f27ef0);
  ppuVar23 = ppuStack_118;
  func_0x000107c61174();
  ppuVar11 = ppuVar12;
  func_0x000102f119c4(ppuVar12,puStack_108,0);
  uVar17 = 0;
  FUN_102f09540(0,0x112d60fb0,&PTR_PTR_1126b3568);
  ppuVar18 = ppuVar11;
  func_0x000107c5fc48(ppuVar11,uVar17);
  ppuStack_148 = ppuVar18;
  func_0x000107c6142c(ppuVar11);
  puVar13 = param_1;
  FUN_102eeefc4(param_1,puVar14);
  puVar19 = param_1;
  puStack_150 = puVar13;
  FUN_102eef448();
  puStack_158 = puVar19;
  ppuStack_118 = ppuVar23;
  if (lVar22 == 0) {
    lStack_168 = 0;
    lStack_160 = 0;
  }
  else {
    lVar26 = lVar22;
    func_0x000107c4e0fc();
    func_0x000107c61180();
    lVar20 = lVar22;
    lStack_160 = lVar26;
    func_0x000107c4e0f8();
    func_0x000107c61180();
    lStack_168 = lVar20;
  }
  puVar13 = param_1;
  FUN_102eef508(param_1,uStack_100);
  uStack_16c = (uint)puVar13;
  puVar13 = param_1;
  func_0x000102f12d54();
  puVar19 = param_1;
  FUN_102f10f44();
  puVar21 = param_1;
  func_0x000102f12e8c(param_1,uStack_f8);
  uVar29 = *param_1;
  uStack_17c = SUB84(puVar19,0);
  if (uVar29 >> 0x3e == 0) {
    uVar30 = *(ulong *)((uVar29 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar30 = uVar29 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar29) {
      uVar30 = uVar29;
    }
    func_0x000107c60480();
  }
  ppuVar23 = ppuVar12;
  func_0x000107c4a288();
  if (((ulong)ppuVar23 & 1) == 0) {
    ppuVar23 = ppuVar12;
    func_0x000107c61150(ppuVar12,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_isPlanStickerWithRestrictedDesti_1125fc2a0);
    if (((ulong)ppuVar23 & 1) != 0) {
      ppuVar11 = ppuVar12;
      func_0x000107c4a1cc();
      func_0x000107c61180();
      if (ppuVar11 != (undefined **)0x0) {
        func_0x000107c3ebcc();
        goto code_r0x000107c61170;
      }
    }
    uStack_f8 = CONCAT44(uStack_f8._4_4_,1);
  }
  else {
    uStack_f8 = uStack_f8 & 0xffffffff00000000;
  }
  ppuVar23 = ppuVar12;
  func_0x000107c4a288();
  ppuVar11 = ppuVar12;
  func_0x000107c61150(ppuVar12,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_isPlanStickerWithRestrictedDesti_1125fc2a0);
  uStack_180 = (uint)puVar13;
  uStack_184 = SUB84(ppuVar23,0);
  uStack_178 = uVar8;
  if (((ulong)ppuVar11 & 1) != 0) {
    func_0x000107c4a1cc();
    func_0x000107c61180();
    if (ppuVar12 != (undefined **)0x0) {
      func_0x000107c3ebcc();
      ppuVar11 = ppuVar12;
      goto code_r0x000107c61170;
    }
  }
  puVar13 = puStack_128;
  func_0x000107c61174();
  func_0x000107c615f0(lVar22);
  puVar28 = puStack_120;
  FUN_102f0a73c(puStack_120,param_1);
  lVar26 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar26 + -8) + 0x38))(puVar28,0,1,lVar26);
  func_0x000103f5acf4(0);
  func_0x000107c610f8();
  *(undefined1 **)((long)alStack_1a0 + lVar24 + 8) = puVar28;
  uVar8 = uStack_100;
  *(ulong **)((long)&uStack_1a8 + lVar24) = puVar13;
  *(undefined8 *)((long)alStack_1a0 + lVar24) = uVar8;
  *(long *)((long)&uStack_1b0 + lVar24) = lVar22;
  abStack_1c0[lVar24 + 8] = 0;
  abStack_1c0[lVar24 + 7] = (byte)uStack_184;
  abStack_1c0[lVar24 + 6] = 0;
  (abStack_1c0 + lVar24 + 4)[0] = 0;
  (abStack_1c0 + lVar24 + 4)[1] = 0;
  bVar5 = (byte)uStack_17c;
  uVar1 = uStack_16c & 1;
  uVar2 = uStack_180 & 1;
  abStack_1c0[lVar24 + 3] = (byte)uStack_f8;
  abStack_1c0[lVar24 + 2] = 1 < (long)uVar30;
  abStack_1c0[lVar24 + 1] = (byte)puVar21 & 1;
  abStack_1c0[lVar24] = bVar5 & 1;
  lVar26 = lStack_168;
  func_0x000103f5a868(lStack_160,lStack_168,0,uVar1,0,puVar14 != (ulong *)0x0,0,uVar2);
  puVar9 = puStack_130;
  uVar8 = uStack_178;
  ppuVar11 = (undefined **)param_1[0xe];
  if (ppuVar11 == (undefined **)0x0) {
    func_0x00010011df08();
    func_0x000107c61180();
    func_0x000107c5faec();
  }
  else {
    uVar29 = param_1[0xd];
    func_0x000107c61434();
    puVar14 = param_1;
    FUN_102f130bc(param_1);
    puVar13 = param_1;
    FUN_102f10b20();
    FUN_102f131a4();
    uVar17 = 0;
    func_0x000103f5e1a4(0);
    func_0x000107c610f8();
    *(undefined8 *)((long)alStack_1a0 + lVar24) = 0;
    *(byte *)((long)&uStack_1a8 + lVar24) = (byte)param_1 & 1;
    *(ulong **)((long)&uStack_1b0 + lVar24) = puVar13;
    *(undefined8 *)((long)auStack_1e0 + lVar24 + 0x18) = 0;
    *(undefined8 *)((long)auStack_1e0 + lVar24 + 0x10) = 0;
    pbVar3 = abStack_1c0 + lVar24;
    pbVar4 = abStack_1c0 + lVar24 + 8;
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    *(undefined8 *)((long)auStack_1e0 + lVar24 + 8) = 0;
    *(undefined8 *)((long)auStack_1e0 + lVar24) = 0;
    func_0x000103f5cdfc(uVar17,uVar29,ppuVar11,uVar8,0x17,uStack_d0,uStack_138,puVar14,lVar26);
    *(long *)((long)alStack_1a0 + lVar24 + 8) = unaff_x20;
    *(undefined2 *)((long)alStack_1a0 + lVar24) = 0;
    *(undefined **)((long)&uStack_1b0 + lVar24) = puVar9;
    *(ulong *)((long)&uStack_1a8 + lVar24) = uVar29;
    ppuVar11 = ppuStack_118;
    func_0x000107c3edb0(uStack_140);
    func_0x000107c61180();
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
  return;
}



/* Entry: 102ee09dc; end: 102ee0a0f;  */

void FUN_102ee09dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar5 = &puStack_80;
  pcVar3 = "preloadSendTo(with:sendParameters:)";
  func_0x0001000c10c0("preloadSendTo(with:sendParameters:)");
  func_0x000107c61180();
  puVar4 = &UNK_1105e8458;
  func_0x000107c613fc(&UNK_1105e8458,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = uVar2;
  *(undefined8 *)(puVar4 + 0x28) = uVar6;
  uStack_60 = 0x102f09830;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1105e8470;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c6157c(uVar1);
  func_0x000107c61434(param_1);
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(uVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c4e524(pcVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102ee0a10; end: 102ee0a93; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceImpl preloadSendToWithSnapDocBundles:sendParameters:] */

void FUN_102ee0a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ebb4f0;
  func_0x0001000285a8(0x112ebb4f0,&UNK_10db63a20);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_102ede974(param_3,param_4);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102ee0a94; end: 102ee38bb;  */

/* WARNING: Removing unreachable block (ram,0x000102ee14c4) */
/* WARNING: Removing unreachable block (ram,0x000102ee2190) */
/* WARNING: Removing unreachable block (ram,0x000102ee19e0) */
/* WARNING: Removing unreachable block (ram,0x000102ee26a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102ee0a94(undefined *param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  char *pcVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  long *plVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  long unaff_x20;
  undefined8 uVar27;
  long lVar28;
  undefined *puVar29;
  ulong uVar30;
  undefined8 *puVar31;
  ulong uVar32;
  ulong uVar33;
  undefined *puVar34;
  long lStack_698;
  long lStack_680;
  undefined *puStack_678;
  undefined8 uStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined8 uStack_658;
  undefined *puStack_650;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 auStack_548 [24];
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  ulong uStack_348;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined3 uStack_308;
  undefined5 uStack_305;
  undefined3 uStack_300;
  undefined5 uStack_2fd;
  undefined3 uStack_2f8;
  undefined5 uStack_2f5;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  ulong uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined3 uStack_270;
  undefined5 uStack_26d;
  undefined3 uStack_268;
  undefined8 uStack_265;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [32];
  undefined1 auStack_208 [24];
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  code *pcStack_130;
  undefined *puStack_128;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uVar16 = 0x112f27e68;
  func_0x0001000285a8(0x112f27e68,&UNK_10db63a10);
  func_0x000107c613fc();
  lVar5 = 0;
  func_0x00010095c380();
  uVar27 = *(undefined8 *)(lVar5 + 0x10);
  uVar6 = uVar27;
  func_0x000107c6157c();
  func_0x000103edf0bc();
  func_0x000107c61574(uVar27);
  lVar28 = _DAT_112f27e48;
  func_0x000107c61428(unaff_x20 + _DAT_112f27e48,auStack_208,0,0);
  lVar7 = unaff_x20 + lVar28;
  func_0x000107c61618();
  if (lVar7 != 0) {
    func_0x000107c51dd0();
    func_0x000107c615e8(lVar7);
  }
  uVar30 = unaff_x20 + lVar28;
  func_0x000107c61618();
  if (uVar30 != 0) {
    uVar32 = uVar30;
    func_0x000107c61150();
    if ((uVar32 & 1) == 0) {
      func_0x000107c615e8(uVar30);
    }
    else {
      uVar27 = 0x112ebb4f0;
      func_0x0001000285a8(0x112ebb4f0,&UNK_10db63a20);
      puVar8 = param_1;
      func_0x000107c5fc48(param_1,uVar27);
      func_0x000107c51dd4(uVar30);
      func_0x000107c615e8(uVar30);
      func_0x000107c61170(puVar8);
    }
  }
  puVar8 = &UNK_1105e6108;
  func_0x000107c613fc(&UNK_1105e6108,0x20,7);
  *(long *)(puVar8 + 0x10) = unaff_x20;
  *(long *)(puVar8 + 0x18) = lVar5;
  puVar9 = &UNK_1105e6130;
  func_0x000107c613fc(&UNK_1105e6130,0x18,7);
  plVar23 = (long *)(puVar9 + 0x10);
  *plVar23 = 0;
  func_0x000107c61580(lVar5,2);
  lVar7 = unaff_x20;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar30 = param_2;
  func_0x000107c51edc();
  uVar27 = 0;
  FUN_102733d5c();
  uVar3 = (uint)uVar30;
  if ((int)uVar3 < 3) {
    if (2 < uVar3) {
LAB_102ee0d08:
      func_0x000107c61574(lVar5);
      func_0x000107c61170(lVar7);
      puStack_150 = (undefined *)CONCAT44(puStack_150._4_4_,uVar3);
      func_0x000107c60614(uVar27,&puStack_150,uVar27,PTR___ss5Int32VN_11034ee20);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee0d38);
      (*pcVar1)();
    }
LAB_102ee0c48:
    lVar24 = unaff_x20 + lVar28;
    func_0x000107c61618();
    if (lVar24 == 0) {
LAB_102ee0d94:
      FUN_102f04b7c(0,lVar5);
      func_0x000107c61574(puVar9);
      func_0x000107c61578(lVar5,2);
      func_0x000107c61170(lVar7);
      func_0x000107c61574(puVar8);
      return uVar6;
    }
    lVar10 = lVar24;
    func_0x000107c5d17c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar24);
    if (lVar10 == 0) goto LAB_102ee0d94;
    puVar11 = PTR_PTR_1126c4f00;
    func_0x000107c610f8();
    func_0x000107c48f0c();
    lVar24 = *plVar23;
    *plVar23 = (long)puVar11;
    func_0x000107c61170(lVar24);
    lVar24 = *plVar23;
    if (lVar24 != 0) {
      func_0x000107c61174();
      func_0x000107c5770c();
      func_0x000107c61170(lVar24);
    }
    func_0x000107c615e8(lVar10);
    lStack_698 = 0;
  }
  else if (uVar3 == 3) {
    lVar24 = unaff_x20 + lVar28;
    func_0x000107c61618();
    if (lVar24 == 0) goto LAB_102ee0d94;
    lStack_698 = lVar24;
    func_0x000107c5d1b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar24);
    if (lStack_698 == 0) goto LAB_102ee0d94;
  }
  else {
    lStack_698 = 0;
    if (uVar3 != 5) {
      if (uVar3 != 4) goto LAB_102ee0d08;
      goto LAB_102ee0c48;
    }
  }
  lVar24 = unaff_x20 + lVar28;
  func_0x000107c61618();
  if (lVar24 == 0) {
    lStack_680 = 0;
  }
  else {
    lStack_680 = lVar24;
    func_0x000107c4adfc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar24);
  }
  lVar24 = unaff_x20 + lVar28;
  func_0x000107c61618();
  if (lVar24 == 0) {
    func_0x000107c51edc(param_2);
    iVar2 = 0;
    uVar30 = 0;
  }
  else {
    lVar10 = lVar24;
    func_0x000107c5ad2c();
    iVar2 = (int)lVar10;
    func_0x000107c615e8(lVar24);
    uVar32 = param_2;
    func_0x000107c51edc();
    uVar30 = 0;
    if (((int)uVar32 == 5) && (iVar2 != 0)) {
      uVar32 = unaff_x20 + lVar28;
      func_0x000107c61618();
      if (uVar32 == 0) {
LAB_102ee0ea0:
        uVar30 = 0;
      }
      else {
        uVar30 = uVar32;
        func_0x000107c61150();
        if ((uVar30 & 1) == 0) {
LAB_102ee0e98:
          func_0x000107c615e8(uVar32);
          goto LAB_102ee0ea0;
        }
        uVar33 = uVar32;
        func_0x000107c4cca4();
        func_0x000107c61180();
        if (uVar33 == 0) goto LAB_102ee0e98;
        uVar12 = 0;
        FUN_102f09540(0,0x112ebb2d0,&PTR_PTR_1126c3358);
        uVar30 = uVar33;
        func_0x000107c5fc54(uVar33,uVar12);
        func_0x000107c61170(uVar33);
        func_0x000107c615e8(uVar32);
      }
      iVar2 = 1;
    }
  }
  puVar11 = &UNK_1105e6158;
  func_0x000107c613fc(&UNK_1105e6158,0x68,7);
  *(long *)(puVar11 + 0x10) = lVar7;
  *(ulong *)(puVar11 + 0x18) = param_2;
  *(undefined **)(puVar11 + 0x20) = puVar9;
  *(long *)(puVar11 + 0x28) = lStack_698;
  *(undefined8 *)(puVar11 + 0x30) = param_3;
  *(long *)(puVar11 + 0x38) = lStack_680;
  puVar11[0x40] = (char)iVar2;
  *(ulong *)(puVar11 + 0x48) = uVar30;
  *(undefined8 *)(puVar11 + 0x50) = 0x102f02a40;
  *(undefined **)(puVar11 + 0x58) = puVar8;
  *(long *)(puVar11 + 0x60) = lVar5;
  puVar13 = &UNK_1105e6180;
  func_0x000107c613fc(&UNK_1105e6180,0x28,7);
  *(long *)(puVar13 + 0x10) = lVar7;
  *(code **)(puVar13 + 0x18) = FUN_102f02a48;
  *(undefined **)(puVar13 + 0x20) = puVar11;
  uVar32 = param_2;
  func_0x000107c61150(param_2,PTR_s_respondsToSelector__11262c7e0,PTR_s_disableSplitting_1125bdbd8);
  if ((uVar32 & 1) == 0) {
    func_0x000107c61434(uVar30);
    lVar28 = lVar7;
    func_0x000107c61174(lVar7);
    func_0x000107c61580(lVar5,2);
    func_0x000107c61174(lVar28);
    func_0x000107c615f4(param_2,2);
    func_0x000107c61580(puVar9,2);
    func_0x000107c61580(puVar8,2);
    func_0x000107c615f4(param_3,2);
    puVar22 = (undefined *)0x2;
    func_0x000107c615f4(lStack_680);
    lVar24 = lStack_698;
    func_0x000107c61174(lStack_698);
    func_0x000107c61174(lVar28);
    func_0x000107c61174(lVar24);
    func_0x000107c6157c(puVar11);
joined_r0x000102ee10bc:
    uVar33 = 0;
    if ((long)param_1 < 0) goto LAB_102ee201c;
LAB_102ee10c0:
    if (((ulong)param_1 >> 0x3e & 1) != 0) goto LAB_102ee201c;
    puVar14 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    func_0x000107c61434(uVar30);
    lVar28 = lVar7;
    func_0x000107c61174(lVar7);
    func_0x000107c61580(lVar5,2);
    func_0x000107c61174(lVar28);
    func_0x000107c615f4(param_2,2);
    func_0x000107c61580(puVar9,2);
    func_0x000107c61580(puVar8,2);
    func_0x000107c615f4(param_3,2);
    puVar22 = (undefined *)0x2;
    func_0x000107c615f4(lStack_680);
    lVar24 = lStack_698;
    func_0x000107c61174(lStack_698);
    func_0x000107c61174(lVar28);
    func_0x000107c61174(lVar24);
    func_0x000107c6157c(puVar11);
    uVar32 = param_2;
    func_0x000107c41f1c();
    func_0x000107c61180();
    if (uVar32 == 0) goto joined_r0x000102ee10bc;
    uVar33 = uVar32;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar32);
    if (-1 < (long)param_1) goto LAB_102ee10c0;
LAB_102ee201c:
    puVar14 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar14 = param_1;
    }
    func_0x000107c60480();
  }
  iVar4 = (int)param_2;
  if (((uVar33 & 1) == 0) && (puVar14 == (undefined *)0x1)) {
    if ((ulong)param_1 >> 0x3e == 0) {
      puVar14 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar14 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < param_1) {
        puVar14 = param_1;
      }
      func_0x000107c60480();
    }
    if (puVar14 == (undefined *)0x0) goto LAB_102ee2044;
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee2d18);
        (*pcVar1)();
      }
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c615f0(uVar12);
    }
    else {
      uVar12 = 0;
      puVar22 = param_1;
      FUN_10274d138();
    }
    uVar18 = uVar12;
    func_0x000107c4e090();
    func_0x000107c61180();
    func_0x000107c615e8(uVar12);
    uVar12 = uVar18;
    func_0x000107c3eea8();
    func_0x000107c61180();
    func_0x000107c61170(uVar18);
    uVar18 = uVar12;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar12);
    puVar14 = &UNK_1105e6298;
    func_0x000107c613fc(&UNK_1105e6298,0x28,7);
    *(code **)(puVar14 + 0x10) = FUN_102f02a84;
    *(undefined **)(puVar14 + 0x18) = puVar13;
    *(undefined **)(puVar14 + 0x20) = param_1;
    lVar24 = *(long *)(lVar7 + _DAT_112f27e60);
    func_0x000107c6157c(puVar13);
    func_0x000107c61434(param_1);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar28 = lVar24;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar24);
    puVar34 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar28 != 0) {
      puVar34 = &UNK_1105e6388;
      func_0x000107c613fc(&UNK_1105e6388,0x30,7);
      *(undefined8 *)(puVar34 + 0x10) = 0x102f099ec;
      *(undefined **)(puVar34 + 0x18) = puVar14;
      *(undefined8 *)(puVar34 + 0x20) = uVar18;
      *(undefined **)(puVar34 + 0x28) = puVar22;
      pcStack_130 = (code *)0x102f09988;
      puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_148 = 0x42000000;
      puStack_140 = &UNK_100f1c768;
      puStack_138 = &UNK_1105e63a0;
      ppuVar21 = &puStack_150;
      puStack_128 = puVar34;
      func_0x000107c60bc4(ppuVar21);
      puVar34 = puStack_128;
      func_0x000107c6157c(puVar14);
      func_0x00010006c00c(uVar18,puVar22);
      func_0x000107c61574(puVar34);
      func_0x000107c440d8(lVar28);
      func_0x000107c61574(puVar14);
      func_0x00010006c090(uVar18,puVar22);
      func_0x000107c61578(lVar5,3);
      func_0x000107c61578(puVar8,2);
      func_0x000107c61574(puVar9);
      func_0x000107c615e8(param_2);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c61574(puVar11);
      func_0x000107c61574(puVar13);
      func_0x000107c61170(lStack_698);
      func_0x000107c61170(lStack_698);
      func_0x000107c615e8(param_3);
      func_0x000107c615ec(lStack_680,2);
      func_0x000107c6142c(uVar30);
      func_0x000107c60bd0(ppuVar21);
      func_0x000107c61574(puVar9);
      func_0x000107c615e8(lVar28);
      return uVar6;
    }
    if (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) &&
       (puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8, func_0x000107c60480(),
       puVar25 != (undefined *)0x0)) {
      param_1 = puVar34;
    }
    lVar28 = *(long *)(lVar7 + _DAT_112f27e70);
    if (lVar28 != 0) {
      puVar34 = &UNK_1105e6338;
      func_0x000107c613fc(&UNK_1105e6338,0x28,7);
      *(code **)(puVar34 + 0x10) = FUN_102f02a48;
      *(undefined **)(puVar34 + 0x18) = puVar11;
      *(undefined **)(puVar34 + 0x20) = param_1;
      pcStack_130 = (code *)0x102f09ba4;
      puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_148 = 0x42000000;
      puStack_140 = &UNK_1000f6b44;
      puStack_138 = &UNK_1105e6350;
      ppuVar21 = &puStack_150;
      puStack_128 = puVar34;
      func_0x000107c60bc4(ppuVar21);
      puVar34 = puStack_128;
      func_0x000107c6157c(puVar11);
      func_0x000107c615f0(lVar28);
      func_0x000107c61434(param_1);
      func_0x000107c61574(puVar34);
      func_0x000107c4e524(lVar28);
      func_0x000107c60bd0(ppuVar21);
      func_0x000107c61574(puVar14);
      func_0x000107c615e8(lVar28);
      func_0x00010006c090(uVar18,puVar22);
      func_0x000107c61578(lVar5,3);
      func_0x000107c61578(puVar8,2);
      func_0x000107c61578(puVar9,2);
      func_0x000107c615e8(param_2);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c61574(puVar11);
      func_0x000107c61574(puVar13);
      func_0x000107c61170(lStack_698);
      func_0x000107c61170(lStack_698);
      func_0x000107c615e8(param_3);
LAB_102ee1a8c:
      func_0x000107c615ec(lStack_680,2);
      goto LAB_102ee273c;
    }
    puVar25 = param_1;
    FUN_102f04958(param_1,param_2);
    func_0x000107c61428(plVar23,auStack_228,0,0);
    lVar24 = *plVar23;
    lVar28 = *(long *)(puVar25 + 0x10);
    if (lVar28 == 0) {
      func_0x000107c61174();
      puVar34 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_1f0 = puVar34;
      func_0x000107c61174();
      func_0x000102f031f8(0,lVar28,0);
      uVar12 = *(undefined8 *)(lVar7 + _DAT_112f27e78);
      puVar31 = (undefined8 *)(puVar25 + 0x20);
      do {
        puVar34 = puStack_1f0;
        uStack_a8 = puVar31[1];
        uStack_b0 = *puVar31;
        uStack_98 = puVar31[3];
        uStack_a0 = puVar31[2];
        uStack_90 = puVar31[4];
        uStack_7f = *(undefined8 *)((long)puVar31 + 0x31);
        uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)puVar31 + 0x29) >> 0x38);
        uStack_88 = (undefined1)puVar31[5];
        uStack_87 = (undefined7)((ulong)puVar31[5] >> 8);
        FUN_102edda34(&uStack_b0,&puStack_150);
        uVar15 = uVar12;
        func_0x000107c5c734(uVar12);
        func_0x000107c61180();
        puVar19 = &uStack_b0;
        func_0x000102f0dd84(puVar19,uVar15,lStack_680,0);
        func_0x000107c615e8(uVar15);
        FUN_102edd9d4(&uStack_b0);
        uVar32 = *(ulong *)(puVar34 + 0x10);
        puStack_1f0 = puVar34;
        if (*(ulong *)(puVar34 + 0x18) >> 1 <= uVar32) {
          func_0x000102f031f8(1 < *(ulong *)(puVar34 + 0x18),uVar32 + 1,1);
        }
        *(ulong *)(puStack_1f0 + 0x10) = uVar32 + 1;
        *(undefined8 **)(puStack_1f0 + uVar32 * 8 + 0x20) = puVar19;
        puVar31 = puVar31 + 8;
        lVar28 = lVar28 + -1;
        puVar34 = puStack_1f0;
      } while (lVar28 != 0);
    }
    puVar26 = &UNK_1105e61a8;
    func_0x000107c613fc(&UNK_1105e61a8,0xa8,7);
    func_0x000107c613fc(uVar16,0x18,7);
    uVar16 = 0;
    func_0x00010095c380();
    func_0x000107c6142c(puVar25);
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2fd = 0;
    uStack_2f8 = 0;
    uStack_305 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_265 = 0;
    uStack_268 = 0;
    uStack_280 = 0;
    uStack_288 = 0;
    uStack_270 = 0;
    uStack_26d = 0;
    uStack_278 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_230 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    puStack_358 = param_1;
    puStack_350 = puVar34;
    uStack_348 = param_2;
    lStack_340 = lVar24;
    lStack_338 = lStack_698;
    uStack_330 = param_3;
    uStack_328 = uVar16;
    puStack_2c0 = param_1;
    puStack_2b8 = puVar34;
    uStack_2b0 = param_2;
    lStack_2a8 = lVar24;
    lStack_2a0 = lStack_698;
    uStack_298 = param_3;
    uStack_290 = uVar16;
    func_0x000107c615f0(param_3);
    func_0x000107c61434(param_1);
    func_0x000107c615f0(param_2);
    func_0x000107c61174();
    FUN_102f04d58(&puStack_358,&puStack_150);
    func_0x000102f04d94(&puStack_2c0);
    puVar34 = puStack_350;
    *(undefined8 *)(puVar26 + 0x78) = uStack_2f0;
    *(ulong *)(puVar26 + 0x70) = CONCAT53(uStack_2f5,uStack_2f8);
    *(ulong *)(puVar26 + 0x88) = CONCAT71(uStack_2df,uStack_2e0);
    *(undefined8 *)(puVar26 + 0x80) = uStack_2e8;
    *(undefined8 *)(puVar26 + 0x98) = uStack_2d0;
    *(undefined8 *)(puVar26 + 0x90) = uStack_2d8;
    *(undefined8 *)(puVar26 + 0xa0) = uStack_2c8;
    *(undefined8 *)(puVar26 + 0x38) = uStack_330;
    *(long *)(puVar26 + 0x30) = lStack_338;
    *(undefined8 *)(puVar26 + 0x48) = uStack_320;
    *(undefined8 *)(puVar26 + 0x40) = uStack_328;
    *(undefined8 *)(puVar26 + 0x58) = uStack_310;
    *(undefined8 *)(puVar26 + 0x50) = uStack_318;
    *(ulong *)(puVar26 + 0x68) = CONCAT53(uStack_2fd,uStack_300);
    *(ulong *)(puVar26 + 0x60) = CONCAT53(uStack_305,uStack_308);
    *(undefined **)(puVar26 + 0x18) = puStack_350;
    *(undefined **)(puVar26 + 0x10) = puStack_358;
    *(long *)(puVar26 + 0x28) = lStack_340;
    *(ulong *)(puVar26 + 0x20) = uStack_348;
    if (iVar2 != 0) {
      if ((ulong)puStack_350 >> 0x3e == 0) {
        puVar25 = *(undefined **)(((ulong)puStack_350 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar25 = (undefined *)((ulong)puStack_350 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puStack_350) {
          puVar25 = puStack_350;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(puVar34);
      if (puVar25 != (undefined *)0x0) {
        uVar32 = 0;
        do {
          if (((ulong)puVar34 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar34 & 0xffffffffffffff8) + 0x10) <= uVar32) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee2d1c);
              (*pcVar1)();
            }
            uVar33 = *(ulong *)(puVar34 + uVar32 * 8 + 0x20);
            func_0x000107c6157c(uVar33);
          }
          else {
            uVar33 = uVar32;
            FUN_102f02a90(uVar32,puVar34);
          }
          if (SCARRY8(uVar32,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee1880);
            (*pcVar1)();
          }
          puVar29 = (undefined *)(uVar32 + 1);
          uVar16 = *(undefined8 *)(uVar33 + 0x10);
          func_0x000107c4008c(uVar16);
          func_0x000107c61180();
          puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c45a48();
          func_0x000107c58e98(uVar16);
          func_0x000107c61574(uVar33);
          func_0x000107c61170(uVar16);
          func_0x000107c61170(puVar17);
          uVar32 = uVar32 + 1;
        } while (puVar29 != puVar25);
      }
      func_0x000107c6142c(puVar34);
      uVar16 = *(undefined8 *)(puVar26 + 0xa0);
      *(ulong *)(puVar26 + 0xa0) = uVar30;
      func_0x000107c61434(uVar30);
      func_0x000107c6142c(uVar16);
    }
    uStack_428 = *(undefined8 *)(puVar26 + 0x78);
    uStack_430 = *(undefined8 *)(puVar26 + 0x70);
    uStack_4b8 = *(undefined8 *)(puVar26 + 0x88);
    uStack_4c0 = *(undefined8 *)(puVar26 + 0x80);
    uStack_438 = *(undefined8 *)(puVar26 + 0x68);
    uStack_440 = *(undefined8 *)(puVar26 + 0x60);
    uStack_4c8 = *(undefined8 *)(puVar26 + 0x78);
    uStack_4d0 = *(undefined8 *)(puVar26 + 0x70);
    uStack_418 = *(undefined8 *)(puVar26 + 0x88);
    uStack_420 = *(undefined8 *)(puVar26 + 0x80);
    uStack_4a8 = *(undefined8 *)(puVar26 + 0x98);
    uStack_4b0 = *(undefined8 *)(puVar26 + 0x90);
    uStack_468 = *(undefined8 *)(puVar26 + 0x38);
    uStack_470 = *(undefined8 *)(puVar26 + 0x30);
    uStack_4f8 = *(undefined8 *)(puVar26 + 0x48);
    uStack_500 = *(undefined8 *)(puVar26 + 0x40);
    uStack_478 = *(undefined8 *)(puVar26 + 0x28);
    uStack_480 = *(undefined8 *)(puVar26 + 0x20);
    uStack_508 = *(undefined8 *)(puVar26 + 0x38);
    uStack_510 = *(undefined8 *)(puVar26 + 0x30);
    uStack_458 = *(undefined8 *)(puVar26 + 0x48);
    uStack_460 = *(undefined8 *)(puVar26 + 0x40);
    uStack_4e8 = *(undefined8 *)(puVar26 + 0x58);
    uStack_4f0 = *(undefined8 *)(puVar26 + 0x50);
    uStack_448 = *(undefined8 *)(puVar26 + 0x58);
    uStack_450 = *(undefined8 *)(puVar26 + 0x50);
    uStack_4d8 = *(undefined8 *)(puVar26 + 0x68);
    uStack_4e0 = *(undefined8 *)(puVar26 + 0x60);
    uStack_528 = *(undefined8 *)(puVar26 + 0x18);
    uStack_530 = *(undefined8 *)(puVar26 + 0x10);
    uStack_518 = *(undefined8 *)(puVar26 + 0x28);
    uStack_520 = *(undefined8 *)(puVar26 + 0x20);
    uStack_488 = *(undefined8 *)(puVar26 + 0x18);
    uStack_490 = *(undefined8 *)(puVar26 + 0x10);
    uStack_408 = *(undefined8 *)(puVar26 + 0x98);
    uStack_410 = *(undefined8 *)(puVar26 + 0x90);
    uStack_4a0 = *(undefined8 *)(puVar26 + 0xa0);
    uStack_400 = *(undefined8 *)(puVar26 + 0xa0);
    FUN_102f04dc8(&uStack_490);
    puVar31 = (undefined8 *)(lVar7 + _DAT_112f27e80);
    func_0x000107c61428(puVar31,auStack_548,1,0);
    uStack_3e8 = puVar31[1];
    uStack_3f0 = *puVar31;
    uStack_3d8 = puVar31[3];
    uStack_3e0 = puVar31[2];
    uStack_3c8 = puVar31[5];
    uStack_3d0 = puVar31[4];
    uStack_3b8 = puVar31[7];
    uStack_3c0 = puVar31[6];
    uStack_3a8 = puVar31[9];
    uStack_3b0 = puVar31[8];
    uStack_398 = puVar31[0xb];
    uStack_3a0 = puVar31[10];
    uStack_388 = puVar31[0xd];
    uStack_390 = puVar31[0xc];
    uStack_378 = puVar31[0xf];
    uStack_380 = puVar31[0xe];
    uStack_368 = puVar31[0x11];
    uStack_370 = puVar31[0x10];
    uStack_360 = puVar31[0x12];
    puVar31[1] = uStack_488;
    *puVar31 = uStack_490;
    puVar31[3] = uStack_478;
    puVar31[2] = uStack_480;
    puVar31[9] = uStack_448;
    puVar31[8] = uStack_450;
    puVar31[0xb] = uStack_438;
    puVar31[10] = uStack_440;
    puVar31[5] = uStack_468;
    puVar31[4] = uStack_470;
    puVar31[7] = uStack_458;
    puVar31[6] = uStack_460;
    puVar31[0x12] = uStack_400;
    puVar31[0xf] = uStack_418;
    puVar31[0xe] = uStack_420;
    puVar31[0x11] = uStack_408;
    puVar31[0x10] = uStack_410;
    puVar31[0xd] = uStack_428;
    puVar31[0xc] = uStack_430;
    FUN_102f04d58(&uStack_530,&puStack_150);
    FUN_102f080f0(&uStack_3f0,0x112f27e88,&UNK_10db63a18);
    FUN_102ee38bc(param_1,param_2);
    uVar32 = *(ulong *)(*(long *)(lVar7 + _DAT_112f27e90) + _DAT_113077160);
    func_0x000107c51e2c();
    if ((uVar32 & 1) != 0) {
      uStack_e8 = *(undefined8 *)(puVar26 + 0x78);
      uStack_f0 = *(undefined8 *)(puVar26 + 0x70);
      uStack_d8 = *(undefined8 *)(puVar26 + 0x88);
      uStack_e0 = *(undefined8 *)(puVar26 + 0x80);
      uStack_c8 = *(undefined8 *)(puVar26 + 0x98);
      uStack_d0 = *(undefined8 *)(puVar26 + 0x90);
      uStack_c0 = *(undefined8 *)(puVar26 + 0xa0);
      puStack_128 = *(undefined **)(puVar26 + 0x38);
      pcStack_130 = *(code **)(puVar26 + 0x30);
      uStack_118 = *(undefined8 *)(puVar26 + 0x48);
      uStack_120 = *(undefined8 *)(puVar26 + 0x40);
      uStack_108 = *(undefined8 *)(puVar26 + 0x58);
      uStack_110 = *(undefined8 *)(puVar26 + 0x50);
      uStack_f8 = *(undefined8 *)(puVar26 + 0x68);
      uStack_100 = *(undefined8 *)(puVar26 + 0x60);
      uStack_148 = *(undefined8 *)(puVar26 + 0x18);
      puStack_150 = *(undefined **)(puVar26 + 0x10);
      puStack_138 = *(undefined **)(puVar26 + 0x28);
      puVar34 = *(undefined **)(puVar26 + 0x20);
      puStack_140 = puVar34;
      FUN_102f04d58(&puStack_150,&puStack_1f0);
      func_0x000107c51edc();
      iVar2 = (int)puVar34;
      if (2 < iVar2) {
        if (iVar2 != 3) {
          if (iVar2 == 4) goto LAB_102ee1b58;
          if (iVar2 != 5) goto LAB_102ee2da0;
        }
LAB_102ee1bc0:
        func_0x000102f04d94(&puStack_150);
        iVar2 = 0;
LAB_102ee1bcc:
        uVar32 = param_2;
        func_0x000107c51edc();
        uVar3 = (uint)uVar32;
        if (uVar3 < 6) {
          if (iVar2 == 0) {
            uStack_e8 = *(undefined8 *)(puVar26 + 0x78);
            uStack_f0 = *(undefined8 *)(puVar26 + 0x70);
            uStack_d8 = *(undefined8 *)(puVar26 + 0x88);
            uStack_e0 = *(undefined8 *)(puVar26 + 0x80);
            uStack_c8 = *(undefined8 *)(puVar26 + 0x98);
            uStack_d0 = *(undefined8 *)(puVar26 + 0x90);
            uStack_c0 = *(undefined8 *)(puVar26 + 0xa0);
            puStack_128 = *(undefined **)(puVar26 + 0x38);
            pcStack_130 = *(code **)(puVar26 + 0x30);
            uStack_118 = *(undefined8 *)(puVar26 + 0x48);
            uStack_120 = *(undefined8 *)(puVar26 + 0x40);
            uStack_108 = *(undefined8 *)(puVar26 + 0x58);
            uStack_110 = *(undefined8 *)(puVar26 + 0x50);
            uStack_f8 = *(undefined8 *)(puVar26 + 0x68);
            uStack_100 = *(undefined8 *)(puVar26 + 0x60);
            uStack_148 = *(undefined8 *)(puVar26 + 0x18);
            puStack_150 = *(undefined **)(puVar26 + 0x10);
            puStack_138 = *(undefined **)(puVar26 + 0x28);
            puStack_140 = *(undefined **)(puVar26 + 0x20);
            FUN_102f04d58(&puStack_150,&puStack_1f0);
            func_0x000102ee3a7c(&puStack_150,0,0x102f02a40,puVar8);
            func_0x000102f04d94(&puStack_150);
          }
          else {
            puVar26[0x88] = 1;
            uStack_1c8 = *(undefined8 *)(puVar26 + 0x38);
            uStack_1d0 = *(undefined8 *)(puVar26 + 0x30);
            uStack_5a8 = *(undefined8 *)(puVar26 + 0x48);
            uStack_5b0 = *(undefined8 *)(puVar26 + 0x40);
            uStack_1d8 = *(undefined8 *)(puVar26 + 0x28);
            uStack_1e0 = *(undefined8 *)(puVar26 + 0x20);
            uStack_5b8 = *(undefined8 *)(puVar26 + 0x38);
            uStack_5c0 = *(undefined8 *)(puVar26 + 0x30);
            uStack_1b8 = *(undefined8 *)(puVar26 + 0x48);
            uStack_1c0 = *(undefined8 *)(puVar26 + 0x40);
            uStack_598 = *(undefined8 *)(puVar26 + 0x58);
            uStack_5a0 = *(undefined8 *)(puVar26 + 0x50);
            uStack_1a8 = *(undefined8 *)(puVar26 + 0x58);
            uStack_1b0 = *(undefined8 *)(puVar26 + 0x50);
            uStack_588 = *(undefined8 *)(puVar26 + 0x68);
            uStack_590 = *(undefined8 *)(puVar26 + 0x60);
            uStack_5d8 = *(undefined8 *)(puVar26 + 0x18);
            uStack_5e0 = *(undefined8 *)(puVar26 + 0x10);
            uStack_5c8 = *(undefined8 *)(puVar26 + 0x28);
            uStack_5d0 = *(undefined8 *)(puVar26 + 0x20);
            uStack_1e8 = *(undefined8 *)(puVar26 + 0x18);
            puStack_1f0 = *(undefined **)(puVar26 + 0x10);
            uStack_188 = *(undefined8 *)(puVar26 + 0x78);
            uStack_190 = *(undefined8 *)(puVar26 + 0x70);
            uStack_568 = *(undefined8 *)(puVar26 + 0x88);
            uStack_570 = *(undefined8 *)(puVar26 + 0x80);
            uStack_198 = *(undefined8 *)(puVar26 + 0x68);
            uStack_1a0 = *(undefined8 *)(puVar26 + 0x60);
            uStack_578 = *(undefined8 *)(puVar26 + 0x78);
            uStack_580 = *(undefined8 *)(puVar26 + 0x70);
            uStack_178 = *(undefined8 *)(puVar26 + 0x88);
            uStack_180 = *(undefined8 *)(puVar26 + 0x80);
            uStack_558 = *(undefined8 *)(puVar26 + 0x98);
            uStack_560 = *(undefined8 *)(puVar26 + 0x90);
            uStack_168 = *(undefined8 *)(puVar26 + 0x98);
            uStack_170 = *(undefined8 *)(puVar26 + 0x90);
            uStack_550 = *(undefined8 *)(puVar26 + 0xa0);
            uStack_160 = *(undefined8 *)(puVar26 + 0xa0);
            FUN_102f04dc8(&puStack_1f0);
            uStack_148 = puVar31[1];
            puStack_150 = (undefined *)*puVar31;
            puStack_138 = (undefined *)puVar31[3];
            puStack_140 = (undefined *)puVar31[2];
            puStack_128 = (undefined *)puVar31[5];
            pcStack_130 = (code *)puVar31[4];
            uStack_118 = puVar31[7];
            uStack_120 = puVar31[6];
            uStack_108 = puVar31[9];
            uStack_110 = puVar31[8];
            uStack_f8 = puVar31[0xb];
            uStack_100 = puVar31[10];
            uStack_e8 = puVar31[0xd];
            uStack_f0 = puVar31[0xc];
            uStack_d8 = puVar31[0xf];
            uStack_e0 = puVar31[0xe];
            uStack_c8 = puVar31[0x11];
            uStack_d0 = puVar31[0x10];
            uStack_c0 = puVar31[0x12];
            puVar31[1] = uStack_1e8;
            *puVar31 = puStack_1f0;
            puVar31[3] = uStack_1d8;
            puVar31[2] = uStack_1e0;
            puVar31[9] = uStack_1a8;
            puVar31[8] = uStack_1b0;
            puVar31[0xb] = uStack_198;
            puVar31[10] = uStack_1a0;
            puVar31[5] = uStack_1c8;
            puVar31[4] = uStack_1d0;
            puVar31[7] = uStack_1b8;
            puVar31[6] = uStack_1c0;
            puVar31[0x12] = uStack_160;
            puVar31[0xf] = uStack_178;
            puVar31[0xe] = uStack_180;
            puVar31[0x11] = uStack_168;
            puVar31[0x10] = uStack_170;
            puVar31[0xd] = uStack_188;
            puVar31[0xc] = uStack_190;
            FUN_102f04d58(&uStack_5e0,&puStack_678);
            FUN_102f080f0(&puStack_150,0x112f27e88,&UNK_10db63a18);
          }
          goto LAB_102ee1d50;
        }
        goto LAB_102ee2d64;
      }
      if (iVar2 - 1U < 2) {
LAB_102ee1b58:
        iVar2 = (int)*(undefined8 *)(lVar7 + _DAT_112f27e98);
        uVar16 = 0xd000000000000030;
        func_0x000107c5fadc(0xd000000000000030,0x800000010f113ee0);
        func_0x000107c3ebd4();
        func_0x000102f04d94(&puStack_150);
        func_0x000107c61170(uVar16);
        goto LAB_102ee1bcc;
      }
      if (iVar2 == 0) goto LAB_102ee1bc0;
      goto LAB_102ee2da0;
    }
    uVar32 = param_2;
    func_0x000107c51edc();
    uVar3 = (uint)uVar32;
    if (uVar3 < 6) {
LAB_102ee1d50:
      iVar2 = iVar4;
      func_0x000107c51edc();
      if (iVar2 == 5) {
        uStack_188 = *(undefined8 *)(puVar26 + 0x78);
        uStack_190 = *(undefined8 *)(puVar26 + 0x70);
        uStack_178 = *(undefined8 *)(puVar26 + 0x88);
        uStack_180 = *(undefined8 *)(puVar26 + 0x80);
        uStack_168 = *(undefined8 *)(puVar26 + 0x98);
        uStack_170 = *(undefined8 *)(puVar26 + 0x90);
        uStack_160 = *(undefined8 *)(puVar26 + 0xa0);
        uStack_1c8 = *(undefined8 *)(puVar26 + 0x38);
        uStack_1d0 = *(undefined8 *)(puVar26 + 0x30);
        uStack_1b8 = *(undefined8 *)(puVar26 + 0x48);
        uStack_1c0 = *(undefined8 *)(puVar26 + 0x40);
        uStack_1a8 = *(undefined8 *)(puVar26 + 0x58);
        uStack_1b0 = *(undefined8 *)(puVar26 + 0x50);
        uStack_198 = *(undefined8 *)(puVar26 + 0x68);
        uStack_1a0 = *(undefined8 *)(puVar26 + 0x60);
        uStack_1e8 = *(undefined8 *)(puVar26 + 0x18);
        puStack_1f0 = *(undefined **)(puVar26 + 0x10);
        uStack_1d8 = *(undefined8 *)(puVar26 + 0x28);
        uStack_1e0 = *(undefined8 *)(puVar26 + 0x20);
        FUN_102f04d58(&puStack_1f0,&uStack_5e0);
        func_0x000102ee4254(&puStack_1f0);
      }
      else {
        func_0x000107c51edc();
        if (iVar4 == 0) {
          uStack_188 = *(undefined8 *)(puVar26 + 0x78);
          uStack_190 = *(undefined8 *)(puVar26 + 0x70);
          uStack_178 = *(undefined8 *)(puVar26 + 0x88);
          uStack_180 = *(undefined8 *)(puVar26 + 0x80);
          uStack_168 = *(undefined8 *)(puVar26 + 0x98);
          uStack_170 = *(undefined8 *)(puVar26 + 0x90);
          uStack_160 = *(undefined8 *)(puVar26 + 0xa0);
          uStack_1c8 = *(undefined8 *)(puVar26 + 0x38);
          uStack_1d0 = *(undefined8 *)(puVar26 + 0x30);
          uStack_1b8 = *(undefined8 *)(puVar26 + 0x48);
          uStack_1c0 = *(undefined8 *)(puVar26 + 0x40);
          uStack_1a8 = *(undefined8 *)(puVar26 + 0x58);
          uStack_1b0 = *(undefined8 *)(puVar26 + 0x50);
          uStack_198 = *(undefined8 *)(puVar26 + 0x68);
          uStack_1a0 = *(undefined8 *)(puVar26 + 0x60);
          uStack_1e8 = *(undefined8 *)(puVar26 + 0x18);
          puStack_1f0 = *(undefined **)(puVar26 + 0x10);
          uStack_1d8 = *(undefined8 *)(puVar26 + 0x28);
          uStack_1e0 = *(undefined8 *)(puVar26 + 0x20);
          FUN_102f04d58(&puStack_1f0,&uStack_5e0);
          pcVar20 = "presentSendToUI(sendSession:)";
          func_0x0001000c10c0("presentSendToUI(sendSession:)");
          func_0x000107c61180();
          puVar34 = &UNK_1105e5fa0;
          func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
          func_0x000107c61614(puVar34 + 0x10,lVar7);
          puVar25 = &UNK_1105e62e8;
          func_0x000107c613fc(&UNK_1105e62e8,0xb0,7);
          *(undefined8 *)(puVar25 + 0x80) = uStack_188;
          *(undefined8 *)(puVar25 + 0x78) = uStack_190;
          *(undefined8 *)(puVar25 + 0x90) = uStack_178;
          *(undefined8 *)(puVar25 + 0x88) = uStack_180;
          *(undefined8 *)(puVar25 + 0xa0) = uStack_168;
          *(undefined8 *)(puVar25 + 0x98) = uStack_170;
          *(undefined8 *)(puVar25 + 0x40) = uStack_1c8;
          *(undefined8 *)(puVar25 + 0x38) = uStack_1d0;
          *(undefined8 *)(puVar25 + 0x50) = uStack_1b8;
          *(undefined8 *)(puVar25 + 0x48) = uStack_1c0;
          *(undefined8 *)(puVar25 + 0x60) = uStack_1a8;
          *(undefined8 *)(puVar25 + 0x58) = uStack_1b0;
          *(undefined8 *)(puVar25 + 0x70) = uStack_198;
          *(undefined8 *)(puVar25 + 0x68) = uStack_1a0;
          *(undefined8 *)(puVar25 + 0x20) = uStack_1e8;
          *(undefined **)(puVar25 + 0x18) = puStack_1f0;
          *(undefined **)(puVar25 + 0x10) = puVar34;
          *(undefined8 *)(puVar25 + 0xa8) = uStack_160;
          *(undefined8 *)(puVar25 + 0x30) = uStack_1d8;
          *(undefined8 *)(puVar25 + 0x28) = uStack_1e0;
          uStack_658 = 0x102f099e0;
          puStack_678 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_670 = 0x42000000;
          puStack_668 = &UNK_1000f6b44;
          puStack_660 = &UNK_1105e6300;
          ppuVar21 = &puStack_678;
          puStack_650 = puVar25;
          func_0x000107c60bc4(ppuVar21);
          puVar34 = puStack_650;
          FUN_102f04d58(&puStack_1f0,&uStack_5e0);
          func_0x000107c61574(puVar34);
          func_0x000107c4e524(pcVar20);
          func_0x000107c60bd0(ppuVar21);
          func_0x000107c615e8(pcVar20);
        }
        else {
          uStack_188 = *(undefined8 *)(puVar26 + 0x78);
          uStack_190 = *(undefined8 *)(puVar26 + 0x70);
          uStack_178 = *(undefined8 *)(puVar26 + 0x88);
          uStack_180 = *(undefined8 *)(puVar26 + 0x80);
          uStack_168 = *(undefined8 *)(puVar26 + 0x98);
          uStack_170 = *(undefined8 *)(puVar26 + 0x90);
          uStack_160 = *(undefined8 *)(puVar26 + 0xa0);
          uStack_1c8 = *(undefined8 *)(puVar26 + 0x38);
          uStack_1d0 = *(undefined8 *)(puVar26 + 0x30);
          uStack_1b8 = *(undefined8 *)(puVar26 + 0x48);
          uStack_1c0 = *(undefined8 *)(puVar26 + 0x40);
          uStack_1a8 = *(undefined8 *)(puVar26 + 0x58);
          uStack_1b0 = *(undefined8 *)(puVar26 + 0x50);
          uStack_198 = *(undefined8 *)(puVar26 + 0x68);
          uStack_1a0 = *(undefined8 *)(puVar26 + 0x60);
          uStack_1e8 = *(undefined8 *)(puVar26 + 0x18);
          puStack_1f0 = *(undefined **)(puVar26 + 0x10);
          uStack_1d8 = *(undefined8 *)(puVar26 + 0x28);
          uStack_1e0 = *(undefined8 *)(puVar26 + 0x20);
          FUN_102f04d58(&puStack_1f0,&uStack_5e0);
          FUN_102ee45a4(&puStack_1f0);
        }
      }
      func_0x000102f04d94(&puStack_1f0);
      uVar16 = *(undefined8 *)(*(long *)(puVar26 + 0x40) + 0x10);
      puVar34 = &UNK_1105e62c0;
      func_0x000107c613fc(&UNK_1105e62c0,0x38,7);
      *(long *)(puVar34 + 0x10) = lVar5;
      *(undefined8 *)(puVar34 + 0x18) = 0x102f02a40;
      *(undefined **)(puVar34 + 0x20) = puVar8;
      *(long *)(puVar34 + 0x28) = lVar7;
      *(undefined **)(puVar34 + 0x30) = puVar26;
      func_0x000107c61174(lVar7);
      func_0x000107c6157c(lVar5);
      func_0x000107c6157c(puVar8);
      func_0x000107c6157c(uVar16);
      func_0x000107c6157c(puVar26);
      func_0x00010075a04c(0,1,0x102f099f0,puVar34);
      func_0x000107c61574(puVar14);
      func_0x000107c61574(puVar26);
      func_0x000107c61574(uVar16);
      func_0x000107c61574(puVar34);
      func_0x00010006c090(uVar18,puVar22);
      func_0x000107c61578(lVar5,3);
      func_0x000107c61578(puVar8,2);
      func_0x000107c615e8(param_3);
      func_0x000107c61170(lStack_698);
      func_0x000107c61170(lStack_698);
      func_0x000107c61578(puVar9,2);
      func_0x000107c615e8(param_2);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c61574(puVar11);
      func_0x000107c61574(puVar13);
      goto LAB_102ee1a8c;
    }
LAB_102ee2d64:
    func_0x000107c61574(lVar5);
    func_0x000107c61170(lVar7);
    puStack_150 = (undefined *)CONCAT44(puStack_150._4_4_,uVar3);
    ppuVar21 = &puStack_150;
LAB_102ee2d88:
    func_0x000107c60614(uVar27,ppuVar21,uVar27,PTR___ss5Int32VN_11034ee20);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee2d98);
    (*pcVar1)();
  }
LAB_102ee2044:
  lVar28 = *(long *)(lVar7 + _DAT_112f27e70);
  if (lVar28 != 0) {
    puVar22 = &UNK_1105e6248;
    func_0x000107c613fc(&UNK_1105e6248,0x28,7);
    *(code **)(puVar22 + 0x10) = FUN_102f02a48;
    *(undefined **)(puVar22 + 0x18) = puVar11;
    *(undefined **)(puVar22 + 0x20) = param_1;
    pcStack_130 = FUN_102f04ddc;
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0x42000000;
    puStack_140 = &UNK_1000f6b44;
    puStack_138 = &UNK_1105e6260;
    ppuVar21 = &puStack_150;
    puStack_128 = puVar22;
    func_0x000107c60bc4(ppuVar21);
    puVar22 = puStack_128;
    func_0x000107c6157c(puVar11);
    func_0x000107c61434(param_1);
    func_0x000107c615f0(lVar28);
    func_0x000107c61574(puVar22);
    func_0x000107c4e524(lVar28);
    func_0x000107c60bd0(ppuVar21);
    func_0x000107c61578(puVar9,2);
    func_0x000107c615e8(param_2);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar7);
    func_0x000107c61574(puVar11);
    func_0x000107c61578(lVar5,3);
    func_0x000107c61574(puVar13);
    func_0x000107c61578(puVar8,2);
    func_0x000107c615e8(lVar28);
    func_0x000107c61170(lStack_698);
    func_0x000107c61170(lStack_698);
    func_0x000107c615ec(lStack_680,2);
    func_0x000107c615e8(param_3);
    goto LAB_102ee273c;
  }
  puVar22 = param_1;
  FUN_102f04958(param_1,param_2);
  func_0x000107c61428(plVar23,auStack_228,0,0);
  lVar24 = *plVar23;
  lVar28 = *(long *)(puVar22 + 0x10);
  if (lVar28 == 0) {
    func_0x000107c61174(lVar24);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_1f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61174(lVar24);
    func_0x000102f031f8(0,lVar28,0);
    uVar12 = *(undefined8 *)(lVar7 + _DAT_112f27e78);
    puVar31 = (undefined8 *)(puVar22 + 0x20);
    do {
      puVar14 = puStack_1f0;
      uStack_a8 = puVar31[1];
      uStack_b0 = *puVar31;
      uStack_98 = puVar31[3];
      uStack_a0 = puVar31[2];
      uStack_90 = puVar31[4];
      uStack_7f = *(undefined8 *)((long)puVar31 + 0x31);
      uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)puVar31 + 0x29) >> 0x38);
      uStack_88 = (undefined1)puVar31[5];
      uStack_87 = (undefined7)((ulong)puVar31[5] >> 8);
      FUN_102edda34(&uStack_b0,&puStack_150);
      uVar18 = uVar12;
      func_0x000107c5c734(uVar12);
      func_0x000107c61180();
      puVar19 = &uStack_b0;
      func_0x000102f0dd84(puVar19,uVar18,lStack_680,0);
      func_0x000107c615e8(uVar18);
      FUN_102edd9d4(&uStack_b0);
      uVar32 = *(ulong *)(puVar14 + 0x10);
      puStack_1f0 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar32) {
        func_0x000102f031f8(1 < *(ulong *)(puVar14 + 0x18),uVar32 + 1,1);
      }
      *(ulong *)(puStack_1f0 + 0x10) = uVar32 + 1;
      *(undefined8 **)(puStack_1f0 + uVar32 * 8 + 0x20) = puVar19;
      puVar31 = puVar31 + 8;
      lVar28 = lVar28 + -1;
      puVar14 = puStack_1f0;
    } while (lVar28 != 0);
  }
  puVar34 = &UNK_1105e61a8;
  func_0x000107c613fc(&UNK_1105e61a8,0xa8,7);
  func_0x000107c613fc(uVar16,0x18,7);
  uVar16 = 0;
  func_0x00010095c380();
  func_0x000107c6142c(puVar22);
  lStack_338 = lStack_698;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2fd = 0;
  uStack_2f8 = 0;
  uStack_305 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2a0 = lStack_698;
  uStack_265 = 0;
  uStack_268 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_270 = 0;
  uStack_26d = 0;
  uStack_278 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_230 = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  puStack_358 = param_1;
  puStack_350 = puVar14;
  uStack_348 = param_2;
  lStack_340 = lVar24;
  uStack_330 = param_3;
  uStack_328 = uVar16;
  puStack_2c0 = param_1;
  puStack_2b8 = puVar14;
  uStack_2b0 = param_2;
  lStack_2a8 = lVar24;
  uStack_298 = param_3;
  uStack_290 = uVar16;
  func_0x000107c615f0(param_3);
  func_0x000107c61434(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61174();
  FUN_102f04d58(&puStack_358,&puStack_150);
  func_0x000102f04d94(&puStack_2c0);
  puVar22 = puStack_350;
  *(undefined8 *)(puVar34 + 0x78) = uStack_2f0;
  *(ulong *)(puVar34 + 0x70) = CONCAT53(uStack_2f5,uStack_2f8);
  *(ulong *)(puVar34 + 0x88) = CONCAT71(uStack_2df,uStack_2e0);
  *(undefined8 *)(puVar34 + 0x80) = uStack_2e8;
  *(undefined8 *)(puVar34 + 0x98) = uStack_2d0;
  *(undefined8 *)(puVar34 + 0x90) = uStack_2d8;
  *(undefined8 *)(puVar34 + 0xa0) = uStack_2c8;
  *(undefined8 *)(puVar34 + 0x38) = uStack_330;
  *(long *)(puVar34 + 0x30) = lStack_338;
  *(undefined8 *)(puVar34 + 0x48) = uStack_320;
  *(undefined8 *)(puVar34 + 0x40) = uStack_328;
  *(undefined8 *)(puVar34 + 0x58) = uStack_310;
  *(undefined8 *)(puVar34 + 0x50) = uStack_318;
  *(ulong *)(puVar34 + 0x68) = CONCAT53(uStack_2fd,uStack_300);
  *(ulong *)(puVar34 + 0x60) = CONCAT53(uStack_305,uStack_308);
  *(undefined **)(puVar34 + 0x18) = puStack_350;
  *(undefined **)(puVar34 + 0x10) = puStack_358;
  *(long *)(puVar34 + 0x28) = lStack_340;
  *(ulong *)(puVar34 + 0x20) = uStack_348;
  if (iVar2 != 0) {
    if ((ulong)puStack_350 >> 0x3e == 0) {
      puVar14 = *(undefined **)(((ulong)puStack_350 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar14 = (undefined *)((ulong)puStack_350 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puStack_350) {
        puVar14 = puStack_350;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(puVar22);
    if (puVar14 != (undefined *)0x0) {
      uVar32 = 0;
      do {
        if (((ulong)puVar22 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10) <= uVar32) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee2d00);
            (*pcVar1)();
          }
          uVar33 = *(ulong *)(puVar22 + uVar32 * 8 + 0x20);
          func_0x000107c6157c(uVar33);
        }
        else {
          uVar33 = uVar32;
          FUN_102f02a90(uVar32,puVar22);
        }
        if (SCARRY8(uVar32,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee2544);
          (*pcVar1)();
        }
        puVar26 = (undefined *)(uVar32 + 1);
        uVar16 = *(undefined8 *)(uVar33 + 0x10);
        func_0x000107c4008c(uVar16);
        func_0x000107c61180();
        puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c58e98(uVar16);
        func_0x000107c61574(uVar33);
        func_0x000107c61170(uVar16);
        func_0x000107c61170(puVar25);
        uVar32 = uVar32 + 1;
      } while (puVar26 != puVar14);
    }
    func_0x000107c6142c(puVar22);
    uVar16 = *(undefined8 *)(puVar34 + 0xa0);
    *(ulong *)(puVar34 + 0xa0) = uVar30;
    func_0x000107c61434();
    func_0x000107c6142c(uVar16);
  }
  uStack_428 = *(undefined8 *)(puVar34 + 0x78);
  uStack_430 = *(undefined8 *)(puVar34 + 0x70);
  uStack_4b8 = *(undefined8 *)(puVar34 + 0x88);
  uStack_4c0 = *(undefined8 *)(puVar34 + 0x80);
  uStack_438 = *(undefined8 *)(puVar34 + 0x68);
  uStack_440 = *(undefined8 *)(puVar34 + 0x60);
  uStack_4c8 = *(undefined8 *)(puVar34 + 0x78);
  uStack_4d0 = *(undefined8 *)(puVar34 + 0x70);
  uStack_418 = *(undefined8 *)(puVar34 + 0x88);
  uStack_420 = *(undefined8 *)(puVar34 + 0x80);
  uStack_4a8 = *(undefined8 *)(puVar34 + 0x98);
  uStack_4b0 = *(undefined8 *)(puVar34 + 0x90);
  uStack_468 = *(undefined8 *)(puVar34 + 0x38);
  uStack_470 = *(undefined8 *)(puVar34 + 0x30);
  uStack_4f8 = *(undefined8 *)(puVar34 + 0x48);
  uStack_500 = *(undefined8 *)(puVar34 + 0x40);
  uStack_478 = *(undefined8 *)(puVar34 + 0x28);
  uStack_480 = *(undefined8 *)(puVar34 + 0x20);
  uStack_508 = *(undefined8 *)(puVar34 + 0x38);
  uStack_510 = *(undefined8 *)(puVar34 + 0x30);
  uStack_458 = *(undefined8 *)(puVar34 + 0x48);
  uStack_460 = *(undefined8 *)(puVar34 + 0x40);
  uStack_4e8 = *(undefined8 *)(puVar34 + 0x58);
  uStack_4f0 = *(undefined8 *)(puVar34 + 0x50);
  uStack_448 = *(undefined8 *)(puVar34 + 0x58);
  uStack_450 = *(undefined8 *)(puVar34 + 0x50);
  uStack_4d8 = *(undefined8 *)(puVar34 + 0x68);
  uStack_4e0 = *(undefined8 *)(puVar34 + 0x60);
  uStack_528 = *(undefined8 *)(puVar34 + 0x18);
  uStack_530 = *(undefined8 *)(puVar34 + 0x10);
  uStack_518 = *(undefined8 *)(puVar34 + 0x28);
  uStack_520 = *(undefined8 *)(puVar34 + 0x20);
  uStack_488 = *(undefined8 *)(puVar34 + 0x18);
  uStack_490 = *(undefined8 *)(puVar34 + 0x10);
  uStack_408 = *(undefined8 *)(puVar34 + 0x98);
  uStack_410 = *(undefined8 *)(puVar34 + 0x90);
  uStack_4a0 = *(undefined8 *)(puVar34 + 0xa0);
  uStack_400 = *(undefined8 *)(puVar34 + 0xa0);
  FUN_102f04dc8(&uStack_490);
  puVar31 = (undefined8 *)(lVar7 + _DAT_112f27e80);
  func_0x000107c61428(puVar31,auStack_548,1,0);
  uStack_3e8 = puVar31[1];
  uStack_3f0 = *puVar31;
  uStack_3d8 = puVar31[3];
  uStack_3e0 = puVar31[2];
  uStack_3c8 = puVar31[5];
  uStack_3d0 = puVar31[4];
  uStack_3b8 = puVar31[7];
  uStack_3c0 = puVar31[6];
  uStack_3a8 = puVar31[9];
  uStack_3b0 = puVar31[8];
  uStack_398 = puVar31[0xb];
  uStack_3a0 = puVar31[10];
  uStack_388 = puVar31[0xd];
  uStack_390 = puVar31[0xc];
  uStack_378 = puVar31[0xf];
  uStack_380 = puVar31[0xe];
  uStack_368 = puVar31[0x11];
  uStack_370 = puVar31[0x10];
  uStack_360 = puVar31[0x12];
  puVar31[1] = uStack_488;
  *puVar31 = uStack_490;
  puVar31[3] = uStack_478;
  puVar31[2] = uStack_480;
  puVar31[9] = uStack_448;
  puVar31[8] = uStack_450;
  puVar31[0xb] = uStack_438;
  puVar31[10] = uStack_440;
  puVar31[5] = uStack_468;
  puVar31[4] = uStack_470;
  puVar31[7] = uStack_458;
  puVar31[6] = uStack_460;
  puVar31[0x12] = uStack_400;
  puVar31[0xf] = uStack_418;
  puVar31[0xe] = uStack_420;
  puVar31[0x11] = uStack_408;
  puVar31[0x10] = uStack_410;
  puVar31[0xd] = uStack_428;
  puVar31[0xc] = uStack_430;
  FUN_102f04d58(&uStack_530,&puStack_150);
  FUN_102f080f0(&uStack_3f0,0x112f27e88,&UNK_10db63a18);
  FUN_102ee38bc(param_1,param_2);
  uVar32 = *(ulong *)(*(long *)(lVar7 + _DAT_112f27e90) + _DAT_113077160);
  func_0x000107c51e2c();
  if ((uVar32 & 1) == 0) {
    uVar32 = param_2;
    func_0x000107c51edc();
    uVar3 = (uint)uVar32;
    if (5 < uVar3) goto LAB_102ee2d64;
  }
  else {
    uStack_e8 = *(undefined8 *)(puVar34 + 0x78);
    uStack_f0 = *(undefined8 *)(puVar34 + 0x70);
    uStack_d8 = *(undefined8 *)(puVar34 + 0x88);
    uStack_e0 = *(undefined8 *)(puVar34 + 0x80);
    uStack_c8 = *(undefined8 *)(puVar34 + 0x98);
    uStack_d0 = *(undefined8 *)(puVar34 + 0x90);
    uStack_c0 = *(undefined8 *)(puVar34 + 0xa0);
    puStack_128 = *(undefined **)(puVar34 + 0x38);
    pcStack_130 = *(code **)(puVar34 + 0x30);
    uStack_118 = *(undefined8 *)(puVar34 + 0x48);
    uStack_120 = *(undefined8 *)(puVar34 + 0x40);
    uStack_108 = *(undefined8 *)(puVar34 + 0x58);
    uStack_110 = *(undefined8 *)(puVar34 + 0x50);
    uStack_f8 = *(undefined8 *)(puVar34 + 0x68);
    uStack_100 = *(undefined8 *)(puVar34 + 0x60);
    uStack_148 = *(undefined8 *)(puVar34 + 0x18);
    puStack_150 = *(undefined **)(puVar34 + 0x10);
    puStack_138 = *(undefined **)(puVar34 + 0x28);
    puVar22 = *(undefined **)(puVar34 + 0x20);
    puStack_140 = puVar22;
    FUN_102f04d58(&puStack_150,&puStack_1f0);
    func_0x000107c51edc();
    iVar2 = (int)puVar22;
    if (iVar2 < 3) {
      if (1 < iVar2 - 1U) {
        if (iVar2 != 0) {
LAB_102ee2da0:
          func_0x000107c61574(lVar5);
          func_0x000107c61170(lVar7);
          puStack_1f0 = (undefined *)CONCAT44(puStack_1f0._4_4_,iVar2);
          ppuVar21 = &puStack_1f0;
          goto LAB_102ee2d88;
        }
        goto LAB_102ee2898;
      }
LAB_102ee2830:
      iVar2 = (int)*(undefined8 *)(lVar7 + _DAT_112f27e98);
      uVar16 = 0xd000000000000030;
      func_0x000107c5fadc(0xd000000000000030,0x800000010f113ee0);
      func_0x000107c3ebd4();
      func_0x000102f04d94(&puStack_150);
      func_0x000107c61170(uVar16);
    }
    else {
      if (iVar2 != 3) {
        if (iVar2 == 4) goto LAB_102ee2830;
        if (iVar2 != 5) goto LAB_102ee2da0;
      }
LAB_102ee2898:
      func_0x000102f04d94(&puStack_150);
      iVar2 = 0;
    }
    uVar32 = param_2;
    func_0x000107c51edc();
    uVar3 = (uint)uVar32;
    if (5 < uVar3) goto LAB_102ee2d64;
    if (iVar2 == 0) {
      uStack_e8 = *(undefined8 *)(puVar34 + 0x78);
      uStack_f0 = *(undefined8 *)(puVar34 + 0x70);
      uStack_d8 = *(undefined8 *)(puVar34 + 0x88);
      uStack_e0 = *(undefined8 *)(puVar34 + 0x80);
      uStack_c8 = *(undefined8 *)(puVar34 + 0x98);
      uStack_d0 = *(undefined8 *)(puVar34 + 0x90);
      uStack_c0 = *(undefined8 *)(puVar34 + 0xa0);
      puStack_128 = *(undefined **)(puVar34 + 0x38);
      pcStack_130 = *(code **)(puVar34 + 0x30);
      uStack_118 = *(undefined8 *)(puVar34 + 0x48);
      uStack_120 = *(undefined8 *)(puVar34 + 0x40);
      uStack_108 = *(undefined8 *)(puVar34 + 0x58);
      uStack_110 = *(undefined8 *)(puVar34 + 0x50);
      uStack_f8 = *(undefined8 *)(puVar34 + 0x68);
      uStack_100 = *(undefined8 *)(puVar34 + 0x60);
      uStack_148 = *(undefined8 *)(puVar34 + 0x18);
      puStack_150 = *(undefined **)(puVar34 + 0x10);
      puStack_138 = *(undefined **)(puVar34 + 0x28);
      puStack_140 = *(undefined **)(puVar34 + 0x20);
      FUN_102f04d58(&puStack_150,&puStack_1f0);
      func_0x000102ee3a7c(&puStack_150,0,0x102f02a40,puVar8);
      func_0x000102f04d94(&puStack_150);
    }
    else {
      puVar34[0x88] = 1;
      uStack_1c8 = *(undefined8 *)(puVar34 + 0x38);
      uStack_1d0 = *(undefined8 *)(puVar34 + 0x30);
      uStack_5a8 = *(undefined8 *)(puVar34 + 0x48);
      uStack_5b0 = *(undefined8 *)(puVar34 + 0x40);
      uStack_1d8 = *(undefined8 *)(puVar34 + 0x28);
      uStack_1e0 = *(undefined8 *)(puVar34 + 0x20);
      uStack_5b8 = *(undefined8 *)(puVar34 + 0x38);
      uStack_5c0 = *(undefined8 *)(puVar34 + 0x30);
      uStack_1b8 = *(undefined8 *)(puVar34 + 0x48);
      uStack_1c0 = *(undefined8 *)(puVar34 + 0x40);
      uStack_598 = *(undefined8 *)(puVar34 + 0x58);
      uStack_5a0 = *(undefined8 *)(puVar34 + 0x50);
      uStack_1a8 = *(undefined8 *)(puVar34 + 0x58);
      uStack_1b0 = *(undefined8 *)(puVar34 + 0x50);
      uStack_588 = *(undefined8 *)(puVar34 + 0x68);
      uStack_590 = *(undefined8 *)(puVar34 + 0x60);
      uStack_5d8 = *(undefined8 *)(puVar34 + 0x18);
      uStack_5e0 = *(undefined8 *)(puVar34 + 0x10);
      uStack_5c8 = *(undefined8 *)(puVar34 + 0x28);
      uStack_5d0 = *(undefined8 *)(puVar34 + 0x20);
      uStack_1e8 = *(undefined8 *)(puVar34 + 0x18);
      puStack_1f0 = *(undefined **)(puVar34 + 0x10);
      uStack_188 = *(undefined8 *)(puVar34 + 0x78);
      uStack_190 = *(undefined8 *)(puVar34 + 0x70);
      uStack_568 = *(undefined8 *)(puVar34 + 0x88);
      uStack_570 = *(undefined8 *)(puVar34 + 0x80);
      uStack_198 = *(undefined8 *)(puVar34 + 0x68);
      uStack_1a0 = *(undefined8 *)(puVar34 + 0x60);
      uStack_578 = *(undefined8 *)(puVar34 + 0x78);
      uStack_580 = *(undefined8 *)(puVar34 + 0x70);
      uStack_178 = *(undefined8 *)(puVar34 + 0x88);
      uStack_180 = *(undefined8 *)(puVar34 + 0x80);
      uStack_558 = *(undefined8 *)(puVar34 + 0x98);
      uStack_560 = *(undefined8 *)(puVar34 + 0x90);
      uStack_168 = *(undefined8 *)(puVar34 + 0x98);
      uStack_170 = *(undefined8 *)(puVar34 + 0x90);
      uStack_550 = *(undefined8 *)(puVar34 + 0xa0);
      uStack_160 = *(undefined8 *)(puVar34 + 0xa0);
      FUN_102f04dc8(&puStack_1f0);
      uStack_148 = puVar31[1];
      puStack_150 = (undefined *)*puVar31;
      puStack_138 = (undefined *)puVar31[3];
      puStack_140 = (undefined *)puVar31[2];
      puStack_128 = (undefined *)puVar31[5];
      pcStack_130 = (code *)puVar31[4];
      uStack_118 = puVar31[7];
      uStack_120 = puVar31[6];
      uStack_108 = puVar31[9];
      uStack_110 = puVar31[8];
      uStack_f8 = puVar31[0xb];
      uStack_100 = puVar31[10];
      uStack_e8 = puVar31[0xd];
      uStack_f0 = puVar31[0xc];
      uStack_d8 = puVar31[0xf];
      uStack_e0 = puVar31[0xe];
      uStack_c8 = puVar31[0x11];
      uStack_d0 = puVar31[0x10];
      uStack_c0 = puVar31[0x12];
      puVar31[1] = uStack_1e8;
      *puVar31 = puStack_1f0;
      puVar31[3] = uStack_1d8;
      puVar31[2] = uStack_1e0;
      puVar31[9] = uStack_1a8;
      puVar31[8] = uStack_1b0;
      puVar31[0xb] = uStack_198;
      puVar31[10] = uStack_1a0;
      puVar31[5] = uStack_1c8;
      puVar31[4] = uStack_1d0;
      puVar31[7] = uStack_1b8;
      puVar31[6] = uStack_1c0;
      puVar31[0x12] = uStack_160;
      puVar31[0xf] = uStack_178;
      puVar31[0xe] = uStack_180;
      puVar31[0x11] = uStack_168;
      puVar31[0x10] = uStack_170;
      puVar31[0xd] = uStack_188;
      puVar31[0xc] = uStack_190;
      FUN_102f04d58(&uStack_5e0,&puStack_678);
      FUN_102f080f0(&puStack_150,0x112f27e88,&UNK_10db63a18);
    }
  }
  iVar2 = iVar4;
  func_0x000107c51edc();
  if (iVar2 == 5) {
    uStack_188 = *(undefined8 *)(puVar34 + 0x78);
    uStack_190 = *(undefined8 *)(puVar34 + 0x70);
    uStack_178 = *(undefined8 *)(puVar34 + 0x88);
    uStack_180 = *(undefined8 *)(puVar34 + 0x80);
    uStack_168 = *(undefined8 *)(puVar34 + 0x98);
    uStack_170 = *(undefined8 *)(puVar34 + 0x90);
    uStack_160 = *(undefined8 *)(puVar34 + 0xa0);
    uStack_1c8 = *(undefined8 *)(puVar34 + 0x38);
    uStack_1d0 = *(undefined8 *)(puVar34 + 0x30);
    uStack_1b8 = *(undefined8 *)(puVar34 + 0x48);
    uStack_1c0 = *(undefined8 *)(puVar34 + 0x40);
    uStack_1a8 = *(undefined8 *)(puVar34 + 0x58);
    uStack_1b0 = *(undefined8 *)(puVar34 + 0x50);
    uStack_198 = *(undefined8 *)(puVar34 + 0x68);
    uStack_1a0 = *(undefined8 *)(puVar34 + 0x60);
    uStack_1e8 = *(undefined8 *)(puVar34 + 0x18);
    puStack_1f0 = *(undefined **)(puVar34 + 0x10);
    uStack_1d8 = *(undefined8 *)(puVar34 + 0x28);
    uStack_1e0 = *(undefined8 *)(puVar34 + 0x20);
    FUN_102f04d58(&puStack_1f0,&uStack_5e0);
    func_0x000102ee4254(&puStack_1f0);
  }
  else {
    func_0x000107c51edc();
    if (iVar4 == 0) {
      uStack_188 = *(undefined8 *)(puVar34 + 0x78);
      uStack_190 = *(undefined8 *)(puVar34 + 0x70);
      uStack_178 = *(undefined8 *)(puVar34 + 0x88);
      uStack_180 = *(undefined8 *)(puVar34 + 0x80);
      uStack_168 = *(undefined8 *)(puVar34 + 0x98);
      uStack_170 = *(undefined8 *)(puVar34 + 0x90);
      uStack_160 = *(undefined8 *)(puVar34 + 0xa0);
      uStack_1c8 = *(undefined8 *)(puVar34 + 0x38);
      uStack_1d0 = *(undefined8 *)(puVar34 + 0x30);
      uStack_1b8 = *(undefined8 *)(puVar34 + 0x48);
      uStack_1c0 = *(undefined8 *)(puVar34 + 0x40);
      uStack_1a8 = *(undefined8 *)(puVar34 + 0x58);
      uStack_1b0 = *(undefined8 *)(puVar34 + 0x50);
      uStack_198 = *(undefined8 *)(puVar34 + 0x68);
      uStack_1a0 = *(undefined8 *)(puVar34 + 0x60);
      uStack_1e8 = *(undefined8 *)(puVar34 + 0x18);
      puStack_1f0 = *(undefined **)(puVar34 + 0x10);
      uStack_1d8 = *(undefined8 *)(puVar34 + 0x28);
      uStack_1e0 = *(undefined8 *)(puVar34 + 0x20);
      FUN_102f04d58(&puStack_1f0,&uStack_5e0);
      pcVar20 = "presentSendToUI(sendSession:)";
      func_0x0001000c10c0("presentSendToUI(sendSession:)");
      func_0x000107c61180();
      puVar22 = &UNK_1105e5fa0;
      func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
      func_0x000107c61614(puVar22 + 0x10,lVar7);
      puVar14 = &UNK_1105e61f8;
      func_0x000107c613fc(&UNK_1105e61f8,0xb0,7);
      *(undefined8 *)(puVar14 + 0x80) = uStack_188;
      *(undefined8 *)(puVar14 + 0x78) = uStack_190;
      *(undefined8 *)(puVar14 + 0x90) = uStack_178;
      *(undefined8 *)(puVar14 + 0x88) = uStack_180;
      *(undefined8 *)(puVar14 + 0xa0) = uStack_168;
      *(undefined8 *)(puVar14 + 0x98) = uStack_170;
      *(undefined8 *)(puVar14 + 0x40) = uStack_1c8;
      *(undefined8 *)(puVar14 + 0x38) = uStack_1d0;
      *(undefined8 *)(puVar14 + 0x50) = uStack_1b8;
      *(undefined8 *)(puVar14 + 0x48) = uStack_1c0;
      *(undefined8 *)(puVar14 + 0x60) = uStack_1a8;
      *(undefined8 *)(puVar14 + 0x58) = uStack_1b0;
      *(undefined8 *)(puVar14 + 0x70) = uStack_198;
      *(undefined8 *)(puVar14 + 0x68) = uStack_1a0;
      *(undefined8 *)(puVar14 + 0x20) = uStack_1e8;
      *(undefined **)(puVar14 + 0x18) = puStack_1f0;
      *(undefined **)(puVar14 + 0x10) = puVar22;
      *(undefined8 *)(puVar14 + 0xa8) = uStack_160;
      *(undefined8 *)(puVar14 + 0x30) = uStack_1d8;
      *(undefined8 *)(puVar14 + 0x28) = uStack_1e0;
      uStack_658 = 0x102f04dd0;
      puStack_678 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_670 = 0x42000000;
      puStack_668 = &UNK_1000f6b44;
      puStack_660 = &UNK_1105e6210;
      ppuVar21 = &puStack_678;
      puStack_650 = puVar14;
      func_0x000107c60bc4(ppuVar21);
      puVar22 = puStack_650;
      FUN_102f04d58(&puStack_1f0,&uStack_5e0);
      func_0x000107c61574(puVar22);
      func_0x000107c4e524(pcVar20);
      func_0x000107c60bd0(ppuVar21);
      func_0x000107c615e8(pcVar20);
    }
    else {
      uStack_188 = *(undefined8 *)(puVar34 + 0x78);
      uStack_190 = *(undefined8 *)(puVar34 + 0x70);
      uStack_178 = *(undefined8 *)(puVar34 + 0x88);
      uStack_180 = *(undefined8 *)(puVar34 + 0x80);
      uStack_168 = *(undefined8 *)(puVar34 + 0x98);
      uStack_170 = *(undefined8 *)(puVar34 + 0x90);
      uStack_160 = *(undefined8 *)(puVar34 + 0xa0);
      uStack_1c8 = *(undefined8 *)(puVar34 + 0x38);
      uStack_1d0 = *(undefined8 *)(puVar34 + 0x30);
      uStack_1b8 = *(undefined8 *)(puVar34 + 0x48);
      uStack_1c0 = *(undefined8 *)(puVar34 + 0x40);
      uStack_1a8 = *(undefined8 *)(puVar34 + 0x58);
      uStack_1b0 = *(undefined8 *)(puVar34 + 0x50);
      uStack_198 = *(undefined8 *)(puVar34 + 0x68);
      uStack_1a0 = *(undefined8 *)(puVar34 + 0x60);
      uStack_1e8 = *(undefined8 *)(puVar34 + 0x18);
      puStack_1f0 = *(undefined **)(puVar34 + 0x10);
      uStack_1d8 = *(undefined8 *)(puVar34 + 0x28);
      uStack_1e0 = *(undefined8 *)(puVar34 + 0x20);
      FUN_102f04d58(&puStack_1f0,&uStack_5e0);
      FUN_102ee45a4(&puStack_1f0);
    }
  }
  func_0x000102f04d94(&puStack_1f0);
  uVar16 = *(undefined8 *)(*(long *)(puVar34 + 0x40) + 0x10);
  puVar22 = &UNK_1105e61d0;
  func_0x000107c613fc(&UNK_1105e61d0,0x38,7);
  *(long *)(puVar22 + 0x10) = lVar5;
  *(undefined8 *)(puVar22 + 0x18) = 0x102f02a40;
  *(undefined **)(puVar22 + 0x20) = puVar8;
  *(long *)(puVar22 + 0x28) = lVar7;
  *(undefined **)(puVar22 + 0x30) = puVar34;
  func_0x000107c61174(lVar7);
  func_0x000107c6157c(lVar5);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(puVar34);
  func_0x00010075a04c(0,1,0x102f04dcc,puVar22);
  func_0x000107c61574(puVar8);
  func_0x000107c61170(lStack_698);
  func_0x000107c61574(puVar34);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(puVar22);
  func_0x000107c61574(puVar8);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(lStack_698);
  func_0x000107c61578(puVar9,2);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar7);
  func_0x000107c61574(puVar11);
  func_0x000107c61578(lVar5,3);
  func_0x000107c61574(puVar13);
  func_0x000107c615ec(lStack_680,2);
LAB_102ee273c:
  func_0x000107c6142c(uVar30);
  return uVar6;
}



/* Entry: 102ee38bc; end: 102ee3a7b;  */

void FUN_102ee38bc(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x21;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000102f03240(0,0,0);
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
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102ee3a28);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
        func_0x000107c615f0(uVar3);
      }
      else {
        uVar3 = uVar6;
        FUN_10274d138(uVar6,param_1);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ee3a24);
        (*pcVar2)();
      }
      uVar4 = uVar6 + 1;
      FUN_102f04e78(&uStack_a0,uVar6,uVar3,param_2);
      if (unaff_x21 != 0) {
        func_0x000107c61574(puVar1);
        func_0x000107c615e8(uVar3);
        return;
      }
      func_0x000107c615e8(uVar3);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        func_0x000102f03240(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puVar1 + uVar3 * 0x40 + 0x51) = uStack_6f;
      *(ulong *)(puVar1 + uVar3 * 0x40 + 0x49) = CONCAT17(uStack_70,uStack_77);
      *(undefined8 *)(puVar1 + uVar3 * 0x40 + 0x38) = uStack_88;
      *(undefined8 *)(puVar1 + uVar3 * 0x40 + 0x30) = uStack_90;
      *(ulong *)(puVar1 + uVar3 * 0x40 + 0x48) = CONCAT71(uStack_77,uStack_78);
      *(undefined8 *)(puVar1 + uVar3 * 0x40 + 0x40) = uStack_80;
      *(undefined8 *)(puVar1 + uVar3 * 0x40 + 0x28) = uStack_98;
      *(undefined8 *)(puVar1 + uVar3 * 0x40 + 0x20) = uStack_a0;
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar5);
  }
  FUN_102ef426c(puVar1,param_2);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 102ee3a7c; end: 102ee45a3;  */

/* WARNING: Removing unreachable block (ram,0x000102ee3d94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ee3a7c(undefined8 *param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  long *plVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *apuStack_128 [20];
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar13 = _DAT_112f27e48;
  uVar10 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112f27e48,auStack_80,0);
  lVar13 = unaff_x20 + lVar13;
  func_0x000107c61618();
  if (lVar13 != 0) {
    func_0x000107c4ca34();
    func_0x000107c615e8(lVar13);
  }
  uVar2 = (undefined4)param_1[2];
  func_0x000107c51edc();
  uVar12 = param_1[1];
  uVar24 = uVar12 & 0xffffffffffffff8;
  if (uVar12 >> 0x3e == 0) {
    uVar15 = *(ulong *)(uVar24 + 0x10);
  }
  else {
    uVar15 = uVar24;
    if (0x7fffffffffffffff < uVar12) {
      uVar15 = uVar12;
    }
    func_0x000107c60480();
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar7 = 0;
    do {
      while( true ) {
        if ((uVar12 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar24 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee40f8);
            (*pcVar1)();
          }
          uVar22 = *(ulong *)(uVar12 + uVar7 * 8 + 0x20);
          func_0x000107c6157c(uVar22);
        }
        else {
          uVar22 = uVar7;
          FUN_102f02a90(uVar7,uVar12);
        }
        if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee40f4);
          (*pcVar1)();
        }
        uVar19 = uVar7 + 1;
        uVar11 = 0x112f27e30;
        func_0x0001000285a8(0x112f27e30,&UNK_10db63930);
        func_0x000100087bd4(&lStack_88,0x102f09aa4,uVar22,uVar11);
        lVar13 = lStack_88;
        if (lStack_88 != 0) break;
        puVar23 = puVar9;
        func_0x000107c61558();
        apuStack_128[0] = puVar9;
        if (((ulong)puVar23 & 1) == 0) {
          func_0x000102f031f8(0,*(long *)(puVar9 + 0x10) + 1,1);
        }
        uVar7 = *(ulong *)(apuStack_128[0] + 0x10);
        if (*(ulong *)(apuStack_128[0] + 0x18) >> 1 <= uVar7) {
          func_0x000102f031f8(1 < *(ulong *)(apuStack_128[0] + 0x18),uVar7 + 1,1);
        }
        *(ulong *)(apuStack_128[0] + 0x10) = uVar7 + 1;
        *(ulong *)(apuStack_128[0] + uVar7 * 8 + 0x20) = uVar22;
        uVar7 = uVar19;
        puVar9 = apuStack_128[0];
        if (uVar19 == uVar15) goto joined_r0x000102ee3c58;
      }
      func_0x000107c61574(uVar22);
      func_0x000107c61170(lVar13);
      uVar7 = uVar7 + 1;
    } while (uVar19 != uVar15);
  }
joined_r0x000102ee3c58:
  if (((long)puVar9 < 0) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
    puVar23 = puVar9;
    func_0x000107c60480();
  }
  else {
    puVar23 = *(undefined **)(puVar9 + 0x10);
  }
  if (puVar23 == (undefined *)0x0) {
    func_0x000107c61574(puVar9);
    puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_128[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102f0325c(0,(ulong)puVar23 & ((long)puVar23 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar23 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee4254);
      (*pcVar1)();
    }
    puVar20 = (undefined *)0x0;
    do {
      puVar21 = apuStack_128[0];
      if (((ulong)puVar9 & 0xc000000000000001) == 0) {
        puVar16 = *(undefined **)(puVar9 + (long)puVar20 * 8 + 0x20);
        func_0x000107c6157c(puVar16);
        uVar12 = uVar10;
      }
      else {
        puVar16 = puVar20;
        FUN_102f02a90();
        uVar12 = uVar10;
      }
      uVar24 = *(ulong *)(puVar16 + 0x10);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c6157c(puVar16);
      func_0x000107c490d4();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ecc();
      lVar13 = *(long *)(puVar16 + 0x68);
      if (lVar13 == 0) {
        plVar6 = (long *)0x0;
        uVar15 = 0xf000000000000000;
      }
      else {
        func_0x000107c5eb54();
        func_0x000107c613fc();
        func_0x000107c61174();
        lVar5 = lVar13;
        func_0x000107c5eb50();
        uVar15 = 0;
        lStack_88 = lVar13;
        func_0x00010440a304();
        uVar11 = 0x112f27e38;
        FUN_102f07fd0(0x112f27e38,&SUB_10440a304,&UNK_10dcf98d8);
        plVar6 = &lStack_88;
        func_0x000107c5eb4c(plVar6,uVar15,uVar11);
        func_0x000107c61170(lVar13);
        func_0x000107c61574(lVar5);
      }
      uVar10 = uVar24;
      func_0x000107c5b1f8();
      func_0x000107c61180();
      uVar11 = 0;
      FUN_102f09540(0,0x112d54e00,&PTR_PTR_1126bcf68);
      uVar7 = uVar10;
      func_0x000107c5fc54(uVar10,uVar11);
      func_0x000107c61170(uVar10);
      if (uVar7 >> 0x3e == 0) {
        uVar10 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
        uVar22 = uVar10;
      }
      else {
        uVar10 = uVar7 & 0xffffffffffffff8;
        if ((uVar7 & 0x8000000000000000) != 0) {
          uVar10 = uVar7;
        }
        uVar22 = uVar10;
        func_0x000107c60480();
        uVar19 = uVar10;
        func_0x000107c60480();
        if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee40fc);
          (*pcVar1)();
        }
        func_0x000107c60480();
      }
      puVar17 = (undefined *)(ulong)(uVar22 != 0);
      if ((long)uVar10 < (long)puVar17) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee4100);
        (*pcVar1)();
      }
      func_0x000107c61434(uVar7);
      if (((uVar7 & 0xc000000000000001) != 0) && (uVar22 != 0)) {
        func_0x000107c60318(0,uVar7,uVar11);
      }
      func_0x000107c6142c(uVar7);
      if (uVar7 >> 0x3e == 0) {
        uVar19 = 0;
        puVar18 = (undefined *)(uVar7 & 0xffffffffffffff8);
        puVar17 = puVar18 + 0x20;
        uVar7 = 3;
        if (uVar22 == 0) {
          uVar7 = 1;
        }
        uVar10 = uVar12;
        uVar12 = uVar7;
        if ((uVar7 & 1) == 0) goto LAB_102ee3ed0;
LAB_102ee3ef0:
        uVar11 = 0;
        func_0x000107c605fc(0);
        puVar8 = puVar18;
        func_0x000107c615f4(puVar18,3);
        func_0x000107c61480();
        if (puVar8 == (undefined *)0x0) {
          func_0x000107c615e8(puVar18);
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        lVar13 = *(long *)(puVar8 + 0x10);
        func_0x000107c61574();
        if (SBORROW8(uVar7 >> 1,uVar19)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee4104);
          (*pcVar1)();
        }
        if (lVar13 != (uVar7 >> 1) - uVar19) {
          func_0x000107c615ec(puVar18,2);
          uVar12 = uVar7;
          goto LAB_102ee3ed0;
        }
        puVar17 = puVar18;
        func_0x000107c61480(puVar18,uVar11);
        func_0x000107c615ec(puVar18,2);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar17 == (undefined *)0x0) goto LAB_102ee3f6c;
      }
      else {
        uVar19 = uVar7 & 0xffffffffffffff8;
        if ((uVar7 & 0x8000000000000000) != 0) {
          uVar19 = uVar7;
        }
        puVar18 = (undefined *)0x0;
        func_0x000107c60484(0,puVar17);
        uVar10 = uVar12;
        func_0x000107c6142c(uVar7);
        uVar7 = uVar12;
        if ((uVar12 & 1) != 0) goto LAB_102ee3ef0;
LAB_102ee3ed0:
        uVar10 = uVar12;
        puVar8 = puVar18;
        FUN_102f04388(puVar18,puVar17,uVar19);
LAB_102ee3f6c:
        func_0x000107c615e8(puVar18);
        puVar17 = puVar8;
      }
      func_0x000102f0e1c0(uVar24,puVar17);
      func_0x000107c61574(puVar17);
      uVar12 = uVar24;
      func_0x000107c4008c(uVar24);
      func_0x000107c61180();
      func_0x000107c59558();
      func_0x000107c61170(uVar12);
      uVar12 = uVar24;
      func_0x000107c4008c(uVar24);
      func_0x000107c61180();
      func_0x000107c58f30();
      func_0x000107c61170(uVar12);
      uVar12 = uVar24;
      func_0x000107c4008c(uVar24);
      func_0x000107c61180();
      if (uVar15 >> 0x3c < 0xf) {
        plVar14 = plVar6;
        func_0x000107c5ee20(plVar6,uVar15);
      }
      else {
        plVar14 = (long *)0x0;
      }
      func_0x000107c53b70(uVar12);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(plVar14);
      func_0x0001000b44c0(plVar6,uVar15);
      func_0x000107c61574(puVar16);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      uVar12 = *(ulong *)(puVar21 + 0x10);
      apuStack_128[0] = puVar21;
      if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar12) {
        func_0x000102f0325c(1 < *(ulong *)(puVar21 + 0x18),uVar12 + 1,1);
      }
      puVar21 = apuStack_128[0];
      puVar20 = puVar20 + 1;
      *(ulong *)(apuStack_128[0] + 0x10) = uVar12 + 1;
      *(undefined **)(apuStack_128[0] + uVar12 * 0x10 + 0x20) = puVar16;
      *(ulong *)(apuStack_128[0] + uVar12 * 0x10 + 0x28) = uVar24;
    } while (puVar23 != puVar20);
    func_0x000107c61574(puVar9);
  }
  func_0x0001000d224c(&lStack_88);
  lVar13 = lStack_88;
  puVar9 = &UNK_1105e5fa0;
  func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
  func_0x000107c61614(puVar9 + 0x10,unaff_x20);
  puVar23 = &UNK_1105e69f0;
  func_0x000107c613fc(&UNK_1105e69f0,0xd0,7);
  uVar11 = param_1[0xc];
  uVar26 = param_1[0xf];
  uVar25 = param_1[0xe];
  *(undefined8 *)(puVar23 + 0x80) = param_1[0xd];
  *(undefined8 *)(puVar23 + 0x78) = uVar11;
  *(undefined8 *)(puVar23 + 0x90) = uVar26;
  *(undefined8 *)(puVar23 + 0x88) = uVar25;
  uVar11 = param_1[0x10];
  *(undefined8 *)(puVar23 + 0xa0) = param_1[0x11];
  *(undefined8 *)(puVar23 + 0x98) = uVar11;
  uVar11 = param_1[4];
  uVar26 = param_1[7];
  uVar25 = param_1[6];
  *(undefined8 *)(puVar23 + 0x40) = param_1[5];
  *(undefined8 *)(puVar23 + 0x38) = uVar11;
  *(undefined8 *)(puVar23 + 0x50) = uVar26;
  *(undefined8 *)(puVar23 + 0x48) = uVar25;
  uVar11 = param_1[8];
  uVar26 = param_1[0xb];
  uVar25 = param_1[10];
  *(undefined8 *)(puVar23 + 0x60) = param_1[9];
  *(undefined8 *)(puVar23 + 0x58) = uVar11;
  *(undefined8 *)(puVar23 + 0x70) = uVar26;
  *(undefined8 *)(puVar23 + 0x68) = uVar25;
  uVar11 = *param_1;
  uVar26 = param_1[3];
  uVar25 = param_1[2];
  *(undefined8 *)(puVar23 + 0x20) = param_1[1];
  *(undefined8 *)(puVar23 + 0x18) = uVar11;
  *(undefined **)(puVar23 + 0x10) = puVar9;
  uVar11 = param_1[0x12];
  *(undefined8 *)(puVar23 + 0x30) = uVar26;
  *(undefined8 *)(puVar23 + 0x28) = uVar25;
  *(undefined8 *)(puVar23 + 0xa8) = uVar11;
  *(undefined **)(puVar23 + 0xb0) = puVar21;
  *(undefined4 *)(puVar23 + 0xb8) = uVar2;
  puVar23[0xbc] = param_2 & 1;
  *(undefined8 *)(puVar23 + 0xc0) = param_3;
  *(undefined8 *)(puVar23 + 200) = param_4;
  FUN_102f04d58(param_1,apuStack_128);
  func_0x000107c6157c(param_4);
  func_0x00010075a04c(0,1,FUN_102f08010,puVar23);
  func_0x000107c61574(lVar13);
  func_0x000107c61574(puVar23);
  return;
}



/* Entry: 102ee45a4; end: 102ee4813;  */

/* WARNING: Possible PIC construction at 0x000102ee47e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ee47ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ee45a4(undefined8 *param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [152];
  
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  iVar2 = (int)param_1[2];
  func_0x000107c51edc();
  if (iVar2 == 0) {
    pcVar1 = "missing story tray type";
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar6 = 0xd000000000000017;
  }
  else {
    lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112f27f40) + _DAT_112f86ed8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000107c5fd0c();
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(auStack_f0 + -extraout_x8,1,1,lVar4);
      func_0x000107c5fcec(0);
      puVar5 = PTR___sScMMa_11034fc70;
      FUN_102f04d58(param_1,auStack_e8);
      func_0x000107c61174();
      lVar4 = lVar3;
      func_0x000107c615f0();
      func_0x000107c5fce8();
      uVar6 = 0x112d45220;
      FUN_102f07fd0(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
      puVar5 = &UNK_1105e82c8;
      func_0x000107c613fc(&UNK_1105e82c8,0xd0,7);
      uVar7 = param_1[0xc];
      uVar9 = param_1[0xf];
      uVar8 = param_1[0xe];
      *(undefined8 *)(puVar5 + 0x90) = param_1[0xd];
      *(undefined8 *)(puVar5 + 0x88) = uVar7;
      *(undefined8 *)(puVar5 + 0xa0) = uVar9;
      *(undefined8 *)(puVar5 + 0x98) = uVar8;
      uVar7 = param_1[0x10];
      *(undefined8 *)(puVar5 + 0xb0) = param_1[0x11];
      *(undefined8 *)(puVar5 + 0xa8) = uVar7;
      uVar7 = param_1[4];
      uVar9 = param_1[7];
      uVar8 = param_1[6];
      *(undefined8 *)(puVar5 + 0x50) = param_1[5];
      *(undefined8 *)(puVar5 + 0x48) = uVar7;
      *(undefined8 *)(puVar5 + 0x60) = uVar9;
      *(undefined8 *)(puVar5 + 0x58) = uVar8;
      uVar7 = param_1[8];
      uVar9 = param_1[0xb];
      uVar8 = param_1[10];
      *(undefined8 *)(puVar5 + 0x70) = param_1[9];
      *(undefined8 *)(puVar5 + 0x68) = uVar7;
      *(undefined8 *)(puVar5 + 0x80) = uVar9;
      *(undefined8 *)(puVar5 + 0x78) = uVar8;
      uVar7 = *param_1;
      uVar9 = param_1[3];
      uVar8 = param_1[2];
      *(undefined8 *)(puVar5 + 0x30) = param_1[1];
      *(undefined8 *)(puVar5 + 0x28) = uVar7;
      *(long *)(puVar5 + 0x10) = lVar4;
      *(undefined8 *)(puVar5 + 0x18) = uVar6;
      *(int *)(puVar5 + 0x20) = iVar2;
      uVar6 = param_1[0x12];
      *(undefined8 *)(puVar5 + 0x40) = uVar9;
      *(undefined8 *)(puVar5 + 0x38) = uVar8;
      *(undefined8 *)(puVar5 + 0xb8) = uVar6;
      *(long *)(puVar5 + 0xc0) = unaff_x20;
      *(long *)(puVar5 + 200) = lVar3;
      func_0x0001000abba4(0,0,auStack_f0 + -extraout_x8,&UNK_10db63b20,puVar5);
      func_0x000107c61574();
      func_0x000107c615e8(lVar3);
      return;
    }
    pcVar1 = "storySelectionProvider nil";
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar6 = 0xd00000000000001a;
  }
  func_0x000107c5fadc(uVar6,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c466bc(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 102ee4814; end: 102ee4947;  */

void FUN_102ee4814(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  uVar5 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  pcVar2 = "send(with:sendParameters:snapDocSendHandler:)";
  func_0x0001000c10c0("send(with:sendParameters:snapDocSendHandler:)");
  func_0x000107c61180();
  puVar3 = &UNK_1105e8278;
  func_0x000107c613fc(&UNK_1105e8278,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  puVar3[0x18] = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined8 *)(puVar3 + 0x30) = param_4;
  *(undefined8 *)(puVar3 + 0x38) = param_5;
  *(undefined8 *)(puVar3 + 0x40) = param_6;
  pcStack_70 = FUN_102f093bc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105e8290;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000100d2b830(uVar5,uVar1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 102ee4948; end: 102ee4ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ee4948(undefined8 param_1,char param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_198;
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
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (param_2 == '\x01') {
    (*param_4)(0);
  }
  else {
    uStack_100 = param_1;
    func_0x000100b60084(&uStack_100);
  }
  puVar1 = (undefined8 *)(param_6 + _DAT_112f27e80);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  puVar2 = puVar1;
  func_0x000102f05844();
  if ((int)puVar2 == 1) {
    func_0x000107c61428(param_7 + 0x10,auStack_60,0,0);
  }
  else {
    lVar3 = puVar1[6];
    func_0x000107c6157c(lVar3);
    func_0x000107c61428(param_7 + 0x10,auStack_60,0,0);
    if ((lVar3 != 0) &&
       (lVar4 = *(long *)(param_7 + 0x40), func_0x000107c615e8(lVar3), lVar4 == lVar3)) {
      FUN_102ed3eb4(&uStack_198);
      uStack_98 = puVar1[0xd];
      uStack_a0 = puVar1[0xc];
      uStack_88 = puVar1[0xf];
      uStack_90 = puVar1[0xe];
      uStack_78 = puVar1[0x11];
      uStack_80 = puVar1[0x10];
      uStack_70 = puVar1[0x12];
      uStack_d8 = puVar1[5];
      uStack_e0 = puVar1[4];
      uStack_c8 = puVar1[7];
      uStack_d0 = puVar1[6];
      uStack_b8 = puVar1[9];
      uStack_c0 = puVar1[8];
      uStack_a8 = puVar1[0xb];
      uStack_b0 = puVar1[10];
      uStack_f8 = puVar1[1];
      uStack_100 = *puVar1;
      uStack_e8 = puVar1[3];
      uStack_f0 = puVar1[2];
      puVar1[0xd] = uStack_130;
      puVar1[0xc] = uStack_138;
      puVar1[0xf] = uStack_120;
      puVar1[0xe] = uStack_128;
      puVar1[0x11] = uStack_110;
      puVar1[0x10] = uStack_118;
      puVar1[0x12] = uStack_108;
      puVar1[5] = uStack_170;
      puVar1[4] = uStack_178;
      puVar1[7] = uStack_160;
      puVar1[6] = uStack_168;
      puVar1[9] = uStack_150;
      puVar1[8] = uStack_158;
      puVar1[0xb] = uStack_140;
      puVar1[10] = uStack_148;
      puVar1[1] = uStack_190;
      *puVar1 = uStack_198;
      puVar1[3] = uStack_180;
      puVar1[2] = uStack_188;
      FUN_102f080f0(&uStack_100,0x112f27e88,&UNK_10db63a18);
    }
  }
  return;
}



/* Entry: 102ee4ab8; end: 102ee4baf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ee4ab8(undefined8 param_1,long param_2,code *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  lVar3 = *(long *)(param_2 + _DAT_112f27e70);
  if (lVar3 == 0) {
    (*param_3)();
  }
  else {
    puVar1 = &UNK_1105e8408;
    func_0x000107c613fc(&UNK_1105e8408,0x28,7);
    *(code **)(puVar1 + 0x10) = param_3;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_1;
    uStack_50 = 0x102f09ba8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1105e8420;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c615f0(lVar3);
    func_0x000107c6157c(param_4);
    func_0x000107c61434(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(lVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 102ee4bb0; end: 102ee4c5f; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceImpl sendWithSnapDocBundles:sendParameters:snapDocSendHandler:] */

void FUN_102ee4bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ebb4f0;
  func_0x0001000285a8(0x112ebb4f0,&UNK_10db63a20);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102ee0a94(param_3,param_4,param_5);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ee4c60; end: 102ee517b;  */

/* WARNING: Removing unreachable block (ram,0x000102ee5178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ee4c60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  long extraout_x8;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long unaff_x20;
  long lVar19;
  undefined **ppuVar20;
  long lVar21;
  long lVar22;
  long alStack_140 [3];
  undefined1 auStack_128 [8];
  long alStack_120 [3];
  undefined1 auStack_108 [8];
  undefined8 auStack_100 [2];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar7 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = -extraout_x8;
  lVar19 = (long)&uStack_f0 + lVar7;
  func_0x0001000d224c(&uStack_68);
  uStack_a0 = uStack_68;
  uVar16 = *(undefined8 *)(param_1 + _DAT_113034f28);
  uVar8 = 0;
  FUN_102f09540(0,0x112d60fb0,&PTR_PTR_1126b3568);
  func_0x000107c5fc48(uVar16,uVar8);
  uVar8 = *(undefined8 *)(param_1 + _DAT_113034f30);
  uStack_a8 = uVar16;
  func_0x000107c5fc48(uVar8,PTR___sSSN_11034da80);
  uStack_b0 = uVar8;
  if (((undefined8 *)(param_1 + _DAT_113034f40))[1] == 0) {
    uStack_b8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + _DAT_113034f40);
    func_0x000107c5fadc();
    uStack_b8 = uVar8;
  }
  uVar16 = *(undefined8 *)(param_1 + _DAT_113034f48);
  uVar8 = 0;
  func_0x0001043f7068(0);
  func_0x000107c5fc48(uVar16,uVar8);
  uVar17 = *(undefined8 *)(param_1 + _DAT_113034f50);
  uVar8 = 0;
  uStack_c0 = uVar16;
  func_0x000104409d84(0);
  func_0x000107c5fc48(uVar17,uVar8);
  uVar8 = *(undefined8 *)(param_1 + _DAT_113034f58);
  uStack_d0 = uVar17;
  if (((undefined8 *)(param_1 + _DAT_113034f60))[1] == 0) {
    uStack_c8 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(param_1 + _DAT_113034f60);
    func_0x000107c5fadc();
    uStack_c8 = uVar16;
  }
  lVar18 = *(long *)(param_1 + _DAT_113034f68);
  if (lVar18 == 0) {
    lVar18 = 0;
  }
  else {
    uVar16 = 0;
    FUN_102f09540(0,0x112d70b48,&PTR_PTR_1126d95f0);
    func_0x000107c5fc48(lVar18,uVar16);
  }
  if (((undefined8 *)(param_1 + _DAT_113034f70))[1] == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(param_1 + _DAT_113034f70);
    func_0x000107c5fadc();
  }
  lStack_d8 = CONCAT44(lStack_d8._4_4_,(uint)*(byte *)(param_1 + _DAT_113034f78));
  uStack_e0 = *(undefined8 *)(param_1 + _DAT_113034f80);
  uStack_e8 = *(undefined8 *)(param_1 + _DAT_113034f88);
  FUN_102f059cc(param_1 + _DAT_1138127a0,lVar19,0x112d373d8,&UNK_10d9014c0);
  uVar9 = 0;
  func_0x000107c5eea4();
  lVar21 = *(long *)(uVar9 - 8);
  uVar14 = 1;
  lVar10 = lVar19;
  (**(code **)(lVar21 + 0x30))(lVar19,1,uVar9);
  lVar22 = 0;
  if ((int)lVar10 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar21 + 8))(lVar19);
    uVar14 = uVar9;
    lVar22 = lVar10;
  }
  ppuVar20 = &PTR____CFConstantStringClassReference_110f12eb8;
  uVar9 = *(ulong *)(param_1 + _DAT_1138127a8);
  ppuVar11 = ppuVar20;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f12eb8);
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar11);
  if (*(long *)(uVar9 + 0x10) != 0) {
    func_0x000107c61434(uVar9);
    uVar15 = uVar14;
    func_0x000100029284();
    if ((uVar15 & 1) != 0) {
      uVar12 = *(undefined8 *)(*(long *)(uVar9 + 0x38) + (long)ppuVar20 * 8);
      func_0x000107c61174();
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(uVar9);
      uVar17 = uVar12;
      func_0x000107c3ebcc();
      uVar5 = (undefined1)uVar17;
      func_0x000107c61170(uVar12);
      goto LAB_102ee4fc8;
    }
    func_0x000107c6142c(uVar14);
    uVar14 = uVar9;
  }
  func_0x000107c6142c(uVar14);
  uVar5 = 0;
LAB_102ee4fc8:
  iVar6 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f27e98);
  func_0x000108faa2c4();
  uVar17 = uStack_d0;
  uStack_f0 = uVar8;
  if (iVar6 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + _DAT_1138127b0);
    func_0x000107c61174();
  }
  puVar13 = &UNK_1105e63d8;
  func_0x000107c613fc(&UNK_1105e63d8,0x20,7);
  *(long *)(puVar13 + 0x10) = unaff_x20;
  *(long *)(puVar13 + 0x18) = param_1;
  pcStack_78 = FUN_102f04e70;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_102ee6b00;
  puStack_80 = &UNK_1105e63f0;
  ppuVar11 = &puStack_98;
  puStack_70 = puVar13;
  func_0x000107c60bc4();
  puVar13 = puStack_70;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar13);
  *(undefined ***)((long)auStack_100 + lVar7 + 8) = ppuVar11;
  uStack_d0 = uVar8;
  *(undefined8 *)((long)auStack_100 + lVar7) = uVar8;
  auStack_108[lVar7] = uVar5;
  *(long *)((long)alStack_120 + lVar7 + 0x10) = lVar22;
  *(undefined8 *)((long)alStack_120 + lVar7 + 8) = uStack_e8;
  *(undefined8 *)((long)alStack_120 + lVar7) = uStack_e0;
  auStack_128[lVar7] = (undefined1)lStack_d8;
  *(long *)((long)alStack_140 + lVar7 + 8) = lVar18;
  *(undefined8 *)((long)alStack_140 + lVar7 + 0x10) = uVar16;
  uVar8 = uStack_c8;
  lStack_d8 = lVar18;
  *(undefined8 *)((long)alStack_140 + lVar7) = uStack_c8;
  uVar4 = uStack_a0;
  uVar3 = uStack_a8;
  uVar2 = uStack_b0;
  uVar1 = uStack_b8;
  uVar12 = uStack_c0;
  func_0x000107c51efc(uStack_a0);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lStack_d8);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(uStack_d0);
  return;
}



/* Entry: 102ee517c; end: 102ee531b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ee517c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  char *pcVar9;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar8 = &puStack_70;
  lVar1 = *(long *)(*(long *)(param_2 + _DAT_112f27f28) + _DAT_11307fc48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = param_1;
    FUN_102f132c8(param_1);
    uVar3 = 0;
    func_0x000104522c9c(0);
    uVar4 = uVar2;
    func_0x000107c5fc48(uVar2,uVar3);
    func_0x000107c6142c(uVar2);
    lVar5 = lVar1;
    func_0x000107c5b59c(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar4);
    puVar6 = &UNK_1105e5fa0;
    func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,param_2);
    puVar7 = &UNK_1105e64f0;
    func_0x000107c613fc(&UNK_1105e64f0,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(undefined8 *)(puVar7 + 0x18) = param_1;
    *(undefined8 *)(puVar7 + 0x20) = param_3;
    pcStack_50 = FUN_102f05874;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1011f2f24;
    puStack_58 = &UNK_1105e6508;
    puStack_48 = puVar7;
    func_0x000107c60bc4(&puStack_70);
    puVar6 = puStack_48;
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar6);
    pcVar9 = "didSend(with:)";
    func_0x0001000c10c0("didSend(with:)");
    func_0x000107c61180();
    func_0x000107c5dc64(lVar5);
    func_0x000107c615e8(pcVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 102ee531c; end: 102ee540b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ee531c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_3 + _DAT_112f27ea8);
    uVar3 = *(undefined8 *)(param_3 + _DAT_112f27f30);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar3);
    uVar1 = param_4;
    func_0x000102f13800(param_4,uVar2,uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    FUN_102ee540c(param_4,uVar1,param_5,param_1,0,0);
    func_0x000107c61170(param_3);
    func_0x000107c6142c(uVar1);
  }
  return;
}



/* Entry: 102ee540c; end: 102ee6aff;  */

/* WARNING: Removing unreachable block (ram,0x000102ee5a4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ee540c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  undefined5 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  long unaff_x20;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  undefined8 uVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  undefined1 auStack_a98 [24];
  undefined1 auStack_a80 [24];
  undefined8 uStack_a68;
  undefined1 auStack_a60 [24];
  long lStack_a48;
  long lStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  long lStack_9b0;
  long lStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined5 uStack_910;
  undefined3 uStack_90b;
  undefined5 uStack_908;
  undefined3 uStack_903;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d0;
  undefined7 uStack_7c8;
  undefined1 uStack_7c1;
  undefined7 uStack_7c0;
  undefined1 uStack_7b9;
  undefined7 uStack_7b8;
  undefined1 uStack_7b1;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_730;
  undefined8 *puStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined1 auStack_688 [24];
  undefined8 uStack_670;
  undefined8 *puStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined3 uStack_620;
  undefined5 uStack_61d;
  undefined3 uStack_618;
  undefined5 uStack_615;
  undefined3 uStack_610;
  undefined5 uStack_60d;
  undefined3 uStack_608;
  undefined5 uStack_605;
  undefined8 uStack_600;
  undefined1 uStack_5f8;
  undefined7 uStack_5f7;
  undefined1 uStack_5f0;
  undefined7 uStack_5ef;
  undefined1 uStack_5e8;
  undefined7 uStack_5e7;
  undefined8 uStack_5e0;
  undefined8 uStack_5d0;
  undefined8 *puStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined3 uStack_580;
  undefined5 uStack_57d;
  undefined3 uStack_578;
  undefined5 uStack_575;
  undefined3 uStack_570;
  undefined5 uStack_56d;
  undefined8 uStack_568;
  undefined8 uStack_560;
  ulong uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_530;
  undefined8 *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 uStack_4d0;
  undefined1 uStack_4cf;
  undefined1 uStack_4ce;
  undefined5 uStack_4cd;
  undefined3 uStack_4c8;
  undefined5 uStack_4c5;
  undefined3 uStack_4c0;
  undefined5 uStack_4bd;
  undefined1 uStack_4b8;
  undefined7 uStack_4b7;
  undefined1 uStack_4b0;
  undefined7 uStack_4af;
  undefined1 uStack_4a8;
  undefined7 uStack_4a7;
  undefined8 uStack_4a0;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 uStack_390;
  undefined1 uStack_38f;
  undefined1 uStack_38e;
  undefined8 uStack_38d;
  undefined5 uStack_385;
  undefined3 uStack_380;
  undefined5 uStack_37d;
  undefined1 uStack_378;
  undefined8 uStack_377;
  undefined7 uStack_36f;
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined8 uStack_360;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined3 uStack_210;
  undefined5 uStack_20d;
  undefined3 uStack_208;
  undefined5 uStack_205;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  undefined8 uStack_f9;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar14 = unaff_x20;
  func_0x000107c614f0();
  puVar15 = &UNK_1105e61a8;
  func_0x000107c613fc(&UNK_1105e61a8,0xa8,7);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f27e80);
  func_0x000107c61428(puVar2,auStack_688,1,0);
  uStack_d8 = puVar2[0xb];
  uStack_e0 = puVar2[10];
  uStack_148 = puVar2[0xd];
  uStack_150 = puVar2[0xc];
  uStack_c8 = puVar2[0xd];
  uStack_d0 = puVar2[0xc];
  uVar18 = puVar2[0xf];
  uStack_140 = puVar2[0xe];
  uStack_128 = puVar2[0x11];
  uStack_130 = puVar2[0x10];
  uStack_98 = puVar2[3];
  uStack_a0 = puVar2[2];
  uStack_188 = puVar2[5];
  uStack_190 = puVar2[4];
  uStack_88 = puVar2[5];
  uStack_90 = puVar2[4];
  uVar27 = puVar2[7];
  uStack_180 = puVar2[6];
  uStack_168 = puVar2[9];
  uStack_170 = puVar2[8];
  uStack_158 = puVar2[0xb];
  uStack_160 = puVar2[10];
  uStack_e8 = puVar2[9];
  uStack_f0 = puVar2[8];
  uStack_1a8 = puVar2[1];
  uStack_1b0 = *puVar2;
  uStack_198 = puVar2[3];
  uStack_1a0 = puVar2[2];
  uStack_a8 = puVar2[1];
  uStack_b0 = *puVar2;
  uStack_120 = puVar2[0x12];
  uStack_80 = puVar2[6];
  uStack_c0 = puVar2[0xe];
  uStack_138._0_1_ = (undefined1)uVar18;
  uVar7 = (undefined1)uStack_138;
  uStack_f9 = puVar2[0x12];
  uStack_100 = (undefined7)((ulong)puVar2[0x11] >> 8);
  uStack_110 = *(undefined8 *)((long)puVar2 + 0x79);
  uStack_108 = (undefined7)*(undefined8 *)((long)puVar2 + 0x81);
  uStack_101 = (undefined1)((ulong)*(undefined8 *)((long)puVar2 + 0x81) >> 0x38);
  iVar12 = (int)&uStack_1b0;
  uStack_178 = uVar27;
  uStack_138 = uVar18;
  func_0x000102f05844();
  if (iVar12 == 1) {
    func_0x000107c61468(puVar15,0xa8,7);
    return;
  }
  *(undefined8 *)(puVar15 + 0x18) = uStack_a8;
  *(undefined8 *)(puVar15 + 0x10) = uStack_b0;
  *(undefined8 *)(puVar15 + 0x28) = uStack_98;
  *(undefined8 *)(puVar15 + 0x20) = uStack_a0;
  *(undefined8 *)(puVar15 + 0x38) = uStack_88;
  *(undefined8 *)(puVar15 + 0x30) = uStack_90;
  *(undefined8 *)(puVar15 + 0x80) = uStack_c0;
  *(undefined8 *)(puVar15 + 0x58) = uStack_e8;
  *(undefined8 *)(puVar15 + 0x50) = uStack_f0;
  *(undefined8 *)(puVar15 + 0x68) = uStack_d8;
  *(undefined8 *)(puVar15 + 0x60) = uStack_e0;
  *(undefined8 *)(puVar15 + 0x78) = uStack_c8;
  *(undefined8 *)(puVar15 + 0x70) = uStack_d0;
  puVar15[0x88] = uVar7;
  *(undefined8 *)(puVar15 + 0xa0) = uStack_f9;
  *(ulong *)(puVar15 + 0x98) = CONCAT71(uStack_100,uStack_101);
  *(ulong *)(puVar15 + 0x91) = CONCAT17(uStack_101,uStack_108);
  *(undefined8 *)(puVar15 + 0x89) = uStack_110;
  *(undefined8 *)(puVar15 + 0x40) = uStack_80;
  *(undefined8 *)(puVar15 + 0x48) = param_1;
  func_0x000107c61174(param_1);
  puVar17 = &uStack_2b0;
  FUN_102f059cc(&uStack_1b0,puVar17,0x112f27e88,&UNK_10db63a18);
  func_0x000107c615e8(uVar27);
  uVar27 = *(undefined8 *)(puVar15 + 0x50);
  *(undefined8 *)(puVar15 + 0x50) = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61170(uVar27);
  uVar27 = *(undefined8 *)(puVar15 + 0x58);
  *(undefined8 *)(puVar15 + 0x58) = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar27);
  if (param_3 != 0) {
    func_0x000107c61174();
    uVar13 = (uint)param_3;
    FUN_102ed3614();
    uVar27 = *(undefined8 *)(puVar15 + 0x68);
    *(ulong *)(puVar15 + 0x60) = (ulong)(uVar13 & 0x101);
    *(ulong **)(puVar15 + 0x68) = puVar17;
    func_0x000107c6142c(uVar27);
  }
  if (param_5 != 0) {
    func_0x000107c61174();
    lVar35 = param_5;
    FUN_102ed3f64();
    uVar27 = *(undefined8 *)(puVar15 + 0x68);
    *(ulong *)(puVar15 + 0x60) = (ulong)((uint)lVar35 & 0x101);
    *(ulong **)(puVar15 + 0x68) = puVar17;
    func_0x000107c6142c(uVar27);
    bVar3 = *(byte *)(param_5 + _DAT_112f86ea0);
    puVar15[0x70] = bVar3;
    puVar15[0x72] = *(undefined1 *)(param_5 + _DAT_112f86ea8);
    iVar12 = (int)*(undefined8 *)(puVar15 + 0x20);
    func_0x000107c51edc();
    if (iVar12 == 1) {
LAB_102ee5680:
      puVar15[0x71] = bVar3 ^ 1;
      func_0x000107c61170(param_5);
      if (((bVar3 ^ 1) & 1) != 0) goto LAB_102ee56a0;
    }
    else {
      iVar12 = (int)*(undefined8 *)(puVar15 + 0x20);
      func_0x000107c51edc();
      if (iVar12 == 2) goto LAB_102ee5680;
      iVar12 = (int)*(undefined8 *)(puVar15 + 0x20);
      func_0x000107c51edc();
      if (iVar12 == 4) goto LAB_102ee5680;
      puVar15[0x71] = 0;
      func_0x000107c61170(param_5);
      if ((bVar3 & 1) == 0) goto LAB_102ee56a0;
    }
    uVar27 = *(undefined8 *)(puVar15 + 0x80);
    *(undefined8 *)(puVar15 + 0x78) = 0;
    *(undefined8 *)(puVar15 + 0x80) = 0;
    func_0x000107c6142c(uVar27);
  }
LAB_102ee56a0:
  uVar22 = *(ulong *)(puVar15 + 0x18);
  if (uVar22 >> 0x3e == 0) {
    uVar23 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar23 = uVar22 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar22) {
      uVar23 = uVar22;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar22);
  if (uVar23 != 0) {
    uVar28 = 0;
    do {
      if ((uVar22 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x102ee58d4);
          (*pcVar11)();
        }
        uVar34 = *(ulong *)(uVar22 + uVar28 * 8 + 0x20);
        func_0x000107c6157c(uVar34);
      }
      else {
        uVar34 = uVar28;
        FUN_102f02a90(uVar28,uVar22);
      }
      if (SCARRY8(uVar28,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x102ee574c);
        (*pcVar11)();
      }
      uVar36 = uVar28 + 1;
      uStack_2b0 = uVar34;
      FUN_102ef02c0(&uStack_2b0,puVar15 + 0x10);
      func_0x000107c61574(uVar34);
      uVar28 = uVar28 + 1;
    } while (uVar36 != uVar23);
  }
  func_0x000107c6142c(uVar22);
  bVar3 = puVar15[0x72];
  uVar22 = *(ulong *)(puVar15 + 0x18);
  if (uVar22 >> 0x3e == 0) {
    uVar23 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar23 = uVar22 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar22) {
      uVar23 = uVar22;
    }
    func_0x000107c60480();
  }
  if (uVar23 != 0) {
    if ((uVar22 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar22 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x102ee6268);
        (*pcVar11)();
      }
      lVar24 = *(long *)(uVar22 + 0x20);
      func_0x000107c6157c(lVar24);
      lVar35 = *(long *)(puVar15 + 0x48);
    }
    else {
      func_0x000107c61434(uVar22);
      lVar24 = 0;
      FUN_102f02a90(0,uVar22);
      func_0x000107c6142c(uVar22);
      lVar35 = *(long *)(puVar15 + 0x48);
    }
    if (lVar35 == 0) {
      func_0x000107c61574(lVar24);
    }
    else {
      func_0x000107c615f0(lVar35);
      puVar16 = PTR_PTR_1126c33d0;
      func_0x000107c61168(PTR_PTR_1126c33d0);
      lVar29 = lVar35;
      func_0x000107c6148c(lVar35,puVar16);
      if (lVar29 == 0) {
        func_0x000107c61574(lVar24);
        func_0x000107c615e8(lVar35);
      }
      else {
        func_0x000107c5bf40();
        func_0x000107c61180();
        func_0x000107c615e8(lVar35);
        if (lVar29 == 0) {
LAB_102ee58b0:
          func_0x000107c61574(lVar24);
        }
        else {
          if ((bVar3 & 1) == 0) {
            lVar35 = *(long *)(unaff_x20 + _DAT_112f27f50);
            func_0x000107c5b8c0();
            func_0x000107c61180();
            cVar4 = *(char *)(lVar35 + _DAT_112ff5860);
            func_0x000107c61170();
            if (cVar4 == '\x01') goto LAB_102ee5830;
          }
          else {
LAB_102ee5830:
            lVar35 = *(long *)(unaff_x20 + _DAT_112f27f50);
            uVar27 = 0;
            func_0x000107c5fadc(0,0xe000000000000000);
            func_0x000107c3ecd4();
            func_0x000107c61180();
            func_0x000107c61170(uVar27);
            func_0x000107c61170(lVar29);
            if (lVar35 == 0) goto LAB_102ee58b0;
            lVar29 = *(long *)(lVar24 + 0x68);
            *(long *)(lVar24 + 0x68) = lVar35;
          }
          func_0x000107c61574(lVar24);
          func_0x000107c61170(lVar29);
        }
      }
    }
  }
  uStack_248 = *(undefined8 *)(puVar15 + 0x78);
  uStack_250 = *(undefined8 *)(puVar15 + 0x70);
  uStack_238 = *(undefined8 *)(puVar15 + 0x88);
  uStack_240 = *(undefined8 *)(puVar15 + 0x80);
  uStack_228 = *(undefined8 *)(puVar15 + 0x98);
  uStack_230 = *(undefined8 *)(puVar15 + 0x90);
  uStack_220 = *(undefined8 *)(puVar15 + 0xa0);
  uStack_288 = *(undefined8 *)(puVar15 + 0x38);
  uStack_290 = *(undefined8 *)(puVar15 + 0x30);
  uStack_278 = *(undefined8 *)(puVar15 + 0x48);
  uStack_280 = *(undefined8 *)(puVar15 + 0x40);
  uStack_268 = *(undefined8 *)(puVar15 + 0x58);
  uStack_270 = *(undefined8 *)(puVar15 + 0x50);
  uStack_258 = *(undefined8 *)(puVar15 + 0x68);
  uStack_260 = *(undefined8 *)(puVar15 + 0x60);
  uStack_2a8 = *(undefined8 *)(puVar15 + 0x18);
  uStack_2b0 = *(ulong *)(puVar15 + 0x10);
  uStack_298 = *(undefined8 *)(puVar15 + 0x28);
  uStack_2a0 = *(undefined8 *)(puVar15 + 0x20);
  uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112f27e98);
  uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112f27f50);
  FUN_102f04d58(&uStack_2b0,&uStack_350);
  puVar17 = &uStack_2b0;
  FUN_102eda598(puVar17,uVar27,uVar26);
  func_0x000102f04d94(&uStack_2b0);
  if (((ulong)puVar17 & 1) != 0) {
    uStack_2e8 = *(undefined8 *)(puVar15 + 0x78);
    uStack_2f0 = *(undefined8 *)(puVar15 + 0x70);
    uStack_2d8 = *(undefined8 *)(puVar15 + 0x88);
    uStack_2e0 = *(undefined8 *)(puVar15 + 0x80);
    uStack_2c8 = *(undefined8 *)(puVar15 + 0x98);
    uStack_2d0 = *(undefined8 *)(puVar15 + 0x90);
    uStack_2c0 = *(undefined8 *)(puVar15 + 0xa0);
    uStack_328 = *(undefined8 *)(puVar15 + 0x38);
    uStack_330 = *(undefined8 *)(puVar15 + 0x30);
    uStack_318 = *(undefined8 *)(puVar15 + 0x48);
    uStack_320 = *(undefined8 *)(puVar15 + 0x40);
    uStack_308 = *(undefined8 *)(puVar15 + 0x58);
    uStack_310 = *(undefined8 *)(puVar15 + 0x50);
    uStack_2f8 = *(undefined8 *)(puVar15 + 0x68);
    uStack_300 = *(undefined8 *)(puVar15 + 0x60);
    uStack_348 = *(undefined8 *)(puVar15 + 0x18);
    uStack_350 = *(undefined8 *)(puVar15 + 0x10);
    uStack_338 = *(undefined8 *)(puVar15 + 0x28);
    uStack_340 = *(undefined8 *)(puVar15 + 0x20);
    uVar32 = *(undefined8 *)(unaff_x20 + _DAT_112f27f60);
    uVar30 = *(undefined8 *)(unaff_x20 + _DAT_112f27e78);
    FUN_102f04d58(&uStack_350,&uStack_3f0);
    func_0x000107c5c734(uVar30);
    func_0x000107c61180();
    puVar25 = &uStack_350;
    FUN_102edb064(puVar25,uVar32,uVar27,uVar26,uVar30);
    func_0x000107c615e8(uVar30);
    uVar26 = uStack_320;
    uVar27 = uStack_340;
    uStack_1b8 = uStack_350;
    uStack_1c0 = uStack_338;
    uStack_1c8 = uStack_330;
    uStack_1d0 = uStack_328;
    uStack_670 = uStack_350;
    uStack_660 = uStack_340;
    uStack_658 = uStack_338;
    uStack_650 = uStack_330;
    uStack_648 = uStack_328;
    uStack_615 = 0;
    uStack_610 = 0;
    uStack_618 = 0;
    uStack_620 = 0;
    uStack_61d = 0;
    uStack_628 = 0;
    uStack_630 = 0;
    uStack_638 = 0;
    uStack_600 = 0;
    uStack_640 = uStack_320;
    uStack_608 = 0;
    uStack_605 = 0;
    uStack_5f8 = 0;
    uStack_5e8 = 0;
    uStack_5e7 = 0;
    uStack_5f0 = 0;
    uStack_5ef = 0;
    uStack_5e0 = 0;
    uStack_5d0 = uStack_350;
    uStack_5c0 = uStack_340;
    uStack_5b8 = uStack_338;
    uStack_5b0 = uStack_330;
    uStack_5a8 = uStack_328;
    uStack_575 = 0;
    uStack_570 = 0;
    uStack_578 = 0;
    uStack_580 = 0;
    uStack_57d = 0;
    uStack_588 = 0;
    uStack_590 = 0;
    uStack_598 = 0;
    uStack_560 = 0;
    uStack_5a0 = uStack_320;
    uStack_568 = 0;
    uStack_558 = uStack_558 & 0xffffffffffffff00;
    uStack_540 = 0;
    uStack_550 = 0;
    uStack_548 = 0;
    puStack_668 = puVar25;
    puStack_5c8 = puVar25;
    FUN_102f059cc(&uStack_1b8,&uStack_3f0,0x112f28018,&UNK_10db63a58);
    func_0x000107c615f0(uVar27);
    FUN_102f059cc(&uStack_1c0,&uStack_3f0,0x112f28020,&UNK_10db63a60);
    FUN_102f059cc(&uStack_1c8,&uStack_3f0,0x112f28028,&UNK_10db63a68);
    FUN_102f059cc(&uStack_1d0,&uStack_3f0,0x112f28030,&UNK_10db63a70);
    func_0x000107c6157c(uVar26);
    FUN_102f04d58(&uStack_670,&uStack_3f0);
    func_0x000102f04d94(&uStack_5d0);
    uVar6 = uStack_600;
    uVar5 = uStack_60d;
    uVar32 = uStack_628;
    uVar30 = uStack_630;
    uVar26 = uStack_638;
    uVar27 = CONCAT53(uStack_615,uStack_618);
    puStack_728 = puStack_668;
    uStack_730 = uStack_670;
    uStack_718 = uStack_658;
    uStack_720 = uStack_660;
    uStack_708 = uStack_648;
    uStack_710 = uStack_650;
    uStack_700 = uStack_640;
    uStack_7d0 = CONCAT17(uStack_5f0,uStack_5f7);
    uStack_7c8 = uStack_5ef;
    uStack_7b9 = (undefined1)uStack_5e0;
    uStack_7b8 = (undefined7)((ulong)uStack_5e0 >> 8);
    uStack_7c1 = uStack_5e8;
    uStack_7c0 = uStack_5e7;
    uStack_1d8 = uStack_318;
    FUN_102f059cc(&uStack_1d8,&uStack_3f0,0x112dc3ff0,&UNK_10d981690);
    func_0x000107c615e8(uVar26);
    uVar10 = uStack_1d8;
    uStack_1e0 = uStack_310;
    FUN_102f059cc(&uStack_1e0,&uStack_3f0,0x112f28038,&UNK_10db63a80);
    func_0x000107c61170(uVar30);
    uVar30 = uStack_1e0;
    uStack_1e8 = uStack_308;
    FUN_102f059cc(&uStack_1e8,&uStack_3f0,0x112f28040,&UNK_10db63a88);
    func_0x000107c6142c(uVar32);
    uVar26 = uStack_1e8;
    uStack_1f8 = uStack_2f8;
    uStack_200 = uStack_300;
    FUN_102f059cc(&uStack_200,&uStack_3f0,0x112f28048,&UNK_10db63a90);
    func_0x000107c6142c(uVar27);
    uStack_868 = uStack_1f8;
    uStack_870 = uStack_200;
    uVar7 = (undefined1)uStack_2f0;
    uVar8 = uStack_2f0._1_1_;
    uVar9 = uStack_2f0._2_1_;
    uStack_208 = (undefined3)uStack_2e0;
    uStack_205 = (undefined5)((ulong)uStack_2e0 >> 0x18);
    uStack_210 = (undefined3)uStack_2e8;
    uStack_20d = (undefined5)((ulong)uStack_2e8 >> 0x18);
    FUN_102f059cc(&uStack_210,&uStack_3f0,0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c6142c(uVar6);
    func_0x000102f04d94(&uStack_350);
    uStack_38d = CONCAT35(uStack_210,uVar5);
    uStack_910 = uStack_20d;
    uStack_90b = uStack_208;
    uStack_908 = uStack_205;
    puStack_3e8 = puStack_728;
    uStack_3f0 = uStack_730;
    uStack_3d8 = uStack_718;
    uStack_3e0 = uStack_720;
    uStack_3c8 = uStack_708;
    uStack_3d0 = uStack_710;
    uStack_37d = uStack_205;
    uStack_385 = uStack_20d;
    uStack_380 = uStack_208;
    uStack_3c0 = uStack_700;
    uStack_3b8 = uVar10;
    uStack_3b0 = uVar30;
    uStack_3a8 = uVar26;
    uStack_398 = uStack_868;
    uStack_3a0 = uStack_870;
    uStack_390 = uVar7;
    uStack_38f = uVar8;
    uStack_38e = uVar9;
    uStack_378 = (undefined1)uStack_2d8;
    uStack_36f = uStack_7c8;
    uStack_377 = uStack_7d0;
    uStack_360 = CONCAT71(uStack_7b8,uStack_7b9);
    uStack_368 = uStack_7c1;
    uStack_367 = uStack_7c0;
    uStack_518 = uStack_718;
    uStack_520 = uStack_720;
    uStack_508 = uStack_708;
    uStack_510 = uStack_710;
    puStack_528 = puStack_728;
    uStack_530 = uStack_730;
    uStack_500 = uStack_700;
    uStack_4f8 = uVar10;
    uStack_4f0 = uVar30;
    uStack_4e8 = uVar26;
    uStack_4d8 = uStack_868;
    uStack_4e0 = uStack_870;
    uStack_4d0 = uVar7;
    uStack_4cf = uVar8;
    uStack_4ce = uVar9;
    uStack_4cd = uVar5;
    uStack_4c8 = uStack_210;
    uStack_4c5 = uStack_20d;
    uStack_4c0 = uStack_208;
    uStack_4bd = uStack_205;
    uStack_4b8 = (undefined1)uStack_2d8;
    uStack_4af = uStack_7c8;
    uStack_4b7 = (undefined7)uStack_7d0;
    uStack_4b0 = (undefined1)((ulong)uStack_7d0 >> 0x38);
    uStack_4a0 = CONCAT71(uStack_7b8,uStack_7b9);
    uStack_4a8 = uStack_7c1;
    uStack_4a7 = uStack_7c0;
    FUN_102f04d58(&uStack_3f0,&uStack_490);
    func_0x000102f04d94(&uStack_530);
    uStack_428 = *(undefined8 *)(puVar15 + 0x78);
    uStack_430 = *(undefined8 *)(puVar15 + 0x70);
    uStack_418 = *(undefined8 *)(puVar15 + 0x88);
    uStack_420 = *(undefined8 *)(puVar15 + 0x80);
    uStack_408 = *(undefined8 *)(puVar15 + 0x98);
    uStack_410 = *(undefined8 *)(puVar15 + 0x90);
    uStack_400 = *(undefined8 *)(puVar15 + 0xa0);
    uStack_468 = *(undefined8 *)(puVar15 + 0x38);
    uStack_470 = *(undefined8 *)(puVar15 + 0x30);
    uStack_458 = *(undefined8 *)(puVar15 + 0x48);
    uStack_460 = *(undefined8 *)(puVar15 + 0x40);
    uStack_448 = *(undefined8 *)(puVar15 + 0x58);
    uStack_450 = *(undefined8 *)(puVar15 + 0x50);
    uStack_438 = *(undefined8 *)(puVar15 + 0x68);
    uStack_440 = *(undefined8 *)(puVar15 + 0x60);
    uStack_488 = *(undefined8 *)(puVar15 + 0x18);
    uStack_490 = *(undefined8 *)(puVar15 + 0x10);
    uStack_478 = *(undefined8 *)(puVar15 + 0x28);
    uStack_480 = *(undefined8 *)(puVar15 + 0x20);
    FUN_102f04d58(&uStack_490,&uStack_730);
    FUN_102ef05f8(&uStack_490,&uStack_3f0);
    func_0x000102f04d94(&uStack_490);
    func_0x000102f058d4(&uStack_3f0,puVar15 + 0x10);
  }
  lVar24 = *(long *)(*(long *)(unaff_x20 + _DAT_112f27fb8) + _DAT_112feddf0);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar35 = _DAT_112f27e48;
  if (lVar24 == 0) {
    puVar25 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c61428(unaff_x20 + _DAT_112f27e48,auStack_a98,0,0);
    lVar35 = unaff_x20 + lVar35;
    func_0x000107c61618();
    if (lVar35 != 0) {
      lVar29 = lVar35;
      func_0x000107c3fe68();
      func_0x000107c61180();
      func_0x000107c615e8(lVar35);
      if (lVar29 != 0) {
        func_0x000107c5b634(lVar29);
        func_0x000107c61170(lVar29);
      }
    }
    uVar27 = *(undefined8 *)(puVar15 + 0x70);
    uStack_4c8 = (undefined3)*(undefined8 *)(puVar15 + 0x78);
    uStack_4c5 = (undefined5)((ulong)*(undefined8 *)(puVar15 + 0x78) >> 0x18);
    uStack_4d0 = (undefined1)uVar27;
    uStack_4cf = (undefined1)((ulong)uVar27 >> 8);
    uStack_4ce = (undefined1)((ulong)uVar27 >> 0x10);
    uStack_4cd = (undefined5)((ulong)uVar27 >> 0x18);
    uStack_4b8 = (undefined1)*(undefined8 *)(puVar15 + 0x88);
    uStack_4b7 = (undefined7)((ulong)*(undefined8 *)(puVar15 + 0x88) >> 8);
    uStack_4c0 = (undefined3)*(undefined8 *)(puVar15 + 0x80);
    uStack_4bd = (undefined5)((ulong)*(undefined8 *)(puVar15 + 0x80) >> 0x18);
    uStack_4a8 = (undefined1)*(undefined8 *)(puVar15 + 0x98);
    uStack_4a7 = (undefined7)((ulong)*(undefined8 *)(puVar15 + 0x98) >> 8);
    uStack_4b0 = (undefined1)*(undefined8 *)(puVar15 + 0x90);
    uStack_4af = (undefined7)((ulong)*(undefined8 *)(puVar15 + 0x90) >> 8);
    uStack_4a0 = *(undefined8 *)(puVar15 + 0xa0);
    uStack_508 = *(undefined8 *)(puVar15 + 0x38);
    uStack_510 = *(undefined8 *)(puVar15 + 0x30);
    uStack_4f8 = *(undefined8 *)(puVar15 + 0x48);
    uStack_500 = *(undefined8 *)(puVar15 + 0x40);
    uStack_4e8 = *(undefined8 *)(puVar15 + 0x58);
    uStack_4f0 = *(undefined8 *)(puVar15 + 0x50);
    uStack_4d8 = *(undefined8 *)(puVar15 + 0x68);
    uStack_4e0 = *(undefined8 *)(puVar15 + 0x60);
    puStack_528 = *(undefined8 **)(puVar15 + 0x18);
    uStack_530 = *(undefined8 *)(puVar15 + 0x10);
    uStack_518 = *(undefined8 *)(puVar15 + 0x28);
    uStack_520 = *(undefined8 *)(puVar15 + 0x20);
    puVar25 = &uStack_5d0;
    FUN_102f04d58(&uStack_530);
    FUN_102f145a8(&uStack_530);
    func_0x000102f04d94(&uStack_530);
    uVar22 = *(ulong *)(puVar15 + 0x18);
    if (uVar22 >> 0x3e == 0) {
      if (*(long *)((uVar22 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_102ee6088;
LAB_102ee5fe0:
      if ((uVar22 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar22 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x102ee6ab8);
          (*pcVar11)();
        }
        lVar35 = *(long *)(uVar22 + 0x20);
        func_0x000107c6157c(lVar35);
      }
      else {
        func_0x000107c61434(uVar22);
        lVar35 = 0;
        FUN_102f02a90(0,uVar22);
        func_0x000107c6142c(uVar22);
      }
      uVar27 = *(undefined8 *)(lVar35 + 0x18);
      puVar33 = *(undefined8 **)(lVar35 + 0x20);
      func_0x000107c61434(puVar33);
      func_0x000107c61574(lVar35);
      puVar25 = puVar33;
      func_0x000107c5fadc(uVar27);
      func_0x000107c6142c(puVar33);
      puVar33 = *(undefined8 **)(puVar15 + 0x80);
      if (puVar33 == (undefined8 *)0x0) goto LAB_102ee6094;
LAB_102ee603c:
      uVar26 = *(undefined8 *)(puVar15 + 0x78);
      func_0x000107c61434(puVar33);
      puVar25 = puVar33;
      func_0x000107c5fadc(uVar26);
      func_0x000107c6142c(puVar33);
    }
    else {
      uVar23 = uVar22 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar22) {
        uVar23 = uVar22;
      }
      func_0x000107c60480();
      if (uVar23 != 0) goto LAB_102ee5fe0;
LAB_102ee6088:
      uVar27 = 0;
      puVar33 = *(undefined8 **)(puVar15 + 0x80);
      if (puVar33 != (undefined8 *)0x0) goto LAB_102ee603c;
LAB_102ee6094:
      uVar26 = 0;
    }
    lVar35 = lVar24;
    func_0x000107c4be64();
    func_0x000107c61180();
    func_0x000107c615e8(lVar24);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar26);
    lVar24 = lVar35;
    func_0x000107c5faec();
    func_0x000107c61170(lVar35);
  }
  uVar27 = *(undefined8 *)(puVar15 + 0x98);
  *(long *)(puVar15 + 0x90) = lVar24;
  *(undefined8 **)(puVar15 + 0x98) = puVar25;
  func_0x000107c6142c(uVar27);
  uStack_768 = *(undefined8 *)(puVar15 + 0x78);
  uStack_770 = *(undefined8 *)(puVar15 + 0x70);
  uStack_7f8 = *(undefined8 *)(puVar15 + 0x88);
  uStack_800 = *(undefined8 *)(puVar15 + 0x80);
  uStack_778 = *(undefined8 *)(puVar15 + 0x68);
  uStack_780 = *(undefined8 *)(puVar15 + 0x60);
  uStack_808 = *(undefined8 *)(puVar15 + 0x78);
  uStack_810 = *(undefined8 *)(puVar15 + 0x70);
  uStack_758 = *(undefined8 *)(puVar15 + 0x88);
  uStack_760 = *(undefined8 *)(puVar15 + 0x80);
  uStack_7e8 = *(undefined8 *)(puVar15 + 0x98);
  uStack_7f0 = *(undefined8 *)(puVar15 + 0x90);
  uStack_7a8 = *(undefined8 *)(puVar15 + 0x38);
  uStack_7b0 = *(undefined8 *)(puVar15 + 0x30);
  uStack_838 = *(undefined8 *)(puVar15 + 0x48);
  uStack_840 = *(undefined8 *)(puVar15 + 0x40);
  uStack_848 = *(undefined8 *)(puVar15 + 0x38);
  uStack_850 = *(undefined8 *)(puVar15 + 0x30);
  uStack_798 = *(undefined8 *)(puVar15 + 0x48);
  uStack_7a0 = *(undefined8 *)(puVar15 + 0x40);
  uStack_828 = *(undefined8 *)(puVar15 + 0x58);
  uStack_830 = *(undefined8 *)(puVar15 + 0x50);
  uStack_788 = *(undefined8 *)(puVar15 + 0x58);
  uStack_790 = *(undefined8 *)(puVar15 + 0x50);
  uStack_818 = *(undefined8 *)(puVar15 + 0x68);
  uStack_820 = *(undefined8 *)(puVar15 + 0x60);
  uStack_868 = *(undefined8 *)(puVar15 + 0x18);
  uStack_870 = *(undefined8 *)(puVar15 + 0x10);
  uStack_858 = *(undefined8 *)(puVar15 + 0x28);
  uStack_860 = *(undefined8 *)(puVar15 + 0x20);
  uStack_7d0 = *(undefined8 *)(puVar15 + 0x10);
  uStack_748 = *(undefined8 *)(puVar15 + 0x98);
  uStack_750 = *(undefined8 *)(puVar15 + 0x90);
  uStack_7e0 = *(undefined8 *)(puVar15 + 0xa0);
  uStack_740 = *(undefined8 *)(puVar15 + 0xa0);
  uStack_7c8 = (undefined7)*(undefined8 *)(puVar15 + 0x18);
  uStack_7c1 = (undefined1)((ulong)*(undefined8 *)(puVar15 + 0x18) >> 0x38);
  uStack_7b8 = (undefined7)*(undefined8 *)(puVar15 + 0x28);
  uStack_7b1 = (undefined1)((ulong)*(undefined8 *)(puVar15 + 0x28) >> 0x38);
  uStack_7c0 = (undefined7)*(undefined8 *)(puVar15 + 0x20);
  uStack_7b9 = (undefined1)((ulong)*(undefined8 *)(puVar15 + 0x20) >> 0x38);
  FUN_102f04dc8(&uStack_7d0);
  uStack_6c8 = puVar2[0xd];
  uStack_6d0 = puVar2[0xc];
  uStack_6b8 = puVar2[0xf];
  uStack_6c0 = puVar2[0xe];
  uStack_6a8 = puVar2[0x11];
  uStack_6b0 = puVar2[0x10];
  uStack_6a0 = puVar2[0x12];
  uStack_708 = puVar2[5];
  uStack_710 = puVar2[4];
  uStack_6f8 = puVar2[7];
  uStack_700 = puVar2[6];
  uStack_6e8 = puVar2[9];
  uStack_6f0 = puVar2[8];
  uStack_6d8 = puVar2[0xb];
  uStack_6e0 = puVar2[10];
  puStack_728 = (undefined8 *)puVar2[1];
  uStack_730 = *puVar2;
  uStack_718 = puVar2[3];
  uStack_720 = puVar2[2];
  puVar2[0xd] = uStack_768;
  puVar2[0xc] = uStack_770;
  puVar2[0xf] = uStack_758;
  puVar2[0xe] = uStack_760;
  puVar2[0x11] = uStack_748;
  puVar2[0x10] = uStack_750;
  puVar2[0x12] = uStack_740;
  puVar2[5] = uStack_7a8;
  puVar2[4] = uStack_7b0;
  puVar2[7] = uStack_798;
  puVar2[6] = uStack_7a0;
  puVar2[9] = uStack_788;
  puVar2[8] = uStack_790;
  puVar2[0xb] = uStack_778;
  puVar2[10] = uStack_780;
  puVar2[1] = CONCAT17(uStack_7c1,uStack_7c8);
  *puVar2 = uStack_7d0;
  puVar2[3] = CONCAT17(uStack_7b1,uStack_7b8);
  puVar2[2] = CONCAT17(uStack_7b9,uStack_7c0);
  FUN_102f04d58(&uStack_870,&uStack_5d0);
  FUN_102f080f0(&uStack_730,0x112f27e88,&UNK_10db63a18);
  if ((puVar15[0x71] != '\x01') || (param_6 == 0)) goto LAB_102ee6294;
  uVar22 = *(ulong *)(puVar15 + 0x18);
  if (uVar22 >> 0x3e == 0) {
    if (*(long *)((uVar22 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_102ee627c;
LAB_102ee6214:
    if ((uVar22 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar22 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x102ee6b00);
        (*pcVar11)();
      }
      lVar35 = *(long *)(uVar22 + 0x20);
      func_0x000107c6157c(lVar35);
    }
    else {
      func_0x000107c61434(uVar22);
      lVar35 = 0;
      FUN_102f02a90(0,uVar22);
      func_0x000107c6142c(uVar22);
    }
    uVar27 = *(undefined8 *)(lVar35 + 0x18);
    uVar26 = *(undefined8 *)(lVar35 + 0x20);
    func_0x000107c61434(uVar26);
    func_0x000107c61574(lVar35);
    func_0x000107c5fadc(uVar27,uVar26);
    func_0x000107c6142c(uVar26);
  }
  else {
    uVar23 = uVar22 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar22) {
      uVar23 = uVar22;
    }
    func_0x000107c60480();
    if (uVar23 != 0) goto LAB_102ee6214;
LAB_102ee627c:
    uVar27 = 0;
  }
  func_0x000107c4bd78(param_6);
  func_0x000107c61170(uVar27);
LAB_102ee6294:
  uVar22 = *(ulong *)(puVar15 + 0x18);
  uVar23 = uVar22 & 0xffffffffffffff8;
  if (uVar22 >> 0x3e == 0) {
    uVar28 = *(ulong *)(uVar23 + 0x10);
  }
  else {
    uVar28 = uVar23;
    if (0x7fffffffffffffff < uVar22) {
      uVar28 = uVar22;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar22);
  uVar34 = 0;
  do {
    uVar36 = uVar34;
    if (uVar28 == uVar36) break;
    if ((uVar22 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar23 + 0x10) <= uVar36) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x102ee6a60);
        (*pcVar11)();
      }
      uVar34 = *(ulong *)(uVar22 + uVar36 * 8 + 0x20);
      func_0x000107c6157c();
    }
    else {
      uVar34 = uVar36;
      FUN_102f02a90(uVar36,uVar22);
    }
    if (SCARRY8(uVar36,1)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x102ee6318);
      (*pcVar11)();
    }
    cVar4 = *(char *)(uVar34 + 0x80);
    func_0x000107c61574();
    uVar34 = uVar36 + 1;
  } while (cVar4 != '\x01');
  func_0x000107c6142c(uVar22);
  iVar12 = (int)*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f27e90) + _DAT_113077160);
  func_0x000107c51e2c();
  if (((uVar28 != uVar36) || (iVar12 == 0)) || ((uVar18 & 1) != 0)) {
    puVar15[0x88] = 0;
    uStack_8e8 = *(undefined8 *)(puVar15 + 0x38);
    uStack_8f0 = *(undefined8 *)(puVar15 + 0x30);
    uStack_978 = *(undefined8 *)(puVar15 + 0x48);
    uStack_980 = *(undefined8 *)(puVar15 + 0x40);
    uStack_8f8 = *(undefined8 *)(puVar15 + 0x28);
    uStack_900 = *(undefined8 *)(puVar15 + 0x20);
    uStack_988 = *(undefined8 *)(puVar15 + 0x38);
    uStack_990 = *(undefined8 *)(puVar15 + 0x30);
    uStack_8d8 = *(undefined8 *)(puVar15 + 0x48);
    uStack_8e0 = *(undefined8 *)(puVar15 + 0x40);
    uStack_968 = *(undefined8 *)(puVar15 + 0x58);
    uStack_970 = *(undefined8 *)(puVar15 + 0x50);
    uStack_8c8 = *(undefined8 *)(puVar15 + 0x58);
    uStack_8d0 = *(undefined8 *)(puVar15 + 0x50);
    uStack_958 = *(undefined8 *)(puVar15 + 0x68);
    uStack_960 = *(undefined8 *)(puVar15 + 0x60);
    lStack_9a8 = *(long *)(puVar15 + 0x18);
    lStack_9b0 = *(long *)(puVar15 + 0x10);
    uStack_998 = *(undefined8 *)(puVar15 + 0x28);
    uStack_9a0 = *(undefined8 *)(puVar15 + 0x20);
    uStack_8a8 = *(undefined8 *)(puVar15 + 0x78);
    uStack_8b0 = *(undefined8 *)(puVar15 + 0x70);
    uStack_938 = *(undefined8 *)(puVar15 + 0x88);
    uStack_940 = *(undefined8 *)(puVar15 + 0x80);
    uStack_8b8 = *(undefined8 *)(puVar15 + 0x68);
    uStack_8c0 = *(undefined8 *)(puVar15 + 0x60);
    uStack_948 = *(undefined8 *)(puVar15 + 0x78);
    uStack_950 = *(undefined8 *)(puVar15 + 0x70);
    uStack_898 = *(undefined8 *)(puVar15 + 0x88);
    uStack_8a0 = *(undefined8 *)(puVar15 + 0x80);
    uStack_928 = *(undefined8 *)(puVar15 + 0x98);
    uStack_930 = *(undefined8 *)(puVar15 + 0x90);
    uStack_888 = *(undefined8 *)(puVar15 + 0x98);
    uStack_890 = *(undefined8 *)(puVar15 + 0x90);
    uStack_920 = *(undefined8 *)(puVar15 + 0xa0);
    uStack_880 = *(undefined8 *)(puVar15 + 0xa0);
    uStack_908 = (undefined5)*(undefined8 *)(puVar15 + 0x18);
    uStack_903 = (undefined3)((ulong)*(undefined8 *)(puVar15 + 0x18) >> 0x28);
    uStack_910 = (undefined5)*(undefined8 *)(puVar15 + 0x10);
    uStack_90b = (undefined3)((ulong)*(undefined8 *)(puVar15 + 0x10) >> 0x28);
    FUN_102f04dc8(&uStack_910);
    uStack_600 = puVar2[0xe];
    uStack_608 = (undefined3)puVar2[0xd];
    uStack_605 = (undefined5)((ulong)puVar2[0xd] >> 0x18);
    uStack_610 = (undefined3)puVar2[0xc];
    uStack_60d = (undefined5)((ulong)puVar2[0xc] >> 0x18);
    uStack_5f8 = (undefined1)puVar2[0xf];
    uStack_5f7 = (undefined7)((ulong)puVar2[0xf] >> 8);
    uStack_5e8 = (undefined1)puVar2[0x11];
    uStack_5e7 = (undefined7)((ulong)puVar2[0x11] >> 8);
    uStack_5f0 = (undefined1)puVar2[0x10];
    uStack_5ef = (undefined7)((ulong)puVar2[0x10] >> 8);
    uStack_5e0 = puVar2[0x12];
    uStack_648 = puVar2[5];
    uStack_650 = puVar2[4];
    uStack_638 = puVar2[7];
    uStack_640 = puVar2[6];
    uStack_628 = puVar2[9];
    uStack_630 = puVar2[8];
    uStack_618 = (undefined3)puVar2[0xb];
    uStack_615 = (undefined5)((ulong)puVar2[0xb] >> 0x18);
    uStack_620 = (undefined3)puVar2[10];
    uStack_61d = (undefined5)((ulong)puVar2[10] >> 0x18);
    puStack_668 = (undefined8 *)puVar2[1];
    uStack_670 = *puVar2;
    uStack_658 = puVar2[3];
    uStack_660 = puVar2[2];
    puVar2[0xd] = uStack_8a8;
    puVar2[0xc] = uStack_8b0;
    puVar2[0xf] = uStack_898;
    puVar2[0xe] = uStack_8a0;
    puVar2[0x11] = uStack_888;
    puVar2[0x10] = uStack_890;
    puVar2[0x12] = uStack_880;
    puVar2[5] = uStack_8e8;
    puVar2[4] = uStack_8f0;
    puVar2[7] = uStack_8d8;
    puVar2[6] = uStack_8e0;
    puVar2[9] = uStack_8c8;
    puVar2[8] = uStack_8d0;
    puVar2[0xb] = uStack_8b8;
    puVar2[10] = uStack_8c0;
    puVar2[1] = CONCAT35(uStack_903,uStack_908);
    *puVar2 = CONCAT35(uStack_90b,uStack_910);
    puVar2[3] = uStack_8f8;
    puVar2[2] = uStack_900;
    FUN_102f04d58(&lStack_9b0,&uStack_5d0);
    FUN_102f080f0(&uStack_670,0x112f27e88,&UNK_10db63a18);
    uStack_568 = *(undefined8 *)(puVar15 + 0x78);
    uStack_558 = *(ulong *)(puVar15 + 0x88);
    uStack_560 = *(undefined8 *)(puVar15 + 0x80);
    uStack_570 = (undefined3)*(undefined8 *)(puVar15 + 0x70);
    uStack_56d = (undefined5)((ulong)*(undefined8 *)(puVar15 + 0x70) >> 0x18);
    uStack_548 = *(undefined8 *)(puVar15 + 0x98);
    uStack_550 = *(undefined8 *)(puVar15 + 0x90);
    uStack_540 = *(undefined8 *)(puVar15 + 0xa0);
    uStack_5a8 = *(undefined8 *)(puVar15 + 0x38);
    uStack_5b0 = *(undefined8 *)(puVar15 + 0x30);
    uStack_598 = *(undefined8 *)(puVar15 + 0x48);
    uStack_5a0 = *(undefined8 *)(puVar15 + 0x40);
    uStack_588 = *(undefined8 *)(puVar15 + 0x58);
    uStack_590 = *(undefined8 *)(puVar15 + 0x50);
    uStack_578 = (undefined3)*(undefined8 *)(puVar15 + 0x68);
    uStack_575 = (undefined5)((ulong)*(undefined8 *)(puVar15 + 0x68) >> 0x18);
    uStack_580 = (undefined3)*(undefined8 *)(puVar15 + 0x60);
    uStack_57d = (undefined5)((ulong)*(undefined8 *)(puVar15 + 0x60) >> 0x18);
    puStack_5c8 = *(undefined8 **)(puVar15 + 0x18);
    uStack_5d0 = *(undefined8 *)(puVar15 + 0x10);
    uStack_5b8 = *(undefined8 *)(puVar15 + 0x28);
    uStack_5c0 = *(undefined8 *)(puVar15 + 0x20);
    FUN_102f04d58(&uStack_5d0,&lStack_a48);
    func_0x000107c6157c(puVar15);
    FUN_102ee3a7c(&uStack_5d0,1,0x102f05880,puVar15);
    func_0x000107c61574(puVar15);
    func_0x000102f04d94(&uStack_5d0);
  }
  FUN_102f146a0(&lStack_a48,param_2);
  if (lStack_a48 != 0) {
    lStack_9b0 = lStack_a48;
    uStack_9a0 = uStack_a38;
    lStack_9a8 = lStack_a40;
    uStack_990 = uStack_a28;
    uStack_998 = uStack_a30;
    uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112f27f58);
    func_0x000107c5d794(uVar27);
    func_0x000107c61180();
    func_0x000107c5d78c();
    func_0x000107c615e8(uVar27);
    FUN_102f05898(&lStack_9b0,&uStack_670);
    lVar35 = lStack_a40;
    func_0x000107c5fadc(lStack_a40,uStack_a38);
    lVar24 = lVar35;
    func_0x000107d6b0b0();
    func_0x000107c61180();
    func_0x000107c61170(lVar35);
    uVar27 = 0x112f28010;
    FUN_102f080f0(&lStack_a48,0x112f28010,&UNK_10db63be0);
    if (lVar24 != 0) {
      lVar35 = lVar24;
      func_0x000107c44fc8();
      func_0x000107c61180();
      func_0x000107c61170(lVar24);
      lVar24 = lVar35;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar35);
      func_0x000107c61428(puVar15 + 0x10,auStack_a80,0,0);
      uVar18 = *(ulong *)(puVar15 + 0x18);
      if (uVar18 >> 0x3e == 0) {
        uVar22 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar22 = uVar18 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar18) {
          uVar22 = uVar18;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434();
      if (uVar22 != 0) {
        uVar23 = 0;
        do {
          if ((uVar18 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x102ee6a68);
              (*pcVar11)();
            }
            uVar28 = *(ulong *)(uVar18 + 0x20 + uVar23 * 8);
            func_0x000107c6157c(uVar28);
          }
          else {
            uVar28 = uVar23;
            FUN_102f02a90(uVar23,uVar18);
          }
          if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x102ee6a64);
            (*pcVar11)();
          }
          uVar23 = uVar23 + 1;
          uVar36 = *(ulong *)(uVar28 + 0x10);
          func_0x000107c4008c();
          func_0x000107c61180();
          uVar34 = uVar36;
          func_0x000107c41844();
          func_0x000107c61180();
          func_0x000107c61170(uVar36);
          uVar36 = uVar34;
          func_0x000107c5bf1c();
          func_0x000107c61180();
          func_0x000107c61170(uVar34);
          uVar26 = 0;
          FUN_102f09540(0,0x112d51360,&PTR_PTR_1126becd8);
          uVar34 = uVar36;
          func_0x000107c5fc54(uVar36,uVar26);
          func_0x000107c61170(uVar36);
          if (uVar34 >> 0x3e == 0) {
            uVar36 = *(ulong *)((uVar34 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar36 = uVar34 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar34) {
              uVar36 = uVar34;
            }
            func_0x000107c60480();
          }
          if (uVar36 != 0) {
            uVar31 = 0;
            do {
              if ((uVar34 & 0xc000000000000001) == 0) {
                if (*(ulong *)((uVar34 & 0xffffffffffffff8) + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x102ee6a5c);
                  (*pcVar11)();
                }
                uVar19 = *(ulong *)(uVar34 + uVar31 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar19 = uVar31;
                func_0x000102f02874(uVar31,uVar34,&PTR_PTR_1126becd8,0x112d51360);
              }
              uVar1 = uVar31 + 1;
              if (SCARRY8(uVar31,1)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x102ee6a58);
                (*pcVar11)();
              }
              uVar20 = uVar19;
              func_0x000107c5d0f0();
              if ((int)uVar20 == 2) {
                uVar20 = uVar19;
                func_0x000107c5c97c();
                func_0x000107c61180();
                func_0x000107c61170(uVar19);
                if (uVar20 != 0) {
                  func_0x000107c61170(uVar20);
                  func_0x000107c6142c(uVar34);
                  uVar32 = *(undefined8 *)(uVar28 + 0x10);
                  func_0x000107c4008c(uVar32);
                  func_0x000107c61180();
                  uVar30 = *(undefined8 *)(uVar28 + 0x10);
                  func_0x000107c4008c();
                  func_0x000107c61180();
                  uVar26 = uVar30;
                  func_0x000107c4b814();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar30);
                  puVar16 = PTR___s10Foundation4DataVN_110350ae0;
                  uVar30 = uVar26;
                  func_0x000107c5fc54(uVar26,PTR___s10Foundation4DataVN_110350ae0);
                  func_0x000107c61170(uVar26);
                  lVar35 = 0x112d4c088;
                  func_0x0001000285a8(0x112d4c088,&UNK_10d913a10);
                  func_0x000107c613fc();
                  *(undefined8 *)(lVar35 + 0x18) = 2;
                  *(undefined8 *)(lVar35 + 0x10) = 1;
                  *(long *)(lVar35 + 0x20) = lVar24;
                  *(undefined8 *)(lVar35 + 0x28) = uVar27;
                  uStack_670 = uVar30;
                  func_0x00010006c00c();
                  func_0x000102f02208(lVar35);
                  uVar26 = uStack_670;
                  uVar30 = uStack_670;
                  func_0x000107c5fc48(uStack_670,puVar16);
                  func_0x000107c6142c(uVar26);
                  func_0x000107c56004(uVar32);
                  func_0x000107c61170(uVar32);
                  func_0x000107c61170(uVar30);
                  func_0x000107c61574(uVar28);
                  goto LAB_102ee6610;
                }
              }
              else {
                func_0x000107c61170(uVar19);
              }
              uVar31 = uVar31 + 1;
            } while (uVar1 != uVar36);
          }
          func_0x000107c61574(uVar28);
          func_0x000107c6142c(uVar34);
LAB_102ee6610:
        } while (uVar23 != uVar22);
      }
      func_0x000107c6142c(uVar18);
      func_0x00010006c090(lVar24,uVar27);
    }
    FUN_102f080f0(&lStack_a48,0x112f28010,&UNK_10db63be0);
  }
  func_0x000107c61428(puVar15 + 0x10,auStack_a60,0,0);
  uStack_600 = *(undefined8 *)(puVar15 + 0x80);
  uStack_608 = (undefined3)*(undefined8 *)(puVar15 + 0x78);
  uStack_605 = (undefined5)((ulong)*(undefined8 *)(puVar15 + 0x78) >> 0x18);
  uStack_610 = (undefined3)*(undefined8 *)(puVar15 + 0x70);
  uStack_60d = (undefined5)((ulong)*(undefined8 *)(puVar15 + 0x70) >> 0x18);
  uStack_5f8 = (undefined1)*(undefined8 *)(puVar15 + 0x88);
  uStack_5f7 = (undefined7)((ulong)*(undefined8 *)(puVar15 + 0x88) >> 8);
  uStack_5e8 = (undefined1)*(undefined8 *)(puVar15 + 0x98);
  uStack_5e7 = (undefined7)((ulong)*(undefined8 *)(puVar15 + 0x98) >> 8);
  uStack_5f0 = (undefined1)*(undefined8 *)(puVar15 + 0x90);
  uStack_5ef = (undefined7)((ulong)*(undefined8 *)(puVar15 + 0x90) >> 8);
  uStack_5e0 = *(undefined8 *)(puVar15 + 0xa0);
  uStack_648 = *(undefined8 *)(puVar15 + 0x38);
  uStack_650 = *(undefined8 *)(puVar15 + 0x30);
  uStack_638 = *(undefined8 *)(puVar15 + 0x48);
  uStack_640 = *(undefined8 *)(puVar15 + 0x40);
  uStack_628 = *(undefined8 *)(puVar15 + 0x58);
  uStack_630 = *(undefined8 *)(puVar15 + 0x50);
  uStack_618 = (undefined3)*(undefined8 *)(puVar15 + 0x68);
  uStack_615 = (undefined5)((ulong)*(undefined8 *)(puVar15 + 0x68) >> 0x18);
  uStack_620 = (undefined3)*(undefined8 *)(puVar15 + 0x60);
  uStack_61d = (undefined5)((ulong)*(undefined8 *)(puVar15 + 0x60) >> 0x18);
  puStack_668 = *(undefined8 **)(puVar15 + 0x18);
  uStack_670 = *(undefined8 *)(puVar15 + 0x10);
  uStack_658 = *(undefined8 *)(puVar15 + 0x28);
  uStack_660 = *(undefined8 *)(puVar15 + 0x20);
  FUN_102f04d58(&uStack_670,&uStack_910);
  func_0x0001000d224c(&uStack_a68);
  puVar16 = &UNK_1105e5fa0;
  func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
  func_0x000107c61614(puVar16 + 0x10,unaff_x20);
  puVar21 = &UNK_1105e6540;
  func_0x000107c613fc(&UNK_1105e6540,0xb8,7);
  *(ulong *)(puVar21 + 0x80) = CONCAT53(uStack_605,uStack_608);
  *(ulong *)(puVar21 + 0x78) = CONCAT53(uStack_60d,uStack_610);
  *(ulong *)(puVar21 + 0x90) = CONCAT71(uStack_5f7,uStack_5f8);
  *(undefined8 *)(puVar21 + 0x88) = uStack_600;
  *(ulong *)(puVar21 + 0xa0) = CONCAT71(uStack_5e7,uStack_5e8);
  *(ulong *)(puVar21 + 0x98) = CONCAT71(uStack_5ef,uStack_5f0);
  *(undefined8 *)(puVar21 + 0x40) = uStack_648;
  *(undefined8 *)(puVar21 + 0x38) = uStack_650;
  *(undefined8 *)(puVar21 + 0x50) = uStack_638;
  *(undefined8 *)(puVar21 + 0x48) = uStack_640;
  *(undefined8 *)(puVar21 + 0x60) = uStack_628;
  *(undefined8 *)(puVar21 + 0x58) = uStack_630;
  *(ulong *)(puVar21 + 0x70) = CONCAT53(uStack_615,uStack_618);
  *(ulong *)(puVar21 + 0x68) = CONCAT53(uStack_61d,uStack_620);
  *(undefined8 **)(puVar21 + 0x20) = puStack_668;
  *(undefined8 *)(puVar21 + 0x18) = uStack_670;
  *(undefined **)(puVar21 + 0x10) = puVar16;
  *(undefined8 *)(puVar21 + 0x30) = uStack_658;
  *(undefined8 *)(puVar21 + 0x28) = uStack_660;
  *(undefined8 *)(puVar21 + 0xa8) = uStack_5e0;
  *(long *)(puVar21 + 0xb0) = lVar14;
  FUN_102f04d58(&uStack_670,&uStack_910);
  func_0x00010075a04c(0,1,0x102f05888,puVar21);
  func_0x000102f04d94(&uStack_670);
  func_0x000107c61574(uStack_a68);
  func_0x000107c61574(puVar21);
  uVar18 = *(ulong *)(puVar15 + 0x18);
  if (uVar18 >> 0x3e == 0) {
    uVar22 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar22 = uVar18 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar18) {
      uVar22 = uVar18;
    }
    func_0x000107c60480(uVar22);
  }
  func_0x000102ede748(1 < (long)uVar22);
  func_0x000107c61574(puVar15);
  return;
}



/* Entry: 102ee6b00; end: 102ee6b4b;  */

void FUN_102ee6b00(long param_1,undefined8 param_2)

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



/* Entry: 102ee6b4c; end: 102ee6b9b; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceImpl didSendWithSelectionState:] */

/* WARNING: Possible PIC construction at 0x000102ee6b84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ee6b88) */

void FUN_102ee6b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102ee4c60(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102ee6b9c; end: 102ee73e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102ee6b9c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_278 [152];
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  ulong uStack_108;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f27e80);
  func_0x000107c61428(puVar1,auStack_128,0,0);
  uStack_a8 = puVar1[0xd];
  uStack_b0 = puVar1[0xc];
  uStack_98 = puVar1[0xf];
  uStack_a0 = puVar1[0xe];
  uStack_88 = puVar1[0x11];
  uStack_90 = puVar1[0x10];
  uStack_80 = puVar1[0x12];
  uStack_e8 = puVar1[5];
  uStack_f0 = puVar1[4];
  uStack_d8 = puVar1[7];
  uStack_e0 = puVar1[6];
  uStack_c8 = puVar1[9];
  uStack_d0 = puVar1[8];
  uStack_b8 = puVar1[0xb];
  uStack_c0 = puVar1[10];
  uVar19 = puVar1[1];
  uStack_110 = *puVar1;
  uStack_f8 = puVar1[3];
  uStack_100 = puVar1[2];
  iVar4 = (int)&uStack_110;
  uStack_108 = uVar19;
  func_0x000102f05844();
  lVar6 = _DAT_112f27e48;
  if (iVar4 != 1) {
    func_0x000107c61428(param_1 + _DAT_112f27e48,auStack_140,0,0);
    uVar17 = param_1 + lVar6;
    func_0x000107c61618();
    if (uVar17 == 0) {
      uStack_178 = uStack_a8;
      uStack_180 = uStack_b0;
      uStack_168 = uStack_98;
      uStack_170 = uStack_a0;
      uStack_158 = uStack_88;
      uStack_160 = uStack_90;
      uStack_150 = uStack_80;
      uStack_1b8 = uStack_e8;
      uStack_1c0 = uStack_f0;
      uStack_1a8 = uStack_d8;
      uStack_1b0 = uStack_e0;
      uStack_198 = uStack_c8;
      uStack_1a0 = uStack_d0;
      uStack_188 = uStack_b8;
      uStack_190 = uStack_c0;
      uStack_1d8 = uStack_108;
      uStack_1e0 = uStack_110;
      uStack_1c8 = uStack_f8;
      uStack_1d0 = uStack_100;
      FUN_102f04d58(&uStack_1e0,auStack_278);
LAB_102ee6d2c:
      uVar18 = 0xffffffffffffffff;
    }
    else {
      uVar18 = uVar17;
      func_0x000107c61150();
      if ((uVar18 & 1) == 0) {
        FUN_102f059cc(&uStack_110,&uStack_1e0,0x112f27e88,&UNK_10db63a18);
        func_0x000107c615e8(uVar17);
        goto LAB_102ee6d2c;
      }
      uStack_178 = uStack_a8;
      uStack_180 = uStack_b0;
      uStack_168 = uStack_98;
      uStack_170 = uStack_a0;
      uStack_158 = uStack_88;
      uStack_160 = uStack_90;
      uStack_150 = uStack_80;
      uStack_1b8 = uStack_e8;
      uStack_1c0 = uStack_f0;
      uStack_1a8 = uStack_d8;
      uStack_1b0 = uStack_e0;
      uStack_198 = uStack_c8;
      uStack_1a0 = uStack_d0;
      uStack_188 = uStack_b8;
      uStack_190 = uStack_c0;
      uStack_1d8 = uStack_108;
      uStack_1e0 = uStack_110;
      uStack_1c8 = uStack_f8;
      uStack_1d0 = uStack_100;
      FUN_102f04d58(&uStack_1e0,auStack_278);
      uVar18 = uVar17;
      func_0x000107c5b3f0();
      func_0x000107c615e8(uVar17);
    }
    lVar6 = param_1 + lVar6;
    func_0x000107c61618();
    if (lVar6 == 0) {
LAB_102ee6d7c:
      bVar3 = false;
    }
    else {
      lVar7 = lVar6;
      func_0x000107c3fe68();
      func_0x000107c61180();
      func_0x000107c615e8(lVar6);
      if (lVar7 == 0) goto LAB_102ee6d7c;
      lVar6 = lVar7;
      func_0x000107c4d288();
      func_0x000107c61170(lVar7);
      bVar3 = lVar6 == 0xcb;
    }
    if (((uVar18 - 0x36 < 0x37) && ((1L << (uVar18 - 0x36 & 0x3f) & 0x40000000000041U) != 0)) ||
       (bVar3)) {
      uVar17 = uVar19 >> 0x3e;
      uVar18 = uVar19 & 0xffffffffffffff8;
      if (uVar17 == 0) {
        uVar12 = *(ulong *)(uVar18 + 0x10);
      }
      else {
        uVar12 = uVar18;
        if ((uVar19 & 0x8000000000000000) != 0) {
          uVar12 = uVar19;
        }
        func_0x000107c60480();
      }
      uVar13 = 0;
      do {
        if (uVar12 == uVar13) goto LAB_102ee6efc;
        if ((uVar19 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar18 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102ee70a0);
            (*pcVar2)();
          }
          uVar14 = *(ulong *)(uVar19 + uVar13 * 8 + 0x20);
          func_0x000107c6157c(uVar14);
        }
        else {
          uVar14 = uVar13;
          FUN_102f02a90(uVar13,uVar19);
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102ee6e50);
          (*pcVar2)();
        }
        func_0x000103be8288(0);
        uVar15 = *(ulong *)(uVar14 + 0x28);
        uVar16 = uVar15;
        func_0x000107c61174(uVar15);
        func_0x000103be58d0();
        func_0x000107c61170(uVar16);
        func_0x000107c61574(uVar14);
        uVar13 = uVar13 + 1;
      } while ((uVar15 & 1) == 0);
      uVar11 = *(undefined8 *)(param_1 + _DAT_112f27e98);
      uVar8 = 0xd000000000000036;
      func_0x000107c5fadc(0xd000000000000036,0x800000010f114030);
      uVar9 = uVar11;
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar8);
      if ((int)uVar9 == 0) {
LAB_102ee6efc:
        uVar10 = 0;
        uVar5 = 0;
        if (uVar17 != 0) goto LAB_102ee6ee8;
LAB_102ee6f04:
        uVar10 = uVar5;
        uVar17 = *(ulong *)(uVar18 + 0x10);
      }
      else {
        uVar9 = 0xd000000000000042;
        func_0x000107c5fadc(0xd000000000000042,0x800000010f1140b0);
        func_0x000107c3ebd4(uVar11);
        uVar10 = (uint)uVar11;
        func_0x000107c61170(uVar9);
        uVar5 = uVar10;
        if (uVar17 == 0) goto LAB_102ee6f04;
LAB_102ee6ee8:
        uVar17 = uVar18;
        if ((uVar19 & 0x8000000000000000) != 0) {
          uVar17 = uVar19;
        }
        func_0x000107c60480();
      }
      uVar12 = 0;
      do {
        if (uVar17 == uVar12) goto LAB_102ee7038;
        if ((uVar19 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar18 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102ee70a4);
            (*pcVar2)();
          }
          uVar13 = *(ulong *)(uVar19 + uVar12 * 8 + 0x20);
          func_0x000107c6157c(uVar13);
        }
        else {
          uVar13 = uVar12;
          FUN_102f02a90(uVar12,uVar19);
        }
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102ee6f9c);
          (*pcVar2)();
        }
        func_0x000103be8288(0);
        uVar16 = *(ulong *)(uVar13 + 0x28);
        uVar14 = uVar16;
        func_0x000107c61174(uVar16);
        func_0x000103be5790();
        func_0x000107c61170(uVar14);
        func_0x000107c61574(uVar13);
        uVar12 = uVar12 + 1;
      } while ((uVar16 & 1) == 0);
      uVar11 = *(undefined8 *)(param_1 + _DAT_112f27e98);
      uVar8 = 0xd000000000000032;
      func_0x000107c5fadc(0xd000000000000032,0x800000010ef36a20);
      uVar9 = uVar11;
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar8);
      if ((int)uVar9 == 0) {
LAB_102ee7038:
        uVar5 = 0;
      }
      else {
        uVar9 = 0xd00000000000003e;
        func_0x000107c5fadc(0xd00000000000003e,0x800000010f114070);
        func_0x000107c3ebd4(uVar11);
        uVar5 = (uint)uVar11;
        func_0x000107c61170(uVar9);
      }
      FUN_102f080f0(&uStack_110,0x112f27e88,&UNK_10db63a18);
      uVar10 = uVar10 | uVar5;
      goto LAB_102ee7058;
    }
    FUN_102f080f0(&uStack_110,0x112f27e88,&UNK_10db63a18);
  }
  uVar10 = 0;
LAB_102ee7058:
  return uVar10 & 1;
}



/* Entry: 102ee73e8; end: 102ee744f; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceImpl didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_102ee73e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_102f09540(0,0x112d60fb0,&PTR_PTR_1126b3568);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_102f05190(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102ee7450; end: 102ee7c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ee7450(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4,
                  undefined4 param_5,byte param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 uStack_194;
  ulong uStack_188;
  long alStack_120 [2];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_80 [32];
  
  if (*(char *)(param_1 + 1) != '\x01') {
    uVar10 = *param_1;
    func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      uVar2 = 0;
      func_0x00010006a340();
      func_0x000107c613fc();
      func_0x00010006a360();
      puVar3 = &UNK_1105e6a18;
      func_0x000107c613fc(&UNK_1105e6a18,0x18,7);
      *(undefined8 *)(puVar3 + 0x10) = 0;
      puVar4 = &UNK_1105e6a40;
      func_0x000107c613fc(&UNK_1105e6a40,0x11,7);
      puVar4[0x10] = 0;
      uVar11 = param_3[1];
      if (uVar11 >> 0x3e == 0) {
        uStack_188 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uStack_188 = uVar11 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar11) {
          uStack_188 = uVar11;
        }
        func_0x000107c60480();
      }
      if ((long)uStack_188 < 2) {
        uStack_194 = 0;
      }
      else {
        uVar13 = *(ulong *)(*(long *)(param_2 + _DAT_112f27e90) + _DAT_113077160);
        uVar11 = uVar13;
        func_0x000107c615f0();
        func_0x000107c5b230();
        if ((uVar11 & 1) == 0) {
          uVar11 = uVar13;
          func_0x000107c5b22c();
          uStack_194 = (undefined1)uVar11;
        }
        else {
          uStack_194 = 1;
        }
        func_0x000107c615e8(uVar13);
      }
      uVar12 = (undefined1)*(undefined8 *)(param_2 + _DAT_112f27e98);
      uVar5 = 0xd00000000000002d;
      func_0x000107c5fadc(0xd00000000000002d,0x800000010f114190);
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar5);
      lVar15 = *(long *)(param_4 + 0x10);
      if (lVar15 != 0) {
        puVar14 = (undefined8 *)(param_4 + 0x28);
        do {
          uVar9 = 0x112f27e30;
          uVar5 = puVar14[-1];
          uVar8 = *puVar14;
          func_0x000107c6157c(uVar5);
          func_0x000107c61174();
          func_0x0001000285a8(0x112f27e30,&UNK_10db63930);
          func_0x000100087bd4(alStack_120,0x102f09ab8,uVar5,uVar9);
          lVar1 = alStack_120[0];
          if (alStack_120[0] == 0) {
            uVar9 = uVar10;
            func_0x000107c5d784();
            func_0x000107c61180();
            uStack_110 = uVar5;
            uStack_108 = uVar9;
            func_0x000107c61174();
            func_0x000100087bd4(FUN_102f0802c,alStack_120,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61170(uVar9);
            func_0x0001000285a8(0x112f28058,&UNK_10db63ad0);
            uVar6 = uVar9;
            func_0x000103edf20c();
            puVar7 = &UNK_1105e6a68;
            func_0x000107c613fc(&UNK_1105e6a68,0x108,7);
            uVar16 = param_3[0xc];
            uVar18 = param_3[0xf];
            uVar17 = param_3[0xe];
            *(undefined8 *)(puVar7 + 0xc0) = param_3[0xd];
            *(undefined8 *)(puVar7 + 0xb8) = uVar16;
            *(undefined8 *)(puVar7 + 0xd0) = uVar18;
            *(undefined8 *)(puVar7 + 200) = uVar17;
            uVar16 = param_3[0x10];
            *(undefined8 *)(puVar7 + 0xe0) = param_3[0x11];
            *(undefined8 *)(puVar7 + 0xd8) = uVar16;
            uVar16 = param_3[4];
            uVar18 = param_3[7];
            uVar17 = param_3[6];
            *(undefined8 *)(puVar7 + 0x80) = param_3[5];
            *(undefined8 *)(puVar7 + 0x78) = uVar16;
            *(undefined8 *)(puVar7 + 0x90) = uVar18;
            *(undefined8 *)(puVar7 + 0x88) = uVar17;
            uVar16 = param_3[8];
            uVar18 = param_3[0xb];
            uVar17 = param_3[10];
            *(undefined8 *)(puVar7 + 0xa0) = param_3[9];
            *(undefined8 *)(puVar7 + 0x98) = uVar16;
            *(undefined8 *)(puVar7 + 0xb0) = uVar18;
            *(undefined8 *)(puVar7 + 0xa8) = uVar17;
            uVar16 = *param_3;
            uVar18 = param_3[3];
            uVar17 = param_3[2];
            *(undefined8 *)(puVar7 + 0x60) = param_3[1];
            *(undefined8 *)(puVar7 + 0x58) = uVar16;
            *(undefined8 *)(puVar7 + 0x10) = uVar5;
            *(undefined8 *)(puVar7 + 0x18) = uVar9;
            *(undefined8 *)(puVar7 + 0x20) = uVar2;
            *(undefined **)(puVar7 + 0x28) = puVar4;
            *(undefined **)(puVar7 + 0x30) = puVar3;
            *(ulong *)(puVar7 + 0x38) = uStack_188;
            puVar7[0x40] = uStack_194;
            puVar7[0x41] = uVar12;
            *(long *)(puVar7 + 0x48) = param_2;
            *(undefined4 *)(puVar7 + 0x50) = param_5;
            *(undefined8 *)(puVar7 + 0xe8) = param_3[0x12];
            *(undefined8 *)(puVar7 + 0x70) = uVar18;
            *(undefined8 *)(puVar7 + 0x68) = uVar17;
            puVar7[0xf0] = param_6 & 1;
            *(undefined8 *)(puVar7 + 0xf8) = param_7;
            *(undefined8 *)(puVar7 + 0x100) = param_8;
            func_0x000107c6157c(uVar5);
            func_0x000107c61174();
            func_0x000107c6157c(uVar2);
            func_0x000107c6157c(puVar4);
            func_0x000107c6157c(puVar3);
            func_0x000107c61174(param_2);
            FUN_102f04d58(param_3,alStack_120);
            func_0x000107c6157c(param_8);
            func_0x00010075a04c(0,1,0x102f08044,puVar7);
            func_0x000107c61170(uVar8);
            func_0x000107c61574(uVar5);
            func_0x000107c61170(uVar9);
            func_0x000107c61574(uVar6);
            func_0x000107c61574(puVar7);
          }
          else {
            func_0x000107c61170(uVar8);
            func_0x000107c61574(uVar5);
            func_0x000107c61170(lVar1);
          }
          puVar14 = puVar14 + 2;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c61170(param_2);
      func_0x000107c61574(uVar2);
    }
  }
  return;
}



/* Entry: 102ee7c6c; end: 102ee7d77;  */

void FUN_102ee7c6c(long *param_1,byte *param_2,long *param_3,long param_4,ulong param_5,
                  ulong param_6)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2,auStack_68,0,0);
  bVar1 = *param_2;
  func_0x000107c61428(param_3,auStack_80,0,0);
  if ((bVar1 & 1) == 0) {
    lVar4 = *param_3 + 1;
    if (SCARRY8(*param_3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ee7d78);
      (*pcVar2)();
    }
    if ((((param_6 & 1) == 0) || ((param_5 & 1) == 0)) || (param_4 <= lVar4)) {
      uVar3 = 1;
      func_0x000107c61428(param_3,auStack_98,1,0);
      *param_3 = lVar4;
      func_0x000107c61428(param_2,auStack_b0,1,0);
      *param_2 = 1;
    }
    else {
      func_0x000107c61428(param_3,auStack_98,1,0);
      uVar3 = 0;
      *param_3 = lVar4;
    }
  }
  else {
    lVar4 = 0;
    uVar3 = 0xff;
  }
  *param_1 = lVar4;
  *(undefined1 *)(param_1 + 1) = uVar3;
  return;
}



/* Entry: 102ee7d78; end: 102ee807f;  */

void FUN_102ee7d78(ulong param_1,long param_2,ulong param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_68;
  
  if ((param_1 & 1) == 0) {
    if ((param_3 & 1) == 0) {
      func_0x000102ede748(1);
    }
    (*param_5)(1);
  }
  else {
    uVar3 = *(ulong *)(param_2 + 8);
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
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee7ec0);
            (*pcVar1)();
          }
          uVar7 = *(ulong *)(uVar3 + uVar5 * 8 + 0x20);
          func_0x000107c6157c(uVar7);
        }
        else {
          uVar7 = uVar5;
          FUN_102f02a90(uVar5,uVar3);
        }
        if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ee7e70);
          (*pcVar1)();
        }
        uVar6 = uVar5 + 1;
        uVar2 = 0x112f27e30;
        func_0x0001000285a8(0x112f27e30,&UNK_10db63930);
        func_0x000100087bd4(&uStack_68,0x102f09ae0,uVar7,uVar2);
        uVar2 = uStack_68;
        func_0x000107c3f474(uStack_68);
        func_0x000107c61170(uVar2);
        *(undefined1 *)(uVar7 + 0x80) = 1;
        func_0x000107c61574(uVar7);
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar4);
    }
  }
  return;
}



/* Entry: 102ee8080; end: 102ee80a3;  */

void FUN_102ee8080(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined1 in_w5;
  undefined8 in_x6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x338) = in_x6;
  *(undefined1 *)(unaff_x22 + 0x179) = in_w5;
  *(undefined8 *)(unaff_x22 + 0x330) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x328) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ee80a4,0,0);
  return;
}



/* Entry: 102ee80a4; end: 102ee96e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ee80a4(void)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined1 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  ulong uVar29;
  long unaff_x22;
  undefined8 uVar30;
  ulong *puVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long lStack_88;
  
  lVar23 = *(long *)(unaff_x22 + 0x328);
  func_0x000107c61428(lVar23 + 0x10,unaff_x22 + 0x278,0,0);
  lVar23 = lVar23 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x340) = lVar23;
  if (lVar23 != 0) {
    if (*(char *)(unaff_x22 + 0x179) == '\x01') {
      uVar30 = *(undefined8 *)(unaff_x22 + 0x338);
      func_0x000107c614cc(*(undefined8 *)(unaff_x22 + 0x330),unaff_x22 + 0x2f0,unaff_x22 + 0x290);
      func_0x000102f09f7c(uVar30,*(undefined8 *)(unaff_x22 + 0x298),
                          *(undefined8 *)(unaff_x22 + 0x2a0));
      func_0x00010488ade0();
      func_0x000107c61170(lVar23);
      func_0x000107c61170(uVar30);
    }
    else {
      lVar24 = *(long *)(*(long *)(unaff_x22 + 0x338) + 0x38);
      *(long *)(unaff_x22 + 0x348) = lVar24;
      if (lVar24 == 0) {
        lVar8 = 0;
      }
      else {
        func_0x000107c615f0(lVar24);
        puVar12 = PTR_PTR_1126c33d0;
        func_0x000107c61168(PTR_PTR_1126c33d0);
        lVar8 = lVar24;
        func_0x000107c6148c(lVar24,puVar12);
        if (lVar8 == 0) {
          func_0x000107c615e8(lVar24);
        }
      }
      uVar25 = *(ulong *)(unaff_x22 + 0x338);
      lVar20 = lVar8;
      func_0x000107c5bf40(lVar8);
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      lVar24 = _DAT_112f27e98;
      *(long *)(unaff_x22 + 0x350) = _DAT_112f27e98;
      uVar28 = *(undefined8 *)(lVar23 + lVar24);
      uVar30 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010f114130);
      func_0x000107c3ebd4(uVar28);
      func_0x000107c61170(uVar30);
      func_0x000102f16e80(uVar25,lVar20,uVar28);
      *(ulong *)(unaff_x22 + 0x358) = uVar25;
      func_0x000107c61170(lVar20);
      uVar18 = (undefined1)*(undefined8 *)(lVar23 + lVar24);
      uVar30 = 0xd000000000000026;
      func_0x000107c5fadc(0xd000000000000026,0x800000010f114150);
      func_0x000107c3ebd4();
      *(undefined1 *)(unaff_x22 + 0x17a) = uVar18;
      func_0x000107c61170(uVar30);
      if (uVar25 >> 0x3e == 0) {
        uVar5 = *(ulong *)((uVar25 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = uVar25 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar25) {
          uVar5 = uVar25;
        }
        func_0x000107c60480();
      }
      *(ulong *)(unaff_x22 + 0x360) = uVar5;
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar5 != 0) {
        uVar25 = 0;
        *(undefined8 *)(unaff_x22 + 0x368) = _DAT_112f27ea8;
        *(undefined8 *)(unaff_x22 + 0x370) = _DAT_112f27f10;
        *(undefined8 *)(unaff_x22 + 0x378) = _DAT_112f27f18;
        *(undefined8 *)(unaff_x22 + 0x380) = _DAT_112f27eb8;
        *(undefined8 *)(unaff_x22 + 0x388) = _DAT_112f27fa8;
        *(undefined8 *)(unaff_x22 + 0x390) = _DAT_112f27f68;
        *(undefined8 *)(unaff_x22 + 0x398) = _DAT_112f27ee0;
        puVar22 = puVar12;
        do {
          *(undefined **)(unaff_x22 + 0x3a0) = puVar22;
          uVar5 = *(ulong *)(unaff_x22 + 0x358);
          if ((uVar5 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102ee96ac);
              (*pcVar3)();
            }
            uVar5 = *(ulong *)(uVar5 + uVar25 * 8 + 0x20);
            func_0x000107c6157c(uVar5);
          }
          else {
            uVar5 = uVar25;
            FUN_102f02a90();
          }
          *(ulong *)(unaff_x22 + 0x3a8) = uVar5;
          *(ulong *)(unaff_x22 + 0x3b0) = uVar25 + 1;
          if (SCARRY8(uVar25,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102ee96a8);
            (*pcVar3)();
          }
          lVar23 = *(long *)(unaff_x22 + 0x368);
          lVar24 = *(long *)(unaff_x22 + 0x340);
          puVar22 = &UNK_1105e6590;
          uVar16 = 0x18;
          func_0x000107c613fc(&UNK_1105e6590,0x18,7);
          *(undefined **)(unaff_x22 + 0x3b8) = puVar22;
          puVar31 = (ulong *)(puVar22 + 0x10);
          *puVar31 = uVar5;
          uVar30 = *(undefined8 *)(uVar5 + 0x18);
          uVar28 = *(undefined8 *)(uVar5 + 0x20);
          uVar26 = *(undefined8 *)(*(long *)(lVar24 + lVar23) + _DAT_113083f78);
          func_0x000107c6157c(uVar5);
          func_0x000107c61434(uVar28);
          func_0x000107c5d984();
          func_0x000107c61180();
          uVar32 = uVar26;
          func_0x000107c5faec();
          func_0x000107c61170(uVar26);
          uVar26 = uVar16;
          func_0x000107c5fb24();
          func_0x000107c6142c(uVar16);
          *(undefined8 *)(unaff_x22 + 0x2d8) = uVar32;
          *(undefined8 *)(unaff_x22 + 0x2e0) = uVar26;
          func_0x000107c5fb78(0x7e,0xe100000000000000);
          func_0x000107c5fb78(uVar30,uVar28);
          func_0x000107c6142c(uVar28);
          lVar23 = *(long *)(unaff_x22 + 0x2d8);
          *(long *)(unaff_x22 + 0x3c0) = lVar23;
          uVar30 = *(undefined8 *)(unaff_x22 + 0x2e0);
          *(undefined8 *)(unaff_x22 + 0x3c8) = uVar30;
          func_0x000107c61434(uVar30);
          puVar11 = puVar12;
          func_0x000107c61558();
          puVar10 = puVar12;
          if (((ulong)puVar11 & 1) == 0) {
            puVar10 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
          }
          uVar25 = *(ulong *)(puVar10 + 0x10);
          puVar12 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar25) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
            func_0x0001000d182c(puVar12,uVar25 + 1,1,puVar10);
          }
          *(undefined **)(unaff_x22 + 0x3d0) = puVar12;
          cVar1 = *(char *)(unaff_x22 + 0x17a);
          *(ulong *)(puVar12 + 0x10) = uVar25 + 1;
          *(long *)(puVar12 + uVar25 * 0x10 + 0x20) = lVar23;
          *(undefined8 *)(puVar12 + uVar25 * 0x10 + 0x28) = uVar30;
          if (cVar1 == '\x01') {
            lVar24 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x340) + *(long *)(unaff_x22 + 0x370)
                                        ) + _DAT_112ff2c78);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar24 != 0) {
              func_0x000107c61428(puVar31,unaff_x22 + 0x2c0,0,0);
              uVar5 = *puVar31;
              FUN_102f1cffc(0);
              func_0x000107c610f8();
              uVar25 = uVar5;
              func_0x000107c6157c(uVar5);
              FUN_102f1d078();
              func_0x000107c61574(uVar5);
              lVar8 = lVar23;
              func_0x000107c5fadc(lVar23,uVar30);
              func_0x000107c49768(lVar24);
              func_0x000107c61170(lVar8);
              func_0x000107c61170(uVar25);
              func_0x000107c615e8(lVar24);
            }
          }
          func_0x000107c61428(puVar31,unaff_x22 + 0x2a8,1,0);
          uVar5 = *(ulong *)(*puVar31 + 0x10);
          func_0x000107c4008c();
          func_0x000107c61180();
          uVar25 = uVar5;
          func_0x000107c41844();
          func_0x000107c61180();
          func_0x000107c61170(uVar5);
          uVar5 = uVar25;
          func_0x000107c5bf1c();
          func_0x000107c61180();
          func_0x000107c61170(uVar25);
          uVar25 = 0;
          FUN_102f09540(0,0x112d51360,&PTR_PTR_1126becd8);
          uVar9 = uVar5;
          func_0x000107c5fc54();
          func_0x000107c61170(uVar5);
          uVar5 = uVar9 & 0xffffffffffffff8;
          if (uVar9 >> 0x3e == 0) {
            uVar19 = *(ulong *)(uVar5 + 0x10);
          }
          else {
            uVar19 = uVar5;
            if (0x7fffffffffffffff < uVar9) {
              uVar19 = uVar9;
            }
            func_0x000107c60480();
          }
          uVar29 = 0;
          do {
            if (uVar19 == uVar29) {
              func_0x000107c6142c(uVar9);
              goto LAB_102ee8acc;
            }
            if ((uVar9 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar5 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102ee96a4);
                (*pcVar3)();
              }
              uVar6 = *(ulong *)(uVar9 + uVar29 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar6 = uVar29;
              uVar25 = uVar9;
              func_0x000102f02874(uVar29,uVar9,&PTR_PTR_1126becd8,0x112d51360);
            }
            if (SCARRY8(uVar29,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102ee96a0);
              (*pcVar3)();
            }
            uVar7 = uVar6;
            func_0x000107c5d0f0();
            func_0x000107c61170(uVar6);
            uVar29 = uVar29 + 1;
          } while ((int)uVar7 != 2);
          func_0x000107c6142c(uVar9);
          lVar24 = lVar23;
          uVar28 = uVar30;
          func_0x000107c5fadc(lVar23,uVar30);
          lVar8 = lVar24;
          func_0x000108ea5f00();
          func_0x000107c61180();
          func_0x000107c61170(lVar24);
          if (lVar8 == 0) {
            lVar8 = 0;
            func_0x000107c5faec(0);
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar28);
          }
          lVar20 = *(long *)(unaff_x22 + 0x338);
          puVar11 = PTR_PTR_1126c3398;
          func_0x000107c610f8();
          func_0x000107c45b3c();
          func_0x000107c61170(lVar8);
          uVar25 = 0;
          func_0x000107c5eea4();
          lVar8 = *(long *)(uVar25 - 8);
          lVar24 = *(long *)(lVar8 + 0x40);
          uVar5 = lVar24 + 0xf;
          uVar9 = uVar5 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          func_0x000107c5ee80(uVar9,0x40f5180000000000);
          puVar10 = *(undefined **)(lVar20 + 0x48);
          puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar10 != (undefined *)0x0) {
            puVar12 = puVar10;
          }
          func_0x000107c61434();
          FUN_102f146a0(unaff_x22 + 0x250,puVar12);
          func_0x000107c6142c(puVar12);
          if (*(long *)(unaff_x22 + 0x250) == 0) {
            lStack_88 = 0;
            uVar19 = 0xf000000000000000;
LAB_102ee88ac:
            iVar4 = (int)*(undefined8 *)
                          (*(long *)(unaff_x22 + 0x340) + *(long *)(unaff_x22 + 0x350));
            func_0x000108f49564();
            if (iVar4 == 0) {
              (**(code **)(lVar8 + 8))(uVar9,uVar25);
              func_0x0001000b44c0(lStack_88);
              uVar25 = uVar19;
            }
            else {
              lVar20 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x340) +
                                          *(long *)(unaff_x22 + 0x380)) + _DAT_112ff73d0);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar20 != 0) {
                uVar28 = *(undefined8 *)(unaff_x22 + 0x340);
                lVar27 = lVar20;
                func_0x000107c5c92c(0x4072c00000000000);
                func_0x000107c61180();
                func_0x000107c615e8(lVar20);
                puVar12 = &UNK_1105e5fa0;
                func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
                func_0x000107c61614(puVar12 + 0x10,uVar28);
                uVar5 = uVar5 & 0xfffffffffffffff0;
                func_0x000107c615b8(uVar5);
                (**(code **)(lVar8 + 0x10))();
                uVar29 = (ulong)*(byte *)(lVar8 + 0x50);
                uVar6 = uVar29 + 0x20 & (uVar29 ^ 0xffffffffffffffff);
                puVar10 = &UNK_1105e6680;
                func_0x000107c613fc(&UNK_1105e6680,uVar6 + lVar24,uVar29 | 7);
                *(undefined **)(puVar10 + 0x10) = puVar12;
                *(undefined **)(puVar10 + 0x18) = puVar11;
                (**(code **)(lVar8 + 0x20))(puVar10 + uVar6,uVar5,uVar25);
                *(code **)(unaff_x22 + 0x240) = FUN_102f07e84;
                *(undefined **)(unaff_x22 + 0x248) = puVar10;
                *(undefined **)(unaff_x22 + 0x220) = PTR___NSConcreteStackBlock_11034bd00;
                *(undefined8 *)(unaff_x22 + 0x228) = 0x42000000;
                *(undefined **)(unaff_x22 + 0x230) = &UNK_10134a1dc;
                *(undefined **)(unaff_x22 + 0x238) = &UNK_1105e6698;
                lVar24 = unaff_x22 + 0x220;
                func_0x000107c60bc4(lVar24);
                uVar28 = *(undefined8 *)(unaff_x22 + 0x248);
                func_0x000107c61174(puVar11);
                func_0x000107c61574(uVar28);
                func_0x000107c615c0(uVar5);
                func_0x000107c5dc64(lVar27);
                func_0x000107c60bd0(lVar24);
                func_0x000107c61170(lVar27);
                func_0x000107c61170(puVar11);
                func_0x0001000b44c0(lStack_88,uVar19);
                (**(code **)(lVar8 + 8))(uVar9);
                goto LAB_102ee8ac0;
              }
              (**(code **)(lVar8 + 8))(uVar9,uVar25);
              func_0x0001000b44c0(lStack_88);
              uVar25 = uVar19;
            }
            func_0x000107c61170(puVar11);
          }
          else {
            lStack_88 = *(long *)(unaff_x22 + 0x268);
            uVar19 = *(ulong *)(unaff_x22 + 0x270);
            func_0x000100de78a0(lStack_88,uVar19);
            FUN_102f080f0(unaff_x22 + 0x250,0x112f28010,&UNK_10db63be0);
            if (0xe < uVar19 >> 0x3c) goto LAB_102ee88ac;
            uVar2 = (uint)(uVar19 >> 0x20);
            uVar17 = uVar2 >> 0x1e;
            if (1 < uVar2 >> 0x1e) {
              if (uVar17 == 2) {
                if (*(long *)(lStack_88 + 0x10) != *(long *)(lStack_88 + 0x18)) goto LAB_102ee87e0;
              }
              else {
LAB_102ee87bc:
                func_0x0001000b44c0(lStack_88,uVar19);
              }
              goto LAB_102ee88ac;
            }
            if (uVar17 == 0) {
              if ((uVar19 & 0xff000000000000) == 0) goto LAB_102ee87bc;
            }
            else {
              if ((long)(int)lStack_88 == lStack_88 >> 0x20) goto LAB_102ee88ac;
LAB_102ee87e0:
              func_0x000100de78a0(lStack_88,uVar19);
            }
            iVar4 = (int)*(undefined8 *)
                          (*(long *)(unaff_x22 + 0x340) + *(long *)(unaff_x22 + 0x350));
            func_0x000108faa2d8();
            func_0x0001000b44c0(lStack_88,uVar19);
            if (iVar4 == 0) goto LAB_102ee88ac;
            lVar24 = *(long *)(*(long *)(unaff_x22 + 0x340) + *(long *)(unaff_x22 + 0x378));
            func_0x000107c5bf98();
            func_0x000107c61180();
            if (lVar24 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102ee96e8);
              (*pcVar3)();
            }
            lVar20 = lStack_88;
            func_0x000107c5ee20(lStack_88,uVar19);
            lVar27 = lVar20;
            func_0x000107c5ee70();
            func_0x000107c3d8c8(lVar24);
            func_0x000107c61170(lVar27);
            func_0x000107c61170(lVar20);
            func_0x000107c615e8(lVar24);
            func_0x0001000b44c0(lStack_88,uVar19);
            func_0x000107c61170(puVar11);
            (**(code **)(lVar8 + 8))(uVar9);
          }
LAB_102ee8ac0:
          func_0x000107c615c0(uVar9);
LAB_102ee8acc:
          lVar8 = *(long *)(*(long *)(unaff_x22 + 0x340) + *(long *)(unaff_x22 + 0x388));
          func_0x000107c4c95c();
          func_0x000107c61180();
          lVar24 = lVar8;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar8);
          if (lVar24 != 0) {
            uVar26 = *(undefined8 *)(unaff_x22 + 0x340);
            uVar28 = *(undefined8 *)(*puVar31 + 0x18);
            uVar32 = *(undefined8 *)(*puVar31 + 0x20);
            func_0x000107c61434(uVar32);
            func_0x000107c5fadc(uVar28,uVar32);
            func_0x000107c6142c(uVar32);
            puVar12 = &UNK_1105e5fa0;
            func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
            func_0x000107c61614(puVar12 + 0x10,uVar26);
            puVar11 = &UNK_1105e6630;
            uVar25 = 0x28;
            func_0x000107c613fc(&UNK_1105e6630,0x28,7);
            *(undefined **)(puVar11 + 0x10) = puVar12;
            *(long *)(puVar11 + 0x18) = lVar23;
            *(undefined8 *)(puVar11 + 0x20) = uVar30;
            *(undefined8 *)(unaff_x22 + 0x210) = 0x102f07e78;
            *(undefined **)(unaff_x22 + 0x218) = puVar11;
            *(undefined **)(unaff_x22 + 0x1f0) = PTR___NSConcreteStackBlock_11034bd00;
            *(undefined8 *)(unaff_x22 + 0x1f8) = 0x42000000;
            *(undefined8 *)(unaff_x22 + 0x200) = 0x102f09a60;
            *(undefined **)(unaff_x22 + 0x208) = &UNK_1105e6648;
            lVar8 = unaff_x22 + 0x1f0;
            func_0x000107c60bc4(lVar8);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x218);
            func_0x000107c61434(uVar30);
            func_0x000107c61574(uVar32);
            func_0x000107c5bb14(lVar24);
            func_0x000107c60bd0(lVar8);
            func_0x000107c61170(uVar28);
            func_0x000107c615e8(lVar24);
          }
          puVar11 = *(undefined **)(*(long *)(unaff_x22 + 0x338) + 0x48);
          puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar11 != (undefined *)0x0) {
            puVar12 = puVar11;
          }
          if ((ulong)puVar12 >> 0x3e == 0) {
            puVar10 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar10 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar12) {
              puVar10 = puVar12;
            }
            func_0x000107c60480();
          }
          func_0x000107c61434(puVar11);
          func_0x000107c6142c(puVar12);
          if (0 < (long)puVar10) {
            uVar5 = *puVar31;
            func_0x000107c6157c(uVar5);
            uVar28 = 0x112f27e30;
            func_0x0001000285a8(0x112f27e30,&UNK_10db63930);
            uVar25 = uVar5;
            func_0x000100087bd4((long *)(unaff_x22 + 800),FUN_102f09a68,uVar5,uVar28);
            func_0x000107c61574(uVar5);
            lVar24 = *(long *)(unaff_x22 + 800);
            if (lVar24 != 0) {
              uVar28 = *(undefined8 *)(unaff_x22 + 0x340);
              puVar21 = *(undefined8 **)(unaff_x22 + 0x338);
              puVar12 = &UNK_1105e5fa0;
              func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
              func_0x000107c61614(puVar12 + 0x10,uVar28);
              puVar11 = &UNK_1105e65e0;
              func_0x000107c613fc(&UNK_1105e65e0,200,7);
              *(undefined **)(puVar11 + 0x10) = puVar12;
              *(long *)(puVar11 + 0x18) = lVar23;
              *(undefined8 *)(puVar11 + 0x20) = uVar30;
              *(undefined **)(puVar11 + 0x28) = puVar22;
              uVar26 = *puVar21;
              uVar32 = puVar21[3];
              uVar28 = puVar21[2];
              *(undefined8 *)(puVar11 + 0x38) = puVar21[1];
              *(undefined8 *)(puVar11 + 0x30) = uVar26;
              *(undefined8 *)(puVar11 + 0x48) = uVar32;
              *(undefined8 *)(puVar11 + 0x40) = uVar28;
              uVar32 = puVar21[5];
              uVar28 = puVar21[4];
              uVar16 = puVar21[7];
              uVar26 = puVar21[6];
              uVar36 = puVar21[8];
              uVar35 = puVar21[0xb];
              uVar34 = puVar21[10];
              *(undefined8 *)(puVar11 + 0x78) = puVar21[9];
              *(undefined8 *)(puVar11 + 0x70) = uVar36;
              *(undefined8 *)(puVar11 + 0x88) = uVar35;
              *(undefined8 *)(puVar11 + 0x80) = uVar34;
              *(undefined8 *)(puVar11 + 0x58) = uVar32;
              *(undefined8 *)(puVar11 + 0x50) = uVar28;
              *(undefined8 *)(puVar11 + 0x68) = uVar16;
              *(undefined8 *)(puVar11 + 0x60) = uVar26;
              uVar32 = puVar21[0xd];
              uVar28 = puVar21[0xc];
              uVar16 = puVar21[0xf];
              uVar26 = puVar21[0xe];
              uVar35 = puVar21[0x11];
              uVar34 = puVar21[0x10];
              *(undefined8 *)(puVar11 + 0xc0) = puVar21[0x12];
              *(undefined8 *)(puVar11 + 0xa8) = uVar16;
              *(undefined8 *)(puVar11 + 0xa0) = uVar26;
              *(undefined8 *)(puVar11 + 0xb8) = uVar35;
              *(undefined8 *)(puVar11 + 0xb0) = uVar34;
              *(undefined8 *)(puVar11 + 0x98) = uVar32;
              *(undefined8 *)(puVar11 + 0x90) = uVar28;
              *(code **)(unaff_x22 + 0x1e0) = FUN_102f07e68;
              *(undefined **)(unaff_x22 + 0x1e8) = puVar11;
              *(undefined **)(unaff_x22 + 0x1c0) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)(unaff_x22 + 0x1c8) = 0x42000000;
              *(undefined8 *)(unaff_x22 + 0x1d0) = 0x102f09a64;
              *(undefined **)(unaff_x22 + 0x1d8) = &UNK_1105e65f8;
              lVar23 = unaff_x22 + 0x1c0;
              func_0x000107c60bc4(lVar23);
              uVar28 = *(undefined8 *)(unaff_x22 + 0x1e8);
              uVar25 = unaff_x22 + 0xa8;
              FUN_102f04d58(puVar21);
              func_0x000107c61434(uVar30);
              func_0x000107c6157c(puVar22);
              func_0x000107c61574(uVar28);
              func_0x000107c4db80(lVar24);
              func_0x000107c60bd0(lVar23);
              func_0x000107c61170(lVar24);
            }
          }
          *(undefined8 *)(unaff_x22 + 0x3d8) = 0;
          lVar24 = *(long *)(*puVar31 + 0x10);
          func_0x000107c4008c();
          func_0x000107c61180();
          lVar23 = lVar24;
          func_0x000107c427c0();
          func_0x000107c61180();
          func_0x000107c61170(lVar24);
          if (lVar23 != 0) {
            lVar24 = lVar23;
            func_0x000107c4a8c4();
            func_0x000107c61180();
            lVar8 = lVar24;
            func_0x000107c5faec();
            func_0x000107c61170(lVar24);
            uVar5 = uVar25;
            func_0x000107c5ee08(lVar8,uVar25,0);
            uVar9 = uVar5;
            func_0x000107c6142c(uVar25);
            if (uVar5 >> 0x3c < 0xf) {
              lVar24 = lVar23;
              func_0x000107c4a804();
              func_0x000107c61180();
              lVar20 = lVar24;
              func_0x000107c5faec();
              func_0x000107c61170(lVar24);
              uVar25 = uVar9;
              func_0x000107c5ee08(lVar20,uVar9,0);
              func_0x000107c6142c(uVar9);
              if (uVar25 >> 0x3c < 0xf) {
                lVar24 = *(long *)(*puVar31 + 0x28);
                func_0x000107c61174();
                func_0x0001000d224c(unaff_x22 + 0x318);
                lVar27 = *(long *)(unaff_x22 + 0x318);
                if (lVar27 != 0) {
                  lVar33 = *(long *)(unaff_x22 + 0x338);
                  lVar13 = lVar8;
                  func_0x000107c5ee20(lVar8,uVar5);
                  lVar14 = lVar20;
                  func_0x000107c5ee20(lVar20,uVar25);
                  uVar19 = *(ulong *)(lVar33 + 0x10);
                  uVar9 = uVar19;
                  puVar12 = PTR_s_respondsToSelector__11262c7e0;
                  func_0x000107c61150(uVar19,PTR_s_respondsToSelector__11262c7e0,
                                      PTR_s_externalContentData_1125c5168);
                  if ((uVar9 & 1) == 0) {
LAB_102ee918c:
                    uVar9 = 0;
                  }
                  else {
                    func_0x000107c42c80();
                    func_0x000107c61180();
                    if (uVar19 == 0) goto LAB_102ee918c;
                    uVar29 = uVar19;
                    func_0x000107c5ee30();
                    func_0x000107c61170(uVar19);
                    uVar9 = uVar29;
                    func_0x000107c5ee20(uVar29,puVar12);
                    func_0x00010006c090(uVar29);
                  }
                  lVar33 = lVar27;
                  func_0x000107c4edbc();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar9);
                  func_0x000107c61170(lVar14);
                  func_0x000107c61170(lVar13);
                  func_0x000107c615e8(lVar27);
                  if (lVar33 == 0) {
                    func_0x000107c61170(lVar23);
                    func_0x0001000b44c0(lVar8,uVar5);
                    func_0x0001000b44c0(lVar20,uVar25);
                    func_0x000107c61170(lVar24);
                  }
                  else {
                    func_0x000107c61174();
                    lVar27 = lVar33;
                    func_0x0001040130b8();
                    func_0x000107c61170(lVar33);
                    if ((ulong)puVar12 >> 0x3c < 0xf) {
                      uVar30 = *(undefined8 *)(*puVar31 + 0x10);
                      func_0x000107c4008c(uVar30);
                      func_0x000107c61180();
                      lVar13 = lVar27;
                      func_0x000107c5ee20(lVar27,puVar12);
                      func_0x000107c56010(uVar30);
                      func_0x000107c61170(lVar23);
                      func_0x0001000b44c0(lVar8,uVar5);
                      func_0x0001000b44c0(lVar20,uVar25);
                      func_0x000107c61170(lVar33);
                      func_0x000107c61170(lVar24);
                      func_0x000107c61170(lVar13);
                      func_0x000107c61170(uVar30);
                      func_0x0001000b44c0(lVar27,puVar12);
                    }
                    else {
                      func_0x000107c61170(lVar23);
                      func_0x0001000b44c0(lVar8,uVar5);
                      func_0x0001000b44c0(lVar20,uVar25);
                      func_0x000107c61170(lVar24);
                      func_0x000107c61170(lVar33);
                    }
                  }
                  goto LAB_102ee8e74;
                }
                func_0x000107c61170(lVar23);
                func_0x0001000b44c0(lVar8,uVar5);
                func_0x0001000b44c0(lVar20,uVar25);
                lVar23 = lVar24;
              }
              else {
                func_0x0001000b44c0(lVar8,uVar5);
              }
            }
            func_0x000107c61170(lVar23);
          }
LAB_102ee8e74:
          lVar23 = *(long *)(unaff_x22 + 0x338);
          func_0x0001000d224c(unaff_x22 + 0x2f8);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x2f8);
          uVar30 = uVar28;
          func_0x000107c43c88();
          *(char *)(unaff_x22 + 0x17b) = (char)uVar30;
          func_0x000107c615e8(uVar28);
          lVar23 = *(long *)(lVar23 + 0x28);
          *(long *)(unaff_x22 + 0x2e8) = lVar23;
          if (lVar23 != 0) {
            uVar5 = *(ulong *)(*puVar31 + 0x10);
            FUN_102f059cc(unaff_x22 + 0x2e8,unaff_x22 + 0x300,0x112f28030,&UNK_10db63a70);
            func_0x000107c61174();
            uVar25 = uVar5;
            FUN_102f17f50();
            func_0x000107c61170(uVar5);
            if ((uVar25 & 1) != 0) {
              lVar24 = *(long *)(unaff_x22 + 0x348);
              if (lVar24 != 0) {
                func_0x000107c615f0(lVar24);
                puVar12 = PTR_PTR_1126c33d0;
                func_0x000107c61168(PTR_PTR_1126c33d0);
                func_0x000107c6148c(lVar24,puVar12);
                if (lVar24 == 0) {
                  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x348));
                }
              }
              lVar8 = lVar24;
              FUN_102f180b0(lVar24);
              func_0x000107c61170(lVar24);
              puVar12 = PTR_PTR_1126ac788;
              func_0x000107c610f8();
              lVar24 = lVar8;
              func_0x000107c5fc48(lVar8,PTR___sSSN_11034da80);
              func_0x000107c6142c(lVar8);
              func_0x000107c47c6c();
              *(undefined **)(unaff_x22 + 0x3e0) = puVar12;
              func_0x000107c61170(lVar24);
              uVar5 = *(ulong *)(*puVar31 + 0x10);
              func_0x000107c5b1f8();
              func_0x000107c61180();
              uVar30 = 0;
              FUN_102f09540(0,0x112d54e00,&PTR_PTR_1126bcf68);
              *(undefined8 *)(unaff_x22 + 1000) = uVar30;
              uVar25 = uVar5;
              func_0x000107c5fc54(uVar5,uVar30);
              func_0x000107c61170(uVar5);
              if ((uVar25 & 0xc000000000000001) == 0) {
                if (*(long *)((uVar25 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102ee96e4);
                  (*pcVar3)();
                }
                uVar30 = *(undefined8 *)(uVar25 + 0x20);
                func_0x000107c61174(uVar30);
              }
              else {
                uVar30 = 0;
                func_0x000102f02874(0,uVar25,&PTR_PTR_1126bcf68,0x112d54e00);
              }
              func_0x000107c6142c(uVar25);
              func_0x0001000285a8(0x112ebe818,&UNK_10dada750);
              func_0x000107c4dcc4();
              func_0x000107c61180();
              func_0x000107c61170(uVar30);
              lVar24 = lVar23;
              func_0x000103edf20c();
              *(long *)(unaff_x22 + 0x3f0) = lVar24;
              func_0x000107c61170(lVar23);
              plVar15 = (long *)0x80;
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x3f8) = plVar15;
              *plVar15 = unaff_x22;
              plVar15[1] = (long)FUN_102ee96e8;
                    /* WARNING: Could not recover jumptable at 0x000102ee9698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              FUN_102f03cf8();
              return;
            }
            FUN_102f080f0(unaff_x22 + 0x2e8,0x112f28030,&UNK_10db63a70);
          }
          if ((*(byte *)(unaff_x22 + 0x17a) & 1) == 0) {
            lVar23 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x340) + *(long *)(unaff_x22 + 0x370)
                                        ) + _DAT_112ff2c78);
            func_0x000107c5c734();
            func_0x000107c61180();
            uVar30 = *(undefined8 *)(unaff_x22 + 0x3c8);
            if (lVar23 == 0) goto LAB_102ee8fcc;
            uVar32 = *(undefined8 *)(unaff_x22 + 0x3c0);
            uVar26 = *(undefined8 *)(*(long *)(unaff_x22 + 0x3b8) + 0x10);
            FUN_102f1cffc(0);
            func_0x000107c610f8();
            uVar28 = uVar26;
            func_0x000107c6157c(uVar26);
            FUN_102f1d078();
            func_0x000107c61574(uVar26);
            func_0x000107c5fadc(uVar32,uVar30);
            func_0x000107c6142c(uVar30);
            func_0x000107c49768(lVar23);
            func_0x000107c61170(uVar32);
            func_0x000107c61170(uVar28);
            func_0x000107c615e8(lVar23);
          }
          else {
            uVar30 = *(undefined8 *)(unaff_x22 + 0x3c8);
LAB_102ee8fcc:
            func_0x000107c6142c(uVar30);
          }
          puVar22 = *(undefined **)(unaff_x22 + 0x3a0);
          uVar28 = *(undefined8 *)(*(long *)(unaff_x22 + 0x3b8) + 0x10);
          uVar30 = uVar28;
          func_0x000107c6157c();
          FUN_102f05a14();
          func_0x000107c61574(uVar28);
          func_0x000107c6157c(uVar30);
          puVar12 = puVar22;
          func_0x000107c61550();
          puVar11 = *(undefined **)(unaff_x22 + 0x3a0);
          if ((((int)puVar12 == 0) || (((ulong)puVar22 >> 0x3e & 1) != 0)) || ((long)puVar11 < 0)) {
            if ((ulong)puVar11 >> 0x3e == 0) {
              puVar12 = *(undefined **)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar12 = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar11) {
                puVar12 = puVar11;
              }
              func_0x000107c60480(puVar12);
              puVar11 = *(undefined **)(unaff_x22 + 0x3a0);
            }
            puVar22 = (undefined *)0x0;
            FUN_102ed645c(0,puVar12 + 1,1,puVar11);
            puVar11 = puVar22;
          }
          uVar5 = (ulong)puVar22 & 0xffffffffffffff8;
          uVar25 = *(ulong *)(uVar5 + 0x10);
          puVar22 = puVar11;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar25) {
            puVar22 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_102ed645c(puVar22,uVar25 + 1,1,puVar11);
            uVar5 = (ulong)puVar22 & 0xffffffffffffff8;
          }
          uVar32 = *(undefined8 *)(unaff_x22 + 0x3b8);
          lVar23 = *(long *)(unaff_x22 + 0x3b0);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x3a8);
          lVar24 = *(long *)(unaff_x22 + 0x360);
          *(ulong *)(uVar5 + 0x10) = uVar25 + 1;
          *(undefined8 *)(uVar5 + uVar25 * 8 + 0x20) = uVar30;
          func_0x000107c61574(uVar28);
          func_0x000107c61574(uVar30);
          func_0x000107c61574(uVar32);
          puVar12 = *(undefined **)(unaff_x22 + 0x3d0);
          if (lVar23 == lVar24) break;
          uVar25 = *(ulong *)(unaff_x22 + 0x3b0);
        } while( true );
      }
      uVar30 = *(undefined8 *)(unaff_x22 + 0x340);
      puVar21 = *(undefined8 **)(unaff_x22 + 0x338);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x358));
      func_0x0001000285a8(0x112f27ba8,&UNK_10db63700);
      puVar10 = puVar22;
      func_0x00010488813c(puVar22);
      puVar11 = &UNK_1105e65b8;
      func_0x000107c613fc(&UNK_1105e65b8,0xb8,7);
      uVar28 = *puVar21;
      uVar26 = puVar21[3];
      uVar32 = puVar21[2];
      *(undefined8 *)(puVar11 + 0x18) = puVar21[1];
      *(undefined8 *)(puVar11 + 0x10) = uVar28;
      *(undefined8 *)(puVar11 + 0x28) = uVar26;
      *(undefined8 *)(puVar11 + 0x20) = uVar32;
      uVar32 = puVar21[5];
      uVar28 = puVar21[4];
      uVar16 = puVar21[7];
      uVar26 = puVar21[6];
      uVar34 = puVar21[8];
      uVar36 = puVar21[0xb];
      uVar35 = puVar21[10];
      *(undefined8 *)(puVar11 + 0x58) = puVar21[9];
      *(undefined8 *)(puVar11 + 0x50) = uVar34;
      *(undefined8 *)(puVar11 + 0x68) = uVar36;
      *(undefined8 *)(puVar11 + 0x60) = uVar35;
      *(undefined8 *)(puVar11 + 0x38) = uVar32;
      *(undefined8 *)(puVar11 + 0x30) = uVar28;
      *(undefined8 *)(puVar11 + 0x48) = uVar16;
      *(undefined8 *)(puVar11 + 0x40) = uVar26;
      uVar26 = puVar21[0xd];
      uVar32 = puVar21[0xc];
      uVar16 = puVar21[0xe];
      uVar35 = puVar21[0x11];
      uVar34 = puVar21[0x10];
      uVar28 = puVar21[0x12];
      *(undefined8 *)(puVar11 + 0x88) = puVar21[0xf];
      *(undefined8 *)(puVar11 + 0x80) = uVar16;
      *(undefined8 *)(puVar11 + 0x98) = uVar35;
      *(undefined8 *)(puVar11 + 0x90) = uVar34;
      *(undefined8 *)(puVar11 + 0x78) = uVar26;
      *(undefined8 *)(puVar11 + 0x70) = uVar32;
      *(undefined8 *)(puVar11 + 0xa0) = uVar28;
      *(undefined8 *)(puVar11 + 0xa8) = uVar30;
      *(undefined **)(puVar11 + 0xb0) = puVar12;
      FUN_102f04d58(puVar21,unaff_x22 + 0x10);
      func_0x000107c61174(uVar30);
      func_0x000107c61434(puVar12);
      func_0x00010075a04c(0,1,FUN_102f07e44,puVar11);
      func_0x000107c61574(puVar11);
      func_0x000107c61574(puVar10);
      func_0x000107c61170(uVar30);
      func_0x000107c6142c(puVar12);
      func_0x000107c6142c(puVar22);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000102ee94e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ee96e8; end: 102ee973b;  */

void FUN_102ee96e8(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x400) = param_1;
  *(undefined1 *)(lVar1 + 0x17c) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x3f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ee973c,0,0);
  return;
}



/* Entry: 102ee973c; end: 102eeb00f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ee973c(void)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined *puVar15;
  ulong in_x3;
  uint uVar16;
  code *pcVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulong uVar29;
  long unaff_x22;
  undefined8 uVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined *puVar34;
  long lVar35;
  long lVar36;
  ulong *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long lStack_90;
  
  uVar18 = *(undefined8 *)(unaff_x22 + 0x400);
  if (*(char *)(unaff_x22 + 0x17c) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x308) = uVar18;
    iVar4 = 2;
    in_x3 = 0;
    func_0x000100029b9c(2,0x12,0);
    if (iVar4 != 0) {
      uVar18 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658((undefined8 *)(unaff_x22 + 0x308),uVar18,PTR___ss5ErrorWS_11034ee10);
    }
    uVar18 = *(undefined8 *)(unaff_x22 + 0x3e0);
    lVar24 = *(long *)(unaff_x22 + 0x3b8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x3f0));
    func_0x000107c61170(uVar18);
    uVar5 = *(ulong *)(*(long *)(lVar24 + 0x10) + 0x10);
    func_0x000107c5b1f8();
    func_0x000107c61180();
    uVar8 = uVar5;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar5);
    if ((uVar8 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar8 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x102eeafd4);
        (*pcVar17)();
      }
      uVar25 = *(undefined8 *)(unaff_x22 + 0x400);
      uVar18 = *(undefined8 *)(uVar8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar25 = *(undefined8 *)(unaff_x22 + 0x400);
      in_x3 = 0x112d54e00;
      uVar18 = 0;
      func_0x000102f02874(0,uVar8,&PTR_PTR_1126bcf68);
    }
    func_0x000100d2b81c(uVar25,1);
    func_0x000107c6142c();
  }
  else {
    uVar8 = *(ulong *)(unaff_x22 + 0x3e0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x3f0));
    func_0x000107c61170();
  }
  puVar31 = *(undefined **)(*(long *)(*(long *)(unaff_x22 + 0x3b8) + 0x10) + 0x10);
  FUN_10274d2dc();
  func_0x000107c613fc();
  *(undefined8 *)(uVar8 + 0x18) = 3;
  *(undefined8 *)(uVar8 + 0x10) = 1;
  *(undefined8 *)(uVar8 + 0x20) = uVar18;
  func_0x000107c61174();
  func_0x000107c61174();
  puVar6 = puVar31;
  func_0x000107c5b1f8();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar6);
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar34 = *(undefined **)((undefined *)((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
    puVar26 = (undefined *)(ulong)(puVar34 != (undefined *)0x0);
    if (puVar34 < puVar26) {
LAB_102eeafa8:
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x102eeafac);
      (*pcVar17)();
    }
  }
  else {
    puVar6 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if (((ulong)puVar7 & 0x8000000000000000) != 0) {
      puVar6 = puVar7;
    }
    puVar34 = puVar6;
    func_0x000107c60480();
    if ((long)puVar34 < 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x102eeb010);
      (*pcVar17)();
    }
    puVar26 = (undefined *)(ulong)(puVar34 != (undefined *)0x0);
    puVar15 = puVar6;
    func_0x000107c60480();
    if ((long)puVar15 < (long)puVar26) goto LAB_102eeafa8;
    func_0x000107c60480();
    if ((long)puVar6 < (long)puVar34) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x102eeafa8);
      (*pcVar17)();
    }
  }
  if (((ulong)puVar7 & 0xc000000000000001) == 0) {
    func_0x000107c61434(puVar7);
  }
  else {
    func_0x000107c61434(puVar7);
    puVar6 = puVar26;
    if ((undefined *)0x1 < puVar34) {
      do {
        puVar15 = puVar6 + 1;
        func_0x000107c60318(puVar6,puVar7,*(undefined8 *)(unaff_x22 + 1000));
        puVar6 = puVar15;
      } while (puVar34 != puVar15);
    }
  }
  func_0x000107c6142c(puVar7);
  if ((ulong)puVar7 >> 0x3e == 0) {
    in_x3 = (long)puVar34 << 1 | 1;
    puVar6 = puVar26;
    puVar26 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    puVar34 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8) + 0x20;
LAB_102ee99b0:
    uVar25 = 0;
    func_0x000107c605fc(0);
    puVar7 = puVar26;
    func_0x000107c615f4(puVar26,3);
    func_0x000107c61480();
    if (puVar7 == (undefined *)0x0) {
      func_0x000107c615e8(puVar26);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar24 = *(long *)(puVar7 + 0x10);
    func_0x000107c61574();
    if (SBORROW8(in_x3 >> 1,(long)puVar6)) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x102eeafd8);
      (*pcVar17)();
    }
    if (lVar24 != (in_x3 >> 1) - (long)puVar6) {
      func_0x000107c615ec(puVar26,2);
      goto LAB_102ee9994;
    }
    puVar6 = puVar26;
    func_0x000107c61480(puVar26,uVar25);
    func_0x000107c615ec(puVar26,2);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar6 != (undefined *)0x0) goto LAB_102ee9a30;
  }
  else {
    puVar6 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if (((ulong)puVar7 & 0x8000000000000000) != 0) {
      puVar6 = puVar7;
    }
    func_0x000107c60484(puVar26,puVar34);
    func_0x000107c6142c(puVar7);
    if ((in_x3 & 1) != 0) goto LAB_102ee99b0;
LAB_102ee9994:
    puVar7 = puVar26;
    FUN_102f04388(puVar26,puVar34,puVar6,in_x3);
  }
  func_0x000107c615e8(puVar26);
  puVar6 = puVar7;
LAB_102ee9a30:
  puVar22 = (undefined8 *)(unaff_x22 + 0x140);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x3d8);
  lVar36 = *(long *)(unaff_x22 + 0x3b8);
  FUN_102f02300(puVar6,FUN_10274d4c8,0x112d54e00,&PTR_PTR_1126bcf68);
  puVar6 = puVar31;
  func_0x000102f0e1c0(puVar31,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c61170(puVar31);
  lVar24 = *(long *)(lVar36 + 0x10);
  uVar30 = *(undefined8 *)(lVar24 + 0x18);
  uVar32 = *(undefined8 *)(lVar24 + 0x20);
  uVar28 = *(undefined8 *)(lVar24 + 0x30);
  uVar25 = *(undefined8 *)(lVar24 + 0x28);
  uVar38 = *(undefined8 *)(lVar24 + 0x40);
  uVar33 = *(undefined8 *)(lVar24 + 0x38);
  uVar40 = *(undefined8 *)(lVar24 + 0x50);
  uVar39 = *(undefined8 *)(lVar24 + 0x48);
  uVar41 = *(undefined8 *)(lVar24 + 0x51);
  *(undefined8 *)(unaff_x22 + 0x171) = *(undefined8 *)(lVar24 + 0x59);
  *(undefined8 *)(unaff_x22 + 0x169) = uVar41;
  *(undefined8 *)(unaff_x22 + 0x158) = uVar38;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar33;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar40;
  *(undefined8 *)(unaff_x22 + 0x160) = uVar39;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar28;
  *puVar22 = uVar25;
  func_0x000107c61434(uVar32);
  FUN_102edda34(puVar22,unaff_x22 + 0x180);
  func_0x000107c6157c(lVar24);
  uVar25 = 0x112f27e30;
  func_0x0001000285a8(0x112f27e30,&UNK_10db63930);
  func_0x000100087bd4(unaff_x22 + 0x310,FUN_102f07e50,lVar24,uVar25);
  func_0x000107c61574(lVar24);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar1 = *(undefined1 *)(*(long *)(lVar36 + 0x10) + 0x61);
  uVar28 = *(undefined8 *)(*(long *)(lVar36 + 0x10) + 0x68);
  lVar24 = 0;
  func_0x000102f1c3f0();
  func_0x000107c613fc();
  func_0x00010006a340(0);
  *(undefined8 *)(lVar24 + 0x68) = 0;
  *(undefined8 *)(lVar24 + 0x70) = 0;
  func_0x000107c613fc();
  uVar25 = uVar28;
  func_0x000107c61174();
  func_0x00010006a360();
  func_0x000107c61170(uVar18);
  FUN_102f080f0(unaff_x22 + 0x2e8,0x112f28030,&UNK_10db63a70);
  uVar18 = *puVar22;
  uVar39 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(lVar24 + 0x30) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(lVar24 + 0x28) = uVar18;
  *(undefined8 *)(lVar24 + 0x88) = 1;
  *(undefined1 *)(lVar24 + 0x80) = 0;
  *(undefined1 *)(lVar24 + 0x90) = 0;
  *(undefined **)(lVar24 + 0x10) = puVar6;
  *(undefined8 *)(lVar24 + 0x18) = uVar30;
  *(undefined8 *)(lVar24 + 0x20) = uVar32;
  *(undefined8 *)(lVar24 + 0x40) = uVar39;
  *(undefined8 *)(lVar24 + 0x38) = uVar38;
  uVar18 = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(lVar24 + 0x50) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(lVar24 + 0x48) = uVar18;
  uVar18 = *(undefined8 *)(unaff_x22 + 0x169);
  *(undefined8 *)(lVar24 + 0x59) = *(undefined8 *)(unaff_x22 + 0x171);
  *(undefined8 *)(lVar24 + 0x51) = uVar18;
  uVar18 = *(undefined8 *)(lVar24 + 0x70);
  *(undefined8 *)(lVar24 + 0x70) = uVar33;
  *(undefined8 *)(lVar24 + 0x78) = uVar25;
  func_0x000107c61170(uVar18);
  *(undefined1 *)(lVar24 + 0x61) = uVar1;
  uVar18 = *(undefined8 *)(lVar24 + 0x68);
  *(undefined8 *)(lVar24 + 0x68) = uVar28;
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(lVar36 + 0x10);
  *(long *)(lVar36 + 0x10) = lVar24;
  func_0x000107c61574(uVar18);
  do {
    if ((*(byte *)(unaff_x22 + 0x17a) & 1) == 0) {
      lVar24 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x340) + *(long *)(unaff_x22 + 0x370)) +
                        _DAT_112ff2c78);
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar18 = *(undefined8 *)(unaff_x22 + 0x3c8);
      if (lVar24 == 0) goto LAB_102ee9ca8;
      uVar30 = *(undefined8 *)(unaff_x22 + 0x3c0);
      uVar32 = *(undefined8 *)(*(long *)(unaff_x22 + 0x3b8) + 0x10);
      FUN_102f1cffc(0);
      func_0x000107c610f8();
      uVar25 = uVar32;
      func_0x000107c6157c(uVar32);
      FUN_102f1d078();
      func_0x000107c61574(uVar32);
      func_0x000107c5fadc(uVar30,uVar18);
      func_0x000107c6142c(uVar18);
      func_0x000107c49768(lVar24);
      func_0x000107c61170(uVar30);
      func_0x000107c61170(uVar25);
      func_0x000107c615e8(lVar24);
    }
    else {
      uVar18 = *(undefined8 *)(unaff_x22 + 0x3c8);
LAB_102ee9ca8:
      func_0x000107c6142c(uVar18);
    }
    uVar5 = *(ulong *)(unaff_x22 + 0x3a0);
    uVar25 = *(undefined8 *)(*(long *)(unaff_x22 + 0x3b8) + 0x10);
    uVar18 = uVar25;
    func_0x000107c6157c();
    FUN_102f05a14();
    func_0x000107c61574(uVar25);
    func_0x000107c6157c(uVar18);
    uVar8 = uVar5;
    func_0x000107c61550();
    uVar19 = *(ulong *)(unaff_x22 + 0x3a0);
    if ((((int)uVar8 == 0) || ((uVar5 >> 0x3e & 1) != 0)) || (uVar8 = uVar19, (long)uVar19 < 0)) {
      if (uVar19 >> 0x3e == 0) {
        uVar5 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar19) {
          uVar5 = uVar19;
        }
        func_0x000107c60480(uVar5);
        uVar19 = *(ulong *)(unaff_x22 + 0x3a0);
      }
      uVar8 = 0;
      FUN_102ed645c(0,uVar5 + 1,1,uVar19);
      uVar5 = uVar8;
    }
    uVar5 = uVar5 & 0xffffffffffffff8;
    uVar19 = *(ulong *)(uVar5 + 0x10);
    uVar20 = uVar8;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar19) {
      uVar20 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_102ed645c(uVar20,uVar19 + 1,1,uVar8);
      uVar5 = uVar20 & 0xffffffffffffff8;
    }
    uVar30 = *(undefined8 *)(unaff_x22 + 0x3b8);
    lVar24 = *(long *)(unaff_x22 + 0x3b0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x3a8);
    lVar36 = *(long *)(unaff_x22 + 0x360);
    *(ulong *)(uVar5 + 0x10) = uVar19 + 1;
    *(undefined8 *)(uVar5 + uVar19 * 8 + 0x20) = uVar18;
    func_0x000107c61574(uVar25);
    func_0x000107c61574(uVar18);
    func_0x000107c61574(uVar30);
    if (lVar24 == lVar36) {
      uVar30 = *(undefined8 *)(unaff_x22 + 0x3d0);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x340);
      puVar22 = *(undefined8 **)(unaff_x22 + 0x338);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x358));
      func_0x0001000285a8(0x112f27ba8,&UNK_10db63700);
      uVar8 = uVar20;
      func_0x00010488813c(uVar20);
      puVar6 = &UNK_1105e65b8;
      func_0x000107c613fc(&UNK_1105e65b8,0xb8,7);
      uVar25 = *puVar22;
      uVar27 = puVar22[3];
      uVar32 = puVar22[2];
      *(undefined8 *)(puVar6 + 0x18) = puVar22[1];
      *(undefined8 *)(puVar6 + 0x10) = uVar25;
      *(undefined8 *)(puVar6 + 0x28) = uVar27;
      *(undefined8 *)(puVar6 + 0x20) = uVar32;
      uVar32 = puVar22[5];
      uVar25 = puVar22[4];
      uVar28 = puVar22[7];
      uVar27 = puVar22[6];
      uVar33 = puVar22[8];
      uVar39 = puVar22[0xb];
      uVar38 = puVar22[10];
      *(undefined8 *)(puVar6 + 0x58) = puVar22[9];
      *(undefined8 *)(puVar6 + 0x50) = uVar33;
      *(undefined8 *)(puVar6 + 0x68) = uVar39;
      *(undefined8 *)(puVar6 + 0x60) = uVar38;
      *(undefined8 *)(puVar6 + 0x38) = uVar32;
      *(undefined8 *)(puVar6 + 0x30) = uVar25;
      *(undefined8 *)(puVar6 + 0x48) = uVar28;
      *(undefined8 *)(puVar6 + 0x40) = uVar27;
      uVar27 = puVar22[0xd];
      uVar32 = puVar22[0xc];
      uVar28 = puVar22[0xe];
      uVar38 = puVar22[0x11];
      uVar33 = puVar22[0x10];
      uVar25 = puVar22[0x12];
      *(undefined8 *)(puVar6 + 0x88) = puVar22[0xf];
      *(undefined8 *)(puVar6 + 0x80) = uVar28;
      *(undefined8 *)(puVar6 + 0x98) = uVar38;
      *(undefined8 *)(puVar6 + 0x90) = uVar33;
      *(undefined8 *)(puVar6 + 0x78) = uVar27;
      *(undefined8 *)(puVar6 + 0x70) = uVar32;
      *(undefined8 *)(puVar6 + 0xa0) = uVar25;
      *(undefined8 *)(puVar6 + 0xa8) = uVar18;
      *(undefined8 *)(puVar6 + 0xb0) = uVar30;
      FUN_102f04d58(puVar22,unaff_x22 + 0x10);
      func_0x000107c61174(uVar18);
      func_0x000107c61434(uVar30);
      func_0x00010075a04c(0,1,FUN_102f07e44,puVar6);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar8);
      func_0x000107c61170(uVar18);
      func_0x000107c6142c(uVar30);
      func_0x000107c6142c(uVar20);
                    /* WARNING: Could not recover jumptable at 0x000102eead98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    uVar5 = *(ulong *)(unaff_x22 + 0x3d0);
    uVar19 = *(ulong *)(unaff_x22 + 0x3b0);
    *(ulong *)(unaff_x22 + 0x3a0) = uVar20;
    uVar8 = *(ulong *)(unaff_x22 + 0x358);
    if ((uVar8 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x102eeaf64);
        (*pcVar17)();
      }
      uVar8 = *(ulong *)(uVar8 + uVar19 * 8 + 0x20);
      func_0x000107c6157c(uVar8);
    }
    else {
      uVar8 = uVar19;
      FUN_102f02a90();
    }
    *(ulong *)(unaff_x22 + 0x3a8) = uVar8;
    *(ulong *)(unaff_x22 + 0x3b0) = uVar19 + 1;
    if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x102eeaf60);
      (*pcVar17)();
    }
    lVar24 = *(long *)(unaff_x22 + 0x368);
    lVar36 = *(long *)(unaff_x22 + 0x340);
    puVar6 = &UNK_1105e6590;
    uVar28 = 0x18;
    func_0x000107c613fc(&UNK_1105e6590,0x18,7);
    *(undefined **)(unaff_x22 + 0x3b8) = puVar6;
    puVar37 = (ulong *)(puVar6 + 0x10);
    *puVar37 = uVar8;
    uVar18 = *(undefined8 *)(uVar8 + 0x18);
    uVar25 = *(undefined8 *)(uVar8 + 0x20);
    uVar32 = *(undefined8 *)(*(long *)(lVar36 + lVar24) + _DAT_113083f78);
    func_0x000107c6157c(uVar8);
    func_0x000107c61434(uVar25);
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar30 = uVar32;
    func_0x000107c5faec();
    func_0x000107c61170(uVar32);
    uVar32 = uVar28;
    func_0x000107c5fb24();
    func_0x000107c6142c(uVar28);
    *(undefined8 *)(unaff_x22 + 0x2d8) = uVar30;
    *(undefined8 *)(unaff_x22 + 0x2e0) = uVar32;
    func_0x000107c5fb78(0x7e,0xe100000000000000);
    func_0x000107c5fb78(uVar18,uVar25);
    func_0x000107c6142c(uVar25);
    lVar24 = *(long *)(unaff_x22 + 0x2d8);
    *(long *)(unaff_x22 + 0x3c0) = lVar24;
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2e0);
    *(undefined8 *)(unaff_x22 + 0x3c8) = uVar18;
    func_0x000107c61434(uVar18);
    uVar8 = uVar5;
    func_0x000107c61558();
    uVar19 = uVar5;
    if ((uVar8 & 1) == 0) {
      uVar19 = 0;
      func_0x0001000d182c(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar8 = *(ulong *)(uVar19 + 0x10);
    uVar5 = uVar19;
    if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar8) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
      func_0x0001000d182c(uVar5,uVar8 + 1,1,uVar19);
    }
    *(ulong *)(unaff_x22 + 0x3d0) = uVar5;
    cVar2 = *(char *)(unaff_x22 + 0x17a);
    *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
    lVar36 = uVar5 + uVar8 * 0x10;
    *(long *)(lVar36 + 0x20) = lVar24;
    *(undefined8 *)(lVar36 + 0x28) = uVar18;
    if (cVar2 == '\x01') {
      lVar36 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x340) + *(long *)(unaff_x22 + 0x370)) +
                        _DAT_112ff2c78);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar36 != 0) {
        func_0x000107c61428(puVar37,unaff_x22 + 0x2c0,0,0);
        uVar5 = *puVar37;
        FUN_102f1cffc(0);
        func_0x000107c610f8();
        uVar8 = uVar5;
        func_0x000107c6157c(uVar5);
        FUN_102f1d078();
        func_0x000107c61574(uVar5);
        lVar11 = lVar24;
        func_0x000107c5fadc(lVar24,uVar18);
        func_0x000107c49768(lVar36);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(uVar8);
        func_0x000107c615e8(lVar36);
      }
    }
    func_0x000107c61428(puVar37,unaff_x22 + 0x2a8,1,0);
    uVar5 = *(ulong *)(*puVar37 + 0x10);
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar8 = uVar5;
    func_0x000107c41844();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    uVar5 = uVar8;
    func_0x000107c5bf1c();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    uVar8 = 0;
    FUN_102f09540(0,0x112d51360,&PTR_PTR_1126becd8);
    uVar19 = uVar5;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar5);
    uVar5 = uVar19 & 0xffffffffffffff8;
    if (uVar19 >> 0x3e == 0) {
      uVar20 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      uVar20 = uVar5;
      if (0x7fffffffffffffff < uVar19) {
        uVar20 = uVar19;
      }
      func_0x000107c60480();
    }
    uVar29 = 0;
    do {
      if (uVar20 == uVar29) {
        func_0x000107c6142c(uVar19);
        goto LAB_102eea538;
      }
      if ((uVar19 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar5 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x102eeaf5c);
          (*pcVar17)();
        }
        uVar9 = *(ulong *)(uVar19 + uVar29 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar9 = uVar29;
        uVar8 = uVar19;
        func_0x000102f02874(uVar29,uVar19,&PTR_PTR_1126becd8,0x112d51360);
      }
      if (SCARRY8(uVar29,1)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x102eeaf58);
        (*pcVar17)();
      }
      uVar10 = uVar9;
      func_0x000107c5d0f0();
      func_0x000107c61170(uVar9);
      uVar29 = uVar29 + 1;
    } while ((int)uVar10 != 2);
    func_0x000107c6142c(uVar19);
    lVar36 = lVar24;
    uVar25 = uVar18;
    func_0x000107c5fadc(lVar24,uVar18);
    lVar11 = lVar36;
    func_0x000108ea5f00();
    func_0x000107c61180();
    func_0x000107c61170(lVar36);
    if (lVar11 == 0) {
      lVar11 = 0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar25);
    }
    lVar21 = *(long *)(unaff_x22 + 0x338);
    puVar31 = PTR_PTR_1126c3398;
    func_0x000107c610f8();
    func_0x000107c45b3c();
    func_0x000107c61170(lVar11);
    uVar19 = 0;
    func_0x000107c5eea4();
    lVar11 = *(long *)(uVar19 - 8);
    lVar36 = *(long *)(lVar11 + 0x40);
    uVar5 = lVar36 + 0xf;
    uVar20 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    func_0x000107c5ee80(uVar20,0x40f5180000000000);
    puVar34 = *(undefined **)(lVar21 + 0x48);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar34 != (undefined *)0x0) {
      puVar7 = puVar34;
    }
    func_0x000107c61434();
    FUN_102f146a0(unaff_x22 + 0x250,puVar7);
    func_0x000107c6142c(puVar7);
    if (*(long *)(unaff_x22 + 0x250) == 0) {
      lStack_90 = 0;
      uVar8 = 0xf000000000000000;
LAB_102eea340:
      iVar4 = (int)*(undefined8 *)(*(long *)(unaff_x22 + 0x340) + *(long *)(unaff_x22 + 0x350));
      func_0x000108f49564();
      if (iVar4 != 0) {
        lVar21 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x340) + *(long *)(unaff_x22 + 0x380)) +
                          _DAT_112ff73d0);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar21 != 0) {
          uVar25 = *(undefined8 *)(unaff_x22 + 0x340);
          lVar23 = lVar21;
          func_0x000107c5c92c(0x4072c00000000000);
          func_0x000107c61180();
          func_0x000107c615e8(lVar21);
          puVar7 = &UNK_1105e5fa0;
          func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
          func_0x000107c61614(puVar7 + 0x10,uVar25);
          uVar5 = uVar5 & 0xfffffffffffffff0;
          func_0x000107c615b8(uVar5);
          (**(code **)(lVar11 + 0x10))();
          uVar29 = (ulong)*(byte *)(lVar11 + 0x50);
          uVar9 = uVar29 + 0x20 & (uVar29 ^ 0xffffffffffffffff);
          puVar34 = &UNK_1105e6680;
          func_0x000107c613fc(&UNK_1105e6680,uVar9 + lVar36,uVar29 | 7);
          *(undefined **)(puVar34 + 0x10) = puVar7;
          *(undefined **)(puVar34 + 0x18) = puVar31;
          (**(code **)(lVar11 + 0x20))(puVar34 + uVar9,uVar5,uVar19);
          *(code **)(unaff_x22 + 0x240) = FUN_102f07e84;
          *(undefined **)(unaff_x22 + 0x248) = puVar34;
          *(undefined **)(unaff_x22 + 0x220) = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined8 *)(unaff_x22 + 0x228) = 0x42000000;
          *(undefined **)(unaff_x22 + 0x230) = &UNK_10134a1dc;
          *(undefined **)(unaff_x22 + 0x238) = &UNK_1105e6698;
          lVar36 = unaff_x22 + 0x220;
          func_0x000107c60bc4(lVar36);
          uVar25 = *(undefined8 *)(unaff_x22 + 0x248);
          func_0x000107c61174(puVar31);
          func_0x000107c61574(uVar25);
          func_0x000107c615c0(uVar5);
          func_0x000107c5dc64(lVar23);
          func_0x000107c60bd0(lVar36);
          func_0x000107c61170(lVar23);
          func_0x000107c61170(puVar31);
          func_0x0001000b44c0(lStack_90,uVar8);
          pcVar17 = *(code **)(lVar11 + 8);
          goto LAB_102eea4fc;
        }
      }
      (**(code **)(lVar11 + 8))(uVar20,uVar19);
      func_0x0001000b44c0(lStack_90);
      func_0x000107c61170(puVar31);
    }
    else {
      lStack_90 = *(long *)(unaff_x22 + 0x268);
      uVar8 = *(ulong *)(unaff_x22 + 0x270);
      func_0x000100de78a0(lStack_90,uVar8);
      FUN_102f080f0(unaff_x22 + 0x250,0x112f28010,&UNK_10db63be0);
      if (0xe < uVar8 >> 0x3c) goto LAB_102eea340;
      uVar3 = (uint)(uVar8 >> 0x20);
      uVar16 = uVar3 >> 0x1e;
      if (1 < uVar3 >> 0x1e) {
        if (uVar16 == 2) {
          if (*(long *)(lStack_90 + 0x10) != *(long *)(lStack_90 + 0x18)) goto LAB_102eea27c;
        }
        else {
LAB_102eea258:
          func_0x0001000b44c0(lStack_90,uVar8);
        }
        goto LAB_102eea340;
      }
      if (uVar16 == 0) {
        if ((uVar8 & 0xff000000000000) == 0) goto LAB_102eea258;
      }
      else {
        if ((long)(int)lStack_90 == lStack_90 >> 0x20) goto LAB_102eea340;
LAB_102eea27c:
        func_0x000100de78a0(lStack_90,uVar8);
      }
      iVar4 = (int)*(undefined8 *)(*(long *)(unaff_x22 + 0x340) + *(long *)(unaff_x22 + 0x350));
      func_0x000108faa2d8();
      func_0x0001000b44c0(lStack_90,uVar8);
      if (iVar4 == 0) goto LAB_102eea340;
      lVar36 = *(long *)(*(long *)(unaff_x22 + 0x340) + *(long *)(unaff_x22 + 0x378));
      func_0x000107c5bf98();
      func_0x000107c61180();
      if (lVar36 == 0) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x102eeb00c);
        (*pcVar17)();
      }
      lVar21 = lStack_90;
      func_0x000107c5ee20(lStack_90,uVar8);
      lVar23 = lVar21;
      func_0x000107c5ee70();
      func_0x000107c3d8c8(lVar36);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(lVar21);
      func_0x000107c615e8(lVar36);
      func_0x0001000b44c0(lStack_90,uVar8);
      func_0x000107c61170(puVar31);
      pcVar17 = *(code **)(lVar11 + 8);
LAB_102eea4fc:
      (*pcVar17)(uVar20);
      uVar8 = uVar19;
    }
    func_0x000107c615c0(uVar20);
LAB_102eea538:
    lVar11 = *(long *)(*(long *)(unaff_x22 + 0x340) + *(long *)(unaff_x22 + 0x388));
    func_0x000107c4c95c();
    func_0x000107c61180();
    lVar36 = lVar11;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    if (lVar36 != 0) {
      uVar32 = *(undefined8 *)(unaff_x22 + 0x340);
      uVar25 = *(undefined8 *)(*puVar37 + 0x18);
      uVar30 = *(undefined8 *)(*puVar37 + 0x20);
      func_0x000107c61434(uVar30);
      func_0x000107c5fadc(uVar25,uVar30);
      func_0x000107c6142c(uVar30);
      puVar7 = &UNK_1105e5fa0;
      func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,uVar32);
      puVar31 = &UNK_1105e6630;
      uVar8 = 0x28;
      func_0x000107c613fc(&UNK_1105e6630,0x28,7);
      *(undefined **)(puVar31 + 0x10) = puVar7;
      *(long *)(puVar31 + 0x18) = lVar24;
      *(undefined8 *)(puVar31 + 0x20) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x210) = 0x102f07e78;
      *(undefined **)(unaff_x22 + 0x218) = puVar31;
      *(undefined **)(unaff_x22 + 0x1f0) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x1f8) = 0x42000000;
      *(undefined8 *)(unaff_x22 + 0x200) = 0x102f09a60;
      *(undefined **)(unaff_x22 + 0x208) = &UNK_1105e6648;
      lVar11 = unaff_x22 + 0x1f0;
      func_0x000107c60bc4(lVar11);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x218);
      func_0x000107c61434(uVar18);
      func_0x000107c61574(uVar30);
      func_0x000107c5bb14(lVar36);
      func_0x000107c60bd0(lVar11);
      func_0x000107c61170(uVar25);
      func_0x000107c615e8(lVar36);
    }
    puVar31 = *(undefined **)(*(long *)(unaff_x22 + 0x338) + 0x48);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar31 != (undefined *)0x0) {
      puVar7 = puVar31;
    }
    if ((ulong)puVar7 >> 0x3e == 0) {
      puVar34 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar34 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar7) {
        puVar34 = puVar7;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(puVar31);
    func_0x000107c6142c(puVar7);
    if (0 < (long)puVar34) {
      uVar5 = *puVar37;
      func_0x000107c6157c(uVar5);
      uVar25 = 0x112f27e30;
      func_0x0001000285a8(0x112f27e30,&UNK_10db63930);
      uVar8 = uVar5;
      func_0x000100087bd4((long *)(unaff_x22 + 800),FUN_102f09a68,uVar5,uVar25);
      func_0x000107c61574(uVar5);
      lVar36 = *(long *)(unaff_x22 + 800);
      if (lVar36 != 0) {
        uVar25 = *(undefined8 *)(unaff_x22 + 0x340);
        puVar22 = *(undefined8 **)(unaff_x22 + 0x338);
        puVar7 = &UNK_1105e5fa0;
        func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
        func_0x000107c61614(puVar7 + 0x10,uVar25);
        puVar31 = &UNK_1105e65e0;
        func_0x000107c613fc(&UNK_1105e65e0,200,7);
        *(undefined **)(puVar31 + 0x10) = puVar7;
        *(long *)(puVar31 + 0x18) = lVar24;
        *(undefined8 *)(puVar31 + 0x20) = uVar18;
        *(undefined **)(puVar31 + 0x28) = puVar6;
        uVar32 = *puVar22;
        uVar30 = puVar22[3];
        uVar25 = puVar22[2];
        *(undefined8 *)(puVar31 + 0x38) = puVar22[1];
        *(undefined8 *)(puVar31 + 0x30) = uVar32;
        *(undefined8 *)(puVar31 + 0x48) = uVar30;
        *(undefined8 *)(puVar31 + 0x40) = uVar25;
        uVar30 = puVar22[5];
        uVar25 = puVar22[4];
        uVar28 = puVar22[7];
        uVar32 = puVar22[6];
        uVar39 = puVar22[8];
        uVar38 = puVar22[0xb];
        uVar33 = puVar22[10];
        *(undefined8 *)(puVar31 + 0x78) = puVar22[9];
        *(undefined8 *)(puVar31 + 0x70) = uVar39;
        *(undefined8 *)(puVar31 + 0x88) = uVar38;
        *(undefined8 *)(puVar31 + 0x80) = uVar33;
        *(undefined8 *)(puVar31 + 0x58) = uVar30;
        *(undefined8 *)(puVar31 + 0x50) = uVar25;
        *(undefined8 *)(puVar31 + 0x68) = uVar28;
        *(undefined8 *)(puVar31 + 0x60) = uVar32;
        uVar30 = puVar22[0xd];
        uVar25 = puVar22[0xc];
        uVar28 = puVar22[0xf];
        uVar32 = puVar22[0xe];
        uVar38 = puVar22[0x11];
        uVar33 = puVar22[0x10];
        *(undefined8 *)(puVar31 + 0xc0) = puVar22[0x12];
        *(undefined8 *)(puVar31 + 0xa8) = uVar28;
        *(undefined8 *)(puVar31 + 0xa0) = uVar32;
        *(undefined8 *)(puVar31 + 0xb8) = uVar38;
        *(undefined8 *)(puVar31 + 0xb0) = uVar33;
        *(undefined8 *)(puVar31 + 0x98) = uVar30;
        *(undefined8 *)(puVar31 + 0x90) = uVar25;
        *(code **)(unaff_x22 + 0x1e0) = FUN_102f07e68;
        *(undefined **)(unaff_x22 + 0x1e8) = puVar31;
        *(undefined **)(unaff_x22 + 0x1c0) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x1c8) = 0x42000000;
        *(undefined8 *)(unaff_x22 + 0x1d0) = 0x102f09a64;
        *(undefined **)(unaff_x22 + 0x1d8) = &UNK_1105e65f8;
        lVar24 = unaff_x22 + 0x1c0;
        func_0x000107c60bc4(lVar24);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x1e8);
        uVar8 = unaff_x22 + 0xa8;
        FUN_102f04d58(puVar22);
        func_0x000107c61434(uVar18);
        func_0x000107c6157c(puVar6);
        func_0x000107c61574(uVar25);
        func_0x000107c4db80(lVar36);
        func_0x000107c60bd0(lVar24);
        func_0x000107c61170(lVar36);
      }
    }
    *(undefined8 *)(unaff_x22 + 0x3d8) = uVar27;
    lVar36 = *(long *)(*puVar37 + 0x10);
    func_0x000107c4008c();
    func_0x000107c61180();
    lVar24 = lVar36;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar36);
    if (lVar24 != 0) {
      lVar36 = lVar24;
      func_0x000107c4a8c4(lVar24);
      func_0x000107c61180();
      lVar11 = lVar36;
      func_0x000107c5faec();
      func_0x000107c61170(lVar36);
      uVar5 = uVar8;
      func_0x000107c5ee08(lVar11,uVar8,0);
      uVar19 = uVar5;
      func_0x000107c6142c(uVar8);
      if (uVar5 >> 0x3c < 0xf) {
        lVar36 = lVar24;
        func_0x000107c4a804();
        func_0x000107c61180();
        lVar21 = lVar36;
        func_0x000107c5faec();
        func_0x000107c61170(lVar36);
        uVar8 = uVar19;
        func_0x000107c5ee08(lVar21,uVar19,0);
        func_0x000107c6142c(uVar19);
        if (uVar8 >> 0x3c < 0xf) {
          lVar36 = *(long *)(*puVar37 + 0x28);
          func_0x000107c61174();
          func_0x0001000d224c(unaff_x22 + 0x318);
          lVar23 = *(long *)(unaff_x22 + 0x318);
          if (lVar23 != 0) {
            lVar35 = *(long *)(unaff_x22 + 0x338);
            lVar12 = lVar11;
            func_0x000107c5ee20(lVar11,uVar5);
            lVar13 = lVar21;
            func_0x000107c5ee20(lVar21,uVar8);
            uVar20 = *(ulong *)(lVar35 + 0x10);
            uVar19 = uVar20;
            puVar6 = PTR_s_respondsToSelector__11262c7e0;
            func_0x000107c61150(uVar20,PTR_s_respondsToSelector__11262c7e0,
                                PTR_s_externalContentData_1125c5168);
            if ((uVar19 & 1) == 0) {
LAB_102eeaa5c:
              uVar19 = 0;
            }
            else {
              func_0x000107c42c80();
              func_0x000107c61180();
              if (uVar20 == 0) goto LAB_102eeaa5c;
              uVar29 = uVar20;
              func_0x000107c5ee30();
              func_0x000107c61170(uVar20);
              uVar19 = uVar29;
              func_0x000107c5ee20(uVar29,puVar6);
              func_0x00010006c090(uVar29);
            }
            lVar35 = lVar23;
            func_0x000107c4edbc();
            func_0x000107c61180();
            func_0x000107c61170(uVar19);
            func_0x000107c61170(lVar13);
            func_0x000107c61170(lVar12);
            func_0x000107c615e8(lVar23);
            if (lVar35 == 0) {
              func_0x000107c61170(lVar24);
              func_0x0001000b44c0(lVar11,uVar5);
              func_0x0001000b44c0(lVar21,uVar8);
              func_0x000107c61170(lVar36);
            }
            else {
              func_0x000107c61174(lVar35);
              lVar23 = lVar35;
              func_0x0001040130b8();
              func_0x000107c61170(lVar35);
              if ((ulong)puVar6 >> 0x3c < 0xf) {
                uVar18 = *(undefined8 *)(*puVar37 + 0x10);
                func_0x000107c4008c(uVar18);
                func_0x000107c61180();
                lVar12 = lVar23;
                func_0x000107c5ee20(lVar23,puVar6);
                func_0x000107c56010(uVar18);
                func_0x000107c61170(lVar24);
                func_0x0001000b44c0(lVar11,uVar5);
                func_0x0001000b44c0(lVar21,uVar8);
                func_0x000107c61170(lVar35);
                func_0x000107c61170(lVar36);
                func_0x000107c61170(lVar12);
                func_0x000107c61170(uVar18);
                func_0x0001000b44c0(lVar23,puVar6);
              }
              else {
                func_0x000107c61170(lVar24);
                func_0x0001000b44c0(lVar11,uVar5);
                func_0x0001000b44c0(lVar21,uVar8);
                func_0x000107c61170(lVar36);
                func_0x000107c61170(lVar35);
              }
            }
            goto LAB_102eea8ec;
          }
          func_0x000107c61170(lVar24);
          func_0x0001000b44c0(lVar11,uVar5);
          func_0x0001000b44c0(lVar21,uVar8);
          lVar24 = lVar36;
        }
        else {
          func_0x0001000b44c0(lVar11,uVar5);
        }
      }
      func_0x000107c61170(lVar24);
    }
LAB_102eea8ec:
    lVar24 = *(long *)(unaff_x22 + 0x338);
    func_0x0001000d224c(unaff_x22 + 0x2f8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar18 = uVar25;
    func_0x000107c43c88();
    *(char *)(unaff_x22 + 0x17b) = (char)uVar18;
    func_0x000107c615e8(uVar25);
    lVar24 = *(long *)(lVar24 + 0x28);
    *(long *)(unaff_x22 + 0x2e8) = lVar24;
    if (lVar24 != 0) {
      uVar5 = *(ulong *)(*puVar37 + 0x10);
      FUN_102f059cc(unaff_x22 + 0x2e8,unaff_x22 + 0x300,0x112f28030,&UNK_10db63a70);
      func_0x000107c61174();
      uVar8 = uVar5;
      FUN_102f17f50();
      func_0x000107c61170(uVar5);
      if ((uVar8 & 1) != 0) {
        lVar36 = *(long *)(unaff_x22 + 0x348);
        if (lVar36 != 0) {
          func_0x000107c615f0(lVar36);
          puVar6 = PTR_PTR_1126c33d0;
          func_0x000107c61168(PTR_PTR_1126c33d0);
          func_0x000107c6148c(lVar36,puVar6);
          if (lVar36 == 0) {
            func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x348));
          }
        }
        lVar11 = lVar36;
        FUN_102f180b0(lVar36);
        func_0x000107c61170(lVar36);
        puVar6 = PTR_PTR_1126ac788;
        func_0x000107c610f8();
        lVar36 = lVar11;
        func_0x000107c5fc48(lVar11,PTR___sSSN_11034da80);
        func_0x000107c6142c(lVar11);
        func_0x000107c47c6c();
        *(undefined **)(unaff_x22 + 0x3e0) = puVar6;
        func_0x000107c61170(lVar36);
        uVar5 = *(ulong *)(*puVar37 + 0x10);
        func_0x000107c5b1f8();
        func_0x000107c61180();
        uVar18 = 0;
        FUN_102f09540(0,0x112d54e00,&PTR_PTR_1126bcf68);
        *(undefined8 *)(unaff_x22 + 1000) = uVar18;
        uVar8 = uVar5;
        func_0x000107c5fc54(uVar5,uVar18);
        func_0x000107c61170(uVar5);
        if ((uVar8 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar8 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x102eeb008);
            (*pcVar17)();
          }
          uVar18 = *(undefined8 *)(uVar8 + 0x20);
          func_0x000107c61174(uVar18);
        }
        else {
          uVar18 = 0;
          func_0x000102f02874(0,uVar8,&PTR_PTR_1126bcf68,0x112d54e00);
        }
        func_0x000107c6142c(uVar8);
        func_0x0001000285a8(0x112ebe818,&UNK_10dada750);
        func_0x000107c4dcc4();
        func_0x000107c61180();
        func_0x000107c61170(uVar18);
        lVar36 = lVar24;
        func_0x000103edf20c();
        *(long *)(unaff_x22 + 0x3f0) = lVar36;
        func_0x000107c61170(lVar24);
        plVar14 = (long *)0x80;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x3f8) = plVar14;
        *plVar14 = unaff_x22;
        plVar14[1] = (long)FUN_102ee96e8;
                    /* WARNING: Could not recover jumptable at 0x000102eeaf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        FUN_102f03cf8();
        return;
      }
      FUN_102f080f0(unaff_x22 + 0x2e8,0x112f28030,&UNK_10db63a70);
    }
  } while( true );
}



/* Entry: 102eeb010; end: 102eeb143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eeb010(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_68 [24];
  
  puVar6 = auStack_68;
  func_0x000107c61428(param_3 + 0x10,puVar6,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174();
      func_0x000107c60bb4(0x3fe999999999999a);
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar2 = param_1;
        func_0x000107c5ee30();
        func_0x000107c61170(param_1);
        lVar3 = *(long *)(param_3 + _DAT_112f27f18);
        func_0x000107c5bf98();
        func_0x000107c61180();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102eeb144);
          (*pcVar1)();
        }
        lVar4 = lVar2;
        func_0x000107c5ee20(lVar2,puVar6);
        lVar5 = lVar4;
        func_0x000107c5ee70();
        func_0x000107c3d8c8(lVar3);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar5);
        func_0x00010006c090(lVar2,puVar6);
      }
      func_0x000107c61170(param_3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102eeb144; end: 102eeb393;  */

/* WARNING: Possible PIC construction at 0x000102eeb250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102eeb254) */

void FUN_102eeb144(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c5cd20();
  if (0 < lVar1) {
    lVar1 = param_1;
    func_0x000107c3ff10();
    lVar2 = param_1;
    func_0x000107c5cd20();
    pcVar3 = "send(with:)";
    func_0x0001000c10c0("send(with:)");
    func_0x000107c61180();
    puVar4 = &UNK_1105e66d0;
    func_0x000107c613fc(&UNK_1105e66d0,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = param_3;
    *(double *)(puVar4 + 0x18) = (double)lVar1 / (double)lVar2;
    *(undefined8 *)(puVar4 + 0x20) = param_4;
    *(undefined8 *)(puVar4 + 0x28) = param_5;
    pcStack_60 = FUN_102f07ed4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1105e66e8;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar4 = puStack_58;
    func_0x000107c6157c(param_3);
    func_0x000107c61434(param_5);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102eeb394; end: 102eeb597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eeb394(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 != 0) {
      lVar5 = *(long *)(*(long *)(param_3 + _DAT_112f27f10) + _DAT_112ff2c78);
      func_0x000107c61174(param_1);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar5 != 0) {
        uVar2 = param_4;
        func_0x000107c5fadc(param_4,param_5);
        func_0x000107c49c14(param_1);
        func_0x000107c5d628(lVar5);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(uVar2);
      }
      func_0x000107c61428(param_6 + 0x10,auStack_80,0,0);
      lVar4 = *(long *)(param_6 + 0x10);
      lVar5 = lVar4;
      func_0x000107c6157c();
      FUN_102f1b6e8();
      func_0x000107c61574(lVar4);
      if (lVar5 != 0) {
        lVar5 = *(long *)(param_3 + _DAT_112f27f18);
        func_0x000107c5bf64();
        func_0x000107c61180();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102eeb598);
          (*pcVar1)();
        }
        lVar4 = lVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar4 != 0) {
          lVar5 = param_1;
          func_0x000107c412d0(param_1);
          func_0x000107c61180();
          lVar3 = lVar5;
          func_0x000107c5ee30();
          func_0x000107c61170(lVar5);
          lVar5 = lVar3;
          func_0x000107c5ee20(lVar3,param_4);
          func_0x00010006c090(lVar3,param_4);
          func_0x000107c516bc(lVar4);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(lVar5);
        }
        func_0x000107c61170(param_3);
        param_3 = param_1;
      }
      func_0x000107c61170(param_3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102eeb598; end: 102eeb60f;  */

/* WARNING: Possible PIC construction at 0x000102eeb5f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102eeb5f8) */

void FUN_102eeb598(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 102eeb610; end: 102eed21f;  */

/* WARNING: Removing unreachable block (ram,0x000102eeb7d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eeb610(double param_1,long param_2,long param_3,undefined *param_4,uint param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  long *plVar18;
  long extraout_x8;
  long lVar19;
  long lVar20;
  long extraout_x8_00;
  long extraout_x12;
  undefined4 uVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  uint uVar26;
  long unaff_x20;
  code *pcVar27;
  undefined *puVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined **ppuVar33;
  undefined *puVar34;
  ulong auStack_250 [16];
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  code *pcStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  code *pcStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  long *plStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined *puStack_110;
  undefined *puStack_f0;
  long *plStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long alStack_c0 [4];
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar5 = 0x112d373d8;
  puStack_110 = (undefined *)param_2;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar19 = (long)&puStack_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_120 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - extraout_x12;
  lVar5 = 0;
  uStack_118 = lVar19;
  func_0x000107c5eea4();
  lVar20 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  lVar19 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar30 = *(ulong *)(param_2 + 0x10);
  uVar31 = uVar30;
  func_0x000107c5b1f8();
  func_0x000107c61180();
  uVar6 = 0;
  FUN_102f09540(0,0x112d54e00,&PTR_PTR_1126bcf68);
  uVar23 = uVar31;
  func_0x000107c5fc54(uVar31,uVar6);
  func_0x000107c61170(uVar31);
  uStack_128 = uVar30;
  if ((uVar23 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar23 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x102eec1dc);
      (*pcVar27)();
    }
    lVar7 = *(long *)(uVar23 + 0x20);
    func_0x000107c61174();
  }
  else {
    lVar7 = 0;
    uVar6 = uVar23;
    func_0x000102f02874(0,uVar23,&PTR_PTR_1126bcf68,0x112d54e00);
  }
  func_0x000107c6142c(uVar23);
  lVar14 = lVar7;
  func_0x000107c3eea8();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  lVar7 = lVar14;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar14);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  lVar14 = lVar7;
  func_0x0001010282b0(lVar7,uVar6);
  func_0x00010006c090(lVar7,uVar6);
  if (lVar14 == 0) {
    return;
  }
  uStack_1b0 = 0;
  lStack_160 = lVar14;
  func_0x000107c5ca90();
  func_0x000107c61180();
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar27 = (code *)SoftwareBreakpoint(1,0x102eed210);
    (*pcVar27)();
  }
  func_0x000107c5eea0(lVar19);
  func_0x000107c5ee8c();
  pcVar27 = *(code **)(lVar20 + 8);
  (*pcVar27)(lVar19,lVar5);
  puVar28 = puStack_110;
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar27 = (code *)SoftwareBreakpoint(1,0x102eec1e4);
    (*pcVar27)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar27 = (code *)SoftwareBreakpoint(1,0x102eec1e8);
    (*pcVar27)();
  }
  if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
    pcVar27 = (code *)SoftwareBreakpoint(1,0x102eec1ec);
    (*pcVar27)();
  }
  func_0x000107c59340(lVar14);
  func_0x000107c61170(lVar14);
  puVar22 = *(undefined **)(param_3 + 0x38);
  pcStack_1a8 = pcVar27;
  if (puVar22 == (undefined *)0x0) {
    puStack_148 = (undefined *)0x0;
    puVar25 = (undefined *)0x0;
    puStack_138 = (undefined *)0x0;
    plStack_140 = *(long **)((long)puVar28 + 0x18);
    uStack_130 = *(undefined8 *)((long)puVar28 + 0x20);
  }
  else {
    func_0x000107c615f4(puVar22,2);
    puVar25 = PTR_PTR_1126c33d0;
    func_0x000107c61168(PTR_PTR_1126c33d0);
    puVar34 = puVar22;
    func_0x000107c6148c(puVar22,puVar25);
    if (puVar34 == (undefined *)0x0) {
      func_0x000107c615e8(puVar22);
    }
    puVar25 = puVar34;
    func_0x000107c5bf40();
    func_0x000107c61180();
    func_0x000107c61170(puVar34);
    if ((*(byte *)(param_3 + 0x62) & 1) == 0) {
      if (puVar25 == (undefined *)0x0) {
        puStack_148 = (undefined *)0x0;
      }
      else {
        lVar7 = *(long *)(unaff_x20 + _DAT_112f27f50);
        func_0x000107c5b8c0();
        func_0x000107c61180();
        puStack_148 = *(undefined **)(lVar7 + _DAT_112ff5868);
        func_0x000107c61174();
        func_0x000107c61170(lVar7);
      }
    }
    else {
      func_0x000107c61174(puVar25);
      puStack_148 = puVar25;
    }
    plStack_140 = *(long **)((long)puVar28 + 0x18);
    uStack_130 = *(undefined8 *)((long)puVar28 + 0x20);
    puVar34 = PTR_PTR_1126c33d0;
    func_0x000107c61168(PTR_PTR_1126c33d0);
    puVar24 = puVar22;
    func_0x000107c6148c(puVar22,puVar34);
    puStack_138 = puVar24;
    if (puVar24 == (undefined *)0x0) {
      func_0x000107c615e8(puVar22);
      puStack_138 = (undefined *)0x0;
    }
  }
  puVar34 = *(undefined **)(unaff_x20 + _DAT_112f27f00);
  uVar23 = *(ulong *)(param_3 + 0x10);
  uVar31 = uVar23;
  puVar22 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(uVar23,PTR_s_respondsToSelector__11262c7e0,PTR_s_sendSessionId_112634c60);
  if ((uVar31 & 1) == 0) {
LAB_102eeba54:
    uStack_1a0 = 0;
    puStack_150 = (undefined *)0x0;
  }
  else {
    func_0x000107c51e48();
    func_0x000107c61180();
    if (uVar23 == 0) goto LAB_102eeba54;
    uVar31 = uVar23;
    func_0x000107c5faec();
    uStack_1a0 = uVar31;
    puStack_150 = puVar22;
    func_0x000107c61170(uVar23);
  }
  puVar22 = puStack_138;
  lStack_1b8 = *(long *)(param_3 + 0x40);
  puVar24 = *(undefined **)((long)puVar28 + 0x88);
  bVar2 = *(byte *)((long)puVar28 + 0x90);
  uVar31 = (ulong)bVar2;
  uVar29 = (uint)bVar2;
  uStack_198 = *(undefined8 *)(param_3 + 0x80);
  puStack_170 = *(undefined **)(param_3 + 0x88);
  puStack_158 = (undefined *)CONCAT44(puStack_158._4_4_,(uint)bVar2);
  puStack_180 = puVar25;
  puStack_178 = param_4;
  puStack_168 = puVar24;
  if (param_4 == (undefined *)0x0) {
    FUN_102edda70(puVar24,uVar31);
    puStack_190 = (undefined *)0x0;
    puVar22 = puStack_138;
LAB_102eebc5c:
    uVar29 = (uint)uVar31;
    uVar26 = (uint)(puVar24 == (undefined *)0x1);
    if ((puVar24 == (undefined *)0x1) || ((uVar31 & 1) != 0)) {
      if (puVar22 == (undefined *)0x0) {
        puStack_188 = (undefined *)0x0;
        bVar3 = true;
        puVar28 = puStack_190;
      }
      else {
        func_0x000107c4fa70();
        func_0x000107c61180();
        if (puVar22 == (undefined *)0x0) {
          bVar3 = false;
          puStack_188 = (undefined *)0x0;
          puVar28 = puStack_190;
        }
        else {
          puVar28 = puVar22;
          func_0x000107c5fc54();
          func_0x000107c61170(puVar22);
          puStack_188 = *(undefined **)(puVar28 + 0x10);
          func_0x000107c6142c(puVar28);
          bVar3 = false;
          puVar28 = puStack_190;
        }
      }
LAB_102eebd04:
      puStack_190 = puVar28;
      func_0x000107c5b4dc();
      func_0x000107c61180();
      if (puVar34 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar27 = (code *)SoftwareBreakpoint(1,0x102eed21c);
        (*pcVar27)();
      }
      pcStack_1c0 = (code *)CONCAT44(pcStack_1c0._4_4_,uVar26);
      puVar25 = puVar34;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(puVar34);
      puVar22 = puStack_138;
      puVar28 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar25 == (undefined *)0x0) {
        puVar22 = (undefined *)0x0;
      }
      else {
        puVar34 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puStack_1c8 = puVar25;
        if (!bVar3) {
          puVar24 = puStack_138;
          func_0x000107c4455c();
          func_0x000107c61180();
          puVar25 = PTR___sypN_11034f1a8;
          puVar34 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar24 != (undefined *)0x0) {
            puVar22 = puVar24;
            func_0x000107c5fc54();
            func_0x000107c61170(puVar24);
            lVar7 = *(long *)(puVar22 + 0x10);
            puVar34 = PTR___swiftEmptyArrayStorage_11034f1c8;
            puStack_1d0 = puVar22;
            if (lVar7 != 0) {
              do {
                puVar22 = puVar22 + 0x20;
                func_0x0001000bb420(puVar22,&puStack_f0);
                func_0x000100102924(&puStack_f0,&lStack_a0);
                uVar12 = 0x112d6dfd0;
                func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
                plVar9 = alStack_c0;
                func_0x000107c6147c(plVar9,&lStack_a0,puVar25 + 8,uVar12,6);
                lVar14 = alStack_c0[0];
                if ((((ulong)plVar9 & 1) != 0) && (alStack_c0[0] != 0)) {
                  puVar24 = puVar34;
                  func_0x000107c61550();
                  if (((int)puVar24 == 0) ||
                     (((long)puVar34 < 0 || (puVar24 = puVar34, ((ulong)puVar34 >> 0x3e & 1) != 0)))
                     ) {
                    if ((ulong)puVar34 >> 0x3e == 0) {
                      puVar8 = *(undefined **)(((ulong)puVar34 & 0xffffffffffffff8) + 0x10);
                    }
                    else {
                      puVar8 = (undefined *)((ulong)puVar34 & 0xffffffffffffff8);
                      if ((undefined *)0x7fffffffffffffff < puVar34) {
                        puVar8 = puVar34;
                      }
                      func_0x000107c60480(puVar8);
                    }
                    puVar24 = (undefined *)0x0;
                    func_0x000101bcad64(0,puVar8 + 1,1,puVar34);
                  }
                  uVar23 = (ulong)puVar24 & 0xffffffffffffff8;
                  uVar31 = *(ulong *)(uVar23 + 0x10);
                  puVar34 = puVar24;
                  if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar31) {
                    puVar34 = (undefined *)(ulong)(1 < *(ulong *)(uVar23 + 0x18));
                    func_0x000101bcad64(puVar34,uVar31 + 1,1,puVar24);
                    uVar23 = (ulong)puVar34 & 0xffffffffffffff8;
                  }
                  *(ulong *)(uVar23 + 0x10) = uVar31 + 1;
                  *(long *)(uVar23 + uVar31 * 8 + 0x20) = lVar14;
                }
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
            }
            func_0x000107c6142c(puStack_1d0);
            puVar22 = puStack_138;
            uVar29 = (uint)puStack_158;
          }
          func_0x000107c4fa70();
          func_0x000107c61180();
          puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar22 != (undefined *)0x0) {
            puVar28 = puVar22;
            func_0x000107c5fc54();
            func_0x000107c61170(puVar22);
            lVar7 = *(long *)(puVar28 + 0x10);
            puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
            puStack_1d0 = puVar28;
            if (lVar7 != 0) {
              do {
                puVar28 = puVar28 + 0x20;
                func_0x0001000bb420(puVar28,&puStack_f0);
                func_0x000100102924(&puStack_f0,&lStack_a0);
                uVar12 = 0x112d6dfc8;
                func_0x0001000285a8(0x112d6dfc8,&UNK_10d9301c0);
                plVar9 = alStack_c0;
                func_0x000107c6147c(plVar9,&lStack_a0,puVar25 + 8,uVar12,6);
                lVar14 = alStack_c0[0];
                if ((((ulong)plVar9 & 1) != 0) && (alStack_c0[0] != 0)) {
                  puVar22 = puVar24;
                  func_0x000107c61550();
                  if (((int)puVar22 == 0) ||
                     (((long)puVar24 < 0 || (puVar22 = puVar24, ((ulong)puVar24 >> 0x3e & 1) != 0)))
                     ) {
                    if ((ulong)puVar24 >> 0x3e == 0) {
                      puVar8 = *(undefined **)(((ulong)puVar24 & 0xffffffffffffff8) + 0x10);
                    }
                    else {
                      puVar8 = (undefined *)((ulong)puVar24 & 0xffffffffffffff8);
                      if ((undefined *)0x7fffffffffffffff < puVar24) {
                        puVar8 = puVar24;
                      }
                      func_0x000107c60480(puVar8);
                    }
                    puVar22 = (undefined *)0x0;
                    FUN_102ed62e0(0,puVar8 + 1,1,puVar24);
                  }
                  uVar23 = (ulong)puVar22 & 0xffffffffffffff8;
                  uVar31 = *(ulong *)(uVar23 + 0x10);
                  puVar24 = puVar22;
                  if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar31) {
                    puVar24 = (undefined *)(ulong)(1 < *(ulong *)(uVar23 + 0x18));
                    FUN_102ed62e0(puVar24,uVar31 + 1,1,puVar22);
                    uVar23 = (ulong)puVar24 & 0xffffffffffffff8;
                  }
                  *(ulong *)(uVar23 + 0x10) = uVar31 + 1;
                  *(long *)(uVar23 + uVar31 * 8 + 0x20) = lVar14;
                }
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
            }
            func_0x000107c6142c(puStack_1d0);
            puVar28 = PTR___swiftEmptyArrayStorage_11034f1c8;
            uVar29 = (uint)puStack_158;
          }
        }
        uVar12 = 0x112d6dfd0;
        func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
        puVar25 = puVar34;
        func_0x000107c5fc48(puVar34,uVar12);
        func_0x000107c6142c(puVar34);
        if ((ulong)puVar24 >> 0x3e == 0) {
          puVar22 = *(undefined **)(((ulong)puVar24 & 0xffffffffffffff8) + 0x10);
          if (puVar22 == (undefined *)0x0) goto LAB_102eec208;
LAB_102eec0ac:
          puVar34 = (undefined *)((ulong)puVar22 & ((long)puVar22 >> 0x3f ^ 0xffffffffffffffffU));
          puStack_1d0 = puVar25;
          puStack_f0 = puVar28;
          func_0x000100403514(0,puVar34,0);
          if ((long)puVar22 < 0) {
                    /* WARNING: Does not return */
            pcVar27 = (code *)SoftwareBreakpoint(1,0x102eed208);
            (*pcVar27)();
          }
          puVar28 = (undefined *)0x0;
          do {
            puVar25 = puStack_f0;
            if (((ulong)puVar24 & 0xc000000000000001) == 0) {
              if (*(long *)(((ulong)puVar24 & 0xffffffffffffff8) + 0x10) <= (long)puVar28) {
                    /* WARNING: Does not return */
                pcVar27 = (code *)SoftwareBreakpoint(1,0x102eec1e0);
                (*pcVar27)();
              }
              puVar8 = *(undefined **)(puVar24 + (long)puVar28 * 8 + 0x20);
              func_0x000107c615f0(puVar8);
              puVar17 = puVar34;
            }
            else {
              puVar8 = puVar28;
              puVar17 = puVar24;
              FUN_102f02de8();
            }
            puVar10 = puVar8;
            func_0x000107c4d3e4();
            func_0x000107c61180();
            if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar27 = (code *)SoftwareBreakpoint(1,0x102eed20c);
              (*pcVar27)();
            }
            puVar11 = puVar10;
            func_0x000107c5faec();
            puVar34 = puVar17;
            func_0x000107c615e8(puVar8);
            func_0x000107c61170(puVar10);
            uVar31 = *(ulong *)(puVar25 + 0x10);
            puVar8 = (undefined *)(uVar31 + 1);
            puStack_f0 = puVar25;
            if (*(ulong *)(puVar25 + 0x18) >> 1 <= uVar31) {
              puVar34 = puVar8;
              func_0x000100403514(1 < *(ulong *)(puVar25 + 0x18),puVar8,1);
            }
            puVar10 = puStack_f0;
            puVar28 = puVar28 + 1;
            *(undefined **)(puStack_f0 + 0x10) = puVar8;
            *(undefined **)(puStack_f0 + uVar31 * 0x10 + 0x20) = puVar11;
            *(undefined **)(puStack_f0 + uVar31 * 0x10 + 0x28) = puVar17;
          } while (puVar22 != puVar28);
          func_0x000107c6142c(puVar24);
          puVar25 = puStack_1d0;
          uVar29 = (uint)puStack_158;
        }
        else {
          puVar22 = (undefined *)((ulong)puVar24 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar24) {
            puVar22 = puVar24;
          }
          func_0x000107c60480();
          if (puVar22 != (undefined *)0x0) goto LAB_102eec0ac;
LAB_102eec208:
          func_0x000107c6142c(puVar24);
          puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        puVar34 = puVar10;
        func_0x000107c5fc48(puVar10,PTR___sSSN_11034da80);
        func_0x000107c6142c(puVar10);
        puVar28 = puStack_1c8;
        puVar22 = puVar25;
        func_0x000108605670(puVar25,puVar34,puStack_1c8);
        func_0x000107c61180();
        func_0x000107c61170(puVar25);
        func_0x000107c61170(puVar34);
        if (puVar22 == (undefined *)0x0) {
          puVar25 = (undefined *)0x0;
        }
        else {
          puVar25 = puVar22;
          func_0x000107c4d8d0();
        }
        func_0x000107c615e8(puVar28);
        bVar3 = SCARRY8((long)puStack_188,(long)puVar25);
        puStack_188 = puStack_188 + (long)puVar25;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar27 = (code *)SoftwareBreakpoint(1,0x102eed204);
          (*pcVar27)();
        }
      }
      puVar28 = puStack_188;
      param_4 = puStack_190;
      puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (((((uint)pcStack_1c0 | uVar29) & 1) != 0) && (lStack_1b8 != 0)) {
        puVar25 = *(undefined **)(lStack_1b8 + _DAT_11307fc80);
        func_0x000107c61434(puVar25);
      }
    }
    else {
      puVar28 = (undefined *)0x0;
      puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
      param_4 = puStack_190;
      puVar22 = (undefined *)0x0;
    }
  }
  else {
    if (puStack_138 != (undefined *)0x0) {
      uVar12 = *(undefined8 *)(param_3 + 0x50);
      uVar32 = *(undefined8 *)(param_3 + 0x58);
      puStack_190 = (undefined *)CONCAT44(puStack_190._4_4_,(uint)*(byte *)(param_3 + 0x60));
      puStack_188 = puVar34;
      FUN_102edda70(puVar24,uVar31);
      puVar28 = puVar22;
      func_0x000107c61174(puVar22);
      puVar25 = param_4;
      func_0x000107c61174(param_4);
      puVar34 = puVar28;
      func_0x000102f18da0(puVar28,uVar12,uVar32,param_5 & 1,puVar24,uVar31);
      puVar24 = PTR_PTR_1126c4588;
      func_0x000107c61168();
      func_0x000107c5b178();
      func_0x000107c61180();
      if (puVar24 == (undefined *)0x0) {
        func_0x000107c61170(puVar34);
        func_0x000107c61170(puVar28);
        puStack_190 = param_4;
      }
      else {
        func_0x000107176780(puVar34,puVar24);
        func_0x000107c5e488(puVar24);
        func_0x000107c61180();
        func_0x000107c61170();
        puVar8 = puVar24;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        puStack_190 = puVar8;
        if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar27 = (code *)SoftwareBreakpoint(1,0x102eed220);
          (*pcVar27)();
        }
        func_0x000107c61170(puVar25);
        func_0x000107c61170(puVar24);
        func_0x000107c61170(puVar34);
        func_0x000107c61170(puVar28);
      }
      uVar31 = (ulong)puStack_158 & 0xffffffff;
      puVar24 = puStack_168;
      puVar34 = puStack_188;
      goto LAB_102eebc5c;
    }
    FUN_102edda70(puVar24,uVar31);
    func_0x000107c61174(param_4);
    puStack_188 = (undefined *)0x0;
    bVar3 = true;
    uVar26 = (uint)(puVar24 == (undefined *)0x1);
    puVar28 = param_4;
    if ((puVar24 == (undefined *)0x1) || (puVar28 = param_4, (bVar2 & 1) != 0)) goto LAB_102eebd04;
    puVar28 = (undefined *)0x0;
    puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar22 = puVar28;
  }
  uVar12 = 0;
  func_0x0001044c309c(0);
  puVar34 = puVar25;
  func_0x000107c5fc48(puVar25,uVar12);
  func_0x000107c6142c(puVar25);
  puVar25 = puVar34;
  func_0x0001086063e8(puVar34,puVar28,puVar22);
  func_0x000107c61180();
  func_0x000107c61170(puVar34);
  if (param_4 == (undefined *)0x0) {
    puVar28 = (undefined *)0xffffffffffffffff;
  }
  else {
    puVar28 = param_4;
    func_0x000107c5b634();
  }
  uVar31 = uStack_118;
  func_0x000107c5eea0(uStack_118);
  pcVar27 = *(code **)(lVar20 + 0x38);
  (*pcVar27)(uVar31,0,1,lVar5);
  if (param_4 != (undefined *)0x0) {
    func_0x000107c4b414();
  }
  puVar34 = (undefined *)0x0;
  if ((puVar28 < (undefined *)0x1b) && ((1L << ((ulong)puVar28 & 0x3f) & 0x4013800U) != 0)) {
    if (puStack_150 == (undefined *)0x0) {
      uVar31 = 0;
    }
    else {
      uVar31 = uStack_1a0;
      func_0x000107c5fadc(uStack_1a0);
    }
    puVar34 = PTR_PTR_1126cdbf8;
    func_0x000107c610f8();
    func_0x000107c485b4();
    func_0x000107c61170(uVar31);
  }
  plVar9 = plStack_140;
  func_0x000107c5fadc(plStack_140,uStack_130);
  uVar31 = uStack_118;
  uVar23 = uStack_118;
  (**(code **)(lVar20 + 0x30))(uStack_118,1,lVar5);
  if ((int)uVar23 == 1) {
    uVar23 = 0;
  }
  else {
    func_0x000107c5ee70();
    (*pcStack_1a8)(uVar31,lVar5);
  }
  pcStack_1c0 = pcVar27;
  if (puStack_170 == (undefined *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = uStack_198;
    func_0x000107c5fadc();
  }
  puVar24 = PTR_PTR_1126c3300;
  func_0x000107c610f8();
  *(undefined **)(lVar19 + -0x10) = puVar34;
  *(undefined8 *)(lVar19 + -8) = uVar12;
  func_0x000107c4651c();
  func_0x000102edda80(puStack_168,(ulong)puStack_158 & 0xffffffff);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar34);
  func_0x000107c61170(plVar9);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar22);
  func_0x000107c6142c(puStack_150);
  func_0x000107c61170(puStack_138);
  puVar22 = PTR_PTR_1126d34c8;
  func_0x000107c61168();
  puVar28 = PTR_PTR_1126c4910;
  func_0x000107c610f8(PTR_PTR_1126c4910);
  lVar7 = lStack_160;
  func_0x000107c61174(lStack_160);
  func_0x000107c61174();
  func_0x000107c453e4(puVar28);
  lVar20 = lVar7;
  FUN_102eda0f4(lVar7);
  func_0x000107c4f72c();
  func_0x000107c61170(puVar28);
  func_0x000107c61170(lVar20);
  func_0x00010846b19c();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar7);
  lVar20 = _DAT_112f27e48;
  plVar9 = alStack_c0;
  func_0x000107c61428(unaff_x20 + _DAT_112f27e48,plVar9,0,0);
  puVar28 = (undefined *)(unaff_x20 + lVar20);
  func_0x000107c61618();
  if (puVar28 == (undefined *)0x0) {
    puStack_138 = (undefined *)0x0;
  }
  else {
    puVar25 = puVar28;
    func_0x000107c4adfc();
    func_0x000107c61180();
    puStack_138 = puVar25;
    func_0x000107c615e8(puVar28);
  }
  puVar28 = puStack_110;
  uVar31 = uStack_128;
  plVar13 = plStack_140;
  puVar34 = *(undefined **)(*(long *)(unaff_x20 + _DAT_112f27ea8) + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  puVar25 = puVar34;
  func_0x000107c5faec();
  func_0x000107c61170(puVar34);
  plVar18 = plVar9;
  func_0x000107c5fb24();
  func_0x000107c6142c(plVar9);
  puStack_f0 = puVar25;
  plStack_e8 = plVar18;
  func_0x000107c5fb78(0x7e,0xe100000000000000);
  func_0x000107c5fb78(plVar13,uStack_130);
  puStack_158 = puStack_f0;
  plStack_140 = plStack_e8;
  uVar23 = uVar31;
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar6 = uVar23;
  func_0x000107c41844();
  func_0x000107c61180();
  func_0x000107c61170(uVar23);
  uVar23 = uVar6;
  func_0x000107c5bf1c();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar30 = 0;
  FUN_102f09540(0,0x112d51360,&PTR_PTR_1126becd8);
  uVar6 = uVar23;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar23);
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar23 = uVar31;
  func_0x000107c4b828();
  func_0x000107c61180();
  func_0x000107c61170(uVar31);
  if (uVar23 == 0) {
    uStack_128 = 0;
    uStack_118 = 0xf000000000000000;
  }
  else {
    uVar31 = uVar23;
    func_0x000107c5ee30();
    uStack_128 = uVar31;
    uStack_118 = uVar30;
    func_0x000107c61170(uVar23);
  }
  lVar20 = *(long *)((long)puVar28 + 0x68);
  puStack_188 = puVar22;
  puStack_170 = puVar24;
  if (lVar20 == 0) {
    uVar12 = 0x112f27e30;
    func_0x0001000285a8(0x112f27e30,&UNK_10db63930);
    func_0x000100087bd4(&puStack_f0,0x102f09a7c,puVar28,uVar12);
    puVar28 = puStack_f0;
    if (puStack_f0 == (undefined *)0x0) {
      lStack_1b8 = 0;
      uStack_1a0 = 0;
      goto LAB_102eec84c;
    }
    puVar22 = &UNK_1105e67c0;
    func_0x000107c613fc(&UNK_1105e67c0,0x18,7);
    pcStack_1a8 = (code *)((ulong)pcStack_1a8 & 0xffffffff00000000);
    lStack_1b8 = 0;
    uStack_1a0 = 0;
    *(undefined **)(puVar22 + 0x10) = puVar28;
    puStack_150 = (undefined *)0x102f07ef4;
    puStack_110 = puVar22;
  }
  else {
    puVar1 = (undefined8 *)(lVar20 + _DAT_113077640);
    lStack_1b8 = *puVar1;
    uStack_1a0 = puVar1[1];
    func_0x000107c61434();
LAB_102eec84c:
    puStack_110 = (undefined *)0x0;
    puStack_150 = (undefined *)0x0;
    pcStack_1a8 = (code *)CONCAT44(pcStack_1a8._4_4_,1);
  }
  FUN_102f146a0(&lStack_a0,uVar6);
  lVar20 = lStack_a0;
  if (puStack_138 == (undefined *)0x0) {
    puStack_168 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lStack_a0 != 0) goto LAB_102eec994;
LAB_102eec970:
    uVar32 = 0;
  }
  else {
    puVar28 = puStack_138;
    func_0x000107c503a0();
    func_0x000107c61180();
    if (puVar28 == (undefined *)0x0) {
      puStack_168 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar22 = puVar28;
      FUN_102d44750();
      func_0x000107c613fc();
      *(undefined8 *)(puVar22 + 0x18) = 3;
      *(undefined8 *)(puVar22 + 0x10) = 1;
      *(undefined **)(puVar22 + 0x20) = puVar28;
      puStack_168 = puVar22;
    }
    if (lStack_a0 == 0) goto LAB_102eec970;
LAB_102eec994:
    func_0x000107c61174(lVar20);
    func_0x000107c61434(uStack_90);
    func_0x000100de78a0(uStack_88,uStack_80);
    uVar12 = uStack_98;
    func_0x000107c5fadc(uStack_98,uStack_90);
    uVar32 = uVar12;
    func_0x000107d6b0b0();
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
    FUN_102f080f0(&lStack_a0,0x112f28010,&UNK_10db63be0);
  }
  uVar31 = uStack_120;
  puVar28 = puStack_178;
  uStack_198 = *(undefined8 *)(unaff_x20 + _DAT_112f27f50);
  func_0x000107c5fadc(plVar13,uStack_130);
  puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_130 = plVar13;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  uVar23 = uVar6;
  puStack_190 = puVar22;
  FUN_102f1af1c();
  if (uVar23 == 0) {
    uStack_1b0 = 0;
  }
  else {
    uVar12 = 0;
    FUN_102f09540(0,0x112f28050,&PTR_PTR_1126cf408);
    uVar30 = uVar23;
    func_0x000107c5f9dc(uVar23,PTR___sSSN_11034da80,uVar12,PTR___sSSSHsWP_11034da90);
    uStack_1b0 = uVar30;
    func_0x000107c6142c(uVar23);
  }
  puVar22 = puStack_158;
  iVar4 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f27f48);
  func_0x000107c3f400();
  if (iVar4 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = lStack_160;
    FUN_102eef968(lStack_160);
  }
  lVar14 = *(long *)(unaff_x20 + _DAT_112f27ed0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar14 != 0) {
    lVar15 = lVar14;
    func_0x000107c40244();
    func_0x000107c615e8(lVar14);
    if (lVar15 - 1U < 4) {
      uVar21 = *(undefined4 *)(&UNK_10ddc9180 + (lVar15 - 1U) * 4);
      goto LAB_102eecb3c;
    }
  }
  uVar21 = 0;
LAB_102eecb3c:
  if (puStack_148 == (undefined *)0x0) {
    (*pcStack_1c0)(uVar31,1,1,lVar5);
  }
  else {
    FUN_102f059cc(puStack_148 + _DAT_1138135b8,uVar31,0x112d373d8,&UNK_10d9014c0);
  }
  if (puVar28 == (undefined *)0x0) {
    puVar28 = (undefined *)0x0;
  }
  else {
    func_0x000107c4a5e0(puVar28);
  }
  uVar23 = uVar6;
  puVar25 = puVar22;
  func_0x000102f1a7bc(uVar6,puVar22,plStack_140,lVar20,uVar21,uVar31,puVar28,&lStack_a0);
  puVar28 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_178 = (undefined *)uVar32;
  if (uVar23 != 0) {
    puVar34 = PTR_PTR_1126be758;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar28 = PTR_PTR_1126cf378;
    func_0x000107c610f8(PTR_PTR_1126cf378);
    func_0x000107c453e4();
    func_0x000107c59984(puVar34);
    func_0x000107c61170(puVar28);
    puVar28 = puVar34;
    func_0x000107c5c020();
    func_0x000107c61180();
    if (puVar28 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x102eed218);
      (*pcVar27)();
    }
    func_0x000107c59968();
    func_0x000107c61170(puVar28);
    puVar28 = puVar34;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar28 == (undefined *)0x0) {
      func_0x000107c61170(puVar34);
      func_0x000107c61170(uVar23);
      puVar28 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar22 = puVar28;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar28);
      func_0x00010006c00c(puVar22,puVar25);
      puVar24 = (undefined *)0x0;
      func_0x000100f23260(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar31 = *(ulong *)(puVar24 + 0x10);
      puVar28 = puVar24;
      if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar31) {
        puVar28 = (undefined *)(ulong)(1 < *(ulong *)(puVar24 + 0x18));
        func_0x000100f23260(puVar28,uVar31 + 1,1,puVar24);
      }
      *(ulong *)(puVar28 + 0x10) = uVar31 + 1;
      *(undefined **)(puVar28 + uVar31 * 0x10 + 0x20) = puVar22;
      *(undefined **)(puVar28 + uVar31 * 0x10 + 0x28) = puVar25;
      func_0x000107c61170(uVar23);
      func_0x000107c61170(puVar34);
      func_0x00010006c090(puVar22);
      puVar22 = puStack_158;
    }
  }
  puVar34 = PTR_PTR_1126be758;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar24 = PTR_PTR_1126be778;
  func_0x000107c610f8(PTR_PTR_1126be778);
  func_0x000107c453e4();
  func_0x000107c594a4(puVar34);
  func_0x000107c61170(puVar24);
  puVar24 = puVar34;
  func_0x000107c5b438();
  func_0x000107c61180();
  if (puVar24 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar27 = (code *)SoftwareBreakpoint(1,0x102eed214);
    (*pcVar27)();
  }
  FUN_102f1ae8c(lVar7);
  func_0x000107c59430(puVar24);
  func_0x000107c61170(puVar24);
  puVar24 = puVar34;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar24 == (undefined *)0x0) {
    func_0x000107c61170(puVar34);
    func_0x000107c6142c(uVar6);
    func_0x000107c61170(lVar20);
  }
  else {
    puVar8 = puVar24;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar24);
    func_0x00010006c00c(puVar8,puVar25);
    puVar24 = puVar28;
    func_0x000107c61558();
    puVar17 = puVar28;
    if (((ulong)puVar24 & 1) == 0) {
      puVar17 = (undefined *)0x0;
      func_0x000100f23260(0,*(long *)(puVar28 + 0x10) + 1,1,puVar28);
    }
    uVar31 = *(ulong *)(puVar17 + 0x10);
    puVar28 = puVar17;
    if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar31) {
      puVar28 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
      func_0x000100f23260(puVar28,uVar31 + 1,1,puVar17);
    }
    *(ulong *)(puVar28 + 0x10) = uVar31 + 1;
    *(undefined **)(puVar28 + uVar31 * 0x10 + 0x20) = puVar8;
    *(undefined **)(puVar28 + uVar31 * 0x10 + 0x28) = puVar25;
    func_0x000107c61170(puVar34);
    func_0x000107c6142c(uVar6);
    func_0x000107c61170(lVar20);
    func_0x00010006c090(puVar8,puVar25);
  }
  FUN_102f080f0(uStack_120,0x112d373d8,&UNK_10d9014c0);
  puVar25 = puVar28;
  func_0x000107c5fc48(puVar28,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c6142c(puVar28);
  uVar12 = 0;
  FUN_102f09540(0,0x112d670c8,&PTR_PTR_1126d7ab8);
  puVar28 = puStack_168;
  puVar34 = puStack_168;
  func_0x000107c5fc48(puStack_168,uVar12);
  func_0x000107c6142c(puVar28);
  uVar23 = uStack_118;
  uVar31 = uStack_128;
  uVar6 = 0;
  if (uStack_118 >> 0x3c < 0xf) {
    func_0x00010006c00c(uStack_128,uStack_118);
    uVar6 = uVar31;
    func_0x000107c5ee20(uVar31,uVar23);
    func_0x0001000b44c0(uVar31,uVar23);
  }
  uVar12 = 0;
  FUN_102f09540(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar28 = &UNK_1105e6748;
  func_0x000107c613fc(&UNK_1105e6748,0x20,7);
  *(undefined **)(puVar28 + 0x10) = puVar22;
  *(long **)(puVar28 + 0x18) = plStack_140;
  puVar22 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0x102f07ef0;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  plStack_e8 = (long *)0x42000000;
  pcStack_e0 = (code *)&UNK_101cbfc4c;
  puStack_d8 = &UNK_1105e6760;
  ppuVar16 = &puStack_f0;
  puStack_c8 = puVar28;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_c8);
  puVar28 = puStack_110;
  ppuVar33 = (undefined **)0x0;
  if (((ulong)pcStack_1a8 & 1) == 0) {
    uStack_d0 = puStack_150;
    puStack_c8 = puStack_110;
    puStack_f0 = puVar22;
    plStack_e8 = (long *)0x42000000;
    pcStack_e0 = FUN_102eef89c;
    puStack_d8 = &UNK_1105e6788;
    ppuVar33 = &puStack_f0;
    func_0x000107c60bc4();
    puVar22 = puStack_c8;
    func_0x000107c6157c(puVar28);
    func_0x000107c61574(puVar22);
  }
  uVar31 = uStack_1a0;
  if (uStack_1a0 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lStack_1b8;
    func_0x000107c5fadc(lStack_1b8,uStack_1a0);
    func_0x000107c6142c(uVar31);
  }
  *(long *)(lVar19 + -8) = lVar5;
  *(undefined8 *)(lVar19 + -0x10) = 0;
  *(undefined8 *)(lVar19 + -0x18) = 0;
  *(undefined8 *)(lVar19 + -0x28) = 0;
  *(undefined ***)(lVar19 + -0x20) = ppuVar33;
  puVar8 = puStack_148;
  *(undefined ***)(lVar19 + -0x38) = ppuVar16;
  *(undefined **)(lVar19 + -0x30) = puVar8;
  *(ulong *)(lVar19 + -0x48) = uVar6;
  *(undefined8 *)(lVar19 + -0x40) = uVar12;
  *(undefined8 *)(lVar19 + -0x50) = 0;
  *(undefined8 *)(lVar19 + -0x58) = 0;
  puVar22 = puStack_178;
  *(undefined **)(lVar19 + -0x68) = puVar34;
  *(undefined **)(lVar19 + -0x60) = puVar22;
  puVar24 = puStack_170;
  *(undefined **)(lVar19 + -0x70) = puStack_170;
  *(undefined8 *)(lVar19 + -0x80) = 0;
  *(undefined **)(lVar19 + -0x78) = puVar25;
  uVar32 = uStack_130;
  puVar28 = puStack_190;
  uVar31 = uStack_1b0;
  uStack_120 = uVar6;
  func_0x000107c40dc4(uStack_198);
  func_0x000107c61170(lVar7);
  FUN_102f080f0(&lStack_a0,0x112f28010,&UNK_10db63be0);
  func_0x000107c61170(puVar8);
  func_0x0001000b44c0(uStack_128,uStack_118);
  func_0x000100d2b3ac(puStack_150,puStack_110);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puStack_180);
  func_0x000107c61170(puVar24);
  func_0x000107c615e8(puStack_138);
  func_0x000107c60bd0(ppuVar33);
  func_0x000107c60bd0(ppuVar16);
  func_0x000107c61170(puVar22);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(puVar28);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar34);
  func_0x000107c61170(uStack_120);
  func_0x000107c61170(uVar12);
  return;
}



/* Entry: 102eed220; end: 102eeea73;  */

/* WARNING: Possible PIC construction at 0x000102eed394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eed880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eedc60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eede40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eede70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eedf68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eedfc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eedfec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eee034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eee04c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eedb94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eedb14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eedb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eedb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eedc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eed980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eed7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eed860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eed94c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102eed864) */
/* WARNING: Removing unreachable block (ram,0x000102eed7f4) */
/* WARNING: Removing unreachable block (ram,0x000102eed984) */
/* WARNING: Removing unreachable block (ram,0x000102eedc14) */
/* WARNING: Removing unreachable block (ram,0x000102eedb64) */
/* WARNING: Removing unreachable block (ram,0x000102eedb44) */
/* WARNING: Removing unreachable block (ram,0x000102eedb18) */
/* WARNING: Removing unreachable block (ram,0x000102eedc0c) */
/* WARNING: Removing unreachable block (ram,0x000102eedb20) */
/* WARNING: Removing unreachable block (ram,0x000102eedc4c) */
/* WARNING: Removing unreachable block (ram,0x000102eedb34) */
/* WARNING: Removing unreachable block (ram,0x000102eedb98) */
/* WARNING: Removing unreachable block (ram,0x000102eee038) */
/* WARNING: Removing unreachable block (ram,0x000102eedff0) */
/* WARNING: Removing unreachable block (ram,0x000102eedfc4) */
/* WARNING: Removing unreachable block (ram,0x000102eedf6c) */
/* WARNING: Removing unreachable block (ram,0x000102eede74) */
/* WARNING: Removing unreachable block (ram,0x000102eede44) */
/* WARNING: Removing unreachable block (ram,0x000102eedc64) */
/* WARNING: Removing unreachable block (ram,0x000102eede88) */
/* WARNING: Removing unreachable block (ram,0x000102eedeac) */
/* WARNING: Removing unreachable block (ram,0x000102eee018) */
/* WARNING: Removing unreachable block (ram,0x000102eedf10) */
/* WARNING: Removing unreachable block (ram,0x000102eedd48) */
/* WARNING: Removing unreachable block (ram,0x000102eed884) */
/* WARNING: Removing unreachable block (ram,0x000102eed964) */
/* WARNING: Removing unreachable block (ram,0x000102eed890) */
/* WARNING: Removing unreachable block (ram,0x000102eed994) */
/* WARNING: Removing unreachable block (ram,0x000102eed8bc) */
/* WARNING: Removing unreachable block (ram,0x000102eee004) */
/* WARNING: Removing unreachable block (ram,0x000102eee014) */
/* WARNING: Removing unreachable block (ram,0x000102eed8e0) */
/* WARNING: Removing unreachable block (ram,0x000102eed99c) */
/* WARNING: Removing unreachable block (ram,0x000102eed8fc) */
/* WARNING: Removing unreachable block (ram,0x000102eed920) */
/* WARNING: Removing unreachable block (ram,0x000102eed9a4) */
/* WARNING: Removing unreachable block (ram,0x000102eed92c) */
/* WARNING: Removing unreachable block (ram,0x000102eed934) */
/* WARNING: Removing unreachable block (ram,0x000102eed9b0) */
/* WARNING: Removing unreachable block (ram,0x000102eed9d8) */
/* WARNING: Removing unreachable block (ram,0x000102eed9fc) */
/* WARNING: Removing unreachable block (ram,0x000102eee088) */
/* WARNING: Removing unreachable block (ram,0x000102eeda0c) */
/* WARNING: Removing unreachable block (ram,0x000102eed9e4) */
/* WARNING: Removing unreachable block (ram,0x000102eeda1c) */
/* WARNING: Removing unreachable block (ram,0x000102eed9c8) */
/* WARNING: Removing unreachable block (ram,0x000102eeda34) */
/* WARNING: Removing unreachable block (ram,0x000102eedaf4) */
/* WARNING: Removing unreachable block (ram,0x000102eeda7c) */
/* WARNING: Removing unreachable block (ram,0x000102eee084) */
/* WARNING: Removing unreachable block (ram,0x000102eedab0) */
/* WARNING: Removing unreachable block (ram,0x000102eedb70) */
/* WARNING: Removing unreachable block (ram,0x000102eedc38) */
/* WARNING: Removing unreachable block (ram,0x000102eedac0) */
/* WARNING: Removing unreachable block (ram,0x000102eedb74) */
/* WARNING: Removing unreachable block (ram,0x000102eedbac) */
/* WARNING: Removing unreachable block (ram,0x000102eee0a0) */
/* WARNING: Removing unreachable block (ram,0x000102eedbf0) */
/* WARNING: Removing unreachable block (ram,0x000102eedbf4) */
/* WARNING: Removing unreachable block (ram,0x000102eed9cc) */
/* WARNING: Removing unreachable block (ram,0x000102eedb84) */
/* WARNING: Removing unreachable block (ram,0x000102eedaf0) */
/* WARNING: Removing unreachable block (ram,0x000102eed9f8) */
/* WARNING: Removing unreachable block (ram,0x000102eee078) */
/* WARNING: Removing unreachable block (ram,0x000102eed944) */
/* WARNING: Removing unreachable block (ram,0x000102eedc5c) */
/* WARNING: Removing unreachable block (ram,0x000102eed398) */
/* WARNING: Removing unreachable block (ram,0x000102eed41c) */
/* WARNING: Removing unreachable block (ram,0x000102eed3e4) */
/* WARNING: Removing unreachable block (ram,0x000102eed420) */
/* WARNING: Removing unreachable block (ram,0x000102eed43c) */
/* WARNING: Removing unreachable block (ram,0x000102eed474) */
/* WARNING: Removing unreachable block (ram,0x000102eed45c) */
/* WARNING: Removing unreachable block (ram,0x000102eed480) */
/* WARNING: Removing unreachable block (ram,0x000102eed4f8) */
/* WARNING: Removing unreachable block (ram,0x000102eed4a8) */
/* WARNING: Removing unreachable block (ram,0x000102eed4c4) */
/* WARNING: Removing unreachable block (ram,0x000102eed470) */
/* WARNING: Removing unreachable block (ram,0x000102eed500) */
/* WARNING: Removing unreachable block (ram,0x000102eed524) */
/* WARNING: Removing unreachable block (ram,0x000102eed948) */
/* WARNING: Removing unreachable block (ram,0x000102eed59c) */
/* WARNING: Removing unreachable block (ram,0x000102eed618) */
/* WARNING: Removing unreachable block (ram,0x000102eed63c) */
/* WARNING: Removing unreachable block (ram,0x000102eee07c) */
/* WARNING: Removing unreachable block (ram,0x000102eed64c) */
/* WARNING: Removing unreachable block (ram,0x000102eed61c) */
/* WARNING: Removing unreachable block (ram,0x000102eed658) */
/* WARNING: Removing unreachable block (ram,0x000102eee070) */
/* WARNING: Removing unreachable block (ram,0x000102eed664) */
/* WARNING: Removing unreachable block (ram,0x000102eed6b8) */
/* WARNING: Removing unreachable block (ram,0x000102eed5fc) */
/* WARNING: Removing unreachable block (ram,0x000102eed6c0) */
/* WARNING: Removing unreachable block (ram,0x000102eed6d4) */
/* WARNING: Removing unreachable block (ram,0x000102eed69c) */
/* WARNING: Removing unreachable block (ram,0x000102eed6d8) */
/* WARNING: Removing unreachable block (ram,0x000102eed6a0) */
/* WARNING: Removing unreachable block (ram,0x000102eed6f0) */
/* WARNING: Removing unreachable block (ram,0x000102eee074) */
/* WARNING: Removing unreachable block (ram,0x000102eed780) */
/* WARNING: Removing unreachable block (ram,0x000102eed7c4) */
/* WARNING: Removing unreachable block (ram,0x000102eed870) */
/* WARNING: Removing unreachable block (ram,0x000102eed790) */
/* WARNING: Removing unreachable block (ram,0x000102eee0a4) */
/* WARNING: Removing unreachable block (ram,0x000102eed7bc) */
/* WARNING: Removing unreachable block (ram,0x000102eed7c8) */
/* WARNING: Removing unreachable block (ram,0x000102eed800) */
/* WARNING: Removing unreachable block (ram,0x000102eee080) */
/* WARNING: Removing unreachable block (ram,0x000102eed850) */
/* WARNING: Removing unreachable block (ram,0x000102eed854) */
/* WARNING: Removing unreachable block (ram,0x000102eed7d4) */
/* WARNING: Removing unreachable block (ram,0x000102eed6b4) */
/* WARNING: Removing unreachable block (ram,0x000102eed604) */
/* WARNING: Removing unreachable block (ram,0x000102eed60c) */
/* WARNING: Removing unreachable block (ram,0x000102eed87c) */
/* WARNING: Removing unreachable block (ram,0x000102eed950) */
/* WARNING: Removing unreachable block (ram,0x000102eee050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eed220(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c41844();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000107c5bf1c();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar4 = 0;
  FUN_102f09540(0,0x112d51360,&PTR_PTR_1126becd8);
  uVar3 = uVar2;
  func_0x000107c5fc54(uVar2,uVar4);
  func_0x000107c61170(uVar2);
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
  if (uVar2 != 0) {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f27ea8) + _DAT_113083f78);
    func_0x000107c5d984(uVar5);
    func_0x000107c61180();
    uVar6 = uVar5;
    uVar3 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    func_0x000107c5fb24(uVar6,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 102eeea74; end: 102eeec1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102eeea74(double param_1,long param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  long lVar5;
  
  uVar8 = *(ulong *)(param_2 + 8);
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
  if (uVar3 != 0) {
    if ((uVar8 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar8 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102eeec1c);
        (*pcVar1)();
      }
      lVar9 = *(long *)(uVar8 + 0x20);
      func_0x000107c6157c(lVar9);
    }
    else {
      lVar9 = 0;
      FUN_102f02a90(0,uVar8);
    }
    lVar4 = *(long *)(lVar9 + 0x28);
    func_0x000107c61174();
    func_0x000107c61574(lVar9);
    lVar9 = lVar4;
    func_0x000107c44950();
    if ((int)lVar9 != 0) {
      lVar9 = lVar4;
      func_0x000107c4b88c();
      func_0x000107c61180();
      if (lVar9 != 0) {
        func_0x000107c4ab14();
        lVar5 = lVar9;
        dVar10 = param_1;
        func_0x000107c4c0e4();
        iVar2 = (int)lVar5;
        func_0x000107c60a00(param_1,dVar10);
        if ((iVar2 != 0) &&
           ((func_0x000107c4ab14(lVar9), param_1 != 0.0 ||
            (func_0x000107c4c0e4(lVar9), param_1 != 0.0)))) {
          func_0x000107c4ab14(lVar9);
          dVar10 = param_1;
          func_0x000107c4c0e4(lVar9);
          puVar6 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
          func_0x000107c610f8(PTR__OBJC_CLASS___CLLocation_1126b30c8);
          func_0x000107c470f8(param_1,dVar10);
          func_0x000107c61170(lVar9);
          func_0x000107c61170(lVar4);
          return puVar6;
        }
        func_0x000107c61170(lVar9);
      }
    }
    func_0x000107c61170(lVar4);
  }
  puVar6 = *(undefined **)(param_3 + _DAT_112f27ec8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = puVar6;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(puVar6);
  }
  return puVar7;
}



/* Entry: 102eeec1c; end: 102eeed5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eeec1c(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_112f27e80;
    func_0x000107c61428(lVar5,auStack_50,0,0);
    lVar2 = lVar5;
    func_0x000102f05844();
    if ((int)lVar2 == 1) {
      func_0x000107c61170(param_1);
    }
    else {
      uVar4 = *(ulong *)(lVar5 + 8);
      func_0x000107c61434(uVar4);
      func_0x000107c61170(param_1);
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
      if (uVar3 == 0) {
        func_0x000107c6142c(uVar4);
      }
      else if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102eeed60);
          (*pcVar1)();
        }
        lVar5 = *(long *)(uVar4 + 0x20);
        func_0x000107c6157c(lVar5);
        func_0x000107c6142c(uVar4);
        func_0x000107c61174(*(undefined8 *)(lVar5 + 0x28));
        func_0x000107c61574(lVar5);
      }
      else {
        lVar5 = 0;
        FUN_102f02a90(0,uVar4);
        func_0x000107c6142c(uVar4);
        func_0x000107c61174(*(undefined8 *)(lVar5 + 0x28));
        func_0x000107c615e8(lVar5);
      }
    }
  }
  return;
}



/* Entry: 102eeed60; end: 102eeefc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eeed60(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar9 = *(ulong *)(param_1 + 0x10);
  uVar3 = uVar9;
  func_0x000107c61150(uVar9,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_preselectedDestinations_112620488);
  if ((uVar3 & 1) != 0) {
    func_0x000107c4ee5c();
    func_0x000107c61180();
    if (uVar9 != 0) {
      uVar3 = 0;
      FUN_102f09540(0,0x112d55bf0,&PTR_PTR_1126a6218);
      uVar4 = uVar9;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar9);
      if (uVar4 >> 0x3e == 0) {
        uVar9 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar9 = uVar4 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar4) {
          uVar9 = uVar4;
        }
        func_0x000107c60480();
      }
      if (uVar9 != 0) {
        uVar10 = 0;
        do {
          if ((uVar4 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102eeef78);
              (*pcVar2)();
            }
            uVar5 = *(ulong *)(uVar4 + uVar10 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar10;
            uVar3 = uVar4;
            func_0x000102f02874(uVar10,uVar4,&PTR_PTR_1126a6218,0x112d55bf0);
          }
          uVar1 = uVar10 + 1;
          if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102eeef74);
            (*pcVar2)();
          }
          uVar6 = uVar5;
          func_0x000107c4a91c();
          if ((int)uVar6 == 5) {
            func_0x000107c6142c(uVar4);
            uVar9 = uVar5;
            func_0x000107c41830();
            func_0x000107c61180();
            func_0x000107c61170(uVar5);
            uVar4 = uVar3;
            uVar10 = uVar9;
            if (uVar9 == 0) {
              uVar10 = 0;
              func_0x000107c5faec(0);
              uVar4 = uVar3;
              func_0x000107c5fadc();
              func_0x000107c6142c(uVar3);
            }
            func_0x000107c5faec();
            uVar3 = uVar9 & 0xffffffffffff;
            if ((uVar4 & 0x2000000000000000) != 0) {
              uVar3 = uVar4 >> 0x38 & 0xf;
            }
            if (uVar3 == 0) {
              func_0x000107c6142c(uVar4);
            }
            else {
              lVar7 = *(long *)(param_2 + _DAT_112f27f18);
              func_0x000107c410f8();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(uVar10);
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102eeefc4);
                (*pcVar2)();
              }
              lVar8 = lVar7;
              func_0x000107c5c734();
              func_0x000107c61180();
              func_0x000107c61170(lVar7);
              func_0x000107c6142c(uVar4);
              if (lVar8 != 0) {
                func_0x000107c41140(lVar8);
                func_0x000107c61180();
                func_0x000107c615e8(lVar8);
                func_0x000107c61170(uVar10);
                return;
              }
            }
            func_0x000107c61170(uVar10);
            return;
          }
          func_0x000107c61170(uVar5);
          uVar10 = uVar10 + 1;
        } while (uVar1 != uVar9);
      }
      func_0x000107c6142c(uVar4);
    }
  }
  return;
}



/* Entry: 102eeefc4; end: 102eef447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102eeefc4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar16 = *(ulong *)(param_1 + 8);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f27eb8) + _DAT_112ff73d0);
  func_0x000107c61174();
  FUN_102f10f44();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar7 = &UNK_1105e6c98;
  func_0x000107c613fc(&UNK_1105e6c98,0x21,7);
  *(ulong *)(puVar7 + 0x10) = uVar16;
  *(undefined8 *)(puVar7 + 0x18) = uVar5;
  puVar7[0x20] = (byte)param_1 & 1;
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_102f08280;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10130cf2c;
  puStack_88 = &UNK_1105e6cb0;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar7 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61434(uVar16);
  func_0x000107c61574(puVar7);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  if (uVar16 >> 0x3e == 0) {
    if (*(long *)((uVar16 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_102eef134;
LAB_102eef0f0:
    if ((uVar16 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar16 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102eef448);
        (*pcVar3)();
      }
      lVar17 = *(long *)(*(long *)(uVar16 + 0x20) + 0x28);
      func_0x000107c61174(lVar17);
    }
    else {
      lVar14 = 0;
      FUN_102f02a90(0,uVar16);
      lVar17 = *(long *)(lVar14 + 0x28);
      func_0x000107c61174();
      func_0x000107c615e8(lVar14);
    }
  }
  else {
    uVar9 = uVar16 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar16) {
      uVar9 = uVar16;
    }
    func_0x000107c60480();
    if (uVar9 != 0) goto LAB_102eef0f0;
LAB_102eef134:
    lVar17 = 0;
  }
  puVar10 = PTR_PTR_1126b2470;
  func_0x000107c61168(PTR_PTR_1126b2470);
  puVar7 = &UNK_1105e6ce8;
  func_0x000107c613fc(&UNK_1105e6ce8,0x18,7);
  *(long *)(puVar7 + 0x10) = lVar17;
  pcStack_80 = FUN_102f0828c;
  puStack_a0 = puVar12;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101307cb0;
  puStack_88 = &UNK_1105e6d00;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar7 = puStack_78;
  lVar14 = lVar17;
  func_0x000107c61174();
  func_0x000107c61574(puVar7);
  func_0x000107c5e560(puVar10);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  puVar7 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000103f5b688(0);
  func_0x000107c610f8();
  lVar11 = param_2;
  func_0x000107c61174();
  func_0x000107c61174();
  puVar12 = puVar7;
  func_0x000107c61174();
  puVar13 = puVar6;
  func_0x000103f5b47c(puVar6,param_2,puVar7);
  iVar4 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f27e98);
  func_0x000108f48664();
  if (iVar4 == 0) {
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar14);
    goto LAB_102eef3e8;
  }
  puVar7 = &UNK_1105e5fa0;
  func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,unaff_x20);
  puVar1 = (undefined8 *)(puVar13 + _DAT_113034b68);
  func_0x000107c61428(puVar1,&puStack_a0,1,0);
  uVar15 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_102f082bc;
  puVar1[1] = puVar7;
  func_0x000107c6157c(puVar7);
  func_0x000100d2b3ac(uVar15,uVar2);
  func_0x000107c61574(puVar7);
  if ((lVar17 == 0) || (param_2 == 0)) {
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f27fd0);
LAB_102eef354:
    puVar7 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
    lVar17 = 0;
  }
  else {
    lVar17 = lVar14;
    FUN_102ed8e34(lVar14,lVar11);
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f27fd0);
    if (lVar17 == 0) goto LAB_102eef354;
    puVar7 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4e01c();
  }
  func_0x000107c61180();
  func_0x000107c4d664(uVar15);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(uVar5);
  lVar14 = _DAT_113034b60;
  func_0x000107c61428(puVar13 + _DAT_113034b60,auStack_b8,1,0);
  uVar5 = *(undefined8 *)(puVar13 + lVar14);
  *(undefined8 *)(puVar13 + lVar14) = uVar15;
  func_0x000107c61174(uVar15);
LAB_102eef3e8:
  func_0x000107c61170(uVar5);
  return puVar13;
}



/* Entry: 102eef448; end: 102eef507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eef448(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f27fc0);
  func_0x000102f12b1c();
  uVar1 = param_1;
  func_0x000107c5fc48();
  func_0x000107c6142c(param_1);
  func_0x000107c4d664(uVar2);
  func_0x000107c61170(uVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f27e98);
  uVar1 = uVar3;
  func_0x000108c7c620(uVar3,*(undefined8 *)(unaff_x20 + _DAT_112f27f70));
  if ((int)uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000108faa300(uVar3);
  }
  func_0x000103f5a410(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar2);
  func_0x000103f5a2cc(uVar3,uVar2);
  return;
}



/* Entry: 102eef508; end: 102eef65f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102eef508(long param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar2 = (uint)*(undefined8 *)(unaff_x20 + _DAT_112f27f48);
  func_0x000107c3f400();
  lVar7 = _DAT_112f27e48;
  func_0x000107c61428(unaff_x20 + _DAT_112f27e48,auStack_58,0,0);
  lVar7 = unaff_x20 + lVar7;
  func_0x000107c61618();
  if (lVar7 == 0) {
    uVar5 = 1;
  }
  else {
    lVar4 = lVar7;
    func_0x000107c4ca34();
    func_0x000107c615e8(lVar7);
    uVar5 = (uint)(lVar4 != 1);
  }
  if ((uVar2 & uVar5) != 1 || param_2 != 0) {
    return 0;
  }
  uVar6 = *(ulong *)(param_1 + 8);
  if (uVar6 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar3 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar3 == 0) {
    lVar7 = 0;
  }
  else if ((uVar6 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102eef660);
      (*pcVar1)();
    }
    lVar7 = *(long *)(*(long *)(uVar6 + 0x20) + 0x28);
    func_0x000107c61174(lVar7);
  }
  else {
    lVar4 = 0;
    FUN_102f02a90(0,uVar6);
    lVar7 = *(long *)(lVar4 + 0x28);
    func_0x000107c61174();
    func_0x000107c615e8(lVar4);
  }
  lVar4 = lVar7;
  FUN_102eef968();
  func_0x000107c61170(lVar7);
  if (lVar4 != 0) {
    func_0x000107c61170(lVar4);
    return 1;
  }
  return 0;
}



/* Entry: 102eef660; end: 102eef717;  */

void FUN_102eef660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1105e67e8;
  func_0x000107c613fc(&UNK_1105e67e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  uStack_40 = 0x102f07efc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x102f09a64;
  puStack_48 = &UNK_1105e6800;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4db80(param_3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102eef718; end: 102eef89b;  */

/* WARNING: Possible PIC construction at 0x000102eef794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eef804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102eef808) */
/* WARNING: Removing unreachable block (ram,0x000102eef798) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102eef718(ulong param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_80 [48];
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_1 == 0) {
    (*param_3)(0,0xf000000000000000,0,0xf000000000000000,param_2);
    return;
  }
  func_0x000107c61174();
  uVar3 = param_1;
  func_0x000107c49c14();
  uVar4 = param_1;
  func_0x000107c412d0(param_1);
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar4);
  if ((uVar3 & 1) == 0) {
    (*param_3)(uVar2,param_2,0,0xf000000000000000,0);
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c5ee20();
    unaff_x30 = 0x102eef798;
    register0x00000008 = (BADSPACEBASE *)auStack_80;
    unaff_x19 = param_1;
    unaff_x20 = param_4;
    unaff_x29 = puVar1;
  }
  uVar5 = (uint)(param_2 >> 0x3e);
  if (uVar5 == 1) {
    uVar2 = param_2 & 0x3fffffffffffffff;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102eef89c; end: 102eef8af;  */

/* WARNING: Possible PIC construction at 0x000102ef2888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ef288c) */

void FUN_102eef89c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = &UNK_1105e6888;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1105e6888,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(FUN_102f07f28,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102eef8b0; end: 102eef967;  */

/* WARNING: Possible PIC construction at 0x000102eef944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102eef948) */

void FUN_102eef8b0(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5,
                  long param_6)

{
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  if (param_4 >> 0x3c < 0xf) {
    func_0x000107c5ee20(param_3,param_4);
  }
  else {
    param_3 = 0;
  }
  if (param_5 != 0) {
    func_0x000107c5ed2c(param_5);
  }
  (**(code **)(param_6 + 0x10))(param_6,param_1,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102eef968; end: 102eefae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eef968(double param_1,double param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  double dVar6;
  long lVar3;
  
  if (param_3 != 0) {
    func_0x000107c61174();
    lVar4 = param_3;
    func_0x000107c44950();
    if ((int)lVar4 != 0) {
      lVar4 = param_3;
      func_0x000107c4b88c();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c4ab14();
        lVar3 = lVar4;
        param_2 = param_1;
        func_0x000107c4c0e4();
        iVar2 = (int)lVar3;
        func_0x000107c60a00();
        if (iVar2 == 0) {
          func_0x000107c61170(lVar4);
        }
        else {
          func_0x000107c4ab14(lVar4);
          if (param_1 != 0.0) {
            func_0x000107c61170(param_3);
            return;
          }
          func_0x000107c4c0e4(lVar4);
          dVar6 = param_1;
          func_0x000107c61170(param_3);
          bVar1 = param_1 != 0.0;
          param_3 = lVar4;
          param_1 = dVar6;
          if (bVar1) {
            return;
          }
        }
      }
    }
    func_0x000107c61170(param_3);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112f27ec8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c4077c();
      iVar2 = (int)lVar4;
      func_0x000107c60a00();
      if ((iVar2 == 0) || ((param_1 == 0.0 && (param_2 == 0.0)))) {
        func_0x000107c61170(lVar3);
      }
      else {
        puVar5 = PTR_PTR_1126bcf28;
        func_0x000107c610f8(PTR_PTR_1126bcf28);
        func_0x000107c453e4();
        func_0x000107c55ae0(param_1);
        func_0x000107c56154(param_2,puVar5);
        func_0x000107c61170(lVar3);
      }
    }
  }
  return;
}


