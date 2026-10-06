/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101eba0c0; end: 101eba11f; -[_TtC38NativeNotificationHandlingServicesImpl30NativeNotificationPlatformData init] */

void FUN_101eba0c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NativeNotificationHandlingServicesImpl.NativeNotificationPlatformData",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eba0ec);
  (*pcVar1)();
}



/* Entry: 101eba120; end: 101eba12f; -[_TtC38NativeNotificationHandlingServicesImpl30NativeNotificationPlatformData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eba120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e38798));
  return;
}



/* Entry: 101eba130; end: 101eba14f;  */

void FUN_101eba130(void)

{
  func_0x000107c61168(&PTR_PTR_1128081a8);
  return;
}



/* Entry: 101eba150; end: 101eba1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eba150(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*(undefined8 *)(param_2 + _DAT_113092298);
  func_0x0001008fe838();
  *param_1 = uVar1;
  return;
}



/* Entry: 101eba1b8; end: 101eba2db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101eba1b8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  byte bStack_49;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    if (*(code **)(param_1 + _DAT_113091cb8) != (code *)0x0) {
      (**(code **)(param_1 + _DAT_113091cb8))(1);
    }
  }
  else {
    uVar1 = *(ulong *)(param_1 + _DAT_113091ca0);
    if ((uVar1 != 0) && (FUN_101ebb274(), (uVar1 & 1) == 0)) {
      uVar3 = *(undefined8 *)(param_2 + 0x58);
      func_0x000107c6157c(uVar3);
      func_0x0001000d224c(&bStack_49);
      func_0x000107c61574(uVar3);
      if (((bStack_49 & 1) != 0) || (*(long *)(param_1 + _DAT_113091ca8) != 1)) {
LAB_101eba2cc:
        func_0x000107c61574(param_2);
        return 1;
      }
      lVar2 = *(long *)(param_2 + 0x10);
      func_0x000107c3dfc0();
      if (lVar2 == 0) goto LAB_101eba2cc;
    }
    if (*(code **)(param_1 + _DAT_113091cb8) != (code *)0x0) {
      (**(code **)(param_1 + _DAT_113091cb8))(1);
    }
    func_0x000107c61574(param_2);
  }
  return 0;
}



/* Entry: 101eba2dc; end: 101eba707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eba2dc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined auStack_78 [24];
  
  puVar4 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar4,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar7 = *(long *)(param_2 + 0x28);
    if (lVar7 != 0) {
      lVar8 = *(long *)(param_1 + _DAT_113091ca0);
      if (lVar8 == 0) {
        func_0x000107c615f0(lVar7);
        lVar8 = 0;
      }
      else {
        func_0x000107c615f0(lVar7);
        puVar4 = PTR___ss11AnyHashableVN_11034e448;
        func_0x000107c5f9dc(lVar8,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                            PTR___ss11AnyHashableVSHsWP_11034e450);
      }
      puVar10 = PTR_PTR_1126b1370;
      func_0x000107c610f8();
      func_0x000107c47b2c();
      func_0x000107c61170(lVar8);
      if (puVar10 != (undefined *)0x0) {
        puVar3 = puVar10;
        func_0x000107c61174();
        puVar12 = puVar3;
        func_0x000107c4f6dc();
        if (puVar12 != (undefined *)0x0) {
          puVar10 = puVar3;
          func_0x000107c4d7e4();
          func_0x000107c61180();
          if (puVar10 == (undefined *)0x0) {
            puVar12 = (undefined *)0x0;
            puVar10 = (undefined *)0x0;
            puVar9 = puVar4;
          }
          else {
            puVar12 = puVar10;
            func_0x000107c5faec();
            puVar9 = puVar4;
            func_0x000107c61170(puVar10);
            puVar10 = puVar4;
          }
          puVar4 = PTR_PTR_1126b1370;
          func_0x000107c61168();
          func_0x000107c4f6dc(puVar3);
          puVar11 = puVar4;
          func_0x000107c5c1c4();
          func_0x000107c61180();
          if (puVar11 == (undefined *)0x0) {
            puVar13 = (undefined *)0x0;
            puVar11 = (undefined *)0x0;
            puVar6 = puVar9;
          }
          else {
            puVar13 = puVar11;
            func_0x000107c5faec();
            puVar6 = puVar9;
            func_0x000107c61170(puVar11);
            puVar11 = puVar9;
          }
          lVar8 = *(long *)(param_2 + 0x30);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar8 == 0) {
            func_0x000107c6142c(puVar11);
          }
          else if (puVar10 == (undefined *)0x0) {
            func_0x000107c615e8();
            puVar10 = puVar11;
          }
          else if (puVar11 == (undefined *)0x0) {
            func_0x000107c615e8();
          }
          else {
            func_0x000107c5fadc(puVar12,puVar10);
            puVar6 = puVar11;
            func_0x000107c5fadc(puVar13);
            func_0x000107c41c9c(lVar8);
            func_0x000107c615e8(lVar8);
            func_0x000107c61170(puVar12);
            func_0x000107c61170(puVar13);
            func_0x000107c6142c(puVar10);
            puVar10 = puVar11;
          }
          func_0x000107c6142c(puVar10);
          puVar10 = puVar3;
          func_0x000107c4d7e4();
          func_0x000107c61180();
          if (puVar10 == (undefined *)0x0) {
            puStack_b0 = (undefined *)0x0;
            puVar10 = (undefined *)0x0;
            puVar12 = puVar6;
          }
          else {
            puStack_b0 = puVar10;
            func_0x000107c5faec();
            puVar12 = puVar6;
            func_0x000107c61170(puVar10);
            puVar10 = puVar6;
          }
          func_0x000107c4f6dc(puVar3);
          func_0x000107c5c1c4();
          func_0x000107c61180();
          if (puVar4 == (undefined *)0x0) {
            puVar9 = (undefined *)0x0;
            puVar12 = (undefined *)0x0;
          }
          else {
            puVar9 = puVar4;
            func_0x000107c5faec();
            func_0x000107c61170(puVar4);
          }
          uVar1 = *(undefined8 *)(param_1 + _DAT_113091cb8);
          uVar2 = ((undefined8 *)(param_1 + _DAT_113091cb8))[1];
          puVar4 = &UNK_110495ea0;
          func_0x000107c613fc(&UNK_110495ea0,0x18,7);
          func_0x000107c61644(puVar4 + 0x10,param_2);
          puVar11 = &UNK_110495fe0;
          func_0x000107c613fc(&UNK_110495fe0,0x48,7);
          *(undefined **)(puVar11 + 0x10) = puVar4;
          *(undefined8 *)(puVar11 + 0x18) = uVar1;
          *(undefined8 *)(puVar11 + 0x20) = uVar2;
          *(undefined **)(puVar11 + 0x28) = puStack_b0;
          *(undefined **)(puVar11 + 0x30) = puVar10;
          *(undefined **)(puVar11 + 0x38) = puVar9;
          *(undefined **)(puVar11 + 0x40) = puVar12;
          uStack_88 = 0x101ebb6d0;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          pcStack_98 = FUN_101eba708;
          puStack_90 = &UNK_110495ff8;
          ppuVar5 = &puStack_a8;
          puStack_80 = puVar11;
          func_0x000107c60bc4(ppuVar5);
          puVar4 = puStack_80;
          func_0x000101eb8fc4(uVar1,uVar2);
          func_0x000107c6157c(puVar11);
          func_0x000107c61574(puVar4);
          func_0x000107c4d828(lVar7);
          func_0x000107c60bd0(ppuVar5);
          func_0x000107c61574(param_2);
          func_0x000107c615e8(lVar7);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar3);
          func_0x000107c61574(puVar11);
          return;
        }
        func_0x000107c61170(puVar3);
      }
      if (*(code **)(param_1 + _DAT_113091cb8) != (code *)0x0) {
        (**(code **)(param_1 + _DAT_113091cb8))(1);
      }
      func_0x000107c61574(param_2);
      func_0x000107c615e8(lVar7);
      func_0x000107c61170(puVar10);
      return;
    }
    func_0x000107c61574();
  }
  if (*(code **)(param_1 + _DAT_113091cb8) != (code *)0x0) {
    (**(code **)(param_1 + _DAT_113091cb8))(1);
  }
  return;
}



/* Entry: 101eba708; end: 101eba743;  */

