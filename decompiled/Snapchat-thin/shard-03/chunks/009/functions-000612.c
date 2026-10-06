/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ec9c4c; end: 102ec9e57;  */

/* WARNING: Possible PIC construction at 0x000102ec9de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ec9dec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ec9c4c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  
  if (param_1 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f27760);
    func_0x000107c615f0();
    func_0x000107c4141c();
    func_0x000107c61180();
    lVar1 = lVar4;
    func_0x000107c3ff98();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    lVar4 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar4 != 0) {
      lVar1 = lVar4;
      func_0x000107c4e864();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar1 != 0) {
        lVar4 = lVar1;
        func_0x000107c4d06c();
        func_0x000107c61180();
        func_0x000107c615e8(param_1);
        func_0x000107c615e8(lVar1);
        puVar2 = &UNK_1105e53d8;
        func_0x000107c613fc(&UNK_1105e53d8,0x48,7);
        *(long *)(puVar2 + 0x10) = lVar4;
        *(undefined8 *)(puVar2 + 0x18) = param_2;
        *(undefined8 *)(puVar2 + 0x20) = param_3;
        *(code **)(puVar2 + 0x28) = param_4;
        *(undefined8 *)(puVar2 + 0x30) = param_5;
        *(undefined8 *)(puVar2 + 0x38) = param_6;
        *(undefined8 *)(puVar2 + 0x40) = param_7;
        puVar3 = &UNK_1105e5400;
        func_0x000107c613fc(&UNK_1105e5400,0x20,7);
        *(undefined **)(puVar3 + 0x10) = &UNK_10db631f8;
        *(undefined **)(puVar3 + 0x18) = puVar2;
        func_0x000107c615f0(lVar4);
        func_0x000107c6157c(param_3);
        func_0x000107c6157c(param_5);
        func_0x000107c6157c(param_7);
        func_0x0001001ca524(0,0,0x54,4,0,0,&UNK_10db63200,puVar3,PTR___sytN_11034f1b0 + 8);
        func_0x000107c615e8(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(puVar3);
        return;
      }
    }
    func_0x000107c615e8(param_1);
  }
  (*param_4)(0xd00000000000004a,0x800000010f1139a0);
  return;
}



/* Entry: 102ec9e58; end: 102ec9ecf;  */

void FUN_102ec9e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec9ed0,uVar1,uVar2);
  return;
}



/* Entry: 102ec9ed0; end: 102ec9fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ec9ed0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  lVar4 = 0;
  FUN_102ed0fac();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f27918) = uVar6;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f27920);
  puVar2[1] = uVar13;
  *puVar2 = uVar11;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f27928);
  puVar2[1] = uVar12;
  *puVar2 = uVar10;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f27930);
  puVar2[1] = uVar15;
  *puVar2 = uVar14;
  plVar9 = (long *)(unaff_x22 + 0x10);
  *plVar9 = lVar5;
  *(long *)(unaff_x22 + 0x18) = lVar4;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c615f0(uVar6);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar1);
  func_0x000107c61154(plVar9,puVar3);
  FUN_102ec9fd0();
  func_0x000107c61170(plVar9);
                    /* WARNING: Could not recover jumptable at 0x000102ec9fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec9fd0; end: 102eca0db;  */

/* WARNING: Possible PIC construction at 0x000102ec9fec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eca098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ec9ff0) */
/* WARNING: Removing unreachable block (ram,0x000102eca09c) */

void FUN_102ec9fd0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  uVar1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uRam0000000112f27980);
  uRam0000000112f27980 = uVar1;
  return;
}



/* Entry: 102eca0dc; end: 102eca1ef; -[_TtC24SCSnapDocSaveServiceImpl22SnapDocSaveServiceImpl importTemplateWithDeckFactory:onComplete:onError:onCancel:] */

/* WARNING: Possible PIC construction at 0x000102eca1cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102eca1d0) */

void FUN_102eca0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1105e5360;
  func_0x000107c613fc(&UNK_1105e5360,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_1105e5388;
  func_0x000107c613fc(&UNK_1105e5388,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  puVar3 = &UNK_1105e53b0;
  func_0x000107c613fc(&UNK_1105e53b0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102ec9c4c(param_3,0x102ed3378,puVar1,0x102ed337c,puVar2,0x102ed3364,puVar3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102eca1f0; end: 102eca413;  */

/* WARNING: Possible PIC construction at 0x000102eca3a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102eca3ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eca1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,code *param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  if (param_5 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f27760);
    func_0x000107c615f0(param_5);
    func_0x000107c4141c();
    func_0x000107c61180();
    lVar1 = lVar4;
    func_0x000107c3ff98();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    lVar4 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar4 != 0) {
      lVar1 = lVar4;
      func_0x000107c4e864();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar1 != 0) {
        lVar4 = lVar1;
        func_0x000107c4d06c();
        func_0x000107c61180();
        func_0x000107c615e8(param_5);
        func_0x000107c615e8(lVar1);
        puVar2 = &UNK_1105e52c0;
        func_0x000107c613fc(&UNK_1105e52c0,0x58,7);
        *(undefined8 *)(puVar2 + 0x10) = param_3;
        *(undefined8 *)(puVar2 + 0x18) = param_4;
        *(undefined8 *)(puVar2 + 0x20) = param_1;
        *(undefined8 *)(puVar2 + 0x28) = param_2;
        *(code **)(puVar2 + 0x30) = param_8;
        *(undefined8 *)(puVar2 + 0x38) = param_9;
        *(undefined8 *)(puVar2 + 0x40) = param_6;
        *(undefined8 *)(puVar2 + 0x48) = param_7;
        *(long *)(puVar2 + 0x50) = lVar4;
        puVar3 = &UNK_1105e52e8;
        func_0x000107c613fc(&UNK_1105e52e8,0x20,7);
        *(undefined **)(puVar3 + 0x10) = &UNK_10db631d8;
        *(undefined **)(puVar3 + 0x18) = puVar2;
        func_0x000107c61434(param_4);
        func_0x000107c61434(param_2);
        func_0x000107c6157c(param_9);
        func_0x000107c6157c(param_7);
        func_0x000107c615f0(lVar4);
        func_0x0001001ca524(0,0,0x54,4,0,0,&UNK_10db631e0,puVar3,PTR___sytN_11034f1b0 + 8);
        func_0x000107c615e8(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(puVar3);
        return;
      }
    }
    func_0x000107c615e8(param_5);
  }
  (*param_8)(0xd00000000000004a,0x800000010f1138e0);
  return;
}



/* Entry: 102eca414; end: 102eca503;  */

void FUN_102eca414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_8;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_9;
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  lVar1 = 0;
  func_0x000107c5fb10();
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar2;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0xd0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xd8) = lVar1;
  lVar1 = *(long *)(lVar1 + 0x40);
  *(long *)(unaff_x22 + 0xe0) = lVar1;
  uVar2 = lVar1 + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe8) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x100) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eca504,uVar4,uVar5);
  return;
}



/* Entry: 102eca504; end: 102eca8ff;  */

/* WARNING: Removing unreachable block (ram,0x000102eca634) */

void FUN_102eca504(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  code *pcVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = *(ulong *)(unaff_x22 + 0x70);
  uVar15 = *(ulong *)(unaff_x22 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x100));
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5c7fc();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c5edb4(uVar5,puVar4);
  func_0x000107c61170(puVar4);
  uVar10 = uVar10 & 0xffffffffffff;
  if ((uVar15 & 0x2000000000000000) != 0) {
    uVar10 = uVar15 >> 0x38 & 0xf;
  }
  if (uVar10 == 0) {
    uVar11 = 0xed00006e6f736a2e;
    uVar5 = 0x6574616c706d6574;
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c61434(uVar11);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar6 = *(long *)(unaff_x22 + 0xc0);
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c5ed9c(uVar12,uVar5,uVar11);
  func_0x000107c6142c(uVar11);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar9;
  func_0x000107c5fb04(uVar8);
  func_0x000100e8b654();
  func_0x000107c6021c(uVar12,1,uVar8,PTR___sSSN_11034da80,uVar11);
  (**(code **)(lVar6 + 8))(uVar8,uVar13);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar1 = *(long *)(unaff_x22 + 0xe0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar2 = *(long *)(unaff_x22 + 0xd8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar6 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  *(undefined8 *)(lVar6 + 0x38) = uVar11;
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x0001000a9d90(lVar6 + 0x20);
  pcVar14 = *(code **)(lVar2 + 0x10);
  (*pcVar14)();
  puVar4 = PTR_PTR_1126aeb08;
  func_0x000107c610f8(PTR_PTR_1126aeb08);
  lVar7 = lVar6;
  func_0x000107c5fc48(lVar6,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61574(lVar6);
  func_0x000107c4555c(puVar4);
  func_0x000107c61170(lVar7);
  (*pcVar14)(uVar16,uVar5,uVar11);
  uVar10 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar15 = uVar10 + 0x30 & (uVar10 ^ 0xffffffffffffffff);
  puVar3 = &UNK_1105e5310;
  func_0x000107c613fc(&UNK_1105e5310,uVar15 + lVar1,uVar10 | 7);
  *(undefined8 *)(puVar3 + 0x18) = uVar20;
  *(undefined8 *)(puVar3 + 0x10) = uVar19;
  *(undefined8 *)(puVar3 + 0x28) = uVar18;
  *(undefined8 *)(puVar3 + 0x20) = uVar17;
  (**(code **)(lVar2 + 0x20))(puVar3 + uVar15,uVar16,uVar11);
  *(code **)(unaff_x22 + 0x30) = FUN_102ed2590;
  *(undefined **)(unaff_x22 + 0x38) = puVar3;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_1014fada0;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1105e5328;
  lVar6 = unaff_x22 + 0x10;
  func_0x000107c60bc4(lVar6);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61174(puVar4);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar9);
  func_0x000107c61574(uVar16);
  func_0x000107c5363c(puVar4);
  func_0x000107c60bd0(lVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c3e2c0(uVar8);
  func_0x000107c61170(puVar4);
  pcVar14 = *(code **)(lVar2 + 8);
  (*pcVar14)(uVar5,uVar11);
  (*pcVar14)(uVar12,uVar11);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar12 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000102eca8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eca900; end: 102ecaac7;  */

/* WARNING: Possible PIC construction at 0x000102ecab78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ecabd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ecab7c) */
/* WARNING: Removing unreachable block (ram,0x000102ecabd8) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_102eca900(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long in_x3;
  undefined **ppuVar6;
  code *in_x4;
  code *pcVar7;
  undefined8 in_x5;
  code *in_x6;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (in_x3 == 0) {
    (*in_x6)();
  }
  else {
    puStack_60 = (undefined *)0x0;
    uStack_58 = 0xe000000000000000;
    pcVar7 = in_x4;
    func_0x000107c614b0(in_x3);
    func_0x000107c602fc(0x29);
    func_0x000107c6142c(uStack_58);
    puStack_60 = (undefined *)0xd000000000000027;
    uStack_58 = 0x800000010f113970;
    func_0x000107c614cc(in_x3,auStack_68,auStack_80);
    uVar4 = uStack_70;
    func_0x000107c60640(uStack_78,uStack_70);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    uVar4 = uStack_58;
    (*in_x4)(puStack_60,uStack_58);
    func_0x000107c6142c(uVar4);
    func_0x000107c614ac(in_x3);
    in_x4 = pcVar7;
  }
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ed90();
  puStack_60 = (undefined *)0x0;
  ppuVar6 = &puStack_60;
  puVar3 = puVar1;
  puVar5 = puVar2;
  func_0x000107c4ff50();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  puVar1 = puStack_60;
  if ((int)puVar3 == 0) {
    puVar2 = puStack_60;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(puVar2);
    func_0x000107c61654();
    func_0x000107c614ac(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
  }
  else {
    puVar3 = puStack_60;
    puVar1 = puVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto code_r0x000107c61174;
  }
  func_0x000107c60e78();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(puVar5);
  func_0x000107c5faec(ppuVar6);
  puVar2 = &UNK_1105e5270;
  func_0x000107c613fc(&UNK_1105e5270,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = in_x5;
  puVar2 = &UNK_1105e5298;
  func_0x000107c613fc(&UNK_1105e5298,0x18,7);
  *(code **)(puVar2 + 0x10) = in_x6;
  func_0x000107c615f0(in_x4);
  puVar3 = puVar1;
code_r0x000107c61174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(puVar3);
  return;
}



/* Entry: 102ecaac8; end: 102ecabfb; -[_TtC24SCSnapDocSaveServiceImpl22SnapDocSaveServiceImpl exportTemplateWithJsonString:fileName:deckFactory:onComplete:onError:] */

/* WARNING: Possible PIC construction at 0x000102ecabd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ecabd8) */

void FUN_102ecaac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  uVar3 = param_2;
  func_0x000107c5faec(param_4);
  puVar1 = &UNK_1105e5270;
  func_0x000107c613fc(&UNK_1105e5270,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  puVar2 = &UNK_1105e5298;
  func_0x000107c613fc(&UNK_1105e5298,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_102eca1f0(param_3,param_2,param_4,uVar3,param_5,FUN_102ed2474,puVar1,0x102ed2480,puVar2);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102ecabfc; end: 102ecac13;  */

void FUN_102ecabfc(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_1;
  *(undefined8 *)(unaff_x22 + 0x168) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecac14,0,0);
  return;
}



/* Entry: 102ecac14; end: 102ecacbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ecac14(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x168) + _DAT_112f27748);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x170) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ecac74;
  plVar1[5] = unaff_x22 + 0x130;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ecacbc; end: 102ecad33;  */

void FUN_102ecacbc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar3 = *(long *)(unaff_x22 + 0x150);
  func_0x0001000a8868(unaff_x22 + 0x130,uVar2);
  piVar5 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x178) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ecad34;
                    /* WARNING: Could not recover jumptable at 0x000102ecad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}



/* Entry: 102ecad34; end: 102ecaedf;  */

void FUN_102ecad34(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x198) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x178));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102ecad84,0,0);
  return;
}



