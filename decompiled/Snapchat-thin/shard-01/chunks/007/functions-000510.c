/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101477e4c; end: 101477e6b;  */

undefined1  [16] FUN_101477e4c(void)

{
  return ZEXT816(0x1103c3840);
}



/* Entry: 101477e6c; end: 101477e9f;  */

void FUN_101477e6c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101477ea0; end: 101478223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101477ea0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [40];
  
  func_0x000100083b20(&puStack_c8);
  uVar10 = *(undefined8 *)(puStack_c8 + _DAT_113091b70);
  func_0x000107c615f0(uVar10);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000100083b20(auStack_98);
  puVar1 = &UNK_1103c3910;
  func_0x000107c613fc(&UNK_1103c3910,0x18,7);
  *(undefined **)(puVar1 + 0x10) = puStack_c8;
  lVar2 = 0;
  func_0x00010147ab20();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0xb8) = 0;
  *(undefined2 *)(lVar2 + 0xc0) = 1;
  *(undefined1 *)(lVar2 + 0xc2) = 0;
  *(undefined8 *)(lVar2 + 200) = 0;
  *(undefined2 *)(lVar2 + 0xd0) = 1;
  *(undefined8 *)(lVar2 + 0xe0) = 0;
  *(undefined8 *)(lVar2 + 0xe8) = 0;
  *(undefined8 *)(lVar2 + 0xd8) = 0;
  *(undefined1 *)(lVar2 + 0xf0) = 0;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  puVar4 = puStack_c8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0xf8) = puVar3;
  *(code **)(lVar2 + 0x10) = FUN_101478254;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(code **)(lVar2 + 0x20) = FUN_1014782e8;
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  *(undefined8 *)(lVar2 + 0x30) = uVar10;
  *(code **)(lVar2 + 0x38) = FUN_1014783dc;
  *(undefined8 *)(lVar2 + 0x40) = param_5;
  *(undefined8 *)(lVar2 + 0x58) = 0x4014000000000000;
  *(undefined8 *)(lVar2 + 0x50) = 0x4024000000000000;
  func_0x000101478448(auStack_98,lVar2 + 0x60);
  *(code **)(lVar2 + 0x88) = FUN_1014783e4;
  *(undefined **)(lVar2 + 0x90) = puVar1;
  *(code **)(lVar2 + 0x98) = FUN_101478408;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0x10147840c;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  func_0x000107c615f0(uVar10);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar1);
  uVar5 = uVar10;
  func_0x000107c41b80(uVar10);
  func_0x000107c61180();
  puVar3 = &UNK_1103c3938;
  puVar6 = puVar3;
  func_0x000107c613fc(&UNK_1103c3938,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,lVar2);
  pcStack_a8 = FUN_10147848c;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  pcStack_b8 = FUN_100c1de60;
  puStack_b0 = &UNK_1103c3950;
  ppuVar7 = &puStack_c8;
  puStack_a0 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_a0;
  func_0x000107c6157c(lVar2);
  func_0x000107c61574(puVar6);
  uVar8 = uVar5;
  func_0x000107c5c320(uVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c3e924(uVar8);
  uVar5 = uVar10;
  func_0x000107c5e370(uVar10);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_1103c3938,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,lVar2);
  func_0x000107c61574(lVar2);
  pcStack_a8 = (code *)0x1014784b0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  pcStack_b8 = FUN_100c1de60;
  puStack_b0 = &UNK_1103c3978;
  ppuVar7 = &puStack_c8;
  puStack_a0 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_a0);
  uVar9 = uVar5;
  func_0x000107c5c320(uVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c3e924(uVar9);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c615e8(uVar10);
  func_0x000107c61574(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x0001000834e4(auStack_98);
  *param_1 = lVar2;
  return;
}



/* Entry: 101478224; end: 101478253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101478224(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [40];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000100083b20(&puStack_c8,*(undefined8 *)(unaff_x20 + 0x10));
  uVar13 = *(undefined8 *)(puStack_c8 + _DAT_113091b70);
  func_0x000107c615f0(uVar13);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000100083b20(auStack_98);
  puVar4 = &UNK_1103c3910;
  func_0x000107c613fc(&UNK_1103c3910,0x18,7);
  *(undefined **)(puVar4 + 0x10) = puStack_c8;
  lVar5 = 0;
  func_0x00010147ab20();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0xb8) = 0;
  *(undefined2 *)(lVar5 + 0xc0) = 1;
  *(undefined1 *)(lVar5 + 0xc2) = 0;
  *(undefined8 *)(lVar5 + 200) = 0;
  *(undefined2 *)(lVar5 + 0xd0) = 1;
  *(undefined8 *)(lVar5 + 0xe0) = 0;
  *(undefined8 *)(lVar5 + 0xe8) = 0;
  *(undefined8 *)(lVar5 + 0xd8) = 0;
  *(undefined1 *)(lVar5 + 0xf0) = 0;
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  puVar7 = puStack_c8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + 0xf8) = puVar6;
  *(code **)(lVar5 + 0x10) = FUN_101478254;
  *(undefined8 *)(lVar5 + 0x18) = uVar2;
  *(code **)(lVar5 + 0x20) = FUN_1014782e8;
  *(undefined8 *)(lVar5 + 0x28) = uVar1;
  *(undefined8 *)(lVar5 + 0x30) = uVar13;
  *(code **)(lVar5 + 0x38) = FUN_1014783dc;
  *(undefined8 *)(lVar5 + 0x40) = uVar3;
  *(undefined8 *)(lVar5 + 0x58) = 0x4014000000000000;
  *(undefined8 *)(lVar5 + 0x50) = 0x4024000000000000;
  func_0x000101478448(auStack_98,lVar5 + 0x60);
  *(code **)(lVar5 + 0x88) = FUN_1014783e4;
  *(undefined **)(lVar5 + 0x90) = puVar4;
  *(code **)(lVar5 + 0x98) = FUN_101478408;
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0xa8) = 0x10147840c;
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  func_0x000107c615f0(uVar13);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar4);
  uVar8 = uVar13;
  func_0x000107c41b80(uVar13);
  func_0x000107c61180();
  puVar6 = &UNK_1103c3938;
  puVar9 = puVar6;
  func_0x000107c613fc(&UNK_1103c3938,0x18,7);
  func_0x000107c61644(puVar9 + 0x10,lVar5);
  pcStack_a8 = FUN_10147848c;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  pcStack_b8 = FUN_100c1de60;
  puStack_b0 = &UNK_1103c3950;
  ppuVar10 = &puStack_c8;
  puStack_a0 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar9 = puStack_a0;
  func_0x000107c6157c(lVar5);
  func_0x000107c61574(puVar9);
  uVar11 = uVar8;
  func_0x000107c5c320(uVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c3e924(uVar11);
  uVar8 = uVar13;
  func_0x000107c5e370(uVar13);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_1103c3938,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,lVar5);
  func_0x000107c61574(lVar5);
  pcStack_a8 = (code *)0x1014784b0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  pcStack_b8 = FUN_100c1de60;
  puStack_b0 = &UNK_1103c3978;
  ppuVar10 = &puStack_c8;
  puStack_a0 = puVar6;
  func_0x000107c60bc4(ppuVar10);
  func_0x000107c61574(puStack_a0);
  uVar12 = uVar8;
  func_0x000107c5c320(uVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c3e924(uVar12);
  func_0x000107c61170(puVar7);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(uVar13);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x0001000834e4(auStack_98);
  *param_1 = lVar5;
  return;
}



/* Entry: 101478254; end: 101478277;  */

undefined8 FUN_101478254(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 101478278; end: 1014782e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101478278(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + _DAT_11307e678);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1014782e8; end: 1014782ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014782e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + _DAT_11307e678);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1014782f0; end: 1014783db;  */

long FUN_1014782f0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar5 = lStack_38;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uVar4 = 0x800000010ef84060;
    uVar2 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010ef84060);
    lVar3 = lVar5;
    func_0x000107c5c1e0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar2);
    if (lVar3 == 0) {
      lVar5 = 0;
      uVar4 = 0;
    }
    else {
      lVar5 = lVar3;
      func_0x000107c5faec(lVar3);
      func_0x000107c61170(lVar3);
    }
    FUN_1014789ac(lVar5,uVar4);
    func_0x000107c61170(lStack_38);
    func_0x000107c6142c(uVar4);
    return lVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014783dc);
  (*pcVar1)();
}



/* Entry: 1014783dc; end: 1014783e3;  */

long FUN_1014783dc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar5 = lStack_38;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uVar4 = 0x800000010ef84060;
    uVar2 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010ef84060);
    lVar3 = lVar5;
    func_0x000107c5c1e0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar2);
    if (lVar3 == 0) {
      lVar5 = 0;
      uVar4 = 0;
    }
    else {
      lVar5 = lVar3;
      func_0x000107c5faec(lVar3);
      func_0x000107c61170(lVar3);
    }
    FUN_1014789ac(lVar5,uVar4);
    func_0x000107c61170(lStack_38);
    func_0x000107c6142c(uVar4);
    return lVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014783dc);
  (*pcVar1)();
}



/* Entry: 1014783e4; end: 101478407;  */

uint FUN_1014783e4(uint param_1)

{
  func_0x000100410108();
  return param_1 & 1;
}



/* Entry: 101478408; end: 10147840b;  */

void FUN_101478408(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CACurrentMediaTime_110346c38)();
  return;
}



/* Entry: 10147840c; end: 10147848b;  */

uint FUN_10147840c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010407131c();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = uVar1;
  func_0x0001040713f4();
  func_0x000107c61170(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 10147848c; end: 1014784b7;  */

void FUN_10147848c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0xf0) = 0;
    pcVar1 = *(code **)(lVar3 + 0x98);
    uVar2 = *(undefined8 *)(lVar3 + 0xa0);
    func_0x000107c6157c(uVar2);
    (*pcVar1)();
    func_0x000107c61574(uVar2);
    *(undefined8 *)(lVar3 + 0xb8) = param_1;
    *(undefined1 *)(lVar3 + 0xc0) = 0;
    if (*(char *)(lVar3 + 0xc2) == '\x01') {
      FUN_101479258();
    }
    else if (*(char *)(lVar3 + 0xc1) == '\x01') {
      FUN_101479440(*(undefined8 *)(lVar3 + 0x50));
    }
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 1014784b8; end: 1014788a3;  */