void FUN_101eba708(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101eba744; end: 101eba77f;  */

uint FUN_101eba744(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4d790();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000106c34424();
  func_0x000107c61170(param_1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 101eba780; end: 101eba7d7;  */

uint FUN_101eba780(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_2;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  return (uint)uVar3 & 1;
}



/* Entry: 101eba7d8; end: 101ebabb3;  */

void FUN_101eba7d8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  puVar2 = param_1;
  func_0x000107c4d790();
  func_0x000107c61180();
  puVar11 = param_1;
  func_0x000107c3ff14();
  func_0x000107c61180();
  FUN_101ebabb4(puVar2);
  puVar3 = puVar2;
  func_0x000107c5b634();
  puVar4 = puVar2;
  func_0x000107c5b634();
  puVar5 = puVar4;
  func_0x000106c40150();
  if ((int)puVar5 == 0) {
    if (puVar3 == (undefined8 *)0x7 || puVar4 == (undefined8 *)0x8) goto LAB_101eba88c;
LAB_101eba898:
    uVar10 = *(undefined8 *)(param_2 + 0x58);
    func_0x000107c6157c(uVar10);
    func_0x0001000d224c(&puStack_98);
    func_0x000107c61574(uVar10);
    if (((byte)puStack_98 == 1) &&
       (puVar3 = puVar2, func_0x000107c5b634(), puVar3 == (undefined8 *)0x1)) {
      lVar6 = *(long *)(param_2 + 0x10);
      func_0x000107c3dfc0();
      if (lVar6 != 0) goto LAB_101eba8dc;
    }
    puVar3 = puVar2;
    func_0x000107c5b634();
    if (puVar3 == (undefined8 *)0x3) {
      uVar10 = *(undefined8 *)(param_2 + 0x50);
      func_0x000107c6157c(uVar10);
      func_0x0001000d224c(&puStack_98);
      func_0x000107c61574(uVar10);
      if (((byte)puStack_98 & 1) == 0) {
        lVar6 = *(long *)(param_2 + 0x48);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar6 != 0) {
          func_0x000107c4d450(param_1);
          func_0x000107c3cf6c(lVar6);
          func_0x000107c615e8(lVar6);
        }
      }
    }
    puVar3 = param_1;
    func_0x000107c506c8();
    if (2 < (long)puVar3 - 4U) {
      if (puVar3 == (undefined8 *)0x2) {
        func_0x000104851924();
        uVar10 = *puVar3;
        uVar1 = puVar3[1];
        func_0x000107c61434(uVar1);
        func_0x000107c5fadc(uVar10,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x000107c53290(puVar2);
        func_0x000107c61170(uVar10);
      }
      else if (puVar3 != (undefined8 *)0x1) {
        if (puVar11 != (undefined8 *)0x0) {
          func_0x000107c506c8();
          uVar10 = 0xe;
          if (param_1 != (undefined8 *)0x7) {
            uVar10 = 0;
          }
          uVar1 = 0xd;
          if (param_1 != (undefined8 *)0x3) {
            uVar1 = uVar10;
          }
          puVar3 = puVar2;
          func_0x000101ebb4d0(puVar2,uVar1);
          lVar6 = *(long *)(param_2 + 0x20);
          func_0x000107c61174();
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar6 != 0) {
            puVar7 = &UNK_110495ef0;
            func_0x000107c613fc(&UNK_110495ef0,0x18,7);
            *(undefined8 **)(puVar7 + 0x10) = puVar11;
            puVar8 = PTR_PTR_1126c0878;
            func_0x000107c610f8(PTR_PTR_1126c0878);
            pcStack_78 = FUN_101ebb6b4;
            puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_90 = 0x42000000;
            puStack_88 = &UNK_100288f10;
            puStack_80 = &UNK_110495f08;
            ppuVar9 = &puStack_98;
            puStack_70 = puVar7;
            func_0x000107c60bc4(ppuVar9);
            func_0x000107c61174(puVar11);
            func_0x000107c61174();
            func_0x000107c6157c(puVar7);
            func_0x000107c45ef0(0x403db33333333333,puVar8);
            func_0x000107c60bd0(ppuVar9);
            func_0x000107c61574(puStack_70);
            func_0x000107c5ba38(puVar8);
            func_0x000107c61574(puVar7);
            func_0x000107c61174(puVar8);
            func_0x000107c3d78c(lVar6);
            func_0x000107c61170(puVar3);
            func_0x000107c61574(param_2);
            func_0x000107c61170(puVar2);
            func_0x000107c61170(puVar11);
            func_0x000107c61170(puVar11);
            func_0x000107c61170(puVar11);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar8);
            func_0x000107c615e8(lVar6);
            return;
          }
          func_0x000107c3fee0(puVar11);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar11);
          goto LAB_101eba8ec;
        }
        goto LAB_101eba8f4;
      }
    }
    func_0x000101ebad3c(puVar2,puVar11);
    func_0x000107c61574(param_2);
    func_0x000107c61170(puVar2);
  }
  else {
    if (puVar3 == (undefined8 *)0x7 || puVar4 == (undefined8 *)0x8) {
LAB_101eba88c:
      func_0x000107c61170(puVar11);
      puVar11 = (undefined8 *)0x0;
      goto LAB_101eba898;
    }
LAB_101eba8dc:
    if (puVar11 != (undefined8 *)0x0) {
      func_0x000107c3fee0(puVar11);
LAB_101eba8ec:
      func_0x000107c61170(puVar11);
    }
LAB_101eba8f4:
    func_0x000107c61574(param_2);
    puVar11 = puVar2;
  }
  func_0x000107c61170(puVar11);
  return;
}



/* Entry: 101ebabb4; end: 101ebaee3;  */

void FUN_101ebabb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126b7a20;
  func_0x000107c61168();
  func_0x000107c4f2f0();
  func_0x000107c61180();
  func_0x000107c4f6e0();
  func_0x000107c61180();
  if (param_1 == 0) {
    param_2 = 0xe300000000000000;
    lVar5 = 0x6c696e;
  }
  else {
    lVar5 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c6142c(param_2);
  }
  else {
    uVar2 = 0x65707974;
    func_0x000107c5fadc(0x65707974,0xe400000000000000);
    func_0x000107c5fadc(lVar5,param_2);
    func_0x000107c6142c(param_2);
    puVar3 = puVar1;
    func_0x000107c5e508(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar5);
    uVar2 = 0x68746170;
    func_0x000107c5fadc(0x68746170,0xe400000000000000);
    uVar4 = 0x79636167656c;
    func_0x000107c5fadc(0x79636167656c,0xe600000000000000);
    puVar1 = puVar3;
    func_0x000107c5e508(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
  }
  func_0x0001000d224c(&uStack_48);
  func_0x000107c45314(uStack_48);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101ebaee4; end: 101ebaf2f;  */

void FUN_101ebaee4(long param_1,undefined8 param_2)

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



/* Entry: 101ebaf30; end: 101ebb0d3;  */

void FUN_101ebaf30(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    if (param_3 != (code *)0x0) {
      (*param_3)(param_1);
    }
  }
  else {
    lVar1 = *(long *)(param_2 + 0x30);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      if ((param_6 != 0) && (param_8 != 0)) {
        func_0x000107c5fadc(param_5,param_6);
        func_0x000107c5fadc(param_7,param_8);
        puVar2 = &UNK_110496030;
        func_0x000107c613fc(&UNK_110496030,0x28,7);
        *(code **)(puVar2 + 0x10) = param_3;
        *(undefined8 *)(puVar2 + 0x18) = param_4;
        *(undefined8 *)(puVar2 + 0x20) = param_1;
        pcStack_88 = FUN_101ebb6e4;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000b0c7c;
        puStack_90 = &UNK_110496048;
        ppuVar3 = &puStack_a8;
        puStack_80 = puVar2;
        func_0x000107c60bc4(ppuVar3);
        puVar2 = puStack_80;
        func_0x000101eb8fc4(param_3,param_4);
        func_0x000107c61574(puVar2);
        func_0x000107c41ab8(lVar1);
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c61574(param_2);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_7);
        return;
      }
      func_0x000107c615e8();
    }
    if (param_3 != (code *)0x0) {
      (*param_3)(param_1);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101ebb0d4; end: 101ebb1df;  */

void FUN_101ebb0d4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126b7a20;
  func_0x000107c61168();
  func_0x000107c5e9cc();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar3 = 0x65707974;
    func_0x000107c5fadc(0x65707974,0xe400000000000000);
    uVar4 = 0x6c696e;
    if (param_2 != 0) {
      uVar4 = param_1;
    }
    lVar1 = -0x1d00000000000000;
    if (param_2 != 0) {
      lVar1 = param_2;
    }
    func_0x000107c61434(param_2);
    func_0x000107c5fadc(uVar4,lVar1);
    func_0x000107c6142c(lVar1);
    puVar5 = puVar2;
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
  }
  func_0x0001000d224c(&uStack_48);
  func_0x000107c45314(uStack_48);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 101ebb1e0; end: 101ebb263;  */

void FUN_101ebb1e0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101ebb264; end: 101ebb273;  */

void FUN_101ebb264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101ebb274; end: 101ebb6b3;  */

undefined8 FUN_101ebb274(long param_1,long param_2)

