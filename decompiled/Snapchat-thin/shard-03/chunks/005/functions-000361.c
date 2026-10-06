/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029d1bd8; end: 1029d1bff;  */

void FUN_1029d1bd8(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 1029d1c00; end: 1029d1d27;  */

void FUN_1029d1c00(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001000ab060(0);
    func_0x000100079360(0);
    uVar2 = 0;
    func_0x0001048d3c60(0);
    func_0x0001048d38ac();
    uVar3 = uVar2;
    func_0x0001048ba96c();
    func_0x000107c61170(uVar2);
    uVar4 = 0;
    func_0x0001000aad1c(0);
    func_0x0001000aad3c();
    puVar5 = &UNK_11057e360;
    func_0x000107c613fc(&UNK_11057e360,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar1);
    func_0x000107c6157c(puVar5);
    uVar2 = uVar3;
    func_0x000100947c8c(uVar3,uVar4,0,0,FUN_1029d1d28,puVar5);
    func_0x000107c61578(puVar5,2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1029d1d28; end: 1029d1e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d1d28(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar4 = *(long *)(lVar1 + _DAT_112ed4e60);
      if (lVar4 == 0) {
        func_0x000107c61170();
      }
      else {
        puVar2 = &UNK_11057e360;
        func_0x000107c613fc(&UNK_11057e360,0x18,7);
        func_0x000107c61614(puVar2 + 0x10,lVar1);
        pcStack_58 = FUN_1029d1e34;
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0x42000000;
        puStack_68 = &UNK_1000f6b44;
        puStack_60 = &UNK_11057e5f0;
        ppuVar3 = &puStack_78;
        puStack_50 = puVar2;
        func_0x000107c60bc4(ppuVar3);
        puVar2 = puStack_50;
        func_0x000107c615f0(lVar4);
        func_0x000107c61574(puVar2);
        func_0x000107c4e524(lVar4);
        func_0x000107c61170(lVar1);
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c615e8(lVar4);
      }
    }
  }
  return;
}



/* Entry: 1029d1e34; end: 1029d206b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d1e34(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112ed4ea0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar10 = *(long *)(lVar2 + _DAT_112ed4e60);
      if (lVar10 != 0) {
        func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
        lVar1 = _DAT_112fb4ac8;
        lVar11 = *(long *)(lVar2 + _DAT_112ed4e90);
        func_0x000107c615f0(lVar10);
        lVar4 = lVar3;
        func_0x000107c4fcf4(lVar3);
        func_0x000107c61180();
        lVar5 = lVar4;
        func_0x0001000b637c();
        func_0x000107c61170(lVar4);
        lVar4 = lVar10;
        func_0x000107c615f0(lVar10);
        func_0x000100471e0c();
        func_0x000107c61574(lVar5);
        func_0x000107c615e8(lVar10);
        puVar9 = &UNK_11057e360;
        puVar6 = puVar9;
        func_0x000107c613fc(&UNK_11057e360,0x18,7);
        func_0x000107c61614(puVar6 + 0x10,lVar2);
        uVar12 = *(undefined8 *)(lVar11 + lVar1);
        puVar7 = &UNK_11057e628;
        func_0x000107c613fc(&UNK_11057e628,0x20,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined8 *)(puVar7 + 0x18) = uVar12;
        uVar12 = 0x112e97be8;
        func_0x0001000285a8(0x112e97be8,&UNK_10daa3050);
        pcVar8 = FUN_1029d206c;
        func_0x0001000bfde0(FUN_1029d206c,puVar7,uVar12);
        func_0x000107c61574(lVar4);
        func_0x000107c61574(puVar7);
        func_0x000107c613fc(&UNK_11057e360,0x18,7);
        func_0x000107c61614(puVar9 + 0x10,lVar2);
        uVar12 = 0x1029d248c;
        puVar7 = puVar9;
        (**(code **)(*(long *)pcVar8 + 0x60))(0x1029d248c);
        func_0x000107c61574(pcVar8);
        func_0x000107c61574(puVar9);
        func_0x000107c614f0(uVar12);
        (**(code **)(puVar7 + 0x10))(*(undefined8 *)(lVar2 + _DAT_112ed4e48),uVar12,puVar7);
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar10);
      }
      func_0x000107c615e8();
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1029d206c; end: 1029d2913;  */

void FUN_1029d206c(long *param_1,ulong *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *param_2;
  func_0x000107c5fc54(uVar3,PTR___syXlN_11034f1a0 + 8);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar17 = uVar3;
    FUN_1029cea04();
    pcVar5 = "updateRegisteredPlugins(_:)";
    func_0x0001000c10c0("updateRegisteredPlugins(_:)");
    func_0x000107c61180();
    puVar8 = &UNK_11057e360;
    func_0x000107c613fc(&UNK_11057e360,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,lVar4);
    puVar18 = &UNK_11057eb28;
    func_0x000107c613fc(&UNK_11057eb28,0x20,7);
    *(undefined **)(puVar18 + 0x10) = puVar8;
    *(ulong *)(puVar18 + 0x18) = uVar17;
    pcStack_88 = FUN_1029d30a8;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_11057eb40;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar18;
    func_0x000107c60bc4(ppuVar6);
    puVar8 = puStack_80;
    func_0x000107c61434(uVar17);
    func_0x000107c61574(puVar8);
    func_0x000107c4e524(pcVar5);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(pcVar5);
    func_0x000107c6142c(uVar17);
    func_0x000107c61170(lVar4);
  }
  uVar17 = uVar3 & 0xffffffffffffff8;
  if (uVar3 >> 0x3e == 0) {
    uVar12 = *(ulong *)(uVar17 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar12 = uVar17;
    if (0x7fffffffffffffff < uVar3) {
      uVar12 = uVar3;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (uVar12 != 0) {
    uVar14 = 0;
    do {
      while( true ) {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar17 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1029d230c);
            (*pcVar2)();
          }
          uVar16 = *(ulong *)(uVar3 + uVar14 * 8 + 0x20);
          func_0x000107c615f0(uVar16);
        }
        else {
          uVar16 = uVar14;
          func_0x00010125fef0(uVar14,uVar3);
        }
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029d2308);
          (*pcVar2)();
        }
        uVar11 = uVar14 + 1;
        uVar7 = uVar16;
        puStack_a8 = PTR_DAT_11269d940;
        func_0x000107c61494(uVar16,1,&puStack_a8);
        if (uVar7 == 0) break;
        puVar18 = puVar8;
        func_0x000107c61550();
        if ((((int)puVar18 == 0) || ((long)puVar8 < 0)) ||
           (puVar18 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar13 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar13 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar13 = puVar8;
            }
            func_0x000107c60480(puVar13);
          }
          puVar18 = (undefined *)0x0;
          FUN_10241a8d0(0,puVar13 + 1,1,puVar8);
        }
        uVar16 = (ulong)puVar18 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar16 + 0x10);
        puVar8 = puVar18;
        if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar14) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
          FUN_10241a8d0(puVar8,uVar14 + 1,1,puVar18);
          uVar16 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar16 + 0x10) = uVar14 + 1;
        *(ulong *)(uVar16 + uVar14 * 8 + 0x20) = uVar7;
        uVar14 = uVar11;
        if (uVar11 == uVar12) goto LAB_1029d2328;
      }
      func_0x000107c615e8(uVar16);
      uVar14 = uVar14 + 1;
    } while (uVar11 != uVar12);
  }
LAB_1029d2328:
  func_0x000107c6142c(uVar3);
  puVar18 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar13 = *(undefined **)(puVar18 + 0x10);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar13 = puVar18;
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar13 = puVar8;
    }
    func_0x000107c60480();
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar1;
  if (puVar13 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar8 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar18 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1029d2440);
            (*pcVar2)();
          }
          puVar15 = *(undefined **)(puVar8 + (long)puVar10 * 8 + 0x20);
          func_0x000107c615f0(puVar15);
        }
        else {
          puVar15 = puVar10;
          FUN_10241a40c(puVar10,puVar8);
        }
        if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029d243c);
          (*pcVar2)();
        }
        puVar19 = puVar10 + 1;
        puVar9 = puVar15;
        func_0x000107c5ab44();
        if ((int)puVar9 == 0) break;
        puVar10 = puVar1;
        func_0x000107c61558();
        if (((ulong)puVar10 & 1) == 0) {
          FUN_10241ad48(0,*(long *)(puVar1 + 0x10) + 1,1);
        }
        uVar3 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
          FUN_10241ad48(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
        *(undefined **)(puVar1 + uVar3 * 8 + 0x20) = puVar15;
        puVar10 = puVar19;
        if (puVar19 == puVar13) goto LAB_1029d245c;
      }
      func_0x000107c615e8(puVar15);
      puVar10 = puVar10 + 1;
    } while (puVar19 != puVar13);
  }
LAB_1029d245c:
  func_0x000107c6142c(puVar8);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1029d2914; end: 1029d2a03;  */

void FUN_1029d2914(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *param_2;
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  FUN_1029cebc4(uVar1,uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029d2a04; end: 1029d2a83;  */

void FUN_1029d2a04(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1029d2a84; end: 1029d2e57;  */

void FUN_1029d2a84(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x10) + 0x10;
  puVar4 = &UNK_11057e948;
  func_0x000107c613fc(&UNK_11057e948,0x18,7);
  *(long *)(puVar4 + 0x10) = lVar1;
  puVar5 = &UNK_11057e970;
  func_0x000107c613fc(&UNK_11057e970,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x1029d2f14;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x1029d2f54;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1011a7a34;
  puStack_88 = &UNK_11057e988;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4();
  puVar7 = puStack_78;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_11057e9c0;
  func_0x000107c613fc(&UNK_11057e9c0,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar10;
  puVar8 = &UNK_11057e9e8;
  func_0x000107c613fc(&UNK_11057e9e8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x1029d2f74;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_80 = (code *)0x1029d2fb8;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_11057ea00;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar8;
  func_0x000107c60bc4();
  puVar11 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar11);
  puVar11 = &UNK_11057ea38;
  func_0x000107c613fc(&UNK_11057ea38,0x20,7);
  *(long *)(puVar11 + 0x10) = lVar1;
  *(undefined8 *)(puVar11 + 0x18) = uVar17;
  puVar12 = &UNK_11057ea60;
  func_0x000107c613fc(&UNK_11057ea60,0x20,7);
  *(undefined8 *)(puVar12 + 0x10) = 0x1029d2fd8;
  *(undefined **)(puVar12 + 0x18) = puVar11;
  pcStack_80 = (code *)0x1029d3768;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_11057ea78;
  ppuVar13 = &puStack_a0;
  puStack_78 = puVar12;
  func_0x000107c60bc4(ppuVar13);
  puVar14 = puStack_78;
  func_0x000107c61174(uVar17);
  func_0x000107c6157c(puVar12);
  func_0x000107c61574(puVar14);
  puVar14 = &UNK_11057eab0;
  func_0x000107c613fc(&UNK_11057eab0,0x18,7);
  *(undefined8 *)(puVar14 + 0x10) = uVar10;
  puVar15 = &UNK_11057ead8;
  func_0x000107c613fc(&UNK_11057ead8,0x20,7);
  *(code **)(puVar15 + 0x10) = FUN_1029d301c;
  *(undefined **)(puVar15 + 0x18) = puVar14;
  pcStack_80 = FUN_1029d3088;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100eb5728;
  puStack_88 = &UNK_11057eaf0;
  ppuVar16 = &puStack_a0;
  puStack_78 = puVar15;
  func_0x000107c60bc4(ppuVar16);
  puVar2 = puStack_78;
  func_0x000107c61174(uVar10);
  func_0x000107c6157c(puVar15);
  func_0x000107c61574(puVar2);
  func_0x000107c4c5bc(param_1);
  func_0x000107c60bd0(ppuVar16);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x6a,0x18a,0x26,1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1029d2e4c);
    (*pcVar3)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x6a,0x18c,0x21,1);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1029d2e50);
    (*pcVar3)();
  }
  puVar4 = puVar12;
  func_0x000107c61544(puVar12,"",0x6a,0x18e,0x28,1);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar14);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1029d2e54);
    (*pcVar3)();
  }
  puVar4 = puVar15;
  func_0x000107c61544(puVar15,"",0x6a,400,0x20,1);
  func_0x000107c61574(puVar15);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1029d2e58);
  (*pcVar3)();
}



