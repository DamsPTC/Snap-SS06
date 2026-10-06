/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f36dcc; end: 100f36ddb;  */

undefined1 FUN_100f36dcc(void)

{
  undefined1 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 100f36ddc; end: 100f36e03;  */

void FUN_100f36ddc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000100f3756c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_110351348)(param_1,uVar1);
  return;
}



/* Entry: 100f36e04; end: 100f36e4b;  */

void FUN_100f36e04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000100f3756c();
  uVar2 = uVar1;
  func_0x000100f375ac();
  uVar3 = uVar2;
  FUN_100e2203c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzSYRzs17FixedWidthInteger8RawValueSYRpzrlE5_codeSivg_110351338
  )(param_1,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 100f36e4c; end: 100f36e53;  */

void FUN_100f36e4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 100f36e54; end: 100f36eb3; -[_TtC31ProfessionalProfilePageLauncher38ProfessionalProfilePageLauncherHandler init] */

void FUN_100f36e54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ProfessionalProfilePageLauncher.ProfessionalProfilePageLauncherHandler",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f36e80);
  (*pcVar1)();
}



/* Entry: 100f36eb4; end: 100f36f4b; -[_TtC31ProfessionalProfilePageLauncher38ProfessionalProfilePageLauncherHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f36f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f36f34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f36eb4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4cae0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d4caf8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4cb00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4cb08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4cb10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4cb18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d4cae8));
  return;
}



/* Entry: 100f36f4c; end: 100f36f8f;  */

void FUN_100f36f4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4cb20 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a5fb8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d4cb20 = puVar1;
  return;
}



/* Entry: 100f36f90; end: 100f36f93; -[_TtC31ProfessionalProfilePageLauncher38ProfessionalProfilePageLauncherHandler setPayloadClass:] */

void FUN_100f36f90(void)

{
  return;
}



/* Entry: 100f36f94; end: 100f36f97; -[_TtC31ProfessionalProfilePageLauncher38ProfessionalProfilePageLauncherHandler setComposerPayloadClass:] */

void FUN_100f36f94(void)

{
  return;
}



/* Entry: 100f36f98; end: 100f36f9f; -[_TtC31ProfessionalProfilePageLauncher38ProfessionalProfilePageLauncherHandler payloadType] */

undefined8 FUN_100f36f98(void)

{
  return 4;
}



/* Entry: 100f36fa0; end: 100f370c3;  */