{
  undefined **ppuVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined **ppuStack_98;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined **ppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_1 == 0) {
    lStack_58 = 0;
    ppuStack_60 = (undefined **)0x0;
    lStack_48 = 0;
    uStack_50 = 0;
    goto LAB_101ebb394;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f9ea98;
  func_0x000107c5faec();
  ppuStack_98 = ppuVar1;
  lStack_90 = param_2;
  func_0x000107c61434(param_2);
  puVar4 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&uStack_88,&ppuStack_98,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_101ebb324:
    lStack_58 = 0;
    ppuStack_60 = (undefined **)0x0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c61434(param_1);
    puVar2 = &uStack_88;
    func_0x000100df95d0(puVar2);
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000107c6142c(param_1);
      goto LAB_101ebb324;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar2 * 0x20,&ppuStack_60);
    func_0x000107c6142c(param_2);
    param_2 = param_1;
  }
  func_0x000107c6142c(param_2);
  func_0x0001007bbff0(&uStack_88);
  puVar4 = PTR___sypN_11034f1a8;
  if (lStack_48 == 0) {
LAB_101ebb394:
    func_0x00010006e7f4(&ppuStack_60);
    return 1;
  }
  puVar2 = &uStack_88;
  func_0x000107c6147c(puVar2,&ppuStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  lVar7 = lStack_80;
  if (((ulong)puVar2 & 1) == 0) {
    return 1;
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x38);
  lVar5 = *(long *)(unaff_x20 + 0x40);
  if ((uVar3 == uStack_88) && (lVar5 == lStack_80)) {
    func_0x000107c6142c(lStack_80);
    return 0;
  }
  func_0x000107c605b8();
  func_0x000107c6142c(lVar7);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad058;
  func_0x000107c5faec();
  ppuStack_60 = ppuVar1;
  lStack_58 = lVar5;
  func_0x000107c61434(lVar5);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&uStack_88,&ppuStack_60,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434(param_1);
    puVar2 = &uStack_88;
    func_0x000100df95d0(puVar2);
    if (((ulong)puVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar2 * 0x20,&ppuStack_60);
      func_0x000107c6142c(lVar5);
      lVar5 = param_1;
      goto LAB_101ebb460;
    }
    func_0x000107c6142c(param_1);
  }
  lStack_58 = 0;
  ppuStack_60 = (undefined **)0x0;
  lStack_48 = 0;
  uStack_50 = 0;
LAB_101ebb460:
  func_0x000107c6142c(lVar5);
  func_0x0001007bbff0(&uStack_88);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&ppuStack_60);
    uStack_88 = 0;
    lVar7 = 0;
  }
  else {
    puVar2 = &uStack_88;
    func_0x000107c6147c(puVar2,&ppuStack_60,puVar4 + 8,PTR___sSSN_11034da80,6);
    lVar7 = lStack_80;
    if ((int)puVar2 == 0) {
      uStack_88 = 0;
      lVar7 = 0;
    }
  }
  FUN_101ebb0d4(uStack_88,lVar7);
  func_0x000107c6142c(lVar7);
  return 1;
}



/* Entry: 101ebb6b4; end: 101ebb6e3;  */

void FUN_101ebb6b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf43730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_complete__1125ae770,0);
  return;
}



/* Entry: 101ebb6e4; end: 101ebb70b;  */

void FUN_101ebb6e4(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x20));
  }
  return;
}



/* Entry: 101ebb70c; end: 101ebb74b;  */

void FUN_101ebb70c(long param_1,long param_2)

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



/* Entry: 101ebb74c; end: 101ebbb17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ebb74c(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x18) = param_2;
  puVar1 = &UNK_110496080;
  func_0x000107c613fc(&UNK_110496080,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  func_0x0001000285a8(0x112dd07d0,&UNK_10d991cb0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  pcVar2 = FUN_101ebbb90;
  func_0x0001000bdd8c(FUN_101ebbb90,puVar1);
  uVar14 = *(undefined8 *)(param_2 + _DAT_113091b78);
  uVar12 = *(undefined8 *)(param_2 + _DAT_113091bb8);
  func_0x000107c615f0(uVar14);
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c4d81c();
  func_0x000107c61180();
  lVar4 = param_4;
  func_0x000107c4d484();
  func_0x000107c61180();
  lVar5 = param_4;
  func_0x000107c4d480();
  func_0x000107c61180();
  uVar6 = param_5;
  func_0x000107c3e5d8();
  func_0x000107c61180();
  uVar7 = param_6;
  func_0x000107c4d794();
  func_0x000107c61180();
  lVar8 = 0;
  func_0x000100962b9c();
  uVar11 = 0x68;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar14;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar14);
  func_0x000107c453e4();
  *(undefined **)(lVar8 + 0x18) = puVar1;
  *(undefined8 *)(lVar8 + 0x20) = uVar3;
  *(long *)(lVar8 + 0x28) = lVar4;
  *(undefined8 *)(lVar8 + 0x30) = uVar6;
  uVar13 = *(undefined8 *)(param_1 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(lVar4);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar9 = uVar13;
  func_0x000107c5faec();
  func_0x000107c61170(uVar13);
  *(undefined8 *)(lVar8 + 0x38) = uVar9;
  *(undefined8 *)(lVar8 + 0x40) = uVar11;
  *(undefined8 *)(lVar8 + 0x48) = uVar7;
  puVar1 = &UNK_1104960a8;
  func_0x000107c613fc(&UNK_1104960a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  uVar9 = 0x112d382e8;
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar13 = 0x101ebbb98;
  func_0x0001000bdd8c(0x101ebbb98,puVar1);
  *(undefined8 *)(lVar8 + 0x50) = uVar13;
  puVar1 = &UNK_1104960d0;
  func_0x000107c613fc(&UNK_1104960d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  func_0x000107c613fc(uVar9,0x18,7);
  func_0x000107c61174(param_8);
  uVar9 = 0x101ebbba0;
  func_0x0001000bdd8c(0x101ebbba0,puVar1);
  *(undefined8 *)(lVar8 + 0x58) = uVar9;
  *(code **)(lVar8 + 0x60) = pcVar2;
  func_0x000107c6157c(pcVar2);
  if (lVar5 != 0) {
    lVar10 = lVar5;
    func_0x000107c61174(lVar5);
    func_0x000100962bbc();
    func_0x000107c61170(lVar10);
  }
  func_0x000100962e10(uVar12);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(uVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(param_8);
  func_0x000107c61574(pcVar2);
  *(long *)(unaff_x20 + 0x10) = lVar8;
  return;
}



/* Entry: 101ebbb18; end: 101ebbb8f;  */

