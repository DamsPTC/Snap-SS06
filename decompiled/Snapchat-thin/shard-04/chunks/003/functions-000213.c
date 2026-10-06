/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103321580; end: 10332159f;  */

void FUN_103321580(void)

{
  func_0x000107c61168(&PTR_PTR_1128ce738);
  return;
}



/* Entry: 1033215a0; end: 10332166b;  */

undefined8 FUN_1033215a0(undefined8 param_1)

{
  (*(code *)&DAT_104369b14)();
  return param_1;
}



/* Entry: 10332166c; end: 1033217e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10332166c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f59c28);
  func_0x000107c412bc();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    lVar1 = lVar2;
    func_0x000107c4b160();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    lVar3 = lVar1;
    func_0x000107c3db5c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar3 != 0) {
      func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
      lVar1 = lVar3;
      func_0x0001000b637c(lVar3);
      uVar4 = 0x112f59b48;
      func_0x0001000285a8(0x112f59b48,&UNK_10dbb19b0);
      pcVar5 = FUN_1033217e8;
      func_0x0001000d5158(FUN_1033217e8,0,uVar4);
      func_0x000107c61574(lVar1);
      uVar4 = 0x112d530a8;
      func_0x0001000285a8(0x112d530a8,&UNK_10d919940);
      func_0x0001000bfde0(FUN_103321834,0,uVar4);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61574(pcVar5);
      return;
    }
    func_0x000107c615e8(lVar2);
  }
  func_0x0001000285a8(0x112ee4800,&UNK_10db0fb40);
  func_0x000104886440();
  return;
}



/* Entry: 1033217e8; end: 103321833;  */

void FUN_1033217e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uVar2 = *param_2;
  uStack_28 = 0;
  uVar1 = 0;
  FUN_103321c48(0);
  func_0x000107c5fc50(uVar2,&uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 103321834; end: 103321b6b;  */

void FUN_103321834(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  uVar10 = *param_2;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar10 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar11 = uVar10;
    }
    func_0x000107c60480();
  }
  if (uVar11 != 0) {
    uStack_b0 = uVar10 & 0xffffffffffffff8;
    uVar9 = 0;
    puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      while( true ) {
        if ((uVar10 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uStack_b0 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103321b28);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(uVar10 + uVar9 * 8 + 0x20);
          func_0x000107c61174(uVar4);
        }
        else {
          uVar4 = uVar9;
          func_0x0001020a4b50(uVar9,uVar10);
        }
        uVar1 = uVar9 + 1;
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103321b24);
          (*pcVar3)();
        }
        lStack_78 = 0;
        puVar5 = &UNK_11063ea20;
        func_0x000107c613fc(&UNK_11063ea20,0x18,7);
        *(long **)(puVar5 + 0x10) = &lStack_78;
        puVar8 = &UNK_11063ea48;
        func_0x000107c613fc(&UNK_11063ea48,0x20,7);
        *(code **)(puVar8 + 0x10) = FUN_103321c1c;
        *(undefined **)(puVar8 + 0x18) = puVar5;
        uStack_88 = 0x103321c24;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1020995dc;
        puStack_90 = &UNK_11063ea60;
        ppuVar6 = &puStack_a8;
        puStack_80 = puVar8;
        func_0x000107c60bc4(ppuVar6);
        puVar7 = puStack_80;
        func_0x000107c6157c(puVar8);
        func_0x000107c61574(puVar7);
        func_0x000107c4c684(uVar4);
        func_0x000107c60bd0(ppuVar6);
        lVar2 = lStack_78;
        func_0x000107c61574(puVar5);
        puVar5 = puVar8;
        func_0x000107c61544(puVar8,"",0x7a,9,0xd,1);
        func_0x000107c61574(puVar8);
        if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103321b2c);
          (*pcVar3)();
        }
        if (lVar2 != 0) break;
        func_0x000107c61170(uVar4);
        uVar9 = uVar9 + 1;
        if (uVar1 == uVar11) {
          return;
        }
      }
      FUN_10331e4e0();
      func_0x000107c61170(lVar2);
      puVar5 = PTR_PTR_1126b0820;
      func_0x000107c61168();
      func_0x000107c4b184();
      func_0x000107c61180();
      puVar7 = puVar5;
      func_0x000107c5e848();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      puVar5 = puVar7;
      func_0x000107c3ecc8();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar7);
      puVar8 = puStack_b8;
      func_0x000107c61550();
      if (((((ulong)puVar8 & 1) == 0) || ((long)puStack_b8 < 0)) ||
         (puVar8 = puStack_b8, ((ulong)puStack_b8 >> 0x3e & 1) != 0)) {
        if ((ulong)puStack_b8 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_b8) {
            puVar7 = puStack_b8;
          }
          func_0x000107c60480(puVar7);
        }
        puVar8 = (undefined *)0x0;
        func_0x000100fe2a60(0,puVar7 + 1,1,puStack_b8);
      }
      uVar4 = (ulong)puVar8 & 0xffffffffffffff8;
      uVar9 = *(ulong *)(uVar4 + 0x10);
      puStack_b8 = puVar8;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar9) {
        puStack_b8 = (undefined *)(ulong)(1 < *(ulong *)(uVar4 + 0x18));
        func_0x000100fe2a60(puStack_b8,uVar9 + 1,1,puVar8);
        uVar4 = (ulong)puStack_b8 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar4 + 0x10) = uVar9 + 1;
      *(undefined **)(uVar4 + uVar9 * 8 + 0x20) = puVar5;
      *param_1 = puStack_b8;
      uVar9 = uVar1;
    } while (uVar1 != uVar11);
  }
  return;
}



/* Entry: 103321b6c; end: 103321bcb; -[_TtC26LensInfoCardImplementation32InfoCardLensExplorerDataProvider init] */

void FUN_103321b6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardImplementation.InfoCardLensExplorerDataProvider",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103321b98);
  (*pcVar1)();
}



/* Entry: 103321bcc; end: 103321bdb; -[_TtC26LensInfoCardImplementation32InfoCardLensExplorerDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103321bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f59c28));
  return;
}



/* Entry: 103321bdc; end: 103321bfb;  */

void FUN_103321bdc(void)

{
  FUN_10332166c();
  return;
}



/* Entry: 103321bfc; end: 103321c1b;  */

void FUN_103321bfc(void)

{
  func_0x000107c61168(&PTR_PTR_1128ce818);
  return;
}



/* Entry: 103321c1c; end: 103321c47;  */

void FUN_103321c1c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103321c48; end: 103321c8b;  */

void FUN_103321c48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e56278 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ccc20;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e56278 = puVar1;
  return;
}



/* Entry: 103321c8c; end: 103321ccf;  */

void FUN_103321c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 103321cd0; end: 103321cdf;  */

void FUN_103321cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 103321ce0; end: 103321e07;  */

code * FUN_103321ce0(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  uVar4 = uStack_48;
  uVar3 = uStack_48;
  func_0x000100471e0c(uStack_48,1);
  func_0x000107c615e8(uVar4);
  puVar1 = &UNK_11063eaa0;
  func_0x000107c613fc(&UNK_11063eaa0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcVar2 = FUN_103321ebc;
  func_0x00010068b194(FUN_103321ebc,puVar1,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar1);
  uVar3 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(pcVar2);
  func_0x0001000d224c(&uStack_48);
  uVar4 = uStack_48;
  func_0x000100471e0c(uStack_48,1);
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(uStack_48);
  pcVar2 = FUN_1033222c8;
  func_0x0001000bfde0(FUN_1033222c8,0,&UNK_11063fb00);
  func_0x000107c61574(uVar4);
  return pcVar2;
}



/* Entry: 103321e08; end: 103321ebb;  */

void FUN_103321e08(long *param_1,long param_2)

{
  long lVar1;
  undefined1 uStack_39;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    func_0x000104886440();
  }
  else {
    if (lVar1 == 0) {
      func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
      uStack_39 = 0;
      func_0x000100854cb0(&uStack_39);
    }
    else {
      FUN_103321ec4(lVar1);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103321ebc; end: 103321ec3;  */

void FUN_103321ebc(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 uStack_39;
  undefined1 auStack_38 [24];
  
  lVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    func_0x000104886440();
  }
  else {
    if (lVar2 == 0) {
      func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
      uStack_39 = 0;
      func_0x000100854cb0(&uStack_39);
    }
    else {
      FUN_103321ec4(lVar2);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103321ec4; end: 1033222c7;  */

void FUN_103321ec4(undefined *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 *unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puStack_70;
  undefined *puStack_68;
  
  uVar15 = *unaff_x20;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar3 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar3 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar3 != (undefined *)0x0) {
    lVar14 = unaff_x20[2];
    lVar4 = lVar14;
    func_0x000107c403d8();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      func_0x000107c412bc();
      func_0x000107c61180();
      lVar4 = lVar14;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar14);
      if (lVar4 != 0) {
        if ((ulong)param_1 >> 0x3e == 0) {
          puVar3 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar3 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
          if (((ulong)param_1 & 0x8000000000000000) != 0) {
            puVar3 = param_1;
          }
          func_0x000107c60480();
        }
        puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar3 != (undefined *)0x0) {
          puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x00010334636c(0,(ulong)puVar3 & ((long)puVar3 >> 0x3f ^ 0xffffffffffffffffU),0);
          puVar16 = puStack_68;
          if ((long)puVar3 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1033222c8);
            (*pcVar2)();
          }
          puVar10 = &UNK_10d927f50;
          func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
          puVar17 = (undefined *)0x0;
          do {
            if (((ulong)param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= (long)puVar17) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1033222b0);
                (*pcVar2)();
              }
              puVar6 = *(undefined **)(param_1 + (long)puVar17 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar6 = puVar17;
              puVar10 = param_1;
              func_0x000102e2a3b4(puVar17,param_1);
            }
            puVar7 = puVar6;
            func_0x000107c3f70c();
            func_0x000107c61180();
            if (puVar7 == (undefined *)0x0) {
              func_0x000107c5faec();
              func_0x000107c5fadc();
              func_0x000107c6142c(puVar10);
            }
            lVar14 = lVar5;
            func_0x000107c403d4(lVar5);
            func_0x000107c61180();
            func_0x000107c61170(puVar7);
            lVar8 = lVar14;
            func_0x0001000b637c(lVar14);
            uVar9 = 0x112d38270;
            func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
            pcVar2 = FUN_10332245c;
            func_0x0001000d5158(FUN_10332245c,0,uVar9);
            func_0x000107c61574(lVar8);
            puVar10 = &UNK_11063ead8;
            func_0x000107c613fc(&UNK_11063ead8,0x18,7);
            *(undefined **)(puVar10 + 0x10) = puVar6;
            func_0x000107c61174();
            pcVar11 = FUN_1033225d8;
            func_0x0001000bfde0(FUN_1033225d8,puVar10,uVar9);
            func_0x000107c61574(pcVar2);
            func_0x000107c61574(puVar10);
            puVar7 = puVar6;
            func_0x000107c51ba4();
            func_0x000107c61180();
            puVar12 = puVar7;
            puVar10 = PTR___sSSN_11034da80;
            func_0x000107c5fc54();
            func_0x000107c61170(puVar7);
            ppuVar13 = &puStack_70;
            puStack_70 = puVar12;
            func_0x0001006c71a4(ppuVar13);
            func_0x000107c6142c(puVar12);
            func_0x000107c61574();
            func_0x00010487f7f8();
            func_0x000107c61170(puVar6);
            func_0x000107c61574(ppuVar13);
            func_0x000107c61170(lVar14);
            uVar1 = *(ulong *)(puVar16 + 0x10);
            puVar6 = (undefined *)(uVar1 + 1);
            puStack_68 = puVar16;
            if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar1) {
              puVar10 = puVar6;
              func_0x00010334636c(1 < *(ulong *)(puVar16 + 0x18),puVar6,1);
            }
            puVar17 = puVar17 + 1;
            *(undefined **)(puStack_68 + 0x10) = puVar6;
            *(code **)(puStack_68 + uVar1 * 8 + 0x20) = pcVar11;
            puVar16 = puStack_68;
          } while (puVar3 != puVar17);
        }
        func_0x0001000285a8(0x112ea3738,&UNK_10dab5ea0);
        puVar10 = puVar16;
        func_0x000100b658a4(puVar16);
        func_0x000107c6142c(puVar16);
        puVar3 = &UNK_11063eb00;
        func_0x000107c613fc(&UNK_11063eb00,0x20,7);
        *(long *)(puVar3 + 0x10) = lVar4;
        *(undefined8 *)(puVar3 + 0x18) = uVar15;
        func_0x000107c615f0(lVar4);
        func_0x000100775358(0x1033225e0,puVar3,PTR___sSbN_11034dd40);
        func_0x000107c615e8(lVar5);
        func_0x000107c615e8(lVar4);
        func_0x000107c61574(puVar10);
        func_0x000107c61574(puVar3);
        return;
      }
      func_0x000107c615e8(lVar5);
    }
  }
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  puStack_68 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff00);
  func_0x000100854cb0(&puStack_68);
  return;
}



