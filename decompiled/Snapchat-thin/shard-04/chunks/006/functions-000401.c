/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036b16e0; end: 1036b1717; -[_TtC37SnapEditorFramePickerPluginEntryPoint27SnapEditorFramePickerPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036b16fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b1700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b16e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f86908));
  return;
}



/* Entry: 1036b1718; end: 1036b173b;  */

void FUN_1036b1718(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036b173c; end: 1036b1b07;  */

void FUN_1036b173c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  puVar1 = &UNK_11067e590;
  func_0x000107c613fc(&UNK_11067e590,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_9;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  *(undefined8 *)(puVar1 + 0x50) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(0x1036b1840,puVar1);
  return;
}



/* Entry: 1036b1b08; end: 1036b1b17;  */

undefined1  [16] FUN_1036b1b08(void)

{
  return ZEXT816(0x11067e5b8);
}



/* Entry: 1036b1b18; end: 1036b1b47;  */

void FUN_1036b1b18(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c42d48();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1036b1b48; end: 1036b1b5b;  */

bool FUN_1036b1b48(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1036b1b5c; end: 1036b1c07;  */

void FUN_1036b1b5c(void)

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



/* Entry: 1036b1c08; end: 1036b1c17;  */

void FUN_1036b1c08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1036b1c18; end: 1036b1d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036b1c18(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_112f86950;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112f86950);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(lVar6 + 0x68))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
               lVar2);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar5 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010f158ef0);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar5);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar5);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar3);
  return puVar4;
}



/* Entry: 1036b1d4c; end: 1036b1dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1036b1d4c(void)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f86958;
  pcVar2 = *(char **)(unaff_x20 + _DAT_112f86958);
  pcVar3 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar3 = "mainPerformer";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(char **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    pcVar2 = (char *)0x0;
  }
  func_0x000107c615f0(pcVar2);
  return pcVar3;
}



/* Entry: 1036b1dbc; end: 1036b1eeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b1dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f86940) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f86948) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f86950) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f86958) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f86960) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f86968) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f86970) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f86978) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f86980) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f86988) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f86990) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f86998) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f869a0) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_112f869a8) = param_10;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036b1eec; end: 1036b1feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b1eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112f86940) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f86948) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f86950) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f86958) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f86960) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f86968) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f86970) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f86978) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f86980) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f86988) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f86990) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f86998) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f869a0) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_112f869a8) = param_10;
  func_0x0001036b1fcc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036b1fec; end: 1036b2253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b1fec(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  ppuVar9 = &puStack_90;
  uVar3 = (undefined1)*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f86980) + _DAT_113077160);
  func_0x000107c5b248();
  lVar2 = _DAT_112f86948;
  *(undefined1 *)(unaff_x20 + _DAT_112f86948) = uVar3;
  puVar4 = &UNK_11067e6d8;
  func_0x000107c613fc(&UNK_11067e6d8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = PTR_PTR_1126ad3d8;
  func_0x000107c610f8();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = (code *)0x1036b47c4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1036b2d00;
  puStack_78 = &UNK_11067e6f0;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c6157c(puVar4);
  func_0x000107c46b44();
  func_0x000107c60bd0(ppuVar6);
  puVar8 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar8);
  if (*(char *)(unaff_x20 + lVar2) == '\x01') {
    puVar4 = &UNK_11067e6d8;
    func_0x000107c613fc(&UNK_11067e6d8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcStack_70 = FUN_1036b31d0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1036b2d00;
    puStack_78 = &UNK_11067e768;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c54ed4(puVar5);
    func_0x000107c60bd0(ppuVar7);
  }
  puVar4 = PTR_PTR_1126ad3e0;
  func_0x000107c610f8(PTR_PTR_1126ad3e0);
  func_0x000107c453e4();
  func_0x000107c5372c(puVar5);
  func_0x000107c61170(puVar4);
  puVar4 = &UNK_11067e728;
  func_0x000107c613fc(&UNK_11067e728,0x18,7);
  *(undefined **)(puVar4 + 0x10) = puVar5;
  puVar8 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_70 = (code *)0x1036b2d74;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_101016bdc;
  puStack_78 = &UNK_11067e740;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61174(puVar5);
  func_0x000107c46b38(puVar8);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puStack_68);
  func_0x000107c56428(param_1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 1036b2254; end: 1036b2cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036b2254(undefined *param_1,undefined *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  long unaff_x20;
  undefined *puVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_d8;
  undefined *puStack_b0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  func_0x000107c42c28(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f86980) + _DAT_113077160));
  puVar19 = param_1;
  func_0x000107c5c67c();
  func_0x000107c61180();
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar19 != (undefined *)0x0) {
    param_2 = (undefined *)0x0;
    FUN_1036b46d0(0,0x112f869f0,&PTR_PTR_1126c6718);
    puVar23 = puVar19;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar19);
    if ((ulong)puVar23 >> 0x3e == 0) {
      puVar19 = *(undefined **)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar19 = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar23) {
        puVar19 = puVar23;
      }
      func_0x000107c60480();
    }
    if (puVar19 != (undefined *)0x0) {
      puStack_98 = puVar11;
      param_2 = (undefined *)((ulong)puVar19 & ((long)puVar19 >> 0x3f ^ 0xffffffffffffffffU));
      func_0x0001036b40a8(0,param_2,0);
      if ((long)puVar19 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b2d00);
        (*pcVar2)();
      }
      puVar21 = (undefined *)0x0;
      do {
        puVar11 = puStack_98;
        if (((ulong)puVar23 & 0xc000000000000001) == 0) {
          puVar24 = *(undefined **)(puVar23 + (long)puVar21 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar24 = puVar21;
          param_2 = puVar23;
          FUN_1036b41e0(puVar21,puVar23,&PTR_PTR_1126c6718,0x112f869f0);
        }
        puVar4 = puVar24;
        func_0x000107c5c66c();
        func_0x000107c61170(puVar24);
        uVar20 = *(ulong *)(puVar11 + 0x10);
        puVar24 = (undefined *)(uVar20 + 1);
        puStack_98 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar20) {
          param_2 = puVar24;
          func_0x0001036b40a8(1 < *(ulong *)(puVar11 + 0x18),puVar24,1);
        }
        puVar21 = puVar21 + 1;
        *(undefined **)(puStack_98 + 0x10) = puVar24;
        *(int *)(puStack_98 + uVar20 * 4 + 0x20) = (int)puVar4;
        puVar11 = puStack_98;
      } while (puVar19 != puVar21);
    }
    func_0x000107c6142c(puVar23);
  }
  puVar23 = param_1;
  func_0x000107c5c67c();
  func_0x000107c61180();
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar23 != (undefined *)0x0) {
    param_2 = (undefined *)0x0;
    FUN_1036b46d0(0,0x112f869f0,&PTR_PTR_1126c6718);
    puVar19 = puVar23;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar23);
  }
  if ((ulong)puVar19 >> 0x3e == 0) {
    puVar23 = *(undefined **)(((ulong)puVar19 & 0xffffffffffffff8) + 0x10);
    puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar23 = (undefined *)((ulong)puVar19 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar19) {
      puVar23 = puVar19;
    }
    func_0x000107c60480();
    puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar21;
  if (puVar23 != (undefined *)0x0) {
    puVar24 = (undefined *)0x0;
    do {
      if (((ulong)puVar19 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)puVar19 & 0xffffffffffffff8) + 0x10) <= puVar24) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b2cec);
          (*pcVar2)();
        }
        puVar4 = *(undefined **)(puVar19 + (long)puVar24 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar4 = puVar24;
        param_2 = puVar19;
        FUN_1036b41e0(puVar24,puVar19,&PTR_PTR_1126c6718,0x112f869f0);
      }
      bVar3 = SCARRY8((long)puVar24,1);
      puVar24 = puVar24 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b2ce8);
        (*pcVar2)();
      }
      puVar25 = puVar4;
      func_0x000107c41230();
      func_0x000107c61180();
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar25 != (undefined *)0x0) {
        param_2 = (undefined *)0x0;
        FUN_1036b46d0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar5 = puVar25;
        func_0x000107c5fc54();
        func_0x000107c61170(puVar25);
        if ((ulong)puVar5 >> 0x3e == 0) {
          puVar25 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar25 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar5) {
            puVar25 = puVar5;
          }
          func_0x000107c60480();
          puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
        if (puVar25 != (undefined *)0x0) {
          uVar20 = 0;
          do {
            if (((ulong)puVar5 & 0xc000000000000001) == 0) {
              if (*(ulong *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b2ce4);
                (*pcVar2)();
              }
              uVar6 = *(ulong *)(puVar5 + uVar20 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar6 = uVar20;
              param_2 = puVar5;
              FUN_1036b41e0(uVar20,puVar5,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
            }
            if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b2ce0);
              (*pcVar2)();
            }
            puVar22 = (undefined *)(uVar20 + 1);
            uVar7 = uVar6;
            func_0x000107c49804();
            func_0x000107c61170(uVar6);
            puVar8 = puVar10;
            func_0x000107c61558();
            puVar9 = puVar10;
            if (((ulong)puVar8 & 1) == 0) {
              param_2 = (undefined *)(*(long *)(puVar10 + 0x10) + 1);
              puVar9 = (undefined *)0x0;
              FUN_1036b40dc(0,param_2,1,puVar10,0x112f86a00,&UNK_10dbfa650,
                            PTR__swift_bridgeObjectRelease_11034f258);
            }
            uVar6 = *(ulong *)(puVar9 + 0x10);
            puVar8 = (undefined *)(uVar6 + 1);
            puVar10 = puVar9;
            if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar6) {
              puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
              param_2 = puVar8;
              FUN_1036b40dc(puVar10,puVar8,1,puVar9,0x112f86a00,&UNK_10dbfa650,
                            PTR__swift_bridgeObjectRelease_11034f258);
            }
            *(undefined **)(puVar10 + 0x10) = puVar8;
            *(int *)(puVar10 + uVar6 * 4 + 0x20) = (int)uVar7;
            uVar20 = uVar20 + 1;
          } while (puVar22 != puVar25);
        }
        func_0x000107c6142c(puVar5);
      }
      func_0x000107c61170(puVar4);
      uVar20 = *(ulong *)(puVar10 + 0x10);
      puVar25 = *(undefined **)(puVar21 + 0x10);
      puVar4 = puVar25 + uVar20;
      if (SCARRY8((long)puVar25,uVar20)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b2cf0);
        (*pcVar2)();
      }
      puVar5 = puVar21;
      func_0x000107c61558();
      if (((int)puVar5 == 0) ||
         (uVar6 = *(ulong *)(puVar21 + 0x18) >> 1, (long)uVar6 < (long)puVar4)) {
        param_2 = puVar25;
        if ((long)puVar25 <= (long)puVar4) {
          param_2 = puVar4;
        }
        FUN_1036b40dc();
        uVar6 = *(ulong *)(puVar5 + 0x18) >> 1;
        puVar21 = puVar5;
      }
      if (*(long *)(puVar10 + 0x10) == 0) {
        func_0x000107c6142c(puVar10);
        if (uVar20 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b2cf4);
          (*pcVar2)();
        }
      }
      else {
        if (uVar6 - *(long *)(puVar21 + 0x10) < uVar20) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b2cf8);
          (*pcVar2)();
        }
        param_2 = puVar10 + 0x20;
        func_0x000107c610b4(puVar21 + *(long *)(puVar21 + 0x10) * 4 + 0x20,param_2,uVar20 << 2);
        func_0x000107c6142c(puVar10);
        if (uVar20 != 0) {
          if (SCARRY8(*(long *)(puVar21 + 0x10),uVar20)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b2cfc);
            (*pcVar2)();
          }
          *(ulong *)(puVar21 + 0x10) = *(long *)(puVar21 + 0x10) + uVar20;
        }
      }
    } while (puVar24 != puVar23);
  }
  func_0x000107c6142c(puVar19);
  lVar15 = *(long *)(puVar21 + 0x10);
  lVar16 = 0x20;
  lVar18 = lVar15;
  do {
    if (lVar18 == 0) break;
    piVar17 = (int *)(puVar21 + lVar16);
    lVar16 = lVar16 + 4;
    lVar18 = lVar18 + -1;
  } while (*piVar17 != 0);
  lVar16 = 0x20;
  do {
    if (lVar15 == 0) break;
    piVar17 = (int *)(puVar21 + lVar16);
    lVar16 = lVar16 + 4;
    lVar15 = lVar15 + -1;
  } while (*piVar17 != 1);
  func_0x000107c6142c(puVar21);
  if (*(char *)(unaff_x20 + _DAT_112f86948) == '\x01') {
    lVar16 = *(long *)(puVar11 + 0x10);
    piVar17 = (int *)(puVar11 + 0x20);
    do {
      bVar3 = lVar16 == 0;
      lVar16 = lVar16 + -1;
      if (bVar3) break;
      iVar1 = *piVar17;
      piVar17 = piVar17 + 1;
    } while (iVar1 != 2);
  }
  puVar19 = param_1;
  func_0x000107c5ae54();
  func_0x000107c61180();
  if (puVar19 != (undefined *)0x0) {
    func_0x000107c3ebcc();
    func_0x000107c61170(puVar19);
  }
  puVar19 = param_1;
  func_0x000107c44d74();
  func_0x000107c61180();
  if (puVar19 == (undefined *)0x0) {
    puStack_f8 = (undefined *)0x0;
    puVar19 = (undefined *)0x0;
    puStack_b0 = param_2;
  }
  else {
    puStack_f8 = puVar19;
    func_0x000107c5faec();
    puStack_b0 = param_2;
    func_0x000107c61170(puVar19);
    puVar19 = param_2;
  }
  puVar23 = param_1;
  func_0x000107c44d70();
  func_0x000107c61180();
  if (puVar23 == (undefined *)0x0) {
    puStack_100 = (undefined *)0x0;
    puStack_b0 = (undefined *)0x0;
  }
  else {
    puStack_100 = puVar23;
    func_0x000107c5faec();
    func_0x000107c61170(puVar23);
  }
  func_0x000107c4d1dc();
  lVar18 = *(long *)(puVar11 + 0x10);
  lVar16 = 0x20;
  do {
    bVar3 = lVar18 == 0;
    lVar18 = lVar18 + -1;
    if (bVar3) break;
    piVar17 = (int *)(puVar11 + lVar16);
    lVar16 = lVar16 + 4;
  } while (*piVar17 != 1);
  func_0x000107c6142c(puVar11);
  puVar11 = param_1;
  func_0x000107c5aee0();
  func_0x000107c61180();
  if (puVar11 != (undefined *)0x0) {
    func_0x000107c3ebcc();
    func_0x000107c61170(puVar11);
  }
  puVar11 = param_1;
  func_0x000107c5dd90();
  func_0x000107c61180();
  puVar23 = param_1;
  func_0x000107c3cf90();
  func_0x000107c61180();
  puVar21 = param_1;
  func_0x000107c41ec0();
  func_0x000107c61180();
  if (puVar21 != (undefined *)0x0) {
    func_0x000107c3ebcc();
    func_0x000107c61170(puVar21);
  }
  puVar21 = param_1;
  func_0x000107c5ae28();
  func_0x000107c61180();
  if (puVar21 != (undefined *)0x0) {
    func_0x000107c3ebcc();
    func_0x000107c61170(puVar21);
  }
  puVar21 = param_1;
  func_0x000107c5c96c();
  func_0x000107c61180();
  puVar24 = param_1;
  func_0x000107c4c888();
  func_0x000107c61180();
  puVar4 = param_1;
  func_0x000107c4d1a4();
  func_0x000107c61180();
  puVar10 = param_1;
  func_0x000107c5ae9c();
  func_0x000107c61180();
  if (puVar10 != (undefined *)0x0) {
    func_0x000107c3ebcc();
    func_0x000107c61170(puVar10);
  }
  func_0x000107c444c8();
  func_0x000107c61180();
  if (puVar19 == (undefined *)0x0) {
    puStack_d8 = (undefined *)0x0;
  }
  else {
    func_0x000107c5fadc(puStack_f8,puVar19);
    func_0x000107c6142c(puVar19);
    puStack_d8 = puStack_f8;
  }
  if (puStack_b0 == (undefined *)0x0) {
    puStack_f8 = (undefined *)0x0;
  }
  else {
    func_0x000107c5fadc(puStack_100,puStack_b0);
    func_0x000107c6142c(puStack_b0);
    puStack_f8 = puStack_100;
  }
  puVar10 = PTR_PTR_1126aff70;
  func_0x000107c610f8();
  func_0x000107c48d88();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puStack_d8);
  func_0x000107c61170(puStack_f8);
  func_0x0001000285a8(0x112d55a28,&UNK_10dbfa640);
  func_0x000107c613fc();
  uVar12 = 0;
  func_0x00010095c380();
  uVar13 = uVar12;
  FUN_1036b1d4c();
  puVar11 = &UNK_11067e6d8;
  func_0x000107c613fc(&UNK_11067e6d8,0x18,7);
  func_0x000107c61614(puVar11 + 0x10,unaff_x20);
  puVar19 = &UNK_11067e948;
  func_0x000107c613fc(&UNK_11067e948,0x28,7);
  *(undefined **)(puVar19 + 0x10) = puVar11;
  *(undefined8 *)(puVar19 + 0x18) = uVar12;
  *(undefined **)(puVar19 + 0x20) = puVar10;
  pcStack_78 = FUN_1036b448c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_11067e960;
  ppuVar14 = &puStack_98;
  puStack_70 = puVar19;
  func_0x000107c60bc4(ppuVar14);
  puVar11 = puStack_70;
  func_0x000107c6157c(uVar12);
  func_0x000107c61174(puVar10);
  func_0x000107c61574(puVar11);
  func_0x000107c4e590(uVar13);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c61170(puVar10);
  func_0x000107c615e8(uVar13);
  return uVar12;
}



/* Entry: 1036b2d00; end: 1036b2d57;  */