/* Entry: 1029d2e58; end: 1029d301b;  */

void FUN_1029d2e58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c552b8(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029d301c; end: 1029d3087;  */

/* WARNING: Possible PIC construction at 0x0001029d304c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029d3050) */

void FUN_1029d301c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c53ce0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029d3088; end: 1029d30a7;  */

void FUN_1029d3088(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029d30a8; end: 1029d3183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d30a8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_112ed4e90);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = _DAT_112fb4ad0;
    func_0x000107c61428(lVar3 + _DAT_112fb4ad0,auStack_60,0,0);
    lVar1 = lVar3 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      func_0x000107c5fc48(uVar2,PTR___sypN_11034f1a8 + 8);
      func_0x000107c3f684(lVar1);
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1029d3184; end: 1029d33d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d3184(double param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + _DAT_112ed4e50);
    if (lVar4 != 0) {
      uVar7 = *(undefined8 *)(*(long *)(lVar3 + _DAT_112ed4e90) + _DAT_112fb4ab8);
      func_0x000107c61174();
      func_0x000107c3e2c8(uVar7);
      puVar1 = (undefined8 *)(lVar3 + _DAT_112ed4e88);
      lVar8 = puVar1[1];
      if (lVar8 != 0) {
        uVar9 = *puVar1;
        dVar10 = (double)puVar1[2];
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        func_0x000107c6071c();
        lVar5 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        func_0x000107c613fc();
        *(undefined8 *)(lVar5 + 0x18) = 2;
        *(undefined8 *)(lVar5 + 0x10) = 1;
        puVar2 = PTR___sSds7CVarArgsWP_11034ddc0;
        *(undefined **)(lVar5 + 0x38) = PTR___sSdN_11034dd90;
        *(undefined **)(lVar5 + 0x40) = puVar2;
        *(double *)(lVar5 + 0x20) = (param_1 - dVar10) * 1000.0;
        uVar7 = 0xe400000000000000;
        func_0x000107c5fb00(0x66322e25,0xe400000000000000,lVar5);
        func_0x000107c6142c(uVar7);
        lVar5 = *(long *)(lVar3 + _DAT_112ed4ed0);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 != 0) {
          func_0x000107c61434(lVar8);
          uVar7 = uVar9;
          func_0x000107c5fadc(uVar9,lVar8);
          func_0x000107c6142c(lVar8);
          func_0x000107c41cc4(param_1 - dVar10,lVar5);
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(uVar7);
        }
        lVar5 = *(long *)(lVar3 + _DAT_112ed4e50);
        if (lVar5 == 0) {
          func_0x000107c6142c(lVar8);
        }
        else {
          lVar6 = 0x112d38dc0;
          func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
          func_0x000107c613fc();
          *(undefined8 *)(lVar6 + 0x18) = 2;
          *(undefined8 *)(lVar6 + 0x10) = 1;
          *(undefined **)(lVar6 + 0x38) = PTR___sSSN_11034da80;
          *(undefined8 *)(lVar6 + 0x20) = uVar9;
          *(long *)(lVar6 + 0x28) = lVar8;
          func_0x000107c61174(lVar5);
          lVar8 = lVar6;
          func_0x000107c5fc48(lVar6,PTR___sypN_11034f1a8 + 8);
          func_0x000107c61574(lVar6);
          func_0x000107c424dc(lVar5);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar8);
        }
      }
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1029d33d8; end: 1029d340f;  */