void FUN_101ebbb18(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4d860();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 101ebbb90; end: 101ebbba7;  */

void FUN_101ebbb90(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4d860();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 101ebbba8; end: 101ebbc63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101ebbba8(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_113091bb8);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61168(PTR_PTR_1126ae820);
  lVar2 = lVar4;
  func_0x000107c6148c(lVar4,puVar1);
  if (lVar2 != 0) {
    func_0x00010484b0f8(0);
    func_0x000107c610f8();
    func_0x000107c61174(lVar4);
    func_0x000107c61174();
    uVar3 = 0;
    func_0x00010484b094(0,6,0,0,0);
    func_0x000107c4d664(lVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar3);
  }
  return 0;
}



/* Entry: 101ebbc64; end: 101ebbc8f;  */

void FUN_101ebbc64(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ebbc90; end: 101ebbc93;  */

void FUN_101ebbc90(void)

{
  return;
}



/* Entry: 101ebbc94; end: 101ebbcb7;  */

undefined8 FUN_101ebbc94(void)

{
  FUN_101ebbba8();
  return 0;
}



/* Entry: 101ebbcb8; end: 101ebbcc3;  */

void FUN_101ebbcb8(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4d860();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 101ebbcc4; end: 101ebbf73;  */

/* WARNING: Possible PIC construction at 0x000101ebbd80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebbdd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebbe44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebbf4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebbe9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ebbf50) */
/* WARNING: Removing unreachable block (ram,0x000101ebbe48) */
/* WARNING: Removing unreachable block (ram,0x000101ebbdd4) */
/* WARNING: Removing unreachable block (ram,0x000101ebbdd8) */
/* WARNING: Removing unreachable block (ram,0x000101ebbddc) */
/* WARNING: Removing unreachable block (ram,0x000101ebbde8) */
/* WARNING: Removing unreachable block (ram,0x000101ebbe4c) */
/* WARNING: Removing unreachable block (ram,0x000101ebbe50) */
/* WARNING: Removing unreachable block (ram,0x000101ebbef0) */
/* WARNING: Removing unreachable block (ram,0x000101ebbe70) */
/* WARNING: Removing unreachable block (ram,0x000101ebbdf4) */
/* WARNING: Removing unreachable block (ram,0x000101ebbdf8) */
/* WARNING: Removing unreachable block (ram,0x000101ebbea4) */
/* WARNING: Removing unreachable block (ram,0x000101ebbea8) */
/* WARNING: Removing unreachable block (ram,0x000101ebbe18) */
/* WARNING: Removing unreachable block (ram,0x000101ebbd84) */
/* WARNING: Removing unreachable block (ram,0x000101ebbea0) */
/* WARNING: Removing unreachable block (ram,0x000101ebbef4) */
/* WARNING: Removing unreachable block (ram,0x000101ebbf38) */

void FUN_101ebbcc4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000106c40148();
  if ((int)lVar1 != 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(1);
    }
    return;
  }
  func_0x000107c5d9a4();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c61168(PTR_PTR_1126b1370);
    func_0x000107c4a408();
    param_1 = 0;
  }
  else {
    func_0x000107c5f9e8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ebbf74; end: 101ebbfa3;  */

/* WARNING: Possible PIC construction at 0x000101ebbf88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ebbf8c) */

void FUN_101ebbf74(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 101ebbfa4; end: 101ebc017;  */

undefined8 * FUN_101ebbfa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101ebc018; end: 101ebc063;  */

undefined8 * FUN_101ebc018(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101ebc064; end: 101ebc103;  */

int FUN_101ebc064(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101ebc104; end: 101ebc3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101ebc104(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long unaff_x20;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x50) = puVar2;
  plVar1 = (long *)(param_2 + _DAT_113091bd0);
  lVar9 = *plVar1;
  puVar2 = PTR_PTR_1126a9780;
  func_0x000107c61168(PTR_PTR_1126a9780);
  lVar3 = lVar9;
  func_0x000107c6148c(lVar9,puVar2);
  if (lVar3 != 0) {
    func_0x000107c61174(lVar9);
  }
  *(long *)(unaff_x20 + 0x58) = lVar3;
  lVar10 = *(long *)(param_2 + _DAT_113091b90);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c61168(PTR_PTR_1126ae820);
  lVar9 = lVar10;
  func_0x000107c6148c(lVar10,puVar2);
  if (lVar9 != 0) {
    func_0x000107c61174(lVar10);
  }
  lVar11 = *(long *)(param_2 + _DAT_113091bb8);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c61168(PTR_PTR_1126ae820);
  lVar10 = lVar11;
  func_0x000107c6148c(lVar11,puVar2);
  if (lVar10 != 0) {
    func_0x000107c61174(lVar11);
  }
  lVar11 = _DAT_113091b58;
  uVar12 = *(undefined8 *)(param_2 + _DAT_113091b58);
  lVar4 = lVar10;
  func_0x000107c61174(lVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar5 = lVar9;
  func_0x000107c61174();
  uVar6 = param_4;
  func_0x000107c444a4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar12;
  *(long *)(unaff_x20 + 0x18) = lVar9;
  *(long *)(unaff_x20 + 0x20) = lVar10;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  uVar12 = *(undefined8 *)(param_2 + lVar11);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar12;
  *(long *)(unaff_x20 + 0x40) = lVar9;
  *(long *)(unaff_x20 + 0x48) = lVar10;
  iVar8 = (int)*(undefined8 *)(param_3 + _DAT_113092298);
  func_0x000107c61174();
  func_0x000107c61174(lVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(uVar12);
  func_0x0001008fb738();
  if (iVar8 == 0) {
    plVar1 = (long *)(param_2 + _DAT_113091bc0);
  }
  lVar10 = *plVar1;
  puVar2 = &UNK_1104962b8;
  func_0x000107c613fc(&UNK_1104962b8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  pcStack_70 = FUN_101ebc490;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101225480;
  puStack_78 = &UNK_1104962d0;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4(ppuVar7);
  puVar2 = puStack_68;
  func_0x000107c61174(lVar10);
  func_0x000107c61574(puVar2);
  lVar9 = lVar10;
  func_0x000107c5c320(lVar10);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c3e924(lVar9);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  return unaff_x20;
}



/* Entry: 101ebc3fc; end: 101ebc48f;  */

void FUN_101ebc3fc(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x00010484fff0(FUN_101ebc66c,param_2,FUN_101ebc56c,0,0x101ebc570,0,0x101ebc574,0,
                        0x101ebc578,0);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101ebc490; end: 101ebc497;  */

void FUN_101ebc490(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x00010484fff0(FUN_101ebc66c,lVar1,FUN_101ebc56c,0,0x101ebc570,0,0x101ebc574,0,0x101ebc578,
                        0);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101ebc498; end: 101ebc56b;  */

void FUN_101ebc498(long param_1,uint param_2,undefined8 param_3,code *param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  
  if (param_1 != 0) {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000107c5b634();
    if (lVar1 == 1) {
      FUN_101ebc8fc(param_1,param_3,param_4,param_5);
    }
    else {
      FUN_101ebbcc4(param_1,param_2 & 1,param_3,param_4,param_5,*(undefined8 *)(param_6 + 0x38),
                    *(undefined8 *)(param_6 + 0x40),*(undefined8 *)(param_6 + 0x48));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  if (param_4 != (code *)0x0) {
    (*param_4)(1);
  }
  return;
}



/* Entry: 101ebc56c; end: 101ebc583;  */

void FUN_101ebc56c(void)

{
  return;
}



/* Entry: 101ebc584; end: 101ebc5a7;  */

undefined8 FUN_101ebc584(void)

{
  long unaff_x20;
  
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c3fa5c(*(undefined8 *)(unaff_x20 + 0x58));
  return 0;
}



/* Entry: 101ebc5a8; end: 101ebc637;  */

void FUN_101ebc5a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ebc638; end: 101ebc63b;  */

void FUN_101ebc638(void)

{
  return;
}



/* Entry: 101ebc63c; end: 101ebc66b;  */

undefined8 FUN_101ebc63c(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  func_0x000107c42194(*(undefined8 *)(lVar1 + 0x50));
  func_0x000107c3fa5c(*(undefined8 *)(lVar1 + 0x58));
  return 0;
}



/* Entry: 101ebc66c; end: 101ebc67b;  */

void FUN_101ebc66c(long param_1,uint param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  long unaff_x20;
  
  if (param_1 != 0) {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000107c5b634();
    if (lVar1 == 1) {
      FUN_101ebc8fc(param_1,param_3,param_4,param_5);
    }
    else {
      FUN_101ebbcc4(param_1,param_2 & 1,param_3,param_4,param_5,*(undefined8 *)(unaff_x20 + 0x38),
                    *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  if (param_4 != (code *)0x0) {
    (*param_4)(1);
  }
  return;
}



/* Entry: 101ebc67c; end: 101ebc6e7;  */

long FUN_101ebc67c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101ebc6e8; end: 101ebc753;  */

undefined8 * FUN_101ebc6e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar4 = param_2[4];
  param_1[4] = uVar4;
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  return param_1;
}



/* Entry: 101ebc754; end: 101ebc7f7;  */

undefined8 * FUN_101ebc754(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101ebc7f8; end: 101ebc85b;  */

undefined8 * FUN_101ebc7f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101ebc85c; end: 101ebc8fb;  */

int FUN_101ebc85c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101ebc8fc; end: 101ebcfbf;  */

/* WARNING: Possible PIC construction at 0x000101ebc9b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebcaa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebcf80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebce48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebcaf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebcb54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebcc80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebcce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebcdfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebce14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebcd84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebcbb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebcf08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebcc10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ebcf0c) */
/* WARNING: Removing unreachable block (ram,0x000101ebcbbc) */
/* WARNING: Removing unreachable block (ram,0x000101ebcd88) */
/* WARNING: Removing unreachable block (ram,0x000101ebce18) */
/* WARNING: Removing unreachable block (ram,0x000101ebce00) */
/* WARNING: Removing unreachable block (ram,0x000101ebcce8) */
/* WARNING: Removing unreachable block (ram,0x000101ebcc84) */
/* WARNING: Removing unreachable block (ram,0x000101ebcb58) */
/* WARNING: Removing unreachable block (ram,0x000101ebcaf8) */
/* WARNING: Removing unreachable block (ram,0x000101ebcc20) */
/* WARNING: Removing unreachable block (ram,0x000101ebcc24) */
/* WARNING: Removing unreachable block (ram,0x000101ebcc88) */
/* WARNING: Removing unreachable block (ram,0x000101ebcc90) */
/* WARNING: Removing unreachable block (ram,0x000101ebccfc) */
/* WARNING: Removing unreachable block (ram,0x000101ebcd08) */
/* WARNING: Removing unreachable block (ram,0x000101ebcd9c) */
/* WARNING: Removing unreachable block (ram,0x000101ebccd4) */
/* WARNING: Removing unreachable block (ram,0x000101ebcc6c) */
/* WARNING: Removing unreachable block (ram,0x000101ebcb40) */
/* WARNING: Removing unreachable block (ram,0x000101ebce4c) */
/* WARNING: Removing unreachable block (ram,0x000101ebcaa4) */
/* WARNING: Removing unreachable block (ram,0x000101ebc9bc) */
/* WARNING: Removing unreachable block (ram,0x000101ebce1c) */
/* WARNING: Removing unreachable block (ram,0x000101ebcfbc) */
/* WARNING: Removing unreachable block (ram,0x000101ebce38) */
/* WARNING: Removing unreachable block (ram,0x000101ebc9c0) */
/* WARNING: Removing unreachable block (ram,0x000101ebcf84) */
/* WARNING: Removing unreachable block (ram,0x000101ebca60) */
/* WARNING: Removing unreachable block (ram,0x000101ebcf30) */
/* WARNING: Removing unreachable block (ram,0x000101ebcf34) */
/* WARNING: Removing unreachable block (ram,0x000101ebca74) */
/* WARNING: Removing unreachable block (ram,0x000101ebcc14) */

void FUN_101ebc8fc(undefined *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *unaff_x20;
  
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = *unaff_x20;
  func_0x000107c3dfc0();
  if (lVar3 == 0) {
    puVar5 = param_1;
    func_0x000106c34424();
    puVar4 = param_1;
    if ((int)puVar5 == 0) {
      puVar5 = (undefined *)unaff_x20[2];
      if (puVar5 == (undefined *)0x0) goto LAB_101ebcc18;
      func_0x000107c61174();
      func_0x000107c5d9a4();
      func_0x000107c61180();
      if (puVar4 != (undefined *)0x0) {
        func_0x000107c5f9e8();
        goto code_r0x000107c61170;
      }
      func_0x000107c5b634(param_1);
      func_0x00010484b0f8(0);
      func_0x000107c610f8();
      func_0x000101eb8fc4(param_3,param_4);
      func_0x00010484b094(0,param_1,param_2,param_3,param_4);
      puVar4 = puVar5;
    }
    else {
      puVar5 = (undefined *)unaff_x20[1];
      if (puVar5 == (undefined *)0x0) {
LAB_101ebcc18:
        if (param_3 != (code *)0x0) {
          (*param_3)(1);
        }
        return;
      }
      func_0x000107c61174();
      func_0x000107c5d9a4();
      func_0x000107c61180();
      if (puVar4 != (undefined *)0x0) {
        func_0x000107c5f9e8();
        goto code_r0x000107c61170;
      }
      func_0x000107c5b634(param_1);
      func_0x00010484b4e4(0);
      func_0x000107c610f8();
      func_0x000101eb8fc4(param_3,param_4);
      func_0x00010484b480(0,param_1,param_2,param_3,param_4);
      puVar4 = puVar5;
    }
    func_0x000107c4d664(puVar4);
  }
  else {
    puVar5 = param_1;
    func_0x000107c4f6dc();
    iVar2 = (int)puVar5;
    func_0x000107fcbed4();
    if ((iVar2 == 0) || (func_0x000108614d48(), iVar2 == 0)) {
      func_0x000107c4f6dc();
      func_0x000107fcbed4();
      if (((int)param_1 == 0) || (func_0x000108614d48(), ((ulong)param_1 & 1) != 0)) {
        puVar4 = PTR_PTR_1126cf818;
        func_0x000107c61168();
        func_0x000107c5e33c();
        func_0x000107c61180();
        if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101ebcfb8);
          (*pcVar1)();
        }
        FUN_101ebcfc0();
      }
      else {
        puVar4 = PTR_PTR_1126cf818;
        func_0x000107c61168();
        func_0x000107c5e340();
        func_0x000107c61180();
        if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101ebcfbc);
          (*pcVar1)();
        }
        FUN_101ebcfc0();
      }
    }
    else {
      puVar4 = (undefined *)unaff_x20[3];
      func_0x000107c5c6e4(puVar4);
      func_0x000107c61180();
      func_0x000107c5c734();
      func_0x000107c61180();
    }
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 101ebcfc0; end: 101ebd097;  */

/* WARNING: Possible PIC construction at 0x000101ebd02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebd064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ebd07c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ebd030) */
/* WARNING: Removing unreachable block (ram,0x000101ebd080) */
/* WARNING: Removing unreachable block (ram,0x000101ebd04c) */
/* WARNING: Removing unreachable block (ram,0x000101ebd068) */
/* WARNING: Removing unreachable block (ram,0x000101ebd094) */
/* WARNING: Removing unreachable block (ram,0x000101ebd06c) */

void FUN_101ebcfc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x695f646567676f6c;
  func_0x000107c5fadc(0x695f646567676f6c,0xe90000000000006e);
  func_0x000107c5fadc(0x534559,0xe300000000000000);
  func_0x000107c5e508(param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101ebd098; end: 101ebd0c3;  */

void FUN_101ebd098(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(1);
  }
  return;
}



/* Entry: 101ebd0c4; end: 101ebd0df;  */

void FUN_101ebd0c4(long param_1,long param_2)

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



/* Entry: 101ebd0e0; end: 101ebd0fb; +[_TtC27NotificationHandlingHelpers40NativeResultToSuppressionReasonConverter toSuppressionReasonFrom:] */

undefined8 FUN_101ebd0e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xe;
  if (param_3 != 7) {
    uVar1 = 0;
  }
  uVar2 = 0xd;
  if (param_3 != 3) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 101ebd0fc; end: 101ebd137; -[_TtC27NotificationHandlingHelpers40NativeResultToSuppressionReasonConverter init] */

void FUN_101ebd0fc(undefined8 param_1)

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



/* Entry: 101ebd138; end: 101ebd18b;  */

void FUN_101ebd138(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ebd18c; end: 101ebd18f;  */

void FUN_101ebd18c(void)

{
  return;
}



/* Entry: 101ebd190; end: 101ebd1ff;  */

void FUN_101ebd190(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000107c61174(param_1);
      FUN_101ebd200();
      func_0x000107c61574(param_2);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 101ebd200; end: 101ebd723;  */

void FUN_101ebd200(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + 0x10));
  lVar9 = param_1;
  func_0x000107c3f70c();
  func_0x000107c61180();
  if (lVar9 != 0) {
    lVar4 = lVar9;
    func_0x000107c5faec();
    lVar5 = param_1;
    uVar12 = param_2;
    func_0x000107c3cfec();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      puStack_a0 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      lStack_98 = lVar13;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
      uStack_70 = 0x23;
      uStack_68 = 0xe100000000000000;
      lStack_90 = lVar6;
      lStack_88 = lVar6;
      uStack_80 = uVar12;
      func_0x000100e8b654();
      puVar7 = &uStack_70;
      func_0x000107c601dc(puVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar5,lVar5);
      if (puVar7[2] != 0) {
        uStack_a8 = puVar7[4];
        uVar15 = puVar7[5];
        lStack_b0 = lVar3;
        func_0x000107c61434(uVar15);
        func_0x000107c6142c(puVar7);
        func_0x000107c61428(unaff_x20 + 0x68,&lStack_88,0x20,0);
        lVar3 = *(long *)(unaff_x20 + 0x68);
        if (*(long *)(lVar3 + 0x10) == 0) {
          func_0x000107c61170(lVar9);
        }
        else {
          func_0x000107c61434(lVar3);
          uVar11 = param_2;
          func_0x000100029284();
          if ((uVar11 & 1) != 0) {
            uVar14 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + lVar4 * 8);
            func_0x000107c615f0(uVar14);
            func_0x000107c614a8(&lStack_88);
            func_0x000107c6142c(lVar3);
            uVar8 = uStack_a8;
            func_0x000107c5fadc(uStack_a8,uVar15);
            uStack_b8 = uVar14;
            func_0x000107c5d944(uVar14);
            func_0x000107c61170(uVar8);
            func_0x000107c6142c(param_2);
            uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
            uVar8 = uStack_a8;
            func_0x000107c5fadc(uStack_a8,uVar15);
            func_0x000107c6142c(uVar15);
            func_0x000107b1e974(uVar14,lVar9,uVar8,1);
            func_0x000107c61170(lVar9);
            func_0x000107c61170(uVar8);
            lStack_88 = lStack_90;
            uStack_70 = 0x23;
            uStack_68 = 0xe100000000000000;
            puVar7 = &uStack_70;
            uStack_80 = uVar12;
            func_0x000107c601dc(puVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar5,lVar5);
            func_0x000107c6142c(uVar12);
            uVar15 = uStack_b8;
            if ((ulong)puVar7[2] < 3) {
              func_0x000107c6142c(puVar7);
              uVar15 = uStack_b8;
            }
            else {
              uVar11 = puVar7[6];
              uVar1 = puVar7[7];
              func_0x000107c61434(uVar1);
              func_0x000107c6142c(puVar7);
              uVar12 = uVar11 & 0xffffffffffff;
              if ((uVar1 & 0x2000000000000000) != 0) {
                uVar12 = uVar1 >> 0x38 & 0xf;
              }
              if (uVar12 != 0) {
                lVar9 = *(long *)(unaff_x20 + 0x48);
                func_0x000107c5c734();
                func_0x000107c61180();
                if (lVar9 != 0) {
                  puVar10 = PTR_PTR_1126a9790;
                  lStack_90 = lVar9;
                  func_0x000107c610f8(PTR_PTR_1126a9790);
                  func_0x000107c453e4();
                  lVar9 = param_1;
                  func_0x000107c4d7e4(param_1);
                  func_0x000107c61180();
                  func_0x000107c56b00(puVar10);
                  func_0x000107c61170(lVar9);
                  lVar9 = param_1;
                  func_0x000107c4f6e0(param_1);
                  func_0x000107c61180();
                  func_0x000107c56b44(puVar10);
                  func_0x000107c61170(lVar9);
                  lVar9 = param_1;
                  func_0x000107c51fd0();
                  func_0x000107c61180();
                  if (lVar9 == 0) {
                    lVar9 = 0;
                    lVar3 = lStack_b0;
                    lVar13 = lStack_98;
                  }
                  else {
                    func_0x000107c5ee94(lVar16);
                    func_0x000107c61170(lVar9);
                    func_0x000107c5ee70();
                    lVar13 = lStack_98;
                    lVar3 = lStack_b0;
                    (**(code **)(lStack_98 + 8))(lVar16,lStack_b0);
                  }
                  puVar2 = puStack_a0;
                  func_0x000107c56b30(puVar10);
                  func_0x000107c61170(lVar9);
                  func_0x000107c5b63c(param_1);
                  func_0x000107c61180();
                  func_0x000107c56b38(puVar10);
                  func_0x000107c61170(param_1);
                  func_0x000107c5fadc(uVar11,uVar1);
                  func_0x000107c6142c(uVar1);
                  func_0x000107c56b3c(puVar10);
                  func_0x000107c61170(uVar11);
                  func_0x000107c5eea0(puVar2);
                  func_0x000107c5ee70();
                  (**(code **)(lVar13 + 8))(puVar2,lVar3);
                  func_0x000107c56b40(puVar10);
                  func_0x000107c61170(uVar11);
                  func_0x000107c3dfc0(*(undefined8 *)(unaff_x20 + 0x50));
                  func_0x000107c5a7a0(puVar10);
                  func_0x000107c61174(puVar10);
                  lVar9 = lStack_90;
                  func_0x000107c4bfb0(lStack_90);
                  func_0x000107c615e8(lVar9);
                  func_0x000107c61170(puVar10);
                  func_0x000107c61170(puVar10);
                  goto LAB_101ebd71c;
                }
              }
              func_0x000107c6142c(uVar1);
            }
LAB_101ebd71c:
            func_0x000107c615e8(uVar15);
            return;
          }
          func_0x000107c61170(lVar9);
          func_0x000107c6142c(lVar3);
        }
        func_0x000107c614a8(&lStack_88);
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(uVar12);
        func_0x000107c6142c(uVar15);
        goto LAB_101ebd5b0;
      }
      func_0x000107c6142c();
      func_0x000107c6142c(param_2);
      param_2 = uVar12;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c61170(lVar9);
  }
LAB_101ebd5b0:
  uVar15 = *(undefined8 *)(unaff_x20 + 0x60);
  func_0x000107c3f70c(param_1);
  func_0x000107c61180();
  func_0x000107b1eba4(uVar15,param_1,1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101ebd724; end: 101ebd72b;  */

void FUN_101ebd724(void)

{
  return;
}



/* Entry: 101ebd72c; end: 101ebd79f;  */

void FUN_101ebd72c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 101ebd7a0; end: 101ebd943;  */

ulong FUN_101ebd7a0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ebd878);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ebd87c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001c,0x800000010f0184a0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ebd944);
  (*pcVar2)();
}



/* Entry: 101ebd944; end: 101ebdaff;  */

ulong FUN_101ebd944(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ebda28);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ebda2c);
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
  func_0x000100c116fc(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ebdb00);
  (*pcVar2)();
}



/* Entry: 101ebdb00; end: 101ebdeff;  */

undefined * FUN_101ebdb00(undefined *param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_2 == 0) {
    func_0x000107c615e8();
    puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  else {
    func_0x0001000285a8(0x112e38b38,&UNK_10da23330);
    puVar5 = param_1;
    func_0x000107c602e4(param_1,param_2);
    puStack_68 = puVar5;
    func_0x000107c60288();
    puVar7 = param_1;
    func_0x000107c602ac();
    if (puVar7 != (undefined *)0x0) {
      uVar6 = 0;
      func_0x000100c116fc(0,0x112e38b10,&PTR__OBJC_CLASS___UNNotificationCategory_1126a9788);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        puStack_78 = puVar7;
        func_0x000107c6147c(&uStack_70,&puStack_78,puVar2 + 8,uVar6,7);
        uVar3 = uStack_70;
        if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
          FUN_101ebe050(*(ulong *)(puVar5 + 0x10) + 1);
          puVar5 = puStack_68;
        }
        puVar7 = *(undefined **)(puVar5 + 0x28);
        func_0x000107c60114();
        uVar11 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar10 = (ulong)puVar7 & (uVar11 ^ 0xffffffffffffffff);
        uVar8 = uVar10 >> 6;
        uVar9 = -1L << (uVar10 & 0x3f) &
                (*(ulong *)(puVar5 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar1 = false;
          uVar9 = 0x3f - uVar11 >> 6;
          do {
            uVar10 = uVar8 + 1;
            if ((uVar10 == uVar9) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101ebdcfc);
              (*pcVar4)();
            }
            uVar8 = 0;
            if (uVar10 != uVar9) {
              uVar8 = uVar10;
            }
            bVar1 = (bool)(uVar10 == uVar9 | bVar1);
          } while (*(ulong *)(puVar5 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar5 + uVar8 * 8 + 0x38);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar8 + 0x38) = 1L << (uVar9 & 0x3f) | *(ulong *)(puVar5 + uVar8 + 0x38)
        ;
        *(undefined8 *)(*(long *)(puVar5 + 0x30) + uVar9 * 8) = uVar3;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        func_0x000107c602ac();
      } while (puVar7 != (undefined *)0x0);
    }
    func_0x000107c61574(param_1);
  }
  return puVar5;
}



/* Entry: 101ebdf00; end: 101ebe04f;  */

void FUN_101ebdf00(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001000285a8(0x112e38b38,&UNK_10da23330);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_101ebdfdc;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_101ebdfdc:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ebe050);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_101ebe028;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_101ebe028:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101ebe050; end: 101ebe27b;  */

void FUN_101ebe050(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x112e38b38;
  func_0x0001000285a8(0x112e38b38,&UNK_10da23330);
  lVar4 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,1,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_101ebe24c:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101ebe278);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar15 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar13 = -1L << (uVar15 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar13,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_101ebe24c;
        }
        uVar15 = puVar13[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101ebe27c);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 101ebe27c; end: 101ebe2fb;  */

void FUN_101ebe27c(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60114();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  func_0x000107c60274(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Entry: 101ebe2fc; end: 101ebe46b;  */

void FUN_101ebe2fc(void)

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
  
  func_0x0001000285a8(0x112e38b30,&UNK_10da233f0);
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
    if (uVar8 == 0) goto LAB_101ebe3d8;
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
        func_0x000107c615f0(uVar12);
        if (uVar8 != 0) break;
LAB_101ebe3d8:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101ebe46c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101ebe444;
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
LAB_101ebe444:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101ebe46c; end: 101ebe4bb;  */

void FUN_101ebe46c(void)

{
  func_0x00010484f5ec(FUN_101ebd18c,0,FUN_101ebe4bc);
  return;
}



/* Entry: 101ebe4bc; end: 101ebe4c3;  */

void FUN_101ebe4bc(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar1 != 0) {
      func_0x000107c61174(param_1);
      FUN_101ebd200();
      func_0x000107c61574(lVar1);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 101ebe4c4; end: 101ebe513;  */

void FUN_101ebe4c4(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e38b58 != 0) {
    return;
  }
  puVar1 = &UNK_110496660;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e38b58 = param_1;
  return;
}



/* Entry: 101ebe514; end: 101ebe9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101ebe514(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0xd00000000000002f;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x800000010f018470;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  lVar1 = *(long *)(param_3 + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
  }
  else {
    uVar2 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010f018470);
    lVar3 = lVar1;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
    func_0x0001000285a8(0x112e38b60,&UNK_10da23390);
    func_0x000107c613fc();
    lVar4 = 0;
    func_0x00010095c380();
    lVar1 = lVar4;
    func_0x00010095c3c8();
    puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_80 = (undefined **)&UNK_100a9a020;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100a99f9c;
    puStack_88 = &UNK_110496670;
    ppuVar5 = &puStack_a0;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_78);
    puVar6 = &UNK_1104966a8;
    func_0x000107c613fc(&UNK_1104966a8,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar1;
    *(long *)(puVar6 + 0x18) = lVar4;
    ppuStack_80 = (undefined **)&UNK_100bfbd68;
    puStack_a0 = puVar8;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100ba5314;
    puStack_88 = &UNK_1104966c0;
    ppuVar7 = &puStack_a0;
    puStack_78 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar6 = puStack_78;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c42c14(param_6);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    uVar10 = *(undefined8 *)(param_4 + _DAT_113083868);
    uVar12 = *(undefined8 *)(lVar4 + 0x10);
    uVar11 = *(undefined8 *)(param_2 + _DAT_113091b58);
    func_0x0001000285a8(0x112e38b68,&UNK_10da23398);
    uVar13 = *(undefined8 *)(param_2 + _DAT_113091b80);
    func_0x000107c6157c(uVar12);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    uVar2 = uVar13;
    func_0x0001000b637c();
    func_0x000107c61170(uVar13);
    puVar6 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
    func_0x000107c61168();
    func_0x000107c40f90();
    func_0x000107c61180();
    uVar13 = 0;
    func_0x000100960538(0,0x112da6ee0,&PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
    ppuStack_80 = &PTR_DAT_110496520;
    puVar8 = PTR_PTR_1126a97a8;
    puStack_a0 = puVar6;
    puStack_88 = (undefined *)uVar13;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar9 = 0;
    func_0x0001009605ec();
    func_0x000107c613fc();
    *(long *)(lVar9 + 0x10) = lVar3;
    func_0x0001000c6560(0);
    func_0x000107c613fc();
    lVar1 = lVar3;
    func_0x000107c615f0();
    func_0x0001000c6580();
    *(long *)(lVar9 + 0x18) = lVar1;
    func_0x00010096060c(&puStack_a0,lVar9 + 0x20);
    *(undefined8 *)(lVar9 + 0x48) = uVar10;
    *(undefined8 *)(lVar9 + 0x50) = uVar11;
    *(undefined8 *)(lVar9 + 0x58) = uVar2;
    *(undefined **)(lVar9 + 0x60) = puVar8;
    func_0x000107c61174(uVar10);
    func_0x000107c61174(uVar11);
    func_0x000107c6157c(uVar2);
    func_0x000107c61174(puVar8);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100960650();
    *(undefined **)(lVar9 + 0x68) = puVar6;
    uVar13 = *(undefined8 *)(lVar9 + 0x10);
    puVar6 = &UNK_1104966f8;
    func_0x000107c613fc(&UNK_1104966f8,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,lVar9);
    func_0x000107c615f0(uVar13);
    func_0x000107c6157c(lVar9);
    func_0x00010075a04c(uVar13,1,&UNK_100c0fa34,puVar6);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(puVar8);
    func_0x000107c61574(uVar12);
    func_0x000107c615e8(uVar13);
    func_0x000107c61574(puVar6);
    func_0x000107c61170(param_3);
    func_0x000107c61574(lVar4);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61574(lVar9);
    func_0x000100960808(&puStack_a0);
    *(long *)(unaff_x20 + 0x20) = lVar9;
  }
  return unaff_x20;
}



/* Entry: 101ebe9d8; end: 101ebea23;  */

undefined8 FUN_101ebe9d8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 101ebea24; end: 101ebea27;  */

void FUN_101ebea24(void)

{
  return;
}



/* Entry: 101ebea28; end: 101ebea4b;  */

undefined8 FUN_101ebea28(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x20);
  *(undefined8 *)(*unaff_x20 + 0x20) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 101ebea4c; end: 101ebea53;  */

void FUN_101ebea4c(long param_1,long param_2)

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



/* Entry: 101ebea54; end: 101ebeb17;  */

void FUN_101ebea54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e38c20;
  func_0x0001000285a8(0x112e38c20,&UNK_10da23400);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101ebeb18; end: 101ebeb1b;  */

void FUN_101ebeb18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e38c30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da23410;
  func_0x000107c61520(&UNK_10da23410,&UNK_1104968a8);
  puRam0000000112e38c30 = puVar1;
  return;
}



/* Entry: 101ebeb1c; end: 101ebeb87;  */

void FUN_101ebeb1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e38c30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da23410;
  func_0x000107c61520(&UNK_10da23410,&UNK_1104968a8);
  puRam0000000112e38c30 = puVar1;
  return;
}



/* Entry: 101ebeb88; end: 101ebeb8b;  */

void FUN_101ebeb88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e38c48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da234b8;
  func_0x000107c61520(&UNK_10da234b8,&UNK_110496938);
  puRam0000000112e38c48 = puVar1;
  return;
}



/* Entry: 101ebeb8c; end: 101ebebf7;  */

void FUN_101ebeb8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e38c48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da234b8;
  func_0x000107c61520(&UNK_10da234b8,&UNK_110496938);
  puRam0000000112e38c48 = puVar1;
  return;
}



/* Entry: 101ebebf8; end: 101ebec7b;  */

void FUN_101ebebf8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 101ebec7c; end: 101ebec7f;  */

void FUN_101ebec7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e38c60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da23528;
  func_0x000107c61520(&UNK_10da23528,&UNK_110496938);
  puRam0000000112e38c60 = puVar1;
  return;
}



/* Entry: 101ebec80; end: 101ebecbf;  */

void FUN_101ebec80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e38c60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da23528;
  func_0x000107c61520(&UNK_10da23528,&UNK_110496938);
  puRam0000000112e38c60 = puVar1;
  return;
}



/* Entry: 101ebecc0; end: 101ebecc3;  */

void FUN_101ebecc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e38c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da234e0;
  func_0x000107c61520(&UNK_10da234e0,&UNK_110496938);
  puRam0000000112e38c68 = puVar1;
  return;
}



/* Entry: 101ebecc4; end: 101ebed03;  */

void FUN_101ebecc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e38c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da234e0;
  func_0x000107c61520(&UNK_10da234e0,&UNK_110496938);
  puRam0000000112e38c68 = puVar1;
  return;
}



/* Entry: 101ebed04; end: 101ebee9b;  */

void FUN_101ebed04(void)

{
  return;
}



/* Entry: 101ebee9c; end: 101ebeee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ebee9c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e38d00) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ebeee8; end: 101ebef47; -[_TtC36SCNotificationCategoryPluginRegistry40SCNotificationCategoryPluginSaberService buildSaberPlugins] */

void FUN_101ebeee8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010095c3c8();
  func_0x000107c61170(param_1);
  uVar2 = 0x112e38b20;
  func_0x0001000285a8(0x112e38b20,&UNK_10da23630);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101ebef48; end: 101ebefa7; -[_TtC36SCNotificationCategoryPluginRegistry40SCNotificationCategoryPluginSaberService init] */

void FUN_101ebef48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCNotificationCategoryPluginRegistry.SCNotificationCategoryPluginSaberService"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ebef74);
  (*pcVar1)();
}