void FUN_1036b2d00(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1036b2d58; end: 1036b2d7b;  */

void FUN_1036b2d58(long param_1,long param_2)

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



/* Entry: 1036b2d7c; end: 1036b2dcb; -[_TtC32SnapEditorImportPluginEntryPoint22SnapEditorImportPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036b2db4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b2db8) */

void FUN_1036b2d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036b1fec(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036b2dcc; end: 1036b2dfb;  */

void FUN_1036b2dcc(void)

{
  func_0x0001036b1fcc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036b2dfc; end: 1036b2ed3; -[_TtC32SnapEditorImportPluginEntryPoint22SnapEditorImportPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036b2e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b2e2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b2dfc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86960));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f86968));
  return;
}



/* Entry: 1036b2ed4; end: 1036b2fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b2ed4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_48;
  
  lVar3 = _DAT_112f86940;
  lVar4 = *(long *)(unaff_x20 + _DAT_112f86940);
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_1036b46d0(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c6157c(lVar4);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
    puStack_48 = puVar1;
    func_0x000100b60084(&puStack_48);
    func_0x000107c61170(puVar1);
    func_0x000107c61574(lVar4);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
  }
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  func_0x000107c61574(uVar2);
  lVar4 = *(long *)(unaff_x20 + _DAT_112f86988);
  lVar3 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  return;
}



/* Entry: 1036b2fb8; end: 1036b2fdf; -[_TtC32SnapEditorImportPluginEntryPoint22SnapEditorImportPlugin memoriesPickerV2DidDismiss] */