/* Entry: 102ecaee0; end: 102ecaf53;  */

void FUN_102ecaee0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x188));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(lVar3 + 400) = plVar1;
  func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_102ecaf54;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 102ecaf54; end: 102ecafd7;  */

void FUN_102ecaf54(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102ecaf9c,0,0);
  return;
}



/* Entry: 102ecafd8; end: 102ecafff;  */

void FUN_102ecafd8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102ecafe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ecb000; end: 102ecb3b3;  */

void FUN_102ecb000(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long unaff_x22;
  long lVar18;
  ulong uVar19;
  
  lVar14 = *(long *)(*(long *)(unaff_x22 + 0x78) + 0x10);
  if (lVar14 != 0) {
    uVar13 = **(undefined8 **)(unaff_x22 + 0x70);
    puVar15 = (undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x38);
    do {
      lVar5 = 0x112d453c8;
      uVar17 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar9 = puVar15[-3];
      uVar2 = puVar15[-2];
      uVar1 = puVar15[-1];
      uVar8 = *puVar15;
      func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
      uVar7 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
      uVar4 = uVar7 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      lVar5 = 0;
      func_0x000107c5fd0c();
      lVar18 = *(long *)(lVar5 + -8);
      (**(code **)(lVar18 + 0x38))(uVar4,1,1,lVar5);
      puVar6 = &UNK_1105e50e0;
      func_0x000107c613fc(&UNK_1105e50e0,0x48,7);
      *(long *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x18) = 0;
      *(undefined8 *)(puVar6 + 0x20) = uVar17;
      *(ulong *)(puVar6 + 0x28) = uVar9;
      *(undefined8 *)(puVar6 + 0x30) = uVar2;
      *(undefined8 *)(puVar6 + 0x38) = uVar1;
      *(undefined8 *)(puVar6 + 0x40) = uVar8;
      uVar7 = uVar7 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      func_0x0001000abe04(uVar4,uVar7);
      uVar19 = uVar7;
      (**(code **)(lVar18 + 0x30))(uVar7,1,lVar5);
      func_0x000107c61174();
      func_0x000107c61174(uVar9);
      func_0x000107c61438(uVar1,2);
      func_0x000107c61174();
      func_0x000107c61174(uVar17);
      func_0x000107c61174(uVar9);
      if ((int)uVar19 == 1) {
        func_0x000102ed1e70(uVar7,0x112d453c8,&UNK_10d90ac60);
        uVar19 = 0x3100;
      }
      else {
        uVar19 = uVar9;
        func_0x000107c5fd08();
        (**(code **)(lVar18 + 8))(uVar7,lVar5);
        uVar19 = uVar19 & 0xff | 0x3100;
      }
      func_0x000107c615c0(uVar7);
      lVar5 = *(long *)(puVar6 + 0x10);
      if (lVar5 == 0) {
        lVar18 = 0;
        lVar16 = 0;
      }
      else {
        lVar16 = *(long *)(puVar6 + 0x18);
        lVar18 = lVar5;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar5);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar5);
      }
      puVar10 = &UNK_1105e5108;
      func_0x000107c613fc(&UNK_1105e5108,0x20,7);
      *(undefined **)(puVar10 + 0x10) = &UNK_10db63100;
      *(undefined **)(puVar10 + 0x18) = puVar6;
      func_0x000107c6157c(puVar6);
      if (lVar16 == 0 && lVar18 == 0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        *(undefined8 *)(unaff_x22 + 0x40) = 0;
        *(long *)(unaff_x22 + 0x48) = lVar18;
        *(long *)(unaff_x22 + 0x50) = lVar16;
        puVar12 = (undefined8 *)(unaff_x22 + 0x38);
      }
      puVar15 = puVar15 + 4;
      *(undefined8 *)(unaff_x22 + 0x58) = 1;
      *(undefined8 **)(unaff_x22 + 0x60) = puVar12;
      *(undefined8 *)(unaff_x22 + 0x68) = uVar13;
      func_0x000107c615bc(uVar19,unaff_x22 + 0x58,PTR___sytN_11034f1b0 + 8,&UNK_10db63108,puVar10);
      func_0x000107c61170(uVar8);
      func_0x000107c6142c(uVar1);
      func_0x000107c61574(puVar6);
      func_0x000107c61170(uVar9);
      func_0x000107c61574(uVar19);
      func_0x000102ed1e70(uVar4,0x112d453c8,&UNK_10d90ac60);
      func_0x000107c615c0(uVar4);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  iVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar3 != 0) {
    plVar11 = (long *)(ulong)*(uint *)(
                                      PTR___sScG22awaitAllRemainingTasks9isolationyScA_pSgYi_tYaFTu_11034fbd0
                                      + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x88) = plVar11;
    uVar13 = 0x112dc6b70;
    func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_102ecb3b4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG22awaitAllRemainingTasks9isolationyScA_pSgYi_tYaF_11034fbc8)(0,0,uVar13);
    return;
  }
  uVar13 = **(undefined8 **)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0xa0,uVar13,FUN_102ecb3f0,unaff_x22 + 0x10);
  return;
}



/* Entry: 102ecb3b4; end: 102ecb3ef;  */

void FUN_102ecb3b4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000102ecb3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ecb3f0; end: 102ecb477;  */