void FUN_1029d33d8(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029d3410; end: 1029d355f;  */

void FUN_1029d3410(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar4 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x10) + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uStack_40 = 0x1029d34c0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_11057ec08;
    uStack_38 = uVar1;
    func_0x000107c60bc4(&puStack_60);
    uVar2 = uStack_38;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(uVar2);
    func_0x000107c5e080(lVar3,param_2,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 1029d3560; end: 1029d3587;  */

void FUN_1029d3560(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100087f6c(&uStack_18);
  func_0x000100c7f554();
  return;
}



/* Entry: 1029d3588; end: 1029d365b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d3588(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar4 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_112ed4ed0);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      uVar2 = 0;
      FUN_1029d365c(0,0x112ed4f28,&PTR_PTR_1126b5470);
      func_0x000107c5fc48(uVar4,uVar2);
      func_0x000107c41c88(lVar1);
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1029d365c; end: 1029d369b;  */

void FUN_1029d365c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1029d369c; end: 1029d3783;  */

void FUN_1029d369c(long param_1,long param_2)

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



/* Entry: 1029d3784; end: 1029d3b7f;  */

void FUN_1029d3784(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000285a8(0x112ed4f40,&UNK_10dafe5c0);
  func_0x0001000838ec(param_2);
  func_0x0001029d3838(uVar6,uVar3,uVar1,uVar4,uVar2,param_2,uVar5);
  func_0x000107c61574(param_2);
  func_0x000100082720("ShareUpsellPresenterImplEntryPointProvider",0x2a,2);
  *param_1 = uVar6;
  return;
}



/* Entry: 1029d3b80; end: 1029d3b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d3b80(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [56];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(auStack_c0);
  func_0x000100083b20(&uStack_c8);
  FUN_1029d7fb8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ed4f50) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ed4f58) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ed4f60) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ed4f68) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ed4f70) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ed4f78);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 4) = 1;
  func_0x000107c61614(lVar3 + _DAT_112ed4f80,0);
  *(undefined8 *)(lVar3 + _DAT_112ed4f88) = 0;
  *(undefined1 *)(lVar3 + _DAT_112ed4f90) = 0;
  *(undefined1 *)(lVar3 + _DAT_112ed4f98) = 0;
  *(undefined1 *)(lVar3 + _DAT_112ed4fa0) = 0;
  lVar6 = _DAT_112ed4fa8;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + lVar6) = puVar4;
  plVar7 = (long *)(lVar3 + _DAT_112ed4fb0);
  lVar5 = 0;
  func_0x0001029d81f4();
  lVar6 = lVar5;
  func_0x000107c613fc();
  puVar4 = PTR_PTR_1126abc68;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar6 + 0x10) = puVar4;
  plVar7[3] = lVar5;
  plVar7[4] = (long)&PTR_DAT_11057f340;
  *plVar7 = lVar6;
  *(undefined8 *)(lVar3 + _DAT_112ed4fb8) = uStack_68;
  *(undefined8 *)(lVar3 + _DAT_112ed4fc0) = uStack_70;
  *(undefined8 *)(lVar3 + _DAT_112ed4fc8) = uStack_78;
  *(undefined8 *)(lVar3 + _DAT_112ed4fd0) = uStack_80;
  *(undefined8 *)(lVar3 + _DAT_112ed4fd8) = uStack_88;
  FUN_1029d7690(auStack_c0,lVar3 + _DAT_112ed4fe0);
  *(undefined8 *)(lVar3 + _DAT_112ed4fe8) = uStack_c8;
  plVar7 = &lStack_d8;
  lStack_d8 = lVar3;
  lStack_d0 = lVar2;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  func_0x0001029d76cc(auStack_c0);
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 1029d3b94; end: 1029d3d83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1029d3b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed4f50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4f58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4f60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4f68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4f70) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed4f78);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 4) = 1;
  func_0x000107c61614(unaff_x20 + _DAT_112ed4f80,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ed4f88) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ed4f90) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ed4f98) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ed4fa0) = 0;
  lVar5 = _DAT_112ed4fa8;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar5) = puVar3;
  plVar2 = (long *)(unaff_x20 + _DAT_112ed4fb0);
  lVar4 = 0;
  func_0x0001029d81f4();
  lVar5 = lVar4;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126abc68;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + 0x10) = puVar3;
  plVar2[3] = lVar4;
  plVar2[4] = (long)&PTR_DAT_11057f340;
  *plVar2 = lVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4fb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4fc0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4fc8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4fd0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4fd8) = param_5;
  FUN_1029d7690(param_6,unaff_x20 + _DAT_112ed4fe0);
  *(undefined8 *)(unaff_x20 + _DAT_112ed4fe8) = param_7;
  puVar6 = auStack_70;
  func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
  func_0x0001029d76cc(param_6);
  return puVar6;
}



/* Entry: 1029d3d84; end: 1029d4a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d3d84(double param_1,double param_2,double param_3,double param_4)

{
  uint *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined1 *puVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  long unaff_x20;
  undefined8 uVar29;
  undefined *puVar30;
  long lVar31;
  double dVar32;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [16];
  
  *(undefined1 *)(unaff_x20 + _DAT_112ed4f90) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ed4f98) = 0;
  puVar7 = *(undefined1 **)(unaff_x20 + _DAT_112ed4fc8);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  puVar8 = puVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  if (puVar8 == (undefined1 *)0x0) {
    plVar20 = (long *)(unaff_x20 + _DAT_112ed4fb0);
    func_0x0001000a8868(plVar20,plVar20[3]);
    puVar1 = (uint *)(unaff_x20 + _DAT_112ed4fe0);
    lVar31 = *(long *)(puVar1 + 4);
    uVar9 = (ulong)*puVar1;
    uVar29 = *(undefined8 *)(*plVar20 + 0x10);
    uVar27 = 0x800000010f0d5e80;
    uVar24 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010f0d5e80);
    func_0x000108f94dd8();
    func_0x000107c61180();
    uVar13 = uVar27;
    if (lVar31 == 0) {
      func_0x000107c5faec();
      uVar13 = uVar27;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar27);
    }
    FUN_1029d8214(uVar9);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar13);
    func_0x0001060803f8(uVar29,uVar24,lVar31,uVar9,1);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(lVar31);
    func_0x000107c61170(uVar9);
    FUN_1029d7690(puVar1,&puStack_c0);
    puVar8 = auStack_90;
    func_0x000107c61618();
    func_0x0001029d76cc(&puStack_c0);
    if (puVar8 == (undefined1 *)0x0) {
      return;
    }
    func_0x000107c5d7c0(puVar8);
  }
  else {
    uVar9 = 0;
    FUN_1029d4a60();
    if (((uVar9 & 1) != 0) && (FUN_1029d4e38(), uVar9 != 0)) {
      puVar1 = (uint *)(unaff_x20 + _DAT_112ed4fe0);
      uVar4 = *puVar1;
      puVar10 = PTR_PTR_1126abc70;
      func_0x000107c610f8();
      func_0x000107c4912c();
      lVar11 = 0;
      FUN_1029d8568();
      lVar31 = lVar11;
      func_0x000107c610f8();
      *(undefined **)(lVar31 + _DAT_112ed50e8) = puVar10;
      *(ulong *)(lVar31 + _DAT_112ed50f0) = uVar9;
      *(undefined1 **)(lVar31 + _DAT_112ed50f8) = puVar8;
      puVar12 = PTR_s_initWithNibName_bundle__1125e9850;
      lStack_d0 = lVar31;
      lStack_c8 = lVar11;
      func_0x000107c61174();
      func_0x000107c615f0(puVar8);
      func_0x000107c61174();
      plVar20 = &lStack_d0;
      func_0x000107c61154(plVar20,puVar12,0,0);
      puVar12 = *(undefined **)(unaff_x20 + _DAT_112ed4fb8);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (puVar12 != (undefined *)0x0) {
        puVar30 = puVar12;
        func_0x000108faa9b4();
        if ((int)puVar30 != 0) {
          func_0x0001000b9aa4();
          func_0x000107c615e8(puVar12);
LAB_1029d3f10:
          func_0x000107c61174();
          plVar25 = plVar20;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (plVar25 == (long *)0x0) {
            plVar25 = (long *)(unaff_x20 + _DAT_112ed4fb0);
            func_0x0001000a8868(plVar25,plVar25[3]);
            lVar31 = *(long *)(puVar1 + 4);
            uVar29 = *(undefined8 *)(*plVar25 + 0x10);
            uVar24 = 0x69646c61765f6f6e;
            uVar27 = 0xed0000776569765f;
            func_0x000107c5fadc(0x69646c61765f6f6e,0xed0000776569765f);
            func_0x000108f94dd8();
            func_0x000107c61180();
            uVar13 = uVar27;
            if (lVar31 == 0) {
              func_0x000107c5faec();
              uVar13 = uVar27;
              func_0x000107c5fadc();
              func_0x000107c6142c(uVar27);
            }
            uVar19 = (ulong)uVar4;
            FUN_1029d8214(uVar19);
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar13);
            func_0x0001060803f8(uVar29,uVar24,lVar31,uVar19,1);
            func_0x000107c61170(uVar24);
            func_0x000107c61170(lVar31);
            func_0x000107c61170(uVar19);
            FUN_1029d7690(puVar1,&puStack_c0);
            puVar7 = auStack_90;
            func_0x000107c61618();
            func_0x0001029d76cc(&puStack_c0);
            if (puVar7 != (undefined1 *)0x0) {
              func_0x000107c5d7c0(puVar7);
              func_0x000107c615e8(puVar7);
            }
            func_0x000107c61170(plVar20);
            func_0x000107c615e8(puVar8);
            func_0x000107c61170(uVar9);
          }
          else {
            FUN_1029d7df0(puVar30);
            pdVar2 = (double *)(unaff_x20 + _DAT_112ed4f78);
            *pdVar2 = param_1;
            pdVar2[1] = param_2;
            pdVar2[2] = param_3;
            pdVar2[3] = param_4;
            *(undefined1 *)(pdVar2 + 4) = 0;
            lVar11 = 0;
            FUN_1029d7ef4();
            func_0x000107c610f8();
            func_0x000107c469a4(param_1,param_2,param_3,param_4);
            func_0x000107c61180();
            lVar31 = lVar11;
            func_0x000107c4aba4();
            func_0x000107c61180();
            func_0x000107c539d4(0x4030000000000000);
            func_0x000107c61170(lVar31);
            lVar31 = lVar11;
            func_0x000107c4aba4(lVar11);
            func_0x000107c61180();
            func_0x000107c562fc();
            func_0x000107c61170(lVar31);
            puVar12 = &UNK_11057ee58;
            func_0x000107c613fc(&UNK_11057ee58,0x18,7);
            func_0x000107c61614(puVar12 + 0x10);
            puVar3 = (undefined8 *)(lVar11 + _DAT_112ed4ff0);
            uVar13 = *puVar3;
            uVar24 = puVar3[1];
            *puVar3 = 0x1029d7f14;
            puVar3[1] = puVar12;
            func_0x000107c6157c(puVar12);
            func_0x00010058d43c(uVar13,uVar24);
            func_0x000107c61574(puVar12);
            func_0x000107c3ec60(lVar11);
            func_0x000107c54b80(plVar25);
            func_0x000107c52ab8(plVar25);
            func_0x000107c3d89c(lVar11);
            puVar22 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
            func_0x000107c610f8();
            func_0x000107c48c2c();
            func_0x000107c3d6fc(lVar11);
            func_0x000107c5a378(lVar11);
            uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112ed4f68);
            *(long *)(unaff_x20 + _DAT_112ed4f68) = lVar11;
            func_0x000107c61170(uVar13);
            func_0x000107c61604(unaff_x20 + _DAT_112ed4f80,plVar25);
            dVar32 = param_1;
            func_0x000107c609b0(param_1,param_2,param_3,param_4);
            func_0x000107c54b80(param_1,-dVar32,param_3,param_4,lVar11);
            func_0x000107c3d89c(puVar30);
            puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
            func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
            puVar12 = &UNK_11057ee80;
            func_0x000107c613fc(&UNK_11057ee80,0x38,7);
            *(long *)(puVar12 + 0x10) = lVar11;
            *(double *)(puVar12 + 0x18) = param_1;
            *(double *)(puVar12 + 0x20) = param_2;
            *(double *)(puVar12 + 0x28) = param_3;
            *(double *)(puVar12 + 0x30) = param_4;
            puVar21 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_a0 = FUN_1029d7f34;
            puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b8 = 0x42000000;
            puStack_b0 = &UNK_1000f6b44;
            puStack_a8 = &UNK_11057ee98;
            ppuVar15 = &puStack_c0;
            puStack_98 = puVar12;
            func_0x000107c60bc4(ppuVar15);
            puVar12 = puStack_98;
            func_0x000107c61174();
            func_0x000107c61574(puVar12);
            pcStack_a0 = FUN_1029d7848;
            puStack_98 = (undefined *)0x0;
            puStack_c0 = puVar21;
            uStack_b8 = 0x42000000;
            puStack_b0 = &UNK_100288f10;
            puStack_a8 = &UNK_11057eec0;
            ppuVar16 = &puStack_c0;
            func_0x000107c60bc4(ppuVar16);
            func_0x000107c3dcd8(0x3fd6666666666666,0,0x3fe999999999999a,0x3fb999999999999a,puVar14);
            func_0x000107c60bd0(ppuVar16);
            func_0x000107c60bd0(ppuVar15);
            FUN_1029d7690(puVar1,&puStack_c0);
            puVar7 = auStack_90;
            func_0x000107c61618();
            func_0x0001029d76cc(&puStack_c0);
            if (puVar7 != (undefined1 *)0x0) {
              puVar17 = puVar7;
              func_0x000107c61150(puVar7,PTR_s_respondsToSelector__11262c7e0,
                                  PTR_s_upsellPresenterDidBeginPresentin_1126815d8);
              if (((ulong)puVar17 & 1) != 0) {
                func_0x000107c5d7b8(puVar7);
              }
              func_0x000107c615e8(puVar7);
            }
            plVar18 = (long *)(unaff_x20 + _DAT_112ed4fb0);
            lVar26 = plVar18[3];
            func_0x0001000a8868(plVar18,lVar26);
            lVar28 = *(long *)(puVar1 + 4);
            uVar13 = *(undefined8 *)(*plVar18 + 0x10);
            func_0x000108f94dd8();
            func_0x000107c61180();
            lVar31 = lVar26;
            if (lVar28 == 0) {
              func_0x000107c5faec();
              lVar31 = lVar26;
              func_0x000107c5fadc();
              func_0x000107c6142c(lVar26);
            }
            uVar19 = (ulong)uVar4;
            FUN_1029d8214(uVar19);
            func_0x000107c5fadc();
            func_0x000107c6142c(lVar31);
            func_0x0001060806b8(uVar13,lVar28,uVar19,1);
            func_0x000107c61170(lVar28);
            func_0x000107c61170(uVar19);
            FUN_1029d53bc();
            func_0x0001029d56c0();
            iVar6 = 2;
            func_0x000100029b9c(2,0x10,0,0);
            if (iVar6 != 0) {
              puVar12 = puVar30;
              func_0x000107c5e400();
              func_0x000107c61180();
              if (puVar12 != (undefined *)0x0) {
                puVar21 = &UNK_10dafe5f8;
                puStack_c0 = puVar12;
                func_0x000107c614e0();
                puVar14 = &UNK_11057ee58;
                func_0x000107c613fc(&UNK_11057ee58,0x18,7);
                func_0x000107c61614(puVar14 + 0x10);
                puVar23 = puVar21;
                func_0x000107c5ed54(puVar21,0,0x1029d7f60,puVar14,
                                    PTR___sSo8NSObjectC10Foundation27_KeyValueCodingAndObservingACWP_110351200
                                   );
                func_0x000107c61170(puVar12);
                func_0x000107c61574(puVar21);
                func_0x000107c61574(puVar14);
                func_0x000107c61170(puVar10);
                func_0x000107c61170(uVar9);
                func_0x000107c615e8(puVar8);
                func_0x000107c61170(plVar20);
                func_0x000107c61170(lVar11);
                func_0x000107c61170(plVar25);
                func_0x000107c61170(puVar22);
                func_0x000107c61170(puVar30);
                func_0x000107c61170(puVar30);
                uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112ed4f88);
                *(undefined **)(unaff_x20 + _DAT_112ed4f88) = puVar23;
                func_0x000107c61170(uVar13);
                return;
              }
            }
            func_0x000107c61170(puVar10);
            func_0x000107c61170(uVar9);
            func_0x000107c615e8(puVar8);
            func_0x000107c61170(plVar20);
            func_0x000107c61170(lVar11);
            func_0x000107c61170(plVar25);
            puVar10 = puVar22;
          }
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar30);
          func_0x000107c61170(puVar30);
          return;
        }
        func_0x000107c615e8(puVar12);
      }
      puVar12 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168();
      func_0x000107c5a9c4();
      func_0x000107c61180();
      puVar30 = puVar12;
      func_0x000107c40210();
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      uVar24 = 0;
      FUN_1029d80d8(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      uVar13 = 0x112d36e48;
      func_0x0001029d806c(0x112d36e48,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      puVar12 = puVar30;
      func_0x000107c5fe10(puVar30,uVar24,uVar13);
      func_0x000107c61170(puVar30);
      puVar21 = puVar12;
      FUN_1029d50e0();
      func_0x000107c6142c(puVar12);
      if ((ulong)puVar21 >> 0x3e == 0) {
        puVar12 = *(undefined **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar12 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar21) {
          puVar12 = puVar21;
        }
        func_0x000107c60480();
      }
      if (puVar12 != (undefined *)0x0) {
        puVar30 = (undefined *)0x0;
        do {
          if (((ulong)puVar21 & 0xc000000000000001) == 0) {
            if (*(undefined **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10) <= puVar30) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1029d4900);
              (*pcVar5)();
            }
            puVar22 = *(undefined **)(puVar21 + (long)puVar30 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar22 = puVar30;
            FUN_1029d7c34(puVar30,puVar21,&PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59528);
          }
          puVar14 = puVar30 + 1;
          if (SCARRY8((long)puVar30,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1029d48fc);
            (*pcVar5)();
          }
          puVar23 = puVar22;
          func_0x000107c3d0e4();
          if (puVar23 == (undefined *)0x0) {
            func_0x000107c6142c(puVar21);
            puVar12 = puVar22;
            func_0x000107c5e408();
            func_0x000107c61180();
            func_0x000107c61170(puVar22);
            uVar13 = 0;
            FUN_1029d80d8(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
            puVar21 = puVar12;
            func_0x000107c5fc54(puVar12,uVar13);
            func_0x000107c61170(puVar12);
            if ((ulong)puVar21 >> 0x3e == 0) {
              puVar12 = *(undefined **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar12 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar21) {
                puVar12 = puVar21;
              }
              func_0x000107c60480();
            }
            if (puVar12 != (undefined *)0x0) {
              puVar22 = (undefined *)0x0;
              goto LAB_1029d4710;
            }
            break;
          }
          func_0x000107c61170(puVar22);
          puVar30 = puVar30 + 1;
        } while (puVar14 != puVar12);
      }
      goto LAB_1029d493c;
    }
    FUN_1029d7690(unaff_x20 + _DAT_112ed4fe0,&puStack_c0);
    puVar7 = auStack_90;
    func_0x000107c61618();
    func_0x0001029d76cc(&puStack_c0);
    if (puVar7 != (undefined1 *)0x0) {
      func_0x000107c5d7c0(puVar7);
      func_0x000107c615e8(puVar7);
    }
  }
  func_0x000107c615e8(puVar8);
  return;
  while( true ) {
    func_0x000107c61170(puVar30);
    puVar22 = puVar22 + 1;
    if (puVar14 == puVar12) break;
LAB_1029d4710:
    if (((ulong)puVar21 & 0xc000000000000001) == 0) {
      if (*(undefined **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10) <= puVar22) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1029d4908);
        (*pcVar5)();
      }
      puVar30 = *(undefined **)(puVar21 + (long)puVar22 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar30 = puVar22;
      FUN_1029d7c34(puVar22,puVar21,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x112d36e50);
    }
    puVar14 = puVar22 + 1;
    if (SCARRY8((long)puVar22,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1029d4904);
      (*pcVar5)();
    }
    puVar23 = puVar30;
    func_0x000107c49f64();
    if ((int)puVar23 != 0) {
      func_0x000107c6142c(puVar21);
      goto LAB_1029d3f10;
    }
  }
LAB_1029d493c:
  func_0x000107c6142c(puVar21);
  plVar25 = (long *)(unaff_x20 + _DAT_112ed4fb0);
  func_0x0001000a8868(plVar25,plVar25[3]);
  lVar31 = *(long *)(puVar1 + 4);
  uVar29 = *(undefined8 *)(*plVar25 + 0x10);
  uVar24 = 0x6f646e69775f6f6e;
  uVar27 = 0xe900000000000077;
  func_0x000107c5fadc(0x6f646e69775f6f6e,0xe900000000000077);
  func_0x000108f94dd8();
  func_0x000107c61180();
  uVar13 = uVar27;
  if (lVar31 == 0) {
    func_0x000107c5faec();
    uVar13 = uVar27;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar27);
  }
  uVar19 = (ulong)uVar4;
  FUN_1029d8214(uVar19);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar13);
  func_0x0001060803f8(uVar29,uVar24,lVar31,uVar19,1);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(uVar19);
  FUN_1029d7690(puVar1,&puStack_c0);
  puVar7 = auStack_90;
  func_0x000107c61618();
  func_0x0001029d76cc(&puStack_c0);
  if (puVar7 != (undefined1 *)0x0) {
    func_0x000107c5d7c0(puVar7);
    func_0x000107c615e8(puVar7);
  }
  func_0x000107c61170(plVar20);
  func_0x000107c615e8(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar10);
  return;
}



/* Entry: 1029d4a60; end: 1029d4e37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1029d4a60(undefined *param_1,undefined *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  lVar10 = _DAT_112ed4f58;
  if (*(long *)(unaff_x20 + _DAT_112ed4f58) != 0) {
    return 1;
  }
  if (((ulong)param_1 & 1) == 0) {
    func_0x00010451338c();
    puVar2 = param_1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      param_2 = PTR_s_respondsToSelector__11262c7e0;
      func_0x000107c61150(puVar2,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_topmostViewController_11267b0f0);
      if (((ulong)puVar3 & 1) != 0) {
        puVar3 = puVar2;
        func_0x000107c5cc6c(puVar2);
        func_0x000107c61180();
        func_0x000107c615e8(puVar2);
        param_1 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        func_0x000107c61170(puVar3);
        goto LAB_1029d4b38;
      }
      func_0x000107c615e8(puVar2);
    }
    plVar8 = (long *)(unaff_x20 + _DAT_112ed4fb0);
    func_0x0001000a8868(plVar8,plVar8[3]);
    lVar10 = *(long *)((uint *)(unaff_x20 + _DAT_112ed4fe0) + 4);
    uVar13 = (ulong)*(uint *)(unaff_x20 + _DAT_112ed4fe0);
    uVar12 = *(undefined8 *)(*plVar8 + 0x10);
    uVar6 = 0xd000000000000012;
    uVar9 = 0x800000010f0d5ea0;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f0d5ea0);
    func_0x000108f94dd8();
    func_0x000107c61180();
    uVar11 = uVar9;
    if (lVar10 == 0) {
      func_0x000107c5faec();
      uVar11 = uVar9;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar9);
    }
    FUN_1029d8214(uVar13);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar11);
    func_0x0001060803f8(uVar12,uVar6,lVar10,uVar13,1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar10);
  }
  else {
    FUN_1029d5a9c();
LAB_1029d4b38:
    puVar1 = (uint *)(unaff_x20 + _DAT_112ed4fe0);
    lVar7 = *(long *)(puVar1 + 4);
    puVar2 = param_1;
    func_0x000107c615f0(param_1);
    func_0x00010011df08();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126b3ee8;
    func_0x000107c610f8();
    func_0x000107c5fadc(puVar3,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c48670();
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar3);
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ed4f50);
    *(undefined **)(unaff_x20 + _DAT_112ed4f50) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c61170(uVar11);
    lVar4 = *(long *)(unaff_x20 + _DAT_112ed4fd8);
    func_0x000107c42e94();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      lVar7 = lVar5;
      func_0x000107c40aac();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c615e8(param_1);
      func_0x000107c615e8(lVar5);
      uVar11 = *(undefined8 *)(unaff_x20 + lVar10);
      *(long *)(unaff_x20 + lVar10) = lVar7;
      func_0x000107c615e8(uVar11);
      return 1;
    }
    plVar8 = (long *)(unaff_x20 + _DAT_112ed4fb0);
    func_0x0001000a8868(plVar8,plVar8[3]);
    uVar13 = (ulong)*puVar1;
    uVar12 = *(undefined8 *)(*plVar8 + 0x10);
    uVar9 = 0x800000010f0d5ec0;
    uVar6 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010f0d5ec0);
    func_0x000108f94dd8();
    func_0x000107c61180();
    uVar11 = uVar9;
    if (lVar7 == 0) {
      func_0x000107c5faec();
      uVar11 = uVar9;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar9);
    }
    FUN_1029d8214(uVar13);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar11);
    func_0x0001060803f8(uVar12,uVar6,lVar7,uVar13,1);
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar7);
  }
  func_0x000107c61170(uVar13);
  return 0;
}



/* Entry: 1029d4e38; end: 1029d50df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1029d4e38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar10 = &puStack_90;
  puVar9 = &UNK_11057ee58;
  puVar1 = puVar9;
  func_0x000107c613fc(&UNK_11057ee58,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = puVar9;
  func_0x000107c613fc(&UNK_11057ee58,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = puVar9;
  func_0x000107c613fc(&UNK_11057ee58,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = PTR_PTR_1126abc78;
  func_0x000107c610f8(PTR_PTR_1126abc78);
  uVar5 = 0x1029d7f68;
  FUN_1029d7b04(0x1029d7f68,puVar1,FUN_1029d7f70,puVar2,FUN_1029d7f90,puVar3,puVar4);
  puVar2 = puVar9;
  func_0x000107c613fc(&UNK_11057ee58,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x1029d7f98;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1012934f8;
  puStack_78 = &UNK_11057eee8;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c54e88(uVar5);
  func_0x000107c60bd0(ppuVar6);
  puVar2 = PTR_PTR_1126b0c98;
  func_0x000107c610f8(PTR_PTR_1126b0c98);
  func_0x000107c47f1c();
  lVar7 = *(long *)(unaff_x20 + _DAT_112ed4fc0);
  func_0x000107c439dc();
  func_0x000107c61180();
  lVar8 = lVar7;
  (**(code **)(lVar7 + 0x10))();
  func_0x000107c61180();
  func_0x000107c60bd0(lVar7);
  lVar7 = lVar8;
  func_0x000107c5c734(lVar8);
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  func_0x000107c54c28(uVar5);
  func_0x000107c615e8(lVar7);
  func_0x000107c613fc(&UNK_11057ee58,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  uStack_70 = 0x1029d7fa0;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100c75f50;
  puStack_78 = &UNK_11057ef10;
  puStack_68 = puVar9;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c54bdc(uVar5);
  func_0x000107c60bd0(ppuVar10);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c59210(uVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar9);
  return uVar5;
}



/* Entry: 1029d50e0; end: 1029d53bb;  */

undefined * FUN_1029d50e0(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar12;
    puVar10 = param_1;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    FUN_1029d80d8(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = 0x112d36e48;
    func_0x0001029d806c(0x112d36e48,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    func_0x000107c5fe30(&puStack_88,puVar10,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar9 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar9;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      func_0x000107c602ac();
      if (puVar10 == (undefined *)0x0) {
LAB_1029d5378:
        puStack_58 = (undefined *)0x0;
LAB_1029d537c:
        func_0x000102925640(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      FUN_1029d80d8(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1029d53bc);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_1029d5378;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
    if (puVar10 == (undefined *)0x0) goto LAB_1029d537c;
    func_0x000107c61168(puVar7);
    puVar6 = puVar10;
    func_0x000107c6148c(puVar10,puVar7);
    uVar9 = uVar13;
    lVar14 = lVar2;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
    }
    else {
      puVar10 = puStack_98;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_98) {
            puVar7 = puStack_98;
          }
          func_0x000107c60480(puVar7);
        }
        puVar10 = (undefined *)0x0;
        func_0x00010109b320(0,puVar7 + 1,1,puStack_98);
        puStack_98 = puVar10;
      }
      uVar8 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x00010109b320(puVar10,uVar13 + 1,1,puStack_98);
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        puStack_98 = puVar10;
      }
      *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar8 + uVar13 * 8 + 0x20) = puVar6;
    }
  } while( true );
}