undefined *
FUN_1014784b8(long param_1,ulong param_2,code *param_3,undefined8 param_4,ulong param_5,
             ulong param_6)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined *puVar11;
  long unaff_x21;
  ulong uVar12;
  ulong uVar13;
  undefined *puStack_80;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10147883c);
    (*pcVar2)();
  }
  uVar10 = param_6 >> 0x38 & 0xf;
  uVar9 = (uint)(param_5 >> 0x20);
  if (param_1 != 0) {
    uVar13 = param_5 & 0xffffffffffff;
    if ((param_6 & 0x2000000000000000) != 0) {
      uVar13 = uVar10;
    }
    if (uVar13 != 0) {
      uVar9 = uVar9 >> 0x1b & 1;
      if ((param_6 & 0x1000000000000000) == 0) {
        uVar9 = 1;
      }
      uVar10 = 7;
      if (uVar9 == 0) {
        uVar10 = 0xb;
      }
      uVar10 = uVar10 | uVar13 << 0x10;
      uVar13 = uVar13 * 4;
      puVar11 = (undefined *)0xf;
      puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_101478540:
      uVar12 = (ulong)puVar11 >> 0xe;
      puVar6 = puVar11;
      puVar5 = puVar11;
      if (uVar12 != uVar13) {
        do {
          puVar11 = puVar6;
          uVar7 = param_5;
          func_0x000107c5fbcc(puVar11,param_5,param_6);
          uVar3 = 0;
          (*param_3)();
          if (unaff_x21 != 0) {
            func_0x000107c6142c(puStack_80);
            func_0x000107c6142c(param_6);
            func_0x000107c6142c(uVar7);
            return puVar11;
          }
          func_0x000107c6142c(uVar7);
          if ((uVar3 & 1) == 0) {
            func_0x000107c5fb60(puVar11,param_5,param_6);
            puVar6 = puVar11;
            puVar11 = puVar5;
          }
          else {
            if (((ulong)puVar5 >> 0xe != uVar12) || ((param_2 & 1) == 0)) goto LAB_1014785fc;
            func_0x000107c5fb60(puVar11,param_5,param_6);
            puVar6 = puVar11;
          }
          uVar12 = (ulong)puVar6 >> 0xe;
          puVar5 = puVar11;
          if (uVar12 == uVar13) break;
        } while( true );
      }
      goto LAB_101478788;
    }
  }
  uVar13 = param_5 & 0xffffffffffff;
  if ((param_6 & 0x2000000000000000) != 0) {
    uVar13 = uVar10;
  }
  if ((uVar13 == 0) && ((param_2 & 1) != 0)) {
    func_0x000107c6142c(param_6);
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar9 = uVar9 >> 0x1b & 1;
  if ((param_6 & 0x1000000000000000) == 0) {
    uVar9 = 1;
  }
  uVar10 = 7;
  if (uVar9 == 0) {
    uVar10 = 0xb;
  }
  uVar10 = uVar10 | uVar13 << 0x10;
  uVar4 = 0xf;
  uVar12 = param_6;
  func_0x000107c5fbd8();
  puVar11 = (undefined *)0x0;
  FUN_1014788a4(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar13 = *(ulong *)(puVar11 + 0x10);
  puStack_80 = puVar11;
  if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar13) {
    puStack_80 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
    FUN_1014788a4(puStack_80,uVar13 + 1,1,puVar11);
  }
  *(ulong *)(puStack_80 + 0x10) = uVar13 + 1;
  *(undefined8 *)(puStack_80 + uVar13 * 0x20 + 0x20) = uVar4;
  *(ulong *)(puStack_80 + uVar13 * 0x20 + 0x28) = uVar10;
  *(ulong *)(puStack_80 + uVar13 * 0x20 + 0x30) = param_5;
  *(ulong *)(puStack_80 + uVar13 * 0x20 + 0x38) = uVar12;
LAB_10147879c:
  func_0x000107c6142c(param_6);
  return puStack_80;
LAB_1014785fc:
  if (uVar12 < (ulong)puVar5 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014788a4);
    (*pcVar2)();
  }
  puVar8 = puVar11;
  uVar12 = param_5;
  uVar3 = param_6;
  func_0x000107c5fbd8();
  puVar6 = puStack_80;
  func_0x000107c61558();
  if (((ulong)puVar6 & 1) == 0) {
    plVar1 = (long *)(puStack_80 + 0x10);
    puStack_80 = (undefined *)0x0;
    FUN_1014788a4(0,*plVar1 + 1,1);
  }
  uVar7 = *(ulong *)(puStack_80 + 0x10);
  if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar7) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puStack_80 + 0x18));
    FUN_1014788a4(puVar6,uVar7 + 1,1,puStack_80);
    puStack_80 = puVar6;
  }
  *(ulong *)(puStack_80 + 0x10) = uVar7 + 1;
  *(undefined **)(puStack_80 + uVar7 * 0x20 + 0x20) = puVar5;
  *(undefined **)(puStack_80 + uVar7 * 0x20 + 0x28) = puVar8;
  *(ulong *)(puStack_80 + uVar7 * 0x20 + 0x30) = uVar12;
  *(ulong *)(puStack_80 + uVar7 * 0x20 + 0x38) = uVar3;
  func_0x000107c5fb60(puVar11,param_5,param_6);
  if (*(long *)(puStack_80 + 0x10) == param_1) goto LAB_101478788;
  goto LAB_101478540;
LAB_101478788:
  if (((ulong)puVar11 >> 0xe != uVar13) || ((param_2 & 1) == 0)) {
    if ((ulong)puVar11 >> 0xe <= uVar13) {
      uVar13 = param_6;
      func_0x000107c5fbd8();
      func_0x000107c6142c(param_6);
      puVar6 = puStack_80;
      func_0x000107c61558();
      puVar5 = puStack_80;
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_1014788a4(0,*(long *)(puStack_80 + 0x10) + 1,1,puStack_80);
      }
      uVar12 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar12) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_1014788a4(puVar6,uVar12 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar12 + 1;
      *(undefined **)(puVar6 + uVar12 * 0x20 + 0x20) = puVar11;
      *(ulong *)(puVar6 + uVar12 * 0x20 + 0x28) = uVar10;
      *(ulong *)(puVar6 + uVar12 * 0x20 + 0x30) = param_5;
      *(ulong *)(puVar6 + uVar12 * 0x20 + 0x38) = uVar13;
      return puVar6;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101478860);
    (*pcVar2)();
  }
  goto LAB_10147879c;
}



/* Entry: 1014788a4; end: 1014789ab;  */

undefined * FUN_1014788a4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014789ac);
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
    puVar3 = (undefined *)0x112d56390;
    func_0x0001000285a8(0x112d56390,&UNK_10d947440);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSsN_11034e1d8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1014789ac; end: 101478d5b;  */

undefined * FUN_1014789ac(undefined *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  ulong *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar6 = 0;
  func_0x000107c5eb9c();
  lVar13 = *(long *)(lVar6 + -8);
  lVar18 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar16 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    puVar9 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    puVar10 = puVar9;
    func_0x000100111634();
    func_0x000100bcb1dc(puVar9 + 0x20);
  }
  else {
    puStack_a0 = param_1;
    lStack_98 = param_2;
    func_0x000107c5eb88(puVar16);
    FUN_100e8b654();
    puVar7 = puVar16;
    puVar9 = PTR___sSSN_11034da80;
    func_0x000107c601f0(puVar16,PTR___sSSN_11034da80,lVar18);
    pcStack_a8 = *(code **)(lVar13 + 8);
    (*pcStack_a8)(puVar16,lVar6);
    uVar15 = (ulong)puVar7 & 0xffffffffffff;
    if (((ulong)puVar9 & 0x2000000000000000) != 0) {
      uVar15 = (ulong)puVar9 >> 0x38 & 0xf;
    }
    if (uVar15 != 0) {
      puStack_70 = (undefined *)0x2c;
      uStack_68 = 0xe100000000000000;
      ppuStack_90 = &puStack_70;
      lVar13 = 0x7fffffffffffffff;
      FUN_1014784b8(0x7fffffffffffffff,1,FUN_101478d5c,&puStack_a0,puVar7,puVar9);
      uStack_b8 = 0;
      lVar18 = *(long *)(lVar13 + 0x10);
      if (lVar18 == 0) {
        func_0x000107c6142c(lVar13);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000100403514(0,lVar18,0);
        puVar14 = (undefined8 *)(lVar13 + 0x38);
        lStack_b0 = lVar13;
        do {
          puVar9 = puStack_70;
          ppuStack_90 = (undefined **)puVar14[-1];
          uVar3 = *puVar14;
          lStack_98 = puVar14[-2];
          puStack_a0 = (undefined *)puVar14[-3];
          uVar8 = uVar3;
          uStack_88 = uVar3;
          func_0x000107c61434(uVar3);
          func_0x000107c5eb88(puVar16);
          FUN_101478db0();
          puVar7 = puVar16;
          puVar10 = PTR___sSsN_11034e1d8;
          func_0x000107c601f0(puVar16,PTR___sSsN_11034e1d8,uVar8);
          (*pcStack_a8)(puVar16,lVar6);
          func_0x000107c6142c(uVar3);
          uVar15 = *(ulong *)(puVar9 + 0x10);
          puStack_70 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar15) {
            func_0x000100403514(1 < *(ulong *)(puVar9 + 0x18),uVar15 + 1,1);
          }
          puVar9 = puStack_70;
          puVar14 = puVar14 + 4;
          *(ulong *)(puStack_70 + 0x10) = uVar15 + 1;
          *(undefined1 **)(puStack_70 + uVar15 * 0x10 + 0x20) = puVar7;
          *(undefined **)(puStack_70 + uVar15 * 0x10 + 0x28) = puVar10;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        func_0x000107c6142c(lStack_b0);
      }
      uVar15 = 0;
      uVar17 = *(ulong *)(puVar9 + 0x10);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        puVar12 = (ulong *)(puVar9 + uVar15 * 0x10 + 0x28);
        do {
          if (uVar17 == uVar15) {
            func_0x000107c6142c(puVar9);
            if (*(long *)(puVar10 + 0x10) != 0) {
              puVar9 = puVar10;
              func_0x000100403a6c(puVar10);
              func_0x000107c61574(puVar10);
              return puVar9;
            }
            func_0x000107c61574(puVar10);
            puVar9 = (undefined *)0x112d38280;
            func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
            goto LAB_101478d1c;
          }
          if (*(ulong *)(puVar9 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101478d5c);
            (*pcVar5)();
          }
          uVar1 = puVar12[-1];
          uVar4 = *puVar12;
          puVar12 = puVar12 + 2;
          uVar15 = uVar15 + 1;
          uVar2 = uVar1 & 0xffffffffffff;
          if ((uVar4 & 0x2000000000000000) != 0) {
            uVar2 = uVar4 >> 0x38 & 0xf;
          }
        } while (uVar2 == 0);
        func_0x000107c61434(uVar4);
        puVar11 = puVar10;
        func_0x000107c61558();
        puStack_a0 = puVar10;
        if (((ulong)puVar11 & 1) == 0) {
          func_0x000100403514(0,*(long *)(puVar10 + 0x10) + 1,1);
        }
        uVar2 = *(ulong *)(puStack_a0 + 0x10);
        if (*(ulong *)(puStack_a0 + 0x18) >> 1 <= uVar2) {
          func_0x000100403514(1 < *(ulong *)(puStack_a0 + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(puStack_a0 + 0x10) = uVar2 + 1;
        *(ulong *)(puStack_a0 + uVar2 * 0x10 + 0x20) = uVar1;
        *(ulong *)(puStack_a0 + uVar2 * 0x10 + 0x28) = uVar4;
        puVar10 = puStack_a0;
      } while( true );
    }
    func_0x000107c6142c(puVar9);
    puVar9 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
LAB_101478d1c:
    func_0x000107c61538();
    puVar10 = puVar9;
    func_0x000100111634();
    func_0x000100bcb1dc(puVar9 + 0x20);
  }
  return puVar10;
}



/* Entry: 101478d5c; end: 101478daf;  */

uint FUN_101478d5c(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 101478db0; end: 101478def;  */

void FUN_101478db0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da17b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSsSysMc_11034e1e8;
  func_0x000107c61520(PTR___sSsSysMc_11034e1e8,PTR___sSsN_11034e1d8);
  puRam0000000112da17b8 = puVar1;
  return;
}



/* Entry: 101478df0; end: 101478df7;  */

void FUN_101478df0(long param_1,long param_2)

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



/* Entry: 101478df8; end: 101479133;  */

long FUN_101478df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined2 *)(unaff_x20 + 0xc0) = 1;
  *(undefined1 *)(unaff_x20 + 0xc2) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined2 *)(unaff_x20 + 0xd0) = 1;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined1 *)(unaff_x20 + 0xf0) = 0;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0xf8) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x30) = param_7;
  *(undefined8 *)(unaff_x20 + 0x38) = param_8;
  *(undefined8 *)(unaff_x20 + 0x40) = param_9;
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  func_0x000101478448(param_10,unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x88) = param_11;
  *(undefined8 *)(unaff_x20 + 0x90) = param_12;
  *(undefined8 *)(unaff_x20 + 0x98) = param_13;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_14;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_15;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_16;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_16);
  uVar2 = param_7;
  func_0x000107c41b80(param_7);
  func_0x000107c61180();
  puVar1 = &UNK_1103c39b0;
  puVar3 = puVar1;
  func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,unaff_x20);
  pcStack_88 = FUN_101479250;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_100c1de60;
  puStack_90 = &UNK_1103c39c8;
  ppuVar4 = &puStack_a8;
  puStack_80 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_80;
  func_0x000107c6157c(unaff_x20);
  func_0x000107c61574(puVar3);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  uVar2 = param_7;
  func_0x000107c5e370(param_7);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,unaff_x20);
  func_0x000107c61574(unaff_x20);
  pcStack_88 = FUN_101479438;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_100c1de60;
  puStack_90 = &UNK_1103c39f0;
  ppuVar4 = &puStack_a8;
  puStack_80 = puVar1;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_80);
  uVar6 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar6);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61574(param_9);
  func_0x000107c61574(param_12);
  func_0x000107c61574(param_14);
  func_0x000107c61574(param_16);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x0001000834e4(param_10);
  return unaff_x20;
}