void FUN_102ecb3f0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    uVar1 = 0x102ecb418;
  }
  else {
    *(long *)(unaff_x22 + 0x98) = unaff_x20;
    uVar1 = 0x102ecb444;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 102ecb478; end: 102ecb53f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ecb478(void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x40);
  FUN_102ed1de0();
  if ((uVar1 & 1) != 0) {
    plVar4 = *(long **)(*(long *)(unaff_x22 + 0x38) + _DAT_112f27730);
    plVar2 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x102ecb4f8;
    plVar2[5] = unaff_x22 + 0x10;
    plVar2[6] = (long)plVar4;
    lVar5 = *(long *)(*plVar4 + 0x50);
    plVar2[7] = lVar5;
    lVar3 = 0;
    __sSqMa(0,lVar5);
    plVar2[8] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    plVar2[9] = lVar3;
    uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[10] = uVar1;
    lVar3 = *(long *)(lVar5 + -8);
    plVar2[0xb] = lVar3;
    uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[0xc] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102ecb4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ecb540; end: 102ecb5bf;  */

void FUN_102ecb540(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ecb5c0;
                    /* WARNING: Could not recover jumptable at 0x000102ecb5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x40),uVar2,lVar3);
  return;
}



/* Entry: 102ecb5c0; end: 102ecb687;  */

void FUN_102ecb5c0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    uVar1 = 0x102ecb61c;
  }
  else {
    uVar1 = 0x102ecb64c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 102ecb688; end: 102ecb6a7;  */

void FUN_102ecb688(undefined8 param_1,undefined2 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1d0) = unaff_x20;
  *(undefined2 *)(unaff_x22 + 0x1aa) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecb6a8,0,0);
  return;
}



/* Entry: 102ecb6a8; end: 102ecb74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ecb6a8(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x1d0) + _DAT_112f27748);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1d8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ecb708;
  plVar1[5] = unaff_x22 + 0x140;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ecb750; end: 102ecb7db;  */

void FUN_102ecb750(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar4 = *(ushort *)(unaff_x22 + 0x1aa);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  lVar3 = *(long *)(unaff_x22 + 0x160);
  func_0x0001000a8868(unaff_x22 + 0x140,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1e0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102ecb7dc;
                    /* WARNING: Could not recover jumptable at 0x000102ecb7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,uVar4 & 0x101,*(undefined8 *)(unaff_x22 + 0x1c8),uVar2,lVar3);
  return;
}



/* Entry: 102ecb7dc; end: 102ecb83b;  */

void FUN_102ecb7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x1e8) = param_2;
  *(undefined8 *)(lVar2 + 0x1f0) = param_3;
  *(long *)(lVar2 + 0x1f8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1e0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ecb83c;
  }
  else {
    pcVar1 = FUN_102ecc204;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ecb83c; end: 102ecbd77;  */

void FUN_102ecb83c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long unaff_x22;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  
  lVar18 = *(long *)(unaff_x22 + 0x1f0);
  func_0x0001000834e4(unaff_x22 + 0x140);
  if (lVar18 == 3) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar15 = (uint)*(undefined8 *)(unaff_x22 + 0x1c8);
    uVar5 = (ulong)(*(ushort *)(unaff_x22 + 0x1aa) & 0x1010101);
    FUN_102ed1eb0();
    *(ulong *)(unaff_x22 + 0x200) = uVar5;
    *(char *)(unaff_x22 + 0x1a9) = (char)uVar15;
    if ((uVar15 & 0xff) != 1) {
      *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x1c0);
      *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x1d0);
      *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x1e8);
      *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x1f0);
      iVar4 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar4 != 0) {
        uVar7 = 0x112f27330;
        func_0x0001000285a8(0x112f27330,&UNK_10db629d0);
        uVar13 = 0x112f276f8;
        func_0x0001000285a8(0x112f276f8,&UNK_10db62e10);
        plVar6 = (long *)(ulong)*(uint *)(
                                         PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                         + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x208) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_102ecbd78;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
        )(plVar6,unaff_x22 + 0x1b0,uVar7,uVar13,0,0,&UNK_10db63130,unaff_x22 + 0x110,uVar7,uVar13);
        return;
      }
      lVar18 = unaff_x22 + 0x10;
      lVar19 = *(long *)(unaff_x22 + 0x1c0);
      uVar7 = 0x112f27330;
      func_0x0001000285a8(0x112f27330,&UNK_10db629d0);
      func_0x000107c615ac(lVar18);
      *(long *)(unaff_x22 + 0x1b8) = lVar18;
      lVar19 = *(long *)(lVar19 + 0x10);
      if (lVar19 != 0) {
        puVar21 = (undefined8 *)(*(long *)(unaff_x22 + 0x1c0) + 0x38);
        do {
          lVar9 = 0x112d453c8;
          uVar23 = *(ulong *)(unaff_x22 + 0x1e8);
          uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x1d0);
          uVar13 = puVar21[-3];
          uVar3 = puVar21[-2];
          uVar1 = puVar21[-1];
          uVar12 = *puVar21;
          func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
          uVar5 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xf;
          uVar8 = uVar5 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          lVar9 = 0;
          func_0x000107c5fd0c();
          lVar22 = *(long *)(lVar9 + -8);
          (**(code **)(lVar22 + 0x38))(uVar8,1,1,lVar9);
          puVar10 = &UNK_1105e5130;
          func_0x000107c613fc(&UNK_1105e5130,0x58,7);
          *(long *)(puVar10 + 0x10) = 0;
          *(undefined8 *)(puVar10 + 0x18) = 0;
          *(undefined8 *)(puVar10 + 0x20) = uVar17;
          *(undefined8 *)(puVar10 + 0x28) = uVar13;
          *(undefined8 *)(puVar10 + 0x30) = uVar3;
          *(undefined8 *)(puVar10 + 0x38) = uVar1;
          *(undefined8 *)(puVar10 + 0x40) = uVar12;
          *(ulong *)(puVar10 + 0x48) = uVar23;
          *(undefined8 *)(puVar10 + 0x50) = uVar2;
          uVar5 = uVar5 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          func_0x0001000abe04(uVar8,uVar5);
          uVar11 = uVar5;
          (**(code **)(lVar22 + 0x30))(uVar5,1,lVar9);
          func_0x000107c61174(uVar12);
          func_0x000107c61174();
          func_0x000107c61438(uVar1,2);
          func_0x000107c61174(uVar12);
          func_0x000107c61174(uVar17);
          func_0x000107c61174();
          FUN_102ed209c(uVar23,uVar2);
          if ((int)uVar11 == 1) {
            func_0x000102ed1e70(uVar5,0x112d453c8,&UNK_10d90ac60);
            uVar23 = 0x3100;
          }
          else {
            func_0x000107c5fd08();
            (**(code **)(lVar22 + 8))(uVar5,lVar9);
            uVar23 = uVar23 & 0xff | 0x3100;
          }
          func_0x000107c615c0(uVar5);
          lVar9 = *(long *)(puVar10 + 0x10);
          if (lVar9 == 0) {
            lVar22 = 0;
            lVar20 = 0;
          }
          else {
            lVar20 = *(long *)(puVar10 + 0x18);
            lVar22 = lVar9;
            func_0x000107c614f0();
            func_0x000107c615f0(lVar9);
            func_0x000107c5fca8();
            func_0x000107c615e8(lVar9);
          }
          puVar14 = &UNK_1105e5158;
          func_0x000107c613fc(&UNK_1105e5158,0x20,7);
          *(undefined **)(puVar14 + 0x10) = &UNK_10db63150;
          *(undefined **)(puVar14 + 0x18) = puVar10;
          func_0x000107c6157c(puVar10);
          if (lVar20 == 0 && lVar22 == 0) {
            puVar16 = (undefined8 *)0x0;
          }
          else {
            *(undefined8 *)(unaff_x22 + 0x168) = 0;
            *(undefined8 *)(unaff_x22 + 0x170) = 0;
            *(long *)(unaff_x22 + 0x178) = lVar22;
            *(long *)(unaff_x22 + 0x180) = lVar20;
            puVar16 = (undefined8 *)(unaff_x22 + 0x168);
          }
          puVar21 = puVar21 + 4;
          *(undefined8 *)(unaff_x22 + 0x188) = 1;
          *(undefined8 **)(unaff_x22 + 400) = puVar16;
          *(long *)(unaff_x22 + 0x198) = lVar18;
          func_0x000107c615bc(uVar23,unaff_x22 + 0x188,uVar7,&UNK_10db63158,puVar14);
          func_0x000107c61170(uVar12);
          func_0x000107c6142c(uVar1);
          func_0x000107c61574(puVar10);
          func_0x000107c61170(uVar13);
          func_0x000107c61574(uVar23);
          func_0x000102ed1e70(uVar8,0x112d453c8,&UNK_10d90ac60);
          func_0x000107c615c0(uVar8);
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      lVar19 = 0x112f27968;
      func_0x0001000285a8(0x112f27968,&UNK_10db63160);
      *(long *)(unaff_x22 + 0x210) = lVar19;
      lVar9 = *(long *)(lVar19 + -8);
      *(long *)(unaff_x22 + 0x218) = lVar9;
      uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0x220) = uVar5;
      func_0x000107c5fcc4(uVar5,lVar18,uVar7);
      uVar7 = 0x112f27970;
      FUN_102ed2c2c(0x112f27970,0x112f27968,&UNK_10db63160,PTR___sScG8IteratorVyx_GScIsMc_11034fc18)
      ;
      plVar6 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x228) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_102ecbdd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar6,unaff_x22 + 0x1a0,lVar19,uVar7)
      ;
      return;
    }
    FUN_102ed212c();
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102ecb8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102ecbd78; end: 102ecbdcf;  */

void FUN_102ecbd78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x1e8);
  uVar2 = *(undefined8 *)(lVar3 + 0x1f0);
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x208));
  FUN_102ed212c(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecc144,0,0);
  return;
}



/* Entry: 102ecbdd0; end: 102ecbe6b;  */

void FUN_102ecbdd0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x228));
  if (unaff_x20 == 0) {
    *(undefined **)(lVar3 + 0x230) = PTR___swiftEmptyArrayStorage_11034f1c8;
    pcVar1 = FUN_102ecbe6c;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x220);
    lVar5 = *(long *)(lVar3 + 0x218);
    uVar4 = *(undefined8 *)(lVar3 + 0x210);
    func_0x000107c614ac();
    (**(code **)(lVar5 + 8))(uVar2,uVar4);
    func_0x000107c6142c(PTR___swiftEmptyArrayStorage_11034f1c8);
    pcVar1 = FUN_102ecc00c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ecbe6c; end: 102ecc00b;  */

void FUN_102ecbe6c(void)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x22;
  
  cVar2 = *(char *)(unaff_x22 + 0x1a8);
  if (cVar2 != -1) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar7 = *(ulong *)(unaff_x22 + 0x230);
    FUN_102ec660c(uVar5,cVar2);
    func_0x000107c61558();
    uVar4 = *(ulong *)(unaff_x22 + 0x230);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)(uVar4 + 0x10);
      uVar4 = 0;
      func_0x000102ec55e8(0,*plVar3 + 1,1);
    }
    uVar7 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar7) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x000102ec55e8(uVar4,uVar7 + 1,1);
    }
    *(ulong *)(unaff_x22 + 0x238) = uVar4;
    *(ulong *)(uVar4 + 0x10) = uVar7 + 1;
    lVar1 = uVar4 + uVar7 * 0x10;
    *(undefined8 *)(lVar1 + 0x20) = uVar5;
    *(char *)(lVar1 + 0x28) = cVar2;
    func_0x000102ed2160(uVar5,cVar2);
    uVar5 = 0x112f27970;
    FUN_102ed2c2c(0x112f27970,0x112f27968,&UNK_10db63160,PTR___sScG8IteratorVyx_GScIsMc_11034fc18);
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x240) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102ecc014;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
              (plVar3,unaff_x22 + 0x1a0,*(undefined8 *)(unaff_x22 + 0x210),uVar5);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x220);
  (**(code **)(*(long *)(unaff_x22 + 0x218) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x210));
  func_0x000107c615c0(uVar6);
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar5;
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x248) = plVar3;
  func_0x0001000285a8(0x112f27978,&UNK_10db63168);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102ecc0b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 102ecc00c; end: 102ecc013;  */

void FUN_102ecc00c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_dealloc_1103500f0)(*(undefined8 *)(unaff_x22 + 0x220));
  return;
}



/* Entry: 102ecc014; end: 102ecc0af;  */

void FUN_102ecc014(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x240));
  uVar2 = *(undefined8 *)(lVar4 + 0x238);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x230) = uVar2;
    pcVar1 = FUN_102ecbe6c;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x220);
    lVar6 = *(long *)(lVar4 + 0x218);
    uVar5 = *(undefined8 *)(lVar4 + 0x210);
    func_0x000107c614ac();
    (**(code **)(lVar6 + 8))(uVar3,uVar5);
    func_0x000107c6142c(uVar2);
    pcVar1 = FUN_102ecc00c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ecc0b0; end: 102ecc0f7;  */

void FUN_102ecc0b0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x248));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecc0f8,0,0);
  return;
}



/* Entry: 102ecc0f8; end: 102ecc143;  */

void FUN_102ecc0f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c615a8(unaff_x22 + 0x10);
  FUN_102ed212c(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecc144,0,0);
  return;
}



/* Entry: 102ecc144; end: 102ecc203;  */

void FUN_102ecc144(void)

{
  undefined1 uVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x1b0);
  lVar3 = *(long *)(lVar6 + 0x10) + 1;
  pcVar2 = (char *)(lVar6 + 0x28);
  do {
    pcVar4 = pcVar2;
    lVar3 = lVar3 + -1;
    if (lVar3 == 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x1a9);
      func_0x000107c6142c(lVar6);
      func_0x000100fc38ac(uVar5,uVar1);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_102ecc1ec;
    }
    pcVar2 = pcVar4 + 0x10;
  } while (*pcVar4 != '\x01');
  uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar7 = *(undefined8 *)(pcVar4 + -8);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x1a9);
  func_0x000107c61654();
  func_0x000107c614b0(uVar7);
  func_0x000100fc38ac(uVar5,uVar1);
  func_0x000107c6142c(lVar6);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_102ecc1ec:
                    /* WARNING: Could not recover jumptable at 0x000102ecc200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102ecc204; end: 102ecc2e3;  */

