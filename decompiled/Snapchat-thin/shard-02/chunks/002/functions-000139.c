/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a258b8; end: 101a25937;  */

void FUN_101a258b8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  plVar3 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101a25938;
  plVar3[0x11] = lVar2;
  plVar3[0x12] = lVar4;
  plVar3[0x10] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a22c7c,0,0);
  return;
}



/* Entry: 101a25938; end: 101a25973;  */

void FUN_101a25938(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a25970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a25974; end: 101a25aef;  */

void FUN_101a25974(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 101a25af0; end: 101a25b2f;  */

void FUN_101a25af0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dec318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b812c;
  func_0x000107c61520(&UNK_10d9b812c,&UNK_11042d768);
  puRam0000000112dec318 = puVar1;
  return;
}



/* Entry: 101a25b30; end: 101a25b43;  */

void FUN_101a25b30(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a25970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a25b44; end: 101a25b9f;  */

void FUN_101a25b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return;
}



/* Entry: 101a25ba0; end: 101a25d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a25ba0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_60;
  uVar7 = *(undefined8 *)(param_2 + _DAT_11303c290);
  func_0x000107c42d48();
  func_0x000107c61180();
  func_0x0001000285a8(0x112dec418,&UNK_10d9b81f8);
  func_0x000107c5b048();
  func_0x000107c61180();
  uVar2 = param_4;
  func_0x0001000bda74();
  func_0x000107c61170(param_4);
  func_0x0001000285a8(0x112dec420,&UNK_10d9b8200);
  func_0x000107c4bfe0();
  func_0x000107c61180();
  uVar3 = param_5;
  func_0x0001000bda74();
  func_0x000107c61170(param_5);
  lVar4 = 0;
  FUN_101a22af0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112dec2d0) = 0x4094000000000000;
  *(undefined8 *)(lVar5 + _DAT_112dec2a8) = uVar7;
  *(undefined8 *)(lVar5 + _DAT_112dec2b0) = param_3;
  *(undefined8 *)(lVar5 + _DAT_112dec2b8) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112dec2c0) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112dec2c8) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c6157c(uVar7);
  func_0x000107c615f0(param_6);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar6;
  return;
}



/* Entry: 101a25d10; end: 101a25d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a25d10(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_60;
  long lStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11303c290);
  func_0x000107c42d48();
  func_0x000107c61180();
  func_0x0001000285a8(0x112dec418,&UNK_10d9b81f8);
  func_0x000107c5b048();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112dec420,&UNK_10d9b8200);
  func_0x000107c4bfe0();
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  lVar6 = 0;
  FUN_101a22af0();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112dec2d0) = 0x4094000000000000;
  *(undefined8 *)(lVar7 + _DAT_112dec2a8) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112dec2b0) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112dec2b8) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112dec2c0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112dec2c8) = uVar9;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c6157c(uVar10);
  func_0x000107c615f0(uVar9);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar8;
  return;
}



/* Entry: 101a25d20; end: 101a25d53;  */

/* WARNING: Possible PIC construction at 0x000101a25d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a25d3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a25d30) */
/* WARNING: Removing unreachable block (ram,0x000101a25d40) */

void FUN_101a25d20(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a25d54; end: 101a25ddb;  */

void FUN_101a25d54(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a25ddc; end: 101a25def;  */

bool FUN_101a25ddc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101a25df0; end: 101a25e9b;  */

void FUN_101a25df0(void)

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



/* Entry: 101a25e9c; end: 101a25eab;  */

void FUN_101a25e9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101a25eac; end: 101a25f07; -[_TtC28SCSnapMemoriesTranscoderImpl26SnapMemoriesTranscoderImpl init] */

void FUN_101a25eac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapMemoriesTranscoderImpl.SnapMemoriesTranscoderImpl",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a25ed8);
  (*pcVar1)();
}



/* Entry: 101a25f08; end: 101a25f8f; -[_TtC28SCSnapMemoriesTranscoderImpl26SnapMemoriesTranscoderImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a25f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a25f54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a25f38) */
/* WARNING: Removing unreachable block (ram,0x000101a25f58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a25f08(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dec428));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dec430));
  return;
}



/* Entry: 101a25f90; end: 101a25faf;  */

void FUN_101a25f90(void)

{
  func_0x000107c61168(&PTR_PTR_1127f11c0);
  return;
}



/* Entry: 101a25fb0; end: 101a25fcb;  */

void FUN_101a25fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a25fcc,0,0);
  return;
}



/* Entry: 101a25fcc; end: 101a26113;  */

/* WARNING: Removing unreachable block (ram,0x000101a26034) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a25fcc(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa8) + _DAT_112dec448);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar1;
  func_0x0001000285a8(0x112dec548,&UNK_10d9b82b0);
  func_0x0001048da110(unaff_x22 + 0x88);
  func_0x000107c615e8(uVar1);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
  func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
  func_0x000107c43de8();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000100759c94();
  *(undefined8 *)(unaff_x22 + 200) = uVar1;
  func_0x000107c61170(uVar3);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a26114;
                    /* WARNING: Could not recover jumptable at 0x000101a26110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100ff4658)();
  return;
}



/* Entry: 101a26114; end: 101a26167;  */

void FUN_101a26114(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xd8) = param_1;
  *(undefined1 *)(lVar1 + 0x55) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a26168,0,0);
  return;
}



/* Entry: 101a26168; end: 101a263af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a26168(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0xd8);
  if (*(char *)(unaff_x22 + 0x55) == '\x01') {
    *(long *)(unaff_x22 + 0x98) = lVar9;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x98,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  }
  else {
    puVar3 = *(undefined1 **)(unaff_x22 + 200);
    func_0x000107c61574();
    if (lVar9 == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
      func_0x000101a2cdac();
      func_0x000107c613f8(&UNK_11042dcb0,puVar3,0,0);
      *puVar3 = 0;
      func_0x000107c61654();
    }
    else {
      uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar4 = 0;
      func_0x000103aeb250(0);
      func_0x000103ae9d4c(unaff_x22 + 0x10,uVar10,uVar4);
      if (*(long *)(unaff_x22 + 0x18) == 0) {
        func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xc0));
        **(undefined8 **)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0xd8);
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_101a262e0;
      }
      lVar9 = *(long *)(unaff_x22 + 0xb8);
      puVar3 = (undefined1 *)(unaff_x22 + 0x10);
      FUN_101a2fbd0(puVar3,0x112deb530,&UNK_10d9b82d0);
      if (lVar9 != 0) {
        puVar3 = *(undefined1 **)(unaff_x22 + 0xb8);
        puVar5 = puVar3;
        func_0x000107c615f0();
        func_0x000107c49b28();
        if (((ulong)puVar5 & 1) == 0) {
          func_0x0001000d224c(unaff_x22 + 0x58);
          uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
          lVar9 = *(long *)(unaff_x22 + 0x78);
          func_0x000101a2fbac(unaff_x22 + 0x58,uVar4);
          func_0x000107c5b198();
          func_0x000107c61180();
          *(undefined8 *)(unaff_x22 + 0xe0) = uVar8;
          piVar7 = *(int **)(lVar9 + 0x18);
          iVar2 = *piVar7;
          plVar6 = (long *)(ulong)(uint)piVar7[1];
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0xe8) = plVar6;
          *plVar6 = unaff_x22;
          plVar6[1] = (long)FUN_101a263b0;
                    /* WARNING: Could not recover jumptable at 0x000101a263ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar2 + (long)piVar7))(uVar8,uVar4,lVar9);
          return;
        }
        func_0x000107c615e8();
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x55);
      func_0x000101a2cdac();
      func_0x000107c613f8(&UNK_11042dcb0,puVar3,0,0);
      *puVar3 = 4;
      func_0x000107c61654();
      func_0x000100fee724(uVar8,uVar1);
    }
  }
  func_0x000107c615e8(uVar4);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101a262e0:
                    /* WARNING: Could not recover jumptable at 0x000101a262f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a263b0; end: 101a26417;  */

void FUN_101a263b0(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xe0);
  *(undefined8 *)(lVar3 + 0xf0) = param_1;
  *(long *)(lVar3 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xe8));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101a26418;
  }
  else {
    pcVar2 = FUN_101a26660;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101a26418; end: 101a26487;  */

void FUN_101a26418(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  FUN_101a2fb78(unaff_x22 + 0x58);
  plVar4 = (long *)0x160;
  func_0x000107c615f0(uVar2);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101a26488;
  lVar1 = *(long *)(unaff_x22 + 0xb8);
  plVar4[0x17] = lVar3;
  plVar4[0x18] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2e4f8,0,0);
  return;
}



/* Entry: 101a26488; end: 101a26543;  */

void FUN_101a26488(void)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  long lVar7;
  
  lVar6 = *unaff_x22;
  lVar7 = *unaff_x22;
  *(long *)(lVar6 + 0x108) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x100));
  if (unaff_x20 == 0) {
    lVar4 = *(long *)(lVar6 + 0xd8);
    plVar1 = (long *)0x240;
    func_0x000107c615b8();
    *(long **)(lVar6 + 0x110) = plVar1;
    *plVar1 = lVar7;
    plVar1[1] = (long)FUN_101a26544;
    lVar7 = *(long *)(lVar6 + 0xf0);
    lVar3 = *(long *)(lVar6 + 0xb8);
    lVar6 = *(long *)(lVar6 + 0xa8);
    plVar1[0x3c] = 0;
    plVar1[0x3d] = lVar6;
    plVar1[0x3a] = lVar3;
    plVar1[0x3b] = 0;
    plVar1[0x38] = lVar4;
    plVar1[0x39] = lVar7;
    pcVar2 = FUN_101a2672c;
  }
  else {
    uVar5 = *(undefined8 *)(lVar6 + 0xb8);
    func_0x000107c6142c(*(undefined8 *)(lVar6 + 0xf0));
    func_0x000107c615e8(uVar5);
    pcVar2 = FUN_101a265c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101a26544; end: 101a265bf;  */

void FUN_101a26544(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0xf0);
  uVar4 = *(undefined8 *)(lVar2 + 0xb8);
  *(long *)(lVar2 + 0x118) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x110));
  func_0x000107c615e8(uVar4);
  func_0x000107c6142c(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a26618;
  }
  else {
    pcVar1 = FUN_101a266b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a265c0; end: 101a26617;  */

void FUN_101a265c0(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x55);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000100fee724(uVar3,uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a26614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a26618; end: 101a2665f;  */

void FUN_101a26618(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615e8(uVar1);
  **(undefined8 **)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x000101a2665c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a26660; end: 101a266b3;  */

void FUN_101a26660(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000100fee724(*(undefined8 *)(unaff_x22 + 0xd8),*(undefined1 *)(unaff_x22 + 0x55));
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(uVar2);
  FUN_101a2fb78(unaff_x22 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000101a266b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a266b4; end: 101a2670b;  */

void FUN_101a266b4(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x55);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000100fee724(uVar3,uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a26708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a2670c; end: 101a2672b;  */

void FUN_101a2670c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1e8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2672c,0,0);
  return;
}



/* Entry: 101a2672c; end: 101a26c5f;  */

void FUN_101a2672c(void)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  ulong uVar19;
  long unaff_x22;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  lVar16 = *(long *)(unaff_x22 + 0x1c8);
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101a2f4fc();
  lVar13 = -1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
  uVar15 = -lVar13;
  uVar20 = 0xffffffffffffffff;
  if (uVar15 < 0x40) {
    uVar20 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar20 = uVar20 & *(ulong *)(lVar16 + 0x40);
  func_0x000107c61434(lVar16);
  lVar22 = 0;
  do {
    *(undefined **)(unaff_x22 + 0x1f0) = puVar18;
    while( true ) {
      while (uVar20 == 0) {
        bVar3 = SCARRY8(lVar22,1);
        lVar22 = lVar22 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101a26c00);
          (*pcVar2)();
        }
        if ((long)(0x3fU - lVar13 >> 6) <= lVar22) {
          lVar13 = *(long *)(unaff_x22 + 0x1d8);
          func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1c8));
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (lVar13 == 0) {
            puVar18 = (undefined *)0x0;
          }
          else if (*(long *)(puVar18 + 0x10) == 0) {
            puVar18 = (undefined *)0x0;
          }
          else {
            uVar17 = *(undefined8 *)(unaff_x22 + 0x1d8);
            uVar21 = *(undefined8 *)(unaff_x22 + 0x1e0);
            func_0x000101a2ca5c(0);
            func_0x000107c613fc();
            FUN_101a2cbac(uVar17,uVar21);
            func_0x000107c61434();
            FUN_101a2c4d8();
          }
          *(undefined **)(unaff_x22 + 0x1f8) = puVar18;
          puVar9 = PTR___swiftEmptySetSingleton_11034f1d8;
          if (((ulong)puVar8 >> 0x3e != 0) &&
             (puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8, func_0x000107c60480(),
             puVar9 = PTR___swiftEmptySetSingleton_11034f1d8, puVar8 != (undefined *)0x0)) {
            puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
            FUN_101a2f77c();
          }
          uVar17 = *(undefined8 *)(unaff_x22 + 0x1e8);
          uVar25 = *(undefined8 *)(unaff_x22 + 0x1d0);
          uVar24 = *(undefined8 *)(unaff_x22 + 0x1c8);
          uVar21 = *(undefined8 *)(unaff_x22 + 0x1c0);
          puVar8 = &UNK_11042d998;
          func_0x000107c613fc(&UNK_11042d998,0x18,7);
          *(undefined **)(unaff_x22 + 0x200) = puVar8;
          *(undefined **)(puVar8 + 0x10) = puVar9;
          *(undefined8 *)(unaff_x22 + 0x128) = uVar25;
          *(undefined8 *)(unaff_x22 + 0x120) = uVar24;
          *(undefined8 *)(unaff_x22 + 0x130) = uVar21;
          *(undefined8 *)(unaff_x22 + 0x138) = uVar17;
          *(undefined **)(unaff_x22 + 0x140) = puVar8;
          *(undefined **)(unaff_x22 + 0x148) = puVar18;
          iVar4 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar4 != 0) {
            plVar7 = (long *)(ulong)*(uint *)(
                                             PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                             + 4);
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x208) = plVar7;
            *plVar7 = unaff_x22;
            plVar7[1] = (long)FUN_101a26c60;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
            )();
            return;
          }
          func_0x000107c615ac(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
          *(long *)(unaff_x22 + 400) = unaff_x22 + 0x10;
          plVar7 = (long *)0x2d0;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x210) = plVar7;
          *plVar7 = unaff_x22;
          plVar7[1] = (long)FUN_101a26cbc;
          lVar12 = *(long *)(unaff_x22 + 0x1e8);
          lVar13 = *(long *)(unaff_x22 + 0x1c8);
          lVar16 = *(long *)(unaff_x22 + 0x1d0);
          lVar22 = *(long *)(unaff_x22 + 0x1c0);
          plVar7[0x33] = (long)puVar8;
          plVar7[0x34] = (long)puVar18;
          plVar7[0x31] = lVar22;
          plVar7[0x32] = lVar12;
          plVar7[0x2f] = lVar13;
          plVar7[0x30] = lVar16;
          plVar7[0x2e] = unaff_x22 + 400;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(FUN_101a28458,0,0);
          return;
        }
        uVar20 = ((ulong *)(lVar16 + 0x40))[lVar22];
      }
      uVar17 = *(undefined8 *)(unaff_x22 + 0x1c0);
      uVar15 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar20 = uVar20 - 1 & uVar20;
      uVar1 = *(uint *)(*(long *)(lVar16 + 0x30) + LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) * 4 +
                       lVar22 * 0x100);
      uVar23 = (ulong)uVar1;
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c490d0();
      func_0x000107c4e924();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      *(undefined8 *)(unaff_x22 + 0x1a8) = uVar17;
      func_0x0001000285a8(0x112dec568,&UNK_10d9b8318);
      uVar15 = unaff_x22 + 0x1b8;
      func_0x0001048da110(unaff_x22 + 0x1b0);
      func_0x000107c61170(uVar17);
      uVar19 = *(ulong *)(unaff_x22 + 0x1b0);
      uVar5 = uVar19;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a26c58);
        (*pcVar2)();
      }
      uVar6 = uVar5;
      func_0x000107c5d0f0();
      func_0x000107c61170(uVar5);
      if ((int)uVar6 != 0) break;
      uVar6 = *(ulong *)(unaff_x22 + 0x1c0);
      func_0x000107c5b198();
      func_0x000107c61180();
      uVar5 = uVar6;
      func_0x000103be4240();
      func_0x000107c61170(uVar6);
      if ((uVar5 & 1) != 0) break;
      func_0x000107c61170(uVar19);
    }
    uVar5 = uVar19;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a26c60);
      (*pcVar2)();
    }
    uVar6 = uVar5;
    func_0x000107c44430();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a26c5c);
      (*pcVar2)();
    }
    uVar5 = uVar6;
    func_0x000107c42378();
    func_0x000107c61170(uVar6);
    puVar8 = puVar18;
    func_0x000107c61558();
    uVar11 = (uint)puVar8;
    uVar6 = uVar23;
    func_0x00010149a22c();
    uVar10 = (uint)uVar15;
    uVar14 = (ulong)~uVar10 & 1;
    if (SCARRY8(*(long *)(puVar18 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a26c50);
      (*pcVar2)();
    }
    if (*(long *)(puVar18 + 0x18) < (long)(*(long *)(puVar18 + 0x10) + uVar14)) {
      FUN_101a2d484();
      func_0x00010149a22c();
      uVar15 = uVar15 & 0xffffffff;
      if ((uVar10 & 1) != (uVar11 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0)
                  (PTR___ss6UInt32VN_11034f020);
        return;
      }
    }
    else {
      uVar23 = uVar6;
      if (((ulong)puVar8 & 1) == 0) {
        FUN_101a2d1ec();
      }
    }
    if ((uVar15 & 1) == 0) {
      *(ulong *)(puVar18 + (uVar23 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar18 + (uVar23 >> 6) * 8 + 0x40) | 1L << (uVar23 & 0x3f);
      *(uint *)(*(long *)(puVar18 + 0x30) + uVar23 * 4) = uVar1;
      *(double *)(*(long *)(puVar18 + 0x38) + uVar23 * 8) = (double)uVar5;
      func_0x000107c61170(uVar19);
      if (SCARRY8(*(long *)(puVar18 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a26c54);
        (*pcVar2)();
      }
      *(long *)(puVar18 + 0x10) = *(long *)(puVar18 + 0x10) + 1;
    }
    else {
      *(double *)(*(long *)(puVar18 + 0x38) + uVar23 * 8) = (double)uVar5;
      func_0x000107c61170(uVar19);
    }
  } while( true );
}



/* Entry: 101a26c60; end: 101a26cbb;  */

void FUN_101a26c60(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x208));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a26f24;
  }
  else {
    *(long *)(lVar2 + 0x230) = unaff_x20;
    pcVar1 = FUN_101a27168;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a26cbc; end: 101a26d67;  */

void FUN_101a26cbc(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x218) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x210));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101a26dec,0,0);
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x220) = plVar1;
  func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_101a26d68;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101a26d68; end: 101a26deb;  */