void FUN_1036b2fb8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036b2ed4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036b2fe0; end: 1036b316b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b2fe0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = *(undefined1 **)(unaff_x20 + _DAT_112f86998);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 == (undefined1 *)0x0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112f86940);
    if (lVar6 != 0) {
      FUN_1036b32f4();
      puVar5 = &UNK_11067e860;
      func_0x000107c613f8(&UNK_11067e860,puVar1,0,0);
      *puVar1 = 1;
      func_0x000107c6157c(lVar6);
      func_0x00010488ade0(puVar5);
      func_0x000107c61574(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)(puVar5);
      return;
    }
  }
  else {
    puVar2 = puVar1;
    FUN_1036b1c18();
    puVar5 = &UNK_11067e6d8;
    func_0x000107c613fc(&UNK_11067e6d8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar3 = &UNK_11067e7a0;
    func_0x000107c613fc(&UNK_11067e7a0,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar5;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined1 **)(puVar3 + 0x20) = puVar1;
    pcStack_50 = FUN_1036b3334;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11067e7b8;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c61434(param_1);
    func_0x000107c615f0(puVar1);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(puVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1036b316c; end: 1036b31cf; -[_TtC32SnapEditorImportPluginEntryPoint22SnapEditorImportPlugin memoriesPickerV2DidSelectItemsWithMediaSegments:] */

void FUN_1036b316c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d74dc8;
  func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_1036b2fe0(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1036b31d0; end: 1036b31d3;  */

long FUN_1036b31d0(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    func_0x0001000285a8(0x112d55a28,&UNK_10dbfa640);
    func_0x000107c61534();
    puVar1 = (undefined1 *)0x0;
    func_0x00010095c380();
    puVar2 = puVar1;
    FUN_1036b32f4();
    puVar3 = &UNK_11067e860;
    func_0x000107c613f8(&UNK_11067e860,puVar2,0,0);
    *puVar2 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar3);
    lVar5 = *(long *)(puVar1 + 0x10);
    param_1 = lVar5;
    func_0x000107c6157c(lVar5);
    func_0x000103edf0bc();
    func_0x000107c61574(lVar5);
    func_0x000107c61574(puVar1);
  }
  else {
    FUN_1036b2254();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(param_1);
    func_0x000103edf0bc();
    func_0x000107c61574(uVar4);
    func_0x000107c61170(lVar5);
  }
  return param_1;
}



/* Entry: 1036b31d4; end: 1036b32f3;  */

long FUN_1036b31d4(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    func_0x0001000285a8(0x112d55a28,&UNK_10dbfa640);
    func_0x000107c61534();
    puVar1 = (undefined1 *)0x0;
    func_0x00010095c380();
    puVar2 = puVar1;
    FUN_1036b32f4();
    puVar3 = &UNK_11067e860;
    func_0x000107c613f8(&UNK_11067e860,puVar2,0,0);
    *puVar2 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar3);
    lVar5 = *(long *)(puVar1 + 0x10);
    param_1 = lVar5;
    func_0x000107c6157c(lVar5);
    func_0x000103edf0bc();
    func_0x000107c61574(lVar5);
    func_0x000107c61574(puVar1);
  }
  else {
    FUN_1036b2254();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(param_1);
    func_0x000103edf0bc();
    func_0x000107c61574(uVar4);
    func_0x000107c61170(lVar5);
  }
  return param_1;
}



/* Entry: 1036b32f4; end: 1036b3333;  */

void FUN_1036b32f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f869b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbfa5f4;
  func_0x000107c61520(&UNK_10dbfa5f4,&UNK_11067e860);
  puRam0000000112f869b0 = puVar1;
  return;
}



/* Entry: 1036b3334; end: 1036b3eff;  */