void FUN_102ecc204(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x140);
                    /* WARNING: Could not recover jumptable at 0x000102ecc234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ecc2e4; end: 102ecc677;  */

void FUN_102ecc2e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  
  lVar15 = *(long *)(unaff_x22 + 0x68);
  lVar12 = *(long *)(lVar15 + 0x10);
  if (lVar12 != 0) {
    uVar9 = **(undefined8 **)(unaff_x22 + 0x60);
    lVar4 = 0;
    func_0x000107c5fd0c();
    puVar22 = (undefined8 *)(lVar15 + 0x38);
    lVar15 = *(long *)(lVar4 + -8);
    pcVar11 = *(code **)(lVar15 + 0x38);
    do {
      uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar21 = *(ulong *)(unaff_x22 + 0x78);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar18 = puVar22[-3];
      uVar3 = puVar22[-2];
      uVar1 = puVar22[-1];
      uVar6 = *puVar22;
      (*pcVar11)(uVar16,1,1,lVar4);
      puVar5 = &UNK_1105e5180;
      func_0x000107c613fc(&UNK_1105e5180,0x58,7);
      *(long *)(puVar5 + 0x10) = 0;
      *(undefined8 *)(puVar5 + 0x18) = 0;
      *(undefined8 *)(puVar5 + 0x20) = uVar19;
      *(undefined8 *)(puVar5 + 0x28) = uVar18;
      *(undefined8 *)(puVar5 + 0x30) = uVar3;
      *(undefined8 *)(puVar5 + 0x38) = uVar1;
      *(undefined8 *)(puVar5 + 0x40) = uVar6;
      *(ulong *)(puVar5 + 0x48) = uVar21;
      *(undefined8 *)(puVar5 + 0x50) = uVar2;
      func_0x0001000abe04(uVar16,uVar14);
      (**(code **)(lVar15 + 0x30))(uVar14,1,lVar4);
      func_0x000107c61174(uVar6);
      func_0x000107c61174();
      func_0x000107c61438(uVar1,2);
      func_0x000107c61174(uVar6);
      func_0x000107c61174(uVar19);
      func_0x000107c61174();
      func_0x000102ed20ac(uVar21,uVar2);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
      if ((int)uVar14 == 1) {
        func_0x000102ed1e70(uVar16,0x112d453c8,&UNK_10d90ac60);
        uVar21 = 0x3100;
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar15 + 8))(uVar16,lVar4);
        uVar21 = uVar21 & 0xff | 0x3100;
      }
      lVar17 = *(long *)(puVar5 + 0x10);
      if (lVar17 == 0) {
        lVar20 = 0;
        lVar13 = 0;
      }
      else {
        lVar13 = *(long *)(puVar5 + 0x18);
        lVar20 = lVar17;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar17);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar17);
      }
      puVar7 = &UNK_1105e51a8;
      func_0x000107c613fc(&UNK_1105e51a8,0x20,7);
      *(undefined **)(puVar7 + 0x10) = &UNK_10db63188;
      *(undefined **)(puVar7 + 0x18) = puVar5;
      func_0x000107c6157c(puVar5);
      uVar14 = 0x112f27330;
      func_0x0001000285a8(0x112f27330,&UNK_10db629d0);
      puVar10 = (undefined8 *)0x0;
      if (lVar13 != 0 || lVar20 != 0) {
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        *(undefined8 *)(unaff_x22 + 0x18) = 0;
        *(long *)(unaff_x22 + 0x20) = lVar20;
        *(long *)(unaff_x22 + 0x28) = lVar13;
        puVar10 = (undefined8 *)(unaff_x22 + 0x10);
      }
      puVar22 = puVar22 + 4;
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
      *(undefined8 *)(unaff_x22 + 0x30) = 1;
      *(undefined8 **)(unaff_x22 + 0x38) = puVar10;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
      func_0x000107c615bc(uVar21,unaff_x22 + 0x30,uVar14,&UNK_10db63190,puVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(uVar1);
      func_0x000107c61574(puVar5);
      func_0x000107c61170(uVar18);
      func_0x000107c61574(uVar21);
      func_0x000102ed1e70(uVar16,0x112d453c8,&UNK_10d90ac60);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar14 = **(undefined8 **)(unaff_x22 + 0x60);
  uVar9 = 0x112f27330;
  func_0x0001000285a8(0x112f27330,&UNK_10db629d0);
  func_0x000107c5fcc4(uVar18,uVar14,uVar9);
  uVar9 = 0x112f27970;
  FUN_102ed2c2c(0x112f27970,0x112f27968,&UNK_10db63160,PTR___sScG8IteratorVyx_GScIsMc_11034fc18);
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_102ecc678;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar8,unaff_x22 + 0x48,*(undefined8 *)(unaff_x22 + 0x88),uVar9);
  return;
}



/* Entry: 102ecc678; end: 102ecc70f;  */

void FUN_102ecc678(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xb0));
  if (unaff_x20 == 0) {
    *(undefined **)(lVar4 + 0xb8) = PTR___swiftEmptyArrayStorage_11034f1c8;
    pcVar3 = FUN_102ecc710;
  }
  else {
    lVar1 = *(long *)(lVar4 + 0x90);
    uVar2 = *(undefined8 *)(lVar4 + 0x98);
    uVar5 = *(undefined8 *)(lVar4 + 0x88);
    func_0x000107c614ac();
    (**(code **)(lVar1 + 8))(uVar2,uVar5);
    func_0x000107c6142c(PTR___swiftEmptyArrayStorage_11034f1c8);
    pcVar3 = FUN_102ecc894;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 102ecc710; end: 102ecc893;  */

void FUN_102ecc710(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  ulong uVar8;
  ulong *puVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  cVar4 = *(char *)(unaff_x22 + 0x50);
  uVar8 = *(ulong *)(unaff_x22 + 0xb8);
  if (cVar4 != -1) {
    FUN_102ec660c(uVar7,cVar4);
    func_0x000107c61558();
    uVar6 = *(ulong *)(unaff_x22 + 0xb8);
    if ((uVar8 & 1) == 0) {
      plVar5 = (long *)(uVar6 + 0x10);
      uVar6 = 0;
      func_0x000102ec55e8(0,*plVar5 + 1,1);
    }
    uVar8 = *(ulong *)(uVar6 + 0x10);
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar8) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      func_0x000102ec55e8(uVar6,uVar8 + 1,1);
    }
    *(ulong *)(unaff_x22 + 0xc0) = uVar6;
    *(ulong *)(uVar6 + 0x10) = uVar8 + 1;
    lVar1 = uVar6 + uVar8 * 0x10;
    *(undefined8 *)(lVar1 + 0x20) = uVar7;
    *(char *)(lVar1 + 0x28) = cVar4;
    func_0x000102ed2160(uVar7,cVar4);
    uVar7 = 0x112f27970;
    FUN_102ed2c2c(0x112f27970,0x112f27968,&UNK_10db63160,PTR___sScG8IteratorVyx_GScIsMc_11034fc18);
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 200) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_102ecc898;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
              (plVar5,(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x88),uVar7);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  puVar9 = *(ulong **)(unaff_x22 + 0x58);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x88));
  *puVar9 = uVar8;
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102ecc858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ecc894; end: 102ecc897;  */

void FUN_102ecc894(void)

{
  return;
}



/* Entry: 102ecc898; end: 102ecc92f;  */

void FUN_102ecc898(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 200));
  uVar4 = *(undefined8 *)(lVar5 + 0xc0);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar5 + 0xb8) = uVar4;
    pcVar3 = FUN_102ecc710;
  }
  else {
    lVar1 = *(long *)(lVar5 + 0x90);
    uVar2 = *(undefined8 *)(lVar5 + 0x98);
    uVar6 = *(undefined8 *)(lVar5 + 0x88);
    func_0x000107c614ac();
    (**(code **)(lVar1 + 8))(uVar2,uVar6);
    func_0x000107c6142c(uVar4);
    pcVar3 = FUN_102ecc894;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 102ecc930; end: 102ecc9c3;  */

void FUN_102ecc930(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,long param_7,long param_8,long param_9,long param_10)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102ecc9c4;
  plVar1[0x1c] = param_10;
  plVar1[0x1d] = param_4;
  plVar1[0x1a] = param_8;
  plVar1[0x1b] = param_9;
  plVar1[0x18] = param_6;
  plVar1[0x19] = param_7;
  plVar1[0x17] = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecca88,0,0);
  return;
}



/* Entry: 102ecc9c4; end: 102ecca2f;  */

void FUN_102ecc9c4(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x20) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x28) = param_1;
    pcVar1 = FUN_102ecca30;
  }
  else {
    pcVar1 = (code *)0x102ecca48;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ecca30; end: 102ecca87;  */

void FUN_102ecca30(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  *puVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x000102ecca44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ecca88; end: 102eccc4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ecca88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long unaff_x22;
  undefined *puVar15;
  
  puVar15 = *(undefined **)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(*(long *)(unaff_x22 + 0xe8) + _DAT_112f27718);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar8 = *(long *)(unaff_x22 + 0x30);
  uVar10 = uVar1;
  func_0x0001000a8868();
  FUN_102eced50();
  if (puVar15 == (undefined *)0x0) {
    func_0x0001008e4748();
    func_0x000107c61180();
    puVar4 = puVar15;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    func_0x000107c61170(puVar15);
    puVar15 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar15 = PTR_PTR_1126d9630;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
  }
  lVar12 = *(long *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  lVar5 = 0;
  func_0x000107c5eec8();
  lVar14 = *(long *)(lVar5 + -8);
  uVar6 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar6);
  uVar9 = uVar6;
  func_0x000107c5eec4(uVar6);
  func_0x000107c5eeac();
  (**(code **)(lVar14 + 8))(uVar6,lVar5);
  uVar11 = 1;
  puVar4 = puVar15;
  (**(code **)(lVar8 + 8))(puVar15,1,0,uVar2,uVar3,1,0,uVar9,uVar10,uVar1,lVar8);
  func_0x000107c6142c(uVar10);
  func_0x000107c61170(puVar15);
  *(undefined **)(unaff_x22 + 0xf8) = puVar4;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar11;
  func_0x000107c615c0(uVar6);
  func_0x0001000834e4(unaff_x22 + 0x10);
  plVar13 = *(long **)(lVar12 + _DAT_112f27738);
  plVar7 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102eccc50;
  plVar7[5] = unaff_x22 + 0x38;
  plVar7[6] = (long)plVar13;
  lVar5 = *(long *)(*plVar13 + 0x50);
  plVar7[7] = lVar5;
  lVar8 = 0;
  __sSqMa(0,lVar5);
  plVar7[8] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar7[9] = lVar8;
  uVar9 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[10] = uVar9;
  lVar8 = *(long *)(lVar5 + -8);
  plVar7[0xb] = lVar8;
  uVar9 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0xc] = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102eccc50; end: 102eccc97;  */

void FUN_102eccc50(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eccc98,0,0);
  return;
}