/* Entry: 1029d53bc; end: 1029d5913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d53bc(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  long extraout_x8;
  long unaff_x20;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar3 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar1 = _DAT_112ed4f70;
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar14 = *(ulong *)(unaff_x20 + _DAT_112ed4fe0 + 0x20);
  if (0 < (long)uVar14) {
    lVar12 = *(long *)(unaff_x20 + _DAT_112ed4f70);
    if (lVar12 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x000107c6157c(lVar12);
      func_0x000107c5f848();
      func_0x000107c61574(lVar12);
      uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c61574(uVar4);
    lVar12 = *(long *)(unaff_x20 + _DAT_112ed4fb8);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar12 != 0) {
      lVar5 = lVar12;
      func_0x000108faa9a0();
      if ((int)lVar5 == 0) {
        func_0x000107c615e8(lVar12);
      }
      else {
        lVar13 = *(long *)(*(long *)(unaff_x20 + _DAT_112ed4fe8) + _DAT_113091b78);
        lVar5 = lVar13;
        func_0x000107c615f0();
        func_0x000107c3dfc0();
        func_0x000107c615e8(lVar13);
        func_0x000107c615e8(lVar12);
        if (lVar5 != 0) {
          *(undefined1 *)(unaff_x20 + _DAT_112ed4fa0) = 1;
          return;
        }
      }
    }
    puVar6 = &UNK_11057ee58;
    func_0x000107c613fc(&UNK_11057ee58,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uStack_80 = 0x1029d80cc;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_11057f2f0;
    ppuVar7 = &puStack_a0;
    puStack_78 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar8 = ppuVar7;
    func_0x0001001c7eec();
    func_0x000107c6157c(puVar6);
    uVar4 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar9 = uVar4;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar10,&puStack_a8,uVar4,uVar9,lVar3,ppuVar8);
    func_0x000107c5f850();
    func_0x000107c613fc();
    func_0x000107c5f844(puVar10,ppuVar7);
    puVar2 = puStack_78;
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined1 **)(unaff_x20 + lVar1) = puVar10;
    func_0x000107c6157c(puVar10);
    func_0x000107c61574(uVar4);
    pcVar11 = "scheduleAutoDismissIfNeeded()";
    func_0x0001000c10c0("scheduleAutoDismissIfNeeded()");
    func_0x000107c61180();
    uStack_80 = 0x1029d80d4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_11057f318;
    ppuVar8 = &puStack_a0;
    puStack_78 = puVar10;
    func_0x000107c60bc4(ppuVar8);
    puVar6 = puStack_78;
    func_0x000107c6157c(puVar10);
    func_0x000107c61574(puVar6);
    func_0x000107c4e528((double)uVar14 / 1000.0,pcVar11);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puVar10);
    func_0x000107c615e8(pcVar11);
  }
  return;
}



/* Entry: 1029d5914; end: 1029d59bf; -[_TtC34ShareUpsellPresenterImplementation24ShareUpsellPresenterImpl present] */