void FUN_101a26d68(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x220));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a26db0,0,0);
  return;
}



/* Entry: 101a26dec; end: 101a26e87;  */

void FUN_101a26dec(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 400);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(uVar3,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x228) = plVar2;
  func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a26e88;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101a26e88; end: 101a26ecf;  */

void FUN_101a26e88(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x228));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a26ed0,0,0);
  return;
}



/* Entry: 101a26ed0; end: 101a26f23;  */

void FUN_101a26ed0(void)

{
  long unaff_x22;
  
  func_0x000107c615a8(unaff_x22 + 0x10);
  func_0x000107c61654();
  *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0x218);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a27168,0,0);
  return;
}



/* Entry: 101a26f24; end: 101a27167;  */

void FUN_101a26f24(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long unaff_x22;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  lVar6 = *(long *)(unaff_x22 + 0x200);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x178,0,0);
  uVar5 = *(ulong *)(lVar6 + 0x10);
  if ((uVar5 & 0xc000000000000001) == 0) {
    uVar8 = -1L << ((ulong)*(byte *)(uVar5 + 0x20) & 0x3f);
    puVar9 = (ulong *)(uVar5 + 0x38);
    uVar7 = ~uVar8;
    uVar8 = -uVar8;
    uVar11 = 0xffffffffffffffff;
    if (uVar8 < 0x40) {
      uVar11 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar11 = uVar11 & *puVar9;
    uVar8 = uVar5;
    func_0x000107c61434();
    lVar6 = 0;
  }
  else {
    uVar8 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar8 = uVar5;
    }
    func_0x000107c61434(uVar5);
    func_0x000107c60288();
    uVar3 = 0;
    func_0x000101a2fd90(0,0x112d51158,&PTR_PTR_1126bcf20);
    uVar4 = uVar3;
    func_0x000100fac9e4();
    func_0x000107c5fe30(unaff_x22 + 0x150,uVar8,uVar3,uVar4);
    uVar5 = *(ulong *)(unaff_x22 + 0x150);
    puVar9 = *(ulong **)(unaff_x22 + 0x158);
    uVar7 = *(ulong *)(unaff_x22 + 0x160);
    lVar6 = *(long *)(unaff_x22 + 0x168);
    uVar11 = *(ulong *)(unaff_x22 + 0x170);
  }
  uVar12 = uVar11;
  lVar10 = lVar6;
  if ((long)uVar5 < 0) goto LAB_101a2707c;
  while( true ) {
    while (uVar11 != 0) {
      uVar8 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = *(ulong *)(*(long *)(uVar5 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                        lVar6 * 0x200);
      func_0x000107c61174(uVar8);
      uVar11 = uVar11 - 1 & uVar11;
      while( true ) {
        if (uVar8 == 0) goto LAB_101a27104;
        func_0x000107c4170c(*(undefined8 *)(unaff_x22 + 0x1c0));
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c61170();
        uVar12 = uVar11;
        lVar10 = lVar6;
        if (-1 < (long)uVar5) break;
LAB_101a2707c:
        func_0x000107c602ac();
        lVar10 = lVar6;
        if (uVar8 == 0) goto LAB_101a27104;
        *(ulong *)(unaff_x22 + 0x1a0) = uVar8;
        uVar4 = 0;
        func_0x000101a2fd90(0,0x112d51158,&PTR_PTR_1126bcf20);
        func_0x000107c6147c(unaff_x22 + 0x198,unaff_x22 + 0x1a0,PTR___syXlN_11034f1a0 + 8,uVar4,7);
        uVar8 = *(ulong *)(unaff_x22 + 0x198);
        uVar11 = uVar12;
      }
    }
    bVar2 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a27168);
      (*pcVar1)();
    }
    if ((long)(uVar7 + 0x40 >> 6) <= lVar6) break;
    uVar11 = puVar9[lVar6];
  }
  uVar12 = 0;
LAB_101a27104:
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000100cc31c8(uVar5,puVar9,uVar7,lVar10,uVar12);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(uVar13);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101a27160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a27168; end: 101a271af;  */

void FUN_101a27168(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x200));
  func_0x000107c6142c(uVar2);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a271ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a271b0; end: 101a272bf; -[_TtC28SCSnapMemoriesTranscoderImpl26SnapMemoriesTranscoderImpl overlayAndUcoTranscodeWithSnapDoc:cancelable:] */

void FUN_101a271b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
  puVar1 = &UNK_11042dc18;
  func_0x000107c613fc(&UNK_11042dc18,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c615f4(param_4,2);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar2 = 0x6e;
  func_0x000104887c7c(0x6e,0,0x40,4,0xd00000000000002b,0x800000010efc96f0,&UNK_10d9b83c8,puVar1);
  func_0x000107c61574(puVar1);
  func_0x00010488b12c();
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101a272c0; end: 101a27477;  */

undefined * FUN_101a272c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_11042d8f8;
  func_0x000107c613fc(&UNK_11042d8f8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  puVar4 = &UNK_11042d920;
  func_0x000107c613fc(&UNK_11042d920,0x48,7);
  *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(code **)(puVar4 + 0x20) = FUN_101a2ca98;
  *(undefined **)(puVar4 + 0x28) = puVar3;
  *(undefined8 *)(puVar4 + 0x30) = param_2;
  *(undefined8 *)(puVar4 + 0x38) = param_3;
  *(undefined **)(puVar4 + 0x40) = puVar2;
  FUN_101a2cbac(param_2,param_3);
  func_0x000107c61174(puVar2);
  FUN_101a2cbac(param_2,param_3);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar3);
  uVar5 = 0x109;
  func_0x0001001ca524(0x109,0,0x40,4,0,0,&UNK_10d9b82a8,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar4);
  uStack_60 = 0x101a2cbbc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11042d938;
  ppuVar6 = &puStack_80;
  uStack_58 = uVar5;
  func_0x000107c60bc4(ppuVar6);
  uVar1 = uStack_58;
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(uVar1);
  func_0x000107c53164(puVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c60bd0(ppuVar6);
  return puVar2;
}



/* Entry: 101a27478; end: 101a2749b;  */

void FUN_101a27478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_7;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_8;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2749c,0,0);
  return;
}



/* Entry: 101a2749c; end: 101a2761f;  */

/* WARNING: Removing unreachable block (ram,0x000101a27504) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a2749c(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa0) + _DAT_112dec448);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar1;
  func_0x0001000285a8(0x112dec548,&UNK_10d9b82b0);
  func_0x0001048da110(unaff_x22 + 0x88);
  func_0x000107c615e8(uVar1);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar3;
  func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
  func_0x000107c43de8();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000100759c94();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar1;
  func_0x000107c61170(uVar3);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a27620;
                    /* WARNING: Could not recover jumptable at 0x000101a2761c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100ff4658)();
  return;
}



/* Entry: 101a27620; end: 101a27673;  */

void FUN_101a27620(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xf0) = param_1;
  *(undefined1 *)(lVar1 + 0x55) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a27674,0,0);
  return;
}



/* Entry: 101a27674; end: 101a27933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a27674(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long unaff_x22;
  long lVar13;
  
  puVar9 = *(undefined **)(unaff_x22 + 0xf0);
  if (*(char *)(unaff_x22 + 0x55) == '\x01') {
    *(undefined **)(unaff_x22 + 0x98) = puVar9;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar8 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x98,uVar8,PTR___ss5ErrorWS_11034ee10);
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  }
  else {
    puVar3 = *(undefined1 **)(unaff_x22 + 0xe0);
    func_0x000107c61574();
    if (puVar9 != (undefined *)0x0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar8 = 0;
      func_0x000103aeb250(0);
      func_0x000103ae9d4c(unaff_x22 + 0x10,uVar10,uVar8);
      lVar13 = *(long *)(unaff_x22 + 0x18);
      if (lVar13 != 0) {
        lVar7 = *(long *)(unaff_x22 + 0x10);
        iVar2 = (int)*(undefined8 *)(*(long *)(unaff_x22 + 0xa0) + _DAT_112dec450);
        uVar8 = 0xd00000000000002c;
        func_0x000107c5fadc(0xd00000000000002c,0x800000010efc96a0);
        func_0x000107c3ebd4();
        func_0x000107c61170(uVar8);
        if (iVar2 != 0) {
          plVar12 = (long *)0x60;
          func_0x000107c61434(lVar13);
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0xf8) = plVar12;
          *plVar12 = unaff_x22;
          plVar12[1] = (long)FUN_101a27934;
          lVar11 = *(long *)(unaff_x22 + 0xa0);
          plVar12[4] = lVar13;
          plVar12[5] = lVar11;
          plVar12[3] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(FUN_101a27fc8,0,0);
          return;
        }
        FUN_101a2fbd0(unaff_x22 + 0x10,0x112deb530,&UNK_10d9b82d0);
        uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
        func_0x0001000d224c(unaff_x22 + 0x58);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
        lVar13 = *(long *)(unaff_x22 + 0x78);
        func_0x000101a2fbac(unaff_x22 + 0x58,uVar8);
        func_0x000107c5b198();
        func_0x000107c61180();
        *(undefined8 *)(unaff_x22 + 0x118) = uVar6;
        piVar5 = *(int **)(lVar13 + 0x18);
        iVar2 = *piVar5;
        plVar12 = (long *)(ulong)(uint)piVar5[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x120) = plVar12;
        *plVar12 = unaff_x22;
        plVar12[1] = (long)FUN_101a27ba8;
                    /* WARNING: Could not recover jumptable at 0x000101a27930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar2 + (long)piVar5))(uVar6,uVar8,lVar13);
        return;
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x55);
      (**(code **)(unaff_x22 + 0xb0))(uVar6);
      func_0x000100fee724(uVar8,uVar1);
      func_0x000107c615e8(uVar10);
      goto LAB_101a27834;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
    func_0x000101a2cdac();
    puVar9 = &UNK_11042dcb0;
    func_0x000107c613f8(&UNK_11042dcb0,puVar3,0,0);
    *puVar3 = 0;
    func_0x000107c61654();
  }
  func_0x000107c615e8(uVar8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  puVar4 = puVar9;
  func_0x000107c5ed2c(puVar9);
  func_0x000107c43b70(uVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c614ac(puVar9);
LAB_101a27834:
                    /* WARNING: Could not recover jumptable at 0x000101a2784c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a27934; end: 101a2799b;  */

