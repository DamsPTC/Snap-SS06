/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10211a378; end: 10211a39f;  */

bool FUN_10211a378(char *param_1)

{
  if (*param_1 == '\x01') {
    return *(long *)(*(long *)(param_1 + 8) + 0x10) != 0;
  }
  return false;
}



/* Entry: 10211a3a0; end: 10211a4c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211a3a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [56];
  
  func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c61434(param_2);
    FUN_10210d48c(auStack_78,0x1e,param_2);
    func_0x000107c6142c(param_2);
    puVar1 = auStack_78;
    FUN_10210c1a4();
    func_0x0001000a8868(param_3 + _DAT_112e59980,*(undefined8 *)(param_3 + _DAT_112e59980 + 0x18));
    puVar2 = &UNK_1104ccd68;
    func_0x000107c613fc(&UNK_1104ccd68,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_3);
    puVar3 = &UNK_1104ccdb8;
    func_0x000107c613fc(&UNK_1104ccdb8,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined1 **)(puVar3 + 0x18) = puVar1;
    func_0x000107c6157c(puVar2);
    func_0x000107c61434(puVar1);
    FUN_102114d24();
    func_0x000107c61170(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c6142c(puVar1);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 10211a4c4; end: 10211a87f;  */

void FUN_10211a4c4(undefined1 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 uStack_71;
  
  uVar16 = *param_2;
  uStack_71 = 0;
  puVar4 = &UNK_1104cd100;
  func_0x000107c613fc(&UNK_1104cd100,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = &uStack_71;
  puVar5 = &UNK_1104cd128;
  func_0x000107c613fc(&UNK_1104cd128,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x10211da88;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_10211da98;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100e2fcec;
  puStack_90 = &UNK_1104cd140;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4();
  puVar7 = puStack_80;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_1104cd178;
  func_0x000107c613fc(&UNK_1104cd178,0x18,7);
  *(undefined1 **)(puVar7 + 0x10) = &uStack_71;
  puVar8 = &UNK_1104cd1a0;
  func_0x000107c613fc(&UNK_1104cd1a0,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_10211dab8;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_88 = FUN_10211dbf4;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100e2fcec;
  puStack_90 = &UNK_1104cd1b8;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_80;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_1104cd1f0;
  func_0x000107c613fc(&UNK_1104cd1f0,0x18,7);
  *(undefined1 **)(puVar10 + 0x10) = &uStack_71;
  puVar11 = &UNK_1104cd218;
  func_0x000107c613fc(&UNK_1104cd218,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = 0x10211dac4;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_88 = FUN_10211dad4;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_1104cd230;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar13 = puStack_80;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_1104cd268;
  func_0x000107c613fc(&UNK_1104cd268,0x18,7);
  *(undefined1 **)(puVar13 + 0x10) = &uStack_71;
  puVar14 = &UNK_1104cd290;
  func_0x000107c613fc(&UNK_1104cd290,0x20,7);
  *(code **)(puVar14 + 0x10) = FUN_10211daf4;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  pcStack_88 = (code *)0x10211dbfc;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_1104cd2a8;
  ppuVar15 = &puStack_a8;
  puStack_80 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  puVar1 = puStack_80;
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar1);
  func_0x000107c4c7ac(uVar16);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_71;
  func_0x000107c61574(puVar4);
  *param_1 = uVar2;
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x54,0xb9,0x2f,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10211a874);
    (*pcVar3)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x54,0xba,0x2c,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10211a878);
    (*pcVar3)();
  }
  puVar4 = puVar11;
  func_0x000107c61544(puVar11,"",0x54,0xbb,0x25,1);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10211a87c);
    (*pcVar3)();
  }
  puVar4 = puVar14;
  func_0x000107c61544(puVar14,"",0x54,0xbc,0x26,1);
  func_0x000107c61574(puVar14);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10211a880);
  (*pcVar3)();
}



/* Entry: 10211a880; end: 10211a8db;  */

void FUN_10211a880(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10211a8dc(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10211a8dc; end: 10211ab8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211a8dc(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  if ((param_1 & 1) == 0) {
    pcVar3 = "stopMinuteTimer()";
    func_0x0001000c10c0("stopMinuteTimer()");
    func_0x000107c61180();
    puVar4 = &UNK_1104ccd68;
    func_0x000107c613fc(&UNK_1104ccd68,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    ppuVar5 = &puStack_80;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar3);
    puVar4 = PTR___sytN_11034f1b0;
    func_0x000100087bd4(0x10211da0c,&puStack_80,PTR___sytN_11034f1b0 + 8);
    func_0x000100087bd4(FUN_10211db88,&puStack_80,puVar4 + 8);
  }
  else {
    pcVar3 = "startMinuteTimer()";
    func_0x0001000c10c0("startMinuteTimer()");
    func_0x000107c61180();
    puVar4 = &UNK_1104ccd68;
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_1104ccd68,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    ppuVar5 = &puStack_80;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar3);
    func_0x000100087bd4(0x10211da28,&puStack_80,PTR___sytN_11034f1b0 + 8);
    pcVar3 = "resubscribeObserverIfNeeded(fetchAfterSubscribe:)";
    func_0x0001000c10c0("resubscribeObserverIfNeeded(fetchAfterSubscribe:)");
    func_0x000107c61180();
    func_0x000107c613fc(&UNK_1104ccd68,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar2 = &UNK_1104cd088;
    func_0x000107c613fc(&UNK_1104cd088,0x19,7);
    *(undefined **)(puVar2 + 0x10) = puVar4;
    puVar2[0x18] = 1;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    ppuVar5 = &puStack_80;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar3);
  }
  return;
}



/* Entry: 10211ab8c; end: 10211aca3;  */

void FUN_10211ab8c(undefined8 param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    pcVar1 = "resubscribeObserverIfNeeded(fetchAfterSubscribe:)";
    func_0x0001000c10c0("resubscribeObserverIfNeeded(fetchAfterSubscribe:)");
    func_0x000107c61180();
    puVar2 = &UNK_1104ccd68;
    func_0x000107c613fc(&UNK_1104ccd68,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    puVar3 = &UNK_1104cce80;
    func_0x000107c613fc(&UNK_1104cce80,0x19,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    puVar3[0x18] = 0;
    uStack_58 = 0x10211d91c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1104cce98;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 10211aca4; end: 10211b0a7;  */

void FUN_10211aca4(ulong *param_1,long *param_2,undefined *param_3,long param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar8 = *param_2;
  lVar12 = lVar8;
  func_0x000107c43638();
  func_0x000107c61180();
  if (lVar12 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(&uStack_90);
    func_0x000107c615e8(lVar12);
  }
  puVar9 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
LAB_10211ae50:
    uStack_70 = uStack_90;
    uStack_68 = uStack_88;
    uStack_60 = uStack_80;
    lStack_58 = lStack_78;
    FUN_10211da40(&uStack_70,0x112d387f8,&UNK_10d902650);
  }
  else {
    ppuVar2 = &puStack_98;
    func_0x000107c6147c(ppuVar2,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
    puVar6 = puStack_98;
    if (((ulong)ppuVar2 & 1) != 0) {
      func_0x000107c4aa28();
      func_0x000107c61180();
      if (lVar8 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        func_0x000107c60234(&uStack_90);
        func_0x000107c615e8(lVar8);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) goto LAB_10211ae50;
      ppuVar2 = &puStack_98;
      puVar10 = PTR___sSiN_11034deb0;
      func_0x000107c6147c(ppuVar2,&uStack_70,puVar9 + 8,PTR___sSiN_11034deb0,6);
      if (((ulong)ppuVar2 & 1) == 0) goto LAB_10211ae68;
      puVar9 = (undefined *)0x0;
      if (((long)puVar6 < 0) || ((long)puStack_98 < (long)puVar6)) goto LAB_10211ae6c;
      func_0x000107c43aa4();
      func_0x000107c61180();
      uVar3 = 0;
      FUN_10211d97c(0,0x112d61f70,&PTR_PTR_1126b14e0);
      puVar9 = param_3;
      func_0x000107c5fc54(param_3,uVar3);
      func_0x000107c61170(param_3);
      uVar11 = (ulong)puVar9 >> 0x3e;
      if (uVar11 == 0) {
        puVar4 = *(undefined **)((undefined *)((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
        if (puVar4 == (undefined *)0x0) {
LAB_10211b070:
          func_0x000107c6142c(puVar9);
          goto LAB_10211ae68;
        }
      }
      else {
        puVar4 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
        if (((ulong)puVar9 & 0x8000000000000000) != 0) {
          puVar4 = puVar9;
        }
        puVar7 = puVar4;
        func_0x000107c60480();
        if (puVar7 == (undefined *)0x0) goto LAB_10211b070;
        func_0x000107c60480();
      }
      if (SBORROW8((long)puVar4,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10211b070);
        (*pcVar1)();
      }
      puVar4 = puVar4 + -1;
      if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10211b080);
        (*pcVar1)();
      }
      puVar7 = puVar4;
      if (puVar6 <= puVar4) {
        puVar7 = puVar6;
      }
      if (puStack_98 <= puVar4) {
        puVar4 = puStack_98;
      }
      puVar6 = puVar4 + 1;
      if (SCARRY8((long)puVar4,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10211b084);
        (*pcVar1)();
      }
      if (uVar11 == 0) {
        puVar4 = *(undefined **)((undefined *)((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
        if (puVar4 < puVar7) {
LAB_10211b084:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10211b088);
          (*pcVar1)();
        }
      }
      else {
        puVar4 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
        if (((ulong)puVar9 & 0x8000000000000000) != 0) {
          puVar4 = puVar9;
        }
        puVar5 = puVar4;
        func_0x000107c60480();
        if ((long)puVar5 < (long)puVar7) goto LAB_10211b084;
        func_0x000107c60480();
      }
      if ((long)puVar4 < (long)puVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10211b08c);
        (*pcVar1)();
      }
      if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10211b090);
        (*pcVar1)();
      }
      if (((ulong)puVar9 & 0xc000000000000001) == 0) {
LAB_10211aed0:
        func_0x000107c61434(puVar9);
      }
      else {
        if (puVar6 < puVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10211b094);
          (*pcVar1)();
        }
        if (puVar7 == puVar6) goto LAB_10211aed0;
        if (puVar6 <= puVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10211b0a8);
          (*pcVar1)();
        }
        func_0x000107c61434(puVar9);
        puVar4 = puVar7;
        do {
          puVar5 = puVar4 + 1;
          func_0x000107c60318(puVar4,puVar9,uVar3);
          puVar4 = puVar5;
        } while (puVar6 != puVar5);
      }
      func_0x000107c6142c(puVar9);
      if (uVar11 == 0) {
        puVar10 = (undefined *)((long)puVar6 * 2 | 1);
        puVar4 = puVar7;
        puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
        puVar6 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8) + 0x20;
      }
      else {
        puVar4 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
        if (((ulong)puVar9 & 0x8000000000000000) != 0) {
          puVar4 = puVar9;
        }
        func_0x000107c60484(puVar7,puVar6);
        func_0x000107c6142c(puVar9);
      }
      if (((ulong)puVar10 & 1) == 0) {
LAB_10211af5c:
        puVar9 = puVar7;
        FUN_10210c928(puVar7,puVar6,puVar4,puVar10);
LAB_10211aff0:
        func_0x000107c615e8(puVar7);
        puVar6 = puVar9;
      }
      else {
        uVar3 = 0;
        func_0x000107c605fc(0);
        puVar9 = puVar7;
        func_0x000107c615f4(puVar7,3);
        func_0x000107c61480();
        if (puVar9 == (undefined *)0x0) {
          func_0x000107c615e8(puVar7);
          puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        lVar12 = *(long *)(puVar9 + 0x10);
        func_0x000107c61574();
        if (SBORROW8((ulong)puVar10 >> 1,(long)puVar4)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10211b098);
          (*pcVar1)();
        }
        if (lVar12 != ((ulong)puVar10 >> 1) - (long)puVar4) {
          func_0x000107c615ec(puVar7,2);
          goto LAB_10211af5c;
        }
        puVar6 = puVar7;
        func_0x000107c61480(puVar7,uVar3);
        func_0x000107c615ec(puVar7,2);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar6 == (undefined *)0x0) goto LAB_10211aff0;
      }
      func_0x000107c61428(param_4 + 0x10,&uStack_70,0,0);
      param_4 = param_4 + 0x10;
      func_0x000107c61618();
      if (param_4 != 0) {
        puVar9 = puVar6;
        FUN_10211b0a8();
        func_0x000107c61574(puVar6);
        func_0x000107c61170(param_4);
        goto LAB_10211ae6c;
      }
      func_0x000107c61574(puVar6);
    }
  }
LAB_10211ae68:
  puVar9 = (undefined *)0x0;
LAB_10211ae6c:
  *param_1 = (ulong)puVar9;
  return;
}