/* Entry: 101479134; end: 101479197;  */

long FUN_101479134(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (**(code **)(unaff_x20 + 0x38))(*(undefined8 *)(unaff_x20 + 0x40));
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    *(long *)(unaff_x20 + 0x48) = lVar1;
    func_0x000107c61434();
    func_0x000107c6142c(uVar3);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar1;
}



/* Entry: 101479198; end: 10147924f;  */

void FUN_101479198(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    *(undefined1 *)(param_3 + 0xf0) = 0;
    pcVar1 = *(code **)(param_3 + 0x98);
    uVar2 = *(undefined8 *)(param_3 + 0xa0);
    func_0x000107c6157c(uVar2);
    (*pcVar1)();
    func_0x000107c61574(uVar2);
    *(undefined8 *)(param_3 + 0xb8) = param_1;
    *(undefined1 *)(param_3 + 0xc0) = 0;
    if (*(char *)(param_3 + 0xc2) == '\x01') {
      FUN_101479258();
    }
    else if (*(char *)(param_3 + 0xc1) == '\x01') {
      FUN_101479440(*(undefined8 *)(param_3 + 0x50));
    }
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 101479250; end: 101479257;  */

void FUN_101479250(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0xf0) = 0;
    pcVar1 = *(code **)(lVar3 + 0x98);
    uVar2 = *(undefined8 *)(lVar3 + 0xa0);
    func_0x000107c6157c(uVar2);
    (*pcVar1)();
    func_0x000107c61574(uVar2);
    *(undefined8 *)(lVar3 + 0xb8) = param_1;
    *(undefined1 *)(lVar3 + 0xc0) = 0;
    if (*(char *)(lVar3 + 0xc2) == '\x01') {
      FUN_101479258();
    }
    else if (*(char *)(lVar3 + 0xc1) == '\x01') {
      FUN_101479440(*(undefined8 *)(lVar3 + 0x50));
    }
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 101479258; end: 10147934b;  */

/* WARNING: Possible PIC construction at 0x00010147a27c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010147a3b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010147a3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010147a434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010147a454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101479334: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010147a458) */
/* WARNING: Removing unreachable block (ram,0x00010147a438) */
/* WARNING: Removing unreachable block (ram,0x00010147a3d8) */
/* WARNING: Removing unreachable block (ram,0x00010147a3b8) */
/* WARNING: Removing unreachable block (ram,0x00010147a280) */
/* WARNING: Removing unreachable block (ram,0x000101479338) */

void FUN_101479258(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  if (((*(char *)(unaff_x20 + 0xc2) == '\x01') && ((*(byte *)(unaff_x20 + 0xf0) & 1) == 0)) &&
     ((**(code **)(unaff_x20 + 0x88))(*(undefined8 *)(unaff_x20 + 0x90)), (param_1 & 1) != 0)) {
    (**(code **)(unaff_x20 + 0xa8))();
    if ((param_1 & 1) == 0) {
      if ((*(byte *)(unaff_x20 + 0xd1) & 1) != 0) {
        return;
      }
      *(undefined1 *)(unaff_x20 + 0xd1) = 1;
      uVar7 = *(undefined8 *)(unaff_x20 + 0xd8);
      puVar6 = &UNK_1103c39b0;
      func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
      func_0x000107c61644(puVar6 + 0x10);
      puVar1 = &UNK_1103c3a28;
      func_0x000107c613fc(&UNK_1103c3a28,0x20,7);
      *(undefined **)(puVar1 + 0x10) = puVar6;
      *(undefined8 *)(puVar1 + 0x18) = uVar7;
      func_0x000107c6157c(puVar6);
      FUN_1014798d8(FUN_10147ab40,puVar1);
    }
    else {
      lVar2 = 0;
      func_0x000107c5f7fc(*(undefined8 *)(unaff_x20 + 0x58));
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
      puVar6 = *(undefined **)(unaff_x20 + 0xe8);
      if (puVar6 == (undefined *)0x0) {
        *(undefined8 *)(unaff_x20 + 0xe8) = 0;
        func_0x000107c61574(0);
        puVar6 = &UNK_1103c39b0;
        func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
        func_0x000107c61644(puVar6 + 0x10,unaff_x20);
        uStack_80 = 0x10147ab48;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1000f6b44;
        puStack_88 = &UNK_1103c3a40;
        ppuVar3 = &puStack_a0;
        puStack_78 = puVar6;
        func_0x000107c60bc4(ppuVar3);
        puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar7 = 0x112d4af88;
        FUN_10147ab50(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
        func_0x000107c6157c(puVar6);
        uVar4 = 0x112d4af90;
        func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
        uVar5 = 0x112d4af98;
        func_0x00010147ab90(0x112d4af98,0x112d4af90,&UNK_10d914100);
        func_0x000107c60264(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),&puStack_a8,
                            uVar4,uVar5,lVar2,uVar7);
        func_0x000107c5f850();
        func_0x000107c613fc();
        func_0x000107c5f844(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),ppuVar3);
      }
      else {
        func_0x000107c6157c(puVar6);
        func_0x000107c5f848();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar6);
    return;
  }
  return;
}



/* Entry: 10147934c; end: 101479367;  */

void FUN_10147934c(long param_1,long param_2)

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



/* Entry: 101479368; end: 101479437;  */

void FUN_101479368(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0xf0) = 1;
    *(undefined8 *)(param_2 + 0xb8) = 0;
    *(undefined1 *)(param_2 + 0xc0) = 1;
    lVar2 = *(long *)(param_2 + 0xe0);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      func_0x000107c6157c(lVar2);
      func_0x000107c5f848();
      func_0x000107c61574(lVar2);
      uVar1 = *(undefined8 *)(param_2 + 0xe0);
    }
    *(undefined8 *)(param_2 + 0xe0) = 0;
    func_0x000107c61574(uVar1);
    lVar2 = *(long *)(param_2 + 0xe8);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      func_0x000107c6157c(lVar2);
      func_0x000107c5f848();
      func_0x000107c61574(lVar2);
      uVar1 = *(undefined8 *)(param_2 + 0xe8);
    }
    *(undefined8 *)(param_2 + 0xe8) = 0;
    func_0x000107c61574(uVar1);
    *(long *)(param_2 + 0xd8) = *(long *)(param_2 + 0xd8) + 1;
    *(undefined1 *)(param_2 + 0xd1) = 0;
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101479438; end: 10147943f;  */

void FUN_101479438(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xf0) = 1;
    *(undefined8 *)(lVar1 + 0xb8) = 0;
    *(undefined1 *)(lVar1 + 0xc0) = 1;
    lVar3 = *(long *)(lVar1 + 0xe0);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      func_0x000107c6157c(lVar3);
      func_0x000107c5f848();
      func_0x000107c61574(lVar3);
      uVar2 = *(undefined8 *)(lVar1 + 0xe0);
    }
    *(undefined8 *)(lVar1 + 0xe0) = 0;
    func_0x000107c61574(uVar2);
    lVar3 = *(long *)(lVar1 + 0xe8);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      func_0x000107c6157c(lVar3);
      func_0x000107c5f848();
      func_0x000107c61574(lVar3);
      uVar2 = *(undefined8 *)(lVar1 + 0xe8);
    }
    *(undefined8 *)(lVar1 + 0xe8) = 0;
    func_0x000107c61574(uVar2);
    *(long *)(lVar1 + 0xd8) = *(long *)(lVar1 + 0xd8) + 1;
    *(undefined1 *)(lVar1 + 0xd1) = 0;
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101479440; end: 1014796c3;  */

void FUN_101479440(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(unaff_x20 + 0xe0);
  if (lVar10 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c6157c(lVar10);
    func_0x000107c5f848();
    func_0x000107c61574(lVar10);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
  }
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  func_0x000107c61574(uVar3);
  puVar4 = &UNK_1103c39b0;
  func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcStack_80 = FUN_10147ac68;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1103c3c70;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar3 = 0x112d4af88;
  FUN_10147ab50(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  func_0x000107c6157c(puVar4);
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = 0x112d4af98;
  func_0x00010147ab90(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar8,&puStack_a8,uVar6,uVar7,lVar2,uVar3);
  func_0x000107c5f850();
  func_0x000107c613fc();
  func_0x000107c5f844(puVar8,ppuVar5);
  puVar1 = puStack_78;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined1 **)(unaff_x20 + 0xe0) = puVar8;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(uVar3);
  pcVar9 = "scheduleIdleTerminationCheckAfter(_:)";
  func_0x0001000c10c0("scheduleIdleTerminationCheckAfter(_:)");
  func_0x000107c61180();
  pcStack_80 = (code *)0x10147ac70;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1103c3c98;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar8;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_78;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar4);
  func_0x000107c4e528(param_1,pcVar9);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar8);
  func_0x000107c615e8(pcVar9);
  return;
}



