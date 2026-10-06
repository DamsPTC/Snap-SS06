/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f416e4; end: 102f41733;  */

undefined8 FUN_102f416e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f29a18;
  func_0x0001000285a8(0x112f29a18,&UNK_10db65e20);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102f41734; end: 102f41777;  */

void FUN_102f41734(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d67d90 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b1440;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d67d90 = puVar1;
  return;
}



/* Entry: 102f41778; end: 102f41783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f41778(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [32];
  long alStack_78 [3];
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar4 = lVar3;
  func_0x000107c614f0();
  if (lVar1 != 0) {
    uVar9 = *(undefined8 *)(lVar2 + _DAT_112f29c58);
    *(long *)(lVar2 + _DAT_112f29c58) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar9);
  }
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    uVar9 = *(undefined8 *)(lVar3 + _DAT_112febe80);
    puVar6 = &UNK_1105eb218;
    alStack_78[0] = lVar3;
    lStack_60 = lVar4;
    func_0x000107c613fc(&UNK_1105eb218,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,lVar5);
    func_0x0001000bb420(alStack_78,auStack_98);
    puVar7 = &UNK_1105ebd88;
    func_0x000107c613fc(&UNK_1105ebd88,0x58,7);
    *(undefined8 *)(puVar7 + 0x10) = 0;
    *(undefined8 *)(puVar7 + 0x18) = 0;
    *(long *)(puVar7 + 0x20) = lVar2;
    func_0x000100102924(auStack_98,puVar7 + 0x28);
    *(undefined **)(puVar7 + 0x48) = puVar6;
    *(undefined8 *)(puVar7 + 0x50) = uVar9;
    uStack_a8 = 0x102f41964;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    puStack_b8 = &UNK_1000f6b44;
    puStack_b0 = &UNK_1105ebda0;
    ppuVar8 = &puStack_c8;
    puStack_a0 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar6 = puStack_a0;
    func_0x000107c61174(lVar3);
    func_0x000107c61174(lVar2);
    func_0x000107c615f0(uVar9);
    func_0x000107c61574(puVar6);
    func_0x0001000d76cc(&UNK_10db65dc0,ppuVar8);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(lVar5);
    func_0x000100183ab8(alStack_78);
  }
  return;
}



/* Entry: 102f41784; end: 102f417cf;  */

void FUN_102f41784(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100183ab8(unaff_x20 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102f417d0; end: 102f417f3;  */

void FUN_102f417d0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong *puVar5;
  long unaff_x20;
  code *pcVar6;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  pcVar6 = *(code **)(unaff_x20 + 0x10);
  puVar5 = *(ulong **)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(pcVar6,*(undefined8 *)(unaff_x20 + 0x18));
  }
  puVar2 = &UNK_1105eb218;
  func_0x000107c613fc(&UNK_1105eb218,0x18,7);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x000107c61614(puVar2 + 0x10,lVar3);
  func_0x000107c61170(lVar3);
  func_0x0001000bb420(unaff_x20 + 0x28,auStack_88);
  puVar4 = &UNK_1105ebdd8;
  func_0x000107c613fc(&UNK_1105ebdd8,0x48,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(ulong **)(puVar4 + 0x18) = puVar5;
  func_0x000100102924(auStack_88,puVar4 + 0x20);
  *(undefined8 *)(puVar4 + 0x40) = uVar1;
  pcVar6 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0xe8);
  func_0x000107c6157c(puVar2);
  func_0x000107c61174(puVar5);
  func_0x000107c615f0(uVar1);
  (*pcVar6)(unaff_x20 + 0x28,0x102f417e4,puVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 102f417f4; end: 102f4183f;  */

void FUN_102f417f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100183ab8(unaff_x20 + 0x20);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102f41840; end: 102f4197f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f41840(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar9 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x40);
  lVar3 = *(long *)(unaff_x20 + 0x48);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
  func_0x000107c61428(lVar5 + 0x10,auStack_78,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar6 = lVar5 + _DAT_112f29b40;
    func_0x000107c61618();
    if (lVar6 == 0) {
      if ((*(byte *)(lVar5 + _DAT_112f29b48) & 1) == 0) {
        if (lVar3 == 0) {
          puVar7 = &UNK_1105eb218;
          func_0x000107c613fc(&UNK_1105eb218,0x18,7);
          func_0x000107c61614(puVar7 + 0x10,lVar5);
          puVar8 = &UNK_1105eb888;
          func_0x000107c613fc(&UNK_1105eb888,0x28,7);
          *(undefined **)(puVar8 + 0x10) = puVar7;
          *(undefined8 *)(puVar8 + 0x18) = 0x102f41554;
          *(undefined8 *)(puVar8 + 0x20) = uVar12;
          FUN_102f478d8(0);
          func_0x000107c610f8();
          func_0x000107c614f0(lVar9);
          func_0x000107c61580(uVar12,2);
          func_0x000107c615f0();
          func_0x000102f477d8();
        }
        else {
          func_0x000107c6157c(uVar12);
          lVar9 = lVar3;
        }
        uVar13 = *(undefined8 *)(lVar5 + _DAT_112f29b38);
        *(ulong *)(lVar5 + _DAT_112f29b38) = uVar2;
        func_0x000107c61174(lVar3);
        func_0x000107c615f0(uVar2);
        func_0x000107c615e8(uVar13);
        uVar10 = uVar2;
        func_0x000107c50648();
        if ((int)uVar10 == 0) {
          func_0x000107c3e2c0(uVar2);
          puVar7 = &UNK_1105eb218;
          func_0x000107c613fc(&UNK_1105eb218,0x18,7);
          func_0x000107c61614(puVar7 + 0x10,lVar5);
          puVar8 = &UNK_1105eb8b0;
          func_0x000107c613fc(&UNK_1105eb8b0,0x20,7);
          *(undefined **)(puVar8 + 0x10) = puVar7;
          *(long *)(puVar8 + 0x18) = lVar9;
          uStack_88 = 0x102f41568;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_1105eb8c8;
          ppuVar11 = &puStack_a8;
          puStack_80 = puVar8;
          func_0x000107c60bc4(ppuVar11);
          puVar7 = puStack_80;
          func_0x000107c61174(lVar9);
          func_0x000107c61574(puVar7);
          func_0x0001000d76cc(&UNK_10db65dc0,ppuVar11);
          func_0x000107c60bd0(ppuVar11);
          func_0x000107c61170(lVar9);
        }
        else {
          uVar10 = uVar2;
          func_0x000107c61150(uVar2,PTR_s_respondsToSelector__11262c7e0,
                              PTR_s_attachUI_completion__1125a0c10);
          if ((uVar10 & 1) != 0) {
            puVar7 = &UNK_1105eb218;
            func_0x000107c613fc(&UNK_1105eb218,0x18,7);
            func_0x000107c61614(puVar7 + 0x10,lVar5);
            puVar8 = &UNK_1105eb900;
            func_0x000107c613fc(&UNK_1105eb900,0x20,7);
            *(undefined **)(puVar8 + 0x10) = puVar7;
            *(long *)(puVar8 + 0x18) = lVar9;
            uStack_88 = 0x102f41570;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_1000b0c7c;
            puStack_90 = &UNK_1105eb918;
            ppuVar11 = &puStack_a8;
            puStack_80 = puVar8;
            func_0x000107c60bc4(ppuVar11);
            puVar4 = puStack_80;
            func_0x000107c6157c(puVar7);
            func_0x000107c61174(lVar9);
            func_0x000107c6157c(puVar8);
            func_0x000107c61574(puVar4);
            func_0x000107c3e2c4(uVar2);
            func_0x000107c60bd0(ppuVar11);
            func_0x000107c61574(puVar7);
            func_0x000107c61574(puVar8);
          }
          func_0x000107c61170(lVar5);
          lVar5 = lVar9;
        }
        func_0x000107c61170(lVar5);
        func_0x000107c61574(uVar12);
        return;
      }
    }
    else {
      func_0x000107c61170();
    }
    puVar7 = &UNK_1105eb218;
    func_0x000107c613fc(&UNK_1105eb218,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,lVar5);
    func_0x0001000bb420(unaff_x20 + 0x20,&puStack_a8);
    puVar8 = &UNK_1105eb950;
    func_0x000107c613fc(&UNK_1105eb950,0x50,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(long *)(puVar8 + 0x18) = lVar9;
    func_0x000100102924(&puStack_a8,puVar8 + 0x20);
    *(ulong *)(puVar8 + 0x40) = uVar2;
    *(long *)(puVar8 + 0x48) = lVar3;
    puVar1 = (undefined8 *)(lVar5 + _DAT_112f29b50);
    uVar12 = *puVar1;
    uVar13 = puVar1[1];
    *puVar1 = 0x102f41578;
    puVar1[1] = puVar8;
    func_0x000107c61174(lVar3);
    func_0x000107c615f0(uVar2);
    func_0x000107c6157c(puVar7);
    func_0x000107c615f0(lVar9);
    func_0x000100d2c664(uVar12,uVar13);
    func_0x000107c61574(puVar7);
    if (*(char *)(lVar5 + _DAT_112f29b48) != '\x01') {
      puVar7 = &UNK_1105eb218;
      func_0x000107c613fc(&UNK_1105eb218,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,lVar5);
      puVar8 = &UNK_1105eb978;
      func_0x000107c613fc(&UNK_1105eb978,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(code **)(puVar8 + 0x18) = FUN_102f3d758;
      *(undefined8 *)(puVar8 + 0x20) = 0;
      uStack_88 = 0x102f41974;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_1105eb990;
      ppuVar11 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c61574(puStack_80);
      func_0x0001000d76cc(&UNK_10db65dc0,ppuVar11);
      func_0x000107c60bd0(ppuVar11);
    }
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 102f41980; end: 102f41a0f;  */

void FUN_102f41980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_102f421f8(param_1,param_2,param_3);
  return;
}



/* Entry: 102f41a10; end: 102f41a3f;  */

void FUN_102f41a10(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_102f43f04(param_1);
  return;
}



/* Entry: 102f41a40; end: 102f41aaf;  */

/* WARNING: Possible PIC construction at 0x000102f41a98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f41a9c) */

void FUN_102f41a40(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  puVar3 = &UNK_1105ec208;
  func_0x000107c613fc(&UNK_1105ec208,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(0x102f460f8,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102f41ab0; end: 102f41c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f41ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f29bb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f29bb8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f29bc0) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29bc8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29bd0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112f29bd8) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_112f29be0) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29be8);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29bf0);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29bf8);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c00) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c08) = param_18;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102f41c24; end: 102f41c37;  */