/* Entry: 1033222c8; end: 1033222df;  */

void FUN_1033222c8(ulong *param_1,byte *param_2)

{
  *param_1 = (ulong)*param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 5;
  return;
}



/* Entry: 1033222e0; end: 10332245b;  */

undefined * FUN_1033222e0(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  puVar3 = PTR___sSSN_11034da80;
  lVar8 = *param_1;
  uVar9 = *(ulong *)(lVar8 + 0x10);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    uVar10 = 0;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (*(ulong *)(lVar8 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10332244c);
        (*pcVar1)();
      }
      lVar7 = *(long *)(lVar8 + 0x20 + uVar10 * 8);
      uVar6 = *(ulong *)(lVar7 + 0x10);
      lVar11 = *(long *)(puVar5 + 0x10);
      if (SCARRY8(lVar11,uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103322450);
        (*pcVar1)();
      }
      func_0x000107c61434(lVar7);
      puVar2 = puVar5;
      func_0x000107c61558();
      if (((int)puVar2 == 0) ||
         (uVar4 = *(ulong *)(puVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar11 + uVar6))) {
        func_0x0001000d182c();
        uVar4 = *(ulong *)(puVar2 + 0x18) >> 1;
        puVar5 = puVar2;
        if (*(long *)(lVar7 + 0x10) != 0) goto LAB_1033223bc;
LAB_10332232c:
        func_0x000107c6142c(lVar7);
        puVar2 = puVar5;
        if (uVar6 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103322454);
          (*pcVar1)();
        }
      }
      else {
        puVar2 = puVar5;
        if (*(long *)(lVar7 + 0x10) == 0) goto LAB_10332232c;
LAB_1033223bc:
        if (uVar4 - *(long *)(puVar2 + 0x10) < uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103322458);
          (*pcVar1)();
        }
        func_0x000107c6140c(puVar2 + *(long *)(puVar2 + 0x10) * 0x10 + 0x20,lVar7 + 0x20,uVar6,
                            puVar3);
        func_0x000107c6142c(lVar7);
        if (uVar6 != 0) {
          if (SCARRY8(*(long *)(puVar2 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10332245c);
            (*pcVar1)();
          }
          *(ulong *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + uVar6;
        }
      }
      uVar10 = uVar10 + 1;
      puVar5 = puVar2;
    } while (uVar9 != uVar10);
  }
  puVar3 = puVar2;
  FUN_1033225e8(puVar2,param_2);
  func_0x000107c6142c(puVar2);
  return puVar3;
}



/* Entry: 10332245c; end: 10332249f;  */

void FUN_10332245c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x000107c5fc50(*param_2,&uStack_28,PTR___sSSN_11034da80);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1033224a0; end: 103322503;  */

void FUN_1033224a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x000107c51ba4();
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c5fc54();
  func_0x000107c61170(param_3);
  *param_1 = uVar1;
  func_0x000107c61434(uVar2);
  func_0x00010109a32c();
  return;
}



/* Entry: 103322504; end: 103322533;  */

void FUN_103322504(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  func_0x000107c40808();
  *(bool *)param_1 = lVar1 == 0;
  return;
}



/* Entry: 103322534; end: 103322563;  */

void FUN_103322534(undefined8 param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  
  lVar2 = *(long *)(*param_2 + 0x10);
  pbVar4 = (byte *)(*param_2 + 0x20);
  do {
    lVar3 = lVar2;
    if (lVar3 == 0) break;
    bVar1 = *pbVar4;
    lVar2 = lVar3 + -1;
    pbVar4 = pbVar4 + 1;
  } while ((bVar1 & 1) != 0);
  *(bool *)param_1 = lVar3 != 0;
  return;
}



/* Entry: 103322564; end: 103322597;  */

void FUN_103322564(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103322598; end: 1033225b7;  */

void FUN_103322598(void)

{
  FUN_103321ce0();
  return;
}



/* Entry: 1033225b8; end: 1033225d7;  */

void FUN_1033225b8(void)

{
  func_0x000107c61168(&PTR_PTR_112f59c98);
  return;
}



/* Entry: 1033225d8; end: 1033225e7;  */

void FUN_1033225d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *param_2;
  func_0x000107c51ba4();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar2);
  *param_1 = uVar1;
  func_0x000107c61434(uVar3);
  func_0x00010109a32c();
  return;
}



/* Entry: 1033225e8; end: 1033227f3;  */

code * FUN_1033225e8(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined1 uStack_69;
  undefined *puStack_68;
  
  lVar9 = *(long *)(param_1 + 0x10);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar9 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010289dc98(0,lVar9,0);
    puVar11 = (undefined8 *)(param_1 + 0x28);
    do {
      puVar10 = puStack_68;
      uVar3 = puVar11[-1];
      uVar2 = *puVar11;
      func_0x000107c61434(uVar2);
      func_0x000107c5fadc(uVar3,uVar2);
      lVar4 = param_2;
      func_0x000107c4b160();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      lVar5 = lVar4;
      func_0x000107c3db5c();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
        uStack_69 = (code)0x1;
        pcVar7 = (code *)&uStack_69;
        func_0x000100854cb0();
        func_0x000107c615e8(lVar4);
      }
      else {
        func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
        lVar6 = lVar5;
        func_0x0001000b637c(lVar5);
        pcVar7 = FUN_103322504;
        func_0x0001000bfde0(FUN_103322504,0,PTR___sSbN_11034dd40);
        func_0x000107c61574(lVar6);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lVar5);
      }
      func_0x000107c6142c(uVar2);
      uVar1 = *(ulong *)(puVar10 + 0x10);
      puStack_68 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
        func_0x00010289dc98(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
      }
      puVar11 = puVar11 + 2;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(code **)(puStack_68 + uVar1 * 8 + 0x20) = pcVar7;
      lVar9 = lVar9 + -1;
      puVar10 = puStack_68;
    } while (lVar9 != 0);
  }
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  puVar8 = puVar10;
  func_0x000100b658a4(puVar10);
  func_0x000107c6142c(puVar10);
  pcVar7 = FUN_103322534;
  func_0x0001000bfde0(FUN_103322534,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(puVar8);
  return pcVar7;
}



/* Entry: 1033227f4; end: 1033229b7;  */