/* WARNING: Removing unreachable block (ram,0x0001036b37c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b3334(void)

{
  long *plVar1;
  undefined1 *puVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined1 **ppuVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  long lVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  long unaff_x20;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined *puStack_108;
  undefined1 *apuStack_f0 [3];
  undefined8 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 *puStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 *apuStack_88 [3];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar26 = *(ulong *)(unaff_x20 + 0x18);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar5 + 0x10,auStack_d0,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    return;
  }
  puVar6 = *(undefined1 **)(lVar5 + _DAT_112f86968);
  func_0x000107c615f0();
  uVar7 = 0x112d74dc8;
  func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
  uVar27 = uVar26;
  func_0x000107c5fc48(uVar26,uVar7);
  func_0x000107c5cee8(uVar24);
  func_0x000107c61180();
  func_0x000107c61170(uVar27);
  func_0x0001000285a8(0x112d55e78,&UNK_10d91cd60);
  uVar7 = uVar24;
  func_0x000100759c94(uVar24,0);
  func_0x0001048886ac(&puStack_b8);
  puVar22 = puStack_b8;
  uVar27 = uStack_b0 & 0xff;
  if ((char)uStack_b0 == '\x01') {
    apuStack_f0[0] = puStack_b8;
    iVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar4 != 0) {
      uVar8 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(apuStack_f0,uVar8,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000100d590dc(puVar22,1);
LAB_1036b34c8:
    func_0x000107c61170(uVar24);
    func_0x000107c61574(uVar7);
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    if (puStack_b8 == (undefined1 *)0x0) goto LAB_1036b34c8;
    puStack_b8 = (undefined1 *)0x0;
    uVar8 = 0;
    FUN_1036b46d0(0,0x112d62390,&PTR_PTR_1126aff40);
    func_0x000107c5fc50(puVar22,&puStack_b8,uVar8);
    func_0x000100d590dc(puVar22,uVar27);
    puVar22 = puStack_b8;
    if (puStack_b8 == (undefined1 *)0x0) goto LAB_1036b34c8;
    func_0x000107c61170(uVar24);
    func_0x000107c61574(uVar7);
  }
  if ((ulong)puVar22 >> 0x3e != 0) {
    puVar23 = (undefined1 *)((ulong)puVar22 & 0xffffffffffffff8);
    if (((ulong)puVar22 & 0x8000000000000000) != 0) {
      puVar23 = puVar22;
    }
    func_0x000107c60480(puVar23);
  }
  if (uVar26 >> 0x3e != 0) {
    uVar27 = uVar26 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar26) {
      uVar27 = uVar26;
    }
    func_0x000107c60480(uVar27);
  }
  if (*(char *)(lVar5 + _DAT_112f86948) == '\x01') {
    FUN_103912238(0);
    func_0x0001000d224c(&puStack_b8);
    puVar2 = puStack_b8;
    puVar23 = puVar22;
    puVar20 = puVar6;
    FUN_10390d79c(puVar22,puVar6,puStack_b8);
    func_0x000107c615e8(puVar2);
    func_0x000107c6142c(puVar22);
    if ((ulong)puVar23 >> 0x3e == 0) {
      puVar22 = *(undefined1 **)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10);
      puStack_108 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar22 = (undefined1 *)((ulong)puVar23 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < puVar23) {
        puVar22 = puVar23;
      }
      func_0x000107c60480();
      puStack_108 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puStack_108;
    if (puVar22 != (undefined1 *)0x0) {
      uVar26 = 0;
      do {
        if (((ulong)puVar23 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1036b3d04);
            (*pcVar3)();
          }
          uVar27 = *(ulong *)(puVar23 + uVar26 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar27 = uVar26;
          puVar20 = puVar23;
          FUN_1036b41e0(uVar26,puVar23,&PTR_PTR_1126b25c0,0x112d50c78);
        }
        puVar2 = (undefined1 *)(uVar26 + 1);
        if (SCARRY8(uVar26,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1036b3d00);
          (*pcVar3)();
        }
        uVar10 = uVar27;
        func_0x000107c41214();
        func_0x000107c61180();
        if (uVar10 == 0) {
          func_0x000107c61170(uVar27);
        }
        else {
          uVar25 = uVar10;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar10);
          puVar19 = PTR_PTR_1126bcf68;
          func_0x000107c610f8();
          func_0x00010006c00c(uVar25,puVar20);
          uVar10 = uVar25;
          func_0x000107c5ee20(uVar25,puVar20);
          func_0x000107c45ae0();
          func_0x000107c61170(uVar10);
          func_0x00010006c090(uVar25,puVar20);
          uVar24 = 0;
          FUN_1036b46d0(0,0x112d54e00,&PTR_PTR_1126bcf68);
          uStack_d8 = uVar24;
          func_0x000107c61170(uVar27);
          func_0x00010006c090(uVar25,puVar20);
          apuStack_f0[0] = puVar19;
          func_0x000100102924(apuStack_f0,&puStack_b8);
          puVar19 = puStack_108;
          func_0x000107c61558();
          puVar9 = puStack_108;
          if (((ulong)puVar19 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            func_0x000100f6a040(0,*(long *)(puStack_108 + 0x10) + 1,1,puStack_108);
          }
          uVar27 = *(ulong *)(puVar9 + 0x10);
          puStack_108 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar27) {
            puStack_108 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            func_0x000100f6a040(puStack_108,uVar27 + 1,1,puVar9);
          }
          *(ulong *)(puStack_108 + 0x10) = uVar27 + 1;
          puVar20 = puStack_108 + uVar27 * 0x20 + 0x20;
          func_0x000100102924(&puStack_b8);
        }
        uVar26 = uVar26 + 1;
      } while (puVar2 != puVar22);
    }
    func_0x000107c6142c();
    lVar21 = *(long *)(puStack_108 + 0x10);
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    goto joined_r0x0001036b3c9c;
  }
  if ((ulong)puVar22 >> 0x3e == 0) {
    puVar23 = *(undefined1 **)((undefined1 *)((ulong)puVar22 & 0xffffffffffffff8) + 0x10);
    if (puVar23 != (undefined1 *)0x0) goto LAB_1036b3740;
LAB_1036b3c80:
    puStack_108 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar23 = (undefined1 *)((ulong)puVar22 & 0xffffffffffffff8);
    if (((ulong)puVar22 & 0x8000000000000000) != 0) {
      puVar23 = puVar22;
    }
    func_0x000107c60480();
    if (puVar23 == (undefined1 *)0x0) goto LAB_1036b3c80;
LAB_1036b3740:
    uVar26 = 0;
    puStack_108 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (((ulong)puVar22 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1036b3d0c);
          (*pcVar3)();
        }
        uVar27 = *(ulong *)(puVar22 + uVar26 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar27 = uVar26;
        FUN_1036b41e0(uVar26,puVar22,&PTR_PTR_1126aff40,0x112d62390);
      }
      puVar20 = (undefined1 *)(uVar26 + 1);
      if (SCARRY8(uVar26,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1036b3d08);
        (*pcVar3)();
      }
      FUN_103912238(0);
      uVar10 = uVar27;
      FUN_103910600(uVar27,puVar6,0,0,0,1);
      func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
      uVar24 = 0;
      uVar25 = uVar10;
      func_0x000100759c94(uVar10);
      func_0x0001048886ac(&puStack_b8);
      func_0x000107c61574(uVar25);
      puVar2 = puStack_b8;
      uVar25 = uStack_b0 & 0xff;
      if ((char)uStack_b0 == '\x01') {
        apuStack_88[0] = puStack_b8;
        iVar4 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if (iVar4 != 0) {
          uVar24 = 0x112d393f0;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          func_0x000107c61658(apuStack_88,uVar24,PTR___ss5ErrorWS_11034ee10);
        }
        func_0x000107c61170(uVar10);
        func_0x000100d590dc(puVar2,1);
LAB_1036b3bf4:
        func_0x000107c61170(uVar27);
      }
      else {
        if (puStack_b8 == (undefined1 *)0x0) {
LAB_1036b3b9c:
          func_0x000107c61170(uVar10);
          goto LAB_1036b3bf4;
        }
        puVar11 = puVar6;
        func_0x000107c4e924();
        func_0x000107c61180();
        if (puVar11 == (undefined1 *)0x0) {
          func_0x000100d590dc(puVar2,uVar25);
          goto LAB_1036b3b9c;
        }
        puVar12 = puVar11;
        func_0x000107c4c930();
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        if (puVar12 == (undefined1 *)0x0) {
LAB_1036b3bdc:
          func_0x000100d590dc(puVar2,uVar25);
          func_0x000107c61170(uVar10);
          goto LAB_1036b3bf4;
        }
        puVar11 = puVar12;
        func_0x000107c41214();
        func_0x000107c61180();
        if (puVar11 == (undefined1 *)0x0) {
          func_0x000107c61170(puVar12);
          goto LAB_1036b3bdc;
        }
        puVar13 = puVar11;
        func_0x000107c5ee30();
        uVar7 = uVar24;
        func_0x000107c61170(puVar11);
        puVar11 = puVar12;
        func_0x000107c4c99c();
        func_0x000107c61180();
        if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1036b3f00);
          (*pcVar3)();
        }
        puVar14 = puVar6;
        func_0x000107c4ca08();
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        if (puVar14 == (undefined1 *)0x0) {
LAB_1036b3ba8:
          func_0x00010006c090(puVar13,uVar24);
          func_0x000107c61170(puVar12);
          func_0x000100d590dc(puVar2,uVar25);
          func_0x000107c61170(uVar10);
          goto LAB_1036b3bf4;
        }
        puVar11 = puVar14;
        func_0x000107c41214();
        func_0x000107c61180();
        func_0x000107c61170(puVar14);
        if (puVar11 == (undefined1 *)0x0) goto LAB_1036b3ba8;
        puVar14 = puVar11;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar11);
        puVar19 = PTR_PTR_1126a61e0;
        func_0x000107c610f8();
        func_0x00010006c00c(puVar14,uVar7);
        func_0x00010006c00c(puVar13,uVar24);
        puVar11 = puVar14;
        func_0x000107c5ee20(puVar14,uVar7);
        puVar15 = puVar13;
        func_0x000107c5ee20(puVar13,uVar24);
        func_0x000107c47694();
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar15);
        func_0x00010006c090(puVar13,uVar24);
        func_0x00010006c090(puVar14,uVar7);
        puVar16 = PTR_PTR_1126ad3e8;
        func_0x000107c610f8();
        func_0x000107c47944();
        func_0x000107c61170(puVar19);
        uVar17 = uVar27;
        func_0x000107c45218();
        func_0x000107c61180();
        puVar19 = &UNK_11067e8d0;
        func_0x000107c613fc(&UNK_11067e8d0,0x18,7);
        *(undefined **)(puVar19 + 0x10) = puVar16;
        puVar9 = &UNK_11067e8f8;
        func_0x000107c613fc(&UNK_11067e8f8,0x20,7);
        *(code **)(puVar9 + 0x10) = FUN_1036b43c8;
        *(undefined **)(puVar9 + 0x18) = puVar19;
        pcStack_98 = FUN_1036b446c;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_101382510;
        puStack_a0 = &UNK_11067e910;
        ppuVar18 = &puStack_b8;
        puStack_90 = puVar9;
        func_0x000107c60bc4(ppuVar18);
        puVar9 = puStack_90;
        func_0x000107c61174();
        func_0x000107c61574(puVar9);
        func_0x000107c4c668(uVar17);
        func_0x000107c60bd0(ppuVar18);
        func_0x000107c61170(uVar17);
        func_0x00010006c090(puVar14,uVar7);
        func_0x00010006c090(puVar13,uVar24);
        func_0x000107c61170(puVar12);
        func_0x000100d590dc(puVar2,uVar25);
        func_0x000107c61574(puVar19);
        func_0x000107c61170(uVar10);
        if (puVar16 == (undefined1 *)0x0) goto LAB_1036b3bf4;
        uVar24 = 0;
        FUN_1036b46d0(0,0x112f869e8,&PTR_PTR_1126ad3e8);
        uStack_d8 = uVar24;
        func_0x000107c61170(uVar27);
        apuStack_f0[0] = puVar16;
        func_0x000100102924(apuStack_f0,&puStack_b8);
        puVar19 = puStack_108;
        func_0x000107c61558();
        if (((ulong)puVar19 & 1) == 0) {
          plVar1 = (long *)(puStack_108 + 0x10);
          puStack_108 = (undefined *)0x0;
          func_0x000100f6a040(0,*plVar1 + 1,1);
        }
        uVar27 = *(ulong *)(puStack_108 + 0x10);
        if (*(ulong *)(puStack_108 + 0x18) >> 1 <= uVar27) {
          puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puStack_108 + 0x18));
          func_0x000100f6a040(puVar19,uVar27 + 1,1,puStack_108);
          puStack_108 = puVar19;
        }
        *(ulong *)(puStack_108 + 0x10) = uVar27 + 1;
        func_0x000100102924(&puStack_b8,puStack_108 + uVar27 * 0x20 + 0x20);
      }
      uVar26 = uVar26 + 1;
    } while (puVar20 != puVar23);
  }
  func_0x000107c6142c();
  lVar21 = *(long *)(puStack_108 + 0x10);
  puVar23 = puVar22;
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
joined_r0x0001036b3c9c:
  PTR__OBJC_CLASS___NSArray_1126ae530 = puVar22;
  if (lVar21 == 0) {
    lVar21 = *(long *)(lVar5 + _DAT_112f86940);
    if (lVar21 != 0) {
      FUN_1036b32f4();
      puVar19 = &UNK_11067e860;
      func_0x000107c613f8(&UNK_11067e860,puVar23,0,0);
      *puVar23 = 3;
      func_0x000107c6157c(lVar21);
      func_0x00010488ade0(puVar19);
      func_0x000107c61574(lVar21);
      func_0x000107c614ac(puVar19);
    }
  }
  else {
    lVar21 = *(long *)(lVar5 + _DAT_112f86940);
    if (lVar21 != 0) {
      func_0x000107c610f8();
      func_0x000107c6157c(lVar21);
      puVar19 = puStack_108;
      func_0x000107c5fc48(puStack_108,PTR___sypN_11034f1a8 + 8);
      func_0x000107c45788();
      func_0x000107c61170(puVar19);
      puStack_b8 = puVar22;
      func_0x000100b60084(&puStack_b8);
      func_0x000107c61574(lVar21);
      func_0x000107c61170(puVar22);
    }
  }
  uVar24 = *(undefined8 *)(lVar5 + _DAT_112f86940);
  *(undefined8 *)(lVar5 + _DAT_112f86940) = 0;
  func_0x000107c61574(uVar24);
  puVar22 = *(undefined1 **)(lVar5 + _DAT_112f86988);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (puVar22 == (undefined1 *)0x0) {
    func_0x000107c61170(lVar5);
  }
  else {
    func_0x000107c61170();
    FUN_1036b1d4c();
    puVar19 = &UNK_11067e880;
    func_0x000107c613fc(&UNK_11067e880,0x18,7);
    *(long *)(puVar19 + 0x10) = lVar5;
    pcStack_98 = FUN_1036b439c;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000f6b44;
    puStack_a0 = &UNK_11067e898;
    ppuVar18 = &puStack_b8;
    puStack_90 = puVar19;
    func_0x000107c60bc4(ppuVar18);
    puVar19 = puStack_90;
    func_0x000107c61174(lVar5);
    func_0x000107c61574(puVar19);
    func_0x000107c4e524(puVar22);
    func_0x000107c615e8(puVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c60bd0(ppuVar18);
    puVar6 = puVar22;
  }
  func_0x000107c6142c(puStack_108);
  func_0x000107c615e8(puVar6);
  return;
}



/* Entry: 1036b3f00; end: 1036b4067;  */

int FUN_1036b3f00(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1036b3f7c;
        goto LAB_1036b3f60;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1036b3f60:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1036b3f7c:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1036b4068; end: 1036b40db;  */

void FUN_1036b4068(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f869e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbfa5cc;
  func_0x000107c61520(&UNK_10dbfa5cc,&UNK_11067e860);
  puRam0000000112f869e0 = puVar1;
  return;
}



/* Entry: 1036b40dc; end: 1036b41df;  */

undefined *
FUN_1036b40dc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,code *param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b41e0);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar6) {
    uVar4 = uVar6;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar3 = param_5;
    func_0x000107c610a4();
    puVar5 = puVar3 + -0x1d;
    if (0x1f < (long)puVar3) {
      puVar5 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)puVar5 >> 2) << 1;
    puVar5 = param_5;
  }
  puVar3 = puVar5 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar3,puVar1,uVar6 << 2);
  }
  else {
    if (puVar5 != param_4 || puVar1 + uVar6 * 4 <= puVar3) {
      func_0x000107c610b8(puVar3,puVar1,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_7)(param_4);
  return puVar5;
}



/* Entry: 1036b41e0; end: 1036b439b;  */

ulong FUN_1036b41e0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b42c4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b42c8);
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
  FUN_1036b46d0(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b439c);
  (*pcVar2)();
}



/* Entry: 1036b439c; end: 1036b43c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b439c(void)

{
  long unaff_x20;
  
  func_0x000107c4ffe8(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f86988));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1036b43c8; end: 1036b446b;  */