bool FUN_102f41c24(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102f41c38; end: 102f41ce3;  */

void FUN_102f41c38(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f41ce4; end: 102f41d1b;  */

void FUN_102f41ce4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 102f41d1c; end: 102f41dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f41d1c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112f29c10;
  uVar2 = 0;
  func_0x000102f44670();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112f29c18) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c28) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112f29c30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c38) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102f41dc8; end: 102f41eff; -[SCCalendarBasePageProvider initWithValdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f41dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = _DAT_112f29c10;
  uVar3 = 0;
  func_0x000102f44670();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  *(undefined1 *)(param_1 + _DAT_112f29c18) = 1;
  *(undefined8 *)(param_1 + _DAT_112f29c20) = 0;
  *(undefined8 *)(param_1 + _DAT_112f29c28) = 1;
  *(undefined1 *)(param_1 + _DAT_112f29c30) = 0;
  *(undefined8 *)(param_1 + _DAT_112f29c38) = param_3;
  func_0x000102f44690();
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  uStack_38 = uVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 102f41f00; end: 102f41fcf; -[SCCalendarBasePageProvider configureWithConfig:completion:] */

void FUN_102f41f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar2 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f114b00);
  func_0x000107c466bc(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = puVar1;
  func_0x000107c5ed2c(puVar1);
  (**(code **)(param_4 + 0x10))(param_4,puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102f41fd0; end: 102f41fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102f41fd0(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _DAT_112f29c18);
}



/* Entry: 102f41fe0; end: 102f41fef; -[SCCalendarBasePageProvider isProfilePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102f41fe0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f29c18);
}



/* Entry: 102f41ff0; end: 102f4200b;  */

void FUN_102f41ff0(void)

{
  func_0x000107c610f8(PTR_PTR_1126b1870);
                    /* WARNING: Could not recover jumptable at 0x00010c0639d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102f4200c; end: 102f4202b; -[SCCalendarBasePageProvider getPage] */

void FUN_102f4200c(void)

{
  func_0x000107c610f8(PTR_PTR_1126b1870);
  func_0x000107c49624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102f4202c; end: 102f42037;  */

undefined1  [16] FUN_102f4202c(void)

{
  return ZEXT816(0);
}



/* Entry: 102f42038; end: 102f4204f; -[SCCalendarBasePageProvider optionalDismissalCallback] */

void FUN_102f42038(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102f42050; end: 102f4207f; -[SCCalendarBasePageProvider presentationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102f42050(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f29c28);
}



/* Entry: 102f42080; end: 102f4208f; -[SCCalendarBasePageProvider source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102f42080(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f29c20);
}



/* Entry: 102f42090; end: 102f420bb; -[SCCalendarBasePageProvider init] */

void FUN_102f42090(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCalendarPageImpl.CalendarBasePageProvider",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f420bc);
  (*pcVar1)();
}



/* Entry: 102f420bc; end: 102f420c7;  */

void FUN_102f420bc(void)

{
  (*(code *)0x102f44690)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102f420c8; end: 102f42157; -[SCCalendarBasePageProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f420c8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f29c38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f29c10));
  return;
}



/* Entry: 102f42158; end: 102f421b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f42158(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29c40);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000100d2c9a4(uVar2,uVar3);
  return;
}



/* Entry: 102f421b4; end: 102f421f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102f421b4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f29c40;
  func_0x000107c61428(unaff_x20 + _DAT_112f29c40,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_102f421f4;
  return auVar2;
}



/* Entry: 102f421f4; end: 102f421f7;  */

void FUN_102f421f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 102f421f8; end: 102f4230b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f421f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffc0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c48) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29c50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c58) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29c60);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29c68);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29c40);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29c70);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar2 = _DAT_112f29c10;
  uVar3 = 0;
  func_0x000102f44670();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112f29c18) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c28) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112f29c30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c38) = param_1;
  func_0x000102f44690();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  puVar4[_DAT_112f29c30] = 1;
  return;
}



/* Entry: 102f4230c; end: 102f42327; -[SCCalendarCreationPageProvider initWithValdiRuntimeProvider:pageContextProvider:] */

void FUN_102f4230c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105ec1e0;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1105ec1e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_3);
  FUN_102f421f8();
  return;
}



/* Entry: 102f42328; end: 102f4280b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f42328(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  func_0x0001000bb420(param_1,auStack_80);
  uVar3 = 0;
  func_0x000103b1157c(0);
  plVar4 = &lStack_88;
  func_0x000107c6147c(plVar4,auStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
  lVar10 = _DAT_112febe78;
  if ((int)plVar4 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0x4364696c61766e49;
    func_0x000107c5fadc(0x4364696c61766e49,0xed00006769666e6f);
    func_0x000107c466bc(puVar6);
    func_0x000107c61170(uVar3);
    (*param_2)(puVar6);
  }
  else {
    *(bool *)(unaff_x20 + _DAT_112f29c18) = *(int *)(lStack_88 + _DAT_112febe78) - 1U < 2;
    *(undefined8 *)(unaff_x20 + _DAT_112f29c20) = *(undefined8 *)(lStack_88 + lVar10);
    uVar8 = ((undefined8 *)(lStack_88 + _DAT_112febe88))[1];
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29c50);
    uVar3 = *puVar1;
    uVar14 = puVar1[1];
    *puVar1 = *(undefined8 *)(lStack_88 + _DAT_112febe88);
    puVar1[1] = uVar8;
    func_0x000100d2c994();
    func_0x000100d2c9a4(uVar3,uVar14);
    uVar3 = *(undefined8 *)(lStack_88 + _DAT_112febee0);
    uVar14 = ((undefined8 *)(lStack_88 + _DAT_112febee0))[1];
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29c40);
    func_0x000107c61428(puVar1,auStack_80,1,0);
    uVar8 = *puVar1;
    uVar15 = puVar1[1];
    *puVar1 = uVar3;
    puVar1[1] = uVar14;
    func_0x000100d2c994(uVar3,uVar14);
    func_0x000100d2c9a4(uVar8,uVar15);
    lVar10 = *(long *)(lStack_88 + _DAT_112febe90 + 8);
    uVar9 = *(ulong *)(lStack_88 + _DAT_112febed8);
    puVar6 = (undefined *)0x0;
    if (uVar9 != 0) {
      uVar12 = uVar9 & 0xffffffffffffff8;
      if (uVar9 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar12 + 0x10);
      }
      else {
        uVar5 = uVar9;
        if (-1 < (long)uVar9) {
          uVar5 = uVar12;
        }
        func_0x000107c60480();
      }
      if (uVar5 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else if ((uVar9 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar12 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f4270c);
          (*pcVar2)();
        }
        puVar6 = *(undefined **)(uVar9 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar6 = (undefined *)0x0;
        FUN_102f45048(0,uVar9,&PTR_PTR_1126b1440,0x112d67d90);
      }
    }
    lVar13 = *(long *)(unaff_x20 + _DAT_112f29c58);
    if (lVar13 == 0) {
      uVar14 = *(undefined8 *)(lStack_88 + _DAT_112febe68);
      uVar15 = *(undefined8 *)(lStack_88 + _DAT_112febe70);
      puVar11 = &UNK_1105ebe50;
      func_0x000107c613fc(&UNK_1105ebe50,0x18,7);
      func_0x000107c61614(puVar11 + 0x10);
      puVar7 = &UNK_1105ebe78;
      func_0x000107c613fc(&UNK_1105ebe78,0x40,7);
      *(undefined **)(puVar7 + 0x10) = puVar11;
      puVar7[0x18] = lVar10 != 0;
      *(undefined **)(puVar7 + 0x20) = puVar6;
      *(long *)(puVar7 + 0x28) = lStack_88;
      *(code **)(puVar7 + 0x30) = param_2;
      *(undefined8 *)(puVar7 + 0x38) = param_3;
      func_0x000107c61174(puVar6);
      lVar10 = lStack_88;
      func_0x000107c61174(lStack_88);
      func_0x000107c6157c(param_3);
      uVar3 = uVar14;
      func_0x000107c61174(uVar14);
      uVar8 = uVar15;
      func_0x000107c61174(uVar15);
      func_0x000107c6157c(puVar11);
      FUN_102f4540c(uVar14,uVar15,FUN_102f446b0,puVar7);
      func_0x000107c61170(lVar10);
      func_0x000107c61574(puVar11);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar8);
      func_0x000107c61574(puVar7);
    }
    else {
      puVar11 = *(undefined **)(lStack_88 + _DAT_112febe70);
      if (puVar11 == (undefined *)0x0) {
        func_0x000107c61174(lVar13);
      }
      else {
        func_0x000102f46088(0,0x112d67d90,&PTR_PTR_1126b1440);
        func_0x000107c61174(lVar13);
        func_0x000107c61174(puVar11);
        FUN_102f48440();
      }
      FUN_102f42818(lVar13,puVar11,lStack_88);
      (*param_2)(0);
      func_0x000107c61170(lVar13);
      func_0x000107c61170(lStack_88);
      func_0x000107c61170(puVar6);
      puVar6 = puVar11;
    }
  }
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 102f4280c; end: 102f42817; -[SCCalendarCreationPageProvider configureWithConfig:completion:] */