undefined1 FUN_1033227f4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  
  bVar3 = (byte)unaff_x20[4];
  if (10 < bVar3) {
    uVar5 = *unaff_x20;
    if (bVar3 == 0xb) {
      if ((uVar5 & 1) != 0) {
        return 5;
      }
    }
    else if (bVar3 != 0xc) {
      uVar1 = unaff_x20[2];
      uVar2 = unaff_x20[3];
      uVar6 = unaff_x20[1];
      if (((uVar1 != 0 || uVar2 != 0) || (uVar5 != 0 || uVar6 != 0)) &&
         (5 < uVar5 - 1 || ((uVar1 != 0 || uVar2 != 0) || uVar6 != 0))) {
        if ((uVar5 == 7) && ((uVar1 == 0 && uVar2 == 0) && uVar6 == 0)) {
          lVar4 = 0;
          FUN_103332bd4();
          return *(undefined1 *)(param_1 + *(int *)(lVar4 + 0x44));
        }
        if ((uVar5 == 8) && ((uVar1 == 0 && uVar2 == 0) && uVar6 == 0)) {
          return 4;
        }
        if ((uVar5 == 9) && ((uVar1 == 0 && uVar2 == 0) && uVar6 == 0)) {
          lVar4 = 0;
          FUN_103332bd4();
          if (*(char *)(param_1 + *(int *)(lVar4 + 0x48)) == '\0') {
            return 2;
          }
          return 3;
        }
        if ((uVar5 == 10) && ((uVar1 == 0 && uVar2 == 0) && uVar6 == 0)) {
          return 6;
        }
        if ((uVar5 == 0xb) && ((uVar1 == 0 && uVar2 == 0) && uVar6 == 0)) {
          return 7;
        }
        if (((uVar5 & 0xfffffffffffffffe) != 0xc && uVar5 != 0xe) ||
           ((uVar1 != 0 || uVar2 != 0) || uVar6 != 0)) {
          if ((uVar5 == 0xf) && ((uVar1 == 0 && uVar2 == 0) && uVar6 == 0)) {
            return 10;
          }
          if (((uVar5 & 0xfffffffffffffffe) != 0x10 && uVar5 != 0x12) ||
             ((uVar1 != 0 || uVar2 != 0) || uVar6 != 0)) {
            if ((uVar5 == 0x13) && ((uVar1 == 0 && uVar2 == 0) && uVar6 == 0)) {
              return 9;
            }
            if ((uVar5 == 0x14) && ((uVar1 == 0 && uVar2 == 0) && uVar6 == 0)) {
              return 8;
            }
            if ((uVar5 == 0x15) && ((uVar1 == 0 && uVar2 == 0) && uVar6 == 0)) {
              return 0xf;
            }
            if ((uVar5 == 0x16) && ((uVar1 == 0 && uVar2 == 0) && uVar6 == 0)) {
              return 0xe;
            }
            if ((uVar5 == 0x17) && ((uVar1 == 0 && uVar2 == 0) && uVar6 == 0)) {
              return 0xc;
            }
            if ((uVar5 == 0x18) && ((uVar1 == 0 && uVar2 == 0) && uVar6 == 0)) {
              return 0xd;
            }
            if ((uVar5 == 0x19) && ((uVar1 == 0 && uVar2 == 0) && uVar6 == 0)) {
              return 0xb;
            }
          }
        }
      }
    }
  }
  return 0x10;
}



/* Entry: 1033229b8; end: 103322a27;  */

void FUN_1033229b8(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c613fc();
  uVar1 = param_2[8];
  uVar3 = param_2[0xb];
  uVar2 = param_2[10];
  *(undefined8 *)(unaff_x20 + 0x60) = param_2[9];
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar2;
  uVar1 = param_2[0xc];
  *(undefined8 *)(unaff_x20 + 0x80) = param_2[0xd];
  *(undefined8 *)(unaff_x20 + 0x78) = uVar1;
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined8 *)(unaff_x20 + 0x20) = param_2[1];
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  *(undefined8 *)(unaff_x20 + 0x40) = param_2[5];
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x88) = param_2[0xe];
  *(undefined8 *)(unaff_x20 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  return;
}



/* Entry: 103322a28; end: 103322a67;  */

void FUN_103322a28(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[8];
  uVar3 = param_2[0xb];
  uVar2 = param_2[10];
  *(undefined8 *)(unaff_x20 + 0x60) = param_2[9];
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar2;
  uVar1 = param_2[0xc];
  *(undefined8 *)(unaff_x20 + 0x80) = param_2[0xd];
  *(undefined8 *)(unaff_x20 + 0x78) = uVar1;
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined8 *)(unaff_x20 + 0x20) = param_2[1];
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  *(undefined8 *)(unaff_x20 + 0x40) = param_2[5];
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x88) = param_2[0xe];
  *(undefined8 *)(unaff_x20 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  return;
}



/* Entry: 103322a68; end: 103322ab7;  */

undefined8 FUN_103322a68(void)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  if ((uVar4 & 0x4004) == 0) {
    puVar1 = PTR_PTR_1126bd498;
    func_0x000107c61168();
    func_0x000107c3eab4();
    lVar2 = *(long *)(unaff_x20 + 0x88);
  }
  else {
    lVar2 = 0;
    puVar1 = (undefined *)0xe;
  }
  uVar3 = (uint)uVar4;
  if ((uVar3 >> 8 & 1) != 0) {
    return 10;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    return 0xc;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    return 0xe;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    return 0x10;
  }
  if ((uVar3 >> 7 & 1) != 0) {
    return 0xb;
  }
  if ((uVar3 >> 0xb & 1) != 0) {
    return 0xd;
  }
  if ((uVar3 >> 0xd & 1) == 0) {
    if (lVar2 < 0x2a) {
      if (lVar2 < 0x14) {
        if (lVar2 == 7) {
          return 7;
        }
        if (lVar2 == 0x13) {
          return 5;
        }
      }
      else {
        if (lVar2 == 0x14) {
          return 9;
        }
        if (lVar2 == 0x26) {
          return 6;
        }
      }
    }
    else {
      if (lVar2 - 0x2aU < 2) {
        return 6;
      }
      if (lVar2 == 0x2d) {
        return 4;
      }
      if (lVar2 == 0x36) {
        return 8;
      }
    }
    if ((undefined *)0x16 < puVar1) {
      return 0xffffffffffffffff;
    }
    return *(undefined8 *)(&UNK_10dbb1c60 + (long)puVar1 * 8);
  }
  return 0x11;
}



/* Entry: 103322ab8; end: 103322b37;  */

void FUN_103322ab8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x78);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103322b38; end: 103322bfb;  */

void FUN_103322b38(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    puVar1 = PTR_PTR_1126ad0b8;
    func_0x000107c610f8(PTR_PTR_1126ad0b8);
    func_0x000107c453e4();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x28));
    func_0x000107c549e0(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c55e70(puVar1);
    func_0x000107c61170(uVar2);
    FUN_103322a68();
    func_0x000107c59558(puVar1);
    func_0x000107c4bfb0(lStack_38);
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 103322bfc; end: 103322f1b;  */

void FUN_103322bfc(char param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    puVar1 = PTR_PTR_1126ad0c0;
    func_0x000107c610f8(PTR_PTR_1126ad0c0);
    func_0x000107c453e4();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x28));
    func_0x000107c549e0(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c55e70(puVar1);
    func_0x000107c61170(uVar2);
    if (*(long *)(unaff_x20 + 0x48) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
      func_0x000107c5fadc(uVar2);
    }
    func_0x000107c57b18(puVar1);
    func_0x000107c61170(uVar2);
    if (*(long *)(unaff_x20 + 0x58) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
      func_0x000107c5fadc(uVar2);
    }
    func_0x000107c57b1c(puVar1);
    func_0x000107c61170(uVar2);
    FUN_103322a68();
    func_0x000107c59558(puVar1);
    if (param_1 != '\0') {
      if (param_1 == '\x01') {
        uVar2 = 0x454c49424f4d;
        uVar3 = 0xe600000000000000;
      }
      else {
        uVar2 = 0x424557;
        uVar3 = 0xe300000000000000;
      }
      func_0x000107c5fadc(uVar2,uVar3);
      func_0x000107c55e88(puVar1);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c4bfb0(lStack_48);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 103322f1c; end: 103322f2f;  */

undefined8 FUN_103322f1c(ulong param_1)

{
  return *(undefined8 *)(&UNK_10dbb1be0 + (param_1 & 0xff) * 8);
}



/* Entry: 103322f30; end: 103322f8f;  */

void FUN_103322f30(void)

{
  FUN_103322b38();
  return;
}



/* Entry: 103322f90; end: 103322faf;  */

void FUN_103322f90(void)

{
  func_0x000107c61168(&PTR_PTR_112f59d48);
  return;
}



/* Entry: 103322fb0; end: 10332309f;  */

undefined8 FUN_103322fb0(ulong param_1,long param_2,uint param_3)

{
  if ((param_3 >> 8 & 1) != 0) {
    return 10;
  }
  if ((param_3 >> 9 & 1) != 0) {
    return 0xc;
  }
  if ((param_3 >> 10 & 1) != 0) {
    return 0xe;
  }
  if ((param_3 >> 0xc & 1) == 0) {
    if ((param_3 >> 7 & 1) != 0) {
      return 0xb;
    }
    if ((param_3 >> 0xb & 1) != 0) {
      return 0xd;
    }
    if ((param_3 >> 0xd & 1) != 0) {
      return 0x11;
    }
    if (param_2 < 0x2a) {
      if (param_2 < 0x14) {
        if (param_2 == 7) {
          return 7;
        }
        if (param_2 == 0x13) {
          return 5;
        }
      }
      else {
        if (param_2 == 0x14) {
          return 9;
        }
        if (param_2 == 0x26) {
          return 6;
        }
      }
    }
    else {
      if (param_2 - 0x2aU < 2) {
        return 6;
      }
      if (param_2 == 0x2d) {
        return 4;
      }
      if (param_2 == 0x36) {
        return 8;
      }
    }
    if (0x16 < param_1) {
      return 0xffffffffffffffff;
    }
    return *(undefined8 *)(&UNK_10dbb1c60 + param_1 * 8);
  }
  return 0x10;
}



/* Entry: 1033230a0; end: 1033233fb;  */

long FUN_1033230a0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1033233fc; end: 10332340f;  */

bool FUN_1033233fc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103323410; end: 1033234bb;  */

void FUN_103323410(void)

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



/* Entry: 1033234bc; end: 1033234bf;  */

void FUN_1033234bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f59db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb1d50;
  func_0x000107c61520(&UNK_10dbb1d50,&UNK_11063ec68);
  puRam0000000112f59db0 = puVar1;
  return;
}



/* Entry: 1033234c0; end: 1033234ff;  */

void FUN_1033234c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f59db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb1d50;
  func_0x000107c61520(&UNK_10dbb1d50,&UNK_11063ec68);
  puRam0000000112f59db0 = puVar1;
  return;
}