/* Entry: 101ebefa8; end: 101ebefc7; -[_TtC36SCNotificationCategoryPluginRegistry40SCNotificationCategoryPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ebefa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e38d00));
  return;
}



/* Entry: 101ebefc8; end: 101ec08b7;  */

undefined8
FUN_101ebefc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar1 = 0;
  uStack_b8 = param_3;
  uStack_b0 = param_5;
  uStack_a8 = param_6;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000101ec0bac(param_4);
  func_0x0001000285a8(0x112d7a640,&UNK_10d939e90);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    FUN_101ec0bb8(0xd000000000000017,0x800000010f018510,param_4);
    puStack_a0 = (undefined *)0x0;
    func_0x000100b60084(&puStack_a0);
  }
  else {
    func_0x000107c6071c();
    uVar9 = uStack_b8;
    uVar4 = param_2;
    func_0x000107c5fadc(param_2,uStack_b8);
    uStack_c0 = uVar4;
    func_0x0001000295c4(0);
    (**(code **)(lVar11 + 0x68))
              (lVar10,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
               lVar1);
    lVar5 = lVar10;
    func_0x000107c5fff0(lVar10);
    (**(code **)(lVar11 + 8))(lVar10,lVar1);
    puVar6 = &UNK_110496a80;
    func_0x000107c613fc(&UNK_110496a80,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puVar7 = &UNK_110496aa8;
    func_0x000107c613fc(&UNK_110496aa8,0x50,7);
    uVar4 = uStack_a8;
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = lVar2;
    *(undefined8 *)(puVar7 + 0x20) = param_1;
    puVar7[0x28] = (char)param_4;
    *(undefined8 *)(puVar7 + 0x30) = uStack_b0;
    *(undefined8 *)(puVar7 + 0x38) = uStack_a8;
    *(undefined8 *)(puVar7 + 0x40) = param_2;
    *(undefined8 *)(puVar7 + 0x48) = uVar9;
    uStack_80 = 0x101ec0924;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101043a98;
    puStack_88 = &UNK_110496ac0;
    ppuVar8 = &puStack_a0;
    puStack_78 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar6 = puStack_78;
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar9);
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(puVar6);
    uVar9 = uStack_c0;
    func_0x000107c5b49c(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar5);
  }
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar9);
  func_0x000107c61574(lVar2);
  return uVar9;
}