void FUN_101a27934(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x56) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xf8));
  FUN_101a2fbd0(lVar1 + 0x10,0x112deb530,&UNK_10d9b82d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2799c,0,0);
  return;
}



/* Entry: 101a2799c; end: 101a27acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a2799c(void)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  
  bVar3 = *(byte *)(unaff_x22 + 0x56);
  FUN_101a2fbd0(unaff_x22 + 0x10,0x112deb530,&UNK_10d9b82d0);
  if ((bVar3 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
    func_0x0001000d224c(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar8 = *(long *)(unaff_x22 + 0x78);
    func_0x000101a2fbac(unaff_x22 + 0x58,uVar2);
    func_0x000107c5b198();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x22 + 0x118) = uVar7;
    piVar6 = *(int **)(lVar8 + 0x18);
    iVar1 = *piVar6;
    plVar5 = (long *)(ulong)(uint)piVar6[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x120) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101a27ba8;
                    /* WARNING: Could not recover jumptable at 0x000101a27a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))(uVar7,uVar2,lVar8);
    return;
  }
  lVar8 = *(long *)(unaff_x22 + 0xf0);
  puVar4 = PTR_PTR_1126b2798;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x100) = puVar4;
  plVar5 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a27acc;
  plVar5[0x17] = lVar8;
  plVar5[0x18] = (long)puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2e4f8,0,0);
  return;
}



/* Entry: 101a27acc; end: 101a27b2f;  */

void FUN_101a27acc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x110) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x108));
  func_0x000107c61170(*(undefined8 *)(lVar2 + 0x100));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x101a300ac;
  }
  else {
    pcVar1 = FUN_101a27b30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a27b30; end: 101a27ba7;  */

void FUN_101a27b30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000100fee724(*(undefined8 *)(unaff_x22 + 0xf0),*(undefined1 *)(unaff_x22 + 0x55));
  func_0x000107c615e8(uVar2);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = uVar3;
  func_0x000107c5ed2c(uVar3);
  func_0x000107c43b70(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c614ac(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a27ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a27ba8; end: 101a27c0f;  */

void FUN_101a27ba8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x128) = param_1;
  *(long *)(lVar2 + 0x130) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x120));
  func_0x000107c61170(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a27c10;
  }
  else {
    pcVar1 = FUN_101a27eb4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a27c10; end: 101a27c7f;  */

void FUN_101a27c10(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  FUN_101a2fb78(unaff_x22 + 0x58);
  puVar1 = PTR_PTR_1126b2798;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x138) = puVar1;
  plVar2 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x140) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a27c80;
  plVar2[0x17] = lVar3;
  plVar2[0x18] = (long)puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2e4f8,0,0);
  return;
}



/* Entry: 101a27c80; end: 101a27cf3;  */

void FUN_101a27c80(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x148) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x140));
  if (unaff_x20 == 0) {
    func_0x000107c61170(*(undefined8 *)(lVar2 + 0x138));
    pcVar1 = FUN_101a27cf4;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x128);
    func_0x000107c61170(*(undefined8 *)(lVar2 + 0x138));
    func_0x000107c6142c(uVar3);
    pcVar1 = FUN_101a27de0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a27cf4; end: 101a27d6f;  */

void FUN_101a27cf4(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0xf0);
  puVar2 = PTR_PTR_1126b2798;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x150) = puVar2;
  plVar3 = (long *)0x240;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x158) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101a27d70;
  lVar4 = *(long *)(unaff_x22 + 0x128);
  lVar1 = *(long *)(unaff_x22 + 0xc0);
  lVar5 = *(long *)(unaff_x22 + 0xa0);
  plVar3[0x3c] = *(long *)(unaff_x22 + 200);
  plVar3[0x3d] = lVar5;
  plVar3[0x3a] = (long)puVar2;
  plVar3[0x3b] = lVar1;
  plVar3[0x38] = lVar6;
  plVar3[0x39] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2672c,0,0);
  return;
}



/* Entry: 101a27d70; end: 101a27ddf;  */

void FUN_101a27d70(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x160) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x158));
  uVar3 = *(undefined8 *)(lVar2 + 0x128);
  func_0x000107c61170(*(undefined8 *)(lVar2 + 0x150));
  func_0x000107c6142c(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a27e58;
  }
  else {
    pcVar1 = FUN_101a27f34;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a27de0; end: 101a27e57;  */

void FUN_101a27de0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000100fee724(*(undefined8 *)(unaff_x22 + 0xf0),*(undefined1 *)(unaff_x22 + 0x55));
  func_0x000107c615e8(uVar2);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = uVar3;
  func_0x000107c5ed2c(uVar3);
  func_0x000107c43b70(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c614ac(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a27e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a27e58; end: 101a27eb3;  */

void FUN_101a27e58(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x55);
  (**(code **)(unaff_x22 + 0xb0))(uVar2);
  func_0x000100fee724(uVar2,uVar1);
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a27eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a27eb4; end: 101a27f33;  */

void FUN_101a27eb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000100fee724(*(undefined8 *)(unaff_x22 + 0xf0),*(undefined1 *)(unaff_x22 + 0x55));
  func_0x000107c615e8(uVar2);
  FUN_101a2fb78(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = uVar3;
  func_0x000107c5ed2c(uVar3);
  func_0x000107c43b70(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c614ac(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a27f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a27f34; end: 101a27fab;  */

void FUN_101a27f34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000100fee724(*(undefined8 *)(unaff_x22 + 0xf0),*(undefined1 *)(unaff_x22 + 0x55));
  func_0x000107c615e8(uVar2);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = uVar3;
  func_0x000107c5ed2c(uVar3);
  func_0x000107c43b70(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c614ac(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a27fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a27fac; end: 101a27fc7;  */

void FUN_101a27fac(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a27fc8,0,0);
  return;
}



/* Entry: 101a27fc8; end: 101a280b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a27fc8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x28) + _DAT_112dec458);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  if (lVar1 != 0) {
    func_0x0001000285a8(0x112dec558,&UNK_10d9b82f0);
    func_0x000107c4332c();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000100759c94();
    *(long *)(unaff_x22 + 0x38) = lVar2;
    func_0x000107c61170(lVar1);
    plVar3 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101a280b4;
                    /* WARNING: Could not recover jumptable at 0x000101a28094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_101a2cdec();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101a280b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 101a280b4; end: 101a28107;  */

void FUN_101a280b4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x48) = param_1;
  *(undefined1 *)(lVar1 + 0x50) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a28108,0,0);
  return;
}



/* Entry: 101a28108; end: 101a28223;  */

void FUN_101a28108(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x48);
  if (*(char *)(unaff_x22 + 0x50) == '\x01') {
    *(long *)(unaff_x22 + 0x10) = lVar5;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar6);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x30));
    uVar6 = 1;
    func_0x000100cc3260(uVar3,1);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    if (lVar5 == 0) {
      func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x30));
      uVar6 = 1;
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x50);
      func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x22 + 0x20));
      uVar6 = uVar4;
      func_0x000107c40404(uVar4);
      func_0x000107c61170(uVar3);
      func_0x000100cc3260(uVar4,uVar1);
      func_0x000107c615e8(uVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101a28220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar6);
  return;
}



/* Entry: 101a28224; end: 101a282db; -[_TtC28SCSnapMemoriesTranscoderImpl26SnapMemoriesTranscoderImpl cancelableOverlayAndUcoTranscodeWithSnapDoc:progressHandler:] */

void FUN_101a28224(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_11042d8d0;
    func_0x000107c613fc(&UNK_11042d8d0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar3 = 0x101a2ca8c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101a272c0(param_3,uVar3,puVar2);
  FUN_101a2ca7c(uVar3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a282dc; end: 101a28323;  */

bool FUN_101a282dc(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c4c930();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c3e240();
    func_0x000107c61170(param_1);
    return (int)lVar2 == 5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a28324);
  (*pcVar1)();
}



/* Entry: 101a28324; end: 101a283e7;  */

void FUN_101a28324(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  lVar2 = param_1;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4c99c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c61428(param_2 + 0x10,auStack_60,0x21,0);
      func_0x000107c61174(lVar3);
      FUN_101a2d944(&uStack_48,lVar3);
      func_0x000107c614a8(auStack_60);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uStack_48);
    }
    func_0x000107c563e8(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a283e8);
  (*pcVar1)();
}



/* Entry: 101a283e8; end: 101a28433;  */

void FUN_101a283e8(long param_1,undefined8 param_2)

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



/* Entry: 101a28434; end: 101a28457;  */

void FUN_101a28434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x198) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_8;
  *(undefined8 *)(unaff_x22 + 0x188) = param_5;
  *(undefined8 *)(unaff_x22 + 400) = param_6;
  *(undefined8 *)(unaff_x22 + 0x178) = param_3;
  *(undefined8 *)(unaff_x22 + 0x180) = param_4;
  *(undefined8 *)(unaff_x22 + 0x170) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a28458,0,0);
  return;
}



/* Entry: 101a28458; end: 101a28e83;  */