/* WARNING: Possible PIC construction at 0x0001036b4400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036b4418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b4404) */
/* WARNING: Removing unreachable block (ram,0x0001036b4468) */
/* WARNING: Removing unreachable block (ram,0x0001036b4408) */
/* WARNING: Removing unreachable block (ram,0x0001036b441c) */
/* WARNING: Removing unreachable block (ram,0x0001036b4458) */
/* WARNING: Removing unreachable block (ram,0x0001036b4420) */

void FUN_1036b43c8(undefined8 param_1)

{
  func_0x000107c5b198();
  func_0x000107c61180();
  func_0x000107c4adb4();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036b446c; end: 1036b448b;  */

void FUN_1036b446c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036b448c; end: 1036b46cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b448c(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  puVar2 = (undefined1 *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined1 *)0x0) {
    FUN_1036b32f4();
    puVar8 = &UNK_11067e860;
    func_0x000107c613f8(&UNK_11067e860,puVar2,0,0);
    *puVar2 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar8);
  }
  else {
    puVar5 = *(undefined1 **)(*(long *)(puVar2 + _DAT_112f86960) + _DAT_11302bd68);
    lVar1 = ((undefined8 *)(*(long *)(puVar2 + _DAT_112f86960) + _DAT_11302bd68))[1];
    puVar3 = puVar5;
    func_0x000107c614f0(puVar5);
    pcVar12 = *(code **)(lVar1 + 0x10);
    func_0x000107c615f0(puVar5);
    lVar4 = 1;
    (*pcVar12)(1,0,puVar3,lVar1);
    func_0x000107c615e8();
    if (lVar4 == 0) {
      FUN_1036b32f4();
      puVar8 = &UNK_11067e860;
      func_0x000107c613f8(&UNK_11067e860,puVar5,0,0);
      *puVar5 = 2;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar8);
      uVar10 = *(undefined8 *)(puVar2 + _DAT_112f86940);
      *(undefined8 *)(puVar2 + _DAT_112f86940) = 0;
      func_0x000107c61170(puVar2);
      func_0x000107c61574(uVar10);
    }
    else {
      uVar9 = *(undefined8 *)(puVar2 + _DAT_112f86940);
      *(undefined8 *)(puVar2 + _DAT_112f86940) = uVar10;
      func_0x000107c6157c(uVar10);
      func_0x000107c61574(uVar9);
      uVar10 = *(undefined8 *)(puVar2 + _DAT_112f86990);
      puVar8 = PTR_PTR_1126aff78;
      func_0x000107c61168(PTR_PTR_1126aff78);
      func_0x000107c61174(uVar10);
      func_0x000107c41548(puVar8);
      func_0x000107c61180();
      lVar6 = lVar4;
      func_0x000103b95ba4(lVar4,uVar11,puVar8);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(uVar10);
      lVar1 = _DAT_112f86988;
      lVar7 = *(long *)(puVar2 + _DAT_112f86988);
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar7 != 0) {
        func_0x000107c61170();
        uVar10 = *(undefined8 *)(puVar2 + lVar1);
        func_0x000107c61174(uVar10);
        func_0x000107c4ffe8();
        func_0x000107c61180();
        func_0x000107c615e8();
        func_0x000107c61170(uVar10);
      }
      func_0x000107c42c1c(*(undefined8 *)(puVar2 + lVar1));
      func_0x000107c61170(lVar6);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar2);
    }
  }
  return;
}



/* Entry: 1036b46d0; end: 1036b470f;  */

void FUN_1036b46d0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1036b4710; end: 1036b4737;  */

void FUN_1036b4710(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11067e998;
  if (lRam0000000112f86a08 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f86a08 = param_1;
  }
  return;
}



/* Entry: 1036b4738; end: 1036b477b;  */

void FUN_1036b4738(long param_1,long *param_2,long param_3)

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



/* Entry: 1036b477c; end: 1036b47c7;  */

void FUN_1036b477c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1036b47c8; end: 1036b4863;  */

void FUN_1036b47c8(undefined8 param_1)

{
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1036b4814,param_1);
  return;
}



/* Entry: 1036b4864; end: 1036b487b;  */

undefined1  [16] FUN_1036b4864(void)

{
  return ZEXT816(0x11067eb00);
}



/* Entry: 1036b487c; end: 1036b491b;  */

void FUN_1036b487c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1036b491c; end: 1036b492b;  */

void FUN_1036b491c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1036b492c; end: 1036b4a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036b492c(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  puVar2 = auStack_30;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ff4f00);
  *(undefined8 *)(unaff_x20 + _DAT_112f86a18) = uVar3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_30,puVar1);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1036b4a1c; end: 1036b4b9b;  */

void FUN_1036b4a1c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  puVar2 = PTR_PTR_1126ad3f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_11067ebc8;
  func_0x000107c613fc(&UNK_11067ebc8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1036b4b9c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = (undefined *)0x1036b0924;
  puStack_68 = &UNK_11067ebe0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c58bcc(puVar2);
  func_0x000107c60bd0(ppuVar4);
  puVar3 = &UNK_11067ec18;
  func_0x000107c613fc(&UNK_11067ec18,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_60 = (code *)0x1036b4f30;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101016bdc;
  puStack_68 = &UNK_11067ec30;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61174(puVar2);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_58);
  func_0x000107c55e54(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1036b4b9c; end: 1036b4c4f;  */

undefined * FUN_1036b4b9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = &UNK_11067ec68;
  func_0x000107c613fc(&UNK_11067ec68,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c();
  func_0x000107c61174(puVar1);
  func_0x0001001ca524(0,0,0x54,4,0,0,&UNK_10dbfa7f8,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x000107c61574(puVar2);
  return puVar1;
}



/* Entry: 1036b4c50; end: 1036b4c67;  */

void FUN_1036b4c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036b4c68,0,0);
  return;
}



/* Entry: 1036b4c68; end: 1036b4d23;  */

void FUN_1036b4c68(void)

{
  code *pcVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x38) = lVar4;
  if (lVar4 != 0) {
    plVar2 = (long *)0x20;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1036b4d24;
    plVar2[3] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1036b4e60,0,0);
    return;
  }
  puVar3 = PTR_PTR_1126b15a8;
  func_0x000107c61168();
  func_0x000107c5d1f4();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c43b74(*(undefined8 *)(unaff_x22 + 0x30));
    func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0001036b4d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036b4d24);
  (*pcVar1)();
}



/* Entry: 1036b4d24; end: 1036b4d87;  */

void FUN_1036b4d24(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x38);
  *(long *)(lVar3 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1036b4d88;
  }
  else {
    pcVar2 = FUN_1036b4de8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1036b4d88; end: 1036b4de7;  */

void FUN_1036b4d88(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x22;
  
  puVar2 = PTR_PTR_1126b15a8;
  func_0x000107c61168();
  func_0x000107c5d1f4();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c43b74(*(undefined8 *)(unaff_x22 + 0x30),param_2,puVar2);
    func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001036b4de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036b4de8);
  (*pcVar1)();
}



/* Entry: 1036b4de8; end: 1036b4e47;  */

void FUN_1036b4de8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = uVar3;
  func_0x000107c5ed2c(uVar3);
  func_0x000107c43b70(uVar2,param_2,uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c614ac(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001036b4e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036b4e48; end: 1036b4e5f;  */

void FUN_1036b4e48(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036b4e60,0,0);
  return;
}



/* Entry: 1036b4e60; end: 1036b4f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b4e60(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = uVar1;
  func_0x000107c5ac40();
  func_0x000107c615e8(uVar1);
  if ((int)uVar2 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x0001000d224c(unaff_x22 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x000107c5d000(uVar2);
    func_0x000107c615e8(uVar2);
    func_0x0001036b5078();
    func_0x000107c613f8(&UNK_11067ed00,uVar2,0,0);
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001036b4f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1036b4f14; end: 1036b4f37;  */

void FUN_1036b4f14(long param_1,long param_2)

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



/* Entry: 1036b4f38; end: 1036b4f87; -[_TtC39SnapEditorLensSaveGuardPluginEntryPoint29SnapEditorLensSaveGuardPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036b4f70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b4f74) */

void FUN_1036b4f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036b4a1c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036b4f88; end: 1036b4fbb;  */

void FUN_1036b4f88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036b4fbc; end: 1036b4fcb; -[_TtC39SnapEditorLensSaveGuardPluginEntryPoint29SnapEditorLensSaveGuardPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b4fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f86a18));
  return;
}



/* Entry: 1036b4fcc; end: 1036b4feb;  */

void FUN_1036b4fcc(void)

{
  func_0x000107c61168(&PTR_PTR_1128e08c8);
  return;
}



/* Entry: 1036b4fec; end: 1036b503b;  */

void FUN_1036b4fec(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1036b503c;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036b4c68,0,0);
  return;
}



/* Entry: 1036b503c; end: 1036b50b7;  */

void FUN_1036b503c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001036b5074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1036b50b8; end: 1036b51a7;  */

uint FUN_1036b50b8(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1036b51a8; end: 1036b51e7;  */

void FUN_1036b51a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f86a50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbfa868;
  func_0x000107c61520(&UNK_10dbfa868,&UNK_11067ed00);
  puRam0000000112f86a50 = puVar1;
  return;
}



/* Entry: 1036b51e8; end: 1036b51ef;  */

void FUN_1036b51e8(long param_1,long param_2)

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



/* Entry: 1036b51f0; end: 1036b523b;  */

void FUN_1036b51f0(undefined8 param_1)

{
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1036b523c,param_1);
  return;
}



/* Entry: 1036b523c; end: 1036b5323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b523c(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  puVar1 = PTR_PTR_1133bb548;
  lVar2 = *(long *)(lStack_38 + _DAT_11302bab8);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    func_0x000107c61434(lVar2);
    func_0x000100fac3bc();
    if ((param_3 & 1) == 0) {
      func_0x000107c6142c(lVar2);
    }
    else {
      lVar3 = *(long *)(*(long *)(lVar2 + 0x38) + (long)puVar1 * 8);
      func_0x000107c615f0(lVar3);
      func_0x000107c6142c(lVar2);
      puVar1 = PTR_PTR_1126ad3f8;
      func_0x000107c61168(PTR_PTR_1126ad3f8);
      lVar2 = lVar3;
      func_0x000107c6148c(lVar3,puVar1);
      func_0x000107c615e8(lVar3);
      if (lVar2 != 0) {
        FUN_1036b55a4(0);
        func_0x000107c610f8();
        func_0x0001036b53a4();
        goto LAB_1036b530c;
      }
    }
  }
  func_0x000107c61170(lStack_38);
  lStack_38 = 0;
LAB_1036b530c:
  *param_1 = lStack_38;
  return;
}



/* Entry: 1036b5324; end: 1036b5333;  */