/* Entry: 10211b0a8; end: 10211b483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10211b0a8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112e59960);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar12 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (uVar5 != 0) {
    uVar14 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar15 = *(ulong *)(uVar14 + 0x10);
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar15 = uVar14;
      if (0x7fffffffffffffff < param_1) {
        uVar15 = param_1;
      }
      func_0x000107c60480();
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
    if (uVar15 != 0) {
      uVar16 = 0;
      do {
        while( true ) {
          if ((param_1 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar14 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10211b38c);
              (*pcVar4)();
            }
            uVar6 = *(ulong *)(param_1 + uVar16 * 8 + 0x20);
            func_0x000107c61174(uVar6);
          }
          else {
            uVar6 = uVar16;
            func_0x00010117ea28(uVar16,param_1);
          }
          uVar1 = uVar16 + 1;
          if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10211b388);
            (*pcVar4)();
          }
          uVar7 = uVar6;
          func_0x000107c42924(uVar6);
          func_0x000107c61180();
          uVar8 = uVar5;
          func_0x000107c4a4b8();
          func_0x000107c61170(uVar7);
          if ((uVar8 & 1) == 0) break;
          func_0x000107c61170(uVar6);
LAB_10211b13c:
          uVar16 = uVar16 + 1;
          if (uVar1 == uVar15) goto LAB_10211b3ac;
        }
        uVar7 = uVar6;
        func_0x000107c42924(uVar6);
        func_0x000107c61180();
        uStack_80 = 0;
        lStack_78 = 0;
        puVar9 = &UNK_1104cce08;
        func_0x000107c613fc(&UNK_1104cce08,0x18,7);
        *(undefined8 **)(puVar9 + 0x10) = &uStack_80;
        puVar11 = &UNK_1104cce30;
        func_0x000107c613fc(&UNK_1104cce30,0x20,7);
        *(undefined8 *)(puVar11 + 0x10) = 0x10211d8d8;
        *(undefined **)(puVar11 + 0x18) = puVar9;
        pcStack_90 = FUN_10211d8e0;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_10117dba4;
        puStack_98 = &UNK_1104cce48;
        ppuVar10 = &puStack_b0;
        puStack_88 = puVar11;
        func_0x000107c60bc4(ppuVar10);
        puVar2 = puStack_88;
        func_0x000107c6157c(puVar11);
        func_0x000107c61574(puVar2);
        func_0x000107c4c728(uVar7);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar6);
        func_0x000107c60bd0(ppuVar10);
        lVar3 = lStack_78;
        uVar13 = uStack_80;
        func_0x000107c61574(puVar9);
        puVar9 = puVar11;
        func_0x000107c61544(puVar11,"",0x54,0x11d,0x21,1);
        func_0x000107c61574(puVar11);
        if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10211b390);
          (*pcVar4)();
        }
        if (lVar3 == 0) goto LAB_10211b13c;
        puVar9 = puVar12;
        func_0x000107c61558();
        puVar11 = puVar12;
        if (((ulong)puVar9 & 1) == 0) {
          puVar11 = (undefined *)0x0;
          func_0x0001000d182c(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
        }
        uVar16 = *(ulong *)(puVar11 + 0x10);
        puVar12 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar16) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
          func_0x0001000d182c(puVar12,uVar16 + 1,1,puVar11);
        }
        *(ulong *)(puVar12 + 0x10) = uVar16 + 1;
        *(undefined8 *)(puVar12 + uVar16 * 0x10 + 0x20) = uVar13;
        *(long *)(puVar12 + uVar16 * 0x10 + 0x28) = lVar3;
        uVar16 = uVar1;
      } while (uVar1 != uVar15);
    }
LAB_10211b3ac:
    puVar9 = puVar12;
    func_0x000100403a6c(puVar12);
    func_0x000107c6142c(puVar12);
    func_0x0001000a8868(unaff_x20 + _DAT_112e59978,
                        *(undefined8 *)(unaff_x20 + _DAT_112e59978 + 0x18));
    uVar13 = 0;
    func_0x00010211ecd0(0);
    puVar11 = puVar9;
    (*(code *)(undefined *)0x10211edf4)(puVar9,uVar13,&PTR_DAT_1104cd3d8);
    func_0x000107c6142c(puVar9);
    func_0x0001000a8868(unaff_x20 + _DAT_112e59980,
                        *(undefined8 *)(unaff_x20 + _DAT_112e59980 + 0x18));
    uVar13 = 0;
    func_0x00010211658c(0);
    puVar12 = puVar11;
    FUN_1021165ac(puVar11,uVar13,&PTR_DAT_1104cc9e8);
    func_0x000107c615e8(uVar5);
    func_0x000107c6142c(puVar11);
  }
  return puVar12;
}



/* Entry: 10211b484; end: 10211b5e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211b484(undefined8 param_1,long param_2)

{
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10211d884(param_2 + _DAT_112e59978,auStack_70);
    func_0x000107c61170(param_2);
    func_0x0001000a8868(auStack_70,uStack_58);
    func_0x00010211ecd0(0);
    FUN_10211eda8();
    func_0x0001000834e4(auStack_70);
  }
  return;
}



/* Entry: 10211b5e8; end: 10211b83b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211b5e8(undefined *param_1,undefined *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte abStack_a9 [9];
  undefined *apuStack_a0 [2];
  long lStack_90;
  long lStack_88;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar1 = param_3 + _DAT_112e59978;
    func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
    puVar2 = (undefined *)0x0;
    func_0x00010211ecd0();
    FUN_10211ed9c(param_4,puVar2,&PTR_DAT_1104cd3d8);
    func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
    FUN_10211ecf0(param_1,param_2,puVar2,&PTR_DAT_1104cd3d8);
    func_0x000107c61434();
    FUN_1021195dc();
    func_0x000107c61434();
    FUN_1021195dc();
    if (*(ulong *)(param_2 + 0x10) >> 3 < *(ulong *)(param_1 + 0x10)) {
      puVar3 = param_1;
      func_0x000101baba54();
      func_0x000107c6142c(param_1);
    }
    else {
      apuStack_a0[0] = param_2;
      func_0x0001012eef50();
      func_0x000107c6142c(param_1);
      puVar3 = apuStack_a0[0];
    }
    func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
    (*(code *)(undefined *)0x10211ed48)(puVar3,puVar2,&PTR_DAT_1104cd3d8);
    func_0x000107c6142c(puVar3);
    func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
    FUN_10211ee5c(puVar2,&PTR_DAT_1104cd3d8);
    lVar1 = _DAT_112e599c8;
    lStack_90 = CONCAT71(lStack_90._1_7_,*(long *)(puVar2 + 0x10) != 0);
    lStack_88 = param_3;
    func_0x000100087bd4(FUN_10211d818,apuStack_a0,PTR___sytN_11034f1b0 + 8);
    uVar4 = *(undefined8 *)(param_3 + lVar1);
    lStack_90 = param_3;
    func_0x000107c6157c(uVar4);
    func_0x000100087bd4(abStack_a9,FUN_10211d834,apuStack_a0,PTR___sSbN_11034dd40);
    func_0x000107c61574(uVar4);
    if ((abStack_a9[0] & 1) == 0) {
      func_0x000107c6142c(puVar2);
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8();
    }
    apuStack_a0[0] = puVar2;
    func_0x0001007d6d78(apuStack_a0);
    func_0x000107c61170(param_3);
    func_0x000107c6142c(puVar2);
  }
  return;
}



/* Entry: 10211b83c; end: 10211b923;  */

/* WARNING: Possible PIC construction at 0x00010211b8a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010211b8a8) */
/* WARNING: Removing unreachable block (ram,0x00010211b8b4) */
/* WARNING: Removing unreachable block (ram,0x00010211b8bc) */
/* WARNING: Removing unreachable block (ram,0x00010211b900) */
/* WARNING: Removing unreachable block (ram,0x00010211b8d0) */
/* WARNING: Removing unreachable block (ram,0x00010211b908) */

void FUN_10211b83c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c51628();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c51624();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
      return;
    }
  }
  return;
}