/* Entry: 102eccc98; end: 102eccd3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eccc98(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x22;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar1);
  (**(code **)(lVar3 + 8))(uVar5,uVar1,lVar3);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar5;
  func_0x0001000834e4(unaff_x22 + 0x38);
  plVar6 = *(long **)(lVar7 + _DAT_112f27730);
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x118) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102eccd3c;
  plVar2[5] = unaff_x22 + 0x60;
  plVar2[6] = (long)plVar6;
  lVar7 = *(long *)(*plVar6 + 0x50);
  plVar2[7] = lVar7;
  lVar3 = 0;
  __sSqMa(0,lVar7);
  plVar2[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[10] = uVar4;
  lVar3 = *(long *)(lVar7 + -8);
  plVar2[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102eccd3c; end: 102eccd83;  */

void FUN_102eccd3c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eccd84,0,0);
  return;
}



/* Entry: 102eccd84; end: 102ecce1b;  */

void FUN_102eccd84(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x120) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ecce1c;
                    /* WARNING: Could not recover jumptable at 0x000102ecce18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0x100),
             *(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xc0),
             *(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xd8),
             *(undefined8 *)(unaff_x22 + 0xe0),0,0,0,0,uVar2,lVar3);
  return;
}



/* Entry: 102ecce1c; end: 102ecce87;  */

