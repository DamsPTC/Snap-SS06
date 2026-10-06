/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e0209c; end: 102e021f7;  */

void FUN_102e0209c(void)

{
  long unaff_x20;
  
  func_0x0001007d6c6c(3,0xd00000000000002b,0x800000010f10ecc0,*(undefined8 *)(unaff_x20 + 0x10),
                      &PTR_DAT_1105d60b8);
  return;
}



/* Entry: 102e021f8; end: 102e021ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e021f8(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  uVar7 = *puVar1;
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar6 = puVar1[2];
    puVar4 = &UNK_1105d5ff0;
    func_0x000107c613fc(&UNK_1105d5ff0,0x28,7);
    *(undefined8 **)(puVar4 + 0x10) = puVar1;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = uVar7;
    uStack_68 = 0x102dfff5c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105d6008;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_60;
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(uVar6);
    func_0x000107c60bd0(ppuVar5);
  }
  else {
    uVar7 = *(undefined8 *)(lVar2 + _DAT_112f1c0c0);
    puVar4 = &UNK_1105d5e88;
    func_0x000107c613fc(&UNK_1105d5e88,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar2);
    puVar3 = &UNK_1105d6040;
    func_0x000107c613fc(&UNK_1105d6040,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar4;
    *(undefined8 **)(puVar3 + 0x18) = puVar1;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    uStack_68 = 0x102dfff60;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105d6058;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar3;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_60;
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar4);
    func_0x000107c4e590(uVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102e02200; end: 102e022cb;  */

/* WARNING: Possible PIC construction at 0x000102e022a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e022a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e02200(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112f1c220) = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f1c228);
  *(undefined8 *)(unaff_x20 + _DAT_112f1c228) = 0;
  func_0x000107c61170(uVar3);
  *(undefined1 *)(*(long *)(unaff_x20 + _DAT_112f1c218) + _DAT_112f1c0c8) = 0;
  FUN_102dff394();
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f1c208))[1];
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f1c208));
  (**(code **)(lVar2 + 0x10))();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1c200);
  pcVar4 = (code *)*puVar1;
  if (pcVar4 == (code *)0x0) {
    pcVar4 = (code *)0x0;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  else {
    uVar3 = puVar1[1];
    func_0x000107c6157c(uVar3);
    (*pcVar4)(0);
  }
  if (pcVar4 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 102e022cc; end: 102e0230f;  */

long FUN_102e022cc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 102e02310; end: 102e023ff;  */

uint FUN_102e02310(uint *param_1,int param_2)

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



/* Entry: 102e02400; end: 102e0243f;  */

void FUN_102e02400(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1c268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db54a90;
  func_0x000107c61520(&UNK_10db54a90,&UNK_1105d6268);
  puRam0000000112f1c268 = puVar1;
  return;
}



/* Entry: 102e02440; end: 102e026e3;  */

void FUN_102e02440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  return;
}



/* Entry: 102e026e4; end: 102e029f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e026e4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long lStack_70;
  long lStack_68;
  
  func_0x0001000285a8(0x112f1c370,&UNK_10db54ba0);
  uVar3 = *(undefined8 *)(param_2 + _DAT_113071330);
  func_0x0001000bda74();
  uVar4 = *(undefined8 *)(param_2 + _DAT_113071328);
  func_0x0001000bda74(uVar4);
  uVar5 = *(undefined8 *)(param_2 + _DAT_113071320);
  func_0x0001000bda74();
  uVar14 = *(undefined8 *)(param_5 + _DAT_11306fa38);
  uVar6 = 0;
  func_0x000102dfeba8();
  func_0x000107c613fc();
  func_0x000102dfebc8();
  uVar7 = 0;
  func_0x0001033c2760(0);
  func_0x000107c613fc();
  func_0x0001033c1f18();
  ppuVar13 = &PTR_DAT_1105d5ca0;
  uVar8 = uVar6;
  func_0x0001033bf350(uVar6,&PTR_DAT_1105d5ca0,uVar7,&PTR_DAT_11064d080);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  lVar9 = 0;
  func_0x000102e017e4();
  lVar10 = lVar9;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar10 + _DAT_112f1c200);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar10 + _DAT_112f1c220) = 0;
  *(undefined8 *)(lVar10 + _DAT_112f1c228) = 0;
  uVar7 = 0;
  func_0x0001033c0af0();
  func_0x000107c613fc();
  uVar6 = uVar3;
  func_0x0001033bfa48(uVar3,uVar4,uVar5,param_3,param_4);
  *(undefined8 *)(lVar10 + _DAT_112f1c1f0) = uVar14;
  *(undefined8 *)(lVar10 + _DAT_112f1c1f8) = param_7;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112f1c208);
  *puVar1 = uVar8;
  puVar1[1] = ppuVar13;
  lVar11 = 0;
  func_0x000102dfdfa0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar11 + 0x10) = param_6;
  *(long *)(lVar10 + _DAT_112f1c210) = lVar11;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112f1c1e8);
  puVar1[3] = uVar7;
  puVar1[4] = &PTR_DAT_11064cf08;
  *puVar1 = uVar6;
  uVar7 = 0;
  FUN_102dffb84();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(param_7);
  func_0x000107c615f0(uVar8);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(uVar6);
  func_0x000107c453e4();
  *(undefined8 *)(lVar10 + _DAT_112f1c218) = uVar7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar10;
  lStack_68 = lVar9;
  func_0x000107c61174();
  plVar12 = &lStack_70;
  func_0x000107c61154(plVar12,puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(uVar6);
  *param_1 = (long)plVar12;
  param_1[1] = (long)&PTR_DAT_1105d60d8;
  return;
}



/* Entry: 102e029f8; end: 102e02a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e029f8(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar14 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar13 = *(long *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000285a8(0x112f1c370,&UNK_10db54ba0);
  uVar7 = *(undefined8 *)(lVar14 + _DAT_113071330);
  func_0x0001000bda74();
  uVar8 = *(undefined8 *)(lVar14 + _DAT_113071328);
  func_0x0001000bda74(uVar8);
  uVar9 = *(undefined8 *)(lVar14 + _DAT_113071320);
  func_0x0001000bda74();
  uVar18 = *(undefined8 *)(lVar13 + _DAT_11306fa38);
  uVar10 = 0;
  func_0x000102dfeba8();
  func_0x000107c613fc();
  func_0x000102dfebc8();
  uVar11 = 0;
  func_0x0001033c2760(0);
  func_0x000107c613fc();
  func_0x0001033c1f18();
  ppuVar17 = &PTR_DAT_1105d5ca0;
  uVar12 = uVar10;
  func_0x0001033bf350(uVar10,&PTR_DAT_1105d5ca0,uVar11,&PTR_DAT_11064d080);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  lVar13 = 0;
  func_0x000102e017e4();
  lVar14 = lVar13;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar14 + _DAT_112f1c200);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar14 + _DAT_112f1c220) = 0;
  *(undefined8 *)(lVar14 + _DAT_112f1c228) = 0;
  uVar11 = 0;
  func_0x0001033c0af0();
  func_0x000107c613fc();
  uVar10 = uVar7;
  func_0x0001033bfa48(uVar7,uVar8,uVar9,uVar4,uVar2);
  *(undefined8 *)(lVar14 + _DAT_112f1c1f0) = uVar18;
  *(undefined8 *)(lVar14 + _DAT_112f1c1f8) = uVar5;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112f1c208);
  *puVar1 = uVar12;
  puVar1[1] = ppuVar17;
  lVar15 = 0;
  func_0x000102dfdfa0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar15 + 0x10) = uVar3;
  *(long *)(lVar14 + _DAT_112f1c210) = lVar15;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112f1c1e8);
  puVar1[3] = uVar11;
  puVar1[4] = &PTR_DAT_11064cf08;
  *puVar1 = uVar10;
  uVar11 = 0;
  FUN_102dffb84();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c615f0(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar18);
  func_0x000107c6157c(uVar5);
  func_0x000107c615f0(uVar12);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar10);
  func_0x000107c453e4();
  *(undefined8 *)(lVar14 + _DAT_112f1c218) = uVar11;
  puVar6 = PTR_s_init_1125d9248;
  lStack_70 = lVar14;
  lStack_68 = lVar13;
  func_0x000107c61174();
  plVar16 = &lStack_70;
  func_0x000107c61154(plVar16,puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c615e8(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61574(uVar10);
  *param_1 = (long)plVar16;
  param_1[1] = (long)&PTR_DAT_1105d60d8;
  return;
}



/* Entry: 102e02a08; end: 102e02a43;  */

/* WARNING: Possible PIC construction at 0x000102e02a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e02a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e02a34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e02a28) */
/* WARNING: Removing unreachable block (ram,0x000102e02a18) */
/* WARNING: Removing unreachable block (ram,0x000102e02a38) */