undefined1  [16] FUN_1036b5324(void)

{
  return ZEXT816(0x11067ee28);
}



/* Entry: 1036b5334; end: 1036b5413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b5334(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  puVar2 = PTR_PTR_1133bb548;
  *(undefined **)(unaff_x20 + _DAT_112f86a58) = PTR_PTR_1133bb548;
  *(undefined8 *)(unaff_x20 + _DAT_112f86a60) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(puVar2);
  func_0x000107c61154(auStack_30,puVar1);
  return;
}



/* Entry: 1036b5414; end: 1036b54e7;  */

/* WARNING: Possible PIC construction at 0x0001036b5484: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b5488) */
/* WARNING: Removing unreachable block (ram,0x0001036b54a4) */
/* WARNING: Removing unreachable block (ram,0x0001036b54b0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b5414(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  puVar1 = PTR_PTR_1133bb548;
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112f86a60) + _DAT_11302bab8);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    func_0x000107c61434(lVar2);
    func_0x000100fac3bc();
    if ((param_2 & 1) != 0) {
      func_0x000107c615f0(*(undefined8 *)(*(long *)(lVar2 + 0x38) + (long)puVar1 * 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
    return;
  }
  return;
}



/* Entry: 1036b54e8; end: 1036b5537; -[_TtC31SnapEditorMediaPluginEntryPoint21SnapEditorMediaPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036b5520: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b5524) */

void FUN_1036b54e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036b5414(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036b5538; end: 1036b556b;  */

void FUN_1036b5538(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036b556c; end: 1036b55a3; -[_TtC31SnapEditorMediaPluginEntryPoint21SnapEditorMediaPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036b5588: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b558c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b556c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f86a58));
  return;
}



/* Entry: 1036b55a4; end: 1036b55c3;  */

void FUN_1036b55a4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e0988);
  return;
}



/* Entry: 1036b55c4; end: 1036b56f7;  */

void FUN_1036b55c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  puVar1 = &UNK_11067ef98;
  func_0x000107c613fc(&UNK_11067ef98,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(0x1036b5668,puVar1);
  return;
}



/* Entry: 1036b56f8; end: 1036b5707;  */

undefined1  [16] FUN_1036b56f8(void)

{
  return ZEXT816(0x11067efc0);
}



/* Entry: 1036b5708; end: 1036b57a7; -[_TtC33SnapEditorMetricsPluginEntryPoint29SnapEditorCrashMetadataWriter setMetadataValueWithKey:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b5708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&uStack_38);
  func_0x000107c56be8(uStack_38,param_2,param_4,param_3,1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1036b57a8; end: 1036b582f; -[_TtC33SnapEditorMetricsPluginEntryPoint29SnapEditorCrashMetadataWriter removeMetadataValueWithKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b57a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&uStack_38);
  func_0x000107c56be8(uStack_38,param_2,0,param_3,1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1036b5830; end: 1036b588f; -[_TtC33SnapEditorMetricsPluginEntryPoint29SnapEditorCrashMetadataWriter init] */

void FUN_1036b5830(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorMetricsPluginEntryPoint.SnapEditorCrashMetadataWriter",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036b585c);
  (*pcVar1)();
}



/* Entry: 1036b5890; end: 1036b589f; -[_TtC33SnapEditorMetricsPluginEntryPoint29SnapEditorCrashMetadataWriter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b5890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f86a90));
  return;
}



/* Entry: 1036b58a0; end: 1036b58bf;  */

void FUN_1036b58a0(void)

{
  func_0x000107c61168(&PTR_PTR_1128e0a50);
  return;
}