/* Entry: 101ec08b8; end: 101ec0957;  */

void FUN_101ec08b8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000834e4(unaff_x20 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ec0958; end: 101ec0987;  */

void FUN_101ec0958(long param_1,long param_2)

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



/* Entry: 101ec0988; end: 101ec0b0b;  */

void FUN_101ec0988(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  puVar2 = PTR_PTR_1126b08b0;
  func_0x000107c61168(PTR_PTR_1126b08b0);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c3f71c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  puVar3 = PTR_PTR_1126b17d8;
  func_0x000107c610f8();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c460ec();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b17d8;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  func_0x000107c56498(puVar3);
  puVar2 = puVar3;
  func_0x000107c3ecd0();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c51820();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    *param_1 = puVar2;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[3] = 0xd00000000000001a;
    param_1[4] = 0x800000010f018690;
    param_1[5] = 0x22;
    param_1[6] = CONCAT17(in_register_00005007,
                          CONCAT16(in_register_00005006,
                                   CONCAT15(in_register_00005005,
                                            CONCAT14(in_register_00005004,
                                                     CONCAT13(in_register_00005003,
                                                              CONCAT12(in_register_00005002,
                                                                       CONCAT11(in_register_00005001
                                                                                ,in_b0)))))));
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ec0b0c);
  (*pcVar1)();
}