/* Entry: 10211b924; end: 10211bdd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10211b924(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  long unaff_x20;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined *puStack_f8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112e59950);
  if (uVar7 == 0) {
    return PTR___swiftEmptySetSingleton_11034f1d8;
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar7 == 0) {
    return PTR___swiftEmptySetSingleton_11034f1d8;
  }
  uVar8 = *(ulong *)(unaff_x20 + _DAT_112e59960);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar8 == 0) {
    func_0x000107c615e8(uVar7);
    return PTR___swiftEmptySetSingleton_11034f1d8;
  }
  uVar20 = uVar7;
  func_0x000107c43aa4();
  func_0x000107c61180();
  uVar9 = 0;
  FUN_10211d97c(0,0x112d61f70,&PTR_PTR_1126b14e0);
  uVar10 = uVar20;
  func_0x000107c5fc54(uVar20,uVar9);
  func_0x000107c61170(uVar20);
  uVar20 = uVar10 & 0xffffffffffffff8;
  if (uVar10 >> 0x3e == 0) {
    uVar22 = *(ulong *)(uVar20 + 0x10);
  }
  else {
    uVar22 = uVar20;
    if (0x7fffffffffffffff < uVar10) {
      uVar22 = uVar10;
    }
    func_0x000107c60480();
  }
  puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar22 != 0) {
    uVar21 = 0;
    do {
      if ((uVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar20 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10211bd58);
          (*pcVar5)();
        }
        uVar11 = *(ulong *)(uVar10 + 0x20 + uVar21 * 8);
        func_0x000107c61174(uVar11);
      }
      else {
        uVar11 = uVar21;
        func_0x00010117ea28(uVar21,uVar10);
      }
      bVar6 = SCARRY8(uVar21,1);
      uVar21 = uVar21 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10211bd54);
        (*pcVar5)();
      }
      uVar12 = uVar11;
      func_0x000107c42924(uVar11);
      func_0x000107c61180();
      uVar13 = uVar8;
      func_0x000107c4a4b8();
      func_0x000107c61170(uVar12);
      if ((uVar13 & 1) == 0) {
        uVar12 = uVar11;
        func_0x000107c42924(uVar11);
        func_0x000107c61180();
        uStack_88 = 0;
        uStack_80 = 0;
        puVar17 = &UNK_1104ccfc0;
        func_0x000107c613fc(&UNK_1104ccfc0,0x18,7);
        *(ulong **)(puVar17 + 0x10) = &uStack_88;
        puVar14 = &UNK_1104ccfe8;
        func_0x000107c613fc(&UNK_1104ccfe8,0x20,7);
        *(undefined8 *)(puVar14 + 0x10) = 0x10211db84;
        *(undefined **)(puVar14 + 0x18) = puVar17;
        uStack_b0 = 0x10211dbdc;
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0x42000000;
        puStack_c0 = &UNK_10117dba4;
        puStack_b8 = &UNK_1104cd000;
        ppuVar15 = &puStack_d0;
        puStack_a8 = puVar14;
        func_0x000107c60bc4(ppuVar15);
        puVar4 = puStack_a8;
        func_0x000107c6157c(puVar14);
        func_0x000107c61574(puVar4);
        func_0x000107c4c728(uVar12);
        func_0x000107c61170(uVar12);
        func_0x000107c60bd0(ppuVar15);
        uVar13 = uStack_80;
        uVar12 = uStack_88;
        func_0x000107c61574(puVar17);
        puVar17 = puVar14;
        func_0x000107c61544(puVar14,"",0x54,0x11d,0x21,1);
        func_0x000107c61574(puVar14);
        if (((ulong)puVar17 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10211bd5c);
          (*pcVar5)();
        }
        if (uVar13 == 0) {
          func_0x000107c61170(uVar11);
        }
        else if (*(long *)(param_1 + 0x10) == 0) {
          func_0x000107c61170(uVar11);
          func_0x000107c6142c(uVar13);
        }
        else {
          func_0x000107c6068c(&puStack_d0,*(undefined8 *)(param_1 + 0x28));
          ppuVar15 = &puStack_d0;
          func_0x000107c5fb58(ppuVar15,uVar12,uVar13);
          func_0x000107c606a8();
          uVar18 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
          uVar19 = (ulong)ppuVar15 & (uVar18 ^ 0xffffffffffffffff);
          if ((*(ulong *)(param_1 + 0x38 + (uVar19 >> 6) * 8) >> (uVar19 & 0x3f) & 1) != 0) {
            do {
              puVar2 = (ulong *)(*(long *)(param_1 + 0x30) + uVar19 * 0x10);
              uVar16 = *puVar2;
              uVar3 = puVar2[1];
              if ((uVar16 == uVar12 && uVar13 == uVar3) ||
                 (func_0x000107c605b8(uVar16,uVar3,uVar12,uVar13,0), (uVar16 & 1) != 0)) {
                func_0x000107c61170(uVar11);
                puVar17 = puStack_f8;
                func_0x000107c61558();
                if (((ulong)puVar17 & 1) == 0) {
                  plVar1 = (long *)(puStack_f8 + 0x10);
                  puStack_f8 = (undefined *)0x0;
                  func_0x0001000d182c(0,*plVar1 + 1,1);
                }
                uVar11 = *(ulong *)(puStack_f8 + 0x10);
                if (*(ulong *)(puStack_f8 + 0x18) >> 1 <= uVar11) {
                  puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puStack_f8 + 0x18));
                  func_0x0001000d182c(puVar17,uVar11 + 1,1,puStack_f8);
                  puStack_f8 = puVar17;
                }
                *(ulong *)(puStack_f8 + 0x10) = uVar11 + 1;
                *(ulong *)(puStack_f8 + uVar11 * 0x10 + 0x20) = uVar12;
                *(ulong *)(puStack_f8 + uVar11 * 0x10 + 0x28) = uVar13;
                goto LAB_10211ba34;
              }
              uVar19 = uVar19 + 1 & ~uVar18;
            } while ((*(ulong *)(param_1 + 0x38 + (uVar19 >> 6) * 8) >> (uVar19 & 0x3f) & 1) != 0);
          }
          func_0x000107c61170(uVar11);
          func_0x000107c6142c(uVar13);
        }
      }
      else {
        func_0x000107c61170(uVar11);
      }
LAB_10211ba34:
    } while (uVar21 != uVar22);
  }
  func_0x000107c6142c(uVar10);
  puVar17 = puStack_f8;
  func_0x000100403a6c(puStack_f8);
  func_0x000107c615e8(uVar7);
  func_0x000107c615e8(uVar8);
  func_0x000107c6142c(puStack_f8);
  return puVar17;
}



/* Entry: 10211bdd8; end: 10211c003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211bdd8(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = (undefined *)(param_1 + _DAT_112e59948);
    func_0x000107c61618();
    if (puVar1 == (undefined *)0x0) {
      lVar5 = *(long *)(PTR___swiftEmptySetSingleton_11034f1d8 + 0x10);
      puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
    }
    else {
      puVar2 = puVar1;
      func_0x000107c41064();
      func_0x000107c61180();
      func_0x000107c615e8(puVar1);
      puVar1 = puVar2;
      func_0x000107c5fe10(puVar2,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      func_0x000107c61170(puVar2);
      lVar5 = *(long *)(puVar1 + 0x10);
    }
    if (lVar5 == 0) {
      func_0x000107c6142c(puVar1);
      uVar6 = *(undefined8 *)(param_1 + _DAT_112e599d8);
      puVar1 = &UNK_1104ccd68;
      func_0x000107c613fc(&UNK_1104ccd68,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_1);
      uStack_68 = 0x10211d934;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1104ccf10;
      ppuVar4 = &puStack_88;
      puStack_60 = puVar1;
      func_0x000107c60bc4(ppuVar4);
      puVar1 = puStack_60;
      func_0x000107c61174(uVar6);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + _DAT_112e599d8);
      puVar2 = &UNK_1104ccd68;
      func_0x000107c613fc(&UNK_1104ccd68,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_1);
      puVar3 = &UNK_1104cced0;
      func_0x000107c613fc(&UNK_1104cced0,0x21,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(undefined **)(puVar3 + 0x18) = puVar1;
      puVar3[0x20] = param_2 & 1;
      uStack_68 = 0x10211d928;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1104ccee8;
      ppuVar4 = &puStack_88;
      puStack_60 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar1 = puStack_60;
      func_0x000107c61174(uVar6);
    }
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar6);
    return;
  }
  return;
}



/* Entry: 10211c004; end: 10211c113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211c004(long param_1)

{
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lStack_50 = param_1;
    func_0x000100087bd4(FUN_10211d93c,auStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10211c114; end: 10211c333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211c114(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  char cStack_91;
  undefined1 auStack_90 [16];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e59968);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000100087bd4(&cStack_91,0x10211d954,auStack_90,PTR___sSbN_11034dd40);
    if (cStack_91 == '\x01') {
      func_0x0001000a8868(unaff_x20 + _DAT_112e59978,
                          *(undefined8 *)(unaff_x20 + _DAT_112e59978 + 0x18));
      uVar3 = 0;
      func_0x00010211ecd0(0);
      (*(code *)(undefined *)0x10211edf4)(param_2,uVar3,&PTR_DAT_1104cd3d8);
      lVar1 = unaff_x20 + _DAT_112e59980;
      func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
      uVar3 = 0;
      func_0x00010211658c(0);
      lVar4 = param_2;
      FUN_1021165ac(param_2,uVar3,&PTR_DAT_1104cc9e8);
      func_0x000107c6142c(param_2);
      if (*(long *)(lVar4 + 0x10) != 0) {
        func_0x000107c61434(lVar4);
        FUN_10210d48c(auStack_90,0x1e,lVar4);
        func_0x000107c6142c(lVar4);
        puVar5 = auStack_90;
        FUN_10210c1a4();
        func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
        puVar6 = &UNK_1104ccd68;
        func_0x000107c613fc(&UNK_1104ccd68,0x18,7);
        func_0x000107c61614(puVar6 + 0x10);
        puVar7 = &UNK_1104ccf48;
        func_0x000107c613fc(&UNK_1104ccf48,0x20,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined1 **)(puVar7 + 0x18) = puVar5;
        func_0x000107c6157c(puVar6);
        func_0x000107c61434(puVar5);
        FUN_102114d24();
        func_0x000107c6142c(lVar4);
        func_0x000107c615e8(lVar2);
        func_0x000107c61574(puVar6);
        func_0x000107c6142c(puVar5);
        func_0x000107c61574(puVar7);
        return;
      }
      func_0x000107c6142c(lVar4);
    }
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10211c334; end: 10211c567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211c334(byte *param_1,long param_2,ulong param_3,byte param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = _DAT_112e599a0;
  if (*(char *)(param_2 + _DAT_112e599a8) == '\x01') {
    uVar9 = *(undefined8 *)(param_2 + _DAT_112e599a0);
    func_0x000107c61434(uVar9);
    uVar4 = param_3;
    func_0x000100c3fb0c(param_3,uVar9);
    func_0x000107c6142c(uVar9);
    lVar1 = _DAT_112e59998;
    if ((uVar4 & 1) == 0) {
      uVar9 = 0;
      if (*(long *)(param_2 + _DAT_112e59998) != 0) {
        func_0x000107c4218c();
        uVar9 = *(undefined8 *)(param_2 + lVar1);
      }
      *(undefined8 *)(param_2 + lVar1) = 0;
      func_0x000107c61170(uVar9);
      ppuVar10 = *(undefined ***)(param_3 + 0x10);
      ppuVar5 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
      if (ppuVar10 != (undefined **)0x0) {
        func_0x000107c61434(param_3);
        ppuVar5 = ppuVar10;
        func_0x00010109b448(ppuVar10,0);
        ppuVar6 = &puStack_90;
        func_0x00010109b930(ppuVar6,ppuVar5 + 4,ppuVar10,param_3);
        func_0x000100ce41a4(puStack_90,uStack_88,puStack_80,puStack_78,pcStack_70);
        if (ppuVar6 != ppuVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10211c568);
          (*pcVar3)();
        }
      }
      ppuVar10 = ppuVar5;
      func_0x000107c5fc48(ppuVar5,PTR___sSSN_11034da80);
      func_0x000107c61574(ppuVar5);
      func_0x000107c4daa8();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar10);
      puVar7 = &UNK_1104ccd68;
      func_0x000107c613fc(&UNK_1104ccd68,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,param_2);
      pcStack_70 = FUN_10211d974;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_10104e6fc;
      puStack_78 = &UNK_1104ccf60;
      ppuVar5 = &puStack_90;
      puStack_68 = puVar7;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_68);
      uVar9 = param_5;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c61170(param_5);
      func_0x000107c60bd0(ppuVar5);
      uVar8 = *(undefined8 *)(param_2 + lVar1);
      *(undefined8 *)(param_2 + lVar1) = uVar9;
      func_0x000107c61170(uVar8);
      uVar9 = *(undefined8 *)(param_2 + lVar2);
      *(ulong *)(param_2 + lVar2) = param_3;
      func_0x000107c61434(param_3);
      func_0x000107c6142c(uVar9);
    }
  }
  else {
    param_4 = 0;
  }
  *param_1 = param_4 & 1;
  return;
}



/* Entry: 10211c568; end: 10211c623;  */