void FUN_102e02a08(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e02a44; end: 102e02aaf;  */

void FUN_102e02a44(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e02ab0; end: 102e02b33;  */

void FUN_102e02ab0(undefined8 param_1)

{
  if (lRam0000000112f1c2a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7328f0);
  return;
}



/* Entry: 102e02b34; end: 102e02b57;  */

void FUN_102e02b34(undefined8 *param_1,undefined8 param_2)

{
  func_0x000102e02504();
  *param_1 = param_2;
  return;
}



/* Entry: 102e02b58; end: 102e02c9f;  */

void FUN_102e02b58(long param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar1 = param_1;
  func_0x000107c4a634();
  if ((int)lVar1 == 0) {
    uStack_68 = 0;
  }
  else {
    func_0x0001000d224c(&lStack_98);
    if (lStack_98 == 0) {
      uStack_68 = 0;
    }
    else {
      lVar1 = lStack_98;
      func_0x000107c4a630();
      func_0x000107c615e8(lStack_98);
      uStack_68 = (char)lVar1;
    }
  }
  bStack_80 = param_4 & 1;
  puVar2 = &UNK_1105d6498;
  lStack_98 = param_1;
  uStack_90 = param_2;
  uStack_88 = param_3;
  uStack_78 = param_5;
  uStack_70 = param_6;
  func_0x000107c613fc(&UNK_1105d6498,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_1105d64c0;
  func_0x000107c613fc(&UNK_1105d64c0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_8;
  *(undefined8 *)(puVar3 + 0x20) = param_9;
  func_0x000107c6157c(puVar2);
  func_0x000100d27b54(param_8,param_9);
  FUN_102e02d64(&lStack_98,param_7 & 1,FUN_102e03b78,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 102e02ca0; end: 102e02d63;  */

void FUN_102e02ca0(ulong param_1,long param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  if ((param_1 & 0xff) == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      lVar1 = param_2 + 0x48;
      func_0x000107c61618();
      if (lVar1 == 0) {
        func_0x000107c61574(param_2);
      }
      else {
        lVar2 = *(long *)(param_2 + 0x50);
        func_0x000107c61574(param_2);
        func_0x000107c614f0(lVar1);
        (**(code **)(lVar2 + 8))();
        func_0x000107c615e8(lVar1);
      }
    }
  }
  if (param_3 != (code *)0x0) {
    (*param_3)(param_1);
  }
  return;
}



/* Entry: 102e02d64; end: 102e02f4f;  */

void FUN_102e02d64(undefined8 *param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *unaff_x20;
  code *pcVar8;
  undefined8 uVar9;
  long lStack_68;
  
  uVar9 = *unaff_x20;
  iVar4 = (int)*param_1;
  func_0x000107c49b94();
  if ((iVar4 != 0) && (func_0x0001000d224c(&lStack_68), lStack_68 != 0)) {
    puVar5 = param_1;
    FUN_102e03170();
    if (puVar5 == (undefined8 *)0x0) {
      if (param_3 != (code *)0x0) {
        (*param_3)(2);
      }
    }
    else {
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      puVar6 = &UNK_1105d6448;
      func_0x000107c613fc(&UNK_1105d6448,0x48,7);
      *(long *)(puVar6 + 0x10) = lStack_68;
      *(undefined8 **)(puVar6 + 0x18) = puVar5;
      *(undefined8 *)(puVar6 + 0x20) = uVar1;
      *(undefined8 *)(puVar6 + 0x28) = uVar2;
      *(code **)(puVar6 + 0x30) = param_3;
      *(undefined8 *)(puVar6 + 0x38) = param_4;
      *(undefined8 *)(puVar6 + 0x40) = uVar9;
      if ((param_2 & 1) == 0) {
        func_0x000100d27b54(param_3,param_4);
        func_0x000107c61434(uVar2);
        func_0x000107c61174(puVar5);
        func_0x000107c615f0(lStack_68);
        FUN_102e039cc();
        func_0x000107c61574(puVar6);
      }
      else {
        uVar9 = unaff_x20[6];
        lVar3 = unaff_x20[7];
        func_0x0001000a8868(unaff_x20 + 3,uVar9);
        puVar7 = &UNK_1105d6470;
        func_0x000107c613fc(&UNK_1105d6470,0x30,7);
        *(undefined8 *)(puVar7 + 0x10) = 0x102e03b14;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        *(code **)(puVar7 + 0x20) = param_3;
        *(undefined8 *)(puVar7 + 0x28) = param_4;
        pcVar8 = *(code **)(lVar3 + 8);
        func_0x000100d27b54(param_3,param_4);
        func_0x000100d27b54(param_3,param_4);
        func_0x000107c61434(uVar2);
        func_0x000107c61174(puVar5);
        func_0x000107c615f0(lStack_68);
        func_0x000107c6157c(puVar6);
        (*pcVar8)(FUN_102e03b24,puVar7,uVar9,lVar3);
        func_0x000107c61574(puVar6);
        func_0x000107c61574(puVar7);
      }
      func_0x000107c61170(puVar5);
    }
    func_0x000107c615e8(lStack_68);
    return;
  }
  if (param_3 != (code *)0x0) {
    (*param_3)(2);
  }
  return;
}



/* Entry: 102e02f50; end: 102e0316f;  */

/* WARNING: Possible PIC construction at 0x000102e03030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0307c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0311c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0313c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e03120) */
/* WARNING: Removing unreachable block (ram,0x000102e03080) */
/* WARNING: Removing unreachable block (ram,0x000102e03144) */
/* WARNING: Removing unreachable block (ram,0x000102e030b0) */
/* WARNING: Removing unreachable block (ram,0x000102e03034) */
/* WARNING: Removing unreachable block (ram,0x000102e03140) */

void FUN_102e02f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,long param_8)

{
  undefined8 *puVar1;
  long alStack_b8 [6];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  uStack_58 = 1;
  uStack_88 = param_1;
  uStack_80 = param_2;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = param_6;
  func_0x000100d27b54(param_7,param_8);
  func_0x000107c49b94();
  if ((int)param_1 == 0) {
    if (param_7 == (code *)0x0) {
      return;
    }
    (*param_7)(0);
  }
  else {
    func_0x0001000d224c(alStack_b8);
    if (alStack_b8[0] == 0) {
      if (param_7 == (code *)0x0) {
        return;
      }
      (*param_7)(0);
    }
    else {
      puVar1 = &uStack_88;
      FUN_102e03170();
      if (puVar1 != (undefined8 *)0x0) {
        param_8 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c613fc();
        *(undefined8 *)(param_8 + 0x18) = 2;
        *(undefined8 *)(param_8 + 0x10) = 1;
        *(undefined8 *)(param_8 + 0x20) = param_2;
        *(undefined8 *)(param_8 + 0x28) = param_3;
        func_0x000107c61434(param_3);
        func_0x000107c5fc48(param_8,PTR___sSSN_11034da80);
        goto code_r0x000107c61574;
      }
      if (param_7 == (code *)0x0) {
        func_0x000107c615e8(alStack_b8[0]);
        return;
      }
      (*param_7)(0);
    }
  }
  if (param_7 == (code *)0x0) {
    return;
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_8);
  return;
}



/* Entry: 102e03170; end: 102e0391b;  */

undefined * FUN_102e03170(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uStack_68;
  
  puVar6 = PTR_PTR_1126dd8f8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar28 = *param_1;
  lVar7 = lVar28;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (lVar7 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c55d70(puVar6);
  func_0x000107c61170(lVar7);
  lVar7 = lVar28;
  func_0x000107c4d3e4(lVar28);
  func_0x000107c61180();
  func_0x000107c55de4(puVar6);
  func_0x000107c61170(lVar7);
  lVar7 = lVar28;
  func_0x000107c44fb4(lVar28);
  func_0x000107c61180();
  func_0x000107c55d6c(puVar6);
  func_0x000107c61170(lVar7);
  puVar8 = PTR_PTR_1126dd900;
  func_0x000107c610f8(PTR_PTR_1126dd900);
  func_0x000107c453e4();
  func_0x000107c55fb4(puVar6);
  func_0x000107c61170(puVar8);
  puVar8 = puVar6;
  func_0x000107c4b6d4();
  func_0x000107c61180();
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102e03914);
    (*pcVar5)();
  }
  lVar7 = param_1[4];
  lVar24 = param_1[5];
  func_0x000107c5fadc(lVar7);
  func_0x000107c58fc0(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar7);
  puVar8 = puVar6;
  func_0x000107c4b6d4();
  func_0x000107c61180();
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102e03918);
    (*pcVar5)();
  }
  bVar3 = *(byte *)(param_1 + 6);
  func_0x000107c54d90();
  func_0x000107c61170(puVar8);
  puVar8 = PTR_PTR_1126ba668;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar9 = puVar8;
  func_0x000107c5a934();
  func_0x000107c61180();
  if (puVar9 != (undefined *)0x0) {
    func_0x000107c54d78();
    func_0x000107c61170(puVar9);
    puVar9 = puVar8;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c61170(puVar8);
    }
    else {
      puVar10 = puVar9;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar9);
      uVar11 = 0;
      func_0x000100bc2654(0);
      lVar7 = param_1[1];
      lVar2 = param_1[2];
      func_0x000107c61434(lVar2);
      func_0x000103c1912c(lVar7,lVar2);
      if (lVar7 != 0) {
        bVar4 = *(byte *)(param_1 + 3);
        lVar26 = lVar7;
        func_0x000102d75e5c();
        func_0x000107c613fc();
        *(undefined8 *)(lVar26 + 0x18) = 3;
        *(undefined8 *)(lVar26 + 0x10) = 1;
        *(long *)(lVar26 + 0x20) = lVar7;
        lVar2 = lVar26;
        if ((bVar4 & 1) == 0) {
          lVar2 = 0;
        }
        func_0x000107c61174();
        uVar12 = 0x53454d4147;
        uVar25 = 0xe500000000000000;
        func_0x000107c5fadc(0x53454d4147,0xe500000000000000);
        lVar27 = 0;
        if ((lVar26 != 0) && ((bVar4 & 1) == 0)) {
          lVar27 = lVar26;
          uVar25 = uVar11;
          func_0x000107c5fc48(lVar26,uVar11);
          func_0x000107c6142c(lVar26);
        }
        if (lVar2 == 0) {
          lVar26 = 0;
        }
        else {
          lVar26 = lVar2;
          func_0x000107c5fc48(lVar2,uVar11);
          func_0x000107c6142c(lVar2);
          uVar25 = uVar11;
        }
        puVar9 = PTR_PTR_1126dabd8;
        func_0x000107c610f8();
        func_0x000107c488c8();
        func_0x000107c61170(uVar12);
        func_0x000107c61170(lVar27);
        func_0x000107c61170(lVar26);
        puVar13 = PTR_PTR_1126b1a40;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar14 = puVar13;
        func_0x00010011df08();
        func_0x000107c61180();
        if (puVar14 == (undefined *)0x0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar25);
        }
        puVar15 = puVar13;
        func_0x000107c5e870();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar14);
        puVar13 = PTR_PTR_1126b28f8;
        func_0x000107c610f8();
        func_0x000107c477a4();
        puVar14 = puVar15;
        func_0x000107c3ecc8(puVar15);
        func_0x000107c61180();
        puVar16 = puVar13;
        func_0x000107c5e42c();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar14);
        puVar13 = puVar16;
        func_0x000107c5e788();
        func_0x000107c61180();
        func_0x000107c61170(puVar16);
        puVar14 = PTR_PTR_1126be758;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar16 = PTR_PTR_1126dd910;
        func_0x000107c610f8(PTR_PTR_1126dd910);
        func_0x000107c453e4();
        func_0x000107c5515c();
        func_0x000107c56af8(puVar14);
        puVar17 = PTR_PTR_1126be758;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar18 = PTR_PTR_1126dd918;
        func_0x000107c610f8(PTR_PTR_1126dd918);
        func_0x000107c453e4();
        func_0x000107c4d3e4(lVar28);
        func_0x000107c61180();
        func_0x000107c54d7c(puVar18);
        func_0x000107c61170(lVar28);
        if (((bVar3 & 1) != 0) && (func_0x0001000d224c(&uStack_68), uStack_68 != 0)) {
          func_0x000107c4a638();
          func_0x000107c615e8(uStack_68);
        }
        func_0x000107c54d90(puVar18);
        func_0x000107c55fb4(puVar17);
        func_0x00010006c00c(puVar10,lVar24);
        puVar21 = puVar13;
        func_0x000107c3ecc8(puVar13);
        func_0x000107c61180();
        puVar19 = PTR_PTR_1126be6d0;
        func_0x000107c610f8(PTR_PTR_1126be6d0);
        puVar23 = puVar10;
        func_0x000107c5ee20(puVar10,lVar24);
        func_0x000107c46080(puVar19);
        func_0x000107c61170(puVar21);
        func_0x000107c61170(puVar23);
        lVar28 = lVar24;
        func_0x00010006c090(puVar10);
        puVar21 = puVar14;
        func_0x000107c41214();
        func_0x000107c61180();
        puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar21 != (undefined *)0x0) {
          puVar20 = puVar21;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar21);
          func_0x00010006c00c(puVar20,lVar28);
          puVar21 = (undefined *)0x0;
          func_0x000100f23260(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
          uVar1 = *(ulong *)(puVar21 + 0x10);
          puVar23 = puVar21;
          if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar1) {
            puVar23 = (undefined *)(ulong)(1 < *(ulong *)(puVar21 + 0x18));
            func_0x000100f23260(puVar23,uVar1 + 1,1,puVar21);
          }
          *(ulong *)(puVar23 + 0x10) = uVar1 + 1;
          *(undefined **)(puVar23 + uVar1 * 0x10 + 0x20) = puVar20;
          *(long *)(puVar23 + uVar1 * 0x10 + 0x28) = lVar28;
          func_0x00010006c090(puVar20);
        }
        puVar21 = puVar17;
        func_0x000107c41214();
        func_0x000107c61180();
        if (puVar21 != (undefined *)0x0) {
          puVar20 = puVar21;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar21);
          func_0x00010006c00c(puVar20,lVar28);
          puVar21 = puVar23;
          func_0x000107c61558();
          puVar22 = puVar23;
          if (((ulong)puVar21 & 1) == 0) {
            puVar22 = (undefined *)0x0;
            func_0x000100f23260(0,*(long *)(puVar23 + 0x10) + 1,1,puVar23);
          }
          uVar1 = *(ulong *)(puVar22 + 0x10);
          puVar23 = puVar22;
          if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar1) {
            puVar23 = (undefined *)(ulong)(1 < *(ulong *)(puVar22 + 0x18));
            func_0x000100f23260(puVar23,uVar1 + 1,1,puVar22);
          }
          *(ulong *)(puVar23 + 0x10) = uVar1 + 1;
          *(undefined **)(puVar23 + uVar1 * 0x10 + 0x20) = puVar20;
          *(long *)(puVar23 + uVar1 * 0x10 + 0x28) = lVar28;
          func_0x00010006c090(puVar20,lVar28);
        }
        if (*(long *)(puVar23 + 0x10) != 0) {
          puVar21 = puVar23;
          func_0x000107c5fc48(puVar23,PTR___s10Foundation4DataVN_110350ae0);
          puVar20 = puVar19;
          func_0x000107c5e5ac(puVar19);
          func_0x000107c61180();
          func_0x000107c61170(puVar21);
          func_0x000107c61170(puVar20);
        }
        puVar21 = puVar19;
        func_0x000107c3ecc8(puVar19);
        func_0x000107c61180();
        func_0x000107c61170(puVar18);
        func_0x000107c61170(puVar16);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(puVar6);
        func_0x00010006c090(puVar10,lVar24);
        func_0x000107c6142c(puVar23);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(puVar17);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar15);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar19);
        return puVar21;
      }
      func_0x000107c61170(puVar6);
      func_0x00010006c090(puVar10,lVar24);
      puVar6 = puVar8;
    }
    func_0x000107c61170(puVar6);
    return (undefined *)0x0;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102e0391c);
  (*pcVar5)();
}