/* Entry: 1036b58c0; end: 1036b59d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b58c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f86ac0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f86ac8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f86ad0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f86ad8) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036b59d8; end: 1036b661b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b59d8(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  long unaff_x20;
  long lVar19;
  long lVar20;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  puVar3 = PTR_PTR_1126ad400;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1133bb550;
  lVar20 = *(long *)(unaff_x20 + _DAT_112f86ac0);
  lVar19 = *(long *)(lVar20 + _DAT_11302bab8);
  if ((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) {
LAB_1036b5ab8:
    puVar5 = PTR_PTR_1126c81a0;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    uVar7 = 0;
    func_0x000107c61438(lVar19);
    func_0x000100fac3bc();
    if ((uVar7 & 1) == 0) {
      func_0x000107c61430(lVar19,2);
      goto LAB_1036b5ab8;
    }
    puVar16 = *(undefined **)(*(long *)(lVar19 + 0x38) + (long)puVar4 * 8);
    func_0x000107c615f0(puVar16);
    func_0x000107c61430(lVar19,2);
    puVar4 = PTR_PTR_1126c81a0;
    func_0x000107c61168(PTR_PTR_1126c81a0);
    puVar5 = puVar16;
    func_0x000107c6148c(puVar16,puVar4);
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c615e8(puVar16);
      goto LAB_1036b5ab8;
    }
  }
  puVar4 = puVar5;
  func_0x000107c4c014();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c4258;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  uVar6 = *(undefined8 *)(lVar20 + _DAT_11302bae0);
  uVar1 = ((undefined8 *)(lVar20 + _DAT_11302bae0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c59478(puVar4);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(lVar20 + _DAT_11302baa8);
  func_0x0001008cc2b4(uVar6);
  func_0x000107c61180();
  func_0x000107c59558(puVar4);
  func_0x000107c61170(uVar6);
  uVar7 = *(ulong *)(lVar20 + _DAT_11302baf0);
  if (uVar7 == 0) goto LAB_1036b6378;
  func_0x000107c61174();
  uVar8 = uVar7;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  func_0x000107c55d70(puVar4);
  func_0x000107c61170(uVar8);
  uVar8 = uVar7;
  func_0x000107c43b3c(uVar7);
  FUN_1036b7824(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = uVar8 & 0xffffffff;
  func_0x000107c60110(uVar8);
  func_0x000107c52fa4(puVar4);
  func_0x000107c61170(uVar8);
  uVar8 = uVar7;
  func_0x000107c3d0f8(uVar7);
  func_0x000107c61180();
  func_0x000107c521ec(puVar4);
  func_0x000107c61170(uVar8);
  uVar8 = uVar7;
  func_0x000107c41884(uVar7);
  func_0x000107c61180();
  func_0x000107c54060(puVar4);
  func_0x000107c61170(uVar8);
  puVar16 = puVar4;
  func_0x000107c3d990();
  func_0x000107c61180();
  if (puVar16 == (undefined *)0x0) {
    puVar16 = PTR_PTR_1126c81a8;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  func_0x000107c42d20(uVar7);
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  func_0x000107c54840(puVar16);
  func_0x000107c61170(puVar18);
  func_0x000107c42d10(uVar7);
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  func_0x000107c54834(puVar16);
  func_0x000107c61170(puVar18);
  func_0x000107c43b3c(uVar7);
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5a75c(puVar4);
  func_0x000107c61170(puVar18);
  func_0x000107c4a454(uVar7);
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55844(puVar4);
  func_0x000107c61170(puVar18);
  uVar8 = uVar7;
  func_0x000107c4c104(uVar7);
  func_0x000107c311b8();
  func_0x000107c61180();
  func_0x000107c56174(puVar16);
  func_0x000107c61170(uVar8);
  func_0x000107c49a60(uVar7);
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55550(puVar16);
  func_0x000107c61170(puVar18);
  uVar8 = uVar7;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (uVar8 != 0) {
    func_0x000107c61170();
    func_0x000107c4b1fc(uVar7);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    func_0x000107c55d88(puVar4);
    func_0x000107c61170(puVar18);
    uVar8 = uVar7;
    func_0x000107c4ae14(uVar7);
    func_0x000107c61180();
    func_0x000107c55bfc(puVar16);
    func_0x000107c61170(uVar8);
    func_0x000107c4b1f8(uVar7);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    func_0x000107c55d84(puVar16);
    func_0x000107c61170(puVar18);
    uVar8 = uVar7;
    func_0x000107c4b414(uVar7);
    func_0x000107c311a8();
    func_0x000107c61180();
    func_0x000107c55e78(puVar16);
    func_0x000107c61170(uVar8);
    uVar8 = uVar7;
    func_0x000107c434c0(uVar7);
    func_0x000107c61180();
    func_0x000107c549d0(puVar16);
    func_0x000107c61170(uVar8);
    uVar8 = uVar7;
    func_0x000107c4b4d8(uVar7);
    func_0x000107c311b0();
    func_0x000107c61180();
    func_0x000107c55ed0(puVar16);
    func_0x000107c61170(uVar8);
    uVar8 = uVar7;
    func_0x000107c4b2c4(uVar7);
    func_0x000107c61180();
    func_0x000107c55de8(puVar16);
    func_0x000107c61170(uVar8);
  }
  uVar8 = uVar7;
  func_0x000107c4afc0();
  func_0x000107c61180();
  if (uVar8 != 0) {
    uVar6 = 0;
    FUN_1036b7824(0,0x112ebb2d8,&PTR_PTR_1126d9648);
    uVar9 = uVar8;
    func_0x000107c5fc54(uVar8,uVar6);
    func_0x000107c61170(uVar8);
    if (uVar9 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
      if (uVar8 == 0) {
LAB_1036b617c:
        func_0x000107c6142c(uVar9);
        goto LAB_1036b618c;
      }
LAB_1036b5f5c:
      puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001036b6df0(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b6614);
        (*pcVar2)();
      }
      uVar17 = 0;
      do {
        puVar18 = puStack_a8;
        if ((uVar9 & 0xc000000000000001) == 0) {
          if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b6134);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b6138);
            (*pcVar2)();
          }
          uVar13 = *(ulong *)(uVar9 + uVar17 * 8 + 0x20);
          func_0x000107c61174(uVar13);
        }
        else {
          uVar13 = uVar17;
          FUN_1036b7660(uVar17,uVar9);
        }
        puVar10 = PTR_PTR_1126a6128;
        func_0x000107c610f8();
        func_0x000107c453e4();
        uVar11 = uVar13;
        func_0x000107c4b1dc(uVar13);
        func_0x000107c61180();
        func_0x000107c55d70(puVar10);
        func_0x000107c61170(uVar11);
        uVar11 = uVar13;
        func_0x000107c4b414(uVar13);
        func_0x000107c311a8();
        func_0x000107c61180();
        func_0x000107c55e7c(puVar10);
        func_0x000107c61170(uVar11);
        func_0x000107c4b1fc(uVar13);
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c46ed0();
        func_0x000107c55d8c(puVar10);
        func_0x000107c61170(uVar13);
        func_0x000107c61170(puVar12);
        uVar13 = *(ulong *)(puVar18 + 0x10);
        puStack_a8 = puVar18;
        if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar13) {
          func_0x0001036b6df0(1 < *(ulong *)(puVar18 + 0x18),uVar13 + 1,1);
        }
        puVar18 = puStack_a8;
        uVar17 = uVar17 + 1;
        *(ulong *)(puStack_a8 + 0x10) = uVar13 + 1;
        *(undefined **)(puStack_a8 + uVar13 * 8 + 0x20) = puVar10;
      } while (uVar8 != uVar17);
      func_0x000107c6142c(uVar9);
    }
    else {
      uVar8 = uVar9 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar9) {
        uVar8 = uVar9;
      }
      uVar17 = uVar8;
      func_0x000107c60480();
      if (uVar17 == 0) goto LAB_1036b617c;
      func_0x000107c60480();
      if (uVar8 != 0) goto LAB_1036b5f5c;
      func_0x000107c6142c(uVar9);
      puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    uVar6 = 0;
    FUN_1036b7824(0,0x112d51358,&PTR_PTR_1126a6128);
    puVar10 = puVar18;
    func_0x000107c5fc48(puVar18,uVar6);
    func_0x000107c6142c(puVar18);
    func_0x000107c55cb4(puVar16);
    func_0x000107c61170(puVar10);
  }
LAB_1036b618c:
  func_0x000107c524e8(puVar4);
  uVar8 = uVar7;
  func_0x000107c4afc0();
  func_0x000107c61180();
  if (uVar8 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    uVar6 = 0;
    FUN_1036b7824(0,0x112ebb2d8,&PTR_PTR_1126d9648);
    uVar9 = uVar8;
    func_0x000107c5fc54(uVar8,uVar6);
    func_0x000107c61170(uVar8);
    if (uVar9 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
      if (uVar8 != 0) goto LAB_1036b61f4;
LAB_1036b630c:
      func_0x000107c6142c(uVar9);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar8 = uVar9 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar9) {
        uVar8 = uVar9;
      }
      func_0x000107c60480();
      if (uVar8 == 0) goto LAB_1036b630c;
LAB_1036b61f4:
      puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001036b6db4(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b6618);
        (*pcVar2)();
      }
      uVar17 = 0;
      do {
        puVar18 = puStack_a8;
        if ((uVar9 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar9 & 0xffffffffffffff8) + 0x10) <= (long)uVar17) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b62f4);
            (*pcVar2)();
          }
          uVar13 = *(ulong *)(uVar9 + uVar17 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar13 = uVar17;
          FUN_1036b7660(uVar17,uVar9);
        }
        uStack_c8 = uVar13;
        FUN_1036b661c(&uStack_c0,&uStack_c8);
        func_0x000107c61170(uVar13);
        uVar6 = uStack_c0;
        uVar13 = *(ulong *)(puVar18 + 0x10);
        puStack_a8 = puVar18;
        if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar13) {
          func_0x0001036b6db4(1 < *(ulong *)(puVar18 + 0x18),uVar13 + 1,1);
        }
        puVar10 = puStack_a8;
        uVar17 = uVar17 + 1;
        *(ulong *)(puStack_a8 + 0x10) = uVar13 + 1;
        *(undefined8 *)(puStack_a8 + uVar13 * 8 + 0x20) = uVar6;
      } while (uVar8 != uVar17);
      func_0x000107c6142c(uVar9);
    }
    uVar6 = 0;
    FUN_1036b7824(0,0x112d51348,&PTR_PTR_1126a6120);
    puVar18 = puVar10;
    func_0x000107c5fc48(puVar10,uVar6);
    func_0x000107c6142c(puVar10);
  }
  func_0x000107c55dbc(puVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar18);
LAB_1036b6378:
  func_0x000107c560f8(puVar5);
  func_0x000107c5372c(puVar3);
  func_0x000100083b20(&puStack_a8);
  puVar16 = puStack_a8;
  puVar18 = puStack_a8;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  if (puVar18 != (undefined *)0x0) {
    uVar6 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010f158fe0);
    puVar16 = puVar18;
    func_0x000107c3ebd4();
    func_0x000107c615e8(puVar18);
    func_0x000107c61170(uVar6);
    if ((int)puVar16 != 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f86ac8);
      lVar20 = 0;
      FUN_1036b58a0();
      lVar19 = lVar20;
      func_0x000107c610f8();
      *(undefined8 *)(lVar19 + _DAT_112f86a90) = uVar6;
      puVar16 = PTR_s_init_1125d9248;
      lStack_b8 = lVar19;
      lStack_b0 = lVar20;
      func_0x000107c6157c(uVar6);
      plVar14 = &lStack_b8;
      func_0x000107c61154(plVar14,puVar16);
      func_0x000107c53a54(puVar3);
      func_0x000107c61170(plVar14);
    }
    puVar10 = PTR_PTR_1126ad408;
    func_0x000107c610f8(PTR_PTR_1126ad408);
    func_0x000107c453e4();
    puVar18 = PTR___NSConcreteStackBlock_11034bd00;
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f86ad8);
    pcStack_88 = FUN_1036b6c84;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_1036b6c8c;
    puStack_90 = &UNK_11067f078;
    ppuVar15 = &puStack_a8;
    puStack_80 = (undefined *)uVar6;
    func_0x000107c60bc4(ppuVar15);
    puVar16 = puStack_80;
    func_0x000107c6157c(uVar6);
    func_0x000107c61574(puVar16);
    func_0x000107c57c08(puVar10);
    func_0x000107c60bd0(ppuVar15);
    puVar16 = PTR_PTR_1126ad410;
    func_0x000107c610f8(PTR_PTR_1126ad410);
    func_0x000107c48a00();
    func_0x000107c61170(puVar10);
    func_0x000107c543b0(puVar3);
    func_0x000107c61170(puVar16);
    puVar16 = &UNK_11067f0b0;
    func_0x000107c613fc(&UNK_11067f0b0,0x18,7);
    *(undefined **)(puVar16 + 0x10) = puVar3;
    puVar10 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    pcStack_88 = (code *)0x1036b6cf4;
    puStack_a8 = puVar18;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)&UNK_101016bdc;
    puStack_90 = &UNK_11067f0c8;
    ppuVar15 = &puStack_a8;
    puStack_80 = puVar16;
    func_0x000107c60bc4(ppuVar15);
    func_0x000107c61174(puVar3);
    func_0x000107c46b38(puVar10);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c61574(puStack_80);
    func_0x000107c566b4(param_1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b661c);
  (*pcVar2)();
}



/* Entry: 1036b661c; end: 1036b67bf;  */

void FUN_1036b661c(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_2;
  puVar1 = PTR_PTR_1126a6120;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = lVar3;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c55d70(puVar1);
    func_0x000107c61170(lVar4);
  }
  lVar4 = lVar3;
  func_0x000107c4b414(lVar3);
  func_0x000107c311a8();
  func_0x000107c61180();
  func_0x000107c55e78(puVar1);
  func_0x000107c61170(lVar4);
  lVar4 = lVar3;
  func_0x000107c4f8bc(lVar3);
  func_0x000107c61180();
  func_0x000107c57b08(puVar1);
  func_0x000107c61170(lVar4);
  lVar4 = lVar3;
  func_0x000107c4f8b8(lVar3);
  func_0x000107c61180();
  func_0x000107c57b00(puVar1);
  func_0x000107c61170(lVar4);
  lVar4 = lVar3;
  func_0x000107c3d2dc();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar2 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    func_0x0001008fc608(lVar2);
    if (param_3 >> 0x3c < 0xf) {
      lVar4 = lVar2;
      func_0x000107c5ee20();
      func_0x0001000b44c0(lVar2,param_3);
    }
    else {
      lVar4 = 0;
    }
    func_0x000107c522e0(puVar1);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c5ca38(lVar3);
  func_0x000107c61180();
  func_0x000107c59da4(puVar1);
  func_0x000107c61170(lVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 1036b67c0; end: 1036b680f; -[_TtC33SnapEditorMetricsPluginEntryPoint23SnapEditorMetricsPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036b67f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b67fc) */

void FUN_1036b67c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036b59d8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036b6810; end: 1036b6c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b6810(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_48;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1036b7884();
  lVar2 = param_1;
  func_0x000107c453a4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,param_2,0,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c5b454();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,param_2,1,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c3e9f4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,param_2,2,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c3e9d0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,param_2,3,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c42508();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,param_2,4,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c443f8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,param_2,5,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c40630();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,param_2,6,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c5d2b4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,param_2,7,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c43cc0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,param_2,8,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c3f1d0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,param_2,10,puVar3);
    puVar1 = puStack_48;
  }
  func_0x000100083b20(&puStack_48);
  puVar3 = puStack_48;
  lVar4 = *(long *)(puStack_48 + _DAT_112ff14b8);
  func_0x000107c61174();
  func_0x000107c61170(puVar3);
  lVar2 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar2 == 0) {
    func_0x000107c6142c(puVar1);
  }
  else {
    lVar4 = param_1;
    func_0x000107c3f5f8(param_1);
    func_0x000107c61180();
    func_0x000107c5b3e8(param_1);
    func_0x000107c61180();
    func_0x000103b86c78(0);
    func_0x000107c610f8();
    puVar3 = puVar1;
    func_0x000107c61434(puVar1);
    func_0x000103b868f8();
    func_0x000107c4fab0(lVar2);
    func_0x000107c6142c(puVar1);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1036b6c84; end: 1036b6c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b6c84(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 unaff_x20;
  undefined *puStack_48;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1036b7884();
  lVar2 = param_1;
  func_0x000107c453a4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,unaff_x20,0,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c5b454();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,unaff_x20,1,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c3e9f4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,unaff_x20,2,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c3e9d0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,unaff_x20,3,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c42508();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,unaff_x20,4,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c443f8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,unaff_x20,5,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c40630();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,unaff_x20,6,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c5d2b4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,unaff_x20,7,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c43cc0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,unaff_x20,8,puVar3);
    puVar1 = puStack_48;
  }
  lVar2 = param_1;
  func_0x000107c3f1d0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_48 = puVar1;
    FUN_1036b6ff0(lVar4,unaff_x20,10,puVar3);
    puVar1 = puStack_48;
  }
  func_0x000100083b20(&puStack_48);
  puVar3 = puStack_48;
  lVar4 = *(long *)(puStack_48 + _DAT_112ff14b8);
  func_0x000107c61174();
  func_0x000107c61170(puVar3);
  lVar2 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar2 == 0) {
    func_0x000107c6142c(puVar1);
  }
  else {
    lVar4 = param_1;
    func_0x000107c3f5f8(param_1);
    func_0x000107c61180();
    func_0x000107c5b3e8(param_1);
    func_0x000107c61180();
    func_0x000103b86c78(0);
    func_0x000107c610f8();
    puVar3 = puVar1;
    func_0x000107c61434(puVar1);
    func_0x000103b868f8();
    func_0x000107c4fab0(lVar2);
    func_0x000107c6142c(puVar1);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1036b6c8c; end: 1036b6cd7;  */

void FUN_1036b6c8c(long param_1,undefined8 param_2)

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



/* Entry: 1036b6cd8; end: 1036b6cfb;  */

void FUN_1036b6cd8(long param_1,long param_2)

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



/* Entry: 1036b6cfc; end: 1036b6d5b; -[_TtC33SnapEditorMetricsPluginEntryPoint23SnapEditorMetricsPlugin init] */

void FUN_1036b6cfc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorMetricsPluginEntryPoint.SnapEditorMetricsPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036b6d28);
  (*pcVar1)();
}