void FUN_10211c568(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_48 [3];
  
  alStack_48[0] = 0;
  uVar2 = 0;
  FUN_10211d97c(0,0x112e59a28,&PTR_PTR_1126db398);
  func_0x000107c5f9e4(param_1,alStack_48,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  lVar1 = alStack_48[0];
  if (alStack_48[0] != 0) {
    func_0x000107c61428(param_2 + 0x10,alStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      func_0x000107c6142c(lVar1);
    }
    else {
      FUN_10211c624(lVar1);
      func_0x000107c6142c(lVar1);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 10211c624; end: 10211c8cf;  */

/* WARNING: Possible PIC construction at 0x00010211c70c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010211c7bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010211c7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010211c870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010211c880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010211c874) */
/* WARNING: Removing unreachable block (ram,0x00010211c7e0) */
/* WARNING: Removing unreachable block (ram,0x00010211c7c0) */
/* WARNING: Removing unreachable block (ram,0x00010211c710) */
/* WARNING: Removing unreachable block (ram,0x00010211c884) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_10211c624(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  puVar12 = (ulong *)(param_1 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar15 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar15 = uVar15 & *puVar12;
  func_0x000107c61434();
  lVar13 = 0;
  lVar5 = lVar13;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    while (uVar15 != 0) {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar13 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar10 * 0x10);
      uVar2 = *puVar1;
      puVar9 = (undefined *)puVar1[1];
      lVar14 = *(long *)(*(long *)(param_1 + 0x38) + uVar10 * 8);
      func_0x000107c61434(puVar9);
      func_0x000107c61174();
      lVar5 = lVar14;
      func_0x000107c5bcc0();
      func_0x000107c61170(lVar14);
      if (lVar5 != 1) goto code_r0x000107c6142c;
      puVar6 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar10 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar10) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        func_0x0001000d182c(puVar8,uVar10 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar8 + uVar10 * 0x10 + 0x20) = uVar2;
      *(undefined **)(puVar8 + uVar10 * 0x10 + 0x28) = puVar9;
      lVar5 = lVar13;
    }
    bVar4 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10211c8d0);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar11 >> 6) <= lVar13) break;
    uVar15 = puVar12[lVar13];
  }
  func_0x000100ce41a4(param_1,puVar12,~uVar11,lVar5,0);
  puVar9 = puVar8;
  if (*(long *)(puVar8 + 0x10) != 0) {
    func_0x000100403a6c(puVar8);
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar9);
  return;
}



/* Entry: 10211c8d0; end: 10211c937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211c8d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = _DAT_112e59998;
  uVar2 = 0;
  if (*(long *)(param_1 + _DAT_112e59998) != 0) {
    func_0x000107c4218c();
    uVar2 = *(undefined8 *)(param_1 + lVar1);
  }
  *(undefined8 *)(param_1 + lVar1) = 0;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e599a0);
  *(undefined **)(param_1 + _DAT_112e599a0) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 10211c938; end: 10211ce9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211c938(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  uint uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar14;
  long lVar15;
  long extraout_x12;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  puStack_c8 = auStack_110 + -extraout_x8;
  func_0x000107c5ec74();
  lVar17 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar13 = (long)(auStack_110 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_b8 = lVar13;
  func_0x000107c5ef64();
  lVar18 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar15 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar15 - extraout_x12;
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  puVar5 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  lStack_108 = _DAT_112e59990;
  if (puVar5 != (undefined *)0x0) {
    uVar6 = 0;
    lStack_f8 = lVar18;
    lStack_f0 = lVar4;
    lStack_e8 = lVar17;
    lStack_e0 = lVar3;
    lStack_d8 = lVar2;
    lStack_d0 = lVar19;
    if (*(long *)(puVar5 + _DAT_112e59990) != 0) {
      func_0x000107c498f8();
      uVar6 = *(undefined8 *)(puVar5 + lStack_108);
    }
    *(undefined8 *)(puVar5 + lStack_108) = 0;
    func_0x000107c61170(uVar6);
    func_0x000107c5eea0(lVar15);
    func_0x000107c5ef54(lVar13);
    lVar2 = 0x112d36588;
    func_0x0001000285a8(0x112d36588,&UNK_10d900a30);
    lVar17 = 0;
    func_0x000107c5ef5c();
    lVar18 = *(long *)(lVar17 + -8);
    lVar4 = *(long *)(lVar18 + 0x48);
    uVar14 = (ulong)*(byte *)(lVar18 + 0x50);
    uVar16 = uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff);
    func_0x000107c613fc(lVar2,uVar16 + lVar4 * 5,uVar14 | 7);
    *(undefined8 *)(lVar2 + 0x18) = 10;
    *(undefined8 *)(lVar2 + 0x10) = 5;
    lVar3 = lVar2 + uVar16;
    pcVar20 = *(code **)(lVar18 + 0x68);
    (*pcVar20)(lVar3,*(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4yearyA2EmFWC_110350d88,
               lVar17);
    (*pcVar20)(lVar3 + lVar4,
               *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO5monthyA2EmFWC_110350d90,
               lVar17);
    (*pcVar20)(lVar3 + lVar4 * 2,
               *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO3dayyA2EmFWC_110350d78,lVar17)
    ;
    (*pcVar20)(lVar3 + lVar4 * 3,
               *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4houryA2EmFWC_110350d80,lVar17
              );
    (*pcVar20)(lVar3 + lVar4 * 4,
               *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO6minuteyA2EmFWC_110350d98,
               lVar17);
    lVar4 = lVar2;
    func_0x000100ddce0c();
    func_0x000107c61588(lVar2);
    func_0x000107c61408(lVar3,5,lVar17);
    func_0x000107c6145c(lVar2,0x20,7);
    lVar3 = lStack_b8;
    lStack_100 = lVar15;
    func_0x000107c5ef2c(lStack_b8,lVar4);
    uVar12 = (uint)lVar15;
    func_0x000107c6142c();
    func_0x000107c5ec64();
    lVar2 = 0;
    if ((uVar12 & 0xff) != 1) {
      lVar2 = lVar4;
    }
    if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x10211ce9c);
      (*pcVar20)();
    }
    func_0x000107c5ec68(lVar2 + 1,0);
    func_0x000107c5ec6c(0,0);
    puVar1 = puStack_c8;
    func_0x000107c5ef48(puStack_c8,lVar3);
    lVar4 = lStack_d0;
    lVar2 = lStack_f0;
    puVar7 = puVar1;
    (**(code **)(lStack_d0 + 0x30))(puVar1,1,lStack_f0);
    if ((int)puVar7 == 1) {
      func_0x000107c61170(puVar5);
      (**(code **)(lStack_e8 + 8))(lVar3,lStack_d8);
      (**(code **)(lStack_f8 + 8))(lVar13,lStack_e0);
      (**(code **)(lVar4 + 8))(lStack_100,lVar2);
      FUN_10211da40(puVar1,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      (**(code **)(lVar4 + 0x20))(lStack_c0,puVar1,lVar2);
      puVar8 = &UNK_1104ccd68;
      func_0x000107c613fc(&UNK_1104ccd68,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,puVar5);
      puVar9 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      func_0x000107c610f8();
      puVar10 = puVar8;
      func_0x000107c6157c(puVar8);
      func_0x000107c5ee70();
      pcStack_90 = FUN_10211da80;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_100fef460;
      puStack_98 = &UNK_1104cd0c8;
      ppuVar11 = &puStack_b0;
      puStack_88 = puVar8;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c46960(0x404e000000000000);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(puVar10);
      puVar10 = puStack_88;
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar10);
      uVar6 = *(undefined8 *)(puVar5 + lStack_108);
      *(undefined **)(puVar5 + lStack_108) = puVar9;
      func_0x000107c61174();
      func_0x000107c61170(uVar6);
      lVar4 = lStack_e8;
      lVar3 = lStack_f8;
      if (puVar9 != (undefined *)0x0) {
        puVar8 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
        func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
        func_0x000107c4c190();
        func_0x000107c61180();
        func_0x000107c3d8e0();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar5);
        puVar5 = puVar9;
      }
      lVar17 = lStack_e0;
      lVar15 = lStack_100;
      func_0x000107c61170(puVar5);
      pcVar20 = *(code **)(lStack_d0 + 8);
      (*pcVar20)(lStack_c0,lVar2);
      (**(code **)(lVar4 + 8))(lStack_b8,lStack_d8);
      (**(code **)(lVar3 + 8))(lVar13,lVar17);
      (*pcVar20)(lVar15,lVar2);
    }
  }
  return;
}



/* Entry: 10211ce9c; end: 10211ceff;  */

void FUN_10211ce9c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x000107c498f8(param_1);
  }
  else {
    FUN_10211cf00();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10211cf00; end: 10211d467;  */

/* WARNING: Possible PIC construction at 0x00010211d174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010211d1ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010211d2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010211d030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010211d414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010211d034) */
/* WARNING: Removing unreachable block (ram,0x00010211d2a4) */
/* WARNING: Removing unreachable block (ram,0x00010211d1f0) */
/* WARNING: Removing unreachable block (ram,0x00010211d450) */
/* WARNING: Removing unreachable block (ram,0x00010211d228) */
/* WARNING: Removing unreachable block (ram,0x00010211d274) */
/* WARNING: Removing unreachable block (ram,0x00010211d308) */
/* WARNING: Removing unreachable block (ram,0x00010211d238) */
/* WARNING: Removing unreachable block (ram,0x00010211d458) */
/* WARNING: Removing unreachable block (ram,0x00010211d26c) */
/* WARNING: Removing unreachable block (ram,0x00010211d280) */
/* WARNING: Removing unreachable block (ram,0x00010211d2b4) */
/* WARNING: Removing unreachable block (ram,0x00010211d454) */
/* WARNING: Removing unreachable block (ram,0x00010211d2fc) */
/* WARNING: Removing unreachable block (ram,0x00010211d28c) */
/* WARNING: Removing unreachable block (ram,0x00010211d178) */
/* WARNING: Removing unreachable block (ram,0x00010211d184) */
/* WARNING: Removing unreachable block (ram,0x00010211d18c) */
/* WARNING: Removing unreachable block (ram,0x00010211d1b8) */
/* WARNING: Removing unreachable block (ram,0x00010211d418) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211cf00(double param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  double dVar16;
  undefined8 uStack_110;
  char acStack_a9 [9];
  undefined *apuStack_a0 [2];
  bool bStack_90;
  undefined7 uStack_8f;
  
  puVar3 = (undefined *)0x0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)&uStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = unaff_x20 + _DAT_112e59978;
  func_0x0001000a8868(lVar13,*(undefined8 *)(lVar13 + 0x18));
  puVar4 = (undefined *)0x0;
  func_0x00010211ecd0();
  puVar5 = puVar4;
  (*(code *)(undefined *)0x10211ee78)();
  puVar7 = puVar5;
  if (*(long *)(puVar5 + 0x10) != 0) {
    func_0x000107c5eea0(lVar12);
    func_0x000107c5ee8c();
    (**(code **)(lVar11 + 8))(lVar12,puVar3);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8();
    lVar12 = 0;
    uStack_110 = 0;
    uVar9 = 1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
    uVar15 = 0xffffffffffffffff;
    if ((puVar5[0x20] & 0x3f) < 6) {
      uVar15 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar15 = uVar15 & *(ulong *)(puVar5 + 0x40);
    do {
      while (uVar15 == 0) {
        bVar2 = SCARRY8(lVar12,1);
        lVar12 = lVar12 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10211d44c);
          (*pcVar1)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar12) {
          func_0x000107c61574(puVar5);
          func_0x0001000a8868(lVar13,*(undefined8 *)(lVar13 + 0x18));
          FUN_10211eef0(puVar6,puVar4);
          _bStack_90 = CONCAT71(uStack_8f,*(long *)(puVar6 + 0x10) != 0);
          func_0x000100087bd4(FUN_10211dbe0,apuStack_a0,PTR___sytN_11034f1b0 + 8);
          func_0x000100087bd4(acStack_a9,FUN_10211dc00,apuStack_a0,PTR___sSbN_11034dd40);
          if (acStack_a9[0] == '\x01') {
            func_0x000107c61434(puVar6);
            puVar7 = puVar6;
          }
          else {
            puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x0001001830b8();
          }
          apuStack_a0[0] = puVar7;
          func_0x0001007d6d78(apuStack_a0);
          puVar7 = puVar6;
          goto code_r0x000107c6142c;
        }
        uVar15 = *(ulong *)((long)(puVar5 + 0x40) + lVar12 * 8);
      }
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar12 << 6;
      puVar7 = *(undefined **)(*(long *)(puVar5 + 0x30) + uVar8 * 0x10 + 8);
      puVar10 = *(undefined **)(*(long *)(puVar5 + 0x38) + uVar8 * 8);
      if ((ulong)puVar10 >> 0x3e == 0) {
        puVar14 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar14 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar10) {
          puVar14 = puVar10;
        }
        func_0x000107c60480();
      }
      uVar15 = uVar15 - 1 & uVar15;
    } while (puVar14 == (undefined *)0x0);
    func_0x000107c61434(puVar7);
    func_0x000107c61434(puVar10);
    lVar13 = 4;
    do {
      uVar15 = lVar13 - 4;
      if (((ulong)puVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10211d450);
          (*pcVar1)();
        }
        uVar9 = *(ulong *)(puVar10 + lVar13 * 8);
        func_0x000107c61174();
      }
      else {
        uVar9 = uVar15;
        puVar3 = puVar10;
        func_0x000101ed09dc(uVar15,puVar10);
      }
      puVar5 = (undefined *)(lVar13 + -3);
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10211d448);
        (*pcVar1)();
      }
      uVar15 = uVar9;
      func_0x000107c5bbec();
      uVar8 = uVar9;
      func_0x000107c4237c();
      dVar16 = (double)(long)uVar15 + (double)(long)uVar8;
      bVar2 = false;
      if (((double)(long)uVar15 <= param_1) && (bVar2 = false, !NAN(param_1) && !NAN(dVar16))) {
        bVar2 = param_1 < dVar16;
      }
      if (bVar2) {
        func_0x000107c424f8(uVar9);
        func_0x000107c61180();
        func_0x000107c5faec();
        func_0x000107c61170(uVar9);
        puVar7 = puVar3;
        break;
      }
      func_0x000107c61170(uVar9);
      lVar13 = lVar13 + 1;
    } while (puVar5 != puVar14);
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar7);
  return;
}



/* Entry: 10211d468; end: 10211d4e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211d468(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e59990;
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112e59990) == 0) {
      uVar2 = 0;
    }
    else {
      func_0x000107c498f8(*(long *)(param_1 + _DAT_112e59990));
      uVar2 = *(undefined8 *)(param_1 + lVar1);
    }
    *(undefined8 *)(param_1 + lVar1) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10211d4e8; end: 10211d5b3; -[_TtC29SaturnFriendsFeedServicesImpl24SaturnFriendsFeedManager init] */

void FUN_10211d4e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnFriendsFeedServicesImpl.SaturnFriendsFeedManager",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10211d514);
  (*pcVar1)();
}



/* Entry: 10211d5b4; end: 10211d5c3;  */

void FUN_10211d5b4(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10211a8dc(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10211d5c4; end: 10211d5ef;  */

void FUN_10211d5c4(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10211d5f0; end: 10211d6eb;  */

undefined * FUN_10211d5f0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e59a18,&UNK_10da5e698);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10211d6e8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10211d6ec);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10211d6ec; end: 10211d80f;  */

undefined * FUN_10211d6ec(long param_1)

{
  ulong *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e59a30,&UNK_10da5e7b0);
    puVar5 = puVar9;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar13 = (undefined1 *)(param_1 + 0x41);
    do {
      uVar11 = *(ulong *)(puVar13 + -0x21);
      uVar12 = *(ulong *)(puVar13 + -0x19);
      uVar14 = *(undefined8 *)(puVar13 + -0x11);
      uVar10 = *(undefined8 *)(puVar13 + -9);
      uVar3 = puVar13[-1];
      uVar2 = *puVar13;
      func_0x000107c61434(uVar10);
      func_0x000107c61434(uVar12);
      uVar6 = uVar11;
      uVar7 = uVar12;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10211d80c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      puVar8 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x18);
      *puVar8 = uVar14;
      puVar8[1] = uVar10;
      *(undefined1 *)(puVar8 + 2) = uVar3;
      *(undefined1 *)((long)puVar8 + 0x11) = uVar2;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10211d810);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar13 = puVar13 + 0x28;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10211d810; end: 10211d817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211d810(undefined *param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  byte abStack_a9 [9];
  undefined *apuStack_a0 [2];
  long lStack_90;
  long lStack_88;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar1 = lVar2 + _DAT_112e59978;
    func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
    puVar3 = (undefined *)0x0;
    func_0x00010211ecd0();
    FUN_10211ed9c(uVar5,puVar3,&PTR_DAT_1104cd3d8);
    func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
    FUN_10211ecf0(param_1,param_2,puVar3,&PTR_DAT_1104cd3d8);
    func_0x000107c61434();
    FUN_1021195dc();
    func_0x000107c61434();
    FUN_1021195dc();
    if (*(ulong *)(param_2 + 0x10) >> 3 < *(ulong *)(param_1 + 0x10)) {
      puVar4 = param_1;
      func_0x000101baba54();
      func_0x000107c6142c(param_1);
    }
    else {
      apuStack_a0[0] = param_2;
      func_0x0001012eef50();
      func_0x000107c6142c(param_1);
      puVar4 = apuStack_a0[0];
    }
    func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
    (*(code *)(undefined *)0x10211ed48)(puVar4,puVar3,&PTR_DAT_1104cd3d8);
    func_0x000107c6142c(puVar4);
    func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
    FUN_10211ee5c(puVar3,&PTR_DAT_1104cd3d8);
    lVar1 = _DAT_112e599c8;
    lStack_90 = CONCAT71(lStack_90._1_7_,*(long *)(puVar3 + 0x10) != 0);
    lStack_88 = lVar2;
    func_0x000100087bd4(FUN_10211d818,apuStack_a0,PTR___sytN_11034f1b0 + 8);
    uVar5 = *(undefined8 *)(lVar2 + lVar1);
    lStack_90 = lVar2;
    func_0x000107c6157c(uVar5);
    func_0x000100087bd4(abStack_a9,FUN_10211d834,apuStack_a0,PTR___sSbN_11034dd40);
    func_0x000107c61574(uVar5);
    if ((abStack_a9[0] & 1) == 0) {
      func_0x000107c6142c(puVar3);
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8();
    }
    apuStack_a0[0] = puVar3;
    func_0x0001007d6d78(apuStack_a0);
    func_0x000107c61170(lVar2);
    func_0x000107c6142c(puVar3);
  }
  return;
}



/* Entry: 10211d818; end: 10211d833;  */

void FUN_10211d818(void)

{
  long unaff_x20;
  
  FUN_102119c48(*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10211d834; end: 10211d85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211d834(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e599c0);
  return;
}



/* Entry: 10211d85c; end: 10211d883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211d85c(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e599a0);
  func_0x000107c61434();
  return;
}



/* Entry: 10211d884; end: 10211d8c7;  */

long FUN_10211d884(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10211d8c8; end: 10211d8df;  */

void FUN_10211d8c8(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    pcVar2 = "resubscribeObserverIfNeeded(fetchAfterSubscribe:)";
    func_0x0001000c10c0("resubscribeObserverIfNeeded(fetchAfterSubscribe:)");
    func_0x000107c61180();
    puVar3 = &UNK_1104ccd68;
    func_0x000107c613fc(&UNK_1104ccd68,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar1);
    puVar4 = &UNK_1104cce80;
    func_0x000107c613fc(&UNK_1104cce80,0x19,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    puVar4[0x18] = 0;
    uStack_58 = 0x10211d91c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1104cce98;
    ppuVar5 = &puStack_78;
    puStack_50 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 10211d8e0; end: 10211d8ff;  */

void FUN_10211d8e0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10211d900; end: 10211d93b;  */

void FUN_10211d900(long param_1,long param_2)

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



/* Entry: 10211d93c; end: 10211d973;  */

void FUN_10211d93c(void)

{
  long unaff_x20;
  
  FUN_10211c8d0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10211d974; end: 10211d97b;  */

void FUN_10211d974(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long alStack_48 [3];
  
  alStack_48[0] = 0;
  uVar2 = 0;
  FUN_10211d97c(0,0x112e59a28,&PTR_PTR_1126db398);
  func_0x000107c5f9e4(param_1,alStack_48,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  lVar1 = alStack_48[0];
  if (alStack_48[0] != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,alStack_48,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c6142c(lVar1);
    }
    else {
      FUN_10211c624(lVar1);
      func_0x000107c6142c(lVar1);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 10211d97c; end: 10211d9bb;  */

void FUN_10211d97c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10211d9bc; end: 10211da03;  */

void FUN_10211d9bc(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10211da04; end: 10211da3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10211da04(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e59990;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_112e59990) == 0) {
      uVar3 = 0;
    }
    else {
      func_0x000107c498f8(*(long *)(lVar2 + _DAT_112e59990));
      uVar3 = *(undefined8 *)(lVar2 + lVar1);
    }
    *(undefined8 *)(lVar2 + lVar1) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 10211da40; end: 10211da7f;  */

undefined8 FUN_10211da40(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10211da80; end: 10211da97;  */

void FUN_10211da80(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x000107c498f8(param_1);
  }
  else {
    FUN_10211cf00();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10211da98; end: 10211dab7;  */

void FUN_10211da98(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10211dab8; end: 10211dad3;  */

void FUN_10211dab8(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 10211dad4; end: 10211daf3;  */

void FUN_10211dad4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10211daf4; end: 10211daff;  */

void FUN_10211daf4(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 10211db00; end: 10211db23;  */

undefined8 FUN_10211db00(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10211db24; end: 10211db2b;  */

void FUN_10211db24(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_invalidate_1125f8150);
  return;
}



/* Entry: 10211db2c; end: 10211db43;  */

void FUN_10211db2c(void)

{
  long unaff_x20;
  
  FUN_1021198c8(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10211db44; end: 10211db87;  */

void FUN_10211db44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5f9dc(uVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *param_1 = uVar1;
  return;
}



/* Entry: 10211db88; end: 10211db9b;  */

void FUN_10211db88(void)

{
  FUN_10211d93c();
  return;
}



/* Entry: 10211db9c; end: 10211dbdf;  */

void FUN_10211db9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10211dbe0; end: 10211dbf3;  */

void FUN_10211dbe0(void)

{
  FUN_10211d818();
  return;
}



/* Entry: 10211dbf4; end: 10211dbff;  */

void FUN_10211dbf4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10211dc00; end: 10211dc13;  */

void FUN_10211dc00(void)

{
  FUN_10211d834();
  return;
}



/* Entry: 10211dc14; end: 10211def3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10211dc14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = 0x50;
  func_0x000107c613fc();
  uVar4 = param_4;
  func_0x000107c43a80();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
  uVar4 = param_5;
  func_0x000107c43ad4();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_6 + _DAT_112e59c00);
  uVar5 = *(undefined8 *)(param_7 + _DAT_113044a80);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  uVar4 = *(undefined8 *)(param_8 + _DAT_113083868);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  uVar3 = *(undefined8 *)(param_2 + _DAT_113083f78);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  return unaff_x20;
}



/* Entry: 10211def4; end: 10211e12f;  */

void FUN_10211def4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar9 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  lVar15 = *(long *)(unaff_x20 + 0x28);
  lVar7 = lVar15;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar8 = lVar7;
    func_0x000107c4a370();
    func_0x000107c615e8(lVar7);
    if ((int)lVar8 != 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
      puVar12 = PTR_PTR_1126ae720;
      func_0x000107c61168(PTR_PTR_1126ae720);
      puVar13 = &UNK_1104cd330;
      func_0x000107c613fc(&UNK_1104cd330,0x48,7);
      *(undefined8 *)(puVar13 + 0x10) = uVar1;
      *(undefined8 *)(puVar13 + 0x18) = uVar4;
      *(undefined8 *)(puVar13 + 0x20) = uVar14;
      *(undefined8 *)(puVar13 + 0x28) = uVar6;
      *(undefined8 *)(puVar13 + 0x30) = uVar2;
      *(undefined8 *)(puVar13 + 0x38) = uVar5;
      *(long *)(puVar13 + 0x40) = lVar15;
      pcStack_80 = FUN_10211e544;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      uStack_90 = 0x10211e77c;
      puStack_88 = &UNK_1104cd348;
      puStack_78 = puVar13;
      func_0x000107c60bc4(&puStack_a0);
      puVar13 = puStack_78;
      func_0x000107c61434(uVar5);
      func_0x000107c61174(uVar1);
      func_0x000107c61174(uVar4);
      func_0x000107c61174();
      func_0x000107c61174(uVar6);
      func_0x000107c61174(lVar15);
      func_0x000107c61574(puVar13);
      func_0x000107c3e4fc(puVar12);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar9);
      puVar13 = PTR_PTR_1126ae720;
      func_0x000107c61168(PTR_PTR_1126ae720);
      puVar10 = &UNK_1104cd380;
      func_0x000107c613fc(&UNK_1104cd380,0x20,7);
      *(undefined8 *)(puVar10 + 0x10) = uVar3;
      *(undefined8 *)(puVar10 + 0x18) = uVar14;
      pcStack_80 = FUN_10211e5d0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      uStack_90 = 0x10211e780;
      puStack_88 = &UNK_1104cd398;
      puStack_78 = puVar10;
      func_0x000107c60bc4(&puStack_a0);
      puVar10 = puStack_78;
      func_0x000107c61174(uVar14);
      func_0x000107c61174(uVar3);
      func_0x000107c61574(puVar10);
      func_0x000107c3e4fc(puVar13);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar11);
      func_0x0001023f6f4c(0);
      func_0x000107c610f8();
      goto LAB_10211e108;
    }
  }
  func_0x0001023f6f4c(0);
  func_0x000107c610f8();
  puVar12 = (undefined *)0x0;
  puVar13 = (undefined *)0x0;
LAB_10211e108:
  func_0x0001023f6e50(puVar12,puVar13);
  return;
}



/* Entry: 10211e130; end: 10211e543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10211e130(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long extraout_x8;
  undefined8 uVar15;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  uStack_a0 = param_6;
  uStack_98 = param_5;
  func_0x000107c5f804();
  lStack_90 = *(long *)(lVar3 + -8);
  lStack_88 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  uVar15 = *(undefined8 *)(param_4 + _DAT_1130227a8);
  uStack_a8 = *(undefined8 *)(param_4 + _DAT_1130227b0);
  lVar4 = 0;
  func_0x00010211d514();
  lStack_80 = lVar4;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112e59948,0);
  lVar3 = _DAT_112e59988;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  puStack_68 = puVar5;
  func_0x0001000285a8(0x112e59b38,&UNK_10da5e730);
  func_0x000107c613fc();
  ppuVar6 = &puStack_68;
  func_0x00010042e6a0();
  *(undefined ***)(lVar4 + lVar3) = ppuVar6;
  *(undefined8 *)(lVar4 + _DAT_112e59990) = 0;
  *(undefined8 *)(lVar4 + _DAT_112e59998) = 0;
  *(undefined **)(lVar4 + _DAT_112e599a0) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined1 *)(lVar4 + _DAT_112e599a8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e599b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + _DAT_112e599b8) = 0;
  *(undefined1 *)(lVar4 + _DAT_112e599c0) = 0;
  lVar3 = _DAT_112e599c8;
  uVar7 = 0;
  func_0x00010006a340();
  uVar13 = uVar7;
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar4 + lVar3) = uVar13;
  lVar3 = _DAT_112e599d0;
  uVar13 = uVar7;
  func_0x000107c613fc(uVar7,0x18,7);
  func_0x00010006a360();
  *(undefined8 *)(lVar4 + lVar3) = uVar13;
  *(undefined8 *)(lVar4 + _DAT_112e59950) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112e59958) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112e59960) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112e59968) = uVar15;
  *(undefined8 *)(lVar4 + _DAT_112e59970) = param_7;
  lVar3 = 0;
  func_0x00010211ecd0();
  lVar8 = lVar3;
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_7);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *(undefined **)(lVar8 + 0x10) = puVar9;
  FUN_10211d5f0();
  *(undefined **)(lVar8 + 0x18) = puVar5;
  puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar8 + 0x20) = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar13 = uVar7;
  func_0x000107c613fc(uVar7,0x18,7);
  func_0x00010006a360();
  *(undefined8 *)(lVar8 + 0x28) = uVar13;
  plVar14 = (long *)(lVar4 + _DAT_112e59978);
  plVar14[3] = lVar3;
  plVar14[4] = (long)&PTR_DAT_1104cd3d8;
  *plVar14 = lVar8;
  lVar10 = 0;
  func_0x00010211658c();
  lVar11 = lVar10;
  func_0x000107c613fc();
  *(undefined **)(lVar11 + 0x10) = puVar5;
  func_0x000107c613fc(uVar7,0x18,7);
  func_0x000107c61174();
  func_0x000107c6157c(lVar8);
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar13 = uStack_a0;
  uVar12 = uStack_a0;
  func_0x000107c61434();
  func_0x00010006a360();
  lVar2 = lStack_88;
  lVar3 = lStack_90;
  *(undefined8 *)(lVar11 + 0x18) = uVar12;
  *(undefined8 *)(lVar11 + 0x20) = uVar15;
  *(undefined8 *)(lVar11 + 0x28) = uVar7;
  *(undefined8 *)(lVar11 + 0x30) = uStack_98;
  *(undefined8 *)(lVar11 + 0x38) = uVar13;
  plVar14 = (long *)(lVar4 + _DAT_112e59980);
  plVar14[3] = lVar10;
  plVar14[4] = (long)&PTR_DAT_1104cc9e8;
  *plVar14 = lVar11;
  (**(code **)(lStack_90 + 0x68))
            (auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lStack_88);
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar13 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f063090);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar13);
  (**(code **)(lVar3 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined **)(lVar4 + _DAT_112e599d8) = puVar5;
  lStack_70 = lStack_80;
  plVar14 = &lStack_78;
  lStack_78 = lVar4;
  func_0x000107c61154(plVar14,PTR_s_init_1125d9248);
  func_0x000107c61574(lVar8);
  return plVar14;
}



/* Entry: 10211e544; end: 10211e573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10211e544(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar18;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar2 = 0;
  func_0x000107c5f804();
  lStack_90 = *(long *)(lVar2 + -8);
  lStack_88 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  uVar18 = *(undefined8 *)(lVar8 + _DAT_1130227a8);
  uStack_a8 = *(undefined8 *)(lVar8 + _DAT_1130227b0);
  lVar3 = 0;
  func_0x00010211d514();
  lStack_80 = lVar3;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112e59948,0);
  lVar8 = _DAT_112e59988;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  puStack_68 = puVar4;
  func_0x0001000285a8(0x112e59b38,&UNK_10da5e730);
  func_0x000107c613fc();
  ppuVar5 = &puStack_68;
  func_0x00010042e6a0();
  *(undefined ***)(lVar3 + lVar8) = ppuVar5;
  *(undefined8 *)(lVar3 + _DAT_112e59990) = 0;
  *(undefined8 *)(lVar3 + _DAT_112e59998) = 0;
  *(undefined **)(lVar3 + _DAT_112e599a0) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined1 *)(lVar3 + _DAT_112e599a8) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112e599b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar3 + _DAT_112e599b8) = 0;
  *(undefined1 *)(lVar3 + _DAT_112e599c0) = 0;
  lVar8 = _DAT_112e599c8;
  uVar6 = 0;
  func_0x00010006a340();
  uVar7 = uVar6;
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar3 + lVar8) = uVar7;
  lVar8 = _DAT_112e599d0;
  uVar7 = uVar6;
  func_0x000107c613fc(uVar6,0x18,7);
  func_0x00010006a360();
  *(undefined8 *)(lVar3 + lVar8) = uVar7;
  *(undefined8 *)(lVar3 + _DAT_112e59950) = uVar15;
  *(undefined8 *)(lVar3 + _DAT_112e59958) = uVar14;
  *(undefined8 *)(lVar3 + _DAT_112e59960) = uVar13;
  *(undefined8 *)(lVar3 + _DAT_112e59968) = uVar18;
  *(undefined8 *)(lVar3 + _DAT_112e59970) = uVar17;
  lVar8 = 0;
  func_0x00010211ecd0();
  lVar9 = lVar8;
  func_0x000107c613fc();
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *(undefined **)(lVar9 + 0x10) = puVar10;
  FUN_10211d5f0();
  *(undefined **)(lVar9 + 0x18) = puVar4;
  puVar4 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar9 + 0x20) = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar15 = uVar6;
  func_0x000107c613fc(uVar6,0x18,7);
  func_0x00010006a360();
  *(undefined8 *)(lVar9 + 0x28) = uVar15;
  plVar16 = (long *)(lVar3 + _DAT_112e59978);
  plVar16[3] = lVar8;
  plVar16[4] = (long)&PTR_DAT_1104cd3d8;
  *plVar16 = lVar9;
  lVar11 = 0;
  func_0x00010211658c();
  lVar12 = lVar11;
  func_0x000107c613fc();
  *(undefined **)(lVar12 + 0x10) = puVar4;
  func_0x000107c613fc(uVar6,0x18,7);
  func_0x000107c61174();
  func_0x000107c6157c(lVar9);
  uVar13 = uStack_a8;
  func_0x000107c61174();
  uVar15 = uStack_a0;
  uVar14 = uStack_a0;
  func_0x000107c61434();
  func_0x00010006a360();
  lVar2 = lStack_88;
  lVar8 = lStack_90;
  *(undefined8 *)(lVar12 + 0x18) = uVar14;
  *(undefined8 *)(lVar12 + 0x20) = uVar18;
  *(undefined8 *)(lVar12 + 0x28) = uVar13;
  *(undefined8 *)(lVar12 + 0x30) = uStack_98;
  *(undefined8 *)(lVar12 + 0x38) = uVar15;
  plVar16 = (long *)(lVar3 + _DAT_112e59980);
  plVar16[3] = lVar11;
  plVar16[4] = (long)&PTR_DAT_1104cc9e8;
  *plVar16 = lVar12;
  (**(code **)(lStack_90 + 0x68))
            (auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lStack_88);
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar15 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f063090);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar15);
  (**(code **)(lVar8 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined **)(lVar3 + _DAT_112e599d8) = puVar4;
  lStack_70 = lStack_80;
  plVar16 = &lStack_78;
  lStack_78 = lVar3;
  func_0x000107c61154(plVar16,PTR_s_init_1125d9248);
  func_0x000107c61574(lVar9);
  return plVar16;
}



/* Entry: 10211e574; end: 10211e5cf;  */

void FUN_10211e574(undefined8 param_1,undefined8 param_2)

{
  FUN_102119064(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  FUN_1021177d0(param_1,param_2);
  return;
}



/* Entry: 10211e5d0; end: 10211e5d7;  */

void FUN_10211e5d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_102119064(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  FUN_1021177d0(uVar1,uVar2);
  return;
}



/* Entry: 10211e5d8; end: 10211e60f;  */

void FUN_10211e5d8(long param_1)

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



/* Entry: 10211e610; end: 10211e74f;  */

void FUN_10211e610(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 10211e750; end: 10211e773;  */

void FUN_10211e750(undefined8 *param_1,undefined8 param_2)

{
  FUN_10211def4();
  *param_1 = param_2;
  return;
}



/* Entry: 10211e774; end: 10211e783;  */

void FUN_10211e774(long param_1,long param_2)

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



/* Entry: 10211e784; end: 10211e8c3;  */

void FUN_10211e784(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined1 auStack_58 [24];
  undefined8 uStack_38;
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0x21,0);
  func_0x000107c61434(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61558(uVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0x8000000000000000;
  FUN_10211fde8(param_2,&UNK_101391c9c,0,uVar2,&uStack_38);
  if (unaff_x21 != 0) {
    func_0x000107c6142c(param_2);
    func_0x000107c614ac(unaff_x21);
    func_0x000107c614a8(auStack_58);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10211e8c4);
    (*pcVar1)();
  }
  func_0x000107c6142c(param_2);
  *(undefined8 *)(param_1 + 0x10) = uStack_38;
  func_0x000107c614a8(auStack_58);
  func_0x000107c61428(param_1 + 0x18,auStack_58,0x21,0);
  func_0x000107c61434(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61558(uVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000000000;
  FUN_10212005c(param_3,FUN_10211fd9c,0,uVar2,&uStack_38);
  func_0x000107c6142c(param_3);
  *(undefined8 *)(param_1 + 0x18) = uStack_38;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10211e8c4; end: 10211ea5f;  */

void FUN_10211e8c4(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [24];
  
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(param_1 + 0x38);
  func_0x000107c61434();
  lVar9 = 0;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar2 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      plVar1 = (long *)(*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
                       lVar9 * 0x400);
      lVar6 = *plVar1;
      uVar2 = plVar1[1];
      func_0x000107c61428(param_2 + 0x10,auStack_78,0x21,0);
      uVar12 = *(undefined8 *)(param_2 + 0x10);
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar12);
      uVar7 = uVar2;
      func_0x000100029284();
      func_0x000107c6142c(uVar12);
      if ((uVar7 & 1) != 0) {
        iVar5 = (int)*(undefined8 *)(param_2 + 0x10);
        func_0x000107c61558();
        lVar10 = *(long *)(param_2 + 0x10);
        *(undefined8 *)(param_2 + 0x10) = 0x8000000000000000;
        if (iVar5 == 0) {
          func_0x000100184498();
        }
        func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar10 + 0x30) + lVar6 * 0x10 + 8));
        func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar10 + 0x38) + lVar6 * 0x10 + 8));
        func_0x00010105bd08(lVar6,lVar10);
        *(long *)(param_2 + 0x10) = lVar10;
      }
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(uVar2);
    }
    bVar4 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    if (bVar4) break;
    if ((long)(uVar8 + 0x3f >> 6) <= lVar9) {
      func_0x000107c61574(param_1);
      return;
    }
    uVar11 = ((ulong *)(param_1 + 0x38))[lVar9];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10211ea60);
  (*pcVar3)();
}



/* Entry: 10211ea60; end: 10211eac3;  */

void FUN_10211ea60(long param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x20,auStack_48,0x21,0);
  func_0x000107c61434(param_2);
  func_0x00010105ba6c();
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 10211eac4; end: 10211eb1f;  */

void FUN_10211eac4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c(param_3);
  func_0x000107c61434();
  FUN_1021204ec();
  func_0x000107c61574(param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 10211eb20; end: 10211eb9b;  */

uint FUN_10211eb20(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x20,auStack_48,0,0);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61434(uVar3);
  func_0x0001000f66f0(uVar2,uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  return ((uint)uVar2 ^ 0xffffffff) & 1;
}



/* Entry: 10211eb9c; end: 10211ec0f;  */

void FUN_10211eb9c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = uVar2;
  func_0x000107c61434();
  FUN_10211fa98();
  func_0x000107c6142c(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10211ec10; end: 10211ec2f;  */

bool FUN_10211ec10(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2 & 0xffffffffffff;
  if ((param_2[1] & 0x2000000000000000) != 0) {
    uVar1 = param_2[1] >> 0x38 & 0xf;
  }
  return uVar1 != 0;
}



/* Entry: 10211ec30; end: 10211ec93;  */

void FUN_10211ec30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 10211ec94; end: 10211ecef;  */

void FUN_10211ec94(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10211ecf0; end: 10211ed9b;  */

void FUN_10211ecf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = *unaff_x20;
  uStack_48 = param_1;
  uStack_40 = param_2;
  func_0x000100087bd4(0x1021207cc,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10211ed9c; end: 10211eda7;  */

void FUN_10211ed9c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = *unaff_x20;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_10212079c,auStack_50,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10211eda8; end: 10211ee5b;  */

void FUN_10211eda8(void)

{
  undefined8 *unaff_x20;
  
  func_0x000100087bd4(FUN_10212074c,*unaff_x20,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10211ee5c; end: 10211ee93;  */

undefined8 FUN_10211ee5c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  uVar1 = 0x112d550a0;
  uVar2 = *unaff_x20;
  func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
  func_0x000100087bd4(&uStack_38,FUN_10211efb0,uVar2,uVar1);
  return uStack_38;
}



/* Entry: 10211ee94; end: 10211eeef;  */

undefined8
FUN_10211ee94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = *unaff_x20;
  func_0x0001000285a8(param_3,param_4);
  func_0x000100087bd4(&uStack_38,param_5,uVar1,param_3);
  return uStack_38;
}



/* Entry: 10211eef0; end: 10211eefb;  */

void FUN_10211eef0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = *unaff_x20;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_10211ef4c,auStack_50,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10211eefc; end: 10211ef4b;  */

void FUN_10211eefc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = *unaff_x20;
  uStack_38 = param_1;
  func_0x000100087bd4(param_4,auStack_50,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10211ef4c; end: 10211ef63;  */

void FUN_10211ef4c(void)

{
  long unaff_x20;
  
  FUN_10211ec30(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10211ef64; end: 10211efaf;  */

void FUN_10211ef64(undefined8 *param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x18,auStack_38,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61434();
  return;
}



/* Entry: 10211efb0; end: 10211efc7;  */

void FUN_10211efb0(void)

{
  FUN_10211eb9c();
  return;
}



/* Entry: 10211efc8; end: 10211f06f;  */

void FUN_10211efc8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  *(undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 8) = param_4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10211f010);
  (*pcVar3)();
}



/* Entry: 10211f070; end: 10211f373;  */

void FUN_10211f070(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112e59a18,&UNK_10da5e698);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_10211f14c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61434(uVar12);
        if (uVar8 != 0) break;
LAB_10211f14c:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10211f1e0);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10211f1b8;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_10211f1b8:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10211f374; end: 10211fa97;  */

void FUN_10211f374(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e59a18;
  func_0x0001000285a8(0x112e59a18,&UNK_10da5e698);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10211f5dc:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10211f60c);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_10211f5dc;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10211f610);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10211fa98; end: 10211fc9f;  */

undefined * FUN_10211fa98(undefined *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *unaff_x21;
  ulong uVar15;
  ulong uVar16;
  undefined *puStack_60;
  undefined *apuStack_58 [2];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = (1L << ((ulong)(byte)param_1[0x20] & 0x3f)) + 0x3fU >> 6;
  uVar16 = uVar15 * 8;
  if ((param_1[0x20] & 0x3f) < 0xe) {
    func_0x000107c6157c(param_1);
  }
  else {
    iVar6 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_1);
    if ((iVar6 == 0) || (uVar13 = uVar16, func_0x000107c61594(uVar16,8), (uVar13 & 1) == 0)) {
      func_0x000107c6158c(uVar16,0xffffffffffffffff);
      func_0x000107c6157c(param_1);
      FUN_101f1fce4(apuStack_58,uVar16,uVar15,param_1,FUN_10211ec10,0,&puStack_60);
      puVar7 = apuStack_58[0];
      if (unaff_x21 != (undefined *)0x0) {
        puVar7 = puStack_60;
      }
      puVar9 = (undefined *)0xffffffffffffffff;
      func_0x000107c61590(uVar16,0xffffffffffffffff);
      puVar3 = puVar7;
      goto joined_r0x00010211fc58;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = (undefined *)((long)apuStack_58 + (-8 - (uVar16 + 0xf & 0x3ffffffffffffff0)));
  func_0x000107c60ee4(puVar7,uVar16);
  puVar9 = param_1;
  FUN_10211fca0(puVar7,uVar15);
  puVar3 = unaff_x21;
joined_r0x00010211fc58:
  if (unaff_x21 == (undefined *)0x0) {
    func_0x000107c61574();
  }
  else {
    iVar6 = 2;
    puVar9 = (undefined *)0x0;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar6 != 0) {
      uVar8 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar9 = PTR___ss5ErrorWS_11034ee10;
      func_0x000107c61658(&puStack_60,uVar8);
    }
    func_0x000107c61574();
    puVar7 = puVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar7;
  }
  func_0x000107c60e78();
  lVar10 = 0;
  lVar11 = 0;
  uVar15 = 1L << ((ulong)(byte)puVar9[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((puVar9[0x20] & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(puVar9 + 0x40);
  do {
    lVar12 = lVar11;
    if (uVar16 == 0) {
      do {
        lVar11 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10211fd9c);
          (*pcVar4)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar11) {
          FUN_101f1fa90();
          return param_1;
        }
        uVar16 = *(ulong *)((long)(puVar9 + 0x40) + lVar11 * 8);
        lVar12 = lVar12 + 1;
      } while (uVar16 == 0);
      uVar13 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar16 - 1 & uVar16;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar11 * 0x40;
    }
    else {
      uVar13 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar16 - 1 & uVar16;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar11 << 6;
    }
    puVar1 = (ulong *)(*(long *)(puVar9 + 0x38) + uVar13 * 0x10);
    uVar2 = puVar1[1];
    uVar14 = *puVar1 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar14 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar14 != 0) {
      uVar14 = uVar13 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1 + uVar14) = *(ulong *)(param_1 + uVar14) | 1L << (uVar13 & 0x3f);
      bVar5 = SCARRY8(lVar10,1);
      lVar10 = lVar10 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10211fd84);
        (*pcVar4)();
      }
    }
  } while( true );
}



/* Entry: 10211fca0; end: 10211fd9b;  */

void FUN_10211fca0(long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar5 = 0;
  lVar6 = 0;
  uVar10 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(param_3 + 0x40);
  do {
    lVar8 = lVar6;
    if (uVar7 == 0) {
      do {
        lVar6 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10211fd9c);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar6) {
          FUN_101f1fa90();
          return;
        }
        uVar7 = ((ulong *)(param_3 + 0x40))[lVar6];
        lVar8 = lVar8 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 * 0x40;
    }
    else {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 << 6;
    }
    puVar1 = (ulong *)(*(long *)(param_3 + 0x38) + uVar9 * 0x10);
    uVar2 = puVar1[1];
    uVar11 = *puVar1 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar11 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar11 != 0) {
      uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1 + uVar11) = *(ulong *)(param_1 + uVar11) | 1L << (uVar9 & 0x3f);
      bVar4 = SCARRY8(lVar5,1);
      lVar5 = lVar5 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10211fd84);
        (*pcVar3)();
      }
    }
  } while( true );
}



/* Entry: 10211fd9c; end: 10211fdcf;  */

/* WARNING: Possible PIC construction at 0x00010211fdbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010211fdc0) */

void FUN_10211fd9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10211fdd0; end: 10211fde7;  */

void FUN_10211fdd0(void)

{
  long unaff_x20;
  
  FUN_10211eac4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10211fde8; end: 10212005b;  */

void FUN_10211fde8(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar17 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = lVar17 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11);
      uStack_80 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11);
      uStack_70 = *puVar1;
      uVar4 = puVar1[1];
      uStack_78 = uVar3;
      uStack_68 = uVar4;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar4);
      (*param_2)(&uStack_a0,&uStack_80);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar3);
      uVar4 = uStack_88;
      uVar3 = uStack_90;
      uVar5 = uStack_98;
      uVar11 = uStack_a0;
      lVar15 = *param_5;
      uVar9 = uStack_a0;
      uVar10 = uStack_98;
      func_0x000100029284();
      lVar12 = *(long *)(lVar15 + 0x10);
      uVar14 = (ulong)~(uint)uVar10 & 1;
      lVar16 = lVar12 + uVar14;
      if (SCARRY8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102120048);
        (*pcVar6)();
      }
      if (*(long *)(lVar15 + 0x18) < lVar16) {
        func_0x0001001833c8(lVar16,param_4 & 1);
        uVar9 = uVar11;
        uVar14 = uVar5;
        func_0x000100029284();
        if (((uint)uVar10 & 1) != ((uint)uVar14 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10212005c);
          (*pcVar6)();
        }
      }
      else if ((param_4 & 1) == 0) {
        func_0x000100184498();
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = *param_5;
      if ((uVar10 & 1) == 0) {
        lVar12 = lVar16 + (uVar9 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10212004c);
          (*pcVar6)();
        }
        *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar5);
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        uVar8 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        func_0x000107c6142c(uVar8);
      }
      param_4 = 1;
    }
    bVar7 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102120044);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar17) break;
    uVar18 = ((ulong *)(param_1 + 0x40))[lVar17];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 10212005c; end: 1021202af;  */