/* Entry: 1014796c4; end: 101479777;  */

void FUN_1014796c4(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  if (((*(char *)(unaff_x20 + 0xc1) == '\x01') && ((*(byte *)(unaff_x20 + 0xf0) & 1) == 0)) &&
     ((**(code **)(unaff_x20 + 0x88))(*(undefined8 *)(unaff_x20 + 0x90)), (param_1 & 1) != 0)) {
    (**(code **)(unaff_x20 + 0xa8))();
    if ((param_1 & 1) != 0) {
      uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
      lVar2 = 0;
      func_0x000107c5f7fc();
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
      puVar7 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      lVar10 = *(long *)(unaff_x20 + 0xe0);
      if (lVar10 == 0) {
        uVar3 = 0;
      }
      else {
        func_0x000107c6157c(lVar10);
        func_0x000107c5f848();
        func_0x000107c61574(lVar10);
        uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
      }
      *(undefined8 *)(unaff_x20 + 0xe0) = 0;
      func_0x000107c61574(uVar3);
      puVar9 = &UNK_1103c39b0;
      func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
      func_0x000107c61644(puVar9 + 0x10,unaff_x20);
      pcStack_80 = FUN_10147ac68;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_1103c3c70;
      ppuVar4 = &puStack_a0;
      puStack_78 = puVar9;
      func_0x000107c60bc4(ppuVar4);
      puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar3 = 0x112d4af88;
      FUN_10147ab50(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
      func_0x000107c6157c(puVar9);
      uVar5 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar6 = 0x112d4af98;
      func_0x00010147ab90(0x112d4af98,0x112d4af90,&UNK_10d914100);
      func_0x000107c60264(puVar7,&puStack_a8,uVar5,uVar6,lVar2,uVar3);
      func_0x000107c5f850();
      func_0x000107c613fc();
      func_0x000107c5f844(puVar7,ppuVar4);
      puVar1 = puStack_78;
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar1);
      uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
      *(undefined1 **)(unaff_x20 + 0xe0) = puVar7;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(uVar3);
      pcVar8 = "scheduleIdleTerminationCheckAfter(_:)";
      func_0x0001000c10c0("scheduleIdleTerminationCheckAfter(_:)");
      func_0x000107c61180();
      pcStack_80 = (code *)0x10147ac70;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_1103c3c98;
      ppuVar4 = &puStack_a0;
      puStack_78 = puVar7;
      func_0x000107c60bc4(ppuVar4);
      puVar9 = puStack_78;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar9);
      func_0x000107c4e528(uVar11,pcVar8);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(puVar7);
      func_0x000107c615e8(pcVar8);
      return;
    }
    puVar9 = &UNK_1103c39b0;
    func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
    func_0x000107c61644(puVar9 + 0x10);
    func_0x000107c6157c(puVar9);
    FUN_1014798d8(FUN_10147ac48,puVar9);
    func_0x000107c61578(puVar9,2);
  }
  return;
}



/* Entry: 101479778; end: 1014798d7;  */

void FUN_101479778(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((param_1 & 1) == 0) {
      FUN_101479440(*(undefined8 *)(param_2 + 0x58));
    }
    else if ((*(byte *)(param_2 + 0xf0) & 1) == 0) {
      pcVar6 = *(code **)(param_2 + 0x88);
      uVar1 = *(ulong *)(param_2 + 0x90);
      uVar2 = uVar1;
      func_0x000107c6157c();
      (*pcVar6)();
      func_0x000107c61574(uVar1);
      if ((uVar2 & 1) != 0) {
        pcVar6 = *(code **)(param_2 + 0xa8);
        uVar1 = *(ulong *)(param_2 + 0xb0);
        uVar2 = uVar1;
        func_0x000107c6157c();
        (*pcVar6)();
        func_0x000107c61574(uVar1);
        if ((uVar2 & 1) == 0) {
          *(undefined1 *)(param_2 + 0xc1) = 0;
          uVar4 = *(undefined8 *)(param_2 + 0x78);
          lVar5 = *(long *)(param_2 + 0x80);
          func_0x0001000a8868(param_2 + 0x60,uVar4);
          puVar3 = &UNK_1103c39b0;
          func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
          func_0x000107c61644(puVar3 + 0x10,param_2);
          pcVar6 = *(code **)(lVar5 + 0x10);
          func_0x000107c6157c(puVar3);
          (*pcVar6)(0,FUN_10147ac50,puVar3,uVar4,lVar5);
          func_0x000107c61574(param_2);
          func_0x000107c61574(puVar3);
        }
        else {
          FUN_101479440(*(undefined8 *)(param_2 + 0x58));
        }
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1014798d8; end: 101479e67;  */

void FUN_1014798d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long lVar16;
  long unaff_x20;
  long lVar17;
  code *pcVar18;
  long lVar19;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar4 = 0;
  func_0x000107c5f83c();
  lStack_b8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar15 = (long)&uStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = lVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar15 - extraout_x12;
  lVar5 = 0;
  lStack_c0 = lVar15;
  func_0x000107c5f7fc();
  lStack_d8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_d0 = lVar15;
  func_0x000107c5ffd8();
  lVar17 = *(long *)(lVar5 + -8);
  lStack_e0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar16 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar19 = lVar16 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(unaff_x20 + 0x20))();
  if (lVar6 == 0) {
    pcVar12 = "checkNoCriticalJobsRunning(completion:)";
    func_0x0001000c10c0("checkNoCriticalJobsRunning(completion:)");
    func_0x000107c61180();
    puVar13 = &UNK_1103c3ac8;
    func_0x000107c613fc(&UNK_1103c3ac8,0x20,7);
    *(undefined8 *)(puVar13 + 0x10) = param_1;
    *(undefined8 *)(puVar13 + 0x18) = param_2;
    pcStack_88 = (code *)0x10147acc8;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)&UNK_1000f6b44;
    puStack_90 = &UNK_1103c3ae0;
    ppuVar14 = &puStack_a8;
    puStack_80 = puVar13;
    func_0x000107c60bc4(ppuVar14);
    puVar13 = puStack_80;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar13);
    func_0x000107c4e524(pcVar12);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c615e8(pcVar12);
  }
  else {
    lStack_e8 = lVar6;
    FUN_101479134();
    uVar7 = 0;
    lStack_f0 = lVar6;
    func_0x0001000295c4();
    uStack_110 = uVar7;
    func_0x000107c5f80c(lVar19);
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar7 = 0x112d4ac68;
    FUN_10147ab50(0x112d4ac68,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918,
                  PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
    uVar8 = 0x112d4ac70;
    uStack_108 = param_1;
    uStack_100 = param_2;
    func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
    uVar9 = 0x112d4ac78;
    lStack_f8 = lVar4;
    func_0x00010147ab90(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
    func_0x000107c60264(lVar16,&puStack_a8,uVar8,uVar9,lVar5,uVar7);
    (**(code **)(lVar17 + 0x68))
              (lVar15,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
               ,lStack_e0);
    uVar10 = 0xd000000000000025;
    func_0x000107c5ffec(0xd000000000000025,0x800000010ef840f0,lVar19,lVar16,lVar15,0);
    puVar13 = &UNK_1103c3b18;
    func_0x000107c613fc(&UNK_1103c3b18,0x11,7);
    puVar13[0x10] = 0;
    puVar11 = &UNK_1103c3b40;
    func_0x000107c613fc(&UNK_1103c3b40,0x28,7);
    uVar3 = uStack_100;
    uVar2 = uStack_108;
    *(undefined **)(puVar11 + 0x10) = puVar13;
    *(undefined8 *)(puVar11 + 0x18) = uStack_108;
    *(undefined8 *)(puVar11 + 0x20) = uStack_100;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = FUN_10147abd4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)&UNK_1000f6b44;
    puStack_90 = &UNK_1103c3b58;
    ppuVar14 = &puStack_a8;
    puStack_80 = puVar11;
    func_0x000107c60bc4(ppuVar14);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar7 = 0x112d4af88;
    FUN_10147ab50(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    func_0x000107c6157c(puVar13);
    func_0x000107c6157c(uVar3);
    uVar8 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar9 = 0x112d4af98;
    func_0x00010147ab90(0x112d4af98,0x112d4af90,&UNK_10d914100);
    lVar5 = lStack_d0;
    func_0x000107c60264(lStack_d0,&puStack_b0,uVar8,uVar9,lStack_d8,uVar7);
    func_0x000107c5f850();
    func_0x000107c613fc();
    func_0x000107c5f844(lVar5,ppuVar14);
    func_0x000107c61574(puStack_80);
    lVar6 = lStack_c8;
    func_0x000107c5f830(lStack_c8);
    lVar15 = lStack_c0;
    func_0x000107c5f85c(lStack_c0,0x3ff0000000000000,lVar6);
    lVar4 = lStack_f8;
    pcVar18 = *(code **)(lStack_b8 + 8);
    (*pcVar18)(lVar6,lStack_f8);
    func_0x000107c5ffcc(lVar15,lVar5);
    (*pcVar18)(lVar15,lVar4);
    puVar11 = &UNK_1103c3b90;
    func_0x000107c613fc(&UNK_1103c3b90,0x38,7);
    *(undefined **)(puVar11 + 0x10) = puVar13;
    *(long *)(puVar11 + 0x18) = lVar5;
    *(long *)(puVar11 + 0x20) = lStack_f0;
    *(undefined8 *)(puVar11 + 0x28) = uVar2;
    *(undefined8 *)(puVar11 + 0x30) = uVar3;
    pcStack_88 = (code *)0x10147abe0;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_10147aa2c;
    puStack_90 = &UNK_1103c3ba8;
    ppuVar14 = &puStack_a8;
    puStack_80 = puVar11;
    func_0x000107c60bc4(ppuVar14);
    puVar11 = puStack_80;
    func_0x000107c6157c(puVar13);
    func_0x000107c6157c(uVar3);
    func_0x000107c6157c(lVar5);
    func_0x000107c61574(puVar11);
    lVar4 = lStack_e8;
    func_0x000107c509ac(lStack_e8);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar10);
    func_0x000107c61574(puVar13);
    func_0x000107c61574(lVar5);
  }
  return;
}



/* Entry: 101479e68; end: 101479f83;  */

/* WARNING: Possible PIC construction at 0x0001014794bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014795f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101479614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101479674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101479694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010147a27c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010147a3b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010147a3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010147a434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010147a454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101479334: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010147a458) */
/* WARNING: Removing unreachable block (ram,0x00010147a438) */
/* WARNING: Removing unreachable block (ram,0x00010147a3d8) */
/* WARNING: Removing unreachable block (ram,0x00010147a3b8) */
/* WARNING: Removing unreachable block (ram,0x00010147a280) */
/* WARNING: Removing unreachable block (ram,0x000101479698) */
/* WARNING: Removing unreachable block (ram,0x000101479678) */
/* WARNING: Removing unreachable block (ram,0x000101479618) */
/* WARNING: Removing unreachable block (ram,0x0001014795f8) */
/* WARNING: Removing unreachable block (ram,0x0001014794c0) */
/* WARNING: Removing unreachable block (ram,0x000101479338) */