/* Entry: 103323500; end: 103323663;  */

int FUN_103323500(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf0 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xf) {
      iVar2 = 4;
    }
    if (param_2 + 0xf >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10332357c;
        goto LAB_103323560;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103323560:
      return ((uint)*param_1 | uVar1 << 8) - 0xf;
    }
  }
LAB_10332357c:
  iVar2 = *param_1 - 0x10;
  if (*param_1 < 0x10) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103323664; end: 1033236b3;  */

void FUN_103323664(byte *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  
  if (*(char *)(param_2 + 0x11) == '\x01') {
    lVar1 = 0;
    FUN_103332bd4();
    bVar2 = *(byte *)(param_2 + *(int *)(lVar1 + 0x24)) ^ 1;
  }
  else {
    bVar2 = 0;
  }
  *param_1 = bVar2 & 1;
  return;
}



/* Entry: 1033236b4; end: 10332377b;  */

void FUN_1033236b4(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  
  lVar4 = 0x112f59ec8;
  func_0x0001000285a8(0x112f59ec8,&UNK_10dbb1e80);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  lVar5 = 0;
  FUN_103332bd4();
  cVar2 = *(char *)(param_2 + *(int *)(lVar5 + 0x38));
  *(char *)(lVar4 + 0x20) = cVar2;
  cVar3 = *(char *)(param_2 + *(int *)(lVar5 + 0x3c));
  uVar6 = 1;
  if (cVar3 != '\x01' && cVar2 != '\x01') {
    uVar6 = 2;
  }
  *(char *)(lVar4 + 0x21) = cVar3;
  uVar1 = 0;
  if (cVar3 != '\0' && cVar2 != '\0') {
    uVar1 = uVar6;
  }
  func_0x000107c61588(lVar4);
  *param_1 = uVar1;
  param_1[1] = cVar2 == '\x01';
  param_1[2] = cVar3 == '\x01';
  return;
}



/* Entry: 10332377c; end: 1033237bb;  */

void FUN_10332377c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f59db8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb1ee0;
  func_0x000107c61520(&UNK_10dbb1ee0,&UNK_11063eec0);
  puRam0000000112f59db8 = puVar1;
  return;
}



/* Entry: 1033237bc; end: 103323823;  */

void FUN_1033237bc(undefined1 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103332bd4();
  *param_1 = *(undefined1 *)(param_2 + *(int *)(lVar1 + 0x24));
  return;
}



/* Entry: 103323824; end: 103323aa7;  */

void FUN_103323824(ulong *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar12 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar14 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar14 - extraout_x12;
  lVar3 = 0;
  FUN_103332bd4();
  uVar8 = *(ulong *)(param_2 + *(int *)(lVar3 + 0x40));
  uVar4 = 0xd;
  func_0x000103331428();
  if ((uVar4 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    return;
  }
  FUN_1033467bc();
  lVar3 = *(long *)(param_2 + *(int *)(lVar3 + 0x34));
  if (lVar3 != 0) {
    func_0x000107c4b260();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar5 = lVar3;
      func_0x000107c41f58();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      uStack_78 = uVar4;
      if (lVar5 == 0) {
        lVar6 = 0;
        func_0x000107c5ede0();
      }
      else {
        func_0x000107c5edb4(lVar14,lVar5);
        func_0x000107c61170(lVar5);
        lVar6 = 0;
        func_0x000107c5ede0();
      }
      lVar13 = *(long *)(lVar6 + -8);
      (**(code **)(lVar13 + 0x38))(lVar14,lVar5 == 0,1,lVar6);
      func_0x0001001021cc(lVar14,lVar11);
      func_0x000107c5ede0(0);
      uVar9 = 1;
      lVar3 = lVar11;
      (**(code **)(lVar13 + 0x30))(lVar11,1,lVar6);
      if ((int)lVar3 == 1) {
        func_0x0001000293e4(lVar11);
        lVar3 = 0;
        uVar9 = 0xe000000000000000;
        uVar4 = uStack_78;
      }
      else {
        func_0x000107c5ed70();
        (**(code **)(lVar13 + 8))(lVar11,lVar6);
        uVar4 = uStack_78;
      }
      goto LAB_103323a18;
    }
  }
  lVar11 = 0;
  lVar3 = 0;
  uVar9 = 0xe000000000000000;
LAB_103323a18:
  lStack_70 = lVar3;
  uStack_68 = uVar9;
  func_0x000107c5eb88(puVar12);
  func_0x000100e8b654();
  puVar7 = puVar12;
  puVar10 = PTR___sSSN_11034da80;
  func_0x000107c601f0(puVar12,PTR___sSSN_11034da80,lVar11);
  (**(code **)(lVar15 + 8))(puVar12,lVar2);
  func_0x000107c6142c(uVar9);
  func_0x000107c6142c(puVar10);
  uVar1 = (ulong)puVar7 & 0xffffffffffff;
  if (((ulong)puVar10 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)puVar10 >> 0x38 & 0xf;
  }
  *param_1 = uVar4;
  param_1[1] = uVar8;
  *(bool *)(param_1 + 2) = uVar1 != 0;
  return;
}



/* Entry: 103323aa8; end: 103323b17;  */

void FUN_103323aa8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f59dc8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f59dc0;
  func_0x00010002969c(0x112f59dc0,&UNK_10dbb1e20);
  uVar2 = uVar1;
  FUN_103323b18();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112f59dc8 = puVar3;
  return;
}



/* Entry: 103323b18; end: 103323b57;  */

void FUN_103323b18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f59dd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb1f08;
  func_0x000107c61520(&UNK_10dbb1f08,&UNK_11063ef48);
  puRam0000000112f59dd0 = puVar1;
  return;
}



/* Entry: 103323b58; end: 103323c67;  */

void FUN_103323b58(undefined1 *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  
  lVar2 = 0;
  FUN_103332bd4();
  lVar2 = *(long *)(param_2 + *(int *)(lVar2 + 0x34));
  if (lVar2 != 0) {
    lVar5 = lVar2;
    func_0x000107c4b260();
    func_0x000107c61180();
    if (lVar5 == 0) {
LAB_103323bd0:
      lVar5 = 0;
    }
    else {
      lVar3 = lVar5;
      func_0x000107c5b64c();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar3 == 0) goto LAB_103323bd0;
      lVar5 = lVar3;
      func_0x000107c5b638();
      func_0x000107c61170(lVar3);
    }
    func_0x000107c4b260();
    func_0x000107c61180();
    if (lVar2 == 0) {
LAB_103323c30:
      bVar1 = false;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c5b64c();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) goto LAB_103323c30;
      lVar2 = lVar3;
      func_0x000107c4b45c();
      func_0x000107c61170(lVar3);
      bVar1 = lVar2 == 1;
    }
    if ((lVar5 == 2) || ((lVar5 == 3 && (bVar1)))) {
      uVar4 = 1;
      goto LAB_103323c54;
    }
  }
  uVar4 = 0;
LAB_103323c54:
  *param_1 = uVar4;
  return;
}



/* Entry: 103323c68; end: 103323ca7;  */

void FUN_103323c68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f59dd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb1f70;
  func_0x000107c61520(&UNK_10dbb1f70,&UNK_11063efe0);
  puRam0000000112f59dd8 = puVar1;
  return;
}



/* Entry: 103323ca8; end: 103323dcb;  */

void FUN_103323ca8(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)(param_2 + 0x10);
  lVar2 = 0x112f59e68;
  func_0x0001000285a8(0x112f59e68,&UNK_10dbb3230);
  if (bVar1 - 1 < 2) {
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 4;
    *(undefined8 *)(lVar2 + 0x10) = 2;
    lVar3 = 0;
    FUN_103332bd4();
    *(ulong *)(lVar2 + 0x20) =
         (ulong)*(byte *)(param_2 + *(int *)(lVar3 + 0x48)) | 0x2000000000000000;
    *(undefined8 *)(lVar2 + 0x30) = 0x8000000000000001;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 3;
  }
  else {
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 8;
    *(undefined8 *)(lVar2 + 0x10) = 4;
    lVar3 = 0;
    FUN_103332bd4();
    uVar4 = *(undefined8 *)(param_2 + *(int *)(lVar3 + 0x30));
    *(ulong *)(lVar2 + 0x20) = (ulong)*(byte *)(param_2 + *(int *)(lVar3 + 0x44));
    *(undefined8 *)(lVar2 + 0x28) = uVar4;
    *(ulong *)(lVar2 + 0x30) =
         (ulong)*(byte *)(param_2 + *(int *)(lVar3 + 0x48)) | 0x2000000000000000;
    *(undefined8 *)(lVar2 + 0x40) = 0x8000000000000000;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0x8000000000000001;
    *(undefined8 *)(lVar2 + 0x48) = 3;
    *(undefined8 *)(lVar2 + 0x58) = 3;
    func_0x000107c61174();
  }
  *param_1 = lVar2;
  FUN_103332bd4(0);
  param_1[1] = *(long *)(param_2 + *(int *)(lVar3 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 103323dcc; end: 103323e3b;  */

void FUN_103323dcc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f59df8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f59de8;
  func_0x00010002969c(0x112f59de8,&UNK_10dbb1e30);
  uVar2 = uVar1;
  FUN_103323e3c();
  puVar3 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar1,&uStack_28);
  puRam0000000112f59df8 = puVar3;
  return;
}



/* Entry: 103323e3c; end: 103323ecb;  */

void FUN_103323e3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f59e00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb1fd8;
  func_0x000107c61520(&UNK_10dbb1fd8,&UNK_11063f070);
  puRam0000000112f59e00 = puVar1;
  return;
}



/* Entry: 103323ecc; end: 103323f5f;  */

void FUN_103323ecc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = 0x112f59e68;
  func_0x0001000285a8(0x112f59e68,&UNK_10dbb3230);
  func_0x000107c61538();
  lVar2 = 0;
  FUN_103332bd4();
  if (*(char *)(param_2 + *(int *)(lVar2 + 0x3c)) == '\x02') {
    FUN_1033250b0(param_2);
    FUN_103342c98();
  }
  uVar3 = *(undefined8 *)(param_2 + *(int *)(lVar2 + 0x40));
  *param_1 = uVar1;
  param_1[1] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 103323f60; end: 103323f9b;  */