/* Entry: 102e0391c; end: 102e03977;  */

void FUN_102e0391c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  FUN_102e03b84(unaff_x20 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e03978; end: 102e039c7;  */

void FUN_102e03978(void)

{
  FUN_102e02b58();
  return;
}



/* Entry: 102e039c8; end: 102e039cb;  */

void FUN_102e039c8(void)

{
  return;
}



/* Entry: 102e039cc; end: 102e03af7;  */

void FUN_102e039cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_80;
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  func_0x000107c61434(param_4);
  lVar2 = lVar1;
  func_0x000107c5fc48(lVar1,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar1);
  pcStack_60 = FUN_102e039c8;
  uStack_58 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100f5c588;
  puStack_68 = &UNK_1105d6410;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(uStack_58);
  func_0x000107c51e10(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(lVar2);
  if (param_5 != (code *)0x0) {
    (*param_5)(0);
  }
  return;
}



/* Entry: 102e03af8; end: 102e03b23;  */

void FUN_102e03af8(long param_1,long param_2)

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



/* Entry: 102e03b24; end: 102e03b77;  */

void FUN_102e03b24(char param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (param_1 == '\0') {
    (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18));
  }
  else {
    pcVar1 = *(code **)(unaff_x20 + 0x20);
    if (param_1 == '\x01') {
      if (pcVar1 == (code *)0x0) {
        return;
      }
      uVar2 = 1;
    }
    else {
      if (pcVar1 == (code *)0x0) {
        return;
      }
      uVar2 = 2;
    }
    (*pcVar1)(uVar2);
  }
  return;
}



/* Entry: 102e03b78; end: 102e03b83;  */

void FUN_102e03b78(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  if ((param_1 & 0xff) == 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61648();
    if (lVar2 != 0) {
      lVar3 = lVar2 + 0x48;
      func_0x000107c61618();
      if (lVar3 == 0) {
        func_0x000107c61574(lVar2);
      }
      else {
        lVar4 = *(long *)(lVar2 + 0x50);
        func_0x000107c61574(lVar2);
        func_0x000107c614f0(lVar3);
        (**(code **)(lVar4 + 8))();
        func_0x000107c615e8(lVar3);
      }
    }
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  return;
}



/* Entry: 102e03b84; end: 102e03ba7;  */

undefined8 FUN_102e03b84(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102e03ba8; end: 102e03baf;  */

void FUN_102e03ba8(long param_1,long param_2)

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



/* Entry: 102e03bb0; end: 102e0407f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e03bb0(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_188;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  long lStack_138;
  undefined1 auStack_130 [80];
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_70;
  
  uVar2 = param_5;
  if (param_5 == 0) {
    uVar7 = param_1;
    uVar10 = param_2;
    func_0x00010011df08();
    func_0x000107c61180();
    param_4 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    uVar2 = uVar10;
    func_0x000107c5fb1c(param_4,uVar10);
    func_0x000107c6142c(uVar10);
  }
  func_0x000107c61434(param_5);
  uVar10 = param_2;
  func_0x000107c49b94();
  if ((int)uVar10 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar7 = *param_3;
    uVar1 = param_3[1];
    puVar6 = PTR_PTR_1126c55c8;
    func_0x000107c610f8(PTR_PTR_1126c55c8);
    func_0x000107c5fadc(param_4,uVar2);
    func_0x000107c5fadc(uVar7,uVar1);
    func_0x000107c48618(puVar6);
    func_0x000107c61170(param_4);
    func_0x000107c61170(uVar7);
  }
  func_0x000104348394(param_3,param_6,puVar6);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(puVar6);
  uVar2 = param_2;
  func_0x000107c5d0f0();
  uVar10 = param_2;
  func_0x000107c5d2d8();
  func_0x000107c61180();
  if (1 < uVar2 - 0x17) {
    uVar2 = param_6;
    if (uVar10 == 0) {
LAB_102e03ddc:
      uVar10 = 0;
      param_6 = 0;
    }
    else {
      uVar12 = uVar10;
      func_0x000107c4f8bc();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      uVar2 = param_6;
      if (uVar12 == 0) goto LAB_102e03ddc;
      uVar10 = uVar12;
      func_0x000107c5faec();
      uVar2 = param_6;
      func_0x000107c61170(uVar12);
    }
    uVar12 = param_2;
    func_0x000107c5d2d8();
    func_0x000107c61180();
    if (uVar12 == 0) {
LAB_102e03e44:
      uVar12 = 0;
      uVar13 = 0;
      uVar5 = uVar2;
    }
    else {
      uVar13 = uVar12;
      func_0x000107c4f8b8();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      if (uVar13 == 0) goto LAB_102e03e44;
      uVar12 = uVar13;
      func_0x000107c5faec();
      uVar5 = uVar2;
      func_0x000107c61170(uVar13);
      uVar13 = uVar2;
    }
    uStack_188 = param_6;
    if (param_6 != 0) {
      uVar2 = uVar10 & 0xffffffffffff;
      if ((param_6 & 0x2000000000000000) != 0) {
        uVar2 = param_6 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) goto LAB_102e03ebc;
    }
    if (uVar13 == 0) {
      func_0x000107c6142c(param_6);
    }
    else {
      uVar2 = uVar12 & 0xffffffffffff;
      if ((uVar13 & 0x2000000000000000) != 0) {
        uVar2 = uVar13 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) goto LAB_102e03ebc;
      func_0x000107c6142c(uVar13);
      func_0x000107c6142c(param_6);
      uVar13 = 0;
    }
    uVar12 = 0;
    uVar10 = 0;
    uStack_188 = 1;
    goto LAB_102e03ebc;
  }
  uVar13 = param_6;
  if (uVar10 == 0) {
LAB_102e03d80:
    uVar10 = 0;
    param_6 = 0;
  }
  else {
    uVar2 = uVar10;
    func_0x000107c4f8bc();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    uVar13 = param_6;
    if (uVar2 == 0) goto LAB_102e03d80;
    uVar10 = uVar2;
    func_0x000107c5faec(uVar2);
    uVar13 = param_6;
    func_0x000107c61170(uVar2);
  }
  uVar2 = param_2;
  func_0x000107c5d2d8();
  func_0x000107c61180();
  uVar5 = uVar13;
  uStack_188 = param_6;
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c4f8b8();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar5 = uVar13;
    if (uVar3 != 0) {
      uVar12 = uVar3;
      func_0x000107c5faec(uVar3);
      uVar5 = uVar13;
      func_0x000107c61170(uVar3);
      goto LAB_102e03ebc;
    }
  }
  uVar12 = 0;
  uVar13 = 0;
LAB_102e03ebc:
  uVar2 = param_2;
  func_0x000107c4b1dc(param_2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  uVar9 = uVar5;
  func_0x000107c61170(uVar2);
  uVar2 = param_2;
  func_0x000107c5d0f0(param_2);
  uVar4 = param_2;
  func_0x000107c4d420();
  func_0x000107c61180();
  if (uVar4 == 0) {
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar8 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
  }
  func_0x00010433a5fc(auStack_130,uVar3,uVar5,uVar10,uStack_188,uVar12,uVar13,uVar2,0,uVar8,uVar9);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11306fa38);
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(auStack_158);
  func_0x000107c61574(uVar7);
  uVar7 = uStack_140;
  func_0x0001000a8868(auStack_158,uStack_140);
  func_0x000107c4b1dc(param_2);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  uStack_d8 = 0;
  uStack_70 = 0;
  puVar6 = &UNK_1105d6508;
  puStack_e0 = param_3;
  func_0x000107c613fc(&UNK_1105d6508,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_7;
  *(undefined8 *)(puVar6 + 0x18) = param_8;
  pcVar11 = *(code **)(lStack_138 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_8);
  (*pcVar11)(param_1,uVar2,uVar7,&puStack_e0,auStack_130,0x102e04168,puVar6,uStack_140,lStack_138);
  func_0x000107c6142c(uVar7);
  func_0x000107c61574(puVar6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_3);
  func_0x000102e04190(auStack_130);
  func_0x0001000834e4(auStack_158);
  return;
}



/* Entry: 102e04080; end: 102e040c3;  */

void FUN_102e04080(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e040c4; end: 102e040e3;  */

void FUN_102e040c4(void)

{
  FUN_102e03bb0();
  return;
}



/* Entry: 102e040e4; end: 102e04167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e040e4(void)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_11306fa38);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(auStack_58);
  func_0x000107c61574(uVar1);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 102e04168; end: 102e041d7;  */

void FUN_102e04168(uint param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1 & 0x101);
  return;
}



/* Entry: 102e041d8; end: 102e0425b;  */

void FUN_102e041d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 102e0425c; end: 102e0441b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_102e0425c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  long unaff_x20;
  
  func_0x0001000285a8(0x112d4e900,&UNK_10d914c40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c407c0();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112e1bff0,&UNK_10da60480);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_1130344b8);
  func_0x000107c61174();
  uVar1 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar4 = &UNK_1105d6538;
  func_0x000107c613fc(&UNK_1105d6538,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  func_0x0001000285a8(0x112f1c4d0,&UNK_10db54c60);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  pcVar5 = FUN_102e04510;
  func_0x0001000bdd8c(FUN_102e04510,puVar4);
  puVar4 = &UNK_1105d6560;
  func_0x000107c613fc(&UNK_1105d6560,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar3;
  func_0x0001000285a8(0x112f1c4d8,&UNK_10db54c68);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  pcVar6 = FUN_102e04574;
  func_0x0001000bdd8c(FUN_102e04574,puVar4);
  uVar3 = 0;
  func_0x00010037a998(0);
  func_0x000107c610f8();
  func_0x0001043485fc(pcVar6,pcVar5,uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar1);
  return pcVar6;
}



/* Entry: 102e0441c; end: 102e0450f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0441c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  func_0x0001000d224c(auStack_78);
  func_0x0001000d224c(&uStack_88);
  lVar1 = 0;
  func_0x000102e03958();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x50) = 0;
  func_0x000107c61614(lVar2 + 0x48,0);
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  FUN_102e04698(auStack_78,lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x40) = param_4;
  *(undefined8 *)(lVar2 + 0x50) = uStack_80;
  func_0x000107c61604(lVar2 + 0x48,uStack_88);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c615e8(uStack_88);
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105d63d0;
  *param_1 = lVar2;
  return;
}



/* Entry: 102e04510; end: 102e0451b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e04510(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000d224c(auStack_78);
  func_0x0001000d224c(&uStack_88);
  lVar2 = 0;
  func_0x000102e03958();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x50) = 0;
  func_0x000107c61614(lVar3 + 0x48,0);
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  FUN_102e04698(auStack_78,lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x40) = uVar4;
  *(undefined8 *)(lVar3 + 0x50) = uStack_80;
  func_0x000107c61604(lVar3 + 0x48,uStack_88);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c615e8(uStack_88);
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1105d63d0;
  *param_1 = lVar3;
  return;
}



/* Entry: 102e0451c; end: 102e04573;  */

void FUN_102e0451c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000102e040a4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105d64e0;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 102e04574; end: 102e0457b;  */

void FUN_102e04574(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000102e040a4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105d64e0;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar3);
  return;
}



/* Entry: 102e0457c; end: 102e0459f;  */

/* WARNING: Possible PIC construction at 0x000102e04588: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e0458c) */

void FUN_102e0457c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e045a0; end: 102e045f3;  */

void FUN_102e045a0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e045f4; end: 102e04673;  */

void FUN_102e045f4(undefined8 param_1)

{
  if (lRam0000000112f1c508 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7329d8);
  return;
}



/* Entry: 102e04674; end: 102e04697;  */

void FUN_102e04674(undefined8 *param_1,undefined8 param_2)

{
  FUN_102e0425c();
  *param_1 = param_2;
  return;
}



/* Entry: 102e04698; end: 102e046af;  */

undefined8 * FUN_102e04698(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102e046b0; end: 102e04a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e046b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined4 uStack_7c;
  undefined *puStack_68;
  
  uStack_98 = param_1;
  uStack_88 = param_2;
  uStack_7c = param_3;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5ffd8();
  lStack_a8 = *(long *)(lVar3 + -8);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  puVar9 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5ffc4();
  puVar2 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = _DAT_112f1c5c0;
  lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar5 = PTR__OBJC_CLASS___AVCaptureSession_1126b70a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112f1c5d8) = 0;
  lVar3 = _DAT_112f1c5e0;
  FUN_102e04a90();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  lStack_b0 = _DAT_112f1c5e8;
  uVar6 = 0;
  FUN_102e08a6c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  uStack_b8 = uVar6;
  func_0x000107c5f808(lVar11);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4ac68;
  FUN_102e08710(0x112d4ac68,puVar2,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar8 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar7 = 0x112d4ac78;
  func_0x000102e08aac(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar10,&puStack_68,uVar8,uVar7,lVar4,uVar6);
  (**(code **)(lStack_a8 + 0x68))
            (puVar9,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_a0);
  uVar6 = 0xd000000000000028;
  func_0x000107c5ffec(0xd000000000000028,0x800000010f10f4d0,lVar11,lVar10,puVar9,0);
  *(undefined8 *)(unaff_x20 + lStack_b0) = uVar6;
  *(undefined1 *)(unaff_x20 + _DAT_112f1c5f0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f1c5f8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f1c600) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f1c608) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f1c610) = 0;
  lVar3 = _DAT_112f1c618;
  uVar8 = 0;
  func_0x00010006a340();
  uVar6 = uVar8;
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112f1c620) = 0;
  lVar3 = _DAT_112f1c628;
  uVar6 = uVar8;
  func_0x000107c613fc(uVar8,0x18,7);
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1c630);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 4) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1c638);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 4) = 1;
  lVar3 = _DAT_112f1c640;
  func_0x000107c613fc(uVar8,0x18,7);
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar8;
  *(undefined8 *)(unaff_x20 + _DAT_112f1c648) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1c650);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1c658);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1c5c8) = uStack_98;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1c5d0);
  *puVar1 = uStack_88;
  *(char *)(puVar1 + 1) = (char)uStack_7c;
  func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e04a48; end: 102e04a8f;  */