void FUN_101479e68(double param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  double dVar10;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  *(ulong *)(unaff_x20 + 200) = param_2;
  *(undefined1 *)(unaff_x20 + 0xd0) = 0;
  FUN_101479f84();
  uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
  lVar1 = *(long *)(unaff_x20 + 0x80);
  func_0x0001000a8868(unaff_x20 + 0x60,uVar9);
  uVar2 = param_2;
  (**(code **)(lVar1 + 8))(param_2,uVar9,lVar1);
  if (param_2 == 2) {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
    lVar1 = *(long *)(unaff_x20 + 0x80);
    func_0x0001000a8868(unaff_x20 + 0x60,uVar9);
    puVar3 = &UNK_1103c39b0;
    func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcVar7 = *(code **)(lVar1 + 0x10);
    func_0x000107c6157c(puVar3);
    (*pcVar7)(2,0x10147acd0,puVar3,uVar9,lVar1);
    func_0x000107c61578(puVar3,2);
    return;
  }
  if (param_2 != 1) {
    if ((*(byte *)(unaff_x20 + 0xc2) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + 0xc1) = 1;
      (**(code **)(unaff_x20 + 0x88))();
      if ((uVar2 & 1) != 0) {
        if (*(char *)(unaff_x20 + 0xc0) == '\x01') {
          param_1 = *(double *)(unaff_x20 + 0x50);
        }
        else {
          dVar10 = *(double *)(unaff_x20 + 0xb8);
          (**(code **)(unaff_x20 + 0x98))();
          param_1 = param_1 - dVar10;
          if (param_1 < *(double *)(unaff_x20 + 0x50)) {
            param_1 = *(double *)(unaff_x20 + 0x50) - param_1;
          }
          else {
            if (((*(char *)(unaff_x20 + 0xc1) != '\x01') || ((*(byte *)(unaff_x20 + 0xf0) & 1) != 0)
                ) || ((**(code **)(unaff_x20 + 0x88))(*(undefined8 *)(unaff_x20 + 0x90)),
                     (uVar2 & 1) == 0)) {
              return;
            }
            (**(code **)(unaff_x20 + 0xa8))();
            if ((uVar2 & 1) == 0) {
              puVar3 = &UNK_1103c39b0;
              func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
              func_0x000107c61644(puVar3 + 0x10,unaff_x20);
              func_0x000107c6157c(puVar3);
              FUN_1014798d8(FUN_10147ac48,puVar3);
              func_0x000107c61578(puVar3,2);
              return;
            }
            param_1 = *(double *)(unaff_x20 + 0x58);
          }
        }
        lVar1 = 0;
        func_0x000107c5f7fc(param_1);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
        puVar8 = *(undefined **)(unaff_x20 + 0xe0);
        if (puVar8 == (undefined *)0x0) {
          *(undefined8 *)(unaff_x20 + 0xe0) = 0;
          func_0x000107c61574(0);
          puVar8 = &UNK_1103c39b0;
          func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
          func_0x000107c61644(puVar8 + 0x10,unaff_x20);
          pcStack_80 = FUN_10147ac68;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          puStack_90 = &UNK_1000f6b44;
          puStack_88 = &UNK_1103c3c70;
          ppuVar4 = &puStack_a0;
          puStack_78 = puVar8;
          func_0x000107c60bc4(ppuVar4);
          puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          uVar9 = 0x112d4af88;
          FUN_10147ab50(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
          func_0x000107c6157c(puVar8);
          uVar5 = 0x112d4af90;
          func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
          uVar6 = 0x112d4af98;
          func_0x00010147ab90(0x112d4af98,0x112d4af90,&UNK_10d914100);
          func_0x000107c60264(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),&puStack_a8,
                              uVar5,uVar6,lVar1,uVar9);
          func_0x000107c5f850();
          func_0x000107c613fc();
          func_0x000107c5f844(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),ppuVar4);
        }
        else {
          func_0x000107c6157c(puVar8);
          func_0x000107c5f848();
        }
        goto code_r0x000107c61574;
      }
    }
    return;
  }
  *(undefined1 *)(unaff_x20 + 0xc2) = 1;
  (**(code **)(unaff_x20 + 0x88))();
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (((*(char *)(unaff_x20 + 0xc2) != '\x01') || ((*(byte *)(unaff_x20 + 0xf0) & 1) != 0)) ||
     ((**(code **)(unaff_x20 + 0x88))(*(undefined8 *)(unaff_x20 + 0x90)), (uVar2 & 1) == 0)) {
    return;
  }
  (**(code **)(unaff_x20 + 0xa8))();
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(unaff_x20 + 0xd1) & 1) != 0) {
      return;
    }
    *(undefined1 *)(unaff_x20 + 0xd1) = 1;
    uVar9 = *(undefined8 *)(unaff_x20 + 0xd8);
    puVar8 = &UNK_1103c39b0;
    func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
    func_0x000107c61644(puVar8 + 0x10,unaff_x20);
    puVar3 = &UNK_1103c3a28;
    func_0x000107c613fc(&UNK_1103c3a28,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar8;
    *(undefined8 *)(puVar3 + 0x18) = uVar9;
    func_0x000107c6157c(puVar8);
    FUN_1014798d8(FUN_10147ab40,puVar3);
  }
  else {
    lVar1 = 0;
    func_0x000107c5f7fc(*(undefined8 *)(unaff_x20 + 0x58));
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
    puVar8 = *(undefined **)(unaff_x20 + 0xe8);
    if (puVar8 == (undefined *)0x0) {
      *(undefined8 *)(unaff_x20 + 0xe8) = 0;
      func_0x000107c61574(0);
      puVar8 = &UNK_1103c39b0;
      func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
      func_0x000107c61644(puVar8 + 0x10,unaff_x20);
      pcStack_80 = (code *)0x10147ab48;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_1103c3a40;
      ppuVar4 = &puStack_a0;
      puStack_78 = puVar8;
      func_0x000107c60bc4(ppuVar4);
      puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar9 = 0x112d4af88;
      FUN_10147ab50(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
      func_0x000107c6157c(puVar8);
      uVar5 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar6 = 0x112d4af98;
      func_0x00010147ab90(0x112d4af98,0x112d4af90,&UNK_10d914100);
      func_0x000107c60264(auStack_b0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&puStack_a8,
                          uVar5,uVar6,lVar1,uVar9);
      func_0x000107c5f850();
      func_0x000107c613fc();
      func_0x000107c5f844(auStack_b0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),ppuVar4);
    }
    else {
      func_0x000107c6157c(puVar8);
      func_0x000107c5f848();
    }
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar8);
  return;
}



/* Entry: 101479f84; end: 10147a053;  */

/* WARNING: Possible PIC construction at 0x000101479fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010147a018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101479fe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010147a01c) */
/* WARNING: Removing unreachable block (ram,0x000101479fc4) */
/* WARNING: Removing unreachable block (ram,0x000101479fec) */

void FUN_101479f84(long param_1)

{
  long unaff_x20;
  long lVar1;
  
  if (param_1 == 1) {
    *(undefined1 *)(unaff_x20 + 0xc1) = 0;
    lVar1 = *(long *)(unaff_x20 + 0xe0);
    if (lVar1 == 0) {
      lVar1 = 0;
      *(undefined8 *)(unaff_x20 + 0xe0) = 0;
    }
    else {
      func_0x000107c6157c(lVar1);
      func_0x000107c5f848();
    }
  }
  else {
    if (param_1 != 2) {
      return;
    }
    *(undefined2 *)(unaff_x20 + 0xc1) = 0;
    lVar1 = *(long *)(unaff_x20 + 0xe0);
    if (lVar1 == 0) {
      *(undefined8 *)(unaff_x20 + 0xe0) = 0;
      func_0x000107c61574(0);
      lVar1 = *(long *)(unaff_x20 + 0xe8);
      if (lVar1 == 0) {
        *(undefined8 *)(unaff_x20 + 0xe8) = 0;
        func_0x000107c61574(0);
        *(undefined1 *)(unaff_x20 + 0xd1) = 0;
        return;
      }
      func_0x000107c6157c(lVar1);
      func_0x000107c5f848();
    }
    else {
      func_0x000107c6157c(lVar1);
      func_0x000107c5f848();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar1);
  return;
}



/* Entry: 10147a054; end: 10147a0e7;  */

void FUN_10147a054(double param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  long unaff_x20;
  double dVar11;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  if ((*(byte *)(unaff_x20 + 0xc2) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0xc1) = 1;
    (**(code **)(unaff_x20 + 0x88))();
    if ((param_2 & 1) != 0) {
      if (*(char *)(unaff_x20 + 0xc0) == '\x01') {
        param_1 = *(double *)(unaff_x20 + 0x50);
      }
      else {
        dVar11 = *(double *)(unaff_x20 + 0xb8);
        (**(code **)(unaff_x20 + 0x98))();
        param_1 = param_1 - dVar11;
        if (*(double *)(unaff_x20 + 0x50) <= param_1) {
          if (((*(char *)(unaff_x20 + 0xc1) == '\x01') && ((*(byte *)(unaff_x20 + 0xf0) & 1) == 0))
             && ((**(code **)(unaff_x20 + 0x88))(*(undefined8 *)(unaff_x20 + 0x90)),
                (param_2 & 1) != 0)) {
            (**(code **)(unaff_x20 + 0xa8))();
            if ((param_2 & 1) != 0) {
              param_1 = *(double *)(unaff_x20 + 0x58);
              goto FUN_101479440;
            }
            puVar9 = &UNK_1103c39b0;
            func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
            func_0x000107c61644(puVar9 + 0x10,unaff_x20);
            func_0x000107c6157c(puVar9);
            FUN_1014798d8(FUN_10147ac48,puVar9);
            func_0x000107c61578(puVar9,2);
          }
          return;
        }
        param_1 = *(double *)(unaff_x20 + 0x50) - param_1;
      }
FUN_101479440:
      lVar2 = 0;
      func_0x000107c5f7fc();
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
      puVar7 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      lVar10 = *(long *)(unaff_x20 + 0xe0);
      if (lVar10 == 0) {
        uVar3 = 0;
      }
      else {
        func_0x000107c6157c(lVar10);
        func_0x000107c5f848();
        func_0x000107c61574(lVar10);
        uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
      }
      *(undefined8 *)(unaff_x20 + 0xe0) = 0;
      func_0x000107c61574(uVar3);
      puVar9 = &UNK_1103c39b0;
      func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
      func_0x000107c61644(puVar9 + 0x10,unaff_x20);
      pcStack_80 = FUN_10147ac68;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_1103c3c70;
      ppuVar4 = &puStack_a0;
      puStack_78 = puVar9;
      func_0x000107c60bc4(ppuVar4);
      puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar3 = 0x112d4af88;
      FUN_10147ab50(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
      func_0x000107c6157c(puVar9);
      uVar5 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar6 = 0x112d4af98;
      func_0x00010147ab90(0x112d4af98,0x112d4af90,&UNK_10d914100);
      func_0x000107c60264(puVar7,&puStack_a8,uVar5,uVar6,lVar2,uVar3);
      func_0x000107c5f850();
      func_0x000107c613fc();
      func_0x000107c5f844(puVar7,ppuVar4);
      puVar1 = puStack_78;
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar1);
      uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
      *(undefined1 **)(unaff_x20 + 0xe0) = puVar7;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(uVar3);
      pcVar8 = "scheduleIdleTerminationCheckAfter(_:)";
      func_0x0001000c10c0("scheduleIdleTerminationCheckAfter(_:)");
      func_0x000107c61180();
      pcStack_80 = (code *)0x10147ac70;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_1103c3c98;
      ppuVar4 = &puStack_a0;
      puStack_78 = puVar7;
      func_0x000107c60bc4(ppuVar4);
      puVar9 = puStack_78;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar9);
      func_0x000107c4e528(param_1,pcVar8);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(puVar7);
      func_0x000107c615e8(pcVar8);
      return;
    }
  }
  return;
}