void FUN_102f4280c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [32];
  
  func_0x000107c60bc4(param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c60bc4(param_4);
  FUN_102f45868(auStack_50,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102f42818; end: 102f42f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f42818(undefined8 param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  byte **ppbVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbStack_60;
  ulong uStack_58;
  
  puVar13 = PTR_PTR_1126ac880;
  func_0x000107c610f8();
  func_0x000107c462bc();
  lVar5 = _DAT_112f29c48;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f29c48);
  *(undefined **)(unaff_x20 + _DAT_112f29c48) = puVar13;
  func_0x000107c61174();
  func_0x000107c61170(uVar10);
  func_0x000107c54c38(puVar13);
  func_0x000107c61170(puVar13);
  uVar10 = *(undefined8 *)(param_3 + _DAT_112febe90);
  uVar14 = ((undefined8 *)(param_3 + _DAT_112febe90))[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29c60);
  uVar11 = puVar1[1];
  *puVar1 = uVar10;
  puVar1[1] = uVar14;
  func_0x000107c61434(uVar14);
  func_0x000107c6142c(uVar11);
  pbVar7 = *(byte **)(param_3 + _DAT_112febe98);
  uVar6 = ((ulong *)(param_3 + _DAT_112febe98))[1];
  puVar2 = (ulong *)(unaff_x20 + _DAT_112f29c68);
  uVar17 = puVar2[1];
  *puVar2 = (ulong)pbVar7;
  puVar2[1] = uVar6;
  func_0x000107c61434(uVar6);
  func_0x000107c6142c(uVar17);
  lVar4 = *(long *)(unaff_x20 + lVar5);
  if (lVar4 == 0) {
    return;
  }
  func_0x000107c61174();
  uVar11 = 0;
  if (uVar14 != 0) {
    func_0x000107c5fadc(uVar10);
    param_2 = uVar14;
    uVar11 = uVar10;
  }
  func_0x000107c543c0(lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar11);
  lVar4 = *(long *)(unaff_x20 + lVar5);
  if (lVar4 == 0) {
    return;
  }
  if (uVar6 == 0) {
    func_0x000107c61174(lVar4);
    puVar13 = (undefined *)0x0;
    goto LAB_102f42bdc;
  }
  param_2 = (ulong)pbVar7 & 0xffffffffffff;
  uVar17 = uVar6 >> 0x38 & 0xf;
  uVar14 = param_2;
  if ((uVar6 & 0x2000000000000000) != 0) {
    uVar14 = uVar17;
  }
  if (uVar14 == 0) {
    func_0x000107c61174(lVar4);
    puVar13 = (undefined *)0x0;
    goto LAB_102f42bdc;
  }
  if ((uVar6 >> 0x3c & 1) == 0) {
    if ((uVar6 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar7 >> 0x3c & 1) == 0) {
        func_0x000107c60358();
        param_2 = uVar6;
      }
      else {
        pbVar7 = (byte *)((uVar6 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar7 == 0x2b) {
        if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f42f00);
          (*pcVar3)();
        }
        lVar15 = param_2 - 1;
        if (lVar15 == 0) goto LAB_102f42ba0;
        lVar12 = 0;
        do {
          pbVar7 = pbVar7 + 1;
          if (((9 < *pbVar7 - 0x30) ||
              (lVar9 = lVar12 * 10, SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
             (uVar14 = (ulong)(byte)(*pbVar7 - 0x30), lVar12 = lVar9 + uVar14, SCARRY8(lVar9,uVar14)
             )) goto LAB_102f42ba0;
          uVar16 = 0;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      else if (*pbVar7 == 0x2d) {
        if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f42ef8);
          (*pcVar3)();
        }
        lVar15 = param_2 - 1;
        if (lVar15 == 0) {
LAB_102f42ba0:
          uVar16 = 1;
        }
        else {
          lVar12 = 0;
          do {
            pbVar7 = pbVar7 + 1;
            if (((9 < *pbVar7 - 0x30) ||
                (lVar9 = lVar12 * 10, SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
               (uVar14 = (ulong)(byte)(*pbVar7 - 0x30), lVar12 = lVar9 - uVar14,
               SBORROW8(lVar9,uVar14))) goto LAB_102f42ba0;
            uVar16 = 0;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
      }
      else {
        if (param_2 == 0) goto LAB_102f42ba0;
        lVar15 = 0;
        if (pbVar7 == (byte *)0x0) {
          uVar16 = 0;
        }
        else {
          do {
            if (((9 < *pbVar7 - 0x30) ||
                (lVar12 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar12 >> 0x3f))
               || (uVar14 = (ulong)(byte)(*pbVar7 - 0x30), lVar15 = lVar12 + uVar14,
                  SCARRY8(lVar12,uVar14))) goto LAB_102f42ba0;
            uVar16 = 0;
            param_2 = param_2 - 1;
            pbVar7 = pbVar7 + 1;
          } while (param_2 != 0);
        }
      }
    }
    else {
      pbStack_60 = pbVar7;
      uStack_58 = uVar6 & 0xffffffffffffff;
      uVar16 = (uint)pbVar7 & 0xff;
      if (uVar16 == 0x2b) {
        if (uVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f42f04);
          (*pcVar3)();
        }
        lVar15 = uVar17 - 1;
        if (lVar15 == 0) goto LAB_102f42ba0;
        lVar12 = 0;
        pbVar7 = (byte *)((ulong)&pbStack_60 | 1);
        do {
          if (((9 < *pbVar7 - 0x30) ||
              (lVar9 = lVar12 * 10, SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
             (uVar14 = (ulong)(byte)(*pbVar7 - 0x30), lVar12 = lVar9 + uVar14, SCARRY8(lVar9,uVar14)
             )) goto LAB_102f42ba0;
          uVar16 = 0;
          lVar15 = lVar15 + -1;
          pbVar7 = pbVar7 + 1;
        } while (lVar15 != 0);
      }
      else if (uVar16 == 0x2d) {
        if (uVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f42efc);
          (*pcVar3)();
        }
        lVar15 = uVar17 - 1;
        if (lVar15 == 0) goto LAB_102f42ba0;
        lVar12 = 0;
        pbVar7 = (byte *)((ulong)&pbStack_60 | 1);
        do {
          if (((9 < *pbVar7 - 0x30) ||
              (lVar9 = lVar12 * 10, SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
             (uVar14 = (ulong)(byte)(*pbVar7 - 0x30), lVar12 = lVar9 - uVar14,
             SBORROW8(lVar9,uVar14))) goto LAB_102f42ba0;
          uVar16 = 0;
          lVar15 = lVar15 + -1;
          pbVar7 = pbVar7 + 1;
        } while (lVar15 != 0);
      }
      else {
        if (uVar17 == 0) goto LAB_102f42ba0;
        lVar15 = 0;
        ppbVar8 = &pbStack_60;
        do {
          if (((9 < *(byte *)ppbVar8 - 0x30) ||
              (lVar12 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
             (uVar14 = (ulong)(byte)(*(byte *)ppbVar8 - 0x30), lVar15 = lVar12 + uVar14,
             SCARRY8(lVar12,uVar14))) goto LAB_102f42ba0;
          uVar16 = 0;
          uVar17 = uVar17 - 1;
          ppbVar8 = (byte **)((long)ppbVar8 + 1);
        } while (uVar17 != 0);
      }
    }
    func_0x000107c61174(lVar4);
  }
  else {
    func_0x000107c61174(lVar4);
    func_0x000107c61434(uVar6);
    param_2 = uVar6;
    func_0x000100fb6b80(pbVar7,uVar6,10);
    uVar16 = (uint)param_2;
    func_0x000107c6142c(uVar6);
  }
  if ((uVar16 & 0xff) == 1) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c47580();
  }
LAB_102f42bdc:
  func_0x000107c543c8(lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar13);
  lVar4 = *(long *)(unaff_x20 + lVar5);
  if (lVar4 != 0) {
    uVar14 = ((undefined8 *)(param_3 + _DAT_112febea0))[1];
    if (uVar14 == 0) {
      func_0x000107c61174();
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_3 + _DAT_112febea0);
      func_0x000107c61174();
      func_0x000107c5fadc(uVar10);
      param_2 = uVar14;
    }
    func_0x000107c543c4(lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar10);
    if ((*(long *)(unaff_x20 + lVar5) != 0) &&
       (func_0x000107c543bc(), *(long *)(unaff_x20 + lVar5) != 0)) {
      func_0x000107c543b8();
      lVar4 = *(long *)(unaff_x20 + lVar5);
      if (lVar4 != 0) {
        uVar14 = ((undefined8 *)(param_3 + _DAT_112febeb8))[1];
        if (uVar14 == 0) {
          func_0x000107c61174();
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(param_3 + _DAT_112febeb8);
          func_0x000107c61174();
          func_0x000107c5fadc(uVar10);
          param_2 = uVar14;
        }
        func_0x000107c543fc(lVar4);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(uVar10);
        lVar4 = *(long *)(unaff_x20 + lVar5);
        if (lVar4 != 0) {
          uVar14 = ((undefined8 *)(param_3 + _DAT_112febec0))[1];
          if (uVar14 == 0) {
            func_0x000107c61174();
            uVar10 = 0;
          }
          else {
            uVar10 = *(undefined8 *)(param_3 + _DAT_112febec0);
            func_0x000107c61174();
            func_0x000107c5fadc(uVar10);
            param_2 = uVar14;
          }
          func_0x000107c543e0(lVar4);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(uVar10);
          if ((*(long *)(unaff_x20 + lVar5) != 0) &&
             (func_0x000107c543d0(), *(long *)(unaff_x20 + lVar5) != 0)) {
            func_0x000107c543dc();
            lVar4 = *(long *)(unaff_x20 + lVar5);
            if (lVar4 != 0) {
              lVar15 = *(long *)(param_3 + _DAT_112febed8);
              if (lVar15 == 0) {
                func_0x000107c61174(lVar4);
              }
              else {
                param_2 = 0;
                func_0x000102f46088(0,0x112d67d90,&PTR_PTR_1126b1440);
                func_0x000107c61174(lVar4);
                func_0x000107c5fc48(lVar15);
              }
              func_0x000107c543e8(lVar4);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar15);
              lVar5 = *(long *)(unaff_x20 + lVar5);
              if (lVar5 != 0) {
                uVar10 = *(undefined8 *)(param_3 + _DAT_112febe78);
                func_0x000107c61174();
                FUN_102f45758(uVar10);
                if (param_2 == 0) {
                  uVar10 = 0;
                }
                else {
                  func_0x000107c5fadc();
                  func_0x000107c6142c(param_2);
                }
                func_0x000107c5a170(lVar5);
                func_0x000107c61170(lVar5);
                func_0x000107c61170(uVar10);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 102f42f04; end: 102f42f3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102f42f04(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112f29c50);
  auVar2 = *pauVar1;
  func_0x000100d2c994(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 102f42f40; end: 102f42f6f; -[SCCalendarCreationPageProvider optionalDismissalCallback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f42f40(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_112f29c50);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_112f29c50))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1105ec158;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 102f42f70; end: 102f42fa3; -[SCCalendarCreationPageProvider getPage] */

void FUN_102f42f70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102f42f54();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102f42fa4; end: 102f4305f; -[SCCalendarCreationPageProvider initWithValdiRuntimeProvider:] */

void FUN_102f42fa4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCalendarPageImpl.CalendarCreationPageProvider",0x2f,
                      "init(valdiRuntimeProvider:)",0x1b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f42fd0);
  (*pcVar1)();
}



/* Entry: 102f43060; end: 102f4306b;  */

void FUN_102f43060(void)

{
  FUN_102f455e4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102f4306c; end: 102f43107; -[SCCalendarCreationPageProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102f4309c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f430a0) */
/* WARNING: Removing unreachable block (ram,0x000100d2c9a4) */
/* WARNING: Removing unreachable block (ram,0x000100d2c9b0) */
/* WARNING: Removing unreachable block (ram,0x000100d2c9a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f4306c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f29c48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f29c70 + 8));
  return;
}



/* Entry: 102f43108; end: 102f4320b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f43108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffc0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c78) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29c80);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined **)(unaff_x20 + _DAT_112f29c88) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c90) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c98) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29ca0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar2 = _DAT_112f29c10;
  uVar3 = 0;
  func_0x000102f44670();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112f29c18) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c28) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112f29c30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c38) = param_1;
  func_0x000102f44690();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  *(undefined8 *)(puVar4 + _DAT_112f29c28) = 1;
  return;
}



/* Entry: 102f4320c; end: 102f43227; -[SCCalendarDetailPageProvider initWithValdiRuntimeProvider:pageContextProvider:] */

void FUN_102f4320c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105ec140;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1105ec140,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_3);
  FUN_102f43108();
  return;
}



/* Entry: 102f43228; end: 102f4329f;  */

void FUN_102f43228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7)

{
  func_0x000107c60bc4();
  func_0x000107c613fc(param_5,0x18,7);
  *(undefined8 *)(param_5 + 0x10) = param_4;
  func_0x000107c61174(param_3);
  (*param_7)();
  return;
}



/* Entry: 102f432a0; end: 102f432cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f432a0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f29c88);
  *(undefined8 *)(unaff_x20 + _DAT_112f29c88) = param_1;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 102f432d0; end: 102f43357; -[SCCalendarDetailPageProvider setParticipants:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f432d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000102f46088(0,0x112d67d90,&PTR_PTR_1126b1440);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f29c88);
  *(undefined8 *)(param_1 + _DAT_112f29c88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 102f43358; end: 102f4338b; -[SCCalendarDetailPageProvider setCurrentUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f43358(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f29c90);
  *(undefined8 *)(param_1 + _DAT_112f29c90) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102f4338c; end: 102f43613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f4338c(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_78;
  undefined1 auStack_70 [32];
  
  func_0x0001000bb420(param_1,auStack_70);
  uVar2 = 0;
  func_0x000103b12474(0);
  ppuVar3 = &puStack_78;
  func_0x000107c6147c(ppuVar3,auStack_70,PTR___sypN_11034f1a8 + 8,uVar2,6);
  lVar4 = _DAT_112febf30;
  if ((int)ppuVar3 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar2 = 0x4364696c61766e49;
    func_0x000107c5fadc(0x4364696c61766e49,0xed00006769666e6f);
    func_0x000107c466bc(puVar5);
    func_0x000107c61170(uVar2);
    (*param_2)(puVar5);
  }
  else {
    *(bool *)(unaff_x20 + _DAT_112f29c18) = *(int *)(puStack_78 + _DAT_112febf30) - 1U < 2;
    *(undefined8 *)(unaff_x20 + _DAT_112f29c20) = *(undefined8 *)(puStack_78 + lVar4);
    uVar8 = *(undefined8 *)((long)(puStack_78 + _DAT_112febf40) + 8);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29c80);
    uVar2 = *puVar1;
    uVar9 = puVar1[1];
    *puVar1 = *(undefined8 *)(puStack_78 + _DAT_112febf40);
    puVar1[1] = uVar8;
    func_0x000100d2c994();
    func_0x000100d2c9a4(uVar2,uVar9);
    *(undefined8 *)(unaff_x20 + _DAT_112f29c98) = *(undefined8 *)(puStack_78 + _DAT_112febf50);
    lVar4 = *(long *)(unaff_x20 + _DAT_112f29c90);
    if (lVar4 == 0) {
      uVar9 = *(undefined8 *)(puStack_78 + _DAT_112febf20);
      uVar10 = *(undefined8 *)(puStack_78 + _DAT_112febf28);
      puVar5 = &UNK_1105ebea0;
      func_0x000107c613fc(&UNK_1105ebea0,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_1105ebec8;
      func_0x000107c613fc(&UNK_1105ebec8,0x30,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(undefined **)(puVar6 + 0x18) = puStack_78;
      *(code **)(puVar6 + 0x20) = param_2;
      *(undefined8 *)(puVar6 + 0x28) = param_3;
      uVar2 = uVar10;
      func_0x000107c61174(uVar10);
      func_0x000107c6157c(puVar5);
      puVar7 = puStack_78;
      func_0x000107c61174(puStack_78);
      func_0x000107c6157c(param_3);
      uVar8 = uVar9;
      func_0x000107c61174(uVar9);
      FUN_102f4540c(uVar9,uVar10,FUN_102f45604,puVar6);
      func_0x000107c61170(puVar7);
      func_0x000107c61574(puVar5);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar2);
      func_0x000107c61574(puVar6);
      return;
    }
    func_0x000107c61174();
    FUN_102f43764();
    (*param_2)(0);
    func_0x000107c61170(lVar4);
    puVar5 = puStack_78;
  }
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 102f43614; end: 102f436b7;  */

void FUN_102f43614(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      FUN_102f43764();
      func_0x000107c61170(param_1);
    }
    (*param_6)(param_3);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 102f436b8; end: 102f436c3; -[SCCalendarDetailPageProvider configureWithConfig:completion:] */

void FUN_102f436b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [32];
  
  func_0x000107c60bc4(param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c60bc4(param_4);
  FUN_102f45cb4(auStack_50,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102f436c4; end: 102f43763;  */

void FUN_102f436c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined1 auStack_50 [32];
  
  func_0x000107c60bc4(param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c60bc4(param_4);
  (*param_5)(auStack_50,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102f43764; end: 102f43c0f;  */

/* WARNING: Possible PIC construction at 0x000102f437b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f437c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f4380c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f4385c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f438e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f43940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f4399c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f43a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f43ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f43b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f43b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f43bf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f43b78) */
/* WARNING: Removing unreachable block (ram,0x000102f43b88) */
/* WARNING: Removing unreachable block (ram,0x000102f43bdc) */
/* WARNING: Removing unreachable block (ram,0x000102f43bac) */
/* WARNING: Removing unreachable block (ram,0x000102f43be0) */
/* WARNING: Removing unreachable block (ram,0x000102f43b1c) */
/* WARNING: Removing unreachable block (ram,0x000102f43b2c) */
/* WARNING: Removing unreachable block (ram,0x000102f43acc) */
/* WARNING: Removing unreachable block (ram,0x000102f43adc) */
/* WARNING: Removing unreachable block (ram,0x000102f43a3c) */
/* WARNING: Removing unreachable block (ram,0x000102f43a4c) */
/* WARNING: Removing unreachable block (ram,0x000102f43a68) */
/* WARNING: Removing unreachable block (ram,0x000102f439a0) */
/* WARNING: Removing unreachable block (ram,0x000102f439b0) */
/* WARNING: Removing unreachable block (ram,0x000102f439cc) */
/* WARNING: Removing unreachable block (ram,0x000102f439e8) */
/* WARNING: Removing unreachable block (ram,0x000102f43a20) */
/* WARNING: Removing unreachable block (ram,0x000102f43a00) */
/* WARNING: Removing unreachable block (ram,0x000102f43a28) */
/* WARNING: Removing unreachable block (ram,0x000102f43944) */
/* WARNING: Removing unreachable block (ram,0x000102f43954) */
/* WARNING: Removing unreachable block (ram,0x000102f438e4) */
/* WARNING: Removing unreachable block (ram,0x000102f438f4) */
/* WARNING: Removing unreachable block (ram,0x000102f43860) */
/* WARNING: Removing unreachable block (ram,0x000102f43870) */
/* WARNING: Removing unreachable block (ram,0x000102f43890) */
/* WARNING: Removing unreachable block (ram,0x000102f438c8) */
/* WARNING: Removing unreachable block (ram,0x000102f438a8) */
/* WARNING: Removing unreachable block (ram,0x000102f438d0) */
/* WARNING: Removing unreachable block (ram,0x000102f43810) */
/* WARNING: Removing unreachable block (ram,0x000102f43820) */
/* WARNING: Removing unreachable block (ram,0x000102f437c8) */
/* WARNING: Removing unreachable block (ram,0x000102f43bc4) */
/* WARNING: Removing unreachable block (ram,0x000102f437d0) */
/* WARNING: Removing unreachable block (ram,0x000102f437b4) */
/* WARNING: Removing unreachable block (ram,0x000102f43bf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f43764(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ac878;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f29c78);
  *(undefined **)(unaff_x20 + _DAT_112f29c78) = puVar1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102f43c10; end: 102f43c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102f43c10(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112f29c80);
  auVar2 = *pauVar1;
  func_0x000100d2c994(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 102f43c4c; end: 102f43c7b; -[SCCalendarDetailPageProvider optionalDismissalCallback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f43c4c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_112f29c80);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_112f29c80))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1105ec0b8;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 102f43c7c; end: 102f43dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102f43c7c(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  
  (**(code **)(unaff_x20 + *param_1))();
  lVar1 = *(long *)(unaff_x20 + *param_2);
  if (lVar1 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f29c38);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar2 = lVar4;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar2 != 0) {
        if (param_1 != (long *)0x0) {
          puVar3 = (undefined *)*param_3;
          func_0x000107c610f8(puVar3);
          func_0x000107c61174(param_1);
          func_0x000107c61174(lVar1);
          func_0x000107c49520(puVar3);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_1);
          func_0x000107c615e8(lVar2);
          return puVar3;
        }
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(lVar2);
        goto LAB_102f43d7c;
      }
    }
    func_0x000107c61170(lVar1);
  }
LAB_102f43d7c:
  puVar3 = PTR_PTR_1126b1870;
  func_0x000107c610f8(PTR_PTR_1126b1870);
  func_0x000107c49624();
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 102f43dc4; end: 102f43df7; -[SCCalendarDetailPageProvider getPage] */

void FUN_102f43dc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102f43c60();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102f43df8; end: 102f43e87; -[SCCalendarDetailPageProvider initWithValdiRuntimeProvider:] */

void FUN_102f43df8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCalendarPageImpl.CalendarDetailPageProvider",0x2d,
                      "init(valdiRuntimeProvider:)",0x1b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f43e24);
  (*pcVar1)();
}



/* Entry: 102f43e88; end: 102f43e93;  */

void FUN_102f43e88(void)

{
  FUN_102f45610();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102f43e94; end: 102f43f03; -[SCCalendarDetailPageProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102f43eb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f43eb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f43e94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f29c78));
  return;
}



/* Entry: 102f43f04; end: 102f43fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f43f04(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffc0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29ca8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29cb0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29cb8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112f29c10;
  uVar3 = 0;
  func_0x000102f44670();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112f29c18) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c28) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112f29c30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c38) = param_1;
  func_0x000102f44690();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  *(undefined8 *)(puVar4 + _DAT_112f29c28) = 0;
  return;
}



/* Entry: 102f43fd8; end: 102f43fff; -[SCCalendarListPageProvider initWithValdiRuntimeProvider:] */

void FUN_102f43fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102f43f04();
  return;
}



/* Entry: 102f44000; end: 102f44203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f44000(undefined8 param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined1 auStack_70 [32];
  
  func_0x0001000bb420(param_1,auStack_70);
  uVar2 = 0;
  func_0x000103b129c4(0);
  ppuVar3 = &puStack_78;
  func_0x000107c6147c(ppuVar3,auStack_70,PTR___sypN_11034f1a8 + 8,uVar2,6);
  lVar5 = _DAT_112febfe0;
  if ((int)ppuVar3 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar2 = 0x4364696c61766e49;
    func_0x000107c5fadc(0x4364696c61766e49,0xed00006769666e6f);
    func_0x000107c466bc(puVar4);
    func_0x000107c61170(uVar2);
    puStack_78 = puVar4;
  }
  else {
    *(bool *)(unaff_x20 + _DAT_112f29c18) = *(int *)(puStack_78 + _DAT_112febfe0) - 1U < 2;
    uVar6 = *(undefined8 *)(puStack_78 + lVar5);
    *(undefined8 *)(unaff_x20 + _DAT_112f29c20) = uVar6;
    uVar7 = *(undefined8 *)((long)(puStack_78 + _DAT_112febff0) + 8);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29cb8);
    uVar2 = *puVar1;
    lVar5 = puVar1[1];
    *puVar1 = *(undefined8 *)(puStack_78 + _DAT_112febff0);
    puVar1[1] = uVar7;
    func_0x000100d2c994();
    func_0x000100d2c9a4(uVar2);
    uVar2 = *(undefined8 *)(puStack_78 + _DAT_112febfd0);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f29ca8);
    *(undefined8 *)(unaff_x20 + _DAT_112f29ca8) = uVar2;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61170(uVar7);
    func_0x000102f45204(uVar6);
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar5);
    }
    func_0x000107c5a170(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar6);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f29cb0);
    *(undefined8 *)(unaff_x20 + _DAT_112f29cb0) = *(undefined8 *)(puStack_78 + _DAT_112febfd8);
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
    puVar4 = (undefined *)0x0;
  }
  (*param_2)(puVar4);
  func_0x000107c61170(puStack_78);
  return;
}



/* Entry: 102f44204; end: 102f442af; -[SCCalendarListPageProvider configureWithConfig:completion:] */

void FUN_102f44204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  puVar1 = &UNK_1105ec0a0;
  func_0x000107c613fc(&UNK_1105ec0a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  FUN_102f44000(auStack_50,0x102f45750,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102f442b0; end: 102f442eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102f442b0(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112f29cb8);
  auVar2 = *pauVar1;
  func_0x000100d2c994(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 102f442ec; end: 102f442ff; -[SCCalendarListPageProvider optionalDismissalCallback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f442ec(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_112f29cb8);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_112f29cb8))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1105ec068;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 102f44300; end: 102f444bb;  */

void FUN_102f44300(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + *param_3))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    uStack_48 = param_4;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 102f444bc; end: 102f444ef; -[SCCalendarListPageProvider getPage] */

void FUN_102f444bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102f44390();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102f444f0; end: 102f4452f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f444f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112f29ca8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112f29cb0));
  if (*(long *)(unaff_x20 + _DAT_112f29cb8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(unaff_x20 + _DAT_112f29cb8))[1]);
    return;
  }
  return;
}



/* Entry: 102f44530; end: 102f4453b;  */

void FUN_102f44530(void)

{
  (*(code *)0x102f45630)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102f4453c; end: 102f44587; -[SCCalendarListPageProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f4453c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f29ca8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f29cb0));
  if (*(long *)(param_1 + _DAT_112f29cb8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f29cb8))[1]);
    return;
  }
  return;
}



/* Entry: 102f44588; end: 102f446af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f44588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112f29bb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f29bb8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f29bc0) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29bc8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29bd0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112f29bd8) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_112f29be0) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29be8);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29bf0);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29bf8);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c00) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112f29c08) = param_18;
  func_0x000102f45650();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102f446b0; end: 102f446b3;  */

void FUN_102f446b0(void)

{
  func_0x000102f4270c();
  return;
}



/* Entry: 102f446b4; end: 102f448a3; -[SCCalendarParticipantsViewerPageProvider initWithValdiRuntimeProvider:participants:groups:currentUserId:eventName:isReadOnly:groupsEnabled:onParticipantsChanged:onAddFriends:onDismiss:userActionHandling:friendStore:] */

void FUN_102f446b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined4 param_8,undefined1 param_9
                  ,undefined4 param_10,long param_11,long param_12,long param_13,undefined8 param_14
                  ,undefined8 param_15)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_90;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  uVar1 = 0;
  func_0x000102f46088(0,0x112d67d90,&PTR_PTR_1126b1440);
  func_0x000107c5fc54();
  if (param_5 == 0) {
    lStack_90 = 0;
  }
  else {
    uVar1 = 0;
    func_0x000102f46088(0,0x112f29a08,&PTR_PTR_1126cf670);
    func_0x000107c5fc54();
    lStack_90 = param_5;
  }
  func_0x000107c5faec();
  if (param_7 == 0) {
    uStack_b0 = 0;
    lStack_a8 = 0;
  }
  else {
    uStack_b0 = uVar1;
    func_0x000107c5faec();
    lStack_a8 = param_7;
  }
  if (param_11 != 0) {
    puVar2 = &UNK_1105ec050;
    func_0x000107c613fc(&UNK_1105ec050,0x18,7);
    *(long *)(puVar2 + 0x10) = param_11;
  }
  if (param_12 != 0) {
    puVar2 = &UNK_1105ec028;
    func_0x000107c613fc(&UNK_1105ec028,0x18,7);
    *(long *)(puVar2 + 0x10) = param_12;
  }
  if (param_13 != 0) {
    puVar2 = &UNK_1105ec000;
    func_0x000107c613fc(&UNK_1105ec000,0x18,7);
    *(long *)(puVar2 + 0x10) = param_13;
  }
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_14);
  func_0x000107c615f0(param_15);
  FUN_102f44588(param_3,param_4,lStack_90,param_6,uVar1,lStack_a8,uStack_b0,param_8,param_9);
  return;
}



/* Entry: 102f448a4; end: 102f44943;  */

/* WARNING: Possible PIC construction at 0x000102f4492c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f44930) */

void FUN_102f448a4(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000102f46088(0,0x112d67d90,&PTR_PTR_1126b1440);
  func_0x000107c5fc48(param_1,uVar1);
  if (param_2 != 0) {
    uVar1 = 0;
    func_0x000102f46088(0,0x112f29a08,&PTR_PTR_1126cf670);
    func_0x000107c5fc48(param_2,uVar1);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f44944; end: 102f44e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102f44944(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  code *pcVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  ppuVar8 = &puStack_90;
  puVar2 = PTR_PTR_1126ac860;
  func_0x000107c610f8(PTR_PTR_1126ac860);
  func_0x000107c453e4();
  if (*(long *)(unaff_x20 + _DAT_112f29c00) != 0) {
    func_0x000107c5a2d8(puVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_112f29c08) != 0) {
    func_0x000107c54c28(puVar2);
  }
  puVar3 = PTR_PTR_1126ac868;
  func_0x000107c610f8(PTR_PTR_1126ac868);
  func_0x000107c453e4();
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f29bb8);
  uVar4 = 0;
  func_0x000102f46088(0,0x112d67d90,&PTR_PTR_1126b1440);
  func_0x000107c5fc48(uVar9,uVar4);
  func_0x000107c57240(puVar3);
  func_0x000107c61170(uVar9);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f29bc8);
  func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_112f29bc8))[1]);
  func_0x000107c53cc4(puVar3);
  func_0x000107c61170(uVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_112f29bd0))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f29bd0);
    func_0x000107c5fadc(uVar4);
  }
  func_0x000107c546c0(puVar3);
  func_0x000107c61170(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c556b0(puVar3);
  func_0x000107c61170(puVar5);
  cVar1 = *(char *)(unaff_x20 + _DAT_112f29be0);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c54f90(puVar3);
  func_0x000107c61170(puVar5);
  if ((cVar1 == '\x01') && (lVar10 = *(long *)(unaff_x20 + _DAT_112f29bc0), lVar10 != 0)) {
    uVar4 = 0;
    func_0x000102f46088(0,0x112f29a08,&PTR_PTR_1126cf670);
    func_0x000107c5fc48(lVar10,uVar4);
    func_0x000107c54f8c(puVar3);
    func_0x000107c61170(lVar10);
  }
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  lVar10 = *(long *)(unaff_x20 + _DAT_112f29be8);
  if (lVar10 != 0) {
    puVar11 = (undefined *)((long *)(unaff_x20 + _DAT_112f29be8))[1];
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_102f44e20;
    puStack_78 = &UNK_1105ebfa8;
    pcStack_70 = (code *)lVar10;
    puStack_68 = puVar11;
    func_0x000107c60bc4(&puStack_90);
    puVar13 = puStack_68;
    func_0x000100d2c994(lVar10,puVar11);
    func_0x000107c6157c(puVar11);
    func_0x000107c61574(puVar13);
    func_0x000107c56de4(puVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000100d2c9a4(lVar10,puVar11);
  }
  lVar10 = *(long *)(unaff_x20 + _DAT_112f29bf0);
  if (lVar10 != 0) {
    lVar12 = ((long *)(unaff_x20 + _DAT_112f29bf0))[1];
    puVar13 = &UNK_1105ebf68;
    func_0x000107c613fc(&UNK_1105ebf68,0x20,7);
    *(long *)(puVar13 + 0x10) = lVar10;
    *(long *)(puVar13 + 0x18) = lVar12;
    pcStack_70 = (code *)0x102f456cc;
    puStack_90 = puVar5;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_102f41a40;
    puStack_78 = &UNK_1105ebf80;
    puStack_68 = puVar13;
    func_0x000107c60bc4(&puStack_90);
    puVar13 = puStack_68;
    func_0x000100d2c994(lVar10,lVar12);
    func_0x000107c6157c(lVar12);
    func_0x000107c61574(puVar13);
    func_0x000107c56c44(puVar3);
    func_0x000107c60bd0(ppuVar7);
    func_0x000100d2c9a4(lVar10,lVar12);
  }
  lVar10 = *(long *)(unaff_x20 + _DAT_112f29bf8);
  lVar12 = ((long *)(unaff_x20 + _DAT_112f29bf8))[1];
  if (lVar10 == 0) {
    puVar13 = (undefined *)0x0;
    pcVar14 = FUN_102f44ec8;
  }
  else {
    puVar13 = &UNK_1105ebf40;
    func_0x000107c613fc(&UNK_1105ebf40,0x20,7);
    *(long *)(puVar13 + 0x10) = lVar10;
    *(long *)(puVar13 + 0x18) = lVar12;
    pcVar14 = FUN_102f456ac;
  }
  puVar11 = &UNK_1105ebef0;
  func_0x000107c613fc(&UNK_1105ebef0,0x20,7);
  *(code **)(puVar11 + 0x10) = pcVar14;
  *(undefined **)(puVar11 + 0x18) = puVar13;
  pcStack_70 = FUN_102f45670;
  puStack_90 = puVar5;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_1000f6b44;
  puStack_78 = &UNK_1105ebf08;
  puStack_68 = puVar11;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000100d2c994(lVar10,lVar12);
  func_0x000107c61574(puVar5);
  func_0x000107c56d08(puVar3);
  func_0x000107c60bd0(ppuVar8);
  lVar10 = *(long *)(unaff_x20 + _DAT_112f29bb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 != 0) {
    lVar12 = lVar10;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    if (lVar12 != 0) {
      puVar5 = PTR_PTR_1126ac870;
      func_0x000107c610f8(PTR_PTR_1126ac870);
      func_0x000107c61174(puVar3);
      func_0x000107c61174(puVar2);
      func_0x000107c49520(puVar5);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar2);
      func_0x000107c615e8(lVar12);
      return puVar5;
    }
  }
  puVar5 = PTR_PTR_1126b1870;
  func_0x000107c610f8(PTR_PTR_1126b1870);
  func_0x000107c49624();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return puVar5;
}