void FUN_10212005c(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar15 = 0;
  while( true ) {
    while (uVar17 != 0) {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar15 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uStack_78 = *puVar1;
      uVar3 = puVar1[1];
      uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar9 * 8);
      uStack_70 = uVar3;
      uStack_68 = uVar16;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar16);
      (*param_2)(&uStack_90,&uStack_78);
      func_0x000107c6142c(uVar16);
      func_0x000107c6142c(uVar3);
      uVar3 = uStack_80;
      uVar4 = uStack_88;
      uVar9 = uStack_90;
      lVar13 = *param_5;
      uVar7 = uStack_90;
      uVar8 = uStack_88;
      func_0x000100029284();
      lVar10 = *(long *)(lVar13 + 0x10);
      uVar12 = (ulong)~(uint)uVar8 & 1;
      lVar14 = lVar10 + uVar12;
      if (SCARRY8(lVar10,uVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10212029c);
        (*pcVar5)();
      }
      if (*(long *)(lVar13 + 0x18) < lVar14) {
        FUN_10211f374(lVar14,param_4 & 1);
        uVar7 = uVar9;
        uVar12 = uVar4;
        func_0x000100029284();
        if (((uint)uVar8 & 1) != ((uint)uVar12 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1021202b0);
          (*pcVar5)();
        }
      }
      else if ((param_4 & 1) == 0) {
        FUN_10211f070();
      }
      uVar17 = uVar17 - 1 & uVar17;
      lVar14 = *param_5;
      if ((uVar8 & 1) == 0) {
        lVar10 = lVar14 + (uVar7 >> 6) * 8;
        *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar14 + 0x30) + uVar7 * 0x10);
        *puVar2 = uVar9;
        puVar2[1] = uVar4;
        *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = uVar3;
        if (SCARRY8(*(long *)(lVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1021202a0);
          (*pcVar5)();
        }
        *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar4);
        uVar16 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = uVar3;
        func_0x000107c6142c(uVar16);
      }
      param_4 = 1;
    }
    bVar6 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102120298);
      (*pcVar5)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar15) break;
    uVar17 = ((ulong *)(param_1 + 0x40))[lVar15];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1021202b0; end: 1021204eb;  */