/* WARNING: Removing unreachable block (ram,0x000101a28d2c) */
/* WARNING: Removing unreachable block (ram,0x000101a28be8) */
/* WARNING: Removing unreachable block (ram,0x000101a28c4c) */
/* WARNING: Removing unreachable block (ram,0x000101a28c58) */
/* WARNING: Removing unreachable block (ram,0x000101a28b50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a28458(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long unaff_x22;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  long lVar28;
  long lStack_d8;
  long lStack_c8;
  
  *(long *)(unaff_x22 + 0x1a8) = unaff_x22;
  bVar4 = *(byte *)(*(long *)(unaff_x22 + 0x178) + 0x20);
  *(byte *)(unaff_x22 + 0x2c8) = bVar4;
  lVar28 = _DAT_112dec440;
  uVar16 = *(ulong *)(*(long *)(unaff_x22 + 0x178) + 0x40);
  uVar27 = 0xffffffffffffffff;
  if ((bVar4 & 0x3f) < 6) {
    uVar27 = ~(-1L << (1L << ((ulong)bVar4 & 0x3f) & 0x3fU));
  }
  *(undefined8 *)(unaff_x22 + 0x1b0) = _DAT_112dec430;
  lVar11 = _DAT_112dec448;
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(*(long *)(unaff_x22 + 400) + lVar28);
  uVar27 = uVar27 & uVar16;
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(*(long *)(unaff_x22 + 400) + lVar11);
  *(undefined4 *)(unaff_x22 + 0x2b8) = 0x5a;
  func_0x000107c61434();
  lVar28 = 0;
  lVar11 = lVar28;
  if (uVar27 == 0) goto LAB_101a2850c;
LAB_101a28504:
  lVar6 = *(long *)(unaff_x22 + 0x178);
  do {
    *(ulong *)(unaff_x22 + 0x1c8) = uVar27;
    *(long *)(unaff_x22 + 0x1d0) = lVar28;
    uVar16 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar28 << 6;
    uVar3 = *(undefined4 *)(*(long *)(lVar6 + 0x30) + uVar16 * 4);
    *(undefined4 *)(unaff_x22 + 700) = uVar3;
    puVar15 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar16 * 0x20);
    uVar18 = *puVar15;
    *(undefined8 *)(unaff_x22 + 0x1d8) = uVar18;
    uVar26 = puVar15[1];
    *(undefined8 *)(unaff_x22 + 0x1e0) = uVar26;
    uVar23 = puVar15[2];
    *(undefined8 *)(unaff_x22 + 0x1e8) = uVar23;
    uVar17 = puVar15[3];
    *(undefined8 *)(unaff_x22 + 0x1f0) = uVar17;
    uVar7 = uVar26;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000100de78a0(uVar23,uVar17);
    func_0x000107c5fd64();
    uVar16 = *(ulong *)(unaff_x22 + 0x180);
    if (uVar16 == 0) {
      lVar28 = *(long *)(unaff_x22 + 0x1a8);
      puVar13 = (undefined1 *)0x0;
LAB_101a28b88:
      uVar26 = *(undefined8 *)(unaff_x22 + 0x178);
      func_0x000101a2cdac();
      func_0x000107c613f8(&UNK_11042dcb0,puVar13,0,0);
      *puVar13 = 4;
      func_0x000107c61654();
      func_0x000107c61574(uVar26);
      func_0x000107c61170(uVar18);
      func_0x000107c61170(uVar7);
      func_0x0001000b44c0(uVar23,uVar17);
                    /* WARNING: Could not recover jumptable at 0x000101a28cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar28 + 8))();
      return;
    }
    func_0x000107c615f0();
    func_0x000107c49b28();
    if ((uVar16 & 1) != 0) {
      puVar13 = *(undefined1 **)(unaff_x22 + 0x180);
      func_0x000107c615e8();
      lVar28 = unaff_x22;
      goto LAB_101a28b88;
    }
    uVar19 = *(undefined8 *)(unaff_x22 + 0x188);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c490d0();
    func_0x000107c4e924();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    *(undefined8 *)(unaff_x22 + 0x118) = uVar19;
    func_0x0001000285a8(0x112dec568,&UNK_10d9b8318);
    func_0x0001048da110(unaff_x22 + 0x120);
    func_0x000107c61170(uVar19);
    lVar6 = *(long *)(unaff_x22 + 0x120);
    *(long *)(unaff_x22 + 0x200) = lVar6;
    lVar11 = lVar6;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101a28e80);
      (*pcVar5)();
    }
    lVar20 = lVar11;
    func_0x000107c44430();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    if (lVar20 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101a28e7c);
      (*pcVar5)();
    }
    lVar11 = lVar20;
    func_0x000107c42378();
    func_0x000107c61170(lVar20);
    if (lVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101a28e78);
      (*pcVar5)();
    }
    func_0x000107c60a40(unaff_x22 + 0x288,lVar11,1000);
    *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x288);
    *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0x290);
    *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x298);
    lVar11 = lVar6;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101a28e84);
      (*pcVar5)();
    }
    lVar20 = lVar11;
    func_0x000107c5d0f0();
    func_0x000107c61170(lVar11);
    if ((int)lVar20 == 0) {
      uVar9 = *(ulong *)(unaff_x22 + 0x188);
      func_0x000107c5b198();
      func_0x000107c61180();
      uVar16 = uVar9;
      func_0x000103be4240();
      func_0x000107c61170(uVar9);
      if ((uVar16 & 1) == 0) {
        uVar19 = *(undefined8 *)(unaff_x22 + 0x1b8);
        func_0x000107c5c734();
        func_0x000107c61180();
        *(undefined8 *)(unaff_x22 + 0x140) = uVar19;
        func_0x0001000285a8(0x112dec588,&UNK_10d9b8348);
        func_0x0001048da110(unaff_x22 + 0x148);
        *(undefined8 *)(unaff_x22 + 0x218) = 0;
        uVar22 = *(undefined8 *)(unaff_x22 + 0x188);
        func_0x000107c615e8(uVar19);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x148);
        *(undefined8 *)(unaff_x22 + 0x220) = uVar19;
        func_0x000103fb0954(0);
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174(uVar7);
        func_0x000100de78a0(uVar23,uVar17);
        func_0x000103fb0724(uVar18,uVar26,uVar23,uVar17);
        *(undefined8 *)(unaff_x22 + 0x228) = uVar18;
        func_0x000107c5b198();
        func_0x000107c61180();
        uVar7 = uVar22;
        func_0x000107c3f5f8();
        func_0x000107c61180();
        *(undefined8 *)(unaff_x22 + 0x230) = uVar7;
        func_0x000107c61170(uVar22);
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x150;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(undefined8 *)(unaff_x22 + 0x18) = 0x101a28ec0;
        lVar28 = unaff_x22 + 0x10;
        func_0x000107c61448(lVar28,1);
        uVar7 = 0x112d9f9b0;
        func_0x0001000285a8(0x112d9f9b0,&UNK_10d9b8350);
        *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x88) = uVar7;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
        *(code **)(unaff_x22 + 0x60) = FUN_101a2a01c;
        *(undefined **)(unaff_x22 + 0x68) = &UNK_11042d9d8;
        *(long *)(unaff_x22 + 0x70) = lVar28;
        func_0x000107c5cf00(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
        return;
      }
    }
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1c0);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x22 + 0x130) = uVar19;
    func_0x0001000285a8(0x112dec548,&UNK_10d9b82b0);
    lStack_d8 = unaff_x22 + 0x128;
    func_0x0001048da110(unaff_x22 + 0x138);
    lVar20 = *(long *)(unaff_x22 + 0x188);
    func_0x000107c615e8(uVar19);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x138);
    func_0x000107c5b198();
    func_0x000107c61180();
    lVar11 = lVar20;
    func_0x000107c3f5f8();
    func_0x000107c61180();
    func_0x000107c61170(lVar20);
    if (lVar11 == 0) {
      lStack_c8 = 0;
      lStack_d8 = -0x2000000000000000;
    }
    else {
      lStack_c8 = lVar11;
      func_0x000107c5faec();
      func_0x000107c61170(lVar11);
    }
    lVar14 = *(long *)(unaff_x22 + 0x1b0);
    uVar25 = *(ulong *)(unaff_x22 + 0x1a0);
    lVar20 = *(long *)(unaff_x22 + 400);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x188);
    lVar11 = 0x112d453c8;
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar16 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xf;
    uVar10 = uVar16 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    lVar11 = 0;
    func_0x000107c5fd0c();
    lVar21 = *(long *)(lVar11 + -8);
    (**(code **)(lVar21 + 0x38))(uVar10,1,1,lVar11);
    uVar24 = *(undefined8 *)(lVar20 + lVar14);
    puVar8 = &UNK_11042d9c0;
    func_0x000107c613fc(&UNK_11042d9c0,0x90,7);
    *(long *)(puVar8 + 0x10) = 0;
    *(undefined8 *)(puVar8 + 0x18) = 0;
    *(undefined8 *)(puVar8 + 0x20) = uVar2;
    *(undefined8 *)(puVar8 + 0x28) = uVar24;
    *(long *)(puVar8 + 0x30) = lVar6;
    *(ulong *)(puVar8 + 0x38) = uVar25;
    *(undefined4 *)(puVar8 + 0x40) = uVar3;
    *(long *)(puVar8 + 0x48) = lStack_c8;
    *(long *)(puVar8 + 0x50) = lStack_d8;
    *(undefined8 *)(puVar8 + 0x58) = uVar22;
    *(undefined8 *)(puVar8 + 0x60) = uVar19;
    *(undefined8 *)(puVar8 + 0x68) = uVar18;
    *(undefined8 *)(puVar8 + 0x70) = uVar26;
    *(undefined8 *)(puVar8 + 0x78) = uVar23;
    *(undefined8 *)(puVar8 + 0x80) = uVar17;
    *(undefined8 *)(puVar8 + 0x88) = uVar1;
    uVar16 = uVar16 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    FUN_101a2fd48(uVar10,uVar16,0x112d453c8,&UNK_10d90ac60);
    uVar9 = uVar16;
    (**(code **)(lVar21 + 0x30))(uVar16,1,lVar11);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000100de78a0(uVar23,uVar17);
    func_0x000107c615f0(uVar22);
    func_0x000107c6157c(uVar1);
    func_0x000107c615f0(uVar19);
    func_0x000107c61174(uVar24);
    func_0x000107c61174(lVar6);
    func_0x000107c615f0(uVar2);
    func_0x000107c6157c(uVar25);
    if ((int)uVar9 == 1) {
      FUN_101a2fbd0(uVar16,0x112d453c8,&UNK_10d90ac60);
      uVar9 = 0x3100;
    }
    else {
      func_0x000107c5fd08();
      (**(code **)(lVar21 + 8))(uVar16,lVar11);
      uVar9 = uVar25 & 0xff | 0x3100;
    }
    func_0x000107c615c0(uVar16);
    lVar11 = *(long *)(puVar8 + 0x10);
    if (lVar11 == 0) {
      lVar20 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(puVar8 + 0x18);
      lVar20 = lVar11;
      func_0x000107c614f0();
      func_0x000107c615f0(lVar11);
      func_0x000107c5fca8();
      func_0x000107c615e8(lVar11);
    }
    uVar26 = **(undefined8 **)(unaff_x22 + 0x170);
    func_0x000107c6157c(puVar8);
    if (lVar14 == 0 && lVar20 == 0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      *(undefined8 *)(unaff_x22 + 0xc0) = 0;
      *(undefined8 *)(unaff_x22 + 200) = 0;
      *(long *)(unaff_x22 + 0xd0) = lVar20;
      *(long *)(unaff_x22 + 0xd8) = lVar14;
      puVar15 = (undefined8 *)(unaff_x22 + 0xc0);
    }
    uVar22 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar27 = uVar27 - 1 & uVar27;
    *(undefined8 *)(unaff_x22 + 0xe0) = 1;
    *(undefined8 **)(unaff_x22 + 0xe8) = puVar15;
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar26;
    func_0x000107c615bc(uVar9,unaff_x22 + 0xe0,PTR___sytN_11034f1b0 + 8,&UNK_10d9b8340,puVar8);
    func_0x000107c61574(puVar8);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar7);
    func_0x000107c61574(uVar9);
    func_0x0001000b44c0(uVar23,uVar17);
    func_0x000107c615e8(uVar22);
    func_0x000107c61170(lVar6);
    func_0x000107c615e8(uVar19);
    FUN_101a2fbd0(uVar10,0x112d453c8,&UNK_10d90ac60);
    func_0x000107c615c0(uVar10);
    lVar11 = lVar28;
    if (uVar27 != 0) goto LAB_101a28504;
LAB_101a2850c:
    do {
      lVar28 = lVar11 + 1;
      if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101a28e74);
        (*pcVar5)();
      }
      lVar6 = *(long *)(unaff_x22 + 0x178);
      if ((long)(0x3fU - (-1L << ((ulong)*(byte *)(unaff_x22 + 0x2c8) & 0x3f)) >> 6) <= lVar28) {
        func_0x000107c61574();
        plVar12 = (long *)0x90;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x1f8) = plVar12;
        *plVar12 = unaff_x22;
        plVar12[1] = (long)FUN_101a28e84;
                    /* WARNING: Could not recover jumptable at 0x000101a28b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        FUN_101a2c0b4(0,0);
        return;
      }
      uVar27 = *(ulong *)(lVar6 + lVar28 * 8 + 0x40);
      lVar11 = lVar11 + 1;
    } while (uVar27 == 0);
  } while( true );
}



/* Entry: 101a28e84; end: 101a28f17;  */

void FUN_101a28e84(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1f8));
                    /* WARNING: Could not recover jumptable at 0x000101a28ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a28f18; end: 101a292af;  */

/* WARNING: Removing unreachable block (ram,0x000101a29130) */

void FUN_101a28f18(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar9 = (ulong)*(uint *)(unaff_x22 + 0x2b8);
  lVar15 = *(long *)(unaff_x22 + 0x150);
  *(long *)(unaff_x22 + 0x240) = lVar15;
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x230));
  func_0x000107c61170(uVar6);
  lVar10 = lVar15;
  func_0x000108eb5cc8();
  func_0x000107c61180();
  if (lVar10 == 0) {
    lVar12 = 0;
    uVar9 = 0xf000000000000000;
  }
  else {
    lVar12 = lVar10;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar10);
  }
  lVar10 = *(long *)(unaff_x22 + 0x218);
  *(long *)(unaff_x22 + 0xf8) = lVar12;
  *(ulong *)(unaff_x22 + 0x100) = uVar9;
  puVar1 = (undefined8 *)0x112d56fe0;
  func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
  func_0x0001048da110(unaff_x22 + 0x108);
  if (lVar10 == 0) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2c0);
    func_0x0001000b44c0(lVar12,uVar9);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
    *(undefined8 *)(unaff_x22 + 0x248) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x250) = uVar3;
    puVar2 = PTR_PTR_1126b3080;
    func_0x000107c61168();
    uVar8 = uVar6;
    func_0x000107c5ee20(uVar6,uVar3);
    func_0x000107c412fc();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 600) = puVar2;
    func_0x000107c61170(uVar8);
    func_0x000107c5ee20(uVar6,uVar3);
    *(undefined8 *)(unaff_x22 + 0x2a0) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x2a8) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x2b0) = uVar13;
    uVar3 = uVar6;
    func_0x00010806926c();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    *(undefined8 *)(unaff_x22 + 0x158) = uVar3;
    func_0x0001000285a8(0x112dec590,&UNK_10d9b8360);
    func_0x0001048da110(unaff_x22 + 0x160);
    *(undefined8 *)(unaff_x22 + 0x260) = 0;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
    func_0x000107c61170(uVar3);
    *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(unaff_x22 + 0x160);
    func_0x000107c5d0f0();
    func_0x0001000285a8(0x112dc6618,&UNK_10dc50b80);
    func_0x000107c3d764();
    func_0x000107c61180();
    uVar6 = uVar8;
    func_0x000100759c94();
    *(undefined8 *)(unaff_x22 + 0x270) = uVar6;
    func_0x000107c61170(uVar8);
    plVar4 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = (code *)0x101a2cbfc;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x278) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101a292b0;
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
    func_0x000100faaf10();
    func_0x000107c613f8(&UNK_1107b5fe0,puVar1,0,0);
    *puVar1 = uVar7;
    func_0x000107c61574(uVar8);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar14);
    func_0x0001000b44c0(uVar6,uVar13);
    func_0x000107c615e8(uVar16);
    func_0x000107c61170(uVar5);
    func_0x0001000b44c0(lVar12,uVar9);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a29200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a292b0; end: 101a29303;  */

void FUN_101a292b0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x280) = param_1;
  *(undefined1 *)(lVar1 + 0x2c9) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x278));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a29304,0,0);
  return;
}



/* Entry: 101a29304; end: 101a29f5b;  */

/* WARNING: Removing unreachable block (ram,0x000101a29da0) */
/* WARNING: Removing unreachable block (ram,0x000101a29cfc) */

void FUN_101a29304(void)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  long unaff_x22;
  undefined8 uVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  ulong uVar36;
  long lStack_d8;
  long lStack_c8;
  
  cVar2 = *(char *)(unaff_x22 + 0x2c9);
  if (cVar2 == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x280);
    iVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar4 != 0) {
      uVar9 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x168,uVar9,PTR___ss5ErrorWS_11034ee10);
    }
    uVar22 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar18 = *(undefined8 *)(unaff_x22 + 600);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x200);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x180);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x270));
    func_0x000107c61574(uVar24);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar18);
    func_0x00010006c090(uVar29,uVar27);
    func_0x000107c615e8(uVar34);
    func_0x000107c61170(uVar35);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar31);
    func_0x0001000b44c0(uVar9,uVar20);
    func_0x000107c615e8(uVar25);
    func_0x000107c61170(uVar17);