/* Entry: 102f44e20; end: 102f44ec7;  */

/* WARNING: Possible PIC construction at 0x000102f44eb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f44eb4) */

void FUN_102f44e20(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  func_0x000102f46088(0,0x112d67d90,&PTR_PTR_1126b1440);
  func_0x000107c5fc54(param_2,uVar3);
  if (param_3 != 0) {
    uVar3 = 0;
    func_0x000102f46088(0,0x112f29a08,&PTR_PTR_1126cf670);
    func_0x000107c5fc54(param_3,uVar3);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102f44ec8; end: 102f44ecb;  */

void FUN_102f44ec8(void)

{
  return;
}



/* Entry: 102f44ecc; end: 102f44eff; -[SCCalendarParticipantsViewerPageProvider createPage] */

void FUN_102f44ecc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102f44944();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102f44f00; end: 102f44f2b; -[SCCalendarParticipantsViewerPageProvider init] */

void FUN_102f44f00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCalendarPageImpl.CalendarParticipantsViewerPageProvider",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f44f2c);
  (*pcVar1)();
}



/* Entry: 102f44f2c; end: 102f44f37;  */

void FUN_102f44f2c(void)

{
  (*(code *)0x102f45650)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102f44f38; end: 102f44f67;  */

void FUN_102f44f38(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102f44f68; end: 102f45033; -[SCCalendarParticipantsViewerPageProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102f45018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f4501c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f44f68(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f29bb0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f29bb8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f29bc0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f29bc8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f29bd0 + 8));
  func_0x000100d2c9a4(*(undefined8 *)(param_1 + _DAT_112f29be8),
                      ((undefined8 *)(param_1 + _DAT_112f29be8))[1]);
  func_0x000100d2c9a4(*(undefined8 *)(param_1 + _DAT_112f29bf0),
                      ((undefined8 *)(param_1 + _DAT_112f29bf0))[1]);
  func_0x000100d2c9a4(*(undefined8 *)(param_1 + _DAT_112f29bf8),
                      ((undefined8 *)(param_1 + _DAT_112f29bf8))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f29c00));
  return;
}



/* Entry: 102f45034; end: 102f45047;  */

ulong FUN_102f45034(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f4512c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f45130);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b1440;
    func_0x000107c61168(PTR_PTR_1126b1440);
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
    puVar4 = PTR_PTR_1126b1440;
    func_0x000107c61168(PTR_PTR_1126b1440);
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
  func_0x000102f46088(0,0x112d67d90,&PTR_PTR_1126b1440);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102f45204);
  (*pcVar2)();
}