void FUN_1029d5914(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029d3d84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029d59c0; end: 1029d5a9b;  */

/* WARNING: Possible PIC construction at 0x0001029d5a6c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d59c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  if ((((*(byte *)(unaff_x20 + _DAT_112ed4f90) & 1) == 0) &&
      ((*(byte *)(unaff_x20 + _DAT_112ed4f98) & 1) == 0)) &&
     (lVar2 = *(long *)(unaff_x20 + _DAT_112ed4f68), lVar2 != 0)) {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      FUN_1029d7df0();
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed4f78);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
      *(undefined1 *)(puVar1 + 4) = 0;
      func_0x000107c54b80(lVar2);
      lVar4 = unaff_x20 + _DAT_112ed4f80;
      func_0x000107c61618();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar3);
      }
      else {
        func_0x000107c3ec60(lVar2);
        func_0x000107c54b80(lVar4);
        lVar2 = lVar4;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1029d5a9c; end: 1029d5c03;  */

undefined * FUN_1029d5a9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_b0;
  puVar3 = &UNK_11057ee58;
  puVar2 = puVar3;
  func_0x000107c613fc(&UNK_11057ee58,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000107c613fc(&UNK_11057ee58,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1029d80ac;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100e1779c;
  puStack_68 = &UNK_11057f228;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(ppuVar5);
  uStack_90 = 0x1029d80b4;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100e17304;
  puStack_98 = &UNK_11057f250;
  puStack_88 = puVar3;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c47be0(puVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puStack_88);
  puVar1 = puStack_58;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar1);
  return puVar4;
}



/* Entry: 1029d5c04; end: 1029d5c3f; -[_TtC34ShareUpsellPresenterImplementation24ShareUpsellPresenterImpl ensureShareServiceWithHostedElsewhere:] */

uint FUN_1029d5c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1029d4a60(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 1029d5c40; end: 1029d5d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d5c40(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010451338c();
    puVar3 = puVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar2 = puVar3;
      func_0x000107c61150(puVar3,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_topmostViewController_11267b0f0);
      if (((ulong)puVar2 & 1) == 0) {
        func_0x000107c61170(puVar1);
        func_0x000107c615e8(puVar3);
        return;
      }
      puVar2 = puVar3;
      func_0x000107c5cc6c(puVar3);
      func_0x000107c61180();
      func_0x000107c615e8(puVar3);
      puVar3 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      uVar4 = *(undefined8 *)(puVar1 + _DAT_112ed4f60);
      *(undefined **)(puVar1 + _DAT_112ed4f60) = puVar3;
      func_0x000107c61174();
      func_0x000107c61170(uVar4);
      func_0x000107c3e2c0(puVar3);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar2);
      puVar1 = puVar3;
    }
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1029d5d7c; end: 1029d5ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d5d7c(code *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  ppuVar3 = &puStack_b0;
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar6 = *(long *)(lVar1 + _DAT_112ed4f60);
    lVar2 = lVar6;
    func_0x000107c61174(lVar6);
    func_0x000107c61170(lVar1);
    if (lVar6 != 0) {
      func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
      param_3 = param_3 + 0x10;
      func_0x000107c61618();
      if (param_3 != 0) {
        uVar5 = *(undefined8 *)(param_3 + _DAT_112ed4f60);
        *(undefined8 *)(param_3 + _DAT_112ed4f60) = 0;
        func_0x000107c61170();
        func_0x000107c61170(uVar5);
      }
      puVar4 = (undefined1 *)0x0;
      if (param_1 != (code *)0x0) {
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_1000b0c7c;
        puStack_98 = &UNK_11057f278;
        pcStack_90 = param_1;
        uStack_88 = param_2;
        func_0x000107c60bc4(&puStack_b0);
        uVar5 = uStack_88;
        func_0x000107c6157c(param_2);
        func_0x000107c61574(uVar5);
        puVar4 = (undefined1 *)ppuVar3;
      }
      func_0x000107c41864(lVar2);
      func_0x000107c60bd0(puVar4);
      func_0x000107c61170(lVar2);
      return;
    }
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 1029d5ebc; end: 1029d5f77;  */

/* WARNING: Possible PIC construction at 0x0001029d5f60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029d5f64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d5ebc(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112ed4fb0);
  lVar2 = plVar1[3];
  func_0x0001000a8868(plVar1,lVar2);
  uVar6 = (ulong)*(uint *)(unaff_x20 + _DAT_112ed4fe0);
  lVar4 = *(long *)((uint *)(unaff_x20 + _DAT_112ed4fe0) + 4);
  uVar5 = *(undefined8 *)(*plVar1 + 0x10);
  func_0x000108f94dd8();
  func_0x000107c61180();
  lVar3 = lVar2;
  if (lVar4 == 0) {
    func_0x000107c5faec();
    lVar3 = lVar2;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar2);
  }
  FUN_1029d8214(uVar6);
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar3);
  func_0x0001060806b8(uVar5,lVar4,uVar6,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1029d5f78; end: 1029d5ffb; -[_TtC34ShareUpsellPresenterImplementation24ShareUpsellPresenterImpl logHostedRowImpression] */

void FUN_1029d5f78(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029d5ebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029d5ffc; end: 1029d617f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d5ffc(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_78 [48];
  undefined1 auStack_48 [8];
  
  lVar5 = _DAT_112ed4f70;
  lVar6 = *(long *)(unaff_x20 + _DAT_112ed4f70);
  if (lVar6 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar6);
    func_0x000107c5f848();
    func_0x000107c61574(lVar6);
    uVar1 = *(undefined8 *)(unaff_x20 + lVar5);
  }
  *(undefined8 *)(unaff_x20 + lVar5) = 0;
  func_0x000107c61574(uVar1);
  func_0x000108f95f24();
  lVar5 = _DAT_112ed4fe0;
  FUN_1029d7690(unaff_x20 + _DAT_112ed4fe0,auStack_78);
  puVar2 = auStack_48;
  func_0x000107c61618();
  func_0x0001029d76cc(auStack_78);
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
    func_0x000107c61150(puVar2,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_upsellPresenterDidTapDestination_1126815f0);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x000107c5d7c4(puVar2);
    }
    func_0x000107c615e8(puVar2);
  }
  plVar4 = (long *)(unaff_x20 + _DAT_112ed4fb0);
  lVar6 = plVar4[3];
  func_0x0001000a8868(plVar4,lVar6);
  uVar7 = (ulong)*(uint *)(unaff_x20 + lVar5);
  uVar1 = *(undefined8 *)(*plVar4 + 0x10);
  func_0x000108f94918();
  func_0x000107c61180();
  lVar5 = lVar6;
  if (param_1 == 0) {
    func_0x000107c5faec();
    lVar5 = lVar6;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar6);
  }
  FUN_1029d8214(uVar7);
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar5);
  func_0x0001060808e8(uVar1,param_1,uVar7,1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar7);
  if (*(long *)(unaff_x20 + _DAT_112ed4f58) != 0) {
    func_0x000107c4464c();
  }
  return;
}