void FUN_102ecce1c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x128) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x120));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x130) = param_1;
    pcVar1 = FUN_102ecce88;
  }
  else {
    pcVar1 = FUN_102ecd00c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ecce88; end: 102ecd00b;  */

void FUN_102ecce88(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x0001000834e4(unaff_x22 + 0x60);
  lVar2 = *(long *)(unaff_x22 + 0x128);
  uVar4 = *(ulong *)(unaff_x22 + 0x130);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61174(uVar11);
  func_0x0001000d224c(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x0001000a8868(unaff_x22 + 0x88,uVar11);
  uVar1 = uVar4;
  if (lVar2 != 0) {
    uVar1 = uVar4 | 0x8000000000000000;
  }
  FUN_102ec660c(uVar4,0);
  FUN_102eb4f10(uVar9,uVar5,uVar1,uVar12,uVar10,0,uVar3,uVar6,uVar11,uVar7);
  func_0x000102ec67e4(uVar4,0);
  func_0x000107c6142c(uVar5);
  func_0x0001000834e4(unaff_x22 + 0x88);
  if (lVar2 != 0) {
    *(ulong *)(unaff_x22 + 0xb0) = uVar4;
    iVar8 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar8 != 0) {
      uVar9 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0xb0,uVar9,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000102ec67e4(uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x000102eccfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000102ec67e4(uVar4,0);
                    /* WARNING: Could not recover jumptable at 0x000102ecd008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 102ecd00c; end: 102ecd18b;  */

void FUN_102ecd00c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x0001000834e4(unaff_x22 + 0x60);
  func_0x000107c614b0(uVar10);
  uVar9 = *(ulong *)(unaff_x22 + 0x128);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x0001000d224c(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x0001000a8868(unaff_x22 + 0x88,uVar3);
  uVar1 = 0;
  if (uVar9 != 0) {
    uVar1 = uVar9 | 0x8000000000000000;
  }
  FUN_102ec660c(uVar9,1);
  FUN_102eb4f10(uVar10,uVar4,uVar1,uVar11,uVar8,0,uVar2,uVar5,uVar3,uVar6);
  func_0x000102ec67e4(uVar9,1);
  func_0x000107c6142c(uVar4);
  func_0x0001000834e4(unaff_x22 + 0x88);
  if (uVar9 != 0) {
    *(ulong *)(unaff_x22 + 0xb0) = uVar9;
    iVar7 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar7 != 0) {
      uVar10 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0xb0,uVar10,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000102ec67e4(uVar9,1);
                    /* WARNING: Could not recover jumptable at 0x000102ecd150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000102ec67e4(0,0);
                    /* WARNING: Could not recover jumptable at 0x000102ecd188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102ecd18c; end: 102ecd1cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ecd18c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f27788;
  func_0x000107c61428(unaff_x20 + _DAT_112f27788,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 102ecd1d0; end: 102ecd31b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ecd1d0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f27788;
  func_0x000107c61428(unaff_x20 + _DAT_112f27788,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102ecd31c; end: 102ecd383;  */

void FUN_102ecd31c(long param_1,ushort param_2,long param_3)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x250;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ed3334;
  plVar1[0x39] = param_3;
  plVar1[0x3a] = unaff_x20;
  *(ushort *)((long)plVar1 + 0x1aa) = param_2 & 0x101;
  plVar1[0x38] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecb6a8,0,0);
  return;
}



/* Entry: 102ecd384; end: 102ecd3cf;  */

void FUN_102ecd384(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x1a0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102ecd3d0;
  plVar1[0x2c] = param_1;
  plVar1[0x2d] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecac14,0,0);
  return;
}



/* Entry: 102ecd3d0; end: 102ecd40b;  */

void FUN_102ecd3d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ecd408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ecd40c; end: 102ecd427;  */

void FUN_102ecd40c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecd428,0,0);
  return;
}



/* Entry: 102ecd428; end: 102ecd4cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ecd428(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x48) + _DAT_112f27728);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ecd488;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ecd4d0; end: 102ecd54f;  */

void FUN_102ecd4d0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ecd550;
                    /* WARNING: Could not recover jumptable at 0x000102ecd54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (plVar4,*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),uVar2,lVar3)
  ;
  return;
}



/* Entry: 102ecd550; end: 102ecd613;  */

void FUN_102ecd550(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    uVar1 = 0x102ecd5ac;
  }
  else {
    uVar1 = 0x102ecd5e0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 102ecd614; end: 102ecd63f;  */

void FUN_102ecd614(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x180) = param_7;
  *(undefined8 *)(unaff_x22 + 0x188) = param_8;
  *(undefined1 *)(unaff_x22 + 0x2a0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x170) = param_4;
  *(undefined8 *)(unaff_x22 + 0x178) = param_6;
  *(undefined8 *)(unaff_x22 + 0x160) = param_1;
  *(undefined8 *)(unaff_x22 + 0x168) = param_3;
  uVar1 = param_2[1];
  *(undefined8 *)(unaff_x22 + 400) = *param_2;
  *(undefined8 *)(unaff_x22 + 0x198) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecd640,0,0);
  return;
}



/* Entry: 102ecd640; end: 102ecdf93;  */

/* WARNING: Removing unreachable block (ram,0x000102ecd834) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ecd640(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long unaff_x22;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined1 uVar27;
  undefined8 uVar28;
  code *pcVar29;
  undefined8 uStack_a8;
  
  lVar18 = *(long *)(unaff_x22 + 0x168);
  uVar13 = unaff_x22 + 0xe0;
  func_0x000107c61428(lVar18 + 0x10,uVar13,0,0);
  lVar18 = lVar18 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x1a0) = lVar18;
  if (lVar18 == 0) {
    uVar6 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f113630);
    uVar20 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f113ae0);
    puVar16 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168();
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar6);
    func_0x000107c61654();
    **(undefined8 **)(unaff_x22 + 0x188) = puVar16;
                    /* WARNING: Could not recover jumptable at 0x000102ecd87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar24 = *(long *)(unaff_x22 + 0x170);
  if (lVar24 == 0) {
    pcVar29 = (code *)0x0;
    puVar16 = (undefined *)0x0;
  }
  else {
    uVar20 = *(undefined8 *)(unaff_x22 + 400);
    puVar16 = &UNK_1105e5798;
    func_0x000107c613fc(&UNK_1105e5798,0x20,7);
    *(long *)(puVar16 + 0x10) = lVar24;
    *(undefined8 *)(puVar16 + 0x18) = uVar20;
    puVar5 = &UNK_1105e57c0;
    func_0x000107c613fc(&UNK_1105e57c0,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_102ed3028;
    *(undefined **)(puVar5 + 0x18) = puVar16;
    puVar16 = &UNK_1105e57e8;
    uVar13 = 0x20;
    func_0x000107c613fc(&UNK_1105e57e8,0x20,7);
    *(code **)(puVar16 + 0x10) = FUN_102ed332c;
    *(undefined **)(puVar16 + 0x18) = puVar5;
    pcVar29 = FUN_102ed3354;
  }
  *(code **)(unaff_x22 + 0x1a8) = pcVar29;
  *(undefined **)(unaff_x22 + 0x1b0) = puVar16;
  uVar7 = *(ulong *)(unaff_x22 + 0x198);
  func_0x000107c61174();
  func_0x000107c6157c(lVar24);
  func_0x000107c5b198();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c3eea8();
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar8);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  uVar8 = uVar9;
  func_0x0001010282b0(uVar9,uVar13);
  *(ulong *)(unaff_x22 + 0x1b8) = uVar8;
  func_0x00010006c090(uVar9);
  func_0x000107c61170(uVar7);
  lVar21 = *(long *)(unaff_x22 + 0x198);
  func_0x000107c516a4();
  func_0x000107c61180();
  if (lVar21 == 0) {
    uVar7 = 0;
    uVar9 = uVar13;
  }
  else {
    func_0x000107c5faec();
    uVar9 = uVar13;
    func_0x000107c61170(lVar21);
    uVar7 = uVar13;
  }
  uVar13 = *(ulong *)(unaff_x22 + 0x198);
  func_0x000107c50168();
  func_0x000107c61180();
  if (uVar13 == 0) {
    uVar25 = 0;
    uVar13 = 0;
    uVar14 = uVar9;
  }
  else {
    uVar25 = uVar13;
    func_0x000107c5faec();
    uVar14 = uVar9;
    func_0x000107c61170(uVar13);
    uVar13 = uVar9;
  }
  *(ulong *)(unaff_x22 + 0x1c0) = uVar13;
  uVar20 = *(undefined8 *)(unaff_x22 + 0x198);
  func_0x000107c3fe70();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar20;
  if (uVar7 == 0) {
    lVar21 = 0;
    func_0x000107c5eec8();
    lVar22 = *(long *)(lVar21 + -8);
    uVar9 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    func_0x000107c5eec4(uVar9);
    func_0x000107c5eeac();
    (**(code **)(lVar22 + 8))(uVar9,lVar21);
    func_0x000107c615c0(uVar9);
    uVar7 = uVar14;
  }
  *(ulong *)(unaff_x22 + 0x1d0) = uVar7;
  lVar21 = *(long *)(unaff_x22 + 0x198);
  func_0x000107c4c094();
  func_0x000107c61180();
  if (lVar21 != 0) {
    func_0x000107c3ebcc();
    func_0x000107c61170(lVar21);
  }
  if ((*(long *)(unaff_x22 + 0x180) == 3) && (uVar13 != 0)) {
    uVar9 = uVar25 & 0xffffffffffff;
    if ((uVar13 & 0x2000000000000000) != 0) {
      uVar9 = uVar13 >> 0x38 & 0xf;
    }
    if (uVar9 != 0) {
      uStack_a8 = 0;
      lVar21 = 1;
      goto LAB_102ecd9e8;
    }
  }
  FUN_102ed209c(*(undefined8 *)(unaff_x22 + 0x178));
  uStack_a8 = *(undefined8 *)(unaff_x22 + 0x178);
  lVar21 = *(long *)(unaff_x22 + 0x180);
LAB_102ecd9e8:
  uVar27 = 0;
  bVar3 = lVar21 == 3;
  uVar15 = (uint)!bVar3;
  if ((!bVar3) && (*(char *)(unaff_x22 + 0x2a0) != '\0')) {
    func_0x0001000d224c(unaff_x22 + 0x158);
    lVar22 = *(long *)(unaff_x22 + 0x158);
    if (lVar22 == 0) {
      uVar27 = 0;
    }
    else {
      lVar10 = lVar22;
      func_0x000107c41668();
      uVar27 = (undefined1)lVar10;
      func_0x000107c615e8(lVar22);
    }
    bVar3 = false;
    uVar15 = 1;
  }
  *(undefined1 *)(unaff_x22 + 0xf8) = 0;
  *(undefined **)(unaff_x22 + 0x100) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112f279c8,&UNK_10db63298);
  func_0x000107c613fc();
  lVar22 = unaff_x22 + 0xf8;
  func_0x00010006c248();
  *(long *)(unaff_x22 + 0x1d8) = lVar22;
  if ((bVar3) && (lVar24 != 0)) {
    func_0x000107c61580();
    (*pcVar29)(0x3ff0000000000000);
  }
  else {
    func_0x000107c61580();
  }
  lVar10 = _DAT_112f27718;
  uVar2 = *(undefined1 *)(unaff_x22 + 0x2a0);
  *(long *)(unaff_x22 + 0x1e0) = _DAT_112f27718;
  func_0x0001000d224c(unaff_x22 + 0x48);
  lVar24 = *(long *)(unaff_x22 + 0x68);
  func_0x0001000a8868(unaff_x22 + 0x48,*(undefined8 *)(unaff_x22 + 0x60));
  FUN_102eced50();
  uVar9 = (ulong)uVar15;
  uVar6 = uVar20;
  (**(code **)(lVar24 + 8))();
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar6;
  *(ulong *)(unaff_x22 + 0x1f0) = uVar9;
  func_0x000107c61170(uVar20);
  func_0x0001000834e4(unaff_x22 + 0x48);
  puVar5 = &UNK_1105e5518;
  func_0x000107c613fc(&UNK_1105e5518,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,lVar18);
  uVar20 = *(undefined8 *)(lVar18 + lVar10);
  puVar11 = &UNK_1105e5720;
  func_0x000107c613fc(&UNK_1105e5720,0x88,7);
  *(undefined **)(puVar11 + 0x10) = puVar5;
  puVar11[0x18] = uVar2;
  *(undefined8 *)(puVar11 + 0x20) = uStack_a8;
  *(long *)(puVar11 + 0x28) = lVar21;
  *(ulong *)(puVar11 + 0x30) = uVar8;
  *(undefined8 *)(puVar11 + 0x38) = uVar6;
  *(ulong *)(puVar11 + 0x40) = uVar9;
  *(ulong *)(puVar11 + 0x48) = uVar25;
  *(ulong *)(puVar11 + 0x50) = uVar13;
  *(code **)(puVar11 + 0x58) = pcVar29;
  *(undefined **)(puVar11 + 0x60) = puVar16;
  puVar11[0x68] = uVar27;
  *(undefined8 *)(puVar11 + 0x70) = 0x102ed2d0c;
  *(long *)(puVar11 + 0x78) = lVar22;
  *(undefined8 *)(puVar11 + 0x80) = uVar20;
  func_0x000107c61434(uVar13);
  func_0x000107c6157c(uVar20);
  func_0x000107c61174();
  func_0x000107c61434(uVar9);
  FUN_102ed2a64(pcVar29,puVar16);
  func_0x000107c6157c(lVar22);
  lVar18 = 0;
  func_0x000100859150(0,0,0x54,4,0,0,&UNK_10db632a8,puVar11,&UNK_1105e4ff0);
  *(long *)(unaff_x22 + 0x1f8) = lVar18;
  func_0x000107c61574(puVar11);
  *(undefined8 *)(unaff_x22 + 0x108) = 0;
  *(undefined8 *)(unaff_x22 + 0x110) = 0;
  FUN_102ed1de0();
  if ((uVar8 & 1) == 0) {
    *(undefined8 *)(unaff_x22 + 0x238) = 0;
    *(undefined8 *)(unaff_x22 + 0x230) = 0;
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1f8);
    lVar18 = *(long *)(unaff_x22 + 0x1e0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x1b8);
    lVar24 = *(long *)(unaff_x22 + 0x1a0);
    uVar27 = *(undefined1 *)(unaff_x22 + 0x2a0);
    puVar16 = &UNK_1105e5518;
    func_0x000107c613fc(&UNK_1105e5518,0x18,7);
    func_0x000107c61614(puVar16 + 0x10,lVar24);
    uVar26 = *(undefined8 *)(lVar24 + lVar18);
    uVar28 = *(undefined8 *)(lVar24 + _DAT_112f27770);
    puVar5 = &UNK_1105e5748;
    func_0x000107c613fc(&UNK_1105e5748,0x58,7);
    *(code **)(puVar5 + 0x10) = FUN_102ed2d04;
    *(undefined8 *)(puVar5 + 0x18) = uVar17;
    puVar5[0x20] = uVar27;
    *(undefined8 *)(puVar5 + 0x28) = uVar28;
    *(undefined **)(puVar5 + 0x30) = puVar16;
    *(undefined8 *)(puVar5 + 0x38) = uVar23;
    *(undefined8 *)(puVar5 + 0x40) = uVar26;
    *(undefined8 *)(puVar5 + 0x48) = uVar1;
    *(undefined8 *)(puVar5 + 0x50) = uVar20;
    func_0x000107c61174();
    func_0x000107c6157c(uVar26);
    func_0x000107c6157c(uVar28);
    func_0x000107c6157c(uVar17);
    uVar20 = 0;
    func_0x000100859150(0,0,0x54,4,0,0,&UNK_10db632b8,puVar5,PTR___sytN_11034f1b0 + 8);
    *(undefined8 *)(unaff_x22 + 0x240) = uVar20;
    func_0x000107c61574(puVar5);
    *(long *)(unaff_x22 + 0x20) = lVar24;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar20;
    *(undefined8 **)(unaff_x22 + 0x38) = (undefined8 *)(unaff_x22 + 0x108);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x80) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar20;
    iVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar4 == 0) {
      lVar18 = *(long *)(unaff_x22 + 0x1a0);
      pcVar29 = FUN_102ed2f18;
      func_0x000107c615b4(FUN_102ed2f18,unaff_x22 + 0x70);
      *(code **)(unaff_x22 + 0x250) = pcVar29;
      plVar19 = *(long **)(lVar18 + _DAT_112f27750);
      plVar12 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 600) = plVar12;
      *plVar12 = unaff_x22;
      plVar12[1] = (long)FUN_102ece30c;
      plVar12[5] = unaff_x22 + 0x90;
      plVar12[6] = (long)plVar19;
      lVar24 = *(long *)(*plVar19 + 0x50);
      plVar12[7] = lVar24;
      lVar18 = 0;
      __sSqMa(0,lVar24);
      plVar12[8] = lVar18;
      lVar18 = *(long *)(lVar18 + -8);
      plVar12[9] = lVar18;
      uVar13 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar12[10] = uVar13;
      lVar18 = *(long *)(lVar24 + -8);
      plVar12[0xb] = lVar18;
      uVar13 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar12[0xc] = uVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
      return;
    }
    plVar12 = (long *)(ulong)*(uint *)(
                                      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                      + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x248) = plVar12;
    *plVar12 = unaff_x22;
    plVar12[1] = (long)FUN_102ece2a4;
    puVar16 = &UNK_10db632c8;
    pcVar29 = FUN_102ed2f18;
    lVar24 = unaff_x22 + 0x118;
    lVar18 = unaff_x22 + 0x10;
    lVar21 = unaff_x22 + 0x70;
  }
  else {
    iVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar4 == 0) {
      pcVar29 = FUN_102ed2fec;
      func_0x000107c615b4(FUN_102ed2fec,lVar18);
      *(code **)(unaff_x22 + 0x208) = pcVar29;
      plVar12 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x210) = plVar12;
      uVar20 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      *plVar12 = unaff_x22;
      plVar12[1] = (long)FUN_102ece004;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScT5valuexvg_11034fdb8)
                (unaff_x22 + 0x148,lVar18,&UNK_1105e4ff0,uVar20,PTR___ss5ErrorWS_11034ee10);
      return;
    }
    plVar12 = (long *)(ulong)*(uint *)(
                                      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                      + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x200) = plVar12;
    *plVar12 = unaff_x22;
    plVar12[1] = (long)FUN_102ecdf94;
    puVar16 = &UNK_10db632e8;
    pcVar29 = FUN_102ed2fec;
    lVar24 = unaff_x22 + 0x138;
    lVar21 = lVar18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
  )(plVar12,lVar24,puVar16,lVar18,pcVar29,lVar21,0,0,&UNK_1105e4ff0);
  return;
}



/* Entry: 102ecdf94; end: 102ece003;  */

void FUN_102ecdf94(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x200));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x228) = *(undefined8 *)(lVar2 + 0x138);
    *(undefined8 *)(lVar2 + 0x220) = *(undefined8 *)(lVar2 + 0x140);
    pcVar1 = FUN_102ece060;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x1f0));
    *(long *)(lVar2 + 0x298) = unaff_x20;
    pcVar1 = FUN_102ece934;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ece004; end: 102ece05f;  */