void FUN_1021202b0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [24];
  
  uVar13 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_3 + 0x38);
  func_0x000107c61428(param_4 + 0x20,auStack_78,0,0);
  lVar12 = 0;
  lVar9 = 0;
LAB_10212034c:
  do {
    if (uVar14 == 0) {
      do {
        lVar15 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1021204ec);
          (*pcVar4)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar15) {
          func_0x000107c6157c(param_3);
          func_0x0001010aeef0(param_1,param_2,lVar12,param_3);
          return;
        }
        uVar14 = ((ulong *)(param_3 + 0x38))[lVar15];
        lVar9 = lVar9 + 1;
      } while (uVar14 == 0);
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar15 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8);
    lVar17 = *(long *)(param_4 + 0x20);
    lVar9 = lVar15;
    if (*(long *)(lVar17 + 0x10) != 0) {
      puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + (uVar8 | lVar15 << 6) * 0x10);
      uVar11 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c6068c(auStack_c0,*(undefined8 *)(lVar17 + 0x28));
      func_0x000107c61434(uVar2);
      func_0x000107c61434(lVar17);
      puVar6 = auStack_c0;
      func_0x000107c5fb58(puVar6,uVar11,uVar2);
      func_0x000107c606a8();
      uVar10 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
      uVar16 = (ulong)puVar6 & (uVar10 ^ 0xffffffffffffffff);
      if ((*(ulong *)(lVar17 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
        do {
          puVar1 = (ulong *)(*(long *)(lVar17 + 0x30) + uVar16 * 0x10);
          uVar7 = *puVar1;
          uVar3 = puVar1[1];
          if ((uVar7 == uVar11 && uVar3 == uVar2) ||
             (func_0x000107c605b8(uVar7,uVar3,uVar11,uVar2,0), (uVar7 & 1) != 0)) {
            func_0x000107c6142c(uVar2);
            func_0x000107c6142c(lVar17);
            goto LAB_10212034c;
          }
          uVar16 = uVar16 + 1 & ~uVar10;
        } while ((*(ulong *)(lVar17 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
      }
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(lVar17);
    }
    uVar11 = (uVar8 & 0xffffffffffffffc0 | lVar15 << 6) >> 3;
    *(ulong *)(param_1 + uVar11) = *(ulong *)(param_1 + uVar11) | 1L << (uVar8 & 0x3f);
    bVar5 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1021204a8);
      (*pcVar4)();
    }
  } while( true );
}