/* Entry: 101ec0b0c; end: 101ec0b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ec0b0c(long *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  char *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  double dVar15;
  double dVar16;
  undefined8 uStack_78;
  
  lVar12 = *(long *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  dVar16 = *(double *)(unaff_x20 + 0x30);
  bVar5 = *(byte *)(unaff_x20 + 0x18);
  dVar15 = dVar16;
  if (((uint)param_3 & 0xff00) == 0x100) {
    plVar8 = param_1;
    FUN_101769b78();
    puVar9 = &UNK_110776d50;
    func_0x000107c613f8(&UNK_110776d50,plVar8,0,0);
    *plVar8 = (long)param_1;
    plVar8[1] = param_2;
    *(char *)(plVar8 + 2) = (char)param_3;
    func_0x000101765ad4(param_1,param_2,param_3);
    func_0x00010488ade0(puVar9);
    func_0x000107c614ac(puVar9);
    func_0x000107c6071c();
    FUN_101ec0fa8(0xd000000000000016,0x800000010f018670,bVar5,uVar10,lVar4);
  }
  else {
    uVar7 = *(undefined8 *)((long)param_1 + _DAT_11307d350);
    uStack_78 = uVar7;
    func_0x000107c61174();
    func_0x000100b60084(&uStack_78);
    func_0x000107c61170(uVar7);
    func_0x000107c6071c();
    FUN_101ec116c(bVar5,uVar10,lVar4);
  }
  uVar7 = *(undefined8 *)(lVar12 + 0x10);
  uVar10 = 0x696a6f6d746962;
  if (lVar4 != 0) {
    uVar10 = 0x6567616d69;
  }
  uVar11 = 0xe700000000000000;
  if (lVar4 != 0) {
    uVar11 = 0xe500000000000000;
  }
  func_0x000107c5fadc(uVar10,uVar11);
  func_0x000107c6142c(uVar11);
  uVar13 = 0x676e696d6f636e69;
  uVar11 = 0xd000000000000018;
  pcVar6 = "nil_image_fetched";
  if (bVar5 != 5) {
    uVar11 = 0xd000000000000013;
    pcVar6 = "nil_bitmoji_fetcher";
  }
  uVar14 = 0x676e696f6774756f;
  uVar1 = 0xee0070756f72675f;
  if (bVar5 != 3) {
    uVar14 = 0xd000000000000013;
    uVar1 = 0x800000010f018610;
  }
  uVar3 = (ulong)pcVar6 | 0x8000000000000000;
  if (bVar5 < 5) {
    uVar3 = uVar1;
    uVar11 = uVar14;
  }
  uVar1 = 0xee0070756f72675f;
  if (bVar5 != 1) {
    uVar13 = 0xd000000000000013;
    uVar1 = 0x800000010f018630;
  }
  uVar2 = 0x800000010f018650;
  uVar14 = 0xd000000000000013;
  if (bVar5 != 0) {
    uVar2 = uVar1;
    uVar14 = uVar13;
  }
  if (bVar5 < 3) {
    uVar3 = uVar2;
    uVar11 = uVar14;
  }
  func_0x000107c5fadc(uVar11,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107b1da74(dVar15 - dVar16,uVar7,uVar10,((uint)param_3 & 0xff00) != 0x100,uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  return;
}



/* Entry: 101ec0b30; end: 101ec0b63;  */