void FUN_102ece004(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x218) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x210));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ece9e8;
  }
  else {
    pcVar1 = (code *)0x102ecea30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ece060; end: 102ece2a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ece060(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0x228);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
  lVar13 = *(long *)(unaff_x22 + 0x1e0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1b8);
  lVar12 = *(long *)(unaff_x22 + 0x1a0);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x2a0);
  puVar5 = &UNK_1105e5518;
  func_0x000107c613fc(&UNK_1105e5518,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,lVar12);
  uVar16 = *(undefined8 *)(lVar12 + lVar13);
  uVar17 = *(undefined8 *)(lVar12 + _DAT_112f27770);
  puVar6 = &UNK_1105e5748;
  func_0x000107c613fc(&UNK_1105e5748,0x58,7);
  *(code **)(puVar6 + 0x10) = FUN_102ed2d04;
  *(undefined8 *)(puVar6 + 0x18) = uVar11;
  puVar6[0x20] = uVar3;
  *(undefined8 *)(puVar6 + 0x28) = uVar17;
  *(undefined **)(puVar6 + 0x30) = puVar5;
  *(undefined8 *)(puVar6 + 0x38) = uVar15;
  *(undefined8 *)(puVar6 + 0x40) = uVar16;
  *(undefined8 *)(puVar6 + 0x48) = uVar2;
  *(undefined8 *)(puVar6 + 0x50) = uVar7;
  func_0x000107c61174();
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(uVar11);
  uVar7 = 0;
  func_0x000100859150(0,0,0x54,4,0,0,&UNK_10db632b8,puVar6,PTR___sytN_11034f1b0 + 8);
  *(undefined8 *)(unaff_x22 + 0x240) = uVar7;
  func_0x000107c61574(puVar6);
  *(long *)(unaff_x22 + 0x20) = lVar12;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar7;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x108;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar7;
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    plVar8 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x248) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_102ece2a4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(plVar8,unaff_x22 + 0x118,&UNK_10db632c8,unaff_x22 + 0x10,FUN_102ed2f18,unaff_x22 + 0x70,0,0,
      &UNK_1105e4ff0);
    return;
  }
  lVar13 = *(long *)(unaff_x22 + 0x1a0);
  pcVar9 = FUN_102ed2f18;
  func_0x000107c615b4(FUN_102ed2f18,unaff_x22 + 0x70);
  *(code **)(unaff_x22 + 0x250) = pcVar9;
  plVar14 = *(long **)(lVar13 + _DAT_112f27750);
  plVar8 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 600) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_102ece30c;
  plVar8[5] = unaff_x22 + 0x90;
  plVar8[6] = (long)plVar14;
  lVar12 = *(long *)(*plVar14 + 0x50);
  plVar8[7] = lVar12;
  lVar13 = 0;
  __sSqMa(0,lVar12);
  plVar8[8] = lVar13;
  lVar13 = *(long *)(lVar13 + -8);
  plVar8[9] = lVar13;
  uVar10 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[10] = uVar10;
  lVar13 = *(long *)(lVar12 + -8);
  plVar8[0xb] = lVar13;
  uVar10 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar8[0xc] = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ece2a4; end: 102ece30b;  */

void FUN_102ece2a4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x248));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x278) = *(undefined8 *)(lVar2 + 0x118);
    *(undefined8 *)(lVar2 + 0x270) = *(undefined8 *)(lVar2 + 0x120);
    pcVar1 = FUN_102ece44c;
  }
  else {
    *(long *)(lVar2 + 0x280) = unaff_x20;
    pcVar1 = FUN_102ece554;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ece30c; end: 102ece353;  */

void FUN_102ece30c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 600));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ece354,0,0);
  return;
}



/* Entry: 102ece354; end: 102ece3eb;  */

void FUN_102ece354(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  func_0x0001000a8868(unaff_x22 + 0x90,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x260) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ece3ec;
                    /* WARNING: Could not recover jumptable at 0x000102ece3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x1b8),
             "save(with:replaceId:snapEditorLoggingParams:saveLocation:savingSessionId:logDirectSnapAction:progressHandler:)"
             ,0x6e,0x2000000000000002,0x2a2,uVar2,lVar3);
  return;
}



/* Entry: 102ece3ec; end: 102ece44b;  */

void FUN_102ece3ec(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x268) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x260));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ece614;
  }
  else {
    pcVar1 = FUN_102ece7b0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ece44c; end: 102ece553;  */

void FUN_102ece44c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1c8);
  lVar8 = *(long *)(unaff_x22 + 0x170);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1d0));
  func_0x000107c61170(uVar3);
  func_0x000107c61578(uVar2,3);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x110));
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1b8);
  if (lVar8 == 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
  }
  else {
    pcVar1 = *(code **)(unaff_x22 + 0x1a8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
    func_0x000107c6157c(uVar3);
    (*pcVar1)(0x3ff0000000000000);
    func_0x000100d2a75c(pcVar1,uVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000100d2a75c(pcVar1,uVar3);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x270);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x160);
  *puVar4 = *(undefined8 *)(unaff_x22 + 0x278);
  puVar4[1] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x000102ece550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ece554; end: 102ece613;  */

void FUN_102ece554(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1c8);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1d0));
  func_0x000107c61170(uVar3);
  func_0x000107c61578(uVar2,3);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar4);
  func_0x000107c6142c(uVar1);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x198);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x000100d2a75c(uVar4,uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  **(undefined8 **)(unaff_x22 + 0x188) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x000102ece610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ece614; end: 102ece7af;  */

void FUN_102ece614(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x240);
  lVar6 = *(long *)(unaff_x22 + 0x238);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1b8);
  func_0x000101a698ac(unaff_x22 + 0x90,unaff_x22 + 0xb8);
  puVar1 = &UNK_1105e5770;
  func_0x000107c613fc(&UNK_1105e5770,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  func_0x000101a68ae4(unaff_x22 + 0xb8,puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x40) = uVar5;
  *(undefined8 *)(puVar1 + 0x48) = uVar4;
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(uVar4);
  func_0x0001001ca524(0,0,0x54,0,0,0,&UNK_10db632d8,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x000107c61574(puVar1);
  if (lVar6 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x230);
    func_0x000107c61434(uVar3);
    func_0x000107c61170(uVar4);
    *(undefined8 *)(unaff_x22 + 0x128) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x130) = uVar3;
    uVar3 = *(undefined8 *)(unaff_x22 + 0x250);
    func_0x0001000834e4(unaff_x22 + 0x90);
    func_0x000107c615d8(uVar3);
    *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(unaff_x22 + 0x128);
    *(undefined8 *)(unaff_x22 + 0x270) = *(undefined8 *)(unaff_x22 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102ece44c,0,0);
    return;
  }
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x288) = plVar2;
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102ece824;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (unaff_x22 + 0x128,*(undefined8 *)(unaff_x22 + 0x1f8),&UNK_1105e4ff0,uVar3,
             PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 102ece7b0; end: 102ece823;  */

void FUN_102ece7b0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x268);
  func_0x000100fb85f0();
  puVar1 = &UNK_11072cd20;
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar2;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x250);
  func_0x0001000834e4(unaff_x22 + 0x90);
  func_0x000107c615d8(uVar2);
  *(undefined **)(unaff_x22 + 0x280) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ece554,0,0);
  return;
}



/* Entry: 102ece824; end: 102ece8db;  */

void FUN_102ece824(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x290) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x288));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x102ece880;
  }
  else {
    pcVar1 = FUN_102ece8dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ece8dc; end: 102ece933;  */

void FUN_102ece8dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x268));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x250);
  func_0x0001000834e4(unaff_x22 + 0x90);
  func_0x000107c615d8(uVar2);
  *(undefined8 *)(unaff_x22 + 0x280) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ece554,0,0);
  return;
}



/* Entry: 102ece934; end: 102ece9e7;  */

void FUN_102ece934(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1c8);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1d0));
  func_0x000107c61170(uVar3);
  func_0x000107c61578(uVar2,3);
  func_0x000107c61574(uVar4);
  func_0x000107c6142c(uVar1);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x198);
  func_0x000107c6142c(0);
  func_0x000100d2a75c(uVar4,uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  **(undefined8 **)(unaff_x22 + 0x188) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x000102ece9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ece9e8; end: 102ecea7f;  */

void FUN_102ece9e8(void)

{
  long unaff_x22;
  
  func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0x208));
  *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x150);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ece060,0,0);
  return;
}



/* Entry: 102ecea80; end: 102eceaff;  */

void FUN_102ecea80(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  char cStack_38;
  
  uVar1 = 0x112dc10e8;
  lStack_60 = param_2;
  uStack_58 = param_3;
  uStack_50 = param_1;
  func_0x0001000285a8(0x112dc10e8,&UNK_10d97dc20);
  func_0x000100087bd4(&uStack_40,FUN_102ed3030,auStack_70,uVar1);
  if (cStack_38 != '\x01') {
    (**(code **)(param_2 + 0x30))(uStack_40);
  }
  return;
}



/* Entry: 102eceb00; end: 102ecebb7;  */

void FUN_102eceb00(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lStack_48;
  
  uVar2 = 0x112f279d0;
  func_0x0001000285a8(0x112f279d0,&UNK_10db63308);
  func_0x000100075034(&lStack_48,FUN_102ecebb8,0,uVar2);
  uVar3 = *(ulong *)(lStack_48 + 0x10);
  if (uVar3 != 0) {
    uVar4 = 0;
    puVar5 = (undefined8 *)(lStack_48 + 0x28);
    do {
      if (*(ulong *)(lStack_48 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ecebb8);
        (*pcVar1)();
      }
      uVar4 = uVar4 + 1;
      pcVar1 = (code *)puVar5[-1];
      uVar2 = *puVar5;
      func_0x000107c6157c(uVar2);
      (*pcVar1)();
      func_0x000107c61574(uVar2);
      puVar5 = puVar5 + 2;
    } while (uVar3 != uVar4);
  }
  func_0x000107c6142c(lStack_48);
  return;
}



/* Entry: 102ecebb8; end: 102ecebe3;  */

void FUN_102ecebb8(undefined8 *param_1,byte *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((*param_2 & 1) == 0) {
    *param_2 = 1;
    puVar2 = *(undefined **)(param_2 + 8);
    *(undefined **)(param_2 + 8) = puVar1;
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 102ecebe4; end: 102ecec4f;  */

void FUN_102ecebe4(code *param_1,undefined8 param_2)

{
  undefined1 auStack_60 [16];
  code *pcStack_50;
  undefined8 uStack_48;
  char cStack_31;
  
  pcStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000100075034(&cStack_31,FUN_102ed30f4,auStack_60,PTR___sSbN_11034dd40);
  if (cStack_31 == '\x01') {
    (*param_1)();
  }
  return;
}



/* Entry: 102ecec50; end: 102eced4f;  */

void FUN_102ecec50(undefined1 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  
  if ((*param_2 & 1) == 0) {
    puVar2 = &UNK_1105e5860;
    func_0x000107c613fc(&UNK_1105e5860,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    uVar6 = *(ulong *)(param_2 + 8);
    func_0x000107c6157c(param_4);
    uVar3 = uVar6;
    func_0x000107c61558();
    uVar4 = uVar6;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      func_0x000102ec5718(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x000102ec5718(uVar6,uVar3 + 1,1,uVar4);
      uVar4 = uVar6;
    }
    uVar5 = 0;
    *(ulong *)(uVar4 + 0x10) = uVar3 + 1;
    lVar1 = uVar4 + uVar3 * 0x10;
    *(undefined8 *)(lVar1 + 0x20) = 0x102ed3360;
    *(undefined **)(lVar1 + 0x28) = puVar2;
    *(ulong *)(param_2 + 8) = uVar4;
  }
  else {
    uVar5 = 1;
  }
  *param_1 = uVar5;
  return;
}



/* Entry: 102eced50; end: 102ecee8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102eced50(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined *puVar4;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f27788;
  func_0x000107c61428(unaff_x20 + _DAT_112f27788,auStack_48,0,0);
  puVar2 = (undefined *)(unaff_x20 + lVar1);
  func_0x000107c61618();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c4588;
    func_0x000107c61168(PTR_PTR_1126c4588);
  }
  else {
    puVar4 = puVar2;
    func_0x000107c3fe68();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    puVar2 = PTR_PTR_1126c4588;
    func_0x000107c61168(PTR_PTR_1126c4588);
    if (puVar4 != (undefined *)0x0) {
      func_0x000107c61174(puVar4);
      puVar3 = puVar4;
      goto LAB_102ecee10;
    }
  }
  puVar4 = puVar2;
  func_0x0001008e4748();
  func_0x000107c61180();
  puVar3 = puVar4;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = (undefined *)0x0;
LAB_102ecee10:
  func_0x000107c5b178(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (param_1 != 0) {
    func_0x000107176780(param_1,puVar2);
  }
  func_0x000107c61174(puVar2);
  puVar3 = puVar2;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 102ecee8c; end: 102eceee3;  */

void FUN_102ecee8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x158) = param_17;
  *(undefined8 *)(unaff_x22 + 0x150) = param_16;
  *(undefined8 *)(unaff_x22 + 0x148) = param_15;
  *(undefined1 *)(unaff_x22 + 0x198) = param_13;
  *(undefined8 *)(unaff_x22 + 0x140) = param_12;
  *(undefined8 *)(unaff_x22 + 0x138) = param_11;
  *(undefined8 *)(unaff_x22 + 0x130) = param_10;
  *(undefined8 *)(unaff_x22 + 0x128) = param_9;
  *(undefined8 *)(unaff_x22 + 0x118) = param_7;
  *(undefined8 *)(unaff_x22 + 0x120) = param_8;
  *(undefined8 *)(unaff_x22 + 0x108) = param_5;
  *(undefined8 *)(unaff_x22 + 0x110) = param_6;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x100) = param_4;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eceee4,0,0);
  return;
}