void FUN_103323f60(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1033250b0();
  *param_1 = lVar1;
  lVar1 = 0;
  FUN_103332bd4();
  param_1[1] = *(long *)(param_2 + *(int *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 103323f9c; end: 103324253;  */

undefined * FUN_103323f9c(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  code *pcVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_b0 [72];
  undefined *puStack_68;
  
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((*(long *)(param_2 + 0x10) != 0) && (uVar13 = *(ulong *)(param_1 + 0x10), uVar13 != 0)) {
    uVar14 = 0;
LAB_103323fec:
    uVar3 = uVar14;
    if (uVar14 <= uVar13) {
      uVar3 = uVar13;
    }
    do {
      if (uVar14 == uVar3) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103324254);
        (*pcVar6)();
      }
      puVar1 = (ulong *)(param_1 + 0x20 + uVar14 * 0x10);
      uVar2 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = (uint)(uVar2 >> 0x20);
      uVar8 = uVar5 >> 0x1d;
      if (uVar5 >> 0x1d < 2) {
        if (uVar8 == 0) {
          func_0x000107c61174(uVar4);
          uVar12 = 7;
        }
        else {
          uVar12 = 8;
        }
      }
      else if (uVar8 == 2) {
        uVar12 = 0xb;
      }
      else if (uVar8 == 3) {
        uVar12 = 0xc;
      }
      else if ((long)(2 - (uVar4 + (uVar2 >= 0x8000000000000000))) < 0 ==
               (SCARRY8(~uVar4,2) != SCARRY8(~uVar4 + 2,(ulong)(uVar2 < 0x8000000000000000)))) {
        if ((long)(1 - (uVar4 + (uVar2 >= 0x8000000000000000))) < 0 ==
            (SCARRY8(~uVar4,1) != SCARRY8(~uVar4 + 1,(ulong)(uVar2 < 0x8000000000000000)))) {
          if (uVar2 == 0x8000000000000000 && uVar4 == 0) {
            uVar12 = 5;
          }
          else {
            uVar12 = 6;
          }
        }
        else if (uVar4 == 1 && uVar2 == 0x8000000000000000) {
          uVar12 = 1;
        }
        else {
          uVar12 = 2;
        }
      }
      else if ((long)(3 - (uVar4 + (uVar2 >= 0x8000000000000000))) < 0 ==
               (SCARRY8(~uVar4,3) != SCARRY8(~uVar4 + 3,(ulong)(uVar2 < 0x8000000000000000)))) {
        if (uVar4 == 2 && uVar2 == 0x8000000000000000) {
          uVar12 = 3;
        }
        else {
          uVar12 = 0;
        }
      }
      else if (uVar4 == 3 && uVar2 == 0x8000000000000000) {
        uVar12 = 9;
      }
      else if (uVar4 == 3 && uVar2 == 0x8000000000000001) {
        uVar12 = 10;
      }
      else {
        uVar12 = 4;
      }
      uVar14 = uVar14 + 1;
      if (*(long *)(param_2 + 0x10) != 0) {
        func_0x000107c6068c(auStack_b0,*(undefined8 *)(param_2 + 0x28));
        uVar9 = uVar12;
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar10 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
          do {
            if (uVar12 == *(byte *)(*(long *)(param_2 + 0x30) + uVar9)) {
              puVar7 = puVar11;
              func_0x000107c61558();
              puStack_68 = puVar11;
              if (((ulong)puVar7 & 1) == 0) {
                func_0x0001033463a0(0,*(long *)(puVar11 + 0x10) + 1,1);
              }
              uVar3 = *(ulong *)(puStack_68 + 0x10);
              if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar3) {
                func_0x0001033463a0(1 < *(ulong *)(puStack_68 + 0x18),uVar3 + 1,1);
              }
              *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
              *(ulong *)(puStack_68 + uVar3 * 0x10 + 0x20) = uVar2;
              *(ulong *)(puStack_68 + uVar3 * 0x10 + 0x28) = uVar4;
              puVar11 = puStack_68;
              if (uVar14 == uVar13) {
                return puStack_68;
              }
              goto LAB_103323fec;
            }
            uVar9 = uVar9 + 1 & ~uVar10;
          } while ((*(ulong *)(param_2 + 0x38 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
        }
      }
      FUN_103325284(uVar2,uVar4);
    } while (uVar14 != uVar13);
  }
  return puVar11;
}



/* Entry: 103324254; end: 10332427f;  */

void FUN_103324254(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103323f9c(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 103324280; end: 103324283;  */

void FUN_103324280(byte *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_103332bd4();
  func_0x000103331424(bVar1,*(undefined8 *)(param_2 + *(int *)(lVar2 + 0x50)));
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 103324284; end: 1033243ef;  */

void FUN_103324284(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_88 [40];
  
  lVar11 = param_3[1];
  lVar10 = *param_3;
  lVar13 = param_3[3];
  lVar12 = param_3[2];
  lVar1 = param_3[4];
  lVar2 = 0;
  plVar5 = param_3;
  FUN_103332bd4();
  lVar3 = *(long *)((long)param_2 + (long)*(int *)(lVar2 + 0x34));
  if (lVar3 == 0) {
LAB_10332430c:
    lVar7 = *param_2;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    if (lVar7 == 0) {
      lVar3 = 0;
      plVar8 = (long *)0xe000000000000000;
      plVar9 = plVar5;
      goto LAB_103324344;
    }
  }
  else {
    func_0x000107c4b260();
    func_0x000107c61180();
    if (lVar3 == 0) goto LAB_10332430c;
    lVar7 = lVar3;
    func_0x000107c4f5f8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar7 == 0) goto LAB_10332430c;
  }
  lVar3 = lVar7;
  func_0x000107c5faec();
  plVar9 = plVar5;
  func_0x000107c61170(lVar7);
  plVar8 = plVar5;
LAB_103324344:
  lVar7 = *(long *)((long)param_2 + (long)*(int *)(lVar2 + 0x2c));
  lVar2 = lVar7;
  func_0x000107c61174(lVar7);
  FUN_103332ab0();
  if (((uint)plVar9 & 0xff) == 1) {
    puVar6 = (undefined *)0x0;
    plVar9 = (long *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b10c8;
    func_0x000107c61168();
    func_0x000107c5ab20((double)lVar2);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
  }
  func_0x000103325060(param_3,auStack_88);
  *param_1 = lVar3;
  param_1[1] = (long)plVar8;
  param_1[2] = lVar7;
  param_1[3] = (long)puVar6;
  param_1[4] = (long)plVar9;
  param_1[8] = lVar13;
  param_1[7] = lVar12;
  param_1[6] = lVar11;
  param_1[5] = lVar10;
  *(char *)(param_1 + 9) = (char)lVar1;
  return;
}



/* Entry: 1033243f0; end: 10332446b;  */

void FUN_1033243f0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  lVar2 = 0x112f59e58;
  func_0x0001000285a8(0x112f59e58,&UNK_10dbb1e70);
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar2 + 0x30));
  uStack_48 = puVar1[1];
  uStack_50 = *puVar1;
  uStack_38 = puVar1[3];
  uStack_40 = puVar1[2];
  uStack_30 = *(undefined1 *)(puVar1 + 4);
  FUN_103324284(&uStack_a0,param_2,&uStack_50);
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = CONCAT71(uStack_67,uStack_68);
  param_1[6] = uStack_70;
  *(undefined8 *)((long)param_1 + 0x41) = uStack_5f;
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_60,uStack_67);
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  return;
}



/* Entry: 10332446c; end: 1033245a7;  */

void FUN_10332446c(ulong *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar2 = 0;
  FUN_103332bd4();
  uVar3 = *(ulong *)(param_2 + *(int *)(lVar2 + 0x34));
  if (uVar3 != 0) {
    func_0x000107c4b00c();
    func_0x000107c61180();
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c42120();
      func_0x000107c61180();
      if (uVar4 == 0) {
        func_0x000107c61170(uVar3);
      }
      else {
        uVar5 = uVar4;
        func_0x000107c5faec();
        func_0x000107c61170(uVar4);
        uVar4 = uVar5 & 0xffffffffffff;
        if ((param_3 & 0x2000000000000000) != 0) {
          uVar4 = param_3 >> 0x38 & 0xf;
        }
        if (uVar4 != 0) {
          uVar7 = *(ulong *)(param_2 + *(int *)(lVar2 + 0x30));
          func_0x000107c61174(uVar7);
          uVar4 = uVar3;
          func_0x000107c4a10c();
          uVar6 = uVar3;
          func_0x000107c49ad8(uVar3);
          func_0x000108f471cc(uVar4,uVar6);
          func_0x000108f47214();
          func_0x000108f470a4();
          func_0x000107c61180();
          bVar1 = 0;
          func_0x000103331428(0xe,*(undefined8 *)(param_2 + *(int *)(lVar2 + 0x40)));
          func_0x000107c61170(uVar3);
          *param_1 = uVar5;
          param_1[1] = param_3;
          param_1[2] = uVar7;
          param_1[3] = uVar4;
          *(byte *)(param_1 + 4) = bVar1 & 1;
          return;
        }
        func_0x000107c61170(uVar3);
        func_0x000107c6142c(param_3);
      }
    }
  }
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1033245a8; end: 103324617;  */

void FUN_1033245a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f59e18 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f59e10;
  func_0x00010002969c(0x112f59e10,&UNK_10dbb1e40);
  uVar2 = uVar1;
  FUN_103324618();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112f59e18 = puVar3;
  return;
}



/* Entry: 103324618; end: 103324697;  */

void FUN_103324618(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f59e20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb1eb8;
  func_0x000107c61520(&UNK_10dbb1eb8,&UNK_11063ee38);
  puRam0000000112f59e20 = puVar1;
  return;
}



/* Entry: 103324698; end: 103324933;  */