/* Entry: 1029d6180; end: 1029d61d7;  */

void FUN_1029d6180(long param_1,code *param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    (*param_2)();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1029d61d8; end: 1029d638f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d61d8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = _DAT_112ed4f70;
  lVar10 = *(long *)(unaff_x20 + _DAT_112ed4f70);
  if (lVar10 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c6157c(lVar10);
    func_0x000107c5f848();
    func_0x000107c61574(lVar10);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61574(uVar2);
  lVar1 = _DAT_112ed4fe0;
  FUN_1029d7690(unaff_x20 + _DAT_112ed4fe0,&puStack_68);
  puVar3 = auStack_38;
  func_0x000107c61618();
  func_0x0001029d76cc(&puStack_68);
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
    func_0x000107c61150(puVar3,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_upsellPresenterDidDismissByUser_1126815e0);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000107c5d7bc(puVar3);
    }
    func_0x000107c615e8(puVar3);
  }
  plVar5 = (long *)(unaff_x20 + _DAT_112ed4fb0);
  lVar10 = plVar5[3];
  func_0x0001000a8868(plVar5,lVar10);
  uVar9 = (ulong)*(uint *)(unaff_x20 + lVar1);
  uVar2 = *(undefined8 *)(*plVar5 + 0x10);
  FUN_1029d8214(uVar9);
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar10);
  func_0x000106080b18(uVar2,uVar9,1);
  func_0x000107c61170(uVar9);
  pcVar6 = "dismissHandler()";
  func_0x0001000c10c0("dismissHandler()");
  func_0x000107c61180();
  puVar7 = &UNK_11057ee58;
  func_0x000107c613fc(&UNK_11057ee58,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  uStack_48 = 0x1029d7ff0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x42000000;
  puStack_58 = &UNK_1000f6b44;
  puStack_50 = &UNK_11057f070;
  ppuVar8 = &puStack_68;
  puStack_40 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_40);
  func_0x000107c4e524(pcVar6);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c615e8(pcVar6);
  return;
}



/* Entry: 1029d6390; end: 1029d684b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029d6390(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c453e4();
    func_0x000107c4a8a4(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = puVar4;
    func_0x000107c5cb24(puVar4);
    func_0x000107c61180();
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_112ed4fb8);
    func_0x000107c3fa04();
    func_0x000107c61180();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar1 != 0) {
      lVar7 = *(long *)(param_1 + _DAT_112ed4fe0 + 8);
      puVar2 = *(undefined **)(lVar7 + _DAT_113034af0);
      func_0x000108f936d8(puVar2,*(undefined8 *)(lVar7 + _DAT_113034af8),0,lVar1);
      func_0x000107c61180();
      uVar3 = 0;
      FUN_1029d80d8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = 0x112d5cec0;
      func_0x0001029d806c(0x112d5cec0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar4 = puVar2;
      func_0x000107c5fe10(puVar2,uVar3,uVar5);
      func_0x000107c61170(puVar2);
      puVar2 = puVar4;
      FUN_102924c70(puVar4);
      func_0x000107c6142c(puVar4);
      func_0x000107c615e8(lVar1);
    }
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    uVar5 = 0;
    FUN_1029d80d8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar6 = puVar2;
    func_0x000107c5fc48(puVar2,uVar5);
    func_0x000107c6142c(puVar2);
    func_0x000107c4a8a4(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    puVar2 = puVar4;
    func_0x000107c5cb24(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(puVar4);
  return puVar2;
}



/* Entry: 1029d684c; end: 1029d68e7; -[_TtC34ShareUpsellPresenterImplementation24ShareUpsellPresenterImpl makeShareRowContext] */

void FUN_1029d684c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029d4e38();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029d68e8; end: 1029d6b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d68e8(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar1 = _DAT_112ed4f70;
  ppuVar6 = &puStack_60;
  lVar7 = *(long *)(unaff_x20 + _DAT_112ed4f70);
  if (lVar7 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c6157c(lVar7);
    func_0x000107c5f848();
    func_0x000107c61574(lVar7);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61574(uVar2);
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112ed4fa8));
  *(undefined1 *)(unaff_x20 + _DAT_112ed4f98) = 1;
  lVar1 = _DAT_112ed4f88;
  lVar7 = *(long *)(unaff_x20 + _DAT_112ed4f88);
  uVar2 = 0;
  if (lVar7 != 0) {
    func_0x000107c61174();
    func_0x000107c5ed04();
    func_0x000107c61170(lVar7);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar2);
  pcVar3 = "detachUpsell(wasPresented:)";
  func_0x0001000c10c0("detachUpsell(wasPresented:)");
  func_0x000107c61180();
  puVar4 = &UNK_11057ee58;
  func_0x000107c613fc(&UNK_11057ee58,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_11057f0a8;
  func_0x000107c613fc(&UNK_11057f0a8,0x19,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  puVar5[0x18] = param_1 & 1;
  uStack_40 = 0x1029d7ff8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11057f0c0;
  puStack_38 = puVar5;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 1029d6b08; end: 1029d6c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d6b08(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (*(char *)(param_2 + _DAT_112ed4fa0) == '\x01') {
      *(undefined1 *)(param_2 + _DAT_112ed4fa0) = 0;
      if (*(long *)(param_2 + _DAT_112ed4f68) != 0) {
        FUN_1029d53bc();
      }
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1029d6c2c; end: 1029d6f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d6c2c(long param_1,byte param_2)

{
  double *pdVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_98,0,0);
  lVar3 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar11 = *(long *)(lVar3 + _DAT_112ed4f68);
    if (lVar11 != 0) {
      puVar4 = &UNK_11057ee58;
      func_0x000107c613fc(&UNK_11057ee58,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar3);
      puVar5 = &UNK_11057f0f8;
      func_0x000107c613fc(&UNK_11057f0f8,0x21,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(long *)(puVar5 + 0x18) = lVar11;
      puVar5[0x20] = param_2 & 1;
      pdVar1 = (double *)(lVar3 + _DAT_112ed4f78);
      if (*(char *)(pdVar1 + 4) == '\x01') {
        func_0x000107c61174(lVar11);
        func_0x000107c61174();
        func_0x000107c6157c(puVar4);
        FUN_1029d6f70();
        func_0x000107c61574(puVar4);
        func_0x000107c61170(lVar11);
        func_0x000107c61574(puVar5);
        func_0x000107c61170(lVar3);
        return;
      }
      dVar14 = pdVar1[2];
      dVar13 = pdVar1[3];
      dVar16 = *pdVar1;
      dVar15 = pdVar1[1];
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c6157c(puVar4);
      dVar12 = dVar16;
      func_0x000107c609c8(dVar16,dVar15,dVar14,dVar13);
      func_0x000107c609b0(dVar16,dVar15,dVar14,dVar13);
      puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar8 = &UNK_11057f120;
      func_0x000107c613fc(&UNK_11057f120,0x20,7);
      *(long *)(puVar8 + 0x10) = lVar11;
      *(double *)(puVar8 + 0x18) = -dVar12 - dVar16;
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_c8 = (code *)0x1029d8010;
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0x42000000;
      puStack_d8 = &UNK_1000f6b44;
      puStack_d0 = &UNK_11057f138;
      ppuVar9 = &puStack_e8;
      puStack_c0 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar8 = puStack_c0;
      func_0x000107c61174(lVar11);
      func_0x000107c61574(puVar8);
      puVar8 = &UNK_11057f170;
      func_0x000107c613fc(&UNK_11057f170,0x20,7);
      *(undefined8 *)(puVar8 + 0x10) = 0x1029d8004;
      *(undefined **)(puVar8 + 0x18) = puVar5;
      pcStack_c8 = FUN_1029d804c;
      puStack_e8 = puVar2;
      uStack_e0 = 0x42000000;
      puStack_d8 = &UNK_100288f10;
      puStack_d0 = &UNK_11057f188;
      ppuVar10 = &puStack_e8;
      puStack_c0 = puVar8;
      func_0x000107c60bc4(ppuVar10);
      puVar8 = puStack_c0;
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar8);
      func_0x000107c3dcd4(0x3fd6666666666666,0,puVar7);
      func_0x000107c61170(lVar11);
      func_0x000107c61574(puVar5);
      func_0x000107c61170(lVar3);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61574(puVar4);
      return;
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_b0,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1029d7690(param_1 + _DAT_112ed4fe0,&puStack_e8);
    puVar6 = auStack_b8;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    func_0x0001029d76cc(&puStack_e8);
    if (puVar6 != (undefined1 *)0x0) {
      func_0x000107c5d7c0(puVar6);
      func_0x000107c615e8(puVar6);
    }
  }
  return;
}



/* Entry: 1029d6f70; end: 1029d702f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d6f70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4ff34(param_2);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112ed4f68);
    *(undefined8 *)(param_1 + _DAT_112ed4f68) = 0;
    func_0x000107c61170(uVar1);
    FUN_1029d7690(param_1 + _DAT_112ed4fe0,auStack_80);
    puVar2 = auStack_50;
    func_0x000107c61618();
    func_0x0001029d76cc(auStack_80);
    if (puVar2 != (undefined1 *)0x0) {
      func_0x000107c5d7c0(puVar2);
      func_0x000107c615e8(puVar2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1029d7030; end: 1029d75eb;  */

/* WARNING: Possible PIC construction at 0x0001029d70b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029d7230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029d7290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029d72c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029d73b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029d73ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029d7400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029d751c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029d7468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029d73b4) */
/* WARNING: Removing unreachable block (ram,0x0001029d72c8) */
/* WARNING: Removing unreachable block (ram,0x0001029d7294) */
/* WARNING: Removing unreachable block (ram,0x0001029d7234) */
/* WARNING: Removing unreachable block (ram,0x0001029d70bc) */
/* WARNING: Removing unreachable block (ram,0x0001029d72dc) */
/* WARNING: Removing unreachable block (ram,0x0001029d72e8) */
/* WARNING: Removing unreachable block (ram,0x0001029d7308) */
/* WARNING: Removing unreachable block (ram,0x0001029d7114) */
/* WARNING: Removing unreachable block (ram,0x0001029d742c) */
/* WARNING: Removing unreachable block (ram,0x0001029d746c) */
/* WARNING: Removing unreachable block (ram,0x0001029d744c) */
/* WARNING: Removing unreachable block (ram,0x0001029d711c) */
/* WARNING: Removing unreachable block (ram,0x0001029d74a4) */
/* WARNING: Removing unreachable block (ram,0x0001029d74a8) */
/* WARNING: Removing unreachable block (ram,0x0001029d74ac) */
/* WARNING: Removing unreachable block (ram,0x0001029d74b4) */
/* WARNING: Removing unreachable block (ram,0x0001029d74b8) */
/* WARNING: Removing unreachable block (ram,0x0001029d74bc) */
/* WARNING: Removing unreachable block (ram,0x0001029d74dc) */
/* WARNING: Removing unreachable block (ram,0x0001029d7124) */
/* WARNING: Removing unreachable block (ram,0x0001029d7520) */
/* WARNING: Removing unreachable block (ram,0x0001029d712c) */
/* WARNING: Removing unreachable block (ram,0x0001029d715c) */
/* WARNING: Removing unreachable block (ram,0x0001029d7160) */
/* WARNING: Removing unreachable block (ram,0x0001029d716c) */
/* WARNING: Removing unreachable block (ram,0x0001029d7170) */
/* WARNING: Removing unreachable block (ram,0x0001029d754c) */
/* WARNING: Removing unreachable block (ram,0x0001029d7560) */
/* WARNING: Removing unreachable block (ram,0x0001029d7390) */
/* WARNING: Removing unreachable block (ram,0x0001029d7174) */
/* WARNING: Removing unreachable block (ram,0x0001029d719c) */
/* WARNING: Removing unreachable block (ram,0x0001029d71a0) */
/* WARNING: Removing unreachable block (ram,0x0001029d71a4) */
/* WARNING: Removing unreachable block (ram,0x0001029d71ac) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001029d73f0) */
/* WARNING: Removing unreachable block (ram,0x0001029d73f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d7030(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(unaff_x20 + _DAT_112ed4f78 + 0x20) != '\x01') {
    func_0x000107c61174();
    func_0x000107c5cf78(param_1,param_2,lVar1);
    func_0x000107c5dc98(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1029d75ec; end: 1029d763f;  */

void FUN_1029d75ec(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1029d61d8();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1029d7640; end: 1029d768f; -[_TtC34ShareUpsellPresenterImplementation24ShareUpsellPresenterImpl handleWindowNotificationDragged:] */

/* WARNING: Possible PIC construction at 0x0001029d7678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029d767c) */

void FUN_1029d7640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1029d7030(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1029d7690; end: 1029d76ff;  */

undefined8 FUN_1029d7690(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10394345c)(param_2,param_1);
  return param_2;
}



/* Entry: 1029d7700; end: 1029d772b; -[_TtC34ShareUpsellPresenterImplementation24ShareUpsellPresenterImpl init] */

void FUN_1029d7700(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShareUpsellPresenterImplementation.ShareUpsellPresenterImpl",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029d772c);
  (*pcVar1)();
}



/* Entry: 1029d772c; end: 1029d772f;  */

void FUN_1029d772c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029d7730; end: 1029d7847; -[_TtC34ShareUpsellPresenterImplementation24ShareUpsellPresenterImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029d7730(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4fc8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4fc0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4fd8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4fd0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4fb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4fe8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4f50));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed4f58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4f60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4f68));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ed4f70));
  func_0x000107c61610(param_1 + _DAT_112ed4f80);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4f88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed4fa8));
  func_0x0001000834e4(param_1 + _DAT_112ed4fb0);
  param_1 = param_1 + _DAT_112ed4fe0;
  (*(code *)&DAT_103943434)();
  return param_1;
}