/* Entry: 10147a0e8; end: 10147a117; -[_TtC38SCAppTerminationServicesImplementation21GracefulAppTerminator requestAppTerminationWithImmediacy:] */

void FUN_10147a0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_101479e68(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10147a118; end: 10147a1ff;  */

void FUN_10147a118(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  uVar1 = param_1 + 0x10;
  func_0x000107c61648();
  if (uVar1 != 0) {
    if (((*(char *)(uVar1 + 0xc1) == '\x01') && ((*(byte *)(uVar1 + 0xf0) & 1) == 0)) &&
       (uVar2 = uVar1, (**(code **)(uVar1 + 0x88))(), (uVar2 & 1) != 0)) {
      uVar2 = uVar1;
      (**(code **)(uVar1 + 0xa8))();
      if ((uVar2 & 1) == 0) {
        puVar3 = &UNK_1103c39b0;
        func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,uVar1);
        func_0x000107c6157c(puVar3);
        FUN_1014798d8(0x10147accc,puVar3);
        func_0x000107c61578(puVar3,2);
      }
      else {
        FUN_101479440(*(undefined8 *)(uVar1 + 0x58));
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10147a200; end: 10147a483;  */

void FUN_10147a200(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(unaff_x20 + 0xe8);
  if (lVar10 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c6157c(lVar10);
    func_0x000107c5f848();
    func_0x000107c61574(lVar10);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xe8);
  }
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  func_0x000107c61574(uVar3);
  puVar4 = &UNK_1103c39b0;
  func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  uStack_80 = 0x10147ab48;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1103c3a40;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar3 = 0x112d4af88;
  FUN_10147ab50(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  func_0x000107c6157c(puVar4);
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = 0x112d4af98;
  func_0x00010147ab90(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar8,&puStack_a8,uVar6,uVar7,lVar2,uVar3);
  func_0x000107c5f850();
  func_0x000107c613fc();
  func_0x000107c5f844(puVar8,ppuVar5);
  puVar1 = puStack_78;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe8);
  *(undefined1 **)(unaff_x20 + 0xe8) = puVar8;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(uVar3);
  pcVar9 = "scheduleBackgroundTerminationCheckAfter(_:)";
  func_0x0001000c10c0("scheduleBackgroundTerminationCheckAfter(_:)");
  func_0x000107c61180();
  uStack_80 = 0x10147acd8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1103c3a68;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar8;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_78;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar4);
  func_0x000107c4e528(param_1,pcVar9);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar8);
  func_0x000107c615e8(pcVar9);
  return;
}



/* Entry: 10147a484; end: 10147a5f7;  */

void FUN_10147a484(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_3 == *(long *)(param_2 + 0xd8)) {
      *(undefined1 *)(param_2 + 0xd1) = 0;
      if ((param_1 & 1) == 0) {
        FUN_10147a200(*(undefined8 *)(param_2 + 0x58));
      }
      else if ((*(byte *)(param_2 + 0xf0) & 1) == 0) {
        pcVar6 = *(code **)(param_2 + 0x88);
        uVar1 = *(ulong *)(param_2 + 0x90);
        uVar2 = uVar1;
        func_0x000107c6157c();
        (*pcVar6)();
        func_0x000107c61574(uVar1);
        if ((uVar2 & 1) != 0) {
          pcVar6 = *(code **)(param_2 + 0xa8);
          uVar1 = *(ulong *)(param_2 + 0xb0);
          uVar2 = uVar1;
          func_0x000107c6157c();
          (*pcVar6)();
          func_0x000107c61574(uVar1);
          if ((uVar2 & 1) == 0) {
            *(undefined1 *)(param_2 + 0xc2) = 0;
            uVar4 = *(undefined8 *)(param_2 + 0x78);
            lVar5 = *(long *)(param_2 + 0x80);
            func_0x0001000a8868(param_2 + 0x60,uVar4);
            puVar3 = &UNK_1103c39b0;
            func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
            func_0x000107c61644(puVar3 + 0x10,param_2);
            pcVar6 = *(code **)(lVar5 + 0x10);
            func_0x000107c6157c(puVar3);
            (*pcVar6)(1,0x10147acd4,puVar3,uVar4,lVar5);
            func_0x000107c61574(param_2);
            func_0x000107c61574(puVar3);
          }
          else {
            FUN_10147a200(*(undefined8 *)(param_2 + 0x58));
          }
        }
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10147a5f8; end: 10147a8df;  */

void FUN_10147a5f8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar3 = param_1 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 200) = 0;
    *(undefined1 *)(lVar3 + 0xd0) = 1;
    func_0x000107c61574();
  }
  func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    pcVar1 = *(code **)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574();
    (*pcVar1)();
    func_0x000107c61574(uVar2);
    if (param_1 != 0) {
      func_0x000107c437f0(param_1);
      func_0x000107c615e8(param_1);
    }
  }
  return;
}



/* Entry: 10147a8e0; end: 10147aa2b;  */