long FUN_103324698(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  lVar1 = 0x112f59e30;
  func_0x0001000285a8(0x112f59e30,&UNK_10dbb1e48);
  FUN_103324f4c(0x112f59e30,&UNK_10dbb1e48,0x112f59e60,&UNK_10dbb1e78);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 5;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  lVar2 = lVar1;
  func_0x000103dbf46c();
  pcVar3 = FUN_1033236b4;
  func_0x0001000bfde0(FUN_1033236b4,0,&UNK_11063eec0);
  func_0x000107c61574(lVar2);
  FUN_10332377c();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar3);
  pcVar3 = FUN_103324934;
  func_0x0001000bfde0(FUN_103324934,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(lVar2);
  puVar4 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(pcVar3);
  uVar5 = 0x103324948;
  func_0x0001000c0ebc(0x103324948,0);
  func_0x000107c61574(puVar4);
  uVar8 = 0x103324950;
  func_0x0001000bfde0(0x103324950,0,&UNK_11063f100);
  func_0x000107c61574(uVar5);
  *(undefined8 *)(lVar1 + 0x20) = uVar8;
  func_0x000103dbf46c();
  uVar6 = uVar5;
  func_0x000103dbf46c();
  uVar8 = 0x112f59e10;
  func_0x0001000285a8(0x112f59e10,&UNK_10dbb1e40);
  pcVar3 = FUN_10332446c;
  func_0x0001000bfde0(FUN_10332446c,0,uVar8);
  func_0x000107c61574(uVar6);
  FUN_1033245a8();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar3);
  uVar8 = uVar6;
  func_0x0001006c733c(uVar6);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  uVar5 = 0x112f4bf68;
  func_0x0001000285a8(0x112f4bf68,&UNK_10db9c080);
  pcVar3 = FUN_10332495c;
  func_0x0001000d5158(FUN_10332495c,0,uVar5);
  func_0x000107c61574(uVar8);
  pcVar7 = FUN_1033249f4;
  func_0x00010487de38(FUN_1033249f4,0);
  func_0x000107c61574(pcVar3);
  uVar8 = 1;
  func_0x00010488010c(1);
  func_0x000107c61574(pcVar7);
  uVar5 = 0x103324a0c;
  func_0x0001000bfde0(0x103324a0c,0,&UNK_11063f100);
  func_0x000107c61574(uVar8);
  *(undefined8 *)(lVar1 + 0x28) = uVar5;
  lVar2 = lVar1;
  func_0x0001000c19f0(lVar1);
  func_0x000107c61574(lVar1);
  return lVar2;
}



/* Entry: 103324934; end: 10332495b;  */

void FUN_103324934(undefined8 param_1,char *param_2)

{
  *(bool *)param_1 = *param_2 == '\x02';
  return;
}



/* Entry: 10332495c; end: 1033249f3;  */

void FUN_10332495c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = 0x112f59e58;
  func_0x0001000285a8(0x112f59e58,&UNK_10dbb1e70);
  puVar1 = (ulong *)(param_2 + *(int *)(lVar2 + 0x30));
  uVar4 = puVar1[1];
  lVar2 = 0;
  FUN_103332bd4();
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  if (*(char *)(param_2 + *(int *)(lVar2 + 0x38)) == '\x01' && uVar4 != 0) {
    uVar5 = *puVar1;
    uVar6 = (ulong)*(byte *)(param_2 + *(int *)(lVar2 + 0x44));
    func_0x000107c61434(uVar4);
    uVar3 = uVar4;
  }
  *param_1 = uVar6;
  param_1[1] = uVar5;
  param_1[2] = uVar3;
  return;
}



/* Entry: 1033249f4; end: 103324a47;  */

byte FUN_1033249f4(byte *param_1,byte *param_2)

{
  return (*param_1 ^ *param_2 ^ 0xff) & 1;
}



/* Entry: 103324a48; end: 103324b27;  */

undefined8 FUN_103324a48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  func_0x000103dbf46c();
  uVar1 = param_1;
  func_0x000103dbf46c();
  uVar2 = 0x112f59e10;
  func_0x0001000285a8(0x112f59e10,&UNK_10dbb1e40);
  pcVar3 = FUN_10332446c;
  func_0x0001000bfde0(FUN_10332446c,0,uVar2);
  func_0x000107c61574(uVar1);
  FUN_1033245a8();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar3);
  uVar2 = uVar1;
  func_0x0001006c733c(uVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61574(uVar1);
  pcVar3 = FUN_1033243f0;
  func_0x0001000bfde0(FUN_1033243f0,0,&UNK_11063edb0);
  func_0x000107c61574(uVar2);
  func_0x000103324658();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar3);
  return uVar2;
}



/* Entry: 103324b28; end: 103324b3f;  */

undefined * FUN_103324b28(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  pcVar1 = FUN_1033237bc;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_1033237bc,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(param_1);
  puVar2 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(pcVar1);
  return puVar2;
}



/* Entry: 103324b40; end: 103324c1b;  */

undefined * FUN_103324b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000103dbf46c();
  func_0x0001000bfde0(param_3,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(param_1);
  puVar1 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(param_3);
  return puVar1;
}



/* Entry: 103324c1c; end: 103324c37;  */

undefined8 FUN_103324c1c(undefined8 param_1)

{
  code *pcVar1;
  
  pcVar1 = FUN_103323b58;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_103323b58,0,&UNK_11063efe0);
  func_0x000107c61574(param_1);
  FUN_103323c68();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar1);
  return param_1;
}



/* Entry: 103324c38; end: 103324ca7;  */

undefined8
FUN_103324c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             code *param_5)

{
  func_0x000103dbf46c();
  func_0x0001000bfde0(param_3,0,param_4);
  func_0x000107c61574(param_1);
  (*param_5)();
  func_0x0001000c2068();
  func_0x000107c61574(param_3);
  return param_1;
}



/* Entry: 103324ca8; end: 103324ccb;  */

code * FUN_103324ca8(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pcVar2 = FUN_103323ca8;
  func_0x000103dbf46c();
  uVar1 = 0x112f59de0;
  func_0x0001000285a8(0x112f59de0,&UNK_10dbb1e28);
  func_0x0001000bfde0(FUN_103323ca8,0,uVar1);
  func_0x000107c61574(param_1);
  uVar1 = 0x112f59de8;
  func_0x0001000285a8(0x112f59de8,&UNK_10dbb1e30);
  uVar3 = 0x112f59df0;
  func_0x0001000285a8(0x112f59df0,&UNK_10dbb1e38);
  uVar4 = uVar3;
  FUN_103323dcc();
  uVar5 = uVar4;
  func_0x000103323e7c();
  uVar6 = uVar1;
  func_0x00010487deac(uVar1,uVar3,uVar4,uVar5);
  func_0x000107c61574(pcVar2);
  pcVar2 = FUN_103324254;
  func_0x0001000bfde0(FUN_103324254,0,uVar1);
  func_0x000107c61574(uVar6);
  return pcVar2;
}



/* Entry: 103324ccc; end: 103324daf;  */

code * FUN_103324ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  func_0x000103dbf46c();
  uVar1 = 0x112f59de0;
  func_0x0001000285a8(0x112f59de0,&UNK_10dbb1e28);
  func_0x0001000bfde0(param_3,0,uVar1);
  func_0x000107c61574(param_1);
  uVar1 = 0x112f59de8;
  func_0x0001000285a8(0x112f59de8,&UNK_10dbb1e30);
  uVar2 = 0x112f59df0;
  func_0x0001000285a8(0x112f59df0,&UNK_10dbb1e38);
  uVar3 = uVar2;
  FUN_103323dcc();
  uVar4 = uVar3;
  func_0x000103323e7c();
  uVar5 = uVar1;
  func_0x00010487deac(uVar1,uVar2,uVar3,uVar4);
  func_0x000107c61574(param_3);
  pcVar6 = FUN_103324254;
  func_0x0001000bfde0(FUN_103324254,0,uVar1);
  func_0x000107c61574(uVar5);
  return pcVar6;
}



/* Entry: 103324db0; end: 103324dcf;  */

void FUN_103324db0(void)

{
  FUN_103324698();
  return;
}



/* Entry: 103324dd0; end: 103324e67;  */

undefined * FUN_103324dd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000103dbf46c();
  puVar2 = &UNK_11063ed28;
  func_0x000107c613fc(&UNK_11063ed28,0x11,7);
  puVar2[0x10] = (char)param_1;
  uVar3 = 0x103325298;
  func_0x0001000bfde0(0x103325298,puVar2,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar2);
  puVar2 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(uVar3);
  return puVar2;
}



/* Entry: 103324e68; end: 103324e8b;  */