void FUN_101ec0b30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ec0b64; end: 101ec0bb7;  */

void FUN_101ec0b64(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  dVar16 = *(double *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  bVar6 = *(byte *)(unaff_x20 + 0x28);
  dVar15 = dVar16;
  func_0x000107c61428(lVar8 + 0x10,auStack_88,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61648();
  if (lVar8 == 0) {
    lStack_90 = 0;
    func_0x000100b60084(&lStack_90);
  }
  else {
    func_0x000107c6071c();
    lVar12 = *(long *)(lVar8 + 0x58);
    uVar14 = *(undefined8 *)(lVar12 + 0x10);
    uVar13 = 0x696a6f6d746962;
    if (lVar5 != 0) {
      uVar13 = 0x6567616d69;
    }
    uVar9 = 0xe700000000000000;
    if (lVar5 != 0) {
      uVar9 = 0xe500000000000000;
    }
    func_0x000107c6157c(lVar12);
    func_0x000107c5fadc(uVar13,uVar9);
    func_0x000107c6142c(uVar9);
    uVar10 = 0x676e696d6f636e69;
    uVar9 = 0xd000000000000018;
    pcVar7 = "nil_image_fetched";
    if (bVar6 != 5) {
      uVar9 = 0xd000000000000013;
      pcVar7 = "nil_bitmoji_fetcher";
    }
    uVar11 = 0x676e696f6774756f;
    uVar1 = 0xee0070756f72675f;
    if (bVar6 != 3) {
      uVar11 = 0xd000000000000013;
      uVar1 = 0x800000010f018610;
    }
    uVar3 = (ulong)pcVar7 | 0x8000000000000000;
    if (bVar6 < 5) {
      uVar3 = uVar1;
      uVar9 = uVar11;
    }
    uVar1 = 0xee0070756f72675f;
    if (bVar6 != 1) {
      uVar10 = 0xd000000000000013;
      uVar1 = 0x800000010f018630;
    }
    uVar2 = 0x800000010f018650;
    uVar11 = 0xd000000000000013;
    if (bVar6 != 0) {
      uVar2 = uVar1;
      uVar11 = uVar10;
    }
    if (bVar6 < 3) {
      uVar3 = uVar2;
      uVar9 = uVar11;
    }
    func_0x000107c5fadc(uVar9,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107b1da74(dVar15 - dVar16,uVar14,uVar13,param_1 != 0,uVar9);
    func_0x000107c61574(lVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar9);
    uVar13 = *(undefined8 *)(lVar8 + 0x58);
    if (param_1 == 0) {
      func_0x000107c6157c(uVar13);
      FUN_101ec0fa8(0xd000000000000020,0x800000010f0186f0,bVar6,uVar4,lVar5);
      func_0x000107c61574(uVar13);
      lStack_90 = 0;
      func_0x000100b60084(&lStack_90);
    }
    else {
      lVar12 = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c6157c(uVar13);
      FUN_101ec116c(bVar6,uVar4,lVar5);
      func_0x000107c61574(uVar13);
      lStack_90 = param_1;
      func_0x000107c61174(lVar12);
      func_0x000100b60084(&lStack_90);
      func_0x000107c61170(lVar12);
      func_0x000107c61170(lVar12);
    }
    func_0x000107c61574(lVar8);
  }
  return;
}



/* Entry: 101ec0bb8; end: 101ec0d0b;  */

/* WARNING: Possible PIC construction at 0x000101ec0cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ec0cf8) */

void FUN_101ec0bb8(undefined8 param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  if (param_3 < 3) {
    uVar4 = 0x676e696d6f636e69;
    uVar1 = 0xee0070756f72675f;
    if (param_3 != 1) {
      uVar4 = 0xd000000000000013;
      uVar1 = 0x800000010f018630;
    }
    uVar3 = 0xd000000000000013;
    uVar6 = 0x800000010f018650;
    if (param_3 != 0) {
      uVar3 = uVar4;
      uVar6 = uVar1;
    }
  }
  else {
    uVar3 = 0xd000000000000018;
    pcVar2 = "nil_image_fetched";
    if (param_3 != 5) {
      uVar3 = 0xd000000000000013;
      pcVar2 = "nil_bitmoji_fetcher";
    }
    uVar4 = 0x676e696f6774756f;
    uVar1 = 0xee0070756f72675f;
    if (param_3 != 3) {
      uVar4 = 0xd000000000000013;
      uVar1 = 0x800000010f018610;
    }
    uVar6 = (ulong)pcVar2 | 0x8000000000000000;
    if (param_3 < 5) {
      uVar3 = uVar4;
      uVar6 = uVar1;
    }
  }
  func_0x000107c5fadc(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107b1cf18(uVar5,param_1,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ec0d0c; end: 101ec0e5b;  */

void FUN_101ec0d0c(undefined8 param_1,uint param_2,byte param_3)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_3 < 3) {
    uVar4 = 0x676e696d6f636e69;
    uVar1 = 0xee0070756f72675f;
    if (param_3 != 1) {
      uVar4 = 0xd000000000000013;
      uVar1 = 0x800000010f018630;
    }
    uVar3 = 0xd000000000000013;
    uVar6 = 0x800000010f018650;
    if (param_3 != 0) {
      uVar3 = uVar4;
      uVar6 = uVar1;
    }
  }
  else {
    uVar3 = 0xd000000000000018;
    pcVar2 = "nil_image_fetched";
    if (param_3 != 5) {
      uVar3 = 0xd000000000000013;
      pcVar2 = "nil_bitmoji_fetcher";
    }
    uVar4 = 0x676e696f6774756f;
    uVar1 = 0xee0070756f72675f;
    if (param_3 != 3) {
      uVar4 = 0xd000000000000013;
      uVar1 = 0x800000010f018610;
    }
    uVar6 = (ulong)pcVar2 | 0x8000000000000000;
    if (param_3 < 5) {
      uVar3 = uVar4;
      uVar6 = uVar1;
    }
  }
  func_0x000107c5fadc(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107b1d148(param_1,uVar5,param_2 & 1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101ec0e5c; end: 101ec0e67;  */

void FUN_101ec0e5c(byte param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 < 3) {
    uVar4 = 0x676e696d6f636e69;
    uVar1 = 0xee0070756f72675f;
    if (param_1 != 1) {
      uVar4 = 0xd000000000000013;
      uVar1 = 0x800000010f018630;
    }
    uVar3 = 0xd000000000000013;
    uVar6 = 0x800000010f018650;
    if (param_1 != 0) {
      uVar3 = uVar4;
      uVar6 = uVar1;
    }
  }
  else {
    uVar3 = 0xd000000000000018;
    pcVar2 = "nil_image_fetched";
    if (param_1 != 5) {
      uVar3 = 0xd000000000000013;
      pcVar2 = "nil_bitmoji_fetcher";
    }
    uVar4 = 0x676e696f6774756f;
    uVar1 = 0xee0070756f72675f;
    if (param_1 != 3) {
      uVar4 = 0xd000000000000013;
      uVar1 = 0x800000010f018610;
    }
    uVar6 = (ulong)pcVar2 | 0x8000000000000000;
    if (param_1 < 5) {
      uVar3 = uVar4;
      uVar6 = uVar1;
    }
  }
  func_0x000107c5fadc(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  (*(code *)&UNK_107b1cda4)(uVar5,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}