LAB_101a2941c:
                    /* WARNING: Could not recover jumptable at 0x000101a29444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar19 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar18 = *(undefined8 *)(unaff_x22 + 600);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x188);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x270));
  func_0x000107c56420(uVar17);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c490d0();
  puVar6 = &UNK_11042da10;
  func_0x000107c613fc(&UNK_11042da10,0x20,7);
  puVar30 = (undefined8 *)(unaff_x22 + 0x90);
  *puVar30 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(puVar6 + 0x10) = uVar23;
  *(undefined8 *)(puVar6 + 0x18) = uVar17;
  *(undefined8 *)(unaff_x22 + 0xb0) = 0x101a2fb98;
  *(undefined **)(unaff_x22 + 0xb8) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
  *(code **)(unaff_x22 + 0xa0) = FUN_101a283e8;
  *(undefined **)(unaff_x22 + 0xa8) = &UNK_11042da28;
  func_0x000107c60bc4(puVar30);
  uVar33 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c6157c(uVar23);
  func_0x000107c61174(uVar17);
  func_0x000107c61574(uVar33);
  func_0x000107c5d5a8(uVar25);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c60bd0(puVar30);
  func_0x000107c61170(puVar5);
  func_0x000100cc3260(uVar19,cVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar31);
  func_0x0001000b44c0(uVar9,uVar20);
  func_0x000107c61170(uVar35);
  func_0x000107c615e8(uVar24);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x00010006c090(uVar27,uVar22);
  func_0x000107c61170(uVar34);
  func_0x000107c615e8(uVar29);
  lVar21 = *(long *)(unaff_x22 + 0x1d0);
  uVar36 = *(ulong *)(unaff_x22 + 0x1c8) - 1 & *(ulong *)(unaff_x22 + 0x1c8);
  lVar28 = *(long *)(unaff_x22 + 0x260);
  lVar12 = lVar21;
  if (uVar36 == 0) goto LAB_101a295fc;
LAB_101a295f4:
  lVar7 = *(long *)(unaff_x22 + 0x178);
  do {
    lVar12 = 0x112d453c8;
    *(ulong *)(unaff_x22 + 0x1c8) = uVar36;
    *(long *)(unaff_x22 + 0x1d0) = lVar21;
    uVar16 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar21 << 6;
    uVar1 = *(undefined4 *)(*(long *)(lVar7 + 0x30) + uVar16 * 4);
    *(undefined4 *)(unaff_x22 + 700) = uVar1;
    puVar30 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar16 * 0x20);
    uVar24 = *puVar30;
    *(undefined8 *)(unaff_x22 + 0x1d8) = uVar24;
    uVar8 = puVar30[1];
    *(undefined8 *)(unaff_x22 + 0x1e0) = uVar8;
    uVar31 = puVar30[2];
    *(undefined8 *)(unaff_x22 + 0x1e8) = uVar31;
    uVar20 = puVar30[3];
    *(undefined8 *)(unaff_x22 + 0x1f0) = uVar20;
    uVar9 = uVar8;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000100de78a0(uVar31,uVar20);
    func_0x000107c5fd64();
    if (lVar28 != 0) {
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x178));
      func_0x000107c61170(uVar24);
      func_0x000107c61170(uVar9);
      func_0x0001000b44c0(uVar31,uVar20);
      goto LAB_101a2941c;
    }
    uVar16 = *(ulong *)(unaff_x22 + 0x180);
    if (uVar16 == 0) {
      lVar21 = *(long *)(unaff_x22 + 0x1a8);
      puVar15 = (undefined1 *)0x0;
LAB_101a29c9c:
      uVar8 = *(undefined8 *)(unaff_x22 + 0x178);
      func_0x000101a2cdac();
      func_0x000107c613f8(&UNK_11042dcb0,puVar15,0,0);
      *puVar15 = 4;
      func_0x000107c61654();
      func_0x000107c61574(uVar8);
      func_0x000107c61170(uVar24);
      func_0x000107c61170(uVar9);
      func_0x0001000b44c0(uVar31,uVar20);
      unaff_x22 = lVar21;
      goto LAB_101a2941c;
    }
    func_0x000107c615f0();
    func_0x000107c49b28();
    if ((uVar16 & 1) != 0) {
      puVar15 = *(undefined1 **)(unaff_x22 + 0x180);
      func_0x000107c615e8();
      lVar21 = unaff_x22;
      goto LAB_101a29c9c;
    }
    uVar25 = *(undefined8 *)(unaff_x22 + 0x188);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c490d0();
    func_0x000107c4e924();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    *(undefined8 *)(unaff_x22 + 0x118) = uVar25;
    func_0x0001000285a8(0x112dec568,&UNK_10d9b8318);
    func_0x0001048da110(unaff_x22 + 0x120);
    func_0x000107c61170(uVar25);
    lVar7 = *(long *)(unaff_x22 + 0x120);
    *(long *)(unaff_x22 + 0x200) = lVar7;
    lVar28 = lVar7;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (lVar28 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a29f58);
      (*pcVar3)();
    }
    lVar26 = lVar28;
    func_0x000107c44430();
    func_0x000107c61180();
    func_0x000107c61170(lVar28);
    if (lVar26 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a29f54);
      (*pcVar3)();
    }
    lVar28 = lVar26;
    func_0x000107c42378();
    func_0x000107c61170(lVar26);
    if (lVar28 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a29f50);
      (*pcVar3)();
    }
    func_0x000107c60a40(unaff_x22 + 0x288,lVar28,1000);
    *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x288);
    *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0x290);
    *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x298);
    lVar28 = lVar7;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar28 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a29f5c);
      (*pcVar3)();
    }
    lVar26 = lVar28;
    func_0x000107c5d0f0();
    func_0x000107c61170(lVar28);
    if ((int)lVar26 == 0) {
      uVar10 = *(ulong *)(unaff_x22 + 0x188);
      func_0x000107c5b198();
      func_0x000107c61180();
      uVar16 = uVar10;
      func_0x000103be4240();
      func_0x000107c61170(uVar10);
      if ((uVar16 & 1) == 0) {
        uVar25 = *(undefined8 *)(unaff_x22 + 0x1b8);
        func_0x000107c5c734();
        func_0x000107c61180();
        *(undefined8 *)(unaff_x22 + 0x140) = uVar25;
        func_0x0001000285a8(0x112dec588,&UNK_10d9b8348);
        func_0x0001048da110(unaff_x22 + 0x148);
        *(undefined8 *)(unaff_x22 + 0x218) = 0;
        uVar17 = *(undefined8 *)(unaff_x22 + 0x188);
        func_0x000107c615e8(uVar25);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x148);
        *(undefined8 *)(unaff_x22 + 0x220) = uVar25;
        func_0x000103fb0954(0);
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174(uVar9);
        func_0x000100de78a0(uVar31,uVar20);
        func_0x000103fb0724(uVar24,uVar8,uVar31,uVar20);
        *(undefined8 *)(unaff_x22 + 0x228) = uVar24;
        func_0x000107c5b198();
        func_0x000107c61180();
        uVar9 = uVar17;
        func_0x000107c3f5f8();
        func_0x000107c61180();
        *(undefined8 *)(unaff_x22 + 0x230) = uVar9;
        func_0x000107c61170(uVar17);
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x150;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(undefined8 *)(unaff_x22 + 0x18) = 0x101a28ec0;
        lVar21 = unaff_x22 + 0x10;
        func_0x000107c61448(lVar21,1);
        uVar9 = 0x112d9f9b0;
        func_0x0001000285a8(0x112d9f9b0,&UNK_10d9b8350);
        *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x88) = uVar9;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
        *(code **)(unaff_x22 + 0x60) = FUN_101a2a01c;
        *(undefined **)(unaff_x22 + 0x68) = &UNK_11042d9d8;
        *(long *)(unaff_x22 + 0x70) = lVar21;
        func_0x000107c5cf00(uVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
        return;
      }
    }
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1c0);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x22 + 0x130) = uVar25;
    func_0x0001000285a8(0x112dec548,&UNK_10d9b82b0);
    lStack_d8 = unaff_x22 + 0x128;
    func_0x0001048da110(unaff_x22 + 0x138);
    lVar26 = *(long *)(unaff_x22 + 0x188);
    func_0x000107c615e8(uVar25);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x138);
    func_0x000107c5b198();
    func_0x000107c61180();
    lVar28 = lVar26;
    func_0x000107c3f5f8();
    func_0x000107c61180();
    func_0x000107c61170(lVar26);
    if (lVar28 == 0) {
      lStack_c8 = 0;
      lStack_d8 = -0x2000000000000000;
    }
    else {
      lStack_c8 = lVar28;
      func_0x000107c5faec();
      func_0x000107c61170(lVar28);
    }
    lVar32 = *(long *)(unaff_x22 + 0x1b0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar10 = *(ulong *)(unaff_x22 + 0x1a0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x188);
    lVar28 = *(long *)(unaff_x22 + 400);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x180);
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar16 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xf;
    uVar11 = uVar16 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    lVar12 = 0;
    func_0x000107c5fd0c();
    lVar26 = *(long *)(lVar12 + -8);
    (**(code **)(lVar26 + 0x38))(uVar11,1,1,lVar12);
    uVar27 = *(undefined8 *)(lVar28 + lVar32);
    puVar6 = &UNK_11042d9c0;
    func_0x000107c613fc(&UNK_11042d9c0,0x90,7);
    *(long *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    *(undefined8 *)(puVar6 + 0x20) = uVar18;
    *(undefined8 *)(puVar6 + 0x28) = uVar27;
    *(long *)(puVar6 + 0x30) = lVar7;
    *(ulong *)(puVar6 + 0x38) = uVar10;
    *(undefined4 *)(puVar6 + 0x40) = uVar1;
    *(long *)(puVar6 + 0x48) = lStack_c8;
    *(long *)(puVar6 + 0x50) = lStack_d8;
    *(undefined8 *)(puVar6 + 0x58) = uVar22;
    *(undefined8 *)(puVar6 + 0x60) = uVar25;
    *(undefined8 *)(puVar6 + 0x68) = uVar24;
    *(undefined8 *)(puVar6 + 0x70) = uVar8;
    *(undefined8 *)(puVar6 + 0x78) = uVar31;
    *(undefined8 *)(puVar6 + 0x80) = uVar20;
    *(undefined8 *)(puVar6 + 0x88) = uVar17;
    uVar16 = uVar16 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    FUN_101a2fd48(uVar11,uVar16,0x112d453c8,&UNK_10d90ac60);
    uVar13 = uVar16;
    (**(code **)(lVar26 + 0x30))(uVar16,1,lVar12);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000100de78a0(uVar31,uVar20);
    func_0x000107c615f0(uVar22);
    func_0x000107c6157c(uVar17);
    func_0x000107c615f0(uVar25);
    func_0x000107c61174(uVar27);
    func_0x000107c61174();
    func_0x000107c615f0(uVar18);
    func_0x000107c6157c(uVar10);
    if ((int)uVar13 == 1) {
      FUN_101a2fbd0(uVar16,0x112d453c8,&UNK_10d90ac60);
      uVar10 = 0x3100;
    }
    else {
      func_0x000107c5fd08();
      (**(code **)(lVar26 + 8))(uVar16,lVar12);
      uVar10 = uVar10 & 0xff | 0x3100;
    }
    func_0x000107c615c0(uVar16);
    lVar12 = *(long *)(puVar6 + 0x10);
    if (lVar12 == 0) {
      lVar28 = 0;
      lVar26 = 0;
    }
    else {
      lVar26 = *(long *)(puVar6 + 0x18);
      lVar28 = lVar12;
      func_0x000107c614f0();
      func_0x000107c615f0(lVar12);
      func_0x000107c5fca8();
      func_0x000107c615e8(lVar12);
    }
    uVar8 = **(undefined8 **)(unaff_x22 + 0x170);
    func_0x000107c6157c(puVar6);
    if (lVar26 == 0 && lVar28 == 0) {
      puVar30 = (undefined8 *)0x0;
    }
    else {
      *(undefined8 *)(unaff_x22 + 0xc0) = 0;
      *(undefined8 *)(unaff_x22 + 200) = 0;
      *(long *)(unaff_x22 + 0xd0) = lVar28;
      *(long *)(unaff_x22 + 0xd8) = lVar26;
      puVar30 = (undefined8 *)(unaff_x22 + 0xc0);
    }
    uVar17 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar36 = uVar36 - 1 & uVar36;
    *(undefined8 *)(unaff_x22 + 0xe0) = 1;
    *(undefined8 **)(unaff_x22 + 0xe8) = puVar30;
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar8;
    func_0x000107c615bc(uVar10,unaff_x22 + 0xe0,PTR___sytN_11034f1b0 + 8,&UNK_10d9b8340,puVar6);
    func_0x000107c61574(puVar6);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar9);
    func_0x000107c61574(uVar10);
    func_0x0001000b44c0(uVar31,uVar20);
    func_0x000107c615e8(uVar17);
    func_0x000107c61170(lVar7);
    func_0x000107c615e8(uVar25);
    FUN_101a2fbd0(uVar11,0x112d453c8,&UNK_10d90ac60);
    func_0x000107c615c0(uVar11);
    lVar28 = 0;
    lVar12 = lVar21;
    if (uVar36 != 0) goto LAB_101a295f4;
LAB_101a295fc:
    do {
      lVar21 = lVar12 + 1;
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a29f4c);
        (*pcVar3)();
      }
      lVar7 = *(long *)(unaff_x22 + 0x178);
      if ((long)(0x3fU - (-1L << ((ulong)*(byte *)(unaff_x22 + 0x2c8) & 0x3f)) >> 6) <= lVar21) {
        func_0x000107c61574();
        plVar14 = (long *)0x90;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x1f8) = plVar14;
        *plVar14 = unaff_x22;
        plVar14[1] = (long)FUN_101a28e84;
                    /* WARNING: Could not recover jumptable at 0x000101a29c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        FUN_101a2c0b4(0,0);
        return;
      }
      uVar36 = *(ulong *)(lVar7 + lVar21 * 8 + 0x40);
      lVar12 = lVar12 + 1;
    } while (uVar36 == 0);
  } while( true );
}



/* Entry: 101a29f5c; end: 101a2a01b;  */

void FUN_101a29f5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x180);
  func_0x000107c61654();
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x0001000b44c0(uVar1,uVar4);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101a2a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a2a01c; end: 101a2a0c7;  */

void FUN_101a2a01c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0x20);
  func_0x000101a2fbac(plVar2,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar2;
  if (param_3 != 0) {
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar3);
    return;
  }
  if (param_2 != 0) {
    **(long **)(*(long *)(lVar4 + 0x40) + 0x28) = param_2;
    func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a2a0c8);
  (*pcVar1)();
}



/* Entry: 101a2a0c8; end: 101a2a123;  */

void FUN_101a2a0c8(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined4 in_w7;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  *(undefined8 *)(unaff_x22 + 0x2a8) = in_stack_00000040;
  *(undefined8 *)(unaff_x22 + 0x2a0) = in_stack_00000038;
  *(undefined8 *)(unaff_x22 + 0x298) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x290) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x288) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x280) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x278) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x270) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x268) = in_stack_00000000;
  *(undefined4 *)(unaff_x22 + 0x378) = in_w7;
  *(undefined8 *)(unaff_x22 + 0x260) = in_x6;
  *(undefined8 *)(unaff_x22 + 600) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x250) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x248) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2a124,0,0);
  return;
}



/* Entry: 101a2a124; end: 101a2aa67;  */

/* WARNING: Removing unreachable block (ram,0x000101a2a47c) */
/* WARNING: Removing unreachable block (ram,0x000101a2a5f8) */