/* Entry: 1029d7848; end: 1029d784b;  */

void FUN_1029d7848(void)

{
  return;
}



/* Entry: 1029d784c; end: 1029d7853; -[_TtC34ShareUpsellPresenterImplementation24ShareUpsellPresenterImpl handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_1029d784c(void)

{
  return 0;
}



/* Entry: 1029d7854; end: 1029d787f; -[_TtC34ShareUpsellPresenterImplementation24ShareUpsellPresenterImpl shareSheetDismissedWithShareDestination:] */

void FUN_1029d7854(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029d68e8(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029d7880; end: 1029d7937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029d7880(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  func_0x000107c61154(param_1,param_2,&stack0xffffffffffffffb0,PTR_s_hitTest_withEvent__1125d6850,
                      param_3);
  func_0x000107c61180();
  if (((param_3 != 0) && (func_0x000107c5d0f0(), param_3 == 0)) && (puVar1 != (undefined1 *)0x0)) {
    pcVar3 = *(code **)(unaff_x20 + _DAT_112ed4ff0);
    if (pcVar3 != (code *)0x0) {
      uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112ed4ff0))[1];
      func_0x000107c6157c(uVar2);
      (*pcVar3)();
      func_0x00010058d43c(pcVar3,uVar2);
    }
  }
  return puVar1;
}



/* Entry: 1029d7938; end: 1029d79af; -[_TtC34ShareUpsellPresenterImplementationP33_5E77BCBD8642B76348A38D45F968208832ShareUpsellNotificationContainer hitTest:withEvent:] */

void FUN_1029d7938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  FUN_1029d7880(param_1,param_2,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 1029d79b0; end: 1029d7a2b; -[_TtC34ShareUpsellPresenterImplementationP33_5E77BCBD8642B76348A38D45F968208832ShareUpsellNotificationContainer initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d79b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_5;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_5 + _DAT_112ed4ff0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_50 = param_5;
  lStack_48 = lVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1029d7a2c; end: 1029d7abb; -[_TtC34ShareUpsellPresenterImplementationP33_5E77BCBD8642B76348A38D45F968208832ShareUpsellNotificationContainer initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029d7a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ed4ff0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar4 != (long *)0x0) {
    func_0x000107c61170(plVar4);
  }
  return (undefined1 *)plVar4;
}



/* Entry: 1029d7abc; end: 1029d7aef;  */

void FUN_1029d7abc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029d7af0; end: 1029d7b03; -[_TtC34ShareUpsellPresenterImplementationP33_5E77BCBD8642B76348A38D45F968208832ShareUpsellNotificationContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d7af0(long param_1)

{
  if (*(long *)(param_1 + _DAT_112ed4ff0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112ed4ff0))[1]);
    return;
  }
  return;
}



/* Entry: 1029d7b04; end: 1029d7c33;  */

undefined8
FUN_1029d7b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar4 = &puStack_f0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x102924944;
  puStack_78 = &UNK_11057f1b0;
  ppuVar2 = &puStack_90;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c60bc4(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_11057f1d8;
  ppuVar3 = &puStack_c0;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  func_0x000107c60bc4(ppuVar3);
  puStack_f0 = puVar1;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_1010264f0;
  puStack_d8 = &UNK_11057f200;
  uStack_d0 = param_5;
  uStack_c8 = param_6;
  func_0x000107c60bc4(&puStack_f0);
  func_0x000107c46518();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_68);
  return unaff_x20;
}



/* Entry: 1029d7c34; end: 1029d7def;  */

ulong FUN_1029d7c34(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029d7d18);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029d7d1c);
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
  FUN_1029d80d8(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029d7df0);
  (*pcVar2)();
}



/* Entry: 1029d7df0; end: 1029d7ef3;  */

undefined8
FUN_1029d7df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_5;
  func_0x000107c5e400();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c3ec60(param_5);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c40784();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c3ec60(lVar2);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c515a0(param_5);
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  return 0x4020000000000000;
}



/* Entry: 1029d7ef4; end: 1029d7f33;  */

void FUN_1029d7ef4(void)

{
  func_0x000107c61168(&PTR_PTR_11287a8f0);
  return;
}



/* Entry: 1029d7f34; end: 1029d7f6f;  */

void FUN_1029d7f34(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x10),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 1029d7f70; end: 1029d7f8f;  */

void FUN_1029d7f70(void)

{
  FUN_1029d6180();
  return;
}



/* Entry: 1029d7f90; end: 1029d7fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029d7f90(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c453e4();
    func_0x000107c4a8a4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar5;
    func_0x000107c5cb24(puVar5);
    func_0x000107c61180();
  }
  else {
    lVar2 = *(long *)(lVar1 + _DAT_112ed4fb8);
    func_0x000107c3fa04();
    func_0x000107c61180();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar2 != 0) {
      lVar8 = *(long *)(lVar1 + _DAT_112ed4fe0 + 8);
      puVar3 = *(undefined **)(lVar8 + _DAT_113034af0);
      func_0x000108f936d8(puVar3,*(undefined8 *)(lVar8 + _DAT_113034af8),0,lVar2);
      func_0x000107c61180();
      uVar4 = 0;
      FUN_1029d80d8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar6 = 0x112d5cec0;
      func_0x0001029d806c(0x112d5cec0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar5 = puVar3;
      func_0x000107c5fe10(puVar3,uVar4,uVar6);
      func_0x000107c61170(puVar3);
      puVar3 = puVar5;
      FUN_102924c70(puVar5);
      func_0x000107c6142c(puVar5);
      func_0x000107c615e8(lVar2);
    }
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    uVar6 = 0;
    FUN_1029d80d8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar7 = puVar3;
    func_0x000107c5fc48(puVar3,uVar6);
    func_0x000107c6142c(puVar3);
    func_0x000107c4a8a4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar3 = puVar5;
    func_0x000107c5cb24(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(puVar5);
  return puVar3;
}



/* Entry: 1029d7fb8; end: 1029d7fd7;  */

void FUN_1029d7fb8(void)

{
  func_0x000107c61168(&PTR_PTR_11287a798);
  return;
}



/* Entry: 1029d7fd8; end: 1029d8013;  */

void FUN_1029d7fd8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x10),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 1029d8014; end: 1029d804b;  */

void FUN_1029d8014(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c438d4(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,uVar2,uVar1,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 1029d804c; end: 1029d80ab;  */

void FUN_1029d804c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029d80ac; end: 1029d80d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d80ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010451338c();
    puVar3 = puVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar2 = puVar3;
      func_0x000107c61150(puVar3,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_topmostViewController_11267b0f0);
      if (((ulong)puVar2 & 1) == 0) {
        func_0x000107c61170(puVar1);
        func_0x000107c615e8(puVar3);
        return;
      }
      puVar2 = puVar3;
      func_0x000107c5cc6c(puVar3);
      func_0x000107c61180();
      func_0x000107c615e8(puVar3);
      puVar3 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      uVar4 = *(undefined8 *)(puVar1 + _DAT_112ed4f60);
      *(undefined **)(puVar1 + _DAT_112ed4f60) = puVar3;
      func_0x000107c61174();
      func_0x000107c61170(uVar4);
      func_0x000107c3e2c0(puVar3);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar2);
      puVar1 = puVar3;
    }
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1029d80d8; end: 1029d8117;  */

void FUN_1029d80d8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1029d8118; end: 1029d81cf;  */