void FUN_102e04a48(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f1c6b0;
  func_0x0001000285a8(0x112f1c6b0,&UNK_10db54d48);
  func_0x000107c613fc();
  func_0x000107c5f7ec();
  uRam0000000112f1c6a8 = uVar1;
  return;
}



/* Entry: 102e04a90; end: 102e04ca7;  */

undefined8 FUN_102e04a90(void)

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
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uStack_69;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5ffd8();
  lVar7 = *(long *)(lVar2 + -8);
  lStack_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar8 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  FUN_102e08a6c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  uStack_80 = uVar4;
  func_0x000107c5f808(lVar3);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4ac68;
  FUN_102e08710(0x112d4ac68,puVar1,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar5 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar6 = 0x112d4ac78;
  func_0x000102e08aac(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar9,&puStack_68,uVar5,uVar6,lVar2,uVar4);
  (**(code **)(lVar7 + 0x68))
            (lVar8,*(undefined4 *)
                    PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_78);
  uVar4 = 0xd000000000000028;
  func_0x000107c5ffec(0xd000000000000028,0x800000010f10f500,lVar3,lVar9,lVar8,0);
  if (lRam0000000112f1c6a0 != -1) {
    func_0x000107c61568(0x112f1c6a0,FUN_102e04a48);
  }
  uStack_69 = 0;
  func_0x000107c5ffd0(uRam0000000112f1c6a8,&uStack_69);
  return uVar4;
}



/* Entry: 102e04ca8; end: 102e04cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e04ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112f1c630);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(undefined1 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 102e04cc4; end: 102e04d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e04cc4(byte param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  code *pcVar2;
  
  if ((param_1 & 1) != *(byte *)(unaff_x20 + _DAT_112f1c610)) {
    *(byte *)(unaff_x20 + _DAT_112f1c610) = param_1 & 1;
    if ((param_1 & 1) == 0) {
      FUN_102e04d88();
    }
    else {
      FUN_102e080b4(&UNK_1105d6b78,0x102e08a24,&UNK_1105d6b90);
    }
    pcVar2 = *(code **)(unaff_x20 + _DAT_112f1c658);
    if (pcVar2 != (code *)0x0) {
      uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f1c658))[1];
      func_0x000107c6157c(uVar1);
      (*pcVar2)(param_1 & 1);
      if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar1);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 102e04d6c; end: 102e04d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e04d6c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar5 = &UNK_1105d6b78;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar10 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar3 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_112f1c5e0);
  puVar4 = &UNK_1105d66f0;
  func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  func_0x000107c613fc(&UNK_1105d6b78,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(long *)(puVar5 + 0x18) = lVar1;
  uStack_70 = 0x102e08a24;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1105d6b90;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c6157c(puVar4);
  func_0x000107c5f808(lVar3);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0x112d4af88;
  FUN_102e08710(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar9 = 0x112d4af98;
  func_0x000102e08aac(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar10,&puStack_98,uVar8,uVar9,lVar2,uVar7);
  func_0x000107c5ffe8(0,lVar3,lVar10,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  (**(code **)(lStack_a0 + 8))(lVar10,lVar2);
  (**(code **)(lVar11 + 8))(lVar3,lStack_a8);
  puVar5 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 102e04d88; end: 102e04fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e04d88(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar9 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_112f1c5e0);
  puVar4 = &UNK_1105d66f0;
  func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  uStack_70 = 0x102e08a2c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1105d6bb8;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c6157c(puVar4);
  func_0x000107c5f808(lVar3);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  FUN_102e08710(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = 0x112d4af98;
  func_0x000102e08aac(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar9,&puStack_98,uVar7,uVar8,lVar2,uVar6);
  func_0x000107c5ffe8(0,lVar3,lVar9,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  (**(code **)(lStack_a0 + 8))(lVar9,lVar2);
  (**(code **)(lVar10 + 8))(lVar3,lStack_a8);
  puVar1 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 102e04fa4; end: 102e05163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e04fa4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + _DAT_112f1c600) & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
    func_0x000107c61168();
    func_0x000107c3e490();
    if (puVar1 + -1 < (undefined *)0x2) {
      func_0x000107c602fc(0x46);
      func_0x000107c5fb78(0xd000000000000026,0x800000010f10f130);
      puVar1 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar1);
      func_0x000107c5fb78(0x100000000000001e,0x800000010f10f3f0);
      func_0x0001007d6c6c(2,0,0xe000000000000000,param_2,&PTR_DAT_1105d8228);
      func_0x000107c6142c(0xe000000000000000);
      goto LAB_102e05124;
    }
    if (puVar1 != (undefined *)0x0) {
      if (puVar1 == (undefined *)0x3) {
        FUN_102e05164();
      }
      goto LAB_102e05124;
    }
    pcVar3 = s___skipping_overlay_preview_10f10f410;
    uVar2 = 0x100000000000004c;
  }
  else {
    pcVar3 = s_Camera_permission_not_yet_determ_10f10f430 + 0x30;
    uVar2 = 0x1000000000000030;
  }
  func_0x0001007d6c6c(1,uVar2,(ulong)pcVar3 | 0x8000000000000000,param_2,&PTR_DAT_1105d8228);
LAB_102e05124:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102e05164; end: 102e0544f;  */