void FUN_101a2a124(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar11;
  ulong uVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined *puVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar15 = *(long *)(unaff_x22 + 0x250);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x248);
  func_0x000107c5b198();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x2b0) = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x2b8) = lVar15;
  if (lVar15 != 0) {
    *(long *)(unaff_x22 + 0x108) = unaff_x22 + 0x240;
    *(long *)(unaff_x22 + 0xe0) = unaff_x22;
    *(code **)(unaff_x22 + 0xe8) = FUN_101a2aa68;
    lVar5 = unaff_x22 + 0xe0;
    func_0x000107c61448(lVar5,0);
    uVar3 = 0x112dec5a8;
    func_0x0001000285a8(0x112dec5a8,&UNK_10d9b83a0);
    *(undefined8 *)(unaff_x22 + 0x1b8) = uVar3;
    *(long *)(unaff_x22 + 0x1a0) = lVar5;
    *(undefined **)(unaff_x22 + 0x180) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x188) = 0x42000000;
    *(code **)(unaff_x22 + 400) = FUN_101a2bac4;
    *(undefined **)(unaff_x22 + 0x198) = &UNK_11042db68;
    func_0x000107c43010(lVar15);
    lVar15 = unaff_x22 + 0xe0;
LAB_101a2a200:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(lVar15);
    return;
  }
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101a10934();
  lVar15 = *(long *)(unaff_x22 + 600);
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar15 == 0) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a2aa64);
    (*UNRECOVERED_JUMPTABLE)();
  }
  lVar5 = lVar15;
  func_0x000107c4c99c();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a2aa68);
    (*UNRECOVERED_JUMPTABLE)();
  }
  lVar4 = lVar5;
  func_0x000107c4c9b4(lVar5);
  func_0x000107c61170(lVar5);
  lVar5 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x2c0) = lVar5;
  lVar20 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x2c8) = lVar20;
  uVar14 = *(long *)(lVar20 + 0x40) + 0xf;
  uVar6 = uVar14 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2d0) = uVar6;
  uVar7 = uVar14 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar7);
  lVar15 = 0x112d36580;
  uVar12 = 0;
  func_0x0001000285a8();
  uVar8 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  if ((*(long *)(puVar18 + 0x10) == 0) || (func_0x000100f89a68(lVar4), (uVar12 & 1) == 0)) {
    uVar3 = 1;
  }
  else {
    (**(code **)(lVar20 + 0x10))
              (uVar8,*(long *)(puVar18 + 0x38) + *(long *)(lVar20 + 0x48) * lVar4,lVar5);
    uVar3 = 0;
  }
  (**(code **)(lVar20 + 0x38))(uVar8,uVar3,1,lVar5);
  func_0x000107c6142c(puVar18);
  uVar12 = uVar8;
  (**(code **)(lVar20 + 0x30))(uVar8,1,lVar5);
  if ((int)uVar12 == 1) {
    FUN_101a2fbd0(uVar8,0x112d36580,&UNK_10d9016d0);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar7);
    puVar18 = PTR_PTR_1126bf7b0;
    func_0x000107c61168();
    func_0x000107c2badc();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0x2d8) = puVar18;
    if (puVar18 == (undefined1 *)0x0) {
      puVar10 = *(undefined1 **)(unaff_x22 + 0x2b0);
      func_0x000101a2cdac();
      func_0x000107c613f8(&UNK_11042dcb0,puVar18,0,0);
      *puVar18 = 3;
      func_0x000107c61654();
    }
    else {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x270);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x268);
      func_0x000107c2bae0();
      func_0x000107c61180();
      func_0x000107c61170();
      puVar9 = PTR_PTR_1126c4910;
      func_0x000107c61168();
      func_0x000107c40c28();
      func_0x000107c61180();
      func_0x000107c61434(uVar16);
      func_0x000107c2bae4();
      func_0x000107c61180();
      uVar3 = 0;
      func_0x000103fafafc(0);
      func_0x000107c610f8();
      func_0x000103faf418(uVar3,puVar9,0,700,uVar17,uVar16,0xd000000000000017,0x800000010efc96d0,0,
                          0xe000000000000000,0,0,0xce,0);
      *(undefined **)(unaff_x22 + 0x2e0) = puVar9;
      func_0x000107c5fd64();
      *(undefined8 *)(unaff_x22 + 0x2e8) = 0;
      puVar10 = *(undefined1 **)(unaff_x22 + 0x278);
      func_0x000107c49b28();
      if (((ulong)puVar10 & 1) == 0) {
        lVar15 = *(long *)(unaff_x22 + 0x260);
        if (lVar15 == 0) {
          UNRECOVERED_JUMPTABLE = (code *)0x0;
          puVar18 = (undefined *)0x0;
        }
        else {
          uVar1 = *(undefined4 *)(unaff_x22 + 0x378);
          puVar11 = &UNK_11042db28;
          func_0x000107c613fc(&UNK_11042db28,0x1c,7);
          *(long *)(puVar11 + 0x10) = lVar15;
          *(undefined4 *)(puVar11 + 0x18) = uVar1;
          puVar18 = &UNK_11042db50;
          func_0x000107c613fc(&UNK_11042db50,0x20,7);
          *(code **)(puVar18 + 0x10) = FUN_101a2fcec;
          *(undefined **)(puVar18 + 0x18) = puVar11;
          UNRECOVERED_JUMPTABLE = FUN_101a2fcf8;
        }
        *(undefined **)(unaff_x22 + 0x2f8) = puVar18;
        *(code **)(unaff_x22 + 0x2f0) = UNRECOVERED_JUMPTABLE;
        uVar21 = *(undefined8 *)(unaff_x22 + 0x2a0);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x298);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x290);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x288);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x280);
        uVar12 = uVar14 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        *(ulong *)(unaff_x22 + 0x300) = uVar12;
        *(undefined8 *)(unaff_x22 + 0x20) = uVar16;
        *(undefined8 *)(unaff_x22 + 0x28) = uVar17;
        *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
        *(undefined8 *)(unaff_x22 + 0x38) = uVar22;
        *(undefined8 *)(unaff_x22 + 0x40) = uVar21;
        *(undefined **)(unaff_x22 + 0x48) = puVar9;
        *(code **)(unaff_x22 + 0x50) = UNRECOVERED_JUMPTABLE;
        *(undefined **)(unaff_x22 + 0x58) = puVar18;
        *(undefined8 *)(unaff_x22 + 0x70) = uVar16;
        *(undefined8 *)(unaff_x22 + 0x78) = uVar17;
        *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
        *(undefined8 *)(unaff_x22 + 0x88) = uVar22;
        *(undefined8 *)(unaff_x22 + 0x90) = uVar21;
        *(undefined **)(unaff_x22 + 0x98) = puVar9;
        iVar2 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if (iVar2 != 0) {
          plVar19 = (long *)(ulong)*(uint *)(
                                            PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                            + 4);
          func_0x000107c6157c(lVar15);
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x308) = plVar19;
          *plVar19 = unaff_x22;
          plVar19[1] = (long)FUN_101a2b334;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
          )(plVar19,uVar12,&UNK_10d9b8388,unaff_x22 + 0x10,FUN_101a2fcb0,unaff_x22 + 0x60,0,0,lVar5)
          ;
          return;
        }
        uVar17 = *(undefined8 *)(unaff_x22 + 0x2a0);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x298);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x290);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x288);
        func_0x000107c6157c(lVar15);
        pcVar13 = FUN_101a2fcb0;
        func_0x000107c615b4(FUN_101a2fcb0,unaff_x22 + 0x60);
        *(code **)(unaff_x22 + 0x310) = pcVar13;
        uVar14 = uVar14 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        *(ulong *)(unaff_x22 + 0x318) = uVar14;
        func_0x000103fb0954(0);
        func_0x000107c610f8();
        func_0x000107c61174(uVar21);
        func_0x000107c61174();
        func_0x000100de78a0(uVar16,uVar17);
        func_0x000103fb0724(uVar3,uVar21,uVar16,uVar17);
        *(undefined8 *)(unaff_x22 + 800) = uVar3;
        lVar5 = 0;
        if (lVar15 != 0) {
          *(code **)(unaff_x22 + 0x210) = UNRECOVERED_JUMPTABLE;
          *(undefined **)(unaff_x22 + 0x218) = puVar18;
          *(undefined **)(unaff_x22 + 0x1f0) = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined8 *)(unaff_x22 + 0x1f8) = 0x42000000;
          *(undefined **)(unaff_x22 + 0x200) = &UNK_1015298e4;
          *(undefined **)(unaff_x22 + 0x208) = &UNK_11042daf0;
          lVar5 = unaff_x22 + 0x1f0;
          func_0x000107c60bc4();
          uVar3 = *(undefined8 *)(unaff_x22 + 0x218);
          func_0x000107c6157c(puVar18);
          func_0x000107c61574(uVar3);
        }
        *(long *)(unaff_x22 + 0x328) = lVar5;
        uVar16 = *(undefined8 *)(unaff_x22 + 0x280);
        *(ulong *)(unaff_x22 + 200) = uVar14;
        *(long *)(unaff_x22 + 0xa0) = unaff_x22;
        *(code **)(unaff_x22 + 0xa8) = FUN_101a2b394;
        lVar15 = unaff_x22 + 0xa0;
        func_0x000107c61448(lVar15,1);
        uVar3 = 0x112dec598;
        func_0x0001000285a8(0x112dec598,&UNK_10d9b8390);
        *(undefined8 *)(unaff_x22 + 0x178) = uVar3;
        *(long *)(unaff_x22 + 0x160) = lVar15;
        *(undefined **)(unaff_x22 + 0x140) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x148) = 0x42000000;
        *(code **)(unaff_x22 + 0x150) = FUN_101a2becc;
        *(undefined **)(unaff_x22 + 0x158) = &UNK_11042da78;
        func_0x000107c5cefc(uVar16);
        lVar15 = unaff_x22 + 0xa0;
        goto LAB_101a2a200;
      }
      uVar3 = *(undefined8 *)(unaff_x22 + 0x2b0);
      func_0x000101a2cdac();
      func_0x000107c613f8(&UNK_11042dcb0,puVar10,0,0);
      *puVar10 = 4;
      func_0x000107c61654();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar9);
      puVar10 = puVar18;
    }
    func_0x000107c61170(puVar10);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x2d0));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar15 = *(long *)(unaff_x22 + 0x260);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar20 + 0x20);
    (*UNRECOVERED_JUMPTABLE)(uVar7,uVar8,lVar5);
    func_0x000107c615c0(uVar8);
    if (lVar15 != 0) {
      lVar15 = *(long *)(unaff_x22 + 0x260);
      *(long *)(unaff_x22 + 0x130) = lVar15;
      *(undefined4 *)(unaff_x22 + 0x138) = *(undefined4 *)(unaff_x22 + 0x378);
      *(undefined4 *)(unaff_x22 + 0x13c) = 0x3f800000;
      uVar3 = 0x112dec5a0;
      func_0x0001000285a8(0x112dec5a0,&UNK_10db3e070);
      func_0x000100087bd4(unaff_x22 + 0x370,FUN_101a2fd28,unaff_x22 + 0x120,uVar3);
      if (*(char *)(unaff_x22 + 0x374) != '\x01') {
        (**(code **)(lVar15 + 0x30))(*(undefined4 *)(unaff_x22 + 0x370));
      }
    }
    (*UNRECOVERED_JUMPTABLE)(uVar6,uVar7,lVar5);
    func_0x000107c615c0(uVar7);
    puVar18 = PTR_PTR_1126b3080;
    func_0x000107c61168();
    puVar9 = puVar18;
    func_0x000107c5ed90();
    func_0x000107c43480();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0x348) = puVar18;
    func_0x000107c61170();
    func_0x000107c5ed90();
    puVar18 = puVar9;
    func_0x0001080694d8();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    *(undefined **)(unaff_x22 + 0x220) = puVar18;
    func_0x0001000285a8(0x112dec590,&UNK_10d9b8360);
    func_0x0001048da110(unaff_x22 + 0x228);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x248);
    func_0x000107c61170(puVar18);
    *(undefined8 *)(unaff_x22 + 0x350) = *(undefined8 *)(unaff_x22 + 0x228);
    func_0x000107c5d0f0();
    func_0x0001000285a8(0x112dc6618,&UNK_10dc50b80);
    func_0x000107c3d764();
    func_0x000107c61180();
    uVar3 = uVar16;
    func_0x000100759c94();
    *(undefined8 *)(unaff_x22 + 0x358) = uVar3;
    func_0x000107c61170(uVar16);
    plVar19 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = (code *)0x101a2cbfc;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x360) = plVar19;
    *plVar19 = unaff_x22;
    plVar19[1] = (long)FUN_101a2b834;
  }
                    /* WARNING: Could not recover jumptable at 0x000101a2a784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a2aa68; end: 101a2aaa7;  */

void FUN_101a2aa68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2aaa8,0,0);
  return;
}



/* Entry: 101a2aaa8; end: 101a2b333;  */

/* WARNING: Removing unreachable block (ram,0x000101a2ad38) */
/* WARNING: Removing unreachable block (ram,0x000101a2aeb4) */