/* Entry: 1036b6d5c; end: 1036b6db3; -[_TtC33SnapEditorMetricsPluginEntryPoint23SnapEditorMetricsPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036b6d88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036b6d8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036b6d5c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86ac0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f86ac8));
  return;
}



/* Entry: 1036b6db4; end: 1036b6e2b;  */

void FUN_1036b6db4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1036b6e2c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1036b6e2c; end: 1036b6f77;  */

undefined *
FUN_1036b6e2c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b6f78);
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
    puVar3 = param_5;
    FUN_1036b6f78(param_5,param_6,param_7,param_8);
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
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1036b7824(0,param_5,param_6);
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



/* Entry: 1036b6f78; end: 1036b6fef;  */

void FUN_1036b6f78(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1036b7824(0,param_1,param_2);
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



/* Entry: 1036b6ff0; end: 1036b729b;  */

void FUN_1036b6ff0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_3;
  uVar5 = param_2;
  func_0x000101c6350c();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b70c0);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar7) {
    param_4 = param_4 & 1;
    FUN_1036b729c(lVar7);
    uVar3 = param_3;
    func_0x000101c6350c();
    if (((uint)uVar5 & 1) != (param_4 & 1)) {
      func_0x000107c60624(&UNK_1106dbd98);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b7088);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001036b7134();
    lVar7 = *unaff_x20;
    goto joined_r0x0001036b70d4;
  }
  lVar7 = *unaff_x20;
joined_r0x0001036b70d4:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
    return;
  }
  lVar6 = lVar7 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar3 & 0x3f);
  *(char *)(*(long *)(lVar7 + 0x30) + uVar3) = (char)param_3;
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b7134);
    (*pcVar2)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  return;
}



/* Entry: 1036b729c; end: 1036b765f;  */

void FUN_1036b729c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *unaff_x20;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_a8 [72];
  
  lVar16 = *unaff_x20;
  lVar1 = *(long *)(lVar16 + 0x18);
  if (*(long *)(lVar16 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar7 = 0x112f86b08;
  func_0x0001000285a8(0x112f86b08,&UNK_10dbfa9c0);
  lVar8 = lVar16;
  func_0x000107c60490(lVar16,lVar1,param_2,uVar7);
  if (*(long *)(lVar16 + 0x10) == 0) {
LAB_1036b762c:
    func_0x000107c61574(lVar16);
    *unaff_x20 = lVar8;
    return;
  }
  puVar17 = (ulong *)(lVar16 + 0x40);
  uVar13 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar19 = uVar19 & *puVar17;
  lVar1 = lVar8 + 0x40;
  lVar12 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar18 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1036b765c);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) != 0) {
            uVar19 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
            if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
              *puVar17 = -1L << (uVar19 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar17,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar16 + 0x10) = 0;
          }
          goto LAB_1036b762c;
        }
        uVar19 = puVar17[lVar18];
        lVar12 = lVar12 + 1;
      } while (uVar19 == 0);
      uVar11 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar11 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar18 = lVar12;
    }
    uVar11 = LZCOUNT(uVar11) | lVar18 << 6;
    uVar4 = *(undefined1 *)(*(long *)(lVar16 + 0x30) + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar11 * 0x10);
    uVar7 = *puVar2;
    uVar3 = puVar2[1];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar8 + 0x28));
    uVar11 = 0xe400000000000000;
    uVar9 = 0x6f666e69;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar4) {
    case 1:
      uVar11 = 0xe800000000000000;
      uVar9 = 0x7461686370616e73;
      break;
    case 2:
      uVar11 = 0xe700000000000000;
      uVar9 = 0x696a6f6d746962;
      break;
    case 3:
      uVar9 = 0x5f696a6f6d746962;
      uVar11 = 0xeb000000006f6567;
      break;
    case 4:
      uVar11 = 0xe500000000000000;
      uVar9 = 0x696a6f6d65;
      break;
    case 5:
      uVar11 = 0xe500000000000000;
      uVar9 = 0x7968706967;
      break;
    case 6:
      uVar11 = 0xea00000000006c61;
      uVar9 = 0x75747865746e6f63;
      break;
    case 7:
      uVar11 = 0xea0000000000656c;
      uVar9 = 0x62616b636f6c6e75;
      break;
    case 8:
      uVar9 = 0x696e735f656d6167;
      uVar11 = 0xec00000074657070;
      break;
    case 9:
      uVar11 = 0xe600000000000000;
      uVar9 = 0x6d6f74737563;
      break;
    case 10:
      uVar9 = 0x725f6172656d6163;
      uVar11 = 0xeb000000006c6c6f;
    }
    func_0x000107c5fb58(auStack_a8,uVar9,uVar11);
    func_0x000107c6142c();
    func_0x000107c606a8();
    uVar15 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar11 = uVar11 & (uVar15 ^ 0xffffffffffffffff);
    uVar10 = uVar11 >> 6;
    uVar14 = -1L << (uVar11 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar14 == 0) {
      bVar5 = false;
      uVar11 = 0x3f - uVar15 >> 6;
      do {
        uVar14 = uVar10 + 1;
        if ((uVar14 == uVar11) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1036b7660);
          (*pcVar6)();
        }
        uVar10 = 0;
        if (uVar14 != uVar11) {
          uVar10 = uVar14;
        }
        bVar5 = (bool)(uVar14 == uVar11 | bVar5);
        uVar14 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar14 == 0xffffffffffffffff);
      uVar14 = ~uVar14;
      uVar11 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar10 << 6;
    }
    else {
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar14) = 1L << (uVar11 & 0x3f) | *(ulong *)(lVar1 + uVar14);
    *(undefined1 *)(*(long *)(lVar8 + 0x30) + uVar11) = uVar4;
    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar11 * 0x10);
    *puVar2 = uVar7;
    puVar2[1] = uVar3;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar12 = lVar18;
  } while( true );
}



/* Entry: 1036b7660; end: 1036b7823;  */

ulong FUN_1036b7660(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b7744);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b7748);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126d9648;
    func_0x000107c61168(PTR_PTR_1126d9648);
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
    puVar4 = PTR_PTR_1126d9648;
    func_0x000107c61168(PTR_PTR_1126d9648);
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
  FUN_1036b7824(0,0x112ebb2d8,&PTR_PTR_1126d9648);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036b7824);
  (*pcVar2)();
}



/* Entry: 1036b7824; end: 1036b7863;  */

void FUN_1036b7824(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1036b7864; end: 1036b7883;  */

void FUN_1036b7864(void)

{
  func_0x000107c61168(&PTR_PTR_1128e0b10);
  return;
}



/* Entry: 1036b7884; end: 1036b7977;  */

undefined * FUN_1036b7884(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    uVar7 = 0;
    func_0x0001000285a8(0x112f86b08);
    puVar6 = puVar9;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar11 = (undefined8 *)(param_1 + 0x30);
    do {
      bVar4 = *(byte *)(puVar11 + -2);
      uVar10 = (ulong)bVar4;
      uVar2 = puVar11[-1];
      uVar3 = *puVar11;
      func_0x000107c61434(uVar3);
      func_0x000101c6350c();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1036b7974);
        (*pcVar5)();
      }
      uVar8 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar10 & 0x3f);
      *(byte *)(*(long *)(puVar6 + 0x30) + uVar10) = bVar4;
      puVar1 = (undefined8 *)(*(long *)(puVar6 + 0x38) + uVar10 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1036b7978);
        (*pcVar5)();
      }
      puVar11 = puVar11 + 3;
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar9 = puVar9 + -1;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 1036b7978; end: 1036b797f;  */

void FUN_1036b7978(long param_1,long param_2)

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



/* Entry: 1036b7980; end: 1036b7ad3;  */

void FUN_1036b7980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  puVar1 = &UNK_11067f1a8;
  func_0x000107c613fc(&UNK_11067f1a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x1036b7a00,puVar1);
  return;
}