void FUN_1029d8118(long param_1,long param_2)

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



/* Entry: 1029d81d0; end: 1029d8213;  */

void FUN_1029d81d0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029d8214; end: 1029d839f;  */

undefined1  [16] FUN_1029d8214(undefined4 param_1)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  switch(param_1) {
  case 0:
    auVar2._8_8_ = 0x800000010f0d6100;
    auVar2._0_8_ = 0xd000000000000018;
    return auVar2;
  case 1:
    auVar7._8_8_ = 0x800000010f0d60d0;
    auVar7._0_8_ = 0xd000000000000020;
    return auVar7;
  case 2:
    pcVar1 = "spotlight_share_sheet_notification";
    break;
  case 3:
    auVar5._8_8_ = 0x800000010f0d6070;
    auVar5._0_8_ = 0xd00000000000002a;
    return auVar5;
  case 4:
    pcVar1 = "public_user_story_share_sheet_tray";
    break;
  case 5:
    auVar8._8_8_ = 0x800000010f0d6020;
    auVar8._0_8_ = 0xd000000000000011;
    return auVar8;
  case 6:
    auVar9._8_8_ = 0x800000010f0d6000;
    auVar9._0_8_ = 0xd000000000000014;
    return auVar9;
  case 7:
    auVar6._8_8_ = 0x800000010f0d5fe0;
    auVar6._0_8_ = 0xd000000000000017;
    return auVar6;
  case 8:
    auVar11._8_8_ = 0x800000010f0d5fc0;
    auVar11._0_8_ = 0xd000000000000019;
    return auVar11;
  case 9:
    auVar3._8_8_ = 0x800000010f0d5fa0;
    auVar3._0_8_ = 0xd000000000000015;
    return auVar3;
  case 10:
    auVar10._8_8_ = 0x800000010f0d5f80;
    auVar10._0_8_ = 0xd000000000000012;
    return auVar10;
  default:
    auVar12._8_8_ = 0xe700000000000000;
    auVar12._0_8_ = 0x6e776f6e6b6e75;
    return auVar12;
  }
  auVar4._8_8_ = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  auVar4._0_8_ = 0xd000000000000022;
  return auVar4;
}



/* Entry: 1029d83a0; end: 1029d83f7; -[_TtC34ShareUpsellPresenterImplementation25ShareUpsellViewController initWithCoder:] */

void FUN_1029d83a0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ShareUpsellPresenterImplementation/ShareUpsellViewController.swift",0x42,2,
                      0x1b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029d83f8);
  (*pcVar1)();
}



/* Entry: 1029d83f8; end: 1029d8497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d83f8(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ed50f8);
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126abc80;
    func_0x000107c610f8(PTR_PTR_1126abc80);
    func_0x000107c49520();
    func_0x000107c5a568();
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1029d8498; end: 1029d84bf; -[_TtC34ShareUpsellPresenterImplementation25ShareUpsellViewController loadView] */

void FUN_1029d8498(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029d83f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029d84c0; end: 1029d851f; -[_TtC34ShareUpsellPresenterImplementation25ShareUpsellViewController initWithNibName:bundle:] */

void FUN_1029d84c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShareUpsellPresenterImplementation.ShareUpsellViewController",0x3c,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029d84ec);
  (*pcVar1)();
}



/* Entry: 1029d8520; end: 1029d8567; -[_TtC34ShareUpsellPresenterImplementation25ShareUpsellViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d8520(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed50e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed50f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ed50f8));
  return;
}



/* Entry: 1029d8568; end: 1029d8587;  */

void FUN_1029d8568(void)

{
  func_0x000107c61168(&PTR_PTR_11287a9a8);
  return;
}



/* Entry: 1029d8588; end: 1029d8613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d8588(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar2 = &lStack_50;
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_1029d90f4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed5130) = uStack_38;
  *(undefined8 *)(lVar1 + _DAT_112ed5138) = uStack_40;
  lStack_50 = lVar1;
  lStack_48 = param_2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar2;
  return;
}



/* Entry: 1029d8614; end: 1029d8627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d8614(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed5130) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed5138) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029d8628; end: 1029d869f; -[PublicProfileAndUserDataServiceImpl initWithSnapProServices:activeUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d8628(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ed5130) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ed5138) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1029d86a0; end: 1029d86b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d86a0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed5140) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed5148) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029d86b4; end: 1029d871f;  */

void FUN_1029d86b4(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + *param_3) = param_1;
  *(undefined8 *)(unaff_x20 + *param_4) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029d8720; end: 1029d873f;  */

void FUN_1029d8720(void)

{
  func_0x000107c61168(&PTR_PTR_11287ab40);
  return;
}



/* Entry: 1029d8740; end: 1029d87cb; -[PublicProfileAndUserDataServiceImpl createProfileAndUserDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d8740(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ed5130);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112ed5138);
  FUN_1029d8720();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ed5140) = uVar3;
  *(undefined8 *)(lVar2 + _DAT_112ed5148) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61154(&lStack_40,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029d87cc; end: 1029d87cf;  */

void FUN_1029d87cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029d87d0; end: 1029d8807; -[PublicProfileAndUserDataServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029d87ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029d87f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029d87d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed5130));
  return;
}



/* Entry: 1029d8808; end: 1029d8a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029d8808(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  uVar1 = 0;
  lVar7 = -0x4000000000000000;
  func_0x000107c5ee20(0,0xc000000000000000);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(uVar1);
  lVar8 = *(long *)(unaff_x20 + _DAT_112ed5140);
  lVar4 = lVar8;
  func_0x000107c4f3e4();
  func_0x000107c61180();
  lVar3 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar3 != 0) {
    lVar4 = param_2;
    if (param_2 == 0) {
      func_0x000107c5da30();
      func_0x000107c61180();
      param_1 = lVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      if (param_1 == 0) {
        lVar4 = -0x2000000000000000;
      }
      else {
        lVar4 = param_1;
        func_0x000107c4f38c();
        func_0x000107c61180();
        func_0x000107c615e8(param_1);
        if (lVar4 == 0) {
          param_1 = 0;
          lVar4 = -0x2000000000000000;
        }
        else {
          param_1 = lVar4;
          func_0x000107c5faec(lVar4);
          func_0x000107c61170(lVar4);
          lVar4 = lVar7;
        }
      }
    }
    func_0x000107c61434(param_2);
    lVar8 = lVar4;
    func_0x000107c5fadc(param_1,lVar4);
    func_0x000107c6142c(lVar4);
    lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112ed5148) + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar8);
    }
    puVar5 = &UNK_11057f450;
    func_0x000107c613fc(&UNK_11057f450,0x18,7);
    *(undefined **)(puVar5 + 0x10) = puVar2;
    pcStack_60 = FUN_1029d8a70;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1013ce928;
    puStack_68 = &UNK_11057f468;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    puVar5 = puStack_58;
    func_0x000107c61174(puVar2);
    func_0x000107c61574(puVar5);
    func_0x000107c4468c(lVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar4);
  }
  puVar5 = puVar2;
  func_0x000107c5cb24(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar5;
}



/* Entry: 1029d8a70; end: 1029d8bff;  */

void FUN_1029d8a70(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = param_1;
  func_0x000107c3ee50();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c41214();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c5ee30(lVar2);
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5ee20(lVar1,param_2);
    func_0x000107c4d664(uVar6);
    func_0x000107c61170(lVar2);
    func_0x00010006c090(lVar1,param_2);
  }
  puVar3 = PTR_PTR_1126b0f68;
  func_0x000107c61168(PTR_PTR_1126b0f68);
  lVar1 = param_1;
  func_0x000107c6148c(param_1,puVar3);
  if (lVar1 != 0) {
    puVar3 = &UNK_11057f510;
    func_0x000107c613fc(&UNK_11057f510,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar6;
    puVar4 = &UNK_11057f538;
    func_0x000107c613fc(&UNK_11057f538,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_1029d9114;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    pcStack_50 = FUN_1029d9208;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x1029d8c68;
    puStack_58 = &UNK_11057f550;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c615f0(param_1);
    func_0x000107c61174(uVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c3d7c8(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1029d8c00; end: 1029d8cb7;  */

void FUN_1029d8c00(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  uVar1 = 0x112ed51a0;
  func_0x0001000285a8(0x112ed51a0,&UNK_10dafe828);
  auStack_50[0] = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  (*param_2)(auStack_50);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029d8cb8; end: 1029d8cd3;  */

void FUN_1029d8cb8(long param_1,long param_2)

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



/* Entry: 1029d8cd4; end: 1029d8d4b; -[ProfileAndUserDataSourceImpl observeBusinessProfileAndUserDataWithProfileId:] */

void FUN_1029d8cd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_1029d8808(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1029d8d4c; end: 1029d8f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029d8d4c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = *(undefined **)(*(long *)(unaff_x20 + _DAT_112ed5148) + _DAT_113083f78);
  func_0x000107c3ee60();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar6 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010dafe750);
    func_0x000107c466bc(puVar3);
    func_0x000107c61170(uVar6);
    puVar7 = puVar3;
    func_0x000107c5ed2c(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c43b70(puVar2);
  }
  else {
    puVar7 = puVar3;
    func_0x000107c4c228();
    func_0x000107c61180();
    func_0x000107c56a1c();
    func_0x000107c61170(puVar7);
    puVar7 = puVar3;
    func_0x000107c44a18();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029d8f30);
      (*pcVar1)();
    }
    func_0x000107c56a1c();
    func_0x000107c61170(puVar7);
    puVar7 = puVar3;
    func_0x000107c4c228(puVar3);
    func_0x000107c61180();
    puVar4 = &UNK_11057f4a0;
    func_0x000107c613fc(&UNK_11057f4a0,0x18,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    pcStack_50 = FUN_1029d8f30;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1029d8fcc;
    puStack_58 = &UNK_11057f4b8;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c61174(puVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c5e06c(puVar7);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c61170(puVar3);
    func_0x000107c60bd0(ppuVar5);
  }
  func_0x000107c61170(puVar7);
  return puVar2;
}



/* Entry: 1029d8f30; end: 1029d8fcb;  */

/* WARNING: Possible PIC construction at 0x0001029d8f70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029d8f74) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */

void FUN_1029d8f30(undefined8 param_1,undefined *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR_PTR_1126b15a8;
    func_0x000107c61168();
    func_0x000107c5d1f4();
    func_0x000107c61180();
    if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029d8fcc);
      (*pcVar1)();
    }
    func_0x000107c43b74(uVar2);
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x000107c5ed2c(param_2);
    func_0x000107c43b70(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1029d8fcc; end: 1029d9043;  */

/* WARNING: Possible PIC construction at 0x0001029d9028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029d902c) */

void FUN_1029d8fcc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1029d9044; end: 1029d9077; -[ProfileAndUserDataSourceImpl reload] */

void FUN_1029d9044(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029d8d4c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