void FUN_101a2aaa8(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar11;
  ulong uVar12;
  code *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar16 = *(undefined **)(unaff_x22 + 0x240);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x2b8));
  if (puVar16 == (undefined *)0x0) {
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000101a10934();
  }
  lVar3 = *(long *)(unaff_x22 + 600);
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a2b330);
    (*UNRECOVERED_JUMPTABLE)();
  }
  lVar5 = lVar3;
  func_0x000107c4c99c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101a2b334);
    (*UNRECOVERED_JUMPTABLE)();
  }
  lVar4 = lVar5;
  func_0x000107c4c9b4(lVar5);
  func_0x000107c61170(lVar5);
  lVar5 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x2c0) = lVar5;
  lVar20 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x2c8) = lVar20;
  uVar14 = *(long *)(lVar20 + 0x40) + 0xf;
  uVar6 = uVar14 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2d0) = uVar6;
  uVar7 = uVar14 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar7);
  lVar3 = 0x112d36580;
  uVar12 = 0;
  func_0x0001000285a8();
  uVar8 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  if ((*(long *)(puVar16 + 0x10) == 0) || (func_0x000100f89a68(lVar4), (uVar12 & 1) == 0)) {
    uVar15 = 1;
  }
  else {
    (**(code **)(lVar20 + 0x10))
              (uVar8,*(long *)(puVar16 + 0x38) + *(long *)(lVar20 + 0x48) * lVar4,lVar5);
    uVar15 = 0;
  }
  (**(code **)(lVar20 + 0x38))(uVar8,uVar15,1,lVar5);
  func_0x000107c6142c(puVar16);
  uVar12 = uVar8;
  (**(code **)(lVar20 + 0x30))(uVar8,1,lVar5);
  if ((int)uVar12 == 1) {
    FUN_101a2fbd0(uVar8,0x112d36580,&UNK_10d9016d0);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar7);
    puVar16 = PTR_PTR_1126bf7b0;
    func_0x000107c61168();
    func_0x000107c2badc();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0x2d8) = puVar16;
    if (puVar16 == (undefined1 *)0x0) {
      puVar10 = *(undefined1 **)(unaff_x22 + 0x2b0);
      func_0x000101a2cdac();
      func_0x000107c613f8(&UNK_11042dcb0,puVar16,0,0);
      *puVar16 = 3;
      func_0x000107c61654();
    }
    else {
      uVar17 = *(undefined8 *)(unaff_x22 + 0x270);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x268);
      func_0x000107c2bae0();
      func_0x000107c61180();
      func_0x000107c61170();
      puVar9 = PTR_PTR_1126c4910;
      func_0x000107c61168();
      func_0x000107c40c28();
      func_0x000107c61180();
      func_0x000107c61434(uVar17);
      func_0x000107c2bae4();
      func_0x000107c61180();
      uVar15 = 0;
      func_0x000103fafafc(0);
      func_0x000107c610f8();
      func_0x000103faf418(uVar15,puVar9,0,700,uVar18,uVar17,0xd000000000000017,0x800000010efc96d0,0,
                          0xe000000000000000,0,0,0xce,0);
      *(undefined **)(unaff_x22 + 0x2e0) = puVar9;
      func_0x000107c5fd64();
      *(undefined8 *)(unaff_x22 + 0x2e8) = 0;
      puVar10 = *(undefined1 **)(unaff_x22 + 0x278);
      func_0x000107c49b28();
      if (((ulong)puVar10 & 1) == 0) {
        lVar3 = *(long *)(unaff_x22 + 0x260);
        if (lVar3 == 0) {
          UNRECOVERED_JUMPTABLE = (code *)0x0;
          puVar16 = (undefined *)0x0;
        }
        else {
          uVar1 = *(undefined4 *)(unaff_x22 + 0x378);
          puVar11 = &UNK_11042db28;
          func_0x000107c613fc(&UNK_11042db28,0x1c,7);
          *(long *)(puVar11 + 0x10) = lVar3;
          *(undefined4 *)(puVar11 + 0x18) = uVar1;
          puVar16 = &UNK_11042db50;
          func_0x000107c613fc(&UNK_11042db50,0x20,7);
          *(code **)(puVar16 + 0x10) = FUN_101a2fcec;
          *(undefined **)(puVar16 + 0x18) = puVar11;
          UNRECOVERED_JUMPTABLE = FUN_101a2fcf8;
        }
        *(undefined **)(unaff_x22 + 0x2f8) = puVar16;
        *(code **)(unaff_x22 + 0x2f0) = UNRECOVERED_JUMPTABLE;
        uVar21 = *(undefined8 *)(unaff_x22 + 0x2a0);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x298);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x290);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x288);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x280);
        uVar12 = uVar14 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        *(ulong *)(unaff_x22 + 0x300) = uVar12;
        *(undefined8 *)(unaff_x22 + 0x20) = uVar17;
        *(undefined8 *)(unaff_x22 + 0x28) = uVar18;
        *(undefined8 *)(unaff_x22 + 0x30) = uVar15;
        *(undefined8 *)(unaff_x22 + 0x38) = uVar22;
        *(undefined8 *)(unaff_x22 + 0x40) = uVar21;
        *(undefined **)(unaff_x22 + 0x48) = puVar9;
        *(code **)(unaff_x22 + 0x50) = UNRECOVERED_JUMPTABLE;
        *(undefined **)(unaff_x22 + 0x58) = puVar16;
        *(undefined8 *)(unaff_x22 + 0x70) = uVar17;
        *(undefined8 *)(unaff_x22 + 0x78) = uVar18;
        *(undefined8 *)(unaff_x22 + 0x80) = uVar15;
        *(undefined8 *)(unaff_x22 + 0x88) = uVar22;
        *(undefined8 *)(unaff_x22 + 0x90) = uVar21;
        *(undefined **)(unaff_x22 + 0x98) = puVar9;
        iVar2 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if (iVar2 == 0) {
          uVar18 = *(undefined8 *)(unaff_x22 + 0x2a0);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x298);
          uVar21 = *(undefined8 *)(unaff_x22 + 0x290);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x288);
          func_0x000107c6157c(lVar3);
          pcVar13 = FUN_101a2fcb0;
          func_0x000107c615b4(FUN_101a2fcb0,unaff_x22 + 0x60);
          *(code **)(unaff_x22 + 0x310) = pcVar13;
          uVar14 = uVar14 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          *(ulong *)(unaff_x22 + 0x318) = uVar14;
          func_0x000103fb0954(0);
          func_0x000107c610f8();
          func_0x000107c61174(uVar21);
          func_0x000107c61174();
          func_0x000100de78a0(uVar17,uVar18);
          func_0x000103fb0724(uVar15,uVar21,uVar17,uVar18);
          *(undefined8 *)(unaff_x22 + 800) = uVar15;
          puVar9 = PTR___NSConcreteStackBlock_11034bd00;
          lVar5 = 0;
          if (lVar3 != 0) {
            *(code **)(unaff_x22 + 0x210) = UNRECOVERED_JUMPTABLE;
            *(undefined **)(unaff_x22 + 0x218) = puVar16;
            *(undefined **)(unaff_x22 + 0x1f0) = puVar9;
            *(undefined8 *)(unaff_x22 + 0x1f8) = 0x42000000;
            *(undefined **)(unaff_x22 + 0x200) = &UNK_1015298e4;
            *(undefined **)(unaff_x22 + 0x208) = &UNK_11042daf0;
            lVar5 = unaff_x22 + 0x1f0;
            func_0x000107c60bc4();
            uVar15 = *(undefined8 *)(unaff_x22 + 0x218);
            func_0x000107c6157c(puVar16);
            func_0x000107c61574(uVar15);
          }
          *(long *)(unaff_x22 + 0x328) = lVar5;
          uVar17 = *(undefined8 *)(unaff_x22 + 0x280);
          *(ulong *)(unaff_x22 + 200) = uVar14;
          *(long *)(unaff_x22 + 0xa0) = unaff_x22;
          *(code **)(unaff_x22 + 0xa8) = FUN_101a2b394;
          lVar3 = unaff_x22 + 0xa0;
          func_0x000107c61448(lVar3,1);
          uVar15 = 0x112dec598;
          func_0x0001000285a8(0x112dec598,&UNK_10d9b8390);
          *(undefined8 *)(unaff_x22 + 0x178) = uVar15;
          *(undefined **)(unaff_x22 + 0x140) = puVar9;
          *(undefined8 *)(unaff_x22 + 0x148) = 0x42000000;
          *(code **)(unaff_x22 + 0x150) = FUN_101a2becc;
          *(undefined **)(unaff_x22 + 0x158) = &UNK_11042da78;
          *(long *)(unaff_x22 + 0x160) = lVar3;
          func_0x000107c5cefc(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0xa0);
          return;
        }
        plVar19 = (long *)(ulong)*(uint *)(
                                          PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                          + 4);
        func_0x000107c6157c(lVar3);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x308) = plVar19;
        *plVar19 = unaff_x22;
        plVar19[1] = (long)FUN_101a2b334;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
        )(plVar19,uVar12,&UNK_10d9b8388,unaff_x22 + 0x10,FUN_101a2fcb0,unaff_x22 + 0x60,0,0,lVar5);
        return;
      }
      uVar15 = *(undefined8 *)(unaff_x22 + 0x2b0);
      func_0x000101a2cdac();
      func_0x000107c613f8(&UNK_11042dcb0,puVar10,0,0);
      *puVar10 = 4;
      func_0x000107c61654();
      func_0x000107c61170(uVar15);
      func_0x000107c61170(puVar9);
      puVar10 = puVar16;
    }
    func_0x000107c61170(puVar10);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x2d0));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0x260);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar20 + 0x20);
    (*UNRECOVERED_JUMPTABLE)(uVar7,uVar8,lVar5);
    func_0x000107c615c0(uVar8);
    if (lVar3 != 0) {
      lVar3 = *(long *)(unaff_x22 + 0x260);
      *(long *)(unaff_x22 + 0x130) = lVar3;
      *(undefined4 *)(unaff_x22 + 0x138) = *(undefined4 *)(unaff_x22 + 0x378);
      *(undefined4 *)(unaff_x22 + 0x13c) = 0x3f800000;
      uVar15 = 0x112dec5a0;
      func_0x0001000285a8(0x112dec5a0,&UNK_10db3e070);
      func_0x000100087bd4(unaff_x22 + 0x370,FUN_101a2fd28,unaff_x22 + 0x120,uVar15);
      if (*(char *)(unaff_x22 + 0x374) != '\x01') {
        (**(code **)(lVar3 + 0x30))(*(undefined4 *)(unaff_x22 + 0x370));
      }
    }
    (*UNRECOVERED_JUMPTABLE)(uVar6,uVar7,lVar5);
    func_0x000107c615c0(uVar7);
    puVar16 = PTR_PTR_1126b3080;
    func_0x000107c61168();
    puVar9 = puVar16;
    func_0x000107c5ed90();
    func_0x000107c43480();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0x348) = puVar16;
    func_0x000107c61170();
    func_0x000107c5ed90();
    puVar16 = puVar9;
    func_0x0001080694d8();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    *(undefined **)(unaff_x22 + 0x220) = puVar16;
    func_0x0001000285a8(0x112dec590,&UNK_10d9b8360);
    func_0x0001048da110(unaff_x22 + 0x228);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x248);
    func_0x000107c61170(puVar16);
    *(undefined8 *)(unaff_x22 + 0x350) = *(undefined8 *)(unaff_x22 + 0x228);
    func_0x000107c5d0f0();
    func_0x0001000285a8(0x112dc6618,&UNK_10dc50b80);
    func_0x000107c3d764();
    func_0x000107c61180();
    uVar15 = uVar17;
    func_0x000100759c94();
    *(undefined8 *)(unaff_x22 + 0x358) = uVar15;
    func_0x000107c61170(uVar17);
    plVar19 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = (code *)0x101a2cbfc;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x360) = plVar19;
    *plVar19 = unaff_x22;
    plVar19[1] = (long)FUN_101a2b834;
  }
                    /* WARNING: Could not recover jumptable at 0x000101a2b040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a2b334; end: 101a2b393;  */

void FUN_101a2b334(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x308));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x338) = 0;
    pcVar1 = FUN_101a2b4fc;
  }
  else {
    *(long *)(lVar2 + 0x340) = unaff_x20;
    pcVar1 = FUN_101a2b7b0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a2b394; end: 101a2b3eb;  */

void FUN_101a2b394(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0xc0);
  *(long *)(*unaff_x22 + 0x330) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101a2b3ec;
  }
  else {
    pcVar1 = FUN_101a2b478;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a2b3ec; end: 101a2b477;  */

void FUN_101a2b3ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar1 = *(undefined8 *)(unaff_x22 + 800);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x310);
  (**(code **)(*(long *)(unaff_x22 + 0x2c8) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x300),uVar3,*(undefined8 *)(unaff_x22 + 0x2c0));
  func_0x000107c60bd0(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615d8(uVar4);
  *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(unaff_x22 + 0x2e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2b4fc,0,0);
  return;
}



/* Entry: 101a2b478; end: 101a2b4fb;  */

void FUN_101a2b478(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar1 = *(undefined8 *)(unaff_x22 + 800);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x310);
  func_0x000107c61654();
  func_0x000107c60bd0(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615d8(uVar4);
  *(undefined8 *)(unaff_x22 + 0x340) = *(undefined8 *)(unaff_x22 + 0x330);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2b7b0,0,0);
  return;
}



/* Entry: 101a2b4fc; end: 101a2b7af;  */

void FUN_101a2b4fc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x300);
  lVar7 = *(long *)(unaff_x22 + 0x250);
  (**(code **)(*(long *)(unaff_x22 + 0x2c8) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x2d0),uVar8,*(undefined8 *)(unaff_x22 + 0x2c0));
  func_0x000107c615c0(uVar8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2d8);
  if (lVar7 == 0) {
    func_0x000107c61170(uVar11);
    FUN_101a2ca7c(uVar10,uVar9);
    func_0x000107c61170(uVar8);
  }
  else {
    lVar1 = lVar7;
    func_0x000107c5ed90();
    func_0x000107c3ef10(lVar7);
    func_0x000107c61170(uVar11);
    FUN_101a2ca7c(uVar10,uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar7);
  }
  lVar7 = *(long *)(unaff_x22 + 0x338);
  puVar2 = PTR_PTR_1126b3080;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c5ed90();
  func_0x000107c43480();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x348) = puVar2;
  func_0x000107c61170();
  func_0x000107c5ed90();
  puVar4 = puVar3;
  func_0x0001080694d8();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  *(undefined **)(unaff_x22 + 0x220) = puVar4;
  puVar5 = (undefined8 *)0x112dec590;
  func_0x0001000285a8(0x112dec590,&UNK_10d9b8360);
  func_0x0001048da110(unaff_x22 + 0x228);
  if (lVar7 == 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x248);
    func_0x000107c61170(puVar4);
    *(undefined8 *)(unaff_x22 + 0x350) = *(undefined8 *)(unaff_x22 + 0x228);
    func_0x000107c5d0f0();
    func_0x0001000285a8(0x112dc6618,&UNK_10dc50b80);
    func_0x000107c3d764();
    func_0x000107c61180();
    uVar8 = uVar9;
    func_0x000100759c94();
    *(undefined8 *)(unaff_x22 + 0x358) = uVar8;
    func_0x000107c61170(uVar9);
    plVar6 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = (code *)0x101a2cbfc;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x360) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_101a2b834;
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2d0);
    lVar7 = *(long *)(unaff_x22 + 0x2c8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x2c0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x230);
    func_0x000100faaf10();
    func_0x000107c613f8(&UNK_1107b5fe0,puVar5,0,0);
    *puVar5 = uVar11;
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar2);
    (**(code **)(lVar7 + 8))(uVar8,uVar9);
    func_0x000107c61170(puVar4);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x2d0));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a2b7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a2b7b0; end: 101a2b833;  */

void FUN_101a2b7b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2d8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x2b0));
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  FUN_101a2ca7c(uVar3,uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x2d0));
                    /* WARNING: Could not recover jumptable at 0x000101a2b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a2b834; end: 101a2b887;  */

void FUN_101a2b834(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x368) = param_1;
  *(undefined1 *)(lVar1 + 0x375) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x360));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2b888,0,0);
  return;
}



/* Entry: 101a2b888; end: 101a2bac3;  */

void FUN_101a2b888(void)