void FUN_10147a8e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  ppuVar3 = &puStack_b0;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_80,1,0);
    *(undefined1 *)(param_2 + 0x10) = 1;
    func_0x000107c5f848();
    func_0x000107c61434(param_1);
    FUN_101157854(param_4,param_1);
    pcVar1 = "checkNoCriticalJobsRunning(completion:)";
    func_0x0001000c10c0("checkNoCriticalJobsRunning(completion:)");
    func_0x000107c61180();
    puVar2 = &UNK_1103c3be0;
    func_0x000107c613fc(&UNK_1103c3be0,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = param_5;
    *(undefined8 *)(puVar2 + 0x18) = param_6;
    *(undefined8 *)(puVar2 + 0x20) = param_4;
    pcStack_90 = FUN_10147abf0;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_1103c3bf8;
    puStack_88 = puVar2;
    func_0x000107c60bc4(&puStack_b0);
    puVar2 = puStack_88;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 10147aa2c; end: 10147aa8b;  */

void FUN_10147aa2c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5fe10(param_2,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10147aa8c; end: 10147ab3f;  */

void FUN_10147aa8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x0001000834e4(unaff_x20 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  return;
}



/* Entry: 10147ab40; end: 10147ab4f;  */

void FUN_10147ab40(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if (lVar6 == *(long *)(lVar2 + 0xd8)) {
      *(undefined1 *)(lVar2 + 0xd1) = 0;
      if ((param_1 & 1) == 0) {
        FUN_10147a200(*(undefined8 *)(lVar2 + 0x58));
      }
      else if ((*(byte *)(lVar2 + 0xf0) & 1) == 0) {
        pcVar7 = *(code **)(lVar2 + 0x88);
        uVar1 = *(ulong *)(lVar2 + 0x90);
        uVar3 = uVar1;
        func_0x000107c6157c();
        (*pcVar7)();
        func_0x000107c61574(uVar1);
        if ((uVar3 & 1) != 0) {
          pcVar7 = *(code **)(lVar2 + 0xa8);
          uVar1 = *(ulong *)(lVar2 + 0xb0);
          uVar3 = uVar1;
          func_0x000107c6157c();
          (*pcVar7)();
          func_0x000107c61574(uVar1);
          if ((uVar3 & 1) == 0) {
            *(undefined1 *)(lVar2 + 0xc2) = 0;
            uVar5 = *(undefined8 *)(lVar2 + 0x78);
            lVar6 = *(long *)(lVar2 + 0x80);
            func_0x0001000a8868(lVar2 + 0x60,uVar5);
            puVar4 = &UNK_1103c39b0;
            func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
            func_0x000107c61644(puVar4 + 0x10,lVar2);
            pcVar7 = *(code **)(lVar6 + 0x10);
            func_0x000107c6157c(puVar4);
            (*pcVar7)(1,0x10147acd4,puVar4,uVar5,lVar6);
            func_0x000107c61574(lVar2);
            func_0x000107c61574(puVar4);
          }
          else {
            FUN_10147a200(*(undefined8 *)(lVar2 + 0x58));
          }
        }
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10147ab50; end: 10147abd3;  */

void FUN_10147ab50(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10147abd4; end: 10147abef;  */

void FUN_10147abd4(void)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar5 = &puStack_90;
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_60,1,0);
    *(undefined1 *)(lVar1 + 0x10) = 1;
    pcVar3 = "checkNoCriticalJobsRunning(completion:)";
    func_0x0001000c10c0("checkNoCriticalJobsRunning(completion:)");
    func_0x000107c61180();
    puVar4 = &UNK_1103c3c30;
    func_0x000107c613fc(&UNK_1103c3c30,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar2;
    *(undefined8 *)(puVar4 + 0x18) = uVar6;
    uStack_70 = 0x10147ac24;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1103c3c48;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    puVar4 = puStack_68;
    func_0x000107c6157c(uVar6);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar3);
  }
  return;
}



/* Entry: 10147abf0; end: 10147ac47;  */

void FUN_10147abf0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(long *)(*(long *)(unaff_x20 + 0x20) + 0x10) == 0);
  return;
}



/* Entry: 10147ac48; end: 10147ac4f;  */

void FUN_10147ac48(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if ((param_1 & 1) == 0) {
      FUN_101479440(*(undefined8 *)(lVar2 + 0x58));
    }
    else if ((*(byte *)(lVar2 + 0xf0) & 1) == 0) {
      pcVar7 = *(code **)(lVar2 + 0x88);
      uVar1 = *(ulong *)(lVar2 + 0x90);
      uVar3 = uVar1;
      func_0x000107c6157c();
      (*pcVar7)();
      func_0x000107c61574(uVar1);
      if ((uVar3 & 1) != 0) {
        pcVar7 = *(code **)(lVar2 + 0xa8);
        uVar1 = *(ulong *)(lVar2 + 0xb0);
        uVar3 = uVar1;
        func_0x000107c6157c();
        (*pcVar7)();
        func_0x000107c61574(uVar1);
        if ((uVar3 & 1) == 0) {
          *(undefined1 *)(lVar2 + 0xc1) = 0;
          uVar5 = *(undefined8 *)(lVar2 + 0x78);
          lVar6 = *(long *)(lVar2 + 0x80);
          func_0x0001000a8868(lVar2 + 0x60,uVar5);
          puVar4 = &UNK_1103c39b0;
          func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
          func_0x000107c61644(puVar4 + 0x10,lVar2);
          pcVar7 = *(code **)(lVar6 + 0x10);
          func_0x000107c6157c(puVar4);
          (*pcVar7)(0,FUN_10147ac50,puVar4,uVar5,lVar6);
          func_0x000107c61574(lVar2);
          func_0x000107c61574(puVar4);
        }
        else {
          FUN_101479440(*(undefined8 *)(lVar2 + 0x58));
        }
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10147ac50; end: 10147ac67;  */

void FUN_10147ac50(void)

{
  FUN_10147a5f8();
  return;
}



/* Entry: 10147ac68; end: 10147acdf;  */

void FUN_10147ac68(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  uVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (uVar1 != 0) {
    if (((*(char *)(uVar1 + 0xc1) == '\x01') && ((*(byte *)(uVar1 + 0xf0) & 1) == 0)) &&
       (uVar2 = uVar1, (**(code **)(uVar1 + 0x88))(), (uVar2 & 1) != 0)) {
      uVar2 = uVar1;
      (**(code **)(uVar1 + 0xa8))();
      if ((uVar2 & 1) == 0) {
        puVar3 = &UNK_1103c39b0;
        func_0x000107c613fc(&UNK_1103c39b0,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,uVar1);
        func_0x000107c6157c(puVar3);
        FUN_1014798d8(0x10147accc,puVar3);
        func_0x000107c61578(puVar3,2);
      }
      else {
        FUN_101479440(*(undefined8 *)(uVar1 + 0x58));
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10147ace0; end: 10147ae03;  */

void FUN_10147ace0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  if ((*(byte *)(unaff_x20 + 0x28) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x28) = 1;
    func_0x000107c41b80();
    func_0x000107c61180();
    puVar1 = &UNK_1103c3cd0;
    func_0x000107c613fc(&UNK_1103c3cd0,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    puVar2 = &UNK_1103c3cf8;
    func_0x000107c613fc(&UNK_1103c3cf8,0x20,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    pcStack_50 = FUN_10147aeec;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_100c1de60;
    puStack_58 = &UNK_1103c3d10;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar1);
    uVar4 = param_1;
    func_0x000107c5c320(param_1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x000107c3e924(uVar4);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 10147ae04; end: 10147ae9f;  */

void FUN_10147ae04(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    if ((0 < lVar1) && ((**(code **)(param_2 + 0x18))(), lVar1 <= param_2)) {
      func_0x000100083b20(&uStack_50);
      func_0x000107c50320(uStack_50);
      func_0x000107c615e8(uStack_50);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10147aea0; end: 10147aeeb;  */

void FUN_10147aea0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10147aeec; end: 10147af0f;  */

void FUN_10147aeec(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if ((0 < lVar2) && ((**(code **)(lVar1 + 0x18))(), lVar2 <= lVar1)) {
      func_0x000100083b20(&uStack_50);
      func_0x000107c50320(uStack_50);
      func_0x000107c615e8(uStack_50);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10147af10; end: 10147b107;  */

void FUN_10147af10(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ac48();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c5fc54(puVar3,lVar1);
  func_0x000107c61170(puVar3);
  if (*(long *)(puVar2 + 0x10) != 0) {
    (**(code **)(lVar7 + 0x10))
              (lVar4,puVar2 + ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff)),lVar1);
    func_0x000107c6142c(puVar2);
    (**(code **)(lVar7 + 0x20))(lVar4 - extraout_x12_00,lVar4,lVar1);
    func_0x000107c5ed98(puVar6,0x6964656d61726150,0xe900000000000063,1);
    func_0x000107c5ed9c(param_1,0xd00000000000001d,0x800000010ef84150);
    pcVar5 = *(code **)(lVar7 + 8);
    (*pcVar5)(puVar6,lVar1);
    (*pcVar5)(lVar4 - extraout_x12_00,lVar1);
    (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar1);
    return;
  }
  func_0x000107c6142c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010147b104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x38))(param_1,1,1,lVar1);
  return;
}



/* Entry: 10147b108; end: 10147b15b;  */

undefined8 FUN_10147b108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10147b15c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10147b15c; end: 10147b343;  */

void FUN_10147b15c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  uStack_80 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_3;
  func_0x000107c5ffd8();
  lStack_90 = *(long *)(lVar2 + -8);
  lStack_88 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  func_0x0001000295c4();
  uStack_98 = uVar4;
  func_0x000107c5f808(lVar3);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4ac68;
  FUN_10147cd90(0x112d4ac68,puVar1,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar5 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar6 = 0x112d4ac78;
  func_0x00010147cdd0(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar8,&puStack_68,uVar5,uVar6,lVar2,uVar4);
  (**(code **)(lStack_90 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_88);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5ffec(0xd00000000000001c,0x800000010ef84020,lVar3,lVar8,puVar7,0);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_70;
  return;
}



/* Entry: 10147b344; end: 10147c10b;  */

void FUN_10147b344(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  lVar1 = 0;
  uStack_78 = param_2;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar8 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar8 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eec4(lVar6);
  func_0x000107c5eeac();
  (**(code **)(lVar9 + 8))(lVar6,lVar2);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  *(long *)(unaff_x20 + 0x30) = lVar3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar7);
  func_0x000107c5eea0(lVar10);
  func_0x000107c5ee8c();
  pcVar12 = *(code **)(lVar11 + 8);
  (*pcVar12)(lVar10,lVar1);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar6 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      puVar4 = PTR_PTR_1126a7140;
      func_0x000107c610f8(PTR_PTR_1126a7140);
      func_0x000107c453e4();
      puVar5 = puVar4;
      func_0x000107c5ee88(puVar8,(param_1 * 1000.0) / 1000.0);
      func_0x000107c5ee70();
      func_0x000107c52190(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c54700(puVar4);
      func_0x000107c552e0(puVar4);
      func_0x000107c5fadc(lVar3,param_3);
      func_0x000107c59c64(puVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c4bf8c(lVar6);
      func_0x000107c6142c(param_3);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar2);
      (*pcVar12)(puVar8,lVar1);
      return;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 10147c10c; end: 10147c14b;  */

void FUN_10147c10c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1a28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d94510c;
  func_0x000107c61520(&UNK_10d94510c,&UNK_1103c3dc0);
  puRam0000000112da1a28 = puVar1;
  return;
}



/* Entry: 10147c14c; end: 10147c15f;  */

bool FUN_10147c14c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10147c160; end: 10147c20b;  */

void FUN_10147c160(void)

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



/* Entry: 10147c20c; end: 10147c27f;  */

undefined1  [16] FUN_10147c20c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar4 = 0x63616964656d6d69;
  uVar1 = 0xec00000077615279;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xd000000000000011;
    uVar1 = 0x800000010ef84170;
  }
  uVar2 = 0xed000064496e6f69;
  uVar3 = 0x74616e696d726574;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar3 = uVar4;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 10147c280; end: 10147c2a3;  */

void FUN_10147c280(undefined1 *param_1,undefined1 param_2)

{
  FUN_10147c9e8();
  *param_1 = param_2;
  return;
}



/* Entry: 10147c2a4; end: 10147c2bb;  */

undefined1  [16] FUN_10147c2a4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10147c2bc; end: 10147c30b;  */

void FUN_10147c2bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10147cccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10147c30c; end: 10147c477;  */

void FUN_10147c30c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar3 = 0x112da1af8;
  uStack_70 = param_5;
  func_0x0001000285a8(0x112da1af8,&UNK_10d945140);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&uStack_70 - extraout_x8;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  FUN_10147cccc();
  func_0x000107c606ec(lVar4,&UNK_1103c3eb0,&UNK_1103c3eb0,param_2,uVar1,uVar2);
  uStack_61 = 0;
  func_0x000107c6053c(param_3,param_4,&uStack_61,lVar3);
  if (unaff_x21 == 0) {
    uStack_62 = 1;
    func_0x000107c6054c(uStack_70,&uStack_62,lVar3);
    uStack_63 = 2;
    func_0x000107c60544(param_1,&uStack_63,lVar3);
    (**(code **)(lVar5 + 8))(lVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(lVar4,lVar3);
  }
  return;
}



/* Entry: 10147c478; end: 10147c4a7;  */

void FUN_10147c478(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_10147cb10();
  if (unaff_x21 == 0) {
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[2] = param_5;
    param_1[3] = param_2;
  }
  return;
}



/* Entry: 10147c4a8; end: 10147c4c7;  */

void FUN_10147c4a8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10147c30c(unaff_x20[3],param_1,*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Entry: 10147c4c8; end: 10147c78b;  */

/* WARNING: Removing unreachable block (ram,0x00010147c648) */
/* WARNING: Removing unreachable block (ram,0x00010147c6fc) */

void FUN_10147c4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long alStack_e0 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  uStack_c8 = param_4;
  uStack_c0 = param_5;
  uStack_b8 = param_6;
  lStack_b0 = param_8;
  pcStack_a8 = param_7;
  func_0x000107c5ecc4();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar12 - extraout_x12;
  uStack_d0 = param_2;
  func_0x000107c5eda8(lVar10);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5ed90();
  uStack_a0 = 0;
  puVar5 = puVar3;
  func_0x000107c409e4();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  uVar8 = uStack_a0;
  if ((int)puVar5 == 0) {
    uVar6 = uStack_a0;
    func_0x000107c61174();
    func_0x000107c5ed30(uVar8);
    func_0x000107c61170(uVar6);
    func_0x000107c61654();
    func_0x000107c614ac(uVar8);
  }
  else {
    func_0x000107c61174();
    func_0x000107c5ecc0(lVar9);
    func_0x000107c5ecb4(1);
    (**(code **)(lVar13 + 0x10))(lVar12,lVar10,lVar2);
    func_0x000107c5ed8c(lVar9);
    (**(code **)(lVar13 + 8))(lVar12,lVar2);
    (**(code **)(lVar11 + 8))(lVar9,lVar1);
    uVar6 = 0;
    func_0x000107c5eb54();
    func_0x000107c613fc();
    func_0x000107c5eb50();
    uStack_a0 = uStack_c8;
    uStack_98 = uStack_c0;
    uStack_90 = uStack_b8;
    uVar8 = uVar6;
    uStack_88 = param_1;
    FUN_10147ce14();
    puVar3 = &UNK_1103c3dc0;
    puVar7 = &uStack_a0;
    func_0x000107c5eb4c(puVar7,&UNK_1103c3dc0,uVar8);
    func_0x000107c61574(uVar6);
    func_0x000107c5ee40(uStack_d0,1,puVar7,puVar3);
    func_0x00010006c090(puVar7,puVar3);
  }
  lVar1 = lStack_b0;
  (*pcStack_a8)();
  (**(code **)(lVar13 + 8))(lVar10,lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    func_0x000107c60e78();
    *(undefined1 **)(lVar10 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(lVar10 + -8) = FUN_10147c78c;
    func_0x000107c61170(*(undefined8 *)(lVar1 + 0x10));
    func_0x000107c61574(*(undefined8 *)(lVar1 + 0x20));
    func_0x000107c61170(*(undefined8 *)(lVar1 + 0x28));
    func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_deallocClassInstance_11034f290)(lVar1,0x40,7);
    return;
  }
  return;
}



/* Entry: 10147c78c; end: 10147c7c7;  */

void FUN_10147c78c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10147c7c8; end: 10147c827;  */

void FUN_10147c7c8(void)

{
  FUN_10147b344();
  return;
}



/* Entry: 10147c828; end: 10147c847;  */

void FUN_10147c828(void)

{
  func_0x000107c61168(&PTR_PTR_112da1a70);
  return;
}



/* Entry: 10147c848; end: 10147c873;  */

long FUN_10147c848(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10147c874; end: 10147c87b;  */

void FUN_10147c874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10147c87c; end: 10147c8af;  */

undefined8 * FUN_10147c87c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10147c8b0; end: 10147c90b;  */

undefined8 * FUN_10147c8b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 10147c90c; end: 10147c94f;  */

undefined8 * FUN_10147c90c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 10147c950; end: 10147c9e7;  */

int FUN_10147c950(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10147c9e8; end: 10147cb0f;  */

undefined4 FUN_10147c9e8(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if ((param_1 == 0x74616e696d726574 && param_2 == -0x12ffff9bb6919097) ||
     (func_0x000107c605b8(0x74616e696d726574,0xed000064496e6f69,param_1,param_2,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x63616964656d6d69;
    if (((param_1 == 0x63616964656d6d69) && (param_2 == -0x13ffffff889ead87)) ||
       (func_0x000107c605b8(0x63616964656d6d69,0xec00000077615279,param_1,param_2,0),
       (uVar1 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar2 = 1;
    }
    else if ((param_1 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffef107be90)) {
      func_0x000107c6142c(0x800000010ef84170);
      uVar2 = 2;
    }
    else {
      uVar1 = 0xd000000000000011;
      func_0x000107c605b8(0xd000000000000011,0x800000010ef84170,param_1,param_2,0);
      func_0x000107c6142c(param_2);
      uVar2 = 2;
      if ((uVar1 & 1) == 0) {
        uVar2 = 3;
      }
    }
  }
  return uVar2;
}



/* Entry: 10147cb10; end: 10147cccb;  */

/* WARNING: Removing unreachable block (ram,0x00010147cc5c) */
/* WARNING: Removing unreachable block (ram,0x00010147ccac) */
/* WARNING: Removing unreachable block (ram,0x00010147cbe0) */

undefined1 * FUN_10147cb10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_70 [13];
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar2 = 0x112da1ae8;
  func_0x0001000285a8(0x112da1ae8,&UNK_10d945138);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_10147cccc();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_1103c3eb0,&UNK_1103c3eb0,lVar3,uVar1,puVar4);
  if (unaff_x21 == 0) {
    uStack_61 = 0;
    puVar4 = &uStack_61;
    func_0x000107c604f4(puVar4,lVar2);
    uStack_62 = 1;
    func_0x000107c60500(&uStack_62,lVar2);
    uStack_63 = 2;
    func_0x000107c604fc(&uStack_63,lVar2);
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar4;
}



/* Entry: 10147cccc; end: 10147cd73;  */

void FUN_10147cccc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1af0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945214;
  func_0x000107c61520(&UNK_10d945214,&UNK_1103c3eb0);
  puRam0000000112da1af0 = puVar1;
  return;
}



/* Entry: 10147cd74; end: 10147cd8f;  */

void FUN_10147cd74(long param_1,long param_2)

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



/* Entry: 10147cd90; end: 10147ce13;  */

void FUN_10147cd90(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10147ce14; end: 10147ce53;  */

void FUN_10147ce14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9450e4;
  func_0x000107c61520(&UNK_10d9450e4,&UNK_1103c3dc0);
  puRam0000000112da1b00 = puVar1;
  return;
}



/* Entry: 10147ce54; end: 10147cfbb;  */

int FUN_10147ce54(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10147ced0;
        goto LAB_10147ceb4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10147ceb4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10147ced0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10147cfbc; end: 10147cffb;  */

void FUN_10147cfbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9451ec;
  func_0x000107c61520(&UNK_10d9451ec,&UNK_1103c3eb0);
  puRam0000000112da1b08 = puVar1;
  return;
}



/* Entry: 10147cffc; end: 10147cfff;  */

void FUN_10147cffc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945184;
  func_0x000107c61520(&UNK_10d945184,&UNK_1103c3eb0);
  puRam0000000112da1b10 = puVar1;
  return;
}



/* Entry: 10147d000; end: 10147d03f;  */

void FUN_10147d000(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945184;
  func_0x000107c61520(&UNK_10d945184,&UNK_1103c3eb0);
  puRam0000000112da1b10 = puVar1;
  return;
}



/* Entry: 10147d040; end: 10147d043;  */

void FUN_10147d040(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d94515c;
  func_0x000107c61520(&UNK_10d94515c,&UNK_1103c3eb0);
  puRam0000000112da1b18 = puVar1;
  return;
}



/* Entry: 10147d044; end: 10147d083;  */

void FUN_10147d044(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d94515c;
  func_0x000107c61520(&UNK_10d94515c,&UNK_1103c3eb0);
  puRam0000000112da1b18 = puVar1;
  return;
}



/* Entry: 10147d084; end: 10147d13f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147d084(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_113083800);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_48);
  uVar2 = 0;
  FUN_10147c828();
  func_0x000107c613fc();
  uVar3 = uVar1;
  func_0x000107c61174(uVar1);
  pcVar4 = FUN_10147d158;
  FUN_10147b15c(FUN_10147d158,0,uVar1);
  param_1[3] = uVar2;
  param_1[4] = &PTR_DAT_1103c3d38;
  func_0x000107c61170(uVar3);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10147d140; end: 10147d157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147d140(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_113083800);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_48);
  uVar2 = 0;
  FUN_10147c828();
  func_0x000107c613fc();
  uVar3 = uVar1;
  func_0x000107c61174(uVar1);
  pcVar4 = FUN_10147d158;
  FUN_10147b15c(FUN_10147d158,0,uVar1);
  param_1[3] = uVar2;
  param_1[4] = &PTR_DAT_1103c3d38;
  func_0x000107c61170(uVar3);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10147d158; end: 10147d187;  */

void FUN_10147d158(undefined8 param_1)

{
  FUN_10147c828(0);
  FUN_10147af10(param_1);
  return;
}



/* Entry: 10147d188; end: 10147d21f;  */

undefined1  [16] FUN_10147d188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x20;
  undefined1 auVar5 [16];
  
  lVar4 = *unaff_x20;
  func_0x000107c5fadc();
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar4 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar2 = lVar4;
    func_0x000107c6148c(lVar4,puVar1);
    if (lVar2 != 0) {
      func_0x000107c4223c();
      func_0x000107c615e8(lVar4);
      uVar3 = 0;
      goto LAB_10147d210;
    }
    func_0x000107c615e8(lVar4);
  }
  param_1 = 0;
  uVar3 = 1;
LAB_10147d210:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10147d220; end: 10147d323;  */

/* WARNING: Possible PIC construction at 0x00010147d280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010147d284) */

void FUN_10147d220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c56bd8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10147d324; end: 10147d44f;  */

void FUN_10147d324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  if ((*(byte *)(unaff_x20 + 0x60) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x60) = 1;
    func_0x000107c419f0();
    func_0x000107c61180();
    puVar1 = &UNK_1103c3fb8;
    func_0x000107c613fc(&UNK_1103c3fb8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    puVar2 = &UNK_1103c3fe0;
    func_0x000107c613fc(&UNK_1103c3fe0,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    pcStack_50 = FUN_10147d5fc;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_100c1de60;
    puStack_58 = &UNK_1103c3ff8;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar1);
    uVar4 = param_1;
    func_0x000107c5c320(param_1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x000107c3e924(uVar4);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 10147d450; end: 10147d59f;  */

void FUN_10147d450(double param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  double dVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    lVar5 = param_3;
    (*param_4)();
    if (lVar5 == 0) {
      func_0x000107c61574(param_3);
    }
    else {
      (**(code **)(param_3 + 0x18))();
      uVar1 = *(undefined8 *)(param_3 + 0x40);
      lVar3 = *(long *)(param_3 + 0x48);
      func_0x0001000a8868(param_3 + 0x28,uVar1);
      dVar2 = *(double *)(param_3 + 0x50);
      uVar4 = *(undefined8 *)(param_3 + 0x58);
      dVar6 = dVar2;
      uVar7 = uVar4;
      (**(code **)(lVar3 + 8))(dVar2,uVar4,uVar1,lVar3);
      dVar8 = param_1;
      if (((uint)uVar7 & 0xff) != 1) {
        dVar8 = param_1 - dVar6;
      }
      if (86400.0 <= dVar8) {
        uVar1 = *(undefined8 *)(param_3 + 0x40);
        lVar3 = *(long *)(param_3 + 0x48);
        func_0x0001000a8868(param_3 + 0x28,uVar1);
        (**(code **)(lVar3 + 0x10))(param_1,dVar2,uVar4,uVar1,lVar3);
        func_0x000107c50320(lVar5);
      }
      func_0x000107c61574(param_3);
      func_0x000107c615e8(lVar5);
    }
  }
  return;
}



/* Entry: 10147d5a0; end: 10147d5fb;  */

void FUN_10147d5a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10147d5fc; end: 10147d633;  */

void FUN_10147d5fc(double param_1)

{
  undefined8 uVar1;
  double dVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  long unaff_x20;
  double dVar10;
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  pcVar5 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar6 != 0) {
    lVar7 = lVar6;
    (*pcVar5)();
    if (lVar7 == 0) {
      func_0x000107c61574(lVar6);
    }
    else {
      (**(code **)(lVar6 + 0x18))();
      uVar1 = *(undefined8 *)(lVar6 + 0x40);
      lVar3 = *(long *)(lVar6 + 0x48);
      func_0x0001000a8868(lVar6 + 0x28,uVar1);
      dVar2 = *(double *)(lVar6 + 0x50);
      uVar4 = *(undefined8 *)(lVar6 + 0x58);
      dVar8 = dVar2;
      uVar9 = uVar4;
      (**(code **)(lVar3 + 8))(dVar2,uVar4,uVar1,lVar3);
      dVar10 = param_1;
      if (((uint)uVar9 & 0xff) != 1) {
        dVar10 = param_1 - dVar8;
      }
      if (86400.0 <= dVar10) {
        uVar1 = *(undefined8 *)(lVar6 + 0x40);
        lVar3 = *(long *)(lVar6 + 0x48);
        func_0x0001000a8868(lVar6 + 0x28,uVar1);
        (**(code **)(lVar3 + 0x10))(param_1,dVar2,uVar4,uVar1,lVar3);
        func_0x000107c50320(lVar7);
      }
      func_0x000107c61574(lVar6);
      func_0x000107c615e8(lVar7);
    }
  }
  return;
}



/* Entry: 10147d634; end: 10147d657;  */

undefined8 FUN_10147d634(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 10147d658; end: 10147d677;  */

void FUN_10147d658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_6;
  *(undefined8 *)(unaff_x22 + 0x68) = param_7;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10147d678,0,0);
  return;
}