void FUN_100f36fa0(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100f38104(param_1,&uStack_50,0x112d387f8,&UNK_10d902650);
  if (lStack_38 == 0) {
    puVar2 = &uStack_50;
    func_0x000100f380c4(puVar2,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar1 = 0;
    FUN_100f36f4c(0);
    puVar2 = &uStack_58;
    func_0x000107c6147c(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      FUN_100f37104(uStack_58,param_2,param_3);
      func_0x000107c61170(uStack_58);
      return;
    }
  }
  if (param_2 != (code *)0x0) {
    FUN_100f370c4();
    puVar3 = &UNK_11036af80;
    func_0x000107c613f8(&UNK_11036af80,puVar2,0,0);
    *(undefined1 *)puVar2 = 0;
    puVar4 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar3);
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
    (*param_2)(puVar4,&uStack_50);
    func_0x000107c61170(puVar4);
    func_0x000100f380c4(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  return;
}



/* Entry: 100f370c4; end: 100f37103;  */

void FUN_100f370c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4cb28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d913514;
  func_0x000107c61520(&UNK_10d913514,&UNK_11036af80);
  puRam0000000112d4cb28 = puVar1;
  return;
}



/* Entry: 100f37104; end: 100f372bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f37104(long param_1,code *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  puVar1 = *(undefined1 **)(unaff_x20 + _DAT_112d4cb00);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar2 != (undefined1 *)0x0) {
    FUN_100f375ec();
    if (param_1 != 0) {
      puVar4 = &UNK_11036afc8;
      func_0x000107c613fc(&UNK_11036afc8,0x30,7);
      *(code **)(puVar4 + 0x10) = param_2;
      *(undefined8 *)(puVar4 + 0x18) = param_3;
      *(long *)(puVar4 + 0x20) = unaff_x20;
      *(long *)(puVar4 + 0x28) = param_1;
      uStack_60 = 0x100f38154;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_100f1c768;
      puStack_68 = &UNK_11036afe0;
      puStack_58 = puVar4;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000100f1d248(param_2,param_3);
      func_0x000107c61174();
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar4);
      func_0x000107c440d8(puVar2);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(puVar2);
      func_0x000107c61170(param_1);
      return;
    }
    func_0x000107c615e8();
    puVar1 = puVar2;
  }
  if (param_2 != (code *)0x0) {
    FUN_100f370c4();
    puVar4 = &UNK_11036af80;
    func_0x000107c613f8(&UNK_11036af80,puVar1,0,0);
    *puVar1 = 1;
    puVar5 = puVar4;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar4);
    uStack_78 = 0;
    puStack_80 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    pcStack_70 = (code *)0x0;
    (*param_2)(puVar5,&puStack_80);
    func_0x000107c61170(puVar5);
    func_0x000100f380c4(&puStack_80,0x112d387f8,&UNK_10d902650);
  }
  return;
}



/* Entry: 100f372c0; end: 100f372df;  */

void FUN_100f372c0(void)

{
  func_0x000107c61168(&PTR_PTR_1127a2d08);
  return;
}



/* Entry: 100f372e0; end: 100f373bf; -[_TtC31ProfessionalProfilePageLauncher38ProfessionalProfilePageLauncherHandler launchWithPayload:completion:] */

void FUN_100f372e0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_11036afa0;
    func_0x000107c613fc(&UNK_11036afa0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_100f3814c;
  }
  FUN_100f36fa0(&uStack_50,pcVar1,puVar2);
  FUN_100c9bbd0(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000100f380c4(&uStack_50,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 100f373c0; end: 100f3752b;  */

int FUN_100f373c0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100f3743c;
        goto LAB_100f37420;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100f37420:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_100f3743c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100f3752c; end: 100f375eb;  */

void FUN_100f3752c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4cb58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9134ec;
  func_0x000107c61520(&UNK_10d9134ec,&UNK_11036af80);
  puRam0000000112d4cb58 = puVar1;
  return;
}



/* Entry: 100f375ec; end: 100f37ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f375ec(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  ulong uVar15;
  long unaff_x20;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112d4cb18);
  func_0x000107c4d814();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x000107c4c1dc();
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000100f37c54();
    if (lVar4 != 0) {
      uVar5 = *(ulong *)(unaff_x20 + _DAT_112d4cb08);
      func_0x000107c4f3e4();
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar6 == 0) {
        func_0x000107c615e8(lVar3);
        lVar3 = lVar4;
      }
      else {
        uVar5 = uVar6;
        func_0x000107c4f378();
        func_0x000107c61180();
        func_0x000107c615e8(uVar6);
        uVar6 = 0x112d4bd28;
        func_0x0001000285a8(0x112d4bd28,&UNK_10d9127e0);
        uVar7 = uVar5;
        func_0x000107c5fc54();
        func_0x000107c61170(uVar5);
        if (uVar7 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar7 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar7) {
            uVar5 = uVar7;
          }
          func_0x000107c60480();
        }
        if (uVar5 != 0) {
          uVar17 = 0;
          do {
            if ((uVar7 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100f37a80);
                (*pcVar2)();
              }
              uVar18 = *(ulong *)(uVar7 + uVar17 * 8 + 0x20);
              func_0x000107c615f0(uVar18);
            }
            else {
              uVar18 = uVar17;
              uVar6 = uVar7;
              FUN_100f1cdf4();
            }
            if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100f37850);
              (*pcVar2)();
            }
            uVar16 = uVar17 + 1;
            uVar20 = uVar18;
            func_0x000107c3ee4c();
            func_0x000107c61180();
            uVar19 = uVar20;
            func_0x000107c44fd8();
            func_0x000107c61180();
            func_0x000107c61170(uVar20);
            if (uVar19 == 0) {
              uVar20 = 0;
              uVar19 = 0;
              uVar15 = uVar6;
            }
            else {
              uVar20 = uVar19;
              func_0x000107c5faec();
              uVar15 = uVar6;
              func_0x000107c61170(uVar19);
              uVar19 = uVar6;
            }
            uVar8 = param_1;
            func_0x000107c4f38c();
            func_0x000107c61180();
            uVar9 = uVar8;
            func_0x000107c5faec();
            uVar6 = uVar15;
            func_0x000107c61170(uVar8);
            if (uVar19 != 0) {
              if ((uVar20 == uVar9) && (uVar19 == uVar15)) {
                func_0x000107c6142c(uVar7);
                func_0x000107c6142c(uVar19);
                uVar7 = uVar15;
              }
              else {
                uVar6 = uVar19;
                func_0x000107c605b8(uVar20,uVar19,uVar9,uVar15,0);
                func_0x000107c6142c(uVar19);
                func_0x000107c6142c(uVar15);
                if ((uVar20 & 1) == 0) goto LAB_100f3772c;
              }
              func_0x000107c6142c(uVar7);
              uVar5 = uVar18;
              func_0x000107c3ee50();
              func_0x000107c61180();
              func_0x000107c615e8(uVar18);
              uVar7 = uVar5;
              func_0x000107c41214();
              func_0x000107c61180();
              func_0x000107c61170(uVar5);
              if (uVar7 != 0) {
                uVar5 = uVar7;
                func_0x000107c5ee30(uVar7);
                func_0x000107c61170(uVar7);
                uVar7 = param_1;
                func_0x000107c5b634(param_1);
                func_0x000107c61180();
                uVar17 = param_1;
                func_0x000107c5bc64(param_1);
                func_0x000107c61180();
                puVar10 = &UNK_11036b018;
                func_0x000107c613fc(&UNK_11036b018,0x18,7);
                *(long *)(puVar10 + 0x10) = unaff_x20;
                func_0x000107c61174();
                func_0x000107c5d410();
                func_0x000107c61180();
                puVar11 = &UNK_11036b040;
                func_0x000107c613fc(&UNK_11036b040,0x18,7);
                *(ulong *)(puVar11 + 0x10) = param_1;
                puVar12 = PTR_PTR_1126a5fc0;
                func_0x000107c610f8(PTR_PTR_1126a5fc0);
                uVar18 = uVar5;
                func_0x000107c5ee20(uVar5,uVar6);
                puVar1 = PTR___NSConcreteStackBlock_11034bd00;
                pcStack_88 = FUN_100f3817c;
                puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_a0 = 0x42000000;
                puStack_98 = &UNK_1000f6b44;
                puStack_90 = &UNK_11036b058;
                ppuVar13 = &puStack_a8;
                puStack_80 = puVar10;
                func_0x000107c60bc4(ppuVar13);
                pcStack_b8 = FUN_100f381bc;
                puStack_d8 = puVar1;
                uStack_d0 = 0x42000000;
                pcStack_c8 = FUN_100f37f58;
                puStack_c0 = &UNK_11036b080;
                ppuVar14 = &puStack_d8;
                puStack_b0 = puVar11;
                func_0x000107c60bc4();
                func_0x000107c46420(puVar12);
                func_0x000107c61170(uVar7);
                func_0x000107c61170(uVar17);
                func_0x000107c615e8(lVar3);
                func_0x00010006c090(uVar5,uVar6);
                func_0x000107c615e8(lVar4);
                func_0x000107c60bd0(ppuVar14);
                func_0x000107c60bd0(ppuVar13);
                func_0x000107c61170(uVar18);
                func_0x000107c61574(puStack_b0);
                func_0x000107c61574(puStack_80);
                return puVar12;
              }
              goto LAB_100f37aa0;
            }
            func_0x000107c6142c(uVar15);
LAB_100f3772c:
            func_0x000107c615e8(uVar18);
            uVar17 = uVar17 + 1;
          } while (uVar16 != uVar5);
        }
        func_0x000107c6142c(uVar7);
LAB_100f37aa0:
        func_0x000107c615e8(lVar4);
      }
    }
    func_0x000107c615e8(lVar3);
  }
  return (undefined *)0x0;
}



/* Entry: 100f37ad8; end: 100f37e2f;  */

/* WARNING: Possible PIC construction at 0x000100f37b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f37b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f37c34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f37b9c) */
/* WARNING: Removing unreachable block (ram,0x000100f37b74) */
/* WARNING: Removing unreachable block (ram,0x000100f37c30) */
/* WARNING: Removing unreachable block (ram,0x000100f37b80) */
/* WARNING: Removing unreachable block (ram,0x000100f37c38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f37ad8(undefined1 *param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 != (undefined1 *)0x0) {
    puVar1 = PTR_PTR_1126deec8;
    func_0x000107c61168();
    func_0x000107c615f0(param_1);
    func_0x000107c43be4();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c40b1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    uVar3 = *(undefined8 *)(param_4 + _DAT_112d4caf0);
    *(undefined **)(param_4 + _DAT_112d4caf0) = puVar2;
    func_0x000107c615f0(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
    return;
  }
  if (param_2 != (code *)0x0) {
    FUN_100f370c4();
    puVar1 = &UNK_11036af80;
    func_0x000107c613f8(&UNK_11036af80,param_1,0,0);
    *param_1 = 2;
    puVar2 = puVar1;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar1);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    (*param_2)(puVar2,&uStack_60);
    func_0x000107c61170(puVar2);
    func_0x000100f380c4(&uStack_60,0x112d387f8,&UNK_10d902650);
  }
  return;
}



/* Entry: 100f37e30; end: 100f37f57;  */

void FUN_100f37e30(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar4 = &puStack_90;
  func_0x000107c5ee20();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puVar5 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_1000f6b44;
    puStack_78 = &UNK_11036b120;
    lStack_70 = param_3;
    uStack_68 = param_4;
    func_0x000107c60bc4(&puStack_90);
    uVar2 = uStack_68;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(uVar2);
    puVar5 = (undefined1 *)ppuVar3;
  }
  puVar6 = (undefined1 *)0x0;
  if (param_5 != 0) {
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100f11160;
    puStack_78 = &UNK_11036b0f8;
    lStack_70 = param_5;
    uStack_68 = param_6;
    func_0x000107c60bc4(&puStack_90);
    uVar2 = uStack_68;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(uVar2);
    puVar6 = (undefined1 *)ppuVar4;
  }
  (**(code **)(param_7 + 0x10))(param_7,param_1,puVar5,puVar6);
  func_0x000107c60bd0(puVar6);
  func_0x000107c60bd0(puVar5);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100f37f58; end: 100f3807f;  */

void FUN_100f37f58(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_2;
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c5ee30(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c60bc4();
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar5 = &UNK_11036b0e0;
    func_0x000107c613fc(&UNK_11036b0e0,0x18,7);
    *(long *)(puVar5 + 0x10) = param_3;
    uVar3 = 0x100f381cc;
  }
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar6 = (undefined *)0x0;
    uVar7 = 0;
  }
  else {
    puVar6 = &UNK_11036b0b8;
    func_0x000107c613fc(&UNK_11036b0b8,0x18,7);
    *(long *)(puVar6 + 0x10) = param_4;
    uVar7 = 0x100f381c4;
  }
  (*pcVar1)(param_2,uVar4,uVar3,puVar5,uVar7,puVar6);
  FUN_100c9bbd0(uVar7,puVar6);
  FUN_100c9bbd0(uVar3,puVar5);
  func_0x00010006c090(param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 100f38080; end: 100f3814b;  */

void FUN_100f38080(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f3814c; end: 100f3817b;  */

void FUN_100f3814c(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 100f3817c; end: 100f381bb;  */

/* WARNING: Possible PIC construction at 0x000100f3819c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f381a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3817c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d4caf0);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d4caf0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 100f381bc; end: 100f381f7;  */

void FUN_100f381bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_90;
  ppuVar4 = &puStack_90;
  func_0x000107c5ee20();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puVar6 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_1000f6b44;
    puStack_78 = &UNK_11036b120;
    lStack_70 = param_3;
    uStack_68 = param_4;
    func_0x000107c60bc4(&puStack_90);
    uVar2 = uStack_68;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(uVar2);
    puVar6 = (undefined1 *)ppuVar3;
  }
  puVar7 = (undefined1 *)0x0;
  if (param_5 != 0) {
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100f11160;
    puStack_78 = &UNK_11036b0f8;
    lStack_70 = param_5;
    uStack_68 = param_6;
    func_0x000107c60bc4(&puStack_90);
    uVar2 = uStack_68;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(uVar2);
    puVar7 = (undefined1 *)ppuVar4;
  }
  (**(code **)(lVar5 + 0x10))(lVar5,param_1,puVar6,puVar7);
  func_0x000107c60bd0(puVar7);
  func_0x000107c60bd0(puVar6);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100f381f8; end: 100f381fb; -[_TtC31ProfessionalProfilePageLauncher38ProfessionalProfilePageLauncherHandler composerPayloadClass] */

void FUN_100f381f8(void)

{
  FUN_100f36f4c(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 100f381fc; end: 100f381ff; -[_TtC31ProfessionalProfilePageLauncher38ProfessionalProfilePageLauncherHandler payloadClass] */

void FUN_100f381fc(void)

{
  FUN_100f36f4c(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 100f38200; end: 100f3820b; -[SCProfessionalProfilePageLauncherEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f38200(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cb80;
  func_0x000107c61428(param_1 + _DAT_112d4cb80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f3820c; end: 100f38217; -[SCProfessionalProfilePageLauncherEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3820c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cb80;
  func_0x000107c61428(param_1 + _DAT_112d4cb80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f38218; end: 100f38223; -[SCProfessionalProfilePageLauncherEntryPoint deckServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f38218(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cb88;
  func_0x000107c61428(param_1 + _DAT_112d4cb88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f38224; end: 100f3822f; -[SCProfessionalProfilePageLauncherEntryPoint setDeckServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f38224(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cb88;
  func_0x000107c61428(param_1 + _DAT_112d4cb88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f38230; end: 100f3823b; -[SCProfessionalProfilePageLauncherEntryPoint systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f38230(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cb90;
  func_0x000107c61428(param_1 + _DAT_112d4cb90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f3823c; end: 100f38247; -[SCProfessionalProfilePageLauncherEntryPoint setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3823c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cb90;
  func_0x000107c61428(param_1 + _DAT_112d4cb90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f38248; end: 100f38253; -[SCProfessionalProfilePageLauncherEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f38248(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cb98;
  func_0x000107c61428(param_1 + _DAT_112d4cb98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f38254; end: 100f3825f; -[SCProfessionalProfilePageLauncherEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f38254(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cb98;
  func_0x000107c61428(param_1 + _DAT_112d4cb98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f38260; end: 100f3826b; -[SCProfessionalProfilePageLauncherEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f38260(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cba0;
  func_0x000107c61428(param_1 + _DAT_112d4cba0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f3826c; end: 100f38277; -[SCProfessionalProfilePageLauncherEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3826c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cba0;
  func_0x000107c61428(param_1 + _DAT_112d4cba0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f38278; end: 100f38283; -[SCProfessionalProfilePageLauncherEntryPoint snapProServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f38278(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cba8;
  func_0x000107c61428(param_1 + _DAT_112d4cba8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f38284; end: 100f3828f; -[SCProfessionalProfilePageLauncherEntryPoint setSnapProServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f38284(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cba8;
  func_0x000107c61428(param_1 + _DAT_112d4cba8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f38290; end: 100f3829b; -[SCProfessionalProfilePageLauncherEntryPoint pageLauncherServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f38290(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cbb0;
  func_0x000107c61428(param_1 + _DAT_112d4cbb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f3829c; end: 100f382a7; -[SCProfessionalProfilePageLauncherEntryPoint setPageLauncherServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3829c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cbb0;
  func_0x000107c61428(param_1 + _DAT_112d4cbb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f382a8; end: 100f382b3; -[SCProfessionalProfilePageLauncherEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f382a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cbb8;
  func_0x000107c61428(param_1 + _DAT_112d4cbb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f382b4; end: 100f382f7;  */

void FUN_100f382b4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100f382f8; end: 100f38303; -[SCProfessionalProfilePageLauncherEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f382f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cbb8;
  func_0x000107c61428(param_1 + _DAT_112d4cbb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f38304; end: 100f38357;  */

void FUN_100f38304(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f38358; end: 100f387ef;  */

/* WARNING: Possible PIC construction at 0x000100f385d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f38608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f38620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f38634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f38648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3867c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3868c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f3869c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f386ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f386bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f387a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f387b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f387c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f38770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f38780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f38790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f38750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f38760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f38730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f38710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f38700: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f38714) */
/* WARNING: Removing unreachable block (ram,0x000100f38734) */
/* WARNING: Removing unreachable block (ram,0x000100f38764) */
/* WARNING: Removing unreachable block (ram,0x000100f38754) */
/* WARNING: Removing unreachable block (ram,0x000100f38794) */
/* WARNING: Removing unreachable block (ram,0x000100f38784) */
/* WARNING: Removing unreachable block (ram,0x000100f38774) */
/* WARNING: Removing unreachable block (ram,0x000100f387c4) */
/* WARNING: Removing unreachable block (ram,0x000100f387b4) */
/* WARNING: Removing unreachable block (ram,0x000100f387a4) */
/* WARNING: Removing unreachable block (ram,0x000100f386c0) */
/* WARNING: Removing unreachable block (ram,0x000100f386b0) */
/* WARNING: Removing unreachable block (ram,0x000100f386a0) */
/* WARNING: Removing unreachable block (ram,0x000100f38690) */
/* WARNING: Removing unreachable block (ram,0x000100f38680) */
/* WARNING: Removing unreachable block (ram,0x000100f3864c) */
/* WARNING: Removing unreachable block (ram,0x000100f38638) */
/* WARNING: Removing unreachable block (ram,0x000100f38624) */
/* WARNING: Removing unreachable block (ram,0x000100f3860c) */
/* WARNING: Removing unreachable block (ram,0x000100f385d8) */
/* WARNING: Removing unreachable block (ram,0x000100f38704) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f38358(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c41420();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c5c634();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c4d52c();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar4 = unaff_x20;
        func_0x000107c40014();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar2);
          lVar2 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c5b398();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar2);
            lVar2 = lVar3;
          }
          else {
            lVar3 = unaff_x20;
            func_0x000107c4e270();
            func_0x000107c61180();
            if (lVar3 != 0) {
              func_0x000107c3ff88();
              func_0x000107c61180();
              if (unaff_x20 != 0) {
                lVar6 = 0;
                FUN_100f36a80();
                func_0x000107c610f8();
                *(long *)(lVar6 + _DAT_112d4caa8) = lVar2;
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                lVar2 = unaff_x20;
                func_0x00010451338c();
                func_0x0001000285a8(0x112d4bbf0,&UNK_10d9125f0);
                puVar7 = auStack_68;
                func_0x0001000838ec();
                lVar8 = 0;
                FUN_100f372c0();
                lVar9 = lVar8;
                func_0x000107c610f8();
                lVar6 = _DAT_112d4cae0;
                func_0x000107c61614(lVar9 + _DAT_112d4cae0,0);
                *(undefined8 *)(lVar9 + _DAT_112d4cae8) = 0;
                *(undefined8 *)(lVar9 + _DAT_112d4caf0) = 0;
                func_0x000107c61604(lVar9 + lVar6,lVar2);
                *(undefined1 **)(lVar9 + _DAT_112d4caf8) = puVar7;
                *(long *)(lVar9 + _DAT_112d4cb00) = lVar4;
                *(long *)(lVar9 + _DAT_112d4cb08) = lVar5;
                *(long *)(lVar9 + _DAT_112d4cb10) = lVar3;
                *(long *)(lVar9 + _DAT_112d4cb18) = unaff_x20;
                puVar1 = PTR_s_init_1125d9248;
                lStack_78 = lVar9;
                lStack_70 = lVar8;
                func_0x000107c61174();
                func_0x000107c61174(lVar5);
                func_0x000107c61174();
                func_0x000107c61174(unaff_x20);
                func_0x000107c61154(&lStack_78,puVar1);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100f387f0; end: 100f38817; -[SCProfessionalProfilePageLauncherEntryPoint begin] */

void FUN_100f387f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f38358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f38818; end: 100f3885b; -[SCProfessionalProfilePageLauncherEntryPoint end] */

void FUN_100f38818(undefined8 param_1)

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



/* Entry: 100f3885c; end: 100f38c8f;  */

void FUN_100f3885c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == 0x767265536b636564) && (param_3 == -0x13ffffff8c9a9c97)) ||
       (func_0x000107c605b8(0x767265536b636564,0xec00000073656369,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53e98();
    }
    else {
      uVar2 = 0x63536d6574737973;
      if (((param_2 == 0x63536d6574737973) && (param_3 == -0x14ffffffff9a8f91)) ||
         (func_0x000107c605b8(0x63536d6574737973,0xeb0000000065706f,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59b6c();
      }
      else {
        if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10edf60)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0x536f725070616e73;
                if (((param_2 == 0x536f725070616e73) && (param_3 == -0x108c9a9c96898d9b)) ||
                   (func_0x000107c605b8(0x536f725070616e73,0xef73656369767265,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c5943c();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10e5ad0)) ||
                     (func_0x000107c605b8(0xd000000000000014,0x800000010ef1a530,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c571c8();
                  }
                  else {
                    uVar2 = 0;
                    if (((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10e63d0)) &&
                       (func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,param_3,0)
                       , (uVar2 & 1) == 0)) {
                      func_0x000107c602fc(0x15);
                      func_0x000107c6142c(0xe000000000000000);
                      func_0x000107c5fb78(param_2,param_3);
                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                          "ProfessionalProfilePageLauncher/SCProfessionalProfilePageLauncherEntryPoint.swift"
                                          ,0x51,2,0x44,0);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f38c90);
                      (*pcVar1)();
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c53680();
                  }
                }
                goto LAB_100f388e8;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c536e0();
            goto LAB_100f388e8;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c569f0();
      }
    }
  }
LAB_100f388e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f38c90; end: 100f38d3b; -[SCProfessionalProfilePageLauncherEntryPoint setValue:forIvarName:] */

void FUN_100f38c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100f3885c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f38d3c; end: 100f38e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f38d3c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d4cb80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cb88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cb90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cb98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cba0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cba8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cbb0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cbb8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4cbc0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f38e28; end: 100f38e47; -[SCProfessionalProfilePageLauncherEntryPoint init] */

void FUN_100f38e28(void)

{
  FUN_100f38d3c();
  return;
}



/* Entry: 100f38e48; end: 100f38e7b;  */

void FUN_100f38e48(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f38e7c; end: 100f38f23; -[SCProfessionalProfilePageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f38e7c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4cb80);
  func_0x000107c61610(param_1 + _DAT_112d4cb88);
  func_0x000107c61610(param_1 + _DAT_112d4cb90);
  func_0x000107c61610(param_1 + _DAT_112d4cb98);
  func_0x000107c61610(param_1 + _DAT_112d4cba0);
  func_0x000107c61610(param_1 + _DAT_112d4cba8);
  func_0x000107c61610(param_1 + _DAT_112d4cbb0);
  func_0x000107c61610(param_1 + _DAT_112d4cbb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4cbc0));
  return;
}



/* Entry: 100f38f24; end: 100f38f43;  */

void FUN_100f38f24(void)

{
  func_0x000107c61168(&PTR_PTR_1127a2e00);
  return;
}



/* Entry: 100f38f44; end: 100f391c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100f38f44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d4cbf0) = param_1;
  func_0x000107c61174();
  lVar4 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar5 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010ef1b4a0);
    lVar6 = lVar4;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar5);
    func_0x00010451338c();
    uVar10 = 0;
    if ((int)lVar6 != 0) {
      func_0x000107c61174(param_6);
      uVar10 = param_6;
    }
    lVar7 = 0;
    FUN_100f3ab3c();
    lVar6 = lVar7;
    func_0x000107c610f8();
    *(undefined8 *)(lVar6 + _DAT_112d4cc28) = 0;
    lVar4 = _DAT_112d4cc30;
    func_0x000107c61614(lVar6 + _DAT_112d4cc30,0);
    puVar1 = (undefined8 *)(lVar6 + _DAT_112d4cc38);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar6 + _DAT_112d4cc40) = 0;
    func_0x000107c61604(lVar6 + lVar4,uVar5);
    *(long *)(lVar6 + _DAT_112d4cc48) = param_3;
    *(undefined8 *)(lVar6 + _DAT_112d4cc50) = param_4;
    *(undefined8 *)(lVar6 + _DAT_112d4cc58) = param_8;
    *(undefined8 *)(lVar6 + _DAT_112d4cc60) = uVar10;
    *(undefined8 *)(lVar6 + _DAT_112d4cc68) = param_7;
    *(undefined8 *)(lVar6 + _DAT_112d4cc70) = param_5;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar6;
    lStack_68 = lVar7;
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    plVar8 = &lStack_70;
    func_0x000107c61154(plVar8,puVar2);
    func_0x000107c61170(uVar5);
    *(long **)(unaff_x20 + _DAT_112d4cbf8) = plVar8;
    puVar9 = auStack_80;
    func_0x000107c61154(puVar9,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    return puVar9;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100f391c8);
  (*pcVar3)();
}



/* Entry: 100f391c8; end: 100f39227; -[_TtC29PromotionInsightsPageLauncher39PromotionInsightsPageLauncherEntryPoint init] */

void FUN_100f391c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PromotionInsightsPageLauncher.PromotionInsightsPageLauncherEntryPoint",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f391f4);
  (*pcVar1)();
}



/* Entry: 100f39228; end: 100f392a3; -[_TtC29PromotionInsightsPageLauncher39PromotionInsightsPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f39244: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f39248) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f39228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4cbf0));
  return;
}



/* Entry: 100f392a4; end: 100f392ab;  */

undefined8 FUN_100f392a4(void)

{
  return 0;
}



/* Entry: 100f392ac; end: 100f392c7; -[_TtC29PromotionInsightsPageLauncher39PromotionInsightsPageLauncherEntryPoint composerNativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f392ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0x112d4bc30;
  lVar1 = param_1;
  FUN_100f1b11c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d4cbf8);
  func_0x000107c61174();
  func_0x0001000285a8(0x112d4bc30,&DAT_10d912660);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100f392c8; end: 100f392cb; -[_TtC29PromotionInsightsPageLauncher39PromotionInsightsPageLauncherEntryPoint setComposerNativePayloadHandlers:] */

void FUN_100f392c8(void)

{
  return;
}



/* Entry: 100f392cc; end: 100f392e7; -[_TtC29PromotionInsightsPageLauncher39PromotionInsightsPageLauncherEntryPoint nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f392cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0x112d4bc28;
  lVar1 = param_1;
  (*(code *)0x100f1b134)();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d4cbf8);
  func_0x000107c61174();
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100f392e8; end: 100f3937f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f392e8(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  (*param_3)();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d4cbf8);
  func_0x000107c61174();
  func_0x0001000285a8(param_4,param_5);
  lVar2 = lVar1;
  func_0x000107c5fc48(lVar1,param_4);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100f39380; end: 100f39383; -[_TtC29PromotionInsightsPageLauncher39PromotionInsightsPageLauncherEntryPoint setNativePayloadHandlers:] */

void FUN_100f39380(void)

{
  return;
}



/* Entry: 100f39384; end: 100f393a3;  */

void FUN_100f39384(void)

{
  func_0x000107c61168(&PTR_PTR_1127a2ef8);
  return;
}



/* Entry: 100f393a4; end: 100f394bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100f393a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d4cc28) = 0;
  lVar2 = _DAT_112d4cc30;
  func_0x000107c61614(unaff_x20 + _DAT_112d4cc30,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4cc38);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4cc40) = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112d4cc48) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d4cc50) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d4cc58) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d4cc60) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d4cc68) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d4cc70) = param_4;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 100f394c0; end: 100f395d3;  */

long FUN_100f394c0(char param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_130 [80];
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
  uVar5 = 0xd000000000000017;
  lVar1 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  if (param_1 == '\0') {
    puVar4 = auStack_130;
    pcVar6 = "Missing required dependencies.";
  }
  else {
    uVar5 = 0xd00000000000001e;
    puVar4 = auStack_e0;
    pcVar6 = "JSRuntime unavailable.";
    if (param_1 != '\x01') {
      uVar5 = 0xd000000000000018;
      puVar4 = auStack_90;
      pcVar6 = "plinkPageLauncherHandler";
    }
  }
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar1 + 0x28) = puVar4;
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(ulong *)(lVar1 + 0x38) = (ulong)pcVar6 | 0x8000000000000000;
  lVar3 = lVar1;
  func_0x000100214a84(lVar1);
  func_0x000107c61588(lVar1);
  FUN_100f3b940((undefined8 *)(lVar1 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  return lVar3;
}



/* Entry: 100f395d4; end: 100f395e7;  */

bool FUN_100f395d4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100f395e8; end: 100f39693;  */

void FUN_100f395e8(void)

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



/* Entry: 100f39694; end: 100f396b7;  */

void FUN_100f39694(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 100f396b8; end: 100f396eb;  */

undefined1  [16] FUN_100f396b8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = PTR_DAT_112d4ccd0;
  auVar1._0_8_ = uRam0000000112d4ccc8;
  func_0x000107c61434(PTR_DAT_112d4ccd0);
  return auVar1;
}



/* Entry: 100f396ec; end: 100f396fb;  */

undefined1 FUN_100f396ec(void)

{
  undefined1 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 100f396fc; end: 100f39723;  */

void FUN_100f396fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000100f3ade8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_110351348)(param_1,uVar1);
  return;
}



/* Entry: 100f39724; end: 100f3976b;  */

void FUN_100f39724(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000100f3ade8();
  uVar2 = uVar1;
  func_0x000100f3ae28();
  uVar3 = uVar2;
  FUN_100e2203c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzSYRzs17FixedWidthInteger8RawValueSYRpzrlE5_codeSivg_110351338
  )(param_1,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 100f3976c; end: 100f39773;  */

void FUN_100f3976c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 100f39774; end: 100f397d3; -[_TtC29PromotionInsightsPageLauncher36PromotionInsightsPageLauncherHandler init] */

void FUN_100f39774(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PromotionInsightsPageLauncher.PromotionInsightsPageLauncherHandler",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f397a0);
  (*pcVar1)();
}



/* Entry: 100f397d4; end: 100f3988f; -[_TtC29PromotionInsightsPageLauncher36PromotionInsightsPageLauncherHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f397d4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4cc28));
  func_0x000107c61610(param_1 + _DAT_112d4cc30);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4cc48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4cc50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4cc58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4cc70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4cc60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4cc68));
  FUN_100c9bc38(*(undefined8 *)(param_1 + _DAT_112d4cc38),
                ((undefined8 *)(param_1 + _DAT_112d4cc38))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d4cc40));
  return;
}



/* Entry: 100f39890; end: 100f39893; -[_TtC29PromotionInsightsPageLauncher36PromotionInsightsPageLauncherHandler setPayloadClass:] */

void FUN_100f39890(void)

{
  return;
}



/* Entry: 100f39894; end: 100f39897; -[_TtC29PromotionInsightsPageLauncher36PromotionInsightsPageLauncherHandler setComposerPayloadClass:] */

void FUN_100f39894(void)

{
  return;
}



/* Entry: 100f39898; end: 100f3989f; -[_TtC29PromotionInsightsPageLauncher36PromotionInsightsPageLauncherHandler payloadType] */

undefined8 FUN_100f39898(void)

{
  return 5;
}



/* Entry: 100f398a0; end: 100f39a1f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f398a0(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  ulong auStack_68 [5];
  
  func_0x000100f3b980(param_1,auStack_68 + 1,0x112d387f8,&UNK_10d902650);
  if (auStack_68[4] == 0) {
    puVar4 = auStack_68 + 1;
    func_0x000100f3b940(puVar4,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar1 = 0;
    func_0x000100f3bc5c(0,0x112d4cc78,&PTR_PTR_1126c97f8);
    puVar4 = auStack_68;
    func_0x000107c6147c(puVar4,auStack_68 + 1,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar4 & 1) != 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d4cc28);
      *(ulong *)(unaff_x20 + _DAT_112d4cc28) = auStack_68[0];
      uVar2 = auStack_68[0];
      func_0x000107c61174();
      func_0x000107c61170(uVar1);
      if ((*(long *)(unaff_x20 + _DAT_112d4cc60) == 0) ||
         (uVar3 = uVar2, FUN_100f39a60(uVar2,param_2,param_3), (uVar3 & 1) == 0)) {
        func_0x000100f3a410(uVar2,param_2,param_3);
      }
      func_0x000107c61170(uVar2);
      return;
    }
  }
  if (param_2 != (code *)0x0) {
    FUN_100f39a20();
    puVar5 = &UNK_11036b338;
    func_0x000107c613f8(&UNK_11036b338,puVar4,0,0);
    *(undefined1 *)puVar4 = 0;
    puVar6 = puVar5;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar5);
    auStack_68[2] = 0;
    auStack_68[1] = 0;
    auStack_68[4] = 0;
    auStack_68[3] = 0;
    (*param_2)(puVar6,auStack_68 + 1);
    func_0x000107c61170(puVar6);
    func_0x000100f3b940(auStack_68 + 1,0x112d387f8,&UNK_10d902650);
  }
  return;
}



/* Entry: 100f39a20; end: 100f39a5f;  */

void FUN_100f39a20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4cc80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d913700;
  func_0x000107c61520(&UNK_10d913700,&UNK_11036b338);
  puRam0000000112d4cc80 = puVar1;
  return;
}



/* Entry: 100f39a60; end: 100f3ab3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f39a60(long param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long unaff_x20;
  long lStack_158;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  uVar29 = *(ulong *)(unaff_x20 + _DAT_112d4cc60);
  if (uVar29 == 0) {
    return;
  }
  uVar3 = unaff_x20 + _DAT_112d4cc30;
  func_0x000107c61618();
  if (uVar3 == 0) {
    return;
  }
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (uVar4 != 0) {
    uVar3 = uVar4;
    func_0x000107c61150(uVar4,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_topmostViewController_11267b0f0);
    if ((uVar3 & 1) == 0) {
LAB_100f3a228:
      func_0x000107c61170(uVar29);
      func_0x000107c615e8(uVar4);
      return;
    }
    uVar3 = uVar4;
    func_0x000107c5cc6c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar4);
    uVar4 = uVar3;
    FUN_100f3b9d0();
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar29;
      func_0x000107c4141c();
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000107c41414();
      func_0x000107c61180();
      func_0x000107c615e8(uVar4);
      uVar4 = uVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x000107c409cc();
        func_0x000107c61180();
        if (uVar5 != 0) {
          puVar6 = *(undefined1 **)(unaff_x20 + _DAT_112d4cc50);
          func_0x000107c5dbd4();
          func_0x000107c61180();
          puVar7 = puVar6;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(puVar6);
          if (puVar7 == (undefined1 *)0x0) {
            func_0x000107c61170(uVar29);
            func_0x000107c61170(uVar3);
            func_0x000107c615e8(uVar4);
            func_0x000107c615e8(uVar5);
            return;
          }
          uVar8 = uVar5;
          func_0x000107c41408();
          func_0x000107c61180();
          puVar9 = PTR_PTR_1126b0320;
          func_0x000107c61168(PTR_PTR_1126b0320);
          func_0x000107c4d044();
          func_0x000107c61180();
          puVar10 = puVar9;
          func_0x000107c5e734();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          uVar11 = uVar8;
          func_0x000107c4d048();
          func_0x000107c61180();
          func_0x000107c615e8(uVar8);
          func_0x000107c61170(puVar10);
          puVar9 = &UNK_11036b380;
          func_0x000107c613fc(&UNK_11036b380,0x18,7);
          *(ulong *)(puVar9 + 0x10) = uVar11;
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4cc38);
          uVar26 = *puVar1;
          uVar8 = puVar1[1];
          *puVar1 = FUN_100f3bb28;
          puVar1[1] = puVar9;
          func_0x000107c615f0(uVar11);
          FUN_100c9bc38(uVar26);
          puVar12 = *(undefined1 **)(unaff_x20 + _DAT_112d4cc58);
          func_0x000107c4d604();
          func_0x000107c61180();
          puVar6 = puVar12;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170();
          if (puVar6 != (undefined1 *)0x0) {
            puVar12 = puVar7;
            func_0x000107c509b4();
            func_0x000107c61180();
            if (puVar12 != (undefined1 *)0x0) {
              lVar13 = param_1;
              func_0x000107c4f38c();
              func_0x000107c61180();
              lVar14 = lVar13;
              func_0x000107c5faec();
              func_0x000107c61170(lVar13);
              uVar27 = uVar8;
              FUN_100f3af30();
              uVar28 = uVar27;
              func_0x000107c6142c(uVar8);
              if (uVar27 >> 0x3c < 0xf) {
                lVar15 = *(long *)(unaff_x20 + _DAT_112d4cc70);
                func_0x000107c3dae4();
                func_0x000107c61180();
                lVar13 = lVar15;
                func_0x000107c5c734();
                func_0x000107c61180();
                func_0x000107c61170(lVar15);
                if (lVar13 != 0) {
                  lVar15 = lVar13;
                  func_0x000107c4c1e0();
                  func_0x000107c61180();
                  func_0x000107c615e8(lVar13);
                  lVar13 = param_1;
                  func_0x000107c4e07c();
                  func_0x000107c61180();
                  uVar8 = uVar28;
                  if (lVar13 == 0) {
                    func_0x000107c5faec();
                    uVar8 = uVar28;
                    func_0x000107c5fadc();
                    func_0x000107c6142c(uVar28);
                  }
                  lVar16 = param_1;
                  func_0x000107c4c99c();
                  func_0x000107c61180();
                  uVar28 = uVar8;
                  if (lVar16 == 0) {
                    func_0x000107c5faec();
                    uVar28 = uVar8;
                    func_0x000107c5fadc();
                    func_0x000107c6142c(uVar8);
                  }
                  func_0x000107c4ca5c();
                  lStack_158 = param_1;
                  func_0x000107c4f38c();
                  func_0x000107c61180();
                  if (lStack_158 == 0) {
                    func_0x000107c5faec();
                    func_0x000107c5fadc();
                    func_0x000107c6142c(uVar28);
                  }
                  func_0x000107c4ab80();
                  func_0x000107c4264c();
                  puVar17 = PTR_PTR_1126a5fc8;
                  func_0x000107c610f8();
                  lVar18 = lVar14;
                  func_0x000107c5ee20(lVar14,uVar27);
                  func_0x000107c47cb0();
                  func_0x000107c61170(lVar13);
                  func_0x000107c61170(lVar16);
                  func_0x000107c61170(lStack_158);
                  func_0x000107c61170(lVar18);
                  lVar13 = param_1;
                  func_0x000107c4a3c0(param_1);
                  func_0x000107c61180();
                  func_0x000107c55820(puVar17);
                  func_0x000107c61170(lVar13);
                  func_0x000107c3d2dc(param_1);
                  func_0x000107c61180();
                  func_0x000107c522e0(puVar17);
                  func_0x000107c61170(param_1);
                  puVar19 = PTR_PTR_1126afe50;
                  func_0x000107c610f8();
                  func_0x000107c4842c();
                  puVar9 = &UNK_11036b3a8;
                  func_0x000107c613fc(&UNK_11036b3a8,0x18,7);
                  *(long *)(puVar9 + 0x10) = unaff_x20;
                  puVar10 = &UNK_11036b3d0;
                  func_0x000107c613fc(&UNK_11036b3d0,0x18,7);
                  *(long *)(puVar10 + 0x10) = unaff_x20;
                  puVar20 = &UNK_11036b3f8;
                  func_0x000107c613fc(&UNK_11036b3f8,0x18,7);
                  *(long *)(puVar20 + 0x10) = unaff_x20;
                  puVar21 = PTR_PTR_1126a5fd0;
                  func_0x000107c610f8();
                  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
                  pcStack_90 = FUN_100f3bb30;
                  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_a8 = 0x42000000;
                  puStack_a0 = &UNK_1000f6b44;
                  puStack_98 = &UNK_11036b410;
                  ppuVar22 = &puStack_b0;
                  puStack_88 = puVar9;
                  func_0x000107c60bc4();
                  uStack_c0 = 0x100f3bb68;
                  puStack_e0 = puVar2;
                  uStack_d8 = 0x42000000;
                  puStack_d0 = &UNK_1000f6b44;
                  puStack_c8 = &UNK_11036b438;
                  ppuVar23 = &puStack_e0;
                  puStack_b8 = puVar10;
                  func_0x000107c60bc4();
                  pcStack_f0 = FUN_100f3bba0;
                  puStack_110 = puVar2;
                  uStack_108 = 0x42000000;
                  puStack_100 = &UNK_1000f6b44;
                  puStack_f8 = &UNK_11036b460;
                  ppuVar24 = &puStack_110;
                  puStack_e8 = puVar20;
                  func_0x000107c60bc4(ppuVar24);
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c615f0(puVar6);
                  func_0x000107c47aac();
                  func_0x000107c615e8(puVar6);
                  func_0x000107c61170(puVar19);
                  func_0x000107c60bd0(ppuVar24);
                  func_0x000107c60bd0(ppuVar23);
                  func_0x000107c60bd0(ppuVar22);
                  func_0x000107c61574(puStack_e8);
                  func_0x000107c61574(puStack_b8);
                  func_0x000107c61574(puStack_88);
                  puVar9 = PTR_PTR_1126a5fd8;
                  func_0x000107c610f8(PTR_PTR_1126a5fd8);
                  func_0x000107c49520();
                  puVar10 = PTR_PTR_1126afe50;
                  func_0x000107c610f8(PTR_PTR_1126afe50);
                  func_0x000107c4842c();
                  uVar25 = 0;
                  func_0x000100f3beac(0);
                  uVar26 = uVar25;
                  func_0x000107c610f8();
                  func_0x000107c49460();
                  func_0x000107c614e8(uVar25);
                  func_0x000107c537e0(puVar10);
                  func_0x000107c561c0(puVar10);
                  func_0x000107c61170(puVar17);
                  func_0x000107c61170(puVar21);
                  func_0x000107c61170(puVar9);
                  func_0x000107c61170(puVar10);
                  puVar9 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
                  func_0x000107c610f8(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
                  func_0x000107c483f8();
                  func_0x000107c5677c();
                  func_0x000107c4f014(uVar11);
                  if (param_2 != (code *)0x0) {
                    uStack_a8 = 0;
                    puStack_b0 = (undefined *)0x0;
                    puStack_98 = (undefined *)0x0;
                    puStack_a0 = (undefined *)0x0;
                    (*param_2)(0,&puStack_b0);
                    func_0x000107c615e8(puVar12);
                    func_0x000107c61170(uVar3);
                    func_0x000107c61170(uVar29);
                    func_0x0001000b44c0(lVar14,uVar27);
                    func_0x000107c615e8(uVar11);
                    func_0x000107c615e8(puVar6);
                    func_0x000107c615e8(lVar15);
                    func_0x000107c61170(uVar26);
                    func_0x000107c61170(puVar9);
                    func_0x000107c615e8(uVar4);
                    func_0x000107c615e8(uVar5);
                    func_0x000107c615e8(puVar7);
                    FUN_100f3b940(&puStack_b0,0x112d387f8,&UNK_10d902650);
                    return;
                  }
                  func_0x000107c615e8(puVar12);
                  func_0x000107c615e8(puVar6);
                  func_0x000107c61170(uVar3);
                  func_0x000107c61170(uVar29);
                  func_0x0001000b44c0(lVar14,uVar27);
                  func_0x000107c615e8(uVar4);
                  func_0x000107c615e8(uVar5);
                  func_0x000107c615e8(puVar7);
                  func_0x000107c615e8(uVar11);
                  func_0x000107c61170(puVar9);
                  func_0x000107c615e8(lVar15);
                  func_0x000107c61170(uVar26);
                  return;
                }
                func_0x0001000b44c0(lVar14,uVar27);
              }
              func_0x000107c615e8(puVar6);
              puVar6 = puVar12;
            }
            func_0x000107c615e8();
            puVar12 = puVar6;
          }
          if (param_2 != (code *)0x0) {
            FUN_100f39a20();
            puVar9 = &UNK_11036b338;
            func_0x000107c613f8(&UNK_11036b338,puVar12,0,0);
            *puVar12 = 1;
            puVar10 = puVar9;
            func_0x000107c5ed2c();
            func_0x000107c614ac(puVar9);
            uStack_a8 = 0;
            puStack_b0 = (undefined *)0x0;
            puStack_98 = (undefined *)0x0;
            puStack_a0 = (undefined *)0x0;
            (*param_2)(puVar10,&puStack_b0);
            func_0x000107c615e8(uVar11);
            func_0x000107c615e8(uVar4);
            func_0x000107c615e8(uVar5);
            func_0x000107c615e8(puVar7);
            func_0x000107c61170(puVar10);
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar29);
            FUN_100f3b940(&puStack_b0,0x112d387f8,&UNK_10d902650);
            return;
          }
          func_0x000107c615e8(uVar4);
          func_0x000107c615e8(uVar5);
          func_0x000107c615e8(puVar7);
          func_0x000107c615e8(uVar11);
          func_0x000107c61170(uVar3);
          goto LAB_100f3a378;
        }
        func_0x000107c61170(uVar29);
        uVar29 = uVar3;
        goto LAB_100f3a228;
      }
    }
    func_0x000107c61170(uVar29);
    uVar29 = uVar3;
  }
LAB_100f3a378:
  func_0x000107c61170(uVar29);
  return;
}



/* Entry: 100f3ab3c; end: 100f3ab5b;  */

void FUN_100f3ab3c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a2fc0);
  return;
}



/* Entry: 100f3ab5c; end: 100f3ac3b; -[_TtC29PromotionInsightsPageLauncher36PromotionInsightsPageLauncherHandler launchWithPayload:completion:] */

void FUN_100f3ab5c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_11036b358;
    func_0x000107c613fc(&UNK_11036b358,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_100f3b9c8;
  }
  FUN_100f398a0(&uStack_50,pcVar1,puVar2);
  FUN_100c9bc38(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  FUN_100f3b940(&uStack_50,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 100f3ac3c; end: 100f3ada7;  */

int FUN_100f3ac3c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100f3acb8;
        goto LAB_100f3ac9c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100f3ac9c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_100f3acb8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100f3ada8; end: 100f3ae67;  */

void FUN_100f3ada8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4ccb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9136d8;
  func_0x000107c61520(&UNK_10d9136d8,&UNK_11036b338);
  puRam0000000112d4ccb0 = puVar1;
  return;
}



/* Entry: 100f3ae68; end: 100f3af2f;  */

void FUN_100f3ae68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_11036b600;
  func_0x000107c613fc(&UNK_11036b600,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  pcStack_40 = FUN_100f3bc3c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100288f10;
  puStack_48 = &UNK_11036b618;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c420a8(param_3);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100f3af30; end: 100f3b27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100f3af30(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112d4cc68);
  func_0x000107c4f3e4();
  func_0x000107c61180();
  uVar7 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar7 != 0) {
    uVar2 = uVar7;
    func_0x000107c4f378();
    func_0x000107c61180();
    func_0x000107c615e8(uVar7);
    uVar7 = 0x112d4bd28;
    func_0x0001000285a8(0x112d4bd28,&UNK_10d9127e0);
    uVar3 = uVar2;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar2);
    if (uVar3 >> 0x3e == 0) {
      uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar2 = uVar3 & 0xffffffffffffff8;
      if ((uVar3 & 0x8000000000000000) != 0) {
        uVar2 = uVar3;
      }
      func_0x000107c60480();
    }
    if (uVar2 != 0) {
      uVar10 = 0;
      do {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3b164);
            (*pcVar1)();
          }
          uVar9 = *(ulong *)(uVar3 + uVar10 * 8 + 0x20);
          func_0x000107c615f0(uVar9);
          uVar6 = uVar7;
        }
        else {
          uVar9 = uVar10;
          uVar6 = uVar3;
          FUN_100f1cdf4();
        }
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3b0e8);
          (*pcVar1)();
        }
        uVar8 = uVar10 + 1;
        uVar7 = uVar9;
        func_0x000107c3ee4c();
        func_0x000107c61180();
        uVar4 = uVar7;
        func_0x000107c44fd8();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        uVar7 = uVar6;
        if (uVar4 != 0) {
          uVar5 = uVar4;
          func_0x000107c5faec();
          uVar7 = uVar6;
          func_0x000107c61170(uVar4);
          if ((uVar5 == param_1) && (uVar6 == param_2)) {
            func_0x000107c6142c(uVar3);
            uVar3 = uVar6;
          }
          else {
            uVar7 = uVar6;
            func_0x000107c605b8(uVar5,uVar6,param_1,param_2,0);
            func_0x000107c6142c(uVar6);
            if ((uVar5 & 1) == 0) goto LAB_100f3b028;
          }
          func_0x000107c6142c(uVar3);
          uVar2 = uVar9;
          func_0x000107c3ee50();
          func_0x000107c61180();
          uVar3 = uVar2;
          func_0x000107c41214();
          func_0x000107c61180();
          func_0x000107c61170(uVar2);
          if (uVar3 != 0) {
            uVar2 = uVar3;
            func_0x000107c5ee30(uVar3);
            func_0x000107c61170(uVar3);
            func_0x000107c615e8(uVar9);
            goto LAB_100f3b248;
          }
          func_0x000107c615e8(uVar9);
          goto LAB_100f3b240;
        }
LAB_100f3b028:
        func_0x000107c615e8(uVar9);
        uVar10 = uVar10 + 1;
      } while (uVar8 != uVar2);
    }
    if (uVar3 >> 0x3e == 0) {
      uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar2 = uVar3 & 0xffffffffffffff8;
      if ((uVar3 & 0x8000000000000000) != 0) {
        uVar2 = uVar3;
      }
      func_0x000107c60480();
    }
    if (uVar2 == 1) {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3b280);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(uVar3 + 0x20);
        func_0x000107c615f0(uVar2);
      }
      else {
        uVar2 = 0;
        uVar7 = uVar3;
        FUN_100f1cdf4(0,uVar3);
      }
      func_0x000107c6142c(uVar3);
      uVar3 = uVar2;
      func_0x000107c3ee50();
      func_0x000107c61180();
      func_0x000107c615e8(uVar2);
      uVar10 = uVar3;
      func_0x000107c41214();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      if (uVar10 != 0) {
        uVar2 = uVar10;
        func_0x000107c5ee30(uVar10);
        func_0x000107c61170(uVar10);
        goto LAB_100f3b248;
      }
    }
    else {
      func_0x000107c6142c(uVar3);
    }
  }
LAB_100f3b240:
  uVar2 = 0;
  uVar7 = 0xf000000000000000;
LAB_100f3b248:
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = uVar2;
  return auVar11;
}



/* Entry: 100f3b280; end: 100f3b3bb;  */

void FUN_100f3b280(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar5 = &puStack_80;
  puVar4 = &UNK_11036b498;
  puVar2 = puVar4;
  func_0x000107c613fc(&UNK_11036b498,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c6157c(puVar2);
  pcVar3 = "dismissHelper(completion:)";
  func_0x0001000c10c0("dismissHelper(completion:)");
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_11036b498,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_1);
  func_0x000107c613fc(param_2,0x28,7);
  *(undefined **)(param_2 + 0x10) = puVar4;
  *(undefined8 *)(param_2 + 0x18) = param_3;
  *(undefined **)(param_2 + 0x20) = puVar2;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  uStack_68 = param_5;
  uStack_60 = param_4;
  lStack_58 = param_2;
  func_0x000107c60bc4(&puStack_80);
  lVar1 = lStack_58;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(pcVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61578(puVar2,2);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 100f3b3bc; end: 100f3b4a7;  */

void FUN_100f3b3bc(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  pcVar1 = "dismissHelper(completion:)";
  func_0x0001000c10c0("dismissHelper(completion:)");
  func_0x000107c61180();
  puVar2 = &UNK_11036b498;
  func_0x000107c613fc(&UNK_11036b498,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_11036b4c0;
  func_0x000107c613fc(&UNK_11036b4c0,0x28,7);
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined **)(puVar3 + 0x10) = puVar2;
  uStack_40 = 0x100f3bbc4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11036b4d8;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 100f3b4a8; end: 100f3b62b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3b4a8(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112d4cc38);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 == (code *)0x0) {
      lVar5 = *(long *)(param_1 + _DAT_112d4cc40);
      if (lVar5 == 0) {
        if (param_2 != (code *)0x0) {
          (*param_2)();
        }
        func_0x000107c61170();
      }
      else {
        *(undefined8 *)(param_1 + _DAT_112d4cc40) = 0;
        ppuVar3 = (undefined **)0x0;
        if (param_2 != (code *)0x0) {
          puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_80 = 0x42000000;
          puStack_78 = &UNK_1000b0c7c;
          puStack_70 = &UNK_11036b500;
          ppuVar3 = &puStack_88;
          pcStack_68 = param_2;
          uStack_60 = param_3;
          func_0x000107c60bc4(ppuVar3);
          uVar6 = uStack_60;
          func_0x000107c6157c(param_3);
          func_0x000107c61574(uVar6);
        }
        func_0x000107c41864(lVar5);
        func_0x000107c61170(param_1);
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c615e8(lVar5);
      }
    }
    else {
      uVar6 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar2 = &UNK_11036b538;
      func_0x000107c613fc(&UNK_11036b538,0x20,7);
      *(code **)(puVar2 + 0x10) = param_2;
      *(undefined8 *)(puVar2 + 0x18) = param_3;
      func_0x000100b64c10(param_2,param_3);
      (*pcVar4)(FUN_100f3bbd0,puVar2);
      func_0x000107c61574(puVar2);
      func_0x000107c61170(param_1);
      FUN_100c9bc38(pcVar4,uVar6);
    }
  }
  return;
}



/* Entry: 100f3b62c; end: 100f3b77b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3b62c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112d4cc28);
    if (lVar2 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c61174();
      func_0x000107c61170(param_1);
      lVar1 = lVar2;
      func_0x000107c4dccc();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x10))(lVar1);
        func_0x000107c60bd0(lVar1);
      }
    }
  }
  return;
}



/* Entry: 100f3b77c; end: 100f3b93f;  */

ulong FUN_100f3b77c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f3b860);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f3b864);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c61168(PTR__OBJC_CLASS___UIViewController_1126af898);
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
    puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c61168(PTR__OBJC_CLASS___UIViewController_1126af898);
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
  func_0x000100f3bc5c(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f3b940);
  (*pcVar2)();
}



/* Entry: 100f3b940; end: 100f3b9c7;  */

undefined8 FUN_100f3b940(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100f3b9c8; end: 100f3b9cf;  */

void FUN_100f3b9c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 100f3b9d0; end: 100f3bb27;  */

ulong FUN_100f3b9d0(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c61168(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  uVar5 = param_1;
  func_0x000107c6148c(param_1,puVar2);
  func_0x000107c61174();
  uVar6 = param_1;
  if (uVar5 != 0) {
    func_0x000107c5de94();
    func_0x000107c61180();
    uVar3 = 0;
    func_0x000100f3bc5c(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar4 = uVar5;
    func_0x000107c5fc54(uVar5,uVar3);
    func_0x000107c61170(uVar5);
    if (uVar4 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar5 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar5 == 0) {
      func_0x000107c6142c(uVar4);
      uVar6 = 0;
      goto LAB_100f3baf8;
    }
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f3bb28);
        (*pcVar1)();
      }
      uVar6 = *(ulong *)(uVar4 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar6 = 0;
      FUN_100f3b77c(0,uVar4);
    }
    func_0x000107c61170(param_1);
    func_0x000107c6142c(uVar4);
  }
  puVar2 = PTR_PTR_1126a5fe0;
  func_0x000107c61168(PTR_PTR_1126a5fe0);
  uVar5 = uVar6;
  func_0x000107c6148c(uVar6,puVar2);
  param_1 = uVar6;
  if (uVar5 == 0) {
    func_0x000107c401d0(uVar6);
  }
  else {
    uVar6 = 1;
  }
LAB_100f3baf8:
  func_0x000107c61170(param_1);
  return uVar6;
}



/* Entry: 100f3bb28; end: 100f3bb2f;  */

void FUN_100f3bb28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_11036b600;
  func_0x000107c613fc(&UNK_11036b600,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  pcStack_40 = FUN_100f3bc3c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100288f10;
  puStack_48 = &UNK_11036b618;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c420a8(uVar3);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100f3bb30; end: 100f3bb9f;  */

void FUN_100f3bb30(void)

{
  long unaff_x20;
  
  FUN_100f3b280(*(undefined8 *)(unaff_x20 + 0x10),&UNK_11036b5b0,0x100f3bc00,0x100f3bd04,
                &UNK_11036b5c8);
  return;
}



/* Entry: 100f3bba0; end: 100f3bbcf;  */

void FUN_100f3bba0(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar4 = &puStack_60;
  pcVar1 = "dismissHelper(completion:)";
  func_0x0001000c10c0("dismissHelper(completion:)");
  func_0x000107c61180();
  puVar2 = &UNK_11036b498;
  func_0x000107c613fc(&UNK_11036b498,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar5);
  puVar3 = &UNK_11036b4c0;
  func_0x000107c613fc(&UNK_11036b4c0,0x28,7);
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined **)(puVar3 + 0x10) = puVar2;
  uStack_40 = 0x100f3bbc4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11036b4d8;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}