/* WARNING: Possible PIC construction at 0x000102e051fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0528c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e052b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e05380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e05410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e05384) */
/* WARNING: Removing unreachable block (ram,0x000102e053c0) */
/* WARNING: Removing unreachable block (ram,0x000102e053ec) */
/* WARNING: Removing unreachable block (ram,0x000102e053f0) */
/* WARNING: Removing unreachable block (ram,0x000102e053f8) */
/* WARNING: Removing unreachable block (ram,0x000102e053fc) */
/* WARNING: Removing unreachable block (ram,0x000102e05290) */
/* WARNING: Removing unreachable block (ram,0x000102e05200) */
/* WARNING: Removing unreachable block (ram,0x000102e0523c) */
/* WARNING: Removing unreachable block (ram,0x000102e05268) */
/* WARNING: Removing unreachable block (ram,0x000102e0526c) */
/* WARNING: Removing unreachable block (ram,0x000102e05274) */
/* WARNING: Removing unreachable block (ram,0x000102e05278) */
/* WARNING: Removing unreachable block (ram,0x000102e05414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e05164(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar3 = _DAT_112f1c5f0;
  uVar1 = (uint)lVar2;
  if ((*(byte *)(unaff_x20 + _DAT_112f1c5f0) & 1) == 0) {
    FUN_102e0568c();
    if ((uVar1 & 0xff) != 4) {
      func_0x000107c602fc(0x2f);
      goto code_r0x000107c6142c;
    }
    *(undefined1 *)(unaff_x20 + lVar3) = 1;
  }
  func_0x000102e05a28();
  if ((uVar1 & 0xff) == 4) {
    if ((*(char *)((undefined8 *)(unaff_x20 + _DAT_112f1c5d0) + 1) != '\x01') &&
       (lVar3 = *(long *)(unaff_x20 + _DAT_112f1c5d8), lVar3 != 0)) {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f1c5d0);
      func_0x000107c61174();
      FUN_102e05c60(uVar5,lVar3);
      func_0x000107c61170(lVar3);
    }
    uVar6 = *(ulong *)(unaff_x20 + _DAT_112f1c5c0);
    uVar4 = uVar6;
    func_0x000107c4a360();
    if ((uVar4 & 1) == 0) {
      func_0x000107c5bba0(uVar6);
    }
    func_0x000107c4a360();
    *(char *)(unaff_x20 + _DAT_112f1c600) = (char)uVar6;
    return;
  }
  func_0x000107c602fc(0x2b);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 102e05450; end: 102e054a3;  */