void FUN_103324e68(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f59e48;
  plVar5 = (long *)&UNK_10dbbeca0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103325020(0,0x112ea2a98,&PTR_PTR_1126ccd78);
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



/* Entry: 103324e8c; end: 103324f03;  */

void FUN_103324e8c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103325020(0,param_1,param_2);
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



/* Entry: 103324f04; end: 103324f4b;  */

/* WARNING: Possible PIC construction at 0x000103324f8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103324f90) */
/* WARNING: Removing unreachable block (ram,0x000103324f94) */

void FUN_103324f04(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = (ulong *)0x112f59ed0;
  plVar5 = (long *)&UNK_10dbb1e88;
  if (iVar2 != 0) {
    unaff_x30 = 0x103324f90;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = (ulong *)0x112ea3738;
    plVar5 = (long *)&UNK_10dab5ea0;
    unaff_x19 = (long *)&UNK_10dbb1e88;
    unaff_x20 = (ulong *)0x112f59ed0;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 103324f4c; end: 103324fbf;  */

/* WARNING: Possible PIC construction at 0x000103324f8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103324f90) */
/* WARNING: Removing unreachable block (ram,0x000103324f94) */

void FUN_103324f4c(ulong *param_1,long *param_2,ulong *param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = param_3;
  plVar5 = param_4;
  if (iVar2 != 0) {
    unaff_x30 = 0x103324f90;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = param_1;
    plVar5 = param_2;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    uVar4 = (long)plVar5 + (long)(int)*plVar5;
    func_0x000107c61518(uVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = uVar4;
  }
  return;
}



/* Entry: 103324fc0; end: 103324fd3;  */

void FUN_103324fc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f59e50 == (undefined *)0x0 || ((ulong)puRam0000000112f59e50 & 1) != 0) {
    puVar1 = &UNK_10e986d1e;
    func_0x000107c61518(&UNK_10e986d1e,0x1a,0,0);
    puRam0000000112f59e50 = puVar1;
  }
  return;
}



/* Entry: 103324fd4; end: 10332501f;  */

void FUN_103324fd4(byte *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_103332bd4();
  func_0x000103331424(bVar1,*(undefined8 *)(param_2 + *(int *)(lVar2 + 0x50)));
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 103325020; end: 1033250af;  */

void FUN_103325020(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1033250b0; end: 103325283;  */

undefined * FUN_1033250b0(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar7;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(byte *)(param_1 + 2) - 1 < 2) {
    lVar3 = 0x112f59e68;
    func_0x0001000285a8(0x112f59e68,&UNK_10dbb3230);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 4;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    lVar4 = 0;
    FUN_103332bd4();
    uVar5 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x30));
    *(ulong *)(lVar3 + 0x20) = (ulong)*(byte *)((long)param_1 + (long)*(int *)(lVar4 + 0x44));
    *(undefined8 *)(lVar3 + 0x28) = uVar5;
    *(undefined8 *)(lVar3 + 0x38) = 4;
    *(undefined8 *)(lVar3 + 0x30) = 0x8000000000000000;
    func_0x000107c61174();
    FUN_103342c98(lVar3);
  }
  lVar3 = 0x112f59e68;
  func_0x0001000285a8(0x112f59e68,&UNK_10dbb3230);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 10;
  *(undefined8 *)(lVar3 + 0x10) = 5;
  lVar4 = *param_1;
  func_0x000107c3df58();
  func_0x000107c61180();
  if (lVar4 == 0) {
    uVar9 = 0x6000000000000001;
  }
  else {
    lVar6 = lVar4;
    puVar8 = PTR___sSSN_11034da80;
    func_0x000107c5fe10();
    func_0x000107c61170(lVar4);
    puVar7 = PTR_PTR_1133c9310;
    func_0x000107c5faec();
    uVar2 = (uint)puVar7;
    func_0x0001000f66f0();
    func_0x000107c6142c(puVar8);
    func_0x000107c6142c(lVar6);
    uVar9 = (ulong)~uVar2 & 1 | 0x6000000000000000;
  }
  *(ulong *)(lVar3 + 0x20) = uVar9;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  lVar4 = 0;
  FUN_103332bd4();
  *(ulong *)(lVar3 + 0x30) =
       (ulong)*(byte *)((long)param_1 + (long)*(int *)(lVar4 + 0x4c)) | 0x4000000000000000;
  *(undefined8 *)(lVar3 + 0x40) = 0x8000000000000000;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0x8000000000000001;
  *(undefined8 *)(lVar3 + 0x48) = 1;
  *(undefined8 *)(lVar3 + 0x60) = 0x8000000000000001;
  *(undefined8 *)(lVar3 + 0x58) = 1;
  *(undefined8 *)(lVar3 + 0x68) = 2;
  func_0x000107c61434(puVar1);
  FUN_103342c98(lVar3);
  func_0x000107c6142c(puVar1);
  return puVar1;
}



/* Entry: 103325284; end: 10332529b;  */

void FUN_103325284(ulong param_1,undefined8 param_2)

{
  if (param_1 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10332529c; end: 10332533b;  */

uint FUN_10332529c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_80 = param_1[6];
  uStack_78 = (undefined1)param_1[7];
  uStack_6f = *(undefined8 *)((long)param_1 + 0x41);
  uStack_77 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_30 = param_2[6];
  uStack_28 = (undefined1)param_2[7];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x41);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_103325ab8(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10332533c; end: 103325377;  */

byte FUN_10332533c(char *param_1,char *param_2)

{
  return ((*param_1 != *param_2 | param_1[1] ^ param_2[1] | param_2[2] ^ param_1[2]) ^ 0xffU) & 1;
}



/* Entry: 103325378; end: 103325457;  */

byte FUN_103325378(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_2[2];
  if ((uVar3 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar3 & 1) == 0))
  {
    return 0;
  }
  return (byte)uVar1 ^ (byte)uVar2 ^ 1;
}



/* Entry: 103325458; end: 1033255e7;  */

void FUN_103325458(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar1 = (uint)(param_2 >> 0x20);
  uVar4 = uVar1 >> 0x1d;
  if (uVar1 >> 0x1d < 2) {
    if (uVar4 == 0) {
      func_0x000107c60690(6);
      func_0x000107c60694((uint)param_2 & 1);
      if (param_3 == 0) {
        func_0x000107c60694(0);
        return;
      }
      func_0x000107c60694(1);
      uVar3 = param_3;
      func_0x000107c61174(param_3);
      func_0x000107c6011c(param_1,uVar3);
      if (param_2 >> 0x3d != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
    uVar2 = 7;
  }
  else if (uVar4 == 2) {
    uVar2 = 10;
  }
  else {
    if (uVar4 != 3) {
      if ((long)(2 - (param_3 + (param_2 >= 0x8000000000000000))) < 0 ==
          (SCARRY8(~param_3,2) != SCARRY8(~param_3 + 2,(ulong)(param_2 < 0x8000000000000000)))) {
        if ((long)(1 - (param_3 + (param_2 >= 0x8000000000000000))) < 0 ==
            (SCARRY8(~param_3,1) != SCARRY8(~param_3 + 1,(ulong)(param_2 < 0x8000000000000000)))) {
          if (param_2 == 0x8000000000000000 && param_3 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
        }
        else if (param_3 == 1 && param_2 == 0x8000000000000000) {
          uVar2 = 2;
        }
        else {
          uVar2 = 3;
        }
      }
      else if ((long)(3 - (param_3 + (param_2 >= 0x8000000000000000))) < 0 ==
               (SCARRY8(~param_3,3) != SCARRY8(~param_3 + 3,(ulong)(param_2 < 0x8000000000000000))))
      {
        if (param_3 == 2 && param_2 == 0x8000000000000000) {
          uVar2 = 4;
        }
        else {
          uVar2 = 5;
        }
      }
      else if (param_3 == 3 && param_2 == 0x8000000000000000) {
        uVar2 = 8;
      }
      else if (param_3 == 3 && param_2 == 0x8000000000000001) {
        uVar2 = 9;
      }
      else {
        uVar2 = 0xc;
      }
      func_0x000107c60690(uVar2);
      return;
    }
    uVar2 = 0xb;
  }
  func_0x000107c60690(uVar2);
  func_0x000107c60694((uint)param_2 & 1);
  return;
}



/* Entry: 1033255e8; end: 10332562f;  */

void FUN_1033255e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  FUN_103325458(auStack_68,uVar1,uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103325630; end: 103325637;  */

void FUN_103325630(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar3 >> 0x1d;
  if (uVar3 >> 0x1d < 2) {
    if (uVar6 == 0) {
      func_0x000107c60690(6);
      func_0x000107c60694((uint)uVar1 & 1);
      if (uVar2 == 0) {
        func_0x000107c60694(0);
        return;
      }
      func_0x000107c60694(1);
      uVar5 = uVar2;
      func_0x000107c61174(uVar2);
      func_0x000107c6011c(param_1,uVar5);
      if (uVar1 >> 0x3d != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
    uVar4 = 7;
  }
  else if (uVar6 == 2) {
    uVar4 = 10;
  }
  else {
    if (uVar6 != 3) {
      if ((long)(2 - (uVar2 + (uVar1 >= 0x8000000000000000))) < 0 ==
          (SCARRY8(~uVar2,2) != SCARRY8(~uVar2 + 2,(ulong)(uVar1 < 0x8000000000000000)))) {
        if ((long)(1 - (uVar2 + (uVar1 >= 0x8000000000000000))) < 0 ==
            (SCARRY8(~uVar2,1) != SCARRY8(~uVar2 + 1,(ulong)(uVar1 < 0x8000000000000000)))) {
          if (uVar1 == 0x8000000000000000 && uVar2 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
        else if (uVar2 == 1 && uVar1 == 0x8000000000000000) {
          uVar4 = 2;
        }
        else {
          uVar4 = 3;
        }
      }
      else if ((long)(3 - (uVar2 + (uVar1 >= 0x8000000000000000))) < 0 ==
               (SCARRY8(~uVar2,3) != SCARRY8(~uVar2 + 3,(ulong)(uVar1 < 0x8000000000000000)))) {
        if (uVar2 == 2 && uVar1 == 0x8000000000000000) {
          uVar4 = 4;
        }
        else {
          uVar4 = 5;
        }
      }
      else if (uVar2 == 3 && uVar1 == 0x8000000000000000) {
        uVar4 = 8;
      }
      else if (uVar2 == 3 && uVar1 == 0x8000000000000001) {
        uVar4 = 9;
      }
      else {
        uVar4 = 0xc;
      }
      func_0x000107c60690(uVar4);
      return;
    }
    uVar4 = 0xb;
  }
  func_0x000107c60690(uVar4);
  func_0x000107c60694((uint)uVar1 & 1);
  return;
}



/* Entry: 103325638; end: 10332567b;  */

void FUN_103325638(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68);
  FUN_103325458(auStack_68,uVar1,uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10332567c; end: 1033256e3;  */

uint FUN_10332567c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar7 >> 0x1d;
  if (uVar7 >> 0x1d < 2) {
    if (uVar6 == 0) {
      if ((uVar2 >> 0x3d == 0) && ((((uint)uVar2 ^ (uint)uVar1) & 1) == 0)) {
        if (uVar3 == 0) goto LAB_1033258f8;
        if (uVar4 != 0) {
          func_0x000100de1f70(0);
          func_0x00010332658c(uVar2,uVar4);
          func_0x00010332658c(uVar1,uVar3);
          uVar5 = uVar3;
          func_0x000107c60118(uVar3,uVar4);
          FUN_103325284(uVar2,uVar4);
          FUN_103325284(uVar1,uVar3);
          if ((uVar5 & 1) != 0) {
LAB_103325968:
            uVar7 = 1;
            goto LAB_103325974;
          }
        }
      }
    }
    else if (uVar2 >> 0x3d == 1) goto LAB_103325820;
  }
  else if (uVar6 == 2) {
    if (uVar2 >> 0x3d == 2) {
LAB_103325820:
      uVar7 = (uint)uVar2 ^ (uint)uVar1 ^ 1;
      goto LAB_103325974;
    }
  }
  else if (uVar6 == 3) {
    if (uVar2 >> 0x3d == 3) goto LAB_103325820;
  }
  else if ((long)(2 - (uVar3 + (uVar1 >= 0x8000000000000000))) < 0 ==
           (SCARRY8(~uVar3,2) != SCARRY8(~uVar3 + 2,(ulong)(uVar1 < 0x8000000000000000)))) {
    if ((long)(1 - (uVar3 + (uVar1 >= 0x8000000000000000))) < 0 ==
        (SCARRY8(~uVar3,1) != SCARRY8(~uVar3 + 1,(ulong)(uVar1 < 0x8000000000000000)))) {
      if (uVar1 == 0x8000000000000000 && uVar3 == 0) {
        if (((long)uVar2 < -0x6000000000000000) && (uVar2 == 0x8000000000000000)) {
LAB_1033258f8:
          if (uVar4 == 0) goto LAB_103325968;
        }
      }
      else if (((long)uVar2 < -0x6000000000000000) && (uVar2 == 0x8000000000000001))
      goto LAB_1033258f8;
    }
    else if (uVar3 == 1 && uVar1 == 0x8000000000000000) {
      if (((long)uVar2 < -0x6000000000000000) && (uVar2 == 0x8000000000000000)) {
LAB_103325918:
        if (uVar4 == 1) goto LAB_103325968;
      }
    }
    else if (((long)uVar2 < -0x6000000000000000) && (uVar2 == 0x8000000000000001))
    goto LAB_103325918;
  }
  else if ((long)(3 - (uVar3 + (uVar1 >= 0x8000000000000000))) < 0 ==
           (SCARRY8(~uVar3,3) != SCARRY8(~uVar3 + 3,(ulong)(uVar1 < 0x8000000000000000)))) {
    if (uVar3 == 2 && uVar1 == 0x8000000000000000) {
      if (((long)uVar2 < -0x6000000000000000) && (uVar2 == 0x8000000000000000)) {
LAB_103325960:
        if (uVar4 == 2) goto LAB_103325968;
      }
    }
    else if (((long)uVar2 < -0x6000000000000000) && (uVar2 == 0x8000000000000001))
    goto LAB_103325960;
  }
  else if (uVar3 == 3 && uVar1 == 0x8000000000000000) {
    if (((long)uVar2 < -0x6000000000000000) && (uVar2 == 0x8000000000000000)) {
LAB_1033258d4:
      if (uVar4 == 3) goto LAB_103325968;
    }
  }
  else if (uVar3 == 3 && uVar1 == 0x8000000000000001) {
    if (((long)uVar2 < -0x6000000000000000) && (uVar2 == 0x8000000000000001)) goto LAB_1033258d4;
  }
  else if ((((long)uVar2 < -0x6000000000000000) && (uVar2 == 0x8000000000000000)) && (uVar4 == 4))
  goto LAB_103325968;
  uVar7 = 0;
LAB_103325974:
  return uVar7 & 1;
}



/* Entry: 1033256e4; end: 103325ab7;  */

uint FUN_1033256e4(ulong param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar4 = (uint)(param_1 >> 0x20);
  uVar3 = uVar4 >> 0x1d;
  if (uVar4 >> 0x1d < 2) {
    if (uVar3 == 0) {
      if ((uVar2 >> 0x1d == 0) && ((((uint)param_3 ^ (uint)param_1) & 1) == 0)) {
        if (param_2 == 0) goto LAB_1033258f8;
        if (param_4 != 0) {
          func_0x000100de1f70(0);
          func_0x00010332658c(param_3,param_4);
          func_0x00010332658c(param_1,param_2);
          uVar1 = param_2;
          func_0x000107c60118(param_2,param_4);
          FUN_103325284(param_3,param_4);
          FUN_103325284(param_1,param_2);
          if ((uVar1 & 1) != 0) {
LAB_103325968:
            uVar4 = 1;
            goto LAB_103325974;
          }
        }
      }
    }
    else if (uVar2 >> 0x1d == 1) goto LAB_103325820;
  }
  else if (uVar3 == 2) {
    if (uVar2 >> 0x1d == 2) {
LAB_103325820:
      uVar4 = (uint)param_3 ^ (uint)param_1 ^ 1;
      goto LAB_103325974;
    }
  }
  else if (uVar3 == 3) {
    if (uVar2 >> 0x1d == 3) goto LAB_103325820;
  }
  else if ((long)(2 - (param_2 + (param_1 >= 0x8000000000000000))) < 0 ==
           (SCARRY8(~param_2,2) != SCARRY8(~param_2 + 2,(ulong)(param_1 < 0x8000000000000000)))) {
    if ((long)(1 - (param_2 + (param_1 >= 0x8000000000000000))) < 0 ==
        (SCARRY8(~param_2,1) != SCARRY8(~param_2 + 1,(ulong)(param_1 < 0x8000000000000000)))) {
      if (param_1 == 0x8000000000000000 && param_2 == 0) {
        if ((param_3 < -0x6000000000000000) && (param_3 == -0x8000000000000000)) {
LAB_1033258f8:
          if (param_4 == 0) goto LAB_103325968;
        }
      }
      else if ((param_3 < -0x6000000000000000) && (param_3 == -0x7fffffffffffffff))
      goto LAB_1033258f8;
    }
    else if (param_2 == 1 && param_1 == 0x8000000000000000) {
      if ((param_3 < -0x6000000000000000) && (param_3 == -0x8000000000000000)) {
LAB_103325918:
        if (param_4 == 1) goto LAB_103325968;
      }
    }
    else if ((param_3 < -0x6000000000000000) && (param_3 == -0x7fffffffffffffff))
    goto LAB_103325918;
  }
  else if ((long)(3 - (param_2 + (param_1 >= 0x8000000000000000))) < 0 ==
           (SCARRY8(~param_2,3) != SCARRY8(~param_2 + 3,(ulong)(param_1 < 0x8000000000000000)))) {
    if (param_2 == 2 && param_1 == 0x8000000000000000) {
      if ((param_3 < -0x6000000000000000) && (param_3 == -0x8000000000000000)) {
LAB_103325960:
        if (param_4 == 2) goto LAB_103325968;
      }
    }
    else if ((param_3 < -0x6000000000000000) && (param_3 == -0x7fffffffffffffff))
    goto LAB_103325960;
  }
  else if (param_2 == 3 && param_1 == 0x8000000000000000) {
    if ((param_3 < -0x6000000000000000) && (param_3 == -0x8000000000000000)) {
LAB_1033258d4:
      if (param_4 == 3) goto LAB_103325968;
    }
  }
  else if (param_2 == 3 && param_1 == 0x8000000000000001) {
    if ((param_3 < -0x6000000000000000) && (param_3 == -0x7fffffffffffffff)) goto LAB_1033258d4;
  }
  else if (((param_3 < -0x6000000000000000) && (param_3 == -0x8000000000000000)) && (param_4 == 4))
  goto LAB_103325968;
  uVar4 = 0;
LAB_103325974:
  return uVar4 & 1;
}



/* Entry: 103325ab8; end: 103325ce3;  */

undefined8 FUN_103325ab8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  byte bStack_68;
  
  uVar9 = 0;
  uVar7 = *param_1;
  if ((uVar7 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar7 & 1) == 0))
  {
    return 0;
  }
  uVar10 = param_1[2];
  uVar7 = param_2[2];
  if (uVar10 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    func_0x000100de1f70(0);
    func_0x000107c61174(uVar7);
    func_0x000107c61174();
    uVar8 = uVar10;
    func_0x000107c60118();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar7);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  uVar7 = param_2[4];
  if (param_1[4] == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    uVar10 = param_1[3];
    if (((uVar10 != param_2[3]) || (param_1[4] != uVar7)) &&
       (func_0x000107c605b8(), (uVar10 & 1) == 0)) {
      return 0;
    }
  }
  uVar7 = param_1[5];
  uVar1 = param_1[6];
  uVar10 = param_1[7];
  uVar2 = param_1[8];
  bVar5 = (byte)param_1[9];
  uStack_88 = param_2[5];
  uVar3 = param_2[6];
  uVar8 = param_2[7];
  uVar4 = param_2[8];
  bVar6 = (byte)param_2[9];
  if (uVar1 == 0) {
    if (uVar3 == 0) {
      return 1;
    }
  }
  else if (uVar3 != 0) {
    bStack_68 = bVar6 & 1;
    bStack_90 = bVar5 & 1;
    uStack_b0 = uVar7;
    uStack_a8 = uVar1;
    uStack_a0 = uVar10;
    uStack_98 = uVar2;
    uStack_80 = uVar3;
    uStack_78 = uVar8;
    uStack_70 = uVar4;
    FUN_103326a74(uStack_88,uVar3,uVar8,uVar4,bVar6);
    FUN_103326a74(uVar7,uVar1,uVar10,uVar2,bVar5);
    func_0x00010332598c(&uStack_b0,&uStack_88);
    func_0x000107c6142c(uVar3);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar4);
    func_0x000103326ab0(uVar7,uVar1,uVar10,uVar2,bVar5);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  FUN_103326a74(uStack_88,uVar3,uVar8,uVar4,bVar6);
  FUN_103326a74(uVar7,uVar1,uVar10,uVar2,bVar5);
  func_0x000103326ab0(uVar7,uVar1,uVar10,uVar2,bVar5);
  func_0x000103326ab0(uStack_88,uVar3,uVar8,uVar4,bVar6);
  return 0;
}



/* Entry: 103325ce4; end: 103325ceb;  */

void FUN_103325ce4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f59dd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb1f70;
  func_0x000107c61520(&UNK_10dbb1f70,&UNK_11063efe0);
  puRam0000000112f59dd8 = puVar1;
  return;
}