{
  char cVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  
  cVar1 = *(char *)(unaff_x22 + 0x375);
  if (cVar1 == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(unaff_x22 + 0x368);
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x238,uVar6,PTR___ss5ErrorWS_11034ee10);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x350);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x348);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x2d0);
    lVar14 = *(long *)(unaff_x22 + 0x2c8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2c0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x2b0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x358));
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar6);
    (**(code **)(lVar14 + 8))(uVar9,uVar10);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x2d0));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x368);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x350);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x348);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x2d0);
    lVar5 = *(long *)(unaff_x22 + 0x2c8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2c0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x2a8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x248);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x358));
    func_0x000107c56420(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c490d0();
    puVar4 = &UNK_11042dab0;
    func_0x000107c613fc(&UNK_11042dab0,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar12;
    *(undefined8 *)(puVar4 + 0x18) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0x101a30088;
    *(undefined **)(unaff_x22 + 0x1e8) = puVar4;
    *(undefined **)(unaff_x22 + 0x1c0) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x1c8) = 0x42000000;
    *(code **)(unaff_x22 + 0x1d0) = FUN_101a283e8;
    *(undefined **)(unaff_x22 + 0x1d8) = &UNK_11042dac8;
    lVar14 = unaff_x22 + 0x1c0;
    func_0x000107c60bc4(lVar14);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1e8);
    func_0x000107c6157c(uVar12);
    func_0x000107c61174(uVar6);
    func_0x000107c61574(uVar13);
    func_0x000107c5d5a8(uVar15);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c60bd0(lVar14);
    func_0x000107c61170(puVar3);
    func_0x000100cc3260(uVar11,cVar1);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar6);
    (**(code **)(lVar5 + 8))(uVar7,uVar8);
    func_0x000107c615c0(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a2bac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101a2bac4; end: 101a2bb27;  */

void FUN_101a2bac4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x000101a2fbac(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  lVar2 = 0;
  if (param_2 != 0) {
    func_0x000107c5ede0();
    func_0x000107c5f9e8(param_2,PTR___ss5Int64VN_11034ee50,lVar2,PTR___ss5Int64VSHsWP_11034ee58);
    lVar2 = param_2;
  }
  **(long **)(*(long *)(lVar3 + 0x40) + 0x28) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101a2bb28; end: 101a2bbaf;  */

void FUN_101a2bb28(undefined4 *param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  char cStack_34;
  
  uStack_44 = *param_1;
  uVar1 = 0x112dec5a0;
  lStack_50 = param_2;
  uStack_48 = param_3;
  func_0x0001000285a8(0x112dec5a0,&UNK_10db3e070);
  func_0x000100087bd4(&uStack_38,0x101a30034,auStack_60,uVar1);
  if (cStack_34 != '\x01') {
    (**(code **)(param_2 + 0x30))(uStack_38);
  }
  return;
}



/* Entry: 101a2bbb0; end: 101a2bc23;  */

void FUN_101a2bbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_8;
  *(undefined8 *)(unaff_x22 + 0x100) = param_9;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_5;
  *(undefined8 *)(unaff_x22 + 200) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x108) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x110) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2bc24,0,0);
  return;
}



/* Entry: 101a2bc24; end: 101a2bdab;  */

void FUN_101a2bc24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000103fb0954(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  func_0x000100de78a0(uVar5,uVar1);
  func_0x000103fb0724(uVar6,uVar2,uVar5,uVar1);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar6;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar7 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)(unaff_x22 + 0x90);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
    *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x100);
    *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0xf8);
    *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
    *(undefined **)(unaff_x22 + 0xa0) = &UNK_1015298e4;
    *(undefined **)(unaff_x22 + 0xa8) = &UNK_11042dbb8;
    func_0x000107c60bc4();
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000107c6157c(uVar6);
    func_0x000107c61574(uVar5);
  }
  *(undefined8 **)(unaff_x22 + 0x128) = puVar4;
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x118);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101a2bdac;
  lVar7 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar7,1);
  uVar5 = 0x112dec598;
  func_0x0001000285a8(0x112dec598,&UNK_10d9b8390);
  *(undefined **)(unaff_x22 + 0x50) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101a2becc;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11042db90;
  *(long *)(unaff_x22 + 0x70) = lVar7;
  func_0x000107c5cefc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101a2bdac; end: 101a2be03;  */

void FUN_101a2bdac(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x130) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101a2be04;
  }
  else {
    pcVar1 = FUN_101a2be6c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a2be04; end: 101a2be6b;  */

void FUN_101a2be04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  (**(code **)(*(long *)(unaff_x22 + 0x110) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0xc0),uVar3,*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c60bd0(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a2be68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a2be6c; end: 101a2becb;  */

void FUN_101a2be6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x000107c61654();
  func_0x000107c60bd0(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a2bec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a2becc; end: 101a2c0b3;  */

void FUN_101a2becc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar2 = (long *)(param_1 + 0x20);
  func_0x000101a2fbac(plVar2,*(undefined8 *)(param_1 + 0x38));
  lVar5 = *plVar2;
  if (param_3 != 0) {
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar5,uVar3);
    return;
  }
  func_0x000107c5edb4((long)puVar6 - extraout_x12,param_2);
  pcVar4 = *(code **)(lVar7 + 0x20);
  (*pcVar4)(puVar6,(long)puVar6 - extraout_x12,lVar1);
  (*pcVar4)(*(undefined8 *)(*(long *)(lVar5 + 0x40) + 0x28),puVar6,lVar1);
  func_0x000107c61450(lVar5);
  return;
}



/* Entry: 101a2c0b4; end: 101a2c11b;  */

void FUN_101a2c0b4(long param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(long *)(unaff_x22 + 0x38) = param_1;
  if (param_1 == 0) {
    param_1 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a2c11c,param_1);
  return;
}



/* Entry: 101a2c11c; end: 101a2c233;  */

void FUN_101a2c11c(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x22;
  
  uVar4 = **(ulong **)(unaff_x22 + 0x48);
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  func_0x000107c5fd8c(uVar4,PTR___sytN_11034f1b0 + 8,uVar2,PTR___ss5ErrorWS_11034ee10);
  if ((uVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101a2c18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  *(int *)(unaff_x22 + 0x88) = iVar1;
  *(undefined8 *)(unaff_x22 + 0x70) = 0;
  if (iVar1 != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar3;
    uVar2 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101a2c234;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)
              (unaff_x22 + 0x8c,*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
               uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x8d,**(undefined8 **)(unaff_x22 + 0x48),FUN_101a2c298,unaff_x22 + 0x10);
  return;
}



/* Entry: 101a2c234; end: 101a2c297;  */

void FUN_101a2c234(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar4 + 0x8e) = *(undefined1 *)(lVar4 + 0x8c);
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_101a2c2c8;
  }
  else {
    *(long *)(lVar4 + 0x80) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_101a2c3cc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101a2c298; end: 101a2c2c7;  */

void FUN_101a2c298(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    *(undefined1 *)(unaff_x22 + 0x8e) = *(undefined1 *)(unaff_x22 + 0x8d);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    pcVar1 = FUN_101a2c2c8;
  }
  else {
    *(long *)(unaff_x22 + 0x80) = unaff_x20;
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    pcVar1 = FUN_101a2c3cc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101a2c2c8; end: 101a2c3cb;  */

void FUN_101a2c2c8(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x8e) == '\x01') {
    lVar1 = *(long *)(unaff_x22 + 0x70);
    uVar2 = *(ulong *)(unaff_x22 + 0x60);
    func_0x000107c5fd8c(uVar2,PTR___sytN_11034f1b0 + 8,*(undefined8 *)(unaff_x22 + 0x68),
                        PTR___ss5ErrorWS_11034ee10);
    if ((uVar2 & 1) != 0) {
      if (lVar1 != 0) {
        func_0x000107c61654();
      }
                    /* WARNING: Could not recover jumptable at 0x000101a2c330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    *(long *)(unaff_x22 + 0x70) = lVar1;
  }
  if (*(int *)(unaff_x22 + 0x88) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar3;
    uVar4 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101a2c234;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)
              (unaff_x22 + 0x8c,*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
               uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x8d,**(undefined8 **)(unaff_x22 + 0x48),FUN_101a2c298,unaff_x22 + 0x10);
  return;
}



/* Entry: 101a2c3cc; end: 101a2c4d7;  */

void FUN_101a2c3cc(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x80);
  if (*(long *)(unaff_x22 + 0x70) != 0) {
    func_0x000107c614ac(lVar4);
    lVar4 = *(long *)(unaff_x22 + 0x70);
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x60);
  func_0x000107c5fd8c(uVar1,PTR___sytN_11034f1b0 + 8,*(undefined8 *)(unaff_x22 + 0x68),
                      PTR___ss5ErrorWS_11034ee10);
  if ((uVar1 & 1) != 0) {
    if (lVar4 != 0) {
      func_0x000107c61654();
    }
                    /* WARNING: Could not recover jumptable at 0x000101a2c43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0x70) = lVar4;
  if (*(int *)(unaff_x22 + 0x88) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar2;
    uVar3 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101a2c234;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)
              (unaff_x22 + 0x8c,*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
               uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x8d,**(undefined8 **)(unaff_x22 + 0x48),FUN_101a2c298,unaff_x22 + 0x10);
  return;
}



/* Entry: 101a2c4d8; end: 101a2c84b;  */

void FUN_101a2c4d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  double dVar15;
  double dVar16;
  
  uVar5 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar5;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101a2f6a4();
  *(undefined **)(unaff_x20 + 0x18) = puVar6;
  *(undefined4 *)(unaff_x20 + 0x20) = 0;
  func_0x0001000285a8(0x112dec570,&UNK_10d9b8320);
  lVar7 = param_1;
  func_0x000107c6048c();
  lVar8 = 0;
  uVar12 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_1 + 0x40);
  lVar1 = lVar7 + 0x40;
  lVar14 = lVar8;
  if (uVar9 == 0) goto LAB_101a2c5c0;
  do {
    uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 - 1 & uVar9;
    uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar8 << 6;
    while( true ) {
      dVar15 = *(double *)(*(long *)(param_1 + 0x38) + uVar11 * 8);
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x30) + uVar11 * 4);
      uVar13 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar1 + uVar13) = *(ulong *)(lVar1 + uVar13) | 1L << (uVar11 & 0x3f);
      *(undefined4 *)(*(long *)(lVar7 + 0x30) + uVar11 * 4) = uVar2;
      dVar16 = 1.0;
      if (1.0 < dVar15) {
        dVar16 = dVar15;
      }
      *(double *)(*(long *)(lVar7 + 0x38) + uVar11 * 8) = dVar16;
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a2c848);
        (*pcVar3)();
      }
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
      lVar14 = lVar8;
      if (uVar9 != 0) break;
LAB_101a2c5c0:
      do {
        lVar8 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a2c83c);
          (*pcVar3)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar8) {
          func_0x000107c6142c();
          lVar8 = 0;
          lVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
          uVar12 = -lVar14;
          uVar9 = 0xffffffffffffffff;
          if (uVar12 < 0x40) {
            uVar9 = ~(-1L << (uVar12 & 0x3f));
          }
          uVar9 = uVar9 & *(ulong *)(lVar7 + 0x40);
          dVar16 = 0.0;
          while( true ) {
            for (; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
              uVar12 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              dVar16 = dVar16 + *(double *)
                                 (*(long *)(lVar7 + 0x38) +
                                  LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) * 8 + lVar8 * 0x200);
            }
            bVar4 = SCARRY8(lVar8,1);
            lVar8 = lVar8 + 1;
            if (bVar4) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101a2c840);
              (*pcVar3)();
            }
            if ((long)(0x3fU - lVar14 >> 6) <= lVar8) break;
            uVar9 = *(ulong *)(lVar1 + lVar8 * 8);
          }
          func_0x000107c6157c(lVar7);
          func_0x000100cc31c8();
          dVar15 = 1.0;
          if (1.0 < dVar16) {
            dVar15 = dVar16;
          }
          func_0x0001000285a8(0x112dec578,&UNK_10d9b8328);
          lVar14 = lVar7;
          func_0x000107c6048c();
          lVar8 = 0;
          uVar12 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
          uVar9 = 0xffffffffffffffff;
          if ((*(byte *)(lVar7 + 0x20) & 0x3f) < 6) {
            uVar9 = ~(-1L << (uVar12 & 0x3f));
          }
          uVar9 = uVar9 & *(ulong *)(lVar7 + 0x40);
          lVar10 = lVar8;
          if (uVar9 == 0) goto LAB_101a2c784;
          do {
            uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
            uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar9 = uVar9 - 1 & uVar9;
            uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar8 << 6;
            while( true ) {
              dVar16 = *(double *)(*(long *)(lVar7 + 0x38) + uVar11 * 8);
              uVar2 = *(undefined4 *)(*(long *)(lVar7 + 0x30) + uVar11 * 4);
              uVar13 = uVar11 >> 3 & 0x1ffffffffffffff8;
              *(ulong *)(lVar14 + 0x40 + uVar13) =
                   *(ulong *)(lVar14 + 0x40 + uVar13) | 1L << (uVar11 & 0x3f);
              *(undefined4 *)(*(long *)(lVar14 + 0x30) + uVar11 * 4) = uVar2;
              *(float *)(*(long *)(lVar14 + 0x38) + uVar11 * 4) = (float)(dVar16 / dVar15);
              if (SCARRY8(*(long *)(lVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101a2c84c);
                (*pcVar3)();
              }
              *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + 1;
              lVar10 = lVar8;
              if (uVar9 != 0) break;
LAB_101a2c784:
              do {
                lVar8 = lVar10 + 1;
                if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101a2c844);
                  (*pcVar3)();
                }
                if ((long)(uVar12 + 0x3f >> 6) <= lVar8) {
                  func_0x000107c61574(lVar7);
                  *(long *)(unaff_x20 + 0x28) = lVar14;
                  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
                  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
                  return;
                }
                uVar9 = *(ulong *)(lVar1 + lVar8 * 8);
                lVar10 = lVar10 + 1;
              } while (uVar9 == 0);
              uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
              uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
              uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
              uVar9 = uVar9 - 1 & uVar9;
              uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar8 * 0x40;
            }
          } while( true );
        }
        uVar9 = ((ulong *)(param_1 + 0x40))[lVar8];
        lVar14 = lVar14 + 1;
      } while (uVar9 == 0);
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 - 1 & uVar9;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar8 * 0x40;
    }
  } while( true );
}