void FUN_102e05450(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102e054a4();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102e054a4; end: 102e0566b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e054a4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  ppuVar8 = &puStack_80;
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  lVar3 = _DAT_112f1c608;
  lVar2 = _DAT_112f1c600;
  puVar1 = PTR___sytN_11034f1b0;
  if (*(char *)(unaff_x20 + _DAT_112f1c600) == '\x01') {
    if (*(char *)(unaff_x20 + _DAT_112f1c608) == '\x01') {
      func_0x000100087bd4(0x102e08d44,&puStack_80,PTR___sytN_11034f1b0 + 8);
      *(undefined1 *)(unaff_x20 + lVar3) = 0;
      pcVar5 = "fireRecordingStateChanged(_:)";
      func_0x0001000c10c0("fireRecordingStateChanged(_:)");
      func_0x000107c61180();
      puVar6 = &UNK_1105d66f0;
      func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = &UNK_1105d6bf0;
      func_0x000107c613fc(&UNK_1105d6bf0,0x19,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      puVar7[0x18] = 0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c61574(puVar7);
      func_0x000107c4e524(pcVar5);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c615e8(pcVar5);
    }
    func_0x000107c5be70(*(undefined8 *)(unaff_x20 + _DAT_112f1c5c0));
    *(undefined1 *)(unaff_x20 + lVar2) = 0;
    func_0x000100087bd4(FUN_102e08a34,&puStack_80,puVar1 + 8);
  }
  else {
    func_0x0001007d6c6c(1,0x100000000000002b,0x800000010f10f4a0,lVar4,&PTR_DAT_1105d8228);
  }
  return;
}



/* Entry: 102e0566c; end: 102e0568b;  */

void FUN_102e0566c(void)

{
  FUN_102e054a4();
  return;
}



/* Entry: 102e0568c; end: 102e05c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0568c(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long unaff_x20;
  ulong uVar12;
  long unaff_x25;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  puVar4 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
  func_0x000107c61168();
  func_0x000107c41590();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___AVCaptureDeviceInput_1126d4280;
    func_0x000107c610f8();
    lStack_70 = 0;
    puVar6 = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c46530();
    lVar10 = lStack_70;
    if (puVar5 == (undefined *)0x0) {
      lVar9 = lStack_70;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(lVar9);
      func_0x000107c61654();
      func_0x000107c61170(puVar6);
      lStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x24);
      func_0x000107c5fb78(0xd000000000000022,0x800000010f10f350);
      uVar8 = 0x112d393f0;
      lStack_78 = lVar10;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c603d0(&lStack_78,&lStack_70,uVar8,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar8 = uStack_68;
      func_0x0001007d6c6c(3,lStack_70,uStack_68,lVar3,&PTR_DAT_1105d8228);
      func_0x000107c6142c(uVar8);
      func_0x000107c61170(puVar6);
      func_0x000107c614ac(lVar10);
    }
    else {
      func_0x000107c61174();
      func_0x000107c61170(puVar6);
      uVar12 = *(ulong *)(unaff_x20 + _DAT_112f1c5c0);
      func_0x000107c61174(puVar5);
      func_0x000107c3e76c(uVar12);
      uVar7 = uVar12;
      func_0x000107c3f394();
      func_0x000107c61170(puVar5);
      if ((uVar7 & 1) == 0) {
        func_0x000107c3fe5c(uVar12);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
      }
      else {
        func_0x000107c3d710(uVar12);
        puVar1 = (undefined8 *)PTR__AVCaptureSessionPreset1280x720_110347f60;
        unaff_x25 = *(long *)(unaff_x20 + _DAT_112f1c5c8);
        puVar11 = (undefined8 *)PTR__AVCaptureSessionPreset1280x720_110347f60;
        if ((unaff_x25 != 0) &&
           (puVar11 = (undefined8 *)PTR__AVCaptureSessionPreset1920x1080_110347f68, unaff_x25 != 1))
        goto LAB_102e05a04;
        uVar8 = *puVar11;
        func_0x000107c61174(uVar8);
        uVar7 = uVar12;
        func_0x000107c3f43c();
        func_0x000107c61170(uVar8);
        if ((int)uVar7 == 0) {
          uVar7 = uVar12;
          func_0x000107c3f43c();
          if ((int)uVar7 != 0) {
            func_0x000107c58fe4(uVar12);
          }
        }
        else {
          if (unaff_x25 != 0) {
            puVar1 = (undefined8 *)PTR__AVCaptureSessionPreset1920x1080_110347f68;
          }
          uVar8 = *puVar1;
          func_0x000107c61174(uVar8);
          func_0x000107c58fe4(uVar12);
          func_0x000107c61170(uVar8);
        }
        puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
        func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
        func_0x000107c41570();
        func_0x000107c61180();
        func_0x000107c3d7bc();
        func_0x000107c3d7bc(puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c3fe5c(uVar12);
        func_0x000107c61170(puVar5);
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f1c5d8);
        *(undefined **)(unaff_x20 + _DAT_112f1c5d8) = puVar4;
        func_0x000107c61170(uVar8);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
LAB_102e05a04:
  lStack_70 = unaff_x25;
  func_0x000107c60614(&UNK_11075c080,&lStack_70,&UNK_11075c080,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e05a28);
  (*pcVar2)();
}



/* Entry: 102e05c60; end: 102e06097;  */

/* WARNING: Possible PIC construction at 0x000102e05db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0612c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e061bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e05f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e05f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e06004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0604c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e05f9c) */
/* WARNING: Removing unreachable block (ram,0x000102e05f2c) */
/* WARNING: Removing unreachable block (ram,0x000102e061c0) */
/* WARNING: Removing unreachable block (ram,0x000102e06130) */
/* WARNING: Removing unreachable block (ram,0x000102e0616c) */
/* WARNING: Removing unreachable block (ram,0x000102e06198) */
/* WARNING: Removing unreachable block (ram,0x000102e0619c) */
/* WARNING: Removing unreachable block (ram,0x000102e061a4) */
/* WARNING: Removing unreachable block (ram,0x000102e061a8) */
/* WARNING: Removing unreachable block (ram,0x000102e05db4) */
/* WARNING: Removing unreachable block (ram,0x000102e05e64) */
/* WARNING: Removing unreachable block (ram,0x000102e05dd0) */
/* WARNING: Removing unreachable block (ram,0x000102e0608c) */
/* WARNING: Removing unreachable block (ram,0x000102e05ddc) */
/* WARNING: Removing unreachable block (ram,0x000102e06090) */
/* WARNING: Removing unreachable block (ram,0x000102e05de8) */
/* WARNING: Removing unreachable block (ram,0x000102e05f38) */
/* WARNING: Removing unreachable block (ram,0x000102e05e30) */
/* WARNING: Removing unreachable block (ram,0x000102e05f68) */
/* WARNING: Removing unreachable block (ram,0x000102e06050) */
/* WARNING: Removing unreachable block (ram,0x000102e06094) */
/* WARNING: Removing unreachable block (ram,0x000102e060d4) */
/* WARNING: Removing unreachable block (ram,0x000102e060fc) */
/* WARNING: Removing unreachable block (ram,0x000102e060e4) */
/* WARNING: Removing unreachable block (ram,0x000102e06068) */
/* WARNING: Removing unreachable block (ram,0x000102e06008) */

void FUN_102e05c60(double param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  
  func_0x000107c614f0();
  func_0x000107c3d11c();
  func_0x000107c61180();
  uVar7 = param_3;
  func_0x000107c5de1c();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar4 = 0;
  FUN_102e08a6c(0,0x112dd8948,&PTR__OBJC_CLASS___AVFrameRateRange_1126a7ef0);
  uVar5 = uVar7;
  func_0x000107c5fc54(uVar7,uVar4);
  func_0x000107c61170(uVar7);
  if (uVar5 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar7 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102e05f7c);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(uVar5 + uVar8 * 8 + 0x20);
        func_0x000107c61174(uVar6);
      }
      else {
        uVar6 = uVar8;
        func_0x0001003584d8(uVar8,uVar5);
      }
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e05f78);
        (*pcVar2)();
      }
      func_0x000107c4cee8(uVar6);
      if ((double)param_2 < param_1) {
        func_0x000107c61170(uVar6);
      }
      else {
        func_0x000107c4c844(uVar6);
        dVar9 = param_1;
        func_0x000107c61170(uVar6);
        bVar3 = (double)param_2 <= param_1;
        param_1 = dVar9;
        if (bVar3) break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 102e06098; end: 102e061fb;  */

/* WARNING: Possible PIC construction at 0x000102e0612c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e061bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e06130) */
/* WARNING: Removing unreachable block (ram,0x000102e0616c) */
/* WARNING: Removing unreachable block (ram,0x000102e06198) */
/* WARNING: Removing unreachable block (ram,0x000102e0619c) */
/* WARNING: Removing unreachable block (ram,0x000102e061a4) */
/* WARNING: Removing unreachable block (ram,0x000102e061a8) */
/* WARNING: Removing unreachable block (ram,0x000102e061c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e06098(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  uVar1 = (uint)lVar2;
  FUN_102e05164();
  if ((*(char *)(unaff_x20 + _DAT_112f1c600) == '\x01') &&
     (func_0x000102e05a28(), (uVar1 & 0xff) != 4)) {
    func_0x000107c602fc(0x2b);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
    return;
  }
  return;
}



/* Entry: 102e061fc; end: 102e063e3;  */

void FUN_102e061fc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c614f0();
  lVar1 = unaff_x20;
  func_0x000107c5eba8();
  if (lVar1 == 0) {
    lStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
LAB_102e06314:
    FUN_102e08c84(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar2 = *(undefined8 *)PTR__AVCaptureSessionInterruptionReasonKey_110347f50;
    func_0x000107c5faec();
    uStack_50 = uVar2;
    lStack_48 = param_2;
    func_0x000107c61434(param_2);
    puVar4 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&uStack_78,&uStack_50,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(lVar1 + 0x10) == 0) {
LAB_102e062bc:
      lStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
    }
    else {
      func_0x000107c61434(lVar1);
      puVar3 = &uStack_78;
      func_0x000100df95d0(puVar3);
      if (((ulong)puVar4 & 1) == 0) {
        func_0x000107c6142c(lVar1);
        goto LAB_102e062bc;
      }
      func_0x0001000bb420(*(long *)(lVar1 + 0x38) + (long)puVar3 * 0x20,&uStack_50);
      func_0x000107c6142c(param_2);
      param_2 = lVar1;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar1);
    func_0x0001007bbff0(&uStack_78);
    if (lStack_38 == 0) goto LAB_102e06314;
    puVar3 = &uStack_78;
    func_0x000107c6147c(puVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
    uVar2 = uStack_78;
    if ((int)puVar3 != 0) goto LAB_102e06330;
  }
  uVar2 = 0xffffffffffffffff;
LAB_102e06330:
  uStack_78 = 0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x2f);
  func_0x000107c6142c(uStack_70);
  uStack_78 = 0xd00000000000002c;
  uStack_70 = 0x800000010f10f5a0;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  uStack_50 = uVar2;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  uVar2 = uStack_70;
  func_0x0001007d6c6c(1,uStack_78,uStack_70,unaff_x20,&PTR_DAT_1105d8228);
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 102e063e4; end: 102e063ef; -[_TtC21PlayGamesServicesImpl22PlayGamesCameraOverlay sessionWasInterrupted:] */

void FUN_102e063e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ebac();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eba0(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_102e061fc(puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 102e063f0; end: 102e0662f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e063f0(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar11 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  lVar12 = *(long *)(lVar4 + -8);
  lStack_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar4 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_112f1c5e0);
  puVar5 = &UNK_1105d66f0;
  func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_1105d6c40;
  func_0x000107c613fc(&UNK_1105d6c40,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(long *)(puVar6 + 0x18) = lVar2;
  pcStack_70 = FUN_102e08c7c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1105d6c58;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c6157c(puVar5);
  func_0x000107c5f808(lVar4);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0x112d4af88;
  FUN_102e08710(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar9 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar10 = 0x112d4af98;
  func_0x000102e08aac(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar11,&puStack_98,uVar9,uVar10,lVar3,uVar8);
  func_0x000107c5ffe8(0,lVar4,lVar11,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  (**(code **)(lStack_a0 + 8))(lVar11,lVar3);
  (**(code **)(lVar12 + 8))(lVar4,lStack_a8);
  puVar6 = puStack_68;
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 102e06630; end: 102e066e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e06630(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f1c5c0;
  if (param_1 != 0) {
    if (*(char *)(param_1 + _DAT_112f1c600) == '\x01') {
      uVar2 = *(ulong *)(param_1 + _DAT_112f1c5c0);
      func_0x000107c4a360();
      if ((uVar2 & 1) == 0) {
        func_0x0001007d6c6c(1,0x1000000000000039,0x800000010f10f560,param_2,&PTR_DAT_1105d8228);
        func_0x000107c5bba0(*(undefined8 *)(param_1 + lVar1));
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102e066e8; end: 102e066f3; -[_TtC21PlayGamesServicesImpl22PlayGamesCameraOverlay sessionInterruptionEnded:] */

void FUN_102e066e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ebac();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eba0(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_102e063f0(puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 102e066f4; end: 102e0679b;  */

void FUN_102e066f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ebac();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eba0(puVar2,param_3);
  func_0x000107c61174(param_1);
  (*param_4)(puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 102e0679c; end: 102e067fb; -[_TtC21PlayGamesServicesImpl22PlayGamesCameraOverlay init] */

void FUN_102e0679c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesServicesImpl.PlayGamesCameraOverlay",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e067c8);
  (*pcVar1)();
}



/* Entry: 102e067fc; end: 102e068cb; -[_TtC21PlayGamesServicesImpl22PlayGamesCameraOverlay .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e06858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e06878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e06898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e0687c) */
/* WARNING: Removing unreachable block (ram,0x000102e0685c) */
/* WARNING: Removing unreachable block (ram,0x000102e0689c) */
/* WARNING: Removing unreachable block (ram,0x000101237350) */
/* WARNING: Removing unreachable block (ram,0x00010123735c) */
/* WARNING: Removing unreachable block (ram,0x000101237354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e067fc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f1c5c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f1c5d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f1c5e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f1c5e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f1c618));
  return;
}



/* Entry: 102e068cc; end: 102e06967;  */

void FUN_102e068cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102e08710(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e06968,uVar2,uVar3);
  return;
}



/* Entry: 102e06968; end: 102e06b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e06968(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(char *)(*(long *)(unaff_x22 + 0x80) + _DAT_112f1c610) == '\x01') {
    *(long *)(unaff_x22 + 0x20) = *(long *)(unaff_x22 + 0x80);
    uVar5 = 0x112f1c688;
    func_0x0001000285a8(0x112f1c688,&UNK_10db54d10);
    func_0x000100087bd4(unaff_x22 + 0x68,FUN_102e08750,unaff_x22 + 0x10,uVar5);
    lVar4 = *(long *)(unaff_x22 + 0x68);
    *(long *)(unaff_x22 + 0xa8) = lVar4;
    if (lVar4 != 0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
      *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x80);
      uVar5 = 0x112f1c690;
      func_0x0001000285a8(0x112f1c690,&UNK_10db54d18);
      func_0x000100087bd4(unaff_x22 + 0x28,FUN_102e08788,unaff_x22 + 0x50,uVar5);
      puVar1 = &UNK_1105d66c8;
      func_0x000107c613fc(&UNK_1105d66c8,0x41,7);
      *(undefined8 *)(puVar1 + 0x10) = uVar2;
      *(long *)(puVar1 + 0x18) = lVar4;
      uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
      *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(unaff_x22 + 0x30);
      *(undefined8 *)(puVar1 + 0x20) = uVar5;
      *(undefined8 *)(puVar1 + 0x38) = uVar7;
      *(undefined8 *)(puVar1 + 0x30) = uVar6;
      puVar1[0x40] = *(undefined1 *)(unaff_x22 + 0x48);
      func_0x000107c61174(uVar2);
      func_0x000107c61174(lVar4);
      uVar5 = 0x112d36838;
      func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
      uVar2 = 0xc;
      func_0x0001009548b0(0xc,4,0x38,3,0,0,&UNK_10db54d28,puVar1,uVar5);
      *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
      func_0x000107c61574(puVar1);
      plVar3 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb8) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_102e06b78;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(plVar3,unaff_x22 + 0x70,uVar2,uVar5);
      return;
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
    func_0x0001007d6c6c(1,0x1000000000000047,0x800000010f10ee10,uVar2,&PTR_DAT_1105d8228);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  }
  func_0x000107c61174(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000102e06b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 102e06b78; end: 102e06bc3;  */

void FUN_102e06b78(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb8));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102e06bc4,*(undefined8 *)(lVar2 + 0x98),*(undefined8 *)(lVar2 + 0xa0));
  return;
}



/* Entry: 102e06bc4; end: 102e06c0f;  */

void FUN_102e06bc4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c61170(uVar1);
  if (*(long *)(unaff_x22 + 0x70) == 0) {
    func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x78));
  }
                    /* WARNING: Could not recover jumptable at 0x000102e06c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e06c10; end: 102e06c2b;  */

void FUN_102e06c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e06c2c,0,0);
  return;
}



/* Entry: 102e06c2c; end: 102e06c63;  */

void FUN_102e06c2c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_102e0a6f4(uVar2,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28));
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000102e06c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e06c64; end: 102e0723f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e06c64(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f7fc();
  lStack_a8 = *(long *)(lVar3 + -8);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar3 = 0;
  puStack_b8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f824();
  lStack_c0 = *(long *)(lVar3 + -8);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar3 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pcVar4 = "prepareForRecording(completion:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  puVar5 = &UNK_1105d6970;
  func_0x000107c613fc(&UNK_1105d6970,0x28,7);
  *(char **)(puVar5 + 0x10) = pcVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  puVar6 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
  func_0x000107c61168();
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(pcVar4);
  puVar7 = puVar6;
  func_0x000107c3e490();
  if (puVar7 + -1 < (undefined *)0x2) {
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0xe000000000000000;
    func_0x000107c602fc(0x47);
    func_0x000107c5fb78(0xd000000000000026,0x800000010f10f130);
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puStack_98 = puVar7;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0x100000000000001f,0x800000010f10f160);
    uVar8 = uStack_88;
    func_0x0001007d6c6c(2,puStack_90,uStack_88,lVar2,&PTR_DAT_1105d8228);
    func_0x000107c6142c(uVar8);
    puVar6 = &UNK_1105d69e8;
    func_0x000107c613fc(&UNK_1105d69e8,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = param_2;
    pcStack_70 = (code *)0x102e08de8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1105d6a00;
    ppuVar11 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar11);
    puVar6 = puStack_68;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar6);
    func_0x000107c4e524(pcVar4);
    func_0x000107c60bd0(ppuVar11);
  }
  else {
    if (puVar7 == (undefined *)0x0) {
      func_0x0001007d6c6c(1,0xd000000000000032,0x800000010f10f180,lVar2,&PTR_DAT_1105d8228);
      puVar7 = &UNK_1105d66f0;
      func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar12 = &UNK_1105d6a38;
      func_0x000107c613fc(&UNK_1105d6a38,0x30,7);
      *(undefined **)(puVar12 + 0x10) = puVar7;
      *(code **)(puVar12 + 0x18) = FUN_102e08994;
      *(undefined **)(puVar12 + 0x20) = puVar5;
      *(long *)(puVar12 + 0x28) = lVar2;
      pcStack_70 = FUN_102e089c0;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100ab47f8;
      puStack_78 = &UNK_1105d6a50;
      ppuVar11 = &puStack_90;
      puStack_68 = puVar12;
      func_0x000107c60bc4(ppuVar11);
      puVar7 = puStack_68;
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar7);
      func_0x000107c50310(puVar6);
      func_0x000107c61574(puVar5);
      func_0x000107c615e8(pcVar4);
      func_0x000107c60bd0(ppuVar11);
      return;
    }
    if (puVar7 == (undefined *)0x3) {
      uStack_c8 = *(undefined8 *)(unaff_x20 + _DAT_112f1c5e0);
      puVar6 = &UNK_1105d66f0;
      func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = &UNK_1105d6a88;
      func_0x000107c613fc(&UNK_1105d6a88,0x28,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(code **)(puVar7 + 0x18) = FUN_102e08994;
      *(undefined **)(puVar7 + 0x20) = puVar5;
      pcStack_70 = FUN_102e08a08;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000b0c7c;
      puStack_78 = &UNK_1105d6aa0;
      ppuVar11 = &puStack_90;
      puStack_68 = puVar7;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c6157c(puVar6);
      func_0x000107c6157c(puVar5);
      func_0x000107c5f808(lVar3);
      puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar8 = 0x112d4af88;
      FUN_102e08710(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
      uVar9 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar10 = 0x112d4af98;
      func_0x000102e08aac(0x112d4af98,0x112d4af90,&UNK_10d914100);
      lVar2 = lStack_a0;
      puVar1 = puStack_b8;
      func_0x000107c60264(puStack_b8,&puStack_98,uVar9,uVar10,lStack_a0,uVar8);
      func_0x000107c5ffe8(0,lVar3,puVar1,ppuVar11);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c615e8(pcVar4);
      func_0x000107c61574(puVar5);
      (**(code **)(lStack_a8 + 8))(puVar1,lVar2);
      (**(code **)(lStack_c0 + 8))(lVar3,lStack_b0);
      puVar5 = puStack_68;
      func_0x000107c61574(puVar6);
      goto LAB_102e0721c;
    }
    puVar6 = &UNK_1105d6998;
    func_0x000107c613fc(&UNK_1105d6998,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = param_2;
    pcStack_70 = FUN_102e089a0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1105d69b0;
    ppuVar11 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar11);
    puVar6 = puStack_68;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar6);
    func_0x000107c4e524(pcVar4);
    func_0x000107c60bd0(ppuVar11);
  }
  func_0x000107c615e8(pcVar4);
LAB_102e0721c:
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 102e07240; end: 102e07363;  */

void FUN_102e07240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1105d6b28;
  func_0x000107c613fc(&UNK_1105d6b28,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uStack_40 = 0x102e08dec;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105d6b40;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102e07364; end: 102e075bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e07364(byte param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar9 = *(long *)(lVar2 + -8);
  lStack_b8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar2 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    (*param_3)();
  }
  else {
    uStack_c8 = *(undefined8 *)(param_2 + _DAT_112f1c5e0);
    puVar3 = &UNK_1105d6ad8;
    lStack_c0 = lVar10;
    func_0x000107c613fc(&UNK_1105d6ad8,0x38,7);
    puVar3[0x10] = param_1 & 1;
    *(long *)(puVar3 + 0x18) = param_2;
    *(code **)(puVar3 + 0x20) = param_3;
    *(undefined8 *)(puVar3 + 0x28) = param_4;
    *(undefined8 *)(puVar3 + 0x30) = param_5;
    uStack_88 = 0x102e08a14;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000b0c7c;
    puStack_90 = &UNK_1105d6af0;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61174(param_2);
    func_0x000107c6157c(param_4);
    func_0x000107c5f808(lVar2);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar5 = 0x112d4af88;
    FUN_102e08710(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar6 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar7 = 0x112d4af98;
    func_0x000102e08aac(0x112d4af98,0x112d4af90,&UNK_10d914100);
    func_0x000107c60264(puVar8,&puStack_b0,uVar6,uVar7,lVar1,uVar5);
    func_0x000107c5ffe8(0,lVar2,puVar8,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    (**(code **)(lStack_c0 + 8))(puVar8,lVar1);
    (**(code **)(lVar9 + 8))(lVar2,lStack_b8);
    func_0x000107c61170(param_2);
    func_0x000107c61574(puStack_80);
  }
  return;
}



/* Entry: 102e075c0; end: 102e07663;  */

void FUN_102e075c0(ulong param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if ((param_1 & 1) == 0) {
    func_0x0001007d6c6c(2,0xd000000000000020,0x800000010f10f380,param_5,&PTR_DAT_1105d8228);
  }
  else {
    func_0x0001007d6c6c(1,0xd000000000000033,0x800000010f10f3b0,param_5,&PTR_DAT_1105d8228);
    FUN_102e06098();
  }
  (*param_3)();
  return;
}



/* Entry: 102e07664; end: 102e0797f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e07664(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + _DAT_112f1c608) & 1) == 0) {
      if (*(char *)(param_1 + _DAT_112f1c600) == '\x01') {
        if (*(char *)(param_1 + _DAT_112f1c5f8) == '\x01') {
          *(undefined1 *)(param_1 + _DAT_112f1c608) = 1;
          uVar7 = 0x112f1c690;
          lStack_b0 = param_1;
          func_0x0001000285a8(0x112f1c690,&UNK_10db54d18);
          func_0x000100087bd4(&puStack_a0,FUN_102e08dfc,auStack_c0,uVar7);
          puVar1 = (undefined8 *)(param_1 + _DAT_112f1c638);
          puVar1[1] = uStack_98;
          *puVar1 = puStack_a0;
          puVar1[3] = puStack_88;
          puVar1[2] = puStack_90;
          *(undefined1 *)(puVar1 + 4) = (undefined1)uStack_80;
          pcVar3 = "fireRecordingStateChanged(_:)";
          func_0x0001000c10c0("fireRecordingStateChanged(_:)");
          func_0x000107c61180();
          puVar4 = &UNK_1105d66f0;
          func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
          func_0x000107c61614(puVar4 + 0x10,param_1);
          puVar5 = &UNK_1105d6920;
          func_0x000107c613fc(&UNK_1105d6920,0x19,7);
          *(undefined **)(puVar5 + 0x10) = puVar4;
          puVar5[0x18] = 1;
          uStack_80 = 0x102e08de4;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          puStack_90 = &UNK_1000f6b44;
          puStack_88 = &UNK_1105d6938;
          ppuVar6 = &puStack_a0;
          puStack_78 = puVar5;
          func_0x000107c60bc4(ppuVar6);
          func_0x000107c61574(puStack_78);
          func_0x000107c4e524(pcVar3);
          func_0x000107c60bd0(ppuVar6);
          func_0x000107c615e8(pcVar3);
          uStack_98 = puVar1[1];
          puStack_a0 = (undefined *)*puVar1;
          puStack_88 = (undefined *)puVar1[3];
          puStack_90 = (undefined *)puVar1[2];
          uStack_80 = CONCAT71(uStack_80._1_7_,*(undefined1 *)(puVar1 + 4));
          func_0x000102e09694(0);
          func_0x000107c613fc();
          ppuVar6 = &puStack_a0;
          FUN_102e09224();
          uVar7 = *(undefined8 *)(param_1 + _DAT_112f1c640);
          lStack_b0 = param_1;
          ppuStack_a8 = ppuVar6;
          func_0x000107c6157c(uVar7);
          func_0x000100087bd4(FUN_102e08954,auStack_c0,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(uVar7);
          func_0x0001007d6c6c(1,0xd00000000000003a,0x800000010f10f090,param_2,&PTR_DAT_1105d8228);
          func_0x000107c61170(param_1);
          func_0x000107c61574(ppuVar6);
          return;
        }
        uVar7 = 0x1000000000000062;
        uVar8 = 0x800000010f10f020;
        uVar2 = 2;
      }
      else {
        uVar7 = 0x1000000000000047;
        uVar8 = 0x800000010f10efd0;
        uVar2 = 1;
      }
    }
    else {
      uVar8 = 0x800000010f10f0d0;
      uVar2 = 1;
      uVar7 = 0x100000000000002c;
    }
    func_0x0001007d6c6c(uVar2,uVar7,uVar8,param_2,&PTR_DAT_1105d8228);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102e07980; end: 102e07a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e07980(long param_1,uint param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    pcVar2 = *(code **)(param_1 + _DAT_112f1c650);
    if (pcVar2 == (code *)0x0) {
      func_0x000107c61170();
    }
    else {
      uVar1 = ((undefined8 *)(param_1 + _DAT_112f1c650))[1];
      func_0x000101237340(pcVar2,uVar1);
      func_0x000107c61170(param_1);
      (*pcVar2)(param_2 & 1);
      func_0x000101237350(pcVar2,uVar1);
    }
  }
  return;
}



/* Entry: 102e07a1c; end: 102e07e8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e07a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = unaff_x20;
  uStack_d0 = param_2;
  func_0x000107c614f0();
  lVar1 = 0;
  lStack_c8 = lVar2;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  lStack_b8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar13 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_c0 = lVar13;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar1 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(lVar1 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  pcVar3 = "completeRecording(lensVideoURL:completion:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  (**(code **)(lVar1 + 0x10))(lVar14,param_1,lVar2);
  uVar11 = (ulong)*(byte *)(lVar1 + 0x50);
  uVar12 = uVar11 + 0x28 & (uVar11 ^ 0xffffffffffffffff);
  puVar4 = &UNK_1105d67b8;
  func_0x000107c613fc(&UNK_1105d67b8,uVar12 + lVar15,uVar11 | 7);
  *(char **)(puVar4 + 0x10) = pcVar3;
  *(undefined8 *)(puVar4 + 0x18) = uStack_d0;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  (**(code **)(lVar1 + 0x20))(puVar4 + uVar12,lVar14,lVar2);
  uStack_d0 = *(undefined8 *)(unaff_x20 + _DAT_112f1c5e0);
  puVar5 = &UNK_1105d66f0;
  func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_1105d67e0;
  func_0x000107c613fc(&UNK_1105d67e0,0x30,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(code **)(puVar6 + 0x18) = FUN_102e088a8;
  *(undefined **)(puVar6 + 0x20) = puVar4;
  *(long *)(puVar6 + 0x28) = lStack_c8;
  pcStack_70 = FUN_102e088dc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1105d67f8;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c615f0(pcVar3);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar4);
  func_0x000107c5f808(lVar13);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0x112d4af88;
  FUN_102e08710(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar9 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar10 = 0x112d4af98;
  func_0x000102e08aac(0x112d4af98,0x112d4af90,&UNK_10d914100);
  lVar1 = lStack_b8;
  lVar2 = lStack_c0;
  func_0x000107c60264(lStack_c0,&puStack_98,uVar9,uVar10,lStack_b8,uVar8);
  func_0x000107c5ffe8(0,lVar13,lVar2,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c615e8(pcVar3);
  func_0x000107c61574(puVar4);
  (**(code **)(lStack_a0 + 8))(lVar2,lVar1);
  (**(code **)(lStack_b0 + 8))(lVar13,lStack_a8);
  puVar4 = puStack_68;
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 102e07e90; end: 102e08097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e07e90(long param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_68 [24];
  
  ppuVar5 = &puStack_a0;
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f1c608;
  if (param_1 != 0) {
    if (*(char *)(param_1 + _DAT_112f1c608) == '\x01') {
      uVar6 = *(undefined8 *)(param_1 + _DAT_112f1c640);
      puStack_90 = (undefined *)param_1;
      func_0x000107c6157c(uVar6);
      func_0x000100087bd4(FUN_102e08d30,&puStack_a0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar6);
      *(undefined1 *)(param_1 + lVar1) = 0;
      pcVar2 = "fireRecordingStateChanged(_:)";
      func_0x0001000c10c0("fireRecordingStateChanged(_:)");
      func_0x000107c61180();
      puVar3 = &UNK_1105d66f0;
      func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_1);
      puVar4 = &UNK_1105d6830;
      func_0x000107c613fc(&UNK_1105d6830,0x19,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      puVar4[0x18] = 0;
      uStack_80 = 0x102e08de0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_1105d6848;
      puStack_78 = puVar4;
      func_0x000107c60bc4(&puStack_a0);
      func_0x000107c61574(puStack_78);
      func_0x000107c4e524(pcVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(pcVar2);
      func_0x0001007d6c6c(1,0x100000000000004d,0x800000010f10ef80,param_4,&PTR_DAT_1105d8228);
      (*param_2)();
      func_0x000107c61170(param_1);
      return;
    }
    func_0x000107c61170();
  }
  func_0x0001007d6c6c(1,0x1000000000000049,0x800000010f10ef30,param_4,&PTR_DAT_1105d8228);
  (*param_2)();
  return;
}



/* Entry: 102e08098; end: 102e080b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e08098(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar5 = &UNK_1105d6718;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar10 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar3 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_112f1c5e0);
  puVar4 = &UNK_1105d66f0;
  func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  func_0x000107c613fc(&UNK_1105d6718,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(long *)(puVar5 + 0x18) = lVar1;
  pcStack_70 = FUN_102e08840;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1105d6730;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c6157c(puVar4);
  func_0x000107c5f808(lVar3);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0x112d4af88;
  FUN_102e08710(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar9 = 0x112d4af98;
  func_0x000102e08aac(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar10,&puStack_98,uVar8,uVar9,lVar2,uVar7);
  func_0x000107c5ffe8(0,lVar3,lVar10,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  (**(code **)(lStack_a0 + 8))(lVar10,lVar2);
  (**(code **)(lVar11 + 8))(lVar3,lStack_a8);
  puVar5 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 102e080b4; end: 102e082e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e080b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar9 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_112f1c5e0);
  puVar4 = &UNK_1105d66f0;
  func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  func_0x000107c613fc(param_1,0x20,7);
  *(undefined **)(param_1 + 0x10) = puVar4;
  *(long *)(param_1 + 0x18) = lVar1;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  ppuVar5 = &puStack_90;
  uStack_78 = param_3;
  uStack_70 = param_2;
  lStack_68 = param_1;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c6157c(puVar4);
  func_0x000107c5f808(lVar3);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  FUN_102e08710(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = 0x112d4af98;
  func_0x000102e08aac(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar9,&puStack_98,uVar7,uVar8,lVar2,uVar6);
  func_0x000107c5ffe8(0,lVar3,lVar9,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  (**(code **)(lStack_a0 + 8))(lVar9,lVar2);
  (**(code **)(lVar10 + 8))(lVar3,lStack_a8);
  lVar1 = lStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 102e082e4; end: 102e084bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e082e4(long param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f1c608;
  if (param_1 != 0) {
    if (*(char *)(param_1 + _DAT_112f1c608) == '\x01') {
      func_0x0001007d6c6c(0,0xd000000000000045,0x800000010f10ee90,param_2,&PTR_DAT_1105d8228);
      *(undefined1 *)(param_1 + lVar1) = 0;
      pcVar2 = "fireRecordingStateChanged(_:)";
      func_0x0001000c10c0("fireRecordingStateChanged(_:)");
      func_0x000107c61180();
      puVar3 = &UNK_1105d66f0;
      func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_1);
      puVar4 = &UNK_1105d6768;
      func_0x000107c613fc(&UNK_1105d6768,0x19,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      puVar4[0x18] = 0;
      uStack_60 = 0x102e08864;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1105d6780;
      ppuVar5 = &puStack_80;
      puStack_58 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_58);
      func_0x000107c4e524(pcVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(pcVar2);
      uVar6 = *(undefined8 *)(param_1 + _DAT_112f1c640);
      puStack_70 = (undefined *)param_1;
      func_0x000107c6157c(uVar6);
      func_0x000100087bd4(FUN_102e08870,&puStack_80,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(param_1);
      func_0x000107c61574(uVar6);
    }
    else {
      func_0x0001007d6c6c(0,0x100000000000002f,0x800000010f10ee60,param_2,&PTR_DAT_1105d8228);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 102e084bc; end: 102e084d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102e084bc(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _DAT_112f1c610);
}



/* Entry: 102e084d4; end: 102e084ff;  */

void FUN_102e084d4(void)

{
  FUN_102e080b4(&UNK_1105d68d0,FUN_102e08928,&UNK_1105d68e8);
  return;
}



/* Entry: 102e08500; end: 102e08503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e08500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = unaff_x20;
  uStack_d0 = param_2;
  func_0x000107c614f0();
  lVar1 = 0;
  lStack_c8 = lVar2;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  lStack_b8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar13 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_c0 = lVar13;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar1 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(lVar1 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  pcVar3 = "completeRecording(lensVideoURL:completion:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  (**(code **)(lVar1 + 0x10))(lVar14,param_1,lVar2);
  uVar11 = (ulong)*(byte *)(lVar1 + 0x50);
  uVar12 = uVar11 + 0x28 & (uVar11 ^ 0xffffffffffffffff);
  puVar4 = &UNK_1105d67b8;
  func_0x000107c613fc(&UNK_1105d67b8,uVar12 + lVar15,uVar11 | 7);
  *(char **)(puVar4 + 0x10) = pcVar3;
  *(undefined8 *)(puVar4 + 0x18) = uStack_d0;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  (**(code **)(lVar1 + 0x20))(puVar4 + uVar12,lVar14,lVar2);
  uStack_d0 = *(undefined8 *)(unaff_x20 + _DAT_112f1c5e0);
  puVar5 = &UNK_1105d66f0;
  func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_1105d67e0;
  func_0x000107c613fc(&UNK_1105d67e0,0x30,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(code **)(puVar6 + 0x18) = FUN_102e088a8;
  *(undefined **)(puVar6 + 0x20) = puVar4;
  *(long *)(puVar6 + 0x28) = lStack_c8;
  pcStack_70 = FUN_102e088dc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1105d67f8;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c615f0(pcVar3);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar4);
  func_0x000107c5f808(lVar13);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0x112d4af88;
  FUN_102e08710(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar9 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar10 = 0x112d4af98;
  func_0x000102e08aac(0x112d4af98,0x112d4af90,&UNK_10d914100);
  lVar1 = lStack_b8;
  lVar2 = lStack_c0;
  func_0x000107c60264(lStack_c0,&puStack_98,uVar9,uVar10,lStack_b8,uVar8);
  func_0x000107c5ffe8(0,lVar13,lVar2,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c615e8(pcVar3);
  func_0x000107c61574(puVar4);
  (**(code **)(lStack_a0 + 8))(lVar2,lVar1);
  (**(code **)(lStack_b0 + 8))(lVar13,lStack_a8);
  puVar4 = puStack_68;
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 102e08504; end: 102e0852f;  */

void FUN_102e08504(void)

{
  FUN_102e080b4(&UNK_1105d6718,FUN_102e08840,&UNK_1105d6730);
  return;
}



/* Entry: 102e08530; end: 102e085d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e08530(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  long lStack_38;
  
  uVar1 = 0x112f1c698;
  func_0x0001000285a8(0x112f1c698,&UNK_10db54d38);
  func_0x000100087bd4(&lStack_38,0x102e08e10,auStack_50,uVar1);
  if (lStack_38 != 0) {
    FUN_102e0a110(param_1);
    func_0x000107c61574(lStack_38);
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return param_1;
}



/* Entry: 102e085d8; end: 102e08623;  */

void FUN_102e085d8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102e08624;
  plVar4[0xf] = param_1;
  plVar4[0x10] = unaff_x20;
  func_0x000107c614f0();
  plVar4[0x11] = unaff_x20;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0x12] = lVar3;
  lVar3 = 0x112d45220;
  FUN_102e08710(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x13] = lVar2;
  plVar4[0x14] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e06968,lVar2,lVar3);
  return;
}



/* Entry: 102e08624; end: 102e08667;  */

void FUN_102e08624(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102e08664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102e08668; end: 102e086ef; -[_TtC21PlayGamesServicesImpl22PlayGamesCameraOverlay captureOutput:didOutputSampleBuffer:fromConnection:] */

/* WARNING: Possible PIC construction at 0x000102e086c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e086d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e086c8) */
/* WARNING: Removing unreachable block (ram,0x000102e086d8) */

void FUN_102e08668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_102e08af0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102e086f0; end: 102e0870f;  */

void FUN_102e086f0(void)

{
  func_0x000107c61168(&PTR_PTR_1128a7400);
  return;
}



/* Entry: 102e08710; end: 102e0874f;  */

void FUN_102e08710(long *param_1,code *param_2,long param_3)

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



/* Entry: 102e08750; end: 102e08787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e08750(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f1c620);
  func_0x000107c61174();
  return;
}



/* Entry: 102e08788; end: 102e0879b;  */

void FUN_102e08788(void)

{
  func_0x000102e08930();
  return;
}



/* Entry: 102e0879c; end: 102e08803;  */

void FUN_102e0879c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102e08804;
  plVar3[4] = lVar2;
  plVar3[5] = unaff_x20 + 0x20;
  plVar3[2] = param_1;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e06c2c,0,0);
  return;
}