/* Entry: 102eceee4; end: 102ecefe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eceee4(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xf8);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0xb0,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x160) = lVar4;
  if (lVar4 != 0) {
    if (*(long *)(unaff_x22 + 0x108) != 3) {
      plVar5 = *(long **)(lVar4 + _DAT_112f27738);
      plVar1 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x168) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = 0x102ecef9c;
      plVar1[5] = unaff_x22 + 0x10;
      plVar1[6] = (long)plVar5;
      lVar6 = *(long *)(*plVar5 + 0x50);
      plVar1[7] = lVar6;
      lVar4 = 0;
      __sSqMa(0,lVar6);
      plVar1[8] = lVar4;
      lVar4 = *(long *)(lVar4 + -8);
      plVar1[9] = lVar4;
      uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar1[10] = uVar2;
      lVar4 = *(long *)(lVar6 + -8);
      plVar1[0xb] = lVar4;
      uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar1[0xc] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
      return;
    }
    func_0x000107c61170();
  }
  puVar3 = *(undefined8 **)(unaff_x22 + 0xf0);
  *puVar3 = 0;
  puVar3[1] = 0xe000000000000000;
                    /* WARNING: Could not recover jumptable at 0x000102ecef50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ecefe4; end: 102ecf087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ecefe4(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x22;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0x160);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar3 + 8))(uVar5,uVar1,lVar3);
  *(undefined8 *)(unaff_x22 + 0x170) = uVar5;
  func_0x0001000834e4(unaff_x22 + 0x10);
  plVar6 = *(long **)(lVar7 + _DAT_112f27730);
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x178) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102ecf088;
  plVar2[5] = unaff_x22 + 0x38;
  plVar2[6] = (long)plVar6;
  lVar7 = *(long *)(*plVar6 + 0x50);
  plVar2[7] = lVar7;
  lVar3 = 0;
  __sSqMa(0,lVar7);
  plVar2[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[10] = uVar4;
  lVar3 = *(long *)(lVar7 + -8);
  plVar2[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ecf088; end: 102ecf0cf;  */

void FUN_102ecf088(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x178));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecf0d0,0,0);
  return;
}



/* Entry: 102ecf0d0; end: 102ecf187;  */

void FUN_102ecf0d0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x150);
  cVar6 = *(char *)(unaff_x22 + 0x198);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar3);
  if (cVar6 == '\0') {
    uVar2 = 0;
    uVar4 = 0;
  }
  piVar8 = *(int **)(lVar5 + 8);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x180) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102ecf188;
                    /* WARNING: Could not recover jumptable at 0x000102ecf184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (*(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0x120),
             *(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x128),
             *(undefined8 *)(unaff_x22 + 0x130),*(undefined8 *)(unaff_x22 + 0x100),
             *(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x138),
             *(undefined8 *)(unaff_x22 + 0x140),uVar2,uVar4,uVar3,lVar5);
  return;
}



/* Entry: 102ecf188; end: 102ecf1e7;  */

void FUN_102ecf188(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x188) = param_1;
  *(long *)(lVar2 + 400) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x180));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ecf1e8;
  }
  else {
    pcVar1 = FUN_102ecf3ec;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ecf1e8; end: 102ecf3eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ecf1e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  func_0x0001000834e4(unaff_x22 + 0x38);
  func_0x0001000d224c(unaff_x22 + 0xe0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar11 = uVar12;
  func_0x000107c5d610();
  func_0x000107c615e8(uVar12);
  lVar8 = _DAT_112f27788;
  if ((int)uVar11 != 0) {
    lVar13 = *(long *)(unaff_x22 + 0x160);
    func_0x000107c61428(lVar13 + _DAT_112f27788,unaff_x22 + 200,0,0);
    lVar13 = lVar13 + lVar8;
    func_0x000107c61618();
    if (lVar13 != 0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x188);
      puVar6 = &UNK_1105e5810;
      func_0x000107c613fc(&UNK_1105e5810,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,lVar13);
      puVar7 = &UNK_1105e5838;
      func_0x000107c613fc(&UNK_1105e5838,0x20,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined8 *)(puVar7 + 0x18) = uVar11;
      func_0x000107c61174(uVar11);
      func_0x0001001ca524(0,0,0x54,4,0,0,&UNK_10db63300,puVar7,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574();
      func_0x000107c61574(puVar7);
      func_0x000107c615e8(lVar13);
    }
  }
  lVar13 = *(long *)(unaff_x22 + 0x188);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
  func_0x0001000d224c(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x0001000a8868(unaff_x22 + 0x88,uVar1);
  lVar8 = lVar13;
  func_0x000107c61174();
  FUN_102eb4f10(uVar12,uVar4,lVar13,uVar14,uVar10,0,uVar11,uVar3,uVar1,uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar8);
  func_0x0001000834e4(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(lVar8 + _DAT_112ff55c8);
  uVar12 = ((undefined8 *)(lVar8 + _DAT_112ff55c8))[1];
  func_0x000107c61434(uVar12);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x188));
  puVar9 = *(undefined8 **)(unaff_x22 + 0xf0);
  *puVar9 = uVar11;
  puVar9[1] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x000102ecf3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ecf3ec; end: 102ecf4c7;  */

void FUN_102ecf3ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar9 = *(ulong *)(unaff_x22 + 400);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
  func_0x0001000834e4(unaff_x22 + 0x38);
  func_0x0001000d224c(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,uVar3);
  func_0x000107c614b0(uVar9);
  FUN_102eb4f10(uVar2,uVar6,uVar9 | 0x8000000000000000,uVar10,uVar8,0,uVar1,uVar5,uVar3,uVar7);
  func_0x000107c614ac(uVar9);
  func_0x0001000834e4(unaff_x22 + 0x60);
  func_0x000107c61654();
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102ecf4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ecf4c8; end: 102ecf553;  */

void FUN_102ecf4c8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ed3338;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (param_1,param_2,&UNK_1105e4ff0,uVar2,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 102ecf554; end: 102ecf583;  */

void FUN_102ecf554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_9;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_10;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_8;
  *(undefined8 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_6;
  *(undefined1 *)(unaff_x22 + 0x140) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecf584,0,0);
  return;
}



/* Entry: 102ecf584; end: 102ecf763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ecf584(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x140) == '\x01') {
    func_0x0001000d224c(unaff_x22 + 0xa0);
    lVar6 = *(long *)(unaff_x22 + 0xa0);
    *(long *)(unaff_x22 + 0xf8) = lVar6;
    if (lVar6 == 0) {
      lVar8 = 0;
    }
    else {
      uVar1 = 0xd000000000000022;
      func_0x000107c5fadc(0xd000000000000022,0x800000010f113b10);
      lVar8 = lVar6;
      func_0x000107c3e764();
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(lVar6);
    }
    *(long *)(unaff_x22 + 0x100) = lVar8;
    lVar6 = *(long *)(unaff_x22 + 0xd0);
    func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x88,0,0);
    lVar6 = lVar6 + 0x10;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0x108) = lVar6;
    if (lVar6 == 0) {
      uVar3 = 0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f113630);
      uVar1 = 0xd000000000000037;
      func_0x000107c5fadc(0xd000000000000037,0x800000010f113c00);
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c61168();
      func_0x000107c42a5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar3);
      func_0x000107c61654();
      *(undefined **)(unaff_x22 + 0x130) = puVar4;
      plVar2 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x138) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = 0x102ecfa64;
      plVar7 = *(long **)(unaff_x22 + 0xe0);
      lVar6 = unaff_x22 + 0x10;
    }
    else {
      plVar7 = *(long **)(lVar6 + _DAT_112f27728);
      plVar2 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x110) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_102ecf764;
      lVar6 = unaff_x22 + 0x38;
    }
    plVar2[5] = lVar6;
    plVar2[6] = (long)plVar7;
    lVar8 = *(long *)(*plVar7 + 0x50);
    plVar2[7] = lVar8;
    lVar6 = 0;
    __sSqMa(0,lVar8);
    plVar2[8] = lVar6;
    lVar6 = *(long *)(lVar6 + -8);
    plVar2[9] = lVar6;
    uVar5 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[10] = uVar5;
    lVar6 = *(long *)(lVar8 + -8);
    plVar2[0xb] = lVar6;
    uVar5 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  (**(code **)(unaff_x22 + 0xb8))();
                    /* WARNING: Could not recover jumptable at 0x000102ecf630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ecf764; end: 102ecf7ab;  */

void FUN_102ecf764(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ecf7ac,0,0);
  return;
}



/* Entry: 102ecf7ac; end: 102ecf82b;  */

void FUN_102ecf7ac(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar5 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x118) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ecf82c;
                    /* WARNING: Could not recover jumptable at 0x000102ecf828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0xd8),uVar2,lVar3);
  return;
}



/* Entry: 102ecf82c; end: 102ecf92b;  */

void FUN_102ecf82c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x120) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x102ecf888;
  }
  else {
    pcVar1 = FUN_102ecf9f4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ecf92c; end: 102ecf9f3;  */

void FUN_102ecf92c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar5 = *(long *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,uVar2);
  (**(code **)(lVar3 + 0x18))(uVar6,uVar1,0,1,0,uVar2,lVar3);
  func_0x000107c61170(uVar4);
  func_0x0001000834e4(unaff_x22 + 0x60);
  if (lVar5 != 0) {
    func_0x0001000d224c(unaff_x22 + 0xb0);
    lVar5 = *(long *)(unaff_x22 + 0xb0);
    if (lVar5 != 0) {
      func_0x000107c427f4(lVar5);
      func_0x000107c615e8(lVar5);
    }
  }
  (**(code **)(unaff_x22 + 0xb8))();
                    /* WARNING: Could not recover jumptable at 0x000102ecf9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