/* Entry: 1021204ec; end: 10212072f;  */

ulong FUN_1021204ec(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong unaff_x21;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_70;
  ulong auStack_68 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  uVar6 = uVar5 * 8;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_1);
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_1);
    if ((iVar1 == 0) || (uVar4 = uVar6, func_0x000107c61594(uVar6,8), (uVar4 & 1) == 0)) {
      func_0x000107c6158c(uVar6,0xffffffffffffffff);
      func_0x0001010af89c(auStack_68);
      uVar4 = auStack_68[0];
      if (unaff_x21 != 0) {
        uVar4 = uStack_70;
      }
      func_0x000107c61590(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x0001021206dc;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar4 = (long)auStack_68 + (-8 - (uVar6 + 0xf & 0x1ffffffffffffff0));
  func_0x000107c60ee4(uVar4,uVar6);
  func_0x000107c6157c(param_2);
  FUN_1021202b0(uVar4,uVar5,param_1,param_2);
  if (unaff_x21 != 0) {
    uVar4 = unaff_x21;
  }
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
joined_r0x0001021206dc:
  if (unaff_x21 == 0) {
    func_0x000107c61574(param_2);
    func_0x000107c61574(param_1);
    uVar2 = (uint)param_1;
  }
  else {
    iVar1 = 2;
    uStack_70 = uVar4;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&uStack_70,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    uVar2 = (uint)param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    FUN_10211eb20();
    return (ulong)(uVar2 & 1);
  }
  return uVar4;
}



/* Entry: 102120730; end: 10212074b;  */

uint FUN_102120730(uint param_1)

{
  FUN_10211eb20();
  return param_1 & 1;
}



/* Entry: 10212074c; end: 10212079b;  */

void FUN_10212074c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined **)(unaff_x20 + 0x20) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 10212079c; end: 1021207e7;  */

void FUN_10212079c(void)

{
  long unaff_x20;
  
  FUN_10211ea60(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1021207e8; end: 1021207f7; -[_TtC23FriendsFeedItemServices23FriendsFeedItemServices friendsFeedItemService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021207e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e59c00));
  return;
}