/* Entry: 102f45048; end: 102f4540b;  */

ulong FUN_102f45048(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f4512c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f45130);
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
  func_0x000102f46088(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102f45204);
  (*pcVar2)();
}



/* Entry: 102f4540c; end: 102f455e3;  */

void FUN_102f4540c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000102f46088(0,0x112d67d90,&PTR_PTR_1126b1440);
    func_0x000107c61174();
    FUN_102f48440();
  }
  if (param_2 == 0) {
    param_2 = 0;
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  }
  else {
    func_0x000102f46088(0,0x112d67d90,&PTR_PTR_1126b1440);
    func_0x000107c61174();
    FUN_102f48440();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  }
  PTR__OBJC_CLASS___NSError_1126ae858 = puVar1;
  if (param_1 == 0) {
    func_0x000107c610f8();
    uVar2 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010f114c30);
    func_0x000107c466bc();
    func_0x000107c61170(uVar2);
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  puVar3 = &UNK_1105ec230;
  func_0x000107c613fc(&UNK_1105ec230,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(long *)(puVar3 + 0x20) = param_1;
  *(long *)(puVar3 + 0x28) = param_2;
  *(undefined **)(puVar3 + 0x30) = puVar1;
  uStack_50 = 0x102f4605c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105ec248;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c614b0(puVar1);
  func_0x000107c61574(puVar3);
  func_0x0001000d76cc(&UNK_10db65ed0,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c614ac(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102f455e4; end: 102f45603;  */

void FUN_102f455e4(void)

{
  func_0x000107c61168(&PTR_PTR_1128ac990);
  return;
}



/* Entry: 102f45604; end: 102f4560f;  */

void FUN_102f45604(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0,*(undefined8 *)(unaff_x20 + 0x18),pcVar1,
                      *(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      FUN_102f43764();
      func_0x000107c61170(param_1);
    }
    (*pcVar1)(param_3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102f45610; end: 102f4566f;  */

void FUN_102f45610(void)

{
  func_0x000107c61168(&PTR_PTR_1128acc00);
  return;
}



/* Entry: 102f45670; end: 102f4568f;  */

void FUN_102f45670(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102f45690; end: 102f456ab;  */

void FUN_102f45690(long param_1,long param_2)

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



/* Entry: 102f456ac; end: 102f456eb;  */

void FUN_102f456ac(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102f456ec; end: 102f456ef;  */

void FUN_102f456ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f29cc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db65e30;
  func_0x000107c61520(&UNK_10db65e30,&UNK_1105ebfe0);
  puRam0000000112f29cc0 = puVar1;
  return;
}



/* Entry: 102f456f0; end: 102f4572f;  */

void FUN_102f456f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f29cc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db65e30;
  func_0x000107c61520(&UNK_10db65e30,&UNK_1105ebfe0);
  puRam0000000112f29cc0 = puVar1;
  return;
}



/* Entry: 102f45730; end: 102f45757;  */

undefined1  [16] FUN_102f45730(void)

{
  return ZEXT816(0x1105ebfe0);
}



/* Entry: 102f45758; end: 102f45867;  */

void FUN_102f45758(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lStack_38;
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      return;
    }
    if (param_1 == 1) {
      lVar2 = 0;
      func_0x000107c31200(0,0);
      func_0x000107c61180();
    }
    else {
      if (param_1 != 2) {
LAB_102f45844:
        lStack_38 = param_1;
        func_0x000107c60614(&UNK_1106d3120,&lStack_38,&UNK_1106d3120,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f45868);
        (*pcVar1)();
      }
      lVar2 = 1;
      func_0x000107c31200(1,0);
      func_0x000107c61180();
    }
  }
  else if (param_1 == 3) {
    lVar2 = 0;
    func_0x000107c31200();
    func_0x000107c61180();
  }
  else {
    if (param_1 == 4) {
      return;
    }
    if (param_1 != 5) goto LAB_102f45844;
    lVar2 = 5;
    func_0x000107c31200(5,0);
    func_0x000107c61180();
  }
  if (lVar2 != 0) {
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102f45868; end: 102f45cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f45868(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  puVar3 = &UNK_1105ec190;
  func_0x000107c613fc(&UNK_1105ec190,0x18,7);
  *(long *)(puVar3 + 0x10) = param_3;
  func_0x0001000bb420(param_1,auStack_80);
  func_0x000107c60bc4(param_3);
  uVar4 = 0;
  func_0x000103b1157c(0);
  plVar5 = &lStack_88;
  func_0x000107c6147c(plVar5,auStack_80,PTR___sypN_11034f1a8 + 8,uVar4,6);
  lVar14 = _DAT_112febe78;
  if ((int)plVar5 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar4 = 0x4364696c61766e49;
    func_0x000107c5fadc(0x4364696c61766e49,0xed00006769666e6f);
    func_0x000107c466bc(puVar7);
    func_0x000107c61170(uVar4);
    puVar11 = puVar7;
    func_0x000107c5ed2c(puVar7);
    (**(code **)(param_3 + 0x10))(param_3,puVar11);
    func_0x000107c61574(puVar3);
  }
  else {
    *(bool *)(param_2 + _DAT_112f29c18) = *(int *)(lStack_88 + _DAT_112febe78) - 1U < 2;
    *(undefined8 *)(param_2 + _DAT_112f29c20) = *(undefined8 *)(lStack_88 + lVar14);
    uVar9 = ((undefined8 *)(lStack_88 + _DAT_112febe88))[1];
    puVar1 = (undefined8 *)(param_2 + _DAT_112f29c50);
    uVar4 = *puVar1;
    uVar12 = puVar1[1];
    *puVar1 = *(undefined8 *)(lStack_88 + _DAT_112febe88);
    puVar1[1] = uVar9;
    func_0x000100d2c994();
    func_0x000100d2c9a4(uVar4,uVar12);
    uVar4 = *(undefined8 *)(lStack_88 + _DAT_112febee0);
    uVar12 = ((undefined8 *)(lStack_88 + _DAT_112febee0))[1];
    puVar1 = (undefined8 *)(param_2 + _DAT_112f29c40);
    func_0x000107c61428(puVar1,auStack_80,1,0);
    uVar9 = *puVar1;
    uVar16 = puVar1[1];
    *puVar1 = uVar4;
    puVar1[1] = uVar12;
    func_0x000100d2c994(uVar4,uVar12);
    func_0x000100d2c9a4(uVar9,uVar16);
    lVar14 = *(long *)(lStack_88 + _DAT_112febe90 + 8);
    uVar10 = *(ulong *)(lStack_88 + _DAT_112febed8);
    if (uVar10 == 0) {
LAB_102f45aa8:
      puVar7 = (undefined *)0x0;
    }
    else {
      uVar13 = uVar10 & 0xffffffffffffff8;
      if (uVar10 >> 0x3e == 0) {
        uVar6 = *(ulong *)(uVar13 + 0x10);
      }
      else {
        uVar6 = uVar10;
        if (-1 < (long)uVar10) {
          uVar6 = uVar13;
        }
        func_0x000107c60480();
      }
      if (uVar6 == 0) goto LAB_102f45aa8;
      if ((uVar10 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar13 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f45cb4);
          (*pcVar2)();
        }
        puVar7 = *(undefined **)(uVar10 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar7 = (undefined *)0x0;
        FUN_102f45048(0,uVar10,&PTR_PTR_1126b1440,0x112d67d90);
      }
    }
    lVar15 = *(long *)(param_2 + _DAT_112f29c58);
    if (lVar15 == 0) {
      uVar12 = *(undefined8 *)(lStack_88 + _DAT_112febe68);
      uVar16 = *(undefined8 *)(lStack_88 + _DAT_112febe70);
      puVar11 = &UNK_1105ebe50;
      func_0x000107c613fc(&UNK_1105ebe50,0x18,7);
      func_0x000107c61614(puVar11 + 0x10,param_2);
      puVar8 = &UNK_1105ec1b8;
      func_0x000107c613fc(&UNK_1105ec1b8,0x40,7);
      *(undefined **)(puVar8 + 0x10) = puVar11;
      puVar8[0x18] = lVar14 != 0;
      *(undefined **)(puVar8 + 0x20) = puVar7;
      *(long *)(puVar8 + 0x28) = lStack_88;
      *(undefined8 *)(puVar8 + 0x30) = 0x102f46110;
      *(undefined **)(puVar8 + 0x38) = puVar3;
      func_0x000107c61174(puVar7);
      lVar14 = lStack_88;
      func_0x000107c61174(lStack_88);
      func_0x000107c6157c(puVar3);
      uVar4 = uVar12;
      func_0x000107c61174(uVar12);
      uVar9 = uVar16;
      func_0x000107c61174(uVar16);
      func_0x000107c6157c(puVar11);
      FUN_102f4540c(uVar12,uVar16,0x102f46104,puVar8);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(lVar14);
      func_0x000107c61574(puVar11);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar9);
      func_0x000107c61574(puVar8);
      goto LAB_102f45c64;
    }
    puVar11 = *(undefined **)(lStack_88 + _DAT_112febe70);
    if (puVar11 == (undefined *)0x0) {
      func_0x000107c61174(lVar15);
      puVar11 = (undefined *)0x0;
    }
    else {
      func_0x000102f46088(0,0x112d67d90,&PTR_PTR_1126b1440);
      func_0x000107c61174(lVar15);
      func_0x000107c61174(puVar11);
      FUN_102f48440();
    }
    FUN_102f42818(lVar15,puVar11,lStack_88);
    (**(code **)(param_3 + 0x10))(param_3,0);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(lStack_88);
  }
  func_0x000107c61170(puVar7);
  puVar7 = puVar11;
LAB_102f45c64:
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 102f45cb4; end: 102f45f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f45cb4(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_78;
  undefined1 auStack_70 [32];
  
  puVar3 = &UNK_1105ec0f0;
  func_0x000107c613fc(&UNK_1105ec0f0,0x18,7);
  *(long *)(puVar3 + 0x10) = param_3;
  func_0x0001000bb420(param_1,auStack_70);
  func_0x000107c60bc4(param_3);
  uVar4 = 0;
  func_0x000103b12474(0);
  ppuVar5 = &puStack_78;
  func_0x000107c6147c(ppuVar5,auStack_70,PTR___sypN_11034f1a8 + 8,uVar4,6);
  lVar2 = _DAT_112febf30;
  if ((int)ppuVar5 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar4 = 0x4364696c61766e49;
    func_0x000107c5fadc(0x4364696c61766e49,0xed00006769666e6f);
    func_0x000107c466bc(puVar6);
    func_0x000107c61170(uVar4);
    puVar7 = puVar6;
    func_0x000107c5ed2c(puVar6);
    (**(code **)(param_3 + 0x10))(param_3,puVar7);
    func_0x000107c61574(puVar3);
  }
  else {
    *(bool *)(param_2 + _DAT_112f29c18) = *(int *)(puStack_78 + _DAT_112febf30) - 1U < 2;
    *(undefined8 *)(param_2 + _DAT_112f29c20) = *(undefined8 *)(puStack_78 + lVar2);
    uVar9 = *(undefined8 *)((long)(puStack_78 + _DAT_112febf40) + 8);
    puVar1 = (undefined8 *)(param_2 + _DAT_112f29c80);
    uVar4 = *puVar1;
    uVar10 = puVar1[1];
    *puVar1 = *(undefined8 *)(puStack_78 + _DAT_112febf40);
    puVar1[1] = uVar9;
    func_0x000100d2c994();
    func_0x000100d2c9a4(uVar4,uVar10);
    *(undefined8 *)(param_2 + _DAT_112f29c98) = *(undefined8 *)(puStack_78 + _DAT_112febf50);
    puVar6 = *(undefined **)(param_2 + _DAT_112f29c90);
    if (puVar6 == (undefined *)0x0) {
      uVar10 = *(undefined8 *)(puStack_78 + _DAT_112febf20);
      uVar11 = *(undefined8 *)(puStack_78 + _DAT_112febf28);
      puVar6 = &UNK_1105ebea0;
      func_0x000107c613fc(&UNK_1105ebea0,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,param_2);
      puVar7 = &UNK_1105ec118;
      func_0x000107c613fc(&UNK_1105ec118,0x30,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined **)(puVar7 + 0x18) = puStack_78;
      *(undefined8 *)(puVar7 + 0x20) = 0x102f4610c;
      *(undefined **)(puVar7 + 0x28) = puVar3;
      uVar4 = uVar11;
      func_0x000107c61174(uVar11);
      func_0x000107c6157c(puVar6);
      puVar8 = puStack_78;
      func_0x000107c61174(puStack_78);
      func_0x000107c6157c(puVar3);
      uVar9 = uVar10;
      func_0x000107c61174(uVar10);
      FUN_102f4540c(uVar10,uVar11,0x102f46100,puVar7);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(puVar8);
      func_0x000107c61574(puVar6);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar4);
      func_0x000107c61574(puVar7);
      return;
    }
    func_0x000107c61174();
    FUN_102f43764();
    (**(code **)(param_3 + 0x10))(param_3,0);
    func_0x000107c61574(puVar3);
    puVar7 = puStack_78;
  }
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 102f45f9c; end: 102f4605b;  */

void FUN_102f45f9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102f4605c; end: 102f460c7;  */

void FUN_102f4605c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  return;
}