/* Entry: 102e08804; end: 102e0883f;  */

void FUN_102e08804(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102e0883c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102e08840; end: 102e0886f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e08840(void)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f1c608;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + _DAT_112f1c608) == '\x01') {
      func_0x0001007d6c6c(0,0xd000000000000045,0x800000010f10ee90,uVar7,&PTR_DAT_1105d8228);
      *(undefined1 *)(lVar2 + lVar1) = 0;
      pcVar3 = "fireRecordingStateChanged(_:)";
      func_0x0001000c10c0("fireRecordingStateChanged(_:)");
      func_0x000107c61180();
      puVar4 = &UNK_1105d66f0;
      func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar2);
      puVar5 = &UNK_1105d6768;
      func_0x000107c613fc(&UNK_1105d6768,0x19,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      puVar5[0x18] = 0;
      uStack_60 = 0x102e08864;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1105d6780;
      ppuVar6 = &puStack_80;
      puStack_58 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_58);
      func_0x000107c4e524(pcVar3);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(pcVar3);
      uVar7 = *(undefined8 *)(lVar2 + _DAT_112f1c640);
      puStack_70 = (undefined *)lVar2;
      func_0x000107c6157c(uVar7);
      func_0x000100087bd4(FUN_102e08870,&puStack_80,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(lVar2);
      func_0x000107c61574(uVar7);
    }
    else {
      func_0x0001007d6c6c(0,0x100000000000002f,0x800000010f10ee60,uVar7,&PTR_DAT_1105d8228);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102e08870; end: 102e088a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e08870(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f1c648);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f1c648) = 0;
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 102e088a8; end: 102e088db;  */

void FUN_102e088a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar5 = 0;
  func_0x000107c5ede0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar5 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)&puStack_90 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x10))
            (lVar9,unaff_x20 + (uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff)),lVar5);
  uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar11 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar3 = &UNK_1105d6880;
  func_0x000107c613fc(&UNK_1105d6880,uVar11 + lVar8,uVar7 | 7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  (**(code **)(lVar10 + 0x20))(puVar3 + uVar11,lVar9,lVar5);
  pcStack_70 = FUN_102e088e8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105d6898;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_68;
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar4);
  return;
}


