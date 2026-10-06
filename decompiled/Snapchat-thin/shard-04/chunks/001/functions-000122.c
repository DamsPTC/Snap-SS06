/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10318ef6c; end: 10318ef7f;  */

void FUN_10318ef6c(undefined8 param_1)

{
  if (lRam0000000112f47b18 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e74ce34);
  return;
}



/* Entry: 10318ef80; end: 10318efd7;  */

void FUN_10318ef80(long param_1,long *param_2,code *param_3,code *param_4)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0xff;
    (*param_3)();
    (*param_4)();
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 10318efd8; end: 10318efeb;  */

void FUN_10318efd8(undefined8 param_1)

{
  if (lRam0000000112f47a40 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e74ce0c);
  return;
}



/* Entry: 10318efec; end: 10318f127;  */

long * FUN_10318efec(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar8 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
    iVar5 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    func_0x000107c6157c();
    lVar8 = 0x112f479d8;
    func_0x0001000285a8(0x112f479d8,&UNK_10db94958);
    (**(code **)(*(long *)(lVar8 + -8) + 0x10))
              ((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar8);
    iVar5 = *(int *)(param_3 + 0x1c);
    lVar8 = 0x112f479e0;
    func_0x0001000285a8(0x112f479e0,&UNK_10db94960);
    (**(code **)(*(long *)(lVar8 + -8) + 0x10))
              ((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar8);
    iVar5 = *(int *)(param_3 + 0x24);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar7 = *(undefined1 *)(puVar2 + 2);
    func_0x000107c61174();
    FUN_10318f128(uVar3,uVar4,uVar7);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    *(undefined1 *)(puVar1 + 2) = uVar7;
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar9 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar8 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10318f128; end: 10318f167;  */

void FUN_10318f128(undefined8 param_1,ulong param_2,char param_3)

{
  if (param_3 != '\x01') {
    if (param_3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)();
      return;
    }
    return;
  }
  if (param_2 == 0xf) {
    return;
  }
  if (param_2 < 0xf) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 10318f168; end: 10318f22b;  */

/* WARNING: Possible PIC construction at 0x00010318f208: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010318f20c) */
/* WARNING: Removing unreachable block (ram,0x00010318f22c) */
/* WARNING: Removing unreachable block (ram,0x00010318f240) */
/* WARNING: Removing unreachable block (ram,0x00010318f248) */
/* WARNING: Removing unreachable block (ram,0x00010318f254) */
/* WARNING: Removing unreachable block (ram,0x00010318f258) */
/* WARNING: Removing unreachable block (ram,0x00010318f264) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x00010318f260) */
/* WARNING: Removing unreachable block (ram,0x00010318f250) */
/* WARNING: Removing unreachable block (ram,0x00010318f238) */
/* WARNING: Removing unreachable block (ram,0x00010318f244) */
/* WARNING: Removing unreachable block (ram,0x00010318f23c) */

void FUN_10318f168(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  func_0x000107c61574(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0x112f479d8;
  func_0x0001000285a8(0x112f479d8,&UNK_10db94958);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar2 = 0x112f479e0;
  func_0x0001000285a8(0x112f479e0,&UNK_10db94960);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20)));
  return;
}



/* Entry: 10318f22c; end: 10318f26b;  */

void FUN_10318f22c(undefined8 param_1,ulong param_2,char param_3)

{
  if (param_3 != '\x01') {
    if (param_3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
    return;
  }
  if (param_2 == 0xf) {
    return;
  }
  if (param_2 < 0xf) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10318f26c; end: 10318f4b7;  */

long FUN_10318f26c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 uVar6;
  long lVar7;
  
  lVar7 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
  iVar5 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  func_0x000107c6157c();
  lVar7 = 0x112f479d8;
  func_0x0001000285a8(0x112f479d8,&UNK_10db94958);
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1 + iVar5,param_2 + iVar5,lVar7);
  iVar5 = *(int *)(param_3 + 0x1c);
  lVar7 = 0x112f479e0;
  func_0x0001000285a8(0x112f479e0,&UNK_10db94960);
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1 + iVar5,param_2 + iVar5,lVar7);
  iVar5 = *(int *)(param_3 + 0x24);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x20)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  puVar1 = (undefined8 *)(param_1 + iVar5);
  puVar2 = (undefined8 *)(param_2 + iVar5);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar6 = *(undefined1 *)(puVar2 + 2);
  func_0x000107c61174();
  FUN_10318f128(uVar3,uVar4,uVar6);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  *(undefined1 *)(puVar1 + 2) = uVar6;
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x28));
  return param_1;
}



/* Entry: 10318f4b8; end: 10318f6ab;  */

long FUN_10318f4b8(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
  iVar3 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  lVar4 = 0x112f479d8;
  func_0x0001000285a8(0x112f479d8,&UNK_10db94958);
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + iVar3,param_2 + iVar3,lVar4);
  iVar3 = *(int *)(param_3 + 0x1c);
  lVar4 = 0x112f479e0;
  func_0x0001000285a8(0x112f479e0,&UNK_10db94960);
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + iVar3,param_2 + iVar3,lVar4);
  iVar3 = *(int *)(param_3 + 0x24);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x20)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  uVar5 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar5;
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x28));
  return param_1;
}



/* Entry: 10318f6ac; end: 10318f6c3;  */

void FUN_10318f6ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10318f6c4; end: 10318f7f7;  */

void FUN_10318f6c4(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_50 = PTR___sBoWV_11034d678 + 0x40;
    uVar2 = 0x112f47a50;
    lVar1 = 0x13f;
    func_0x00010318f7b0(0x13f,0x112f47a50,PTR___sScSMa_11034fda0);
    if (uVar2 < 0x40) {
      lStack_48 = *(long *)(lVar1 + -8) + 0x40;
      uVar2 = 0x112f47a58;
      lVar1 = 0x13f;
      func_0x00010318f7b0(0x13f,0x112f47a58,PTR___sScS12ContinuationVMa_11034fd50);
      if (uVar2 < 0x40) {
        lStack_40 = *(long *)(lVar1 + -8) + 0x40;
        puStack_38 = PTR___sBOWV_11034d658 + 0x40;
        puStack_30 = &UNK_10db94970;
        puStack_28 = &UNK_10db94988;
        func_0x000107c6153c(param_1,0x100,7,&lStack_58,param_1 + 0x10);
      }
    }
  }
  return;
}



/* Entry: 10318f7f8; end: 10318f917;  */

long * FUN_10318f7f8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)plVar3 == 1) {
      uVar4 = param_2[1];
      if ((uVar4 < 0xf) || (uVar4 == 0xf)) {
        lVar6 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = lVar6;
      }
      else {
        *param_1 = *param_2;
        param_1[1] = uVar4;
        func_0x000107c61434();
      }
      lVar6 = 0x112f47aa0;
      func_0x0001000285a8(0x112f47aa0,&UNK_10db949a0);
      iVar2 = *(int *)(lVar6 + 0x30);
      lVar6 = 0;
      func_0x000107c5eec8();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))
                ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar6);
      uVar5 = 1;
    }
    else {
      if ((int)plVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar6 + 0x40));
        return param_1;
      }
      lVar6 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar6;
      func_0x000107c615f0(lVar6);
      uVar5 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar5);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10318f918; end: 10318f99f;  */

void FUN_10318f918(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_1;
  func_0x000107c614c4();
  if ((int)puVar2 == 1) {
    if (0xf < (ulong)param_1[1]) {
      func_0x000107c6142c();
    }
    lVar3 = 0x112f47aa0;
    func_0x0001000285a8(0x112f47aa0,&UNK_10db949a0);
    iVar1 = *(int *)(lVar3 + 0x30);
    lVar3 = 0;
    func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x00010318f990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar3 + -8) + 8))((long)param_1 + (long)iVar1,lVar3);
    return;
  }
  if ((int)puVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*param_1);
    return;
  }
  return;
}



/* Entry: 10318f9a0; end: 10318fd2f;  */

undefined8 * FUN_10318f9a0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)puVar2 == 1) {
    uVar3 = param_2[1];
    if ((uVar3 < 0xf) || (uVar3 == 0xf)) {
      uVar5 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar5;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = uVar3;
      func_0x000107c61434();
    }
    lVar4 = 0x112f47aa0;
    func_0x0001000285a8(0x112f47aa0,&UNK_10db949a0);
    iVar1 = *(int *)(lVar4 + 0x30);
    lVar4 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar4);
    uVar5 = 1;
  }
  else {
    if ((int)puVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    func_0x000107c615f0(uVar5);
    uVar5 = 0;
  }
  func_0x000107c6159c(param_1,param_3,uVar5);
  return param_1;
}



/* Entry: 10318fd30; end: 10318fd33;  */

void FUN_10318fd30(void)

{
  return;
}



/* Entry: 10318fd34; end: 10318fdb7;  */

void FUN_10318fd34(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_50 [32];
  undefined *puStack_30;
  undefined1 *puStack_28;
  
  puStack_30 = &UNK_10db949b8;
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    func_0x000107c61504(auStack_50,&UNK_10db949d0,*(long *)(lVar1 + -8) + 0x40);
    puStack_28 = auStack_50;
    func_0x000107c61528(param_1,0x100,2,&puStack_30);
  }
  return;
}



/* Entry: 10318fdb8; end: 10318fdc3;  */

void FUN_10318fdb8(void)

{
  return;
}



/* Entry: 10318fdc4; end: 10318fe43;  */

undefined8 FUN_10318fdc4(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10318fe44; end: 10318fe57;  */

void FUN_10318fe44(undefined8 param_1)

{
  if (lRam0000000112f47c38 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e74ce64);
  return;
}



/* Entry: 10318fe58; end: 10318fe87;  */

void FUN_10318fe58(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 10318fe88; end: 10318ff17;  */

void FUN_10318fe88(long *param_1,code *param_2,long param_3)

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



/* Entry: 10318ff18; end: 103190577;  */

void FUN_10318ff18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lVar2 = 0x112f47778;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112f47778,&UNK_10db94800);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  lVar3 = 0x112f47720;
  func_0x0001000285a8(0x112f47720,&UNK_10db94710);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar11 - extraout_x8_00;
  lVar4 = 0x112f47bc0;
  func_0x0001000285a8(0x112f47bc0,&UNK_10db94ad0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  lVar4 = 0x112f476e8;
  func_0x0001000285a8(0x112f476e8,&UNK_10db94700);
  lVar10 = *(long *)(lVar4 + -8);
  (**(code **)(lVar10 + 0x38))(lVar9,1,1,lVar4);
  (**(code **)(lVar6 + 0x10))(puVar11,uStack_90,lVar2);
  lStack_70 = lVar9;
  func_0x000107c5fd48(lVar7,&UNK_1106180c0,puVar11,0x103190dd0,auStack_80,&UNK_1106180c0);
  (**(code **)(lVar5 + 0x10))(uStack_88,lVar7,lVar3);
  FUN_103190e08(lVar9,lVar8,0x112f47bc0,&UNK_10db94ad0);
  lVar2 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar5 + 8))(lVar7,lVar3);
    (**(code **)(lVar10 + 0x20))(uStack_98,lVar8,lVar4);
    func_0x000103190e50(lVar9,0x112f47bc0,&UNK_10db94ad0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103190138);
  (*pcVar1)();
}



/* Entry: 103190578; end: 1031905f3;  */

void FUN_103190578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  
  func_0x000103190e50(param_2,param_3,param_4);
  func_0x0001000285a8(param_5,param_6);
  lVar1 = *(long *)(param_5 + -8);
  (**(code **)(lVar1 + 0x10))(param_2,param_1,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001031905f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x38))(param_2,0,1,param_5);
  return;
}



/* Entry: 1031905f4; end: 103190993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031905f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long alStack_b0 [2];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uStack_80 = param_4;
  uStack_68 = param_3;
  func_0x000107c61474();
  *(undefined **)(unaff_x20 + 0x100) = &UNK_110618470;
  *(undefined ***)(unaff_x20 + 0x108) = &PTR_DAT_110618480;
  lVar3 = _DAT_112f477f0;
  lVar2 = 0;
  FUN_10318efd8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(unaff_x20 + lVar3,1,1,lVar2);
  lVar3 = unaff_x20 + _DAT_112f477f8;
  *(undefined8 *)(lVar3 + 8) = 0;
  func_0x000107c61614(lVar3,0);
  *(undefined8 *)(unaff_x20 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  *(undefined **)(unaff_x20 + 0x90) = &UNK_110617fe8;
  *(undefined ***)(unaff_x20 + 0x98) = &PTR_DAT_110617ff8;
  lVar3 = 0x112f47b98;
  func_0x0001000285a8(0x112f47b98,&UNK_10db94a98);
  lStack_90 = *(long *)(lVar3 + -8);
  lVar10 = *(long *)(lStack_90 + 0x40);
  lStack_88 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&lStack_a0 - extraout_x8;
  lVar3 = 0x112f477b8;
  func_0x0001000285a8(0x112f477b8,&UNK_10db94a70);
  lStack_78 = *(long *)(lVar3 + -8);
  lStack_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_78 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar2 = lVar12 - extraout_x8_00;
  lVar3 = 0x112f47ba0;
  func_0x0001000285a8(0x112f47ba0,&UNK_10db94aa0);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar2 - extraout_x8_01;
  (**(code **)(lVar8 + 0x68))
            (lVar7,*(undefined4 *)
                    PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             lVar3);
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar1 == 0) {
    func_0x000107c615f0(param_1);
    func_0x000107c61174(param_2);
    func_0x000103190138(lVar12,lVar2,lVar7);
  }
  else {
    uVar4 = 0;
    FUN_10318ef6c(0);
    func_0x000107c615f0(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c5fd10(lVar12,lVar2,uVar4,lVar7,uVar4);
  }
  (**(code **)(lVar8 + 8))(lVar7,lVar3);
  lStack_98 = lVar2;
  (**(code **)(lStack_78 + 0x10))(unaff_x20 + _DAT_112f477e8,lVar2,lStack_70);
  uVar4 = uStack_80;
  *(undefined **)(unaff_x20 + 0xc0) = &UNK_110617fe8;
  *(undefined ***)(unaff_x20 + 200) = &PTR_DAT_110617ff8;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_1;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_80;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lStack_88;
  lVar3 = lStack_90;
  lVar8 = lVar7 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar12;
  (**(code **)(lStack_90 + 0x10))(lVar8,lVar12,lStack_88);
  uVar6 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar9 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  uVar11 = lVar10 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar5 = &UNK_1106183a0;
  func_0x000107c613fc(&UNK_1106183a0,uVar11 + 8,uVar6 | 7);
  (**(code **)(lVar3 + 0x20))(puVar5 + uVar9,lVar8,lVar2);
  *(long *)(puVar5 + uVar11) = unaff_x20;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar4);
  func_0x000107c6157c();
  *(undefined **)(lVar7 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar4 = 0x10;
  func_0x0001001ca524(0x10,0,0x28,3,0,0,&UNK_10db94ab0,puVar5);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar4);
  (**(code **)(lStack_78 + 8))(lStack_98,lStack_70);
  (**(code **)(lVar3 + 8))(lStack_a0,lVar2);
  return;
}



/* Entry: 103190994; end: 1031909a7;  */

void FUN_103190994(undefined8 param_1,ulong param_2,char param_3)

{
  if (param_3 != '\x01') {
    return;
  }
  if (param_2 < 0xf) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1031909a8; end: 1031909f7;  */

undefined8 FUN_1031909a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f47b60;
  func_0x0001000285a8(0x112f47b60,&UNK_10db94a20);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1031909f8; end: 103190a2b;  */

void FUN_1031909f8(undefined8 param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 == 1) {
    if ((param_3 & 0x3f) != 1) {
      return;
    }
  }
  else {
    if (uVar1 != 0) {
      return;
    }
    if (param_2 - 0xf < 4) {
      return;
    }
  }
  if (0xe < param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 103190a2c; end: 103190aa7;  */

void FUN_103190a2c(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103192120;
  plVar3[2] = param_1;
  plVar3[3] = lVar5;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  plVar3[4] = (long)plVar1;
  *plVar1 = (long)plVar3;
  plVar1[1] = (long)FUN_10318c170;
  plVar1[0xb] = unaff_x20 + (uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff));
  plVar1[0xc] = lVar5;
  lVar2 = 0x112f47b50;
  func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xd] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318e858,lVar5,0);
  return;
}



/* Entry: 103190aa8; end: 103190aeb;  */

undefined8 FUN_103190aa8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103190aec; end: 103190b57;  */

void FUN_103190aec(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103190b58; end: 103190bd3;  */

void FUN_103190b58(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103190bd4;
  plVar2[9] = lVar1;
  plVar2[10] = unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
  lVar1 = 0;
  FUN_10318fe44();
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xb] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10318b314,0,0);
  return;
}



/* Entry: 103190bd4; end: 103190c0f;  */

void FUN_103190bd4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103190c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103190c10; end: 103190c6f;  */

void FUN_103190c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar7;
  long lVar8;
  
  func_0x0001000285a8(0x112f477b8,&UNK_10db94a70);
  lVar3 = 0;
  FUN_10318ef6c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar2);
  lVar4 = 0x112f477a8;
  func_0x0001000285a8(0x112f477a8,&UNK_10db94820);
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112f47aa0;
  func_0x0001000285a8(0x112f47aa0,&UNK_10db949a0);
  iVar1 = *(int *)(lVar5 + 0x30);
  *puVar7 = param_1;
  *(undefined8 *)(&stack0xffffffffffffffa8 + lVar2) = param_2;
  lVar5 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))
            ((undefined1 *)((long)puVar7 + (long)iVar1),param_3,lVar5);
  func_0x000107c6159c(puVar7,lVar3,1);
  func_0x00010318f144(param_1,param_2);
  uVar6 = 0x112f477b8;
  func_0x0001000285a8(0x112f477b8,&UNK_10db94a70);
  func_0x000107c5fd28((long)puVar7 - extraout_x8_00,puVar7,uVar6);
  (**(code **)(lVar8 + 8))((long)puVar7 - extraout_x8_00,lVar4);
  return;
}



/* Entry: 103190c70; end: 103190ca7;  */

void FUN_103190c70(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103190578(param_1,*(undefined8 *)(unaff_x20 + 0x10),0x112f47b80,&UNK_10db94a80,0x112f479e0,
                &UNK_10db94960);
  return;
}



/* Entry: 103190ca8; end: 103190cff;  */

undefined8 FUN_103190ca8(undefined8 param_1)

{
  (*(code *)(undefined *)0x103181df8)();
  return param_1;
}



/* Entry: 103190d00; end: 103190d97;  */

void FUN_103190d00(void)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = 0x112f47b98;
  func_0x0001000285a8(0x112f47b98,&UNK_10db94a98);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar3 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar3 + 7 & 0xffffffffffffff8));
  plVar2 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x103192124;
  plVar2[9] = unaff_x20 + uVar3;
  plVar2[10] = lVar4;
  lVar4 = 0;
  func_0x000107c5eec8();
  plVar2[0xb] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0xc] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xd] = uVar3;
  lVar4 = 0x112f479e0;
  func_0x0001000285a8(0x112f479e0,&UNK_10db94960);
  plVar2[0xe] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0xf] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x10] = uVar3;
  lVar4 = 0;
  FUN_10318efd8();
  plVar2[0x11] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0x12] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x13] = uVar3;
  lVar4 = 0x112f47b50;
  func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar1 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x14] = uVar1;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x15] = uVar3;
  lVar4 = 0;
  FUN_10318ef6c();
  plVar2[0x16] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0x17] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar1 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x18] = uVar1;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x19] = uVar3;
  lVar4 = 0x112f47ba8;
  func_0x0001000285a8(0x112f47ba8,&UNK_10db94ab8);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1a] = uVar3;
  lVar4 = 0x112f47bb0;
  func_0x0001000285a8(0x112f47bb0,&UNK_10db94ac0);
  plVar2[0x1b] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0x1c] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1d] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318929c,0,0);
  return;
}



/* Entry: 103190d98; end: 103190e07;  */

void FUN_103190d98(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103190578(param_1,*(undefined8 *)(unaff_x20 + 0x10),0x112f47bb8,&UNK_10db94ac8,0x112f477b8,
                &UNK_10db94a70);
  return;
}



/* Entry: 103190e08; end: 103190e8f;  */

undefined8 FUN_103190e08(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103190e90; end: 103191213;  */

long * FUN_103190e90(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    plVar5 = param_2;
    func_0x000107c614c4(param_2,param_3);
    iVar4 = (int)plVar5;
    if (iVar4 < 2) {
      if (iVar4 == 0) {
        lVar6 = 0;
        func_0x000103182014();
        lVar11 = *(long *)(lVar6 + -8);
        plVar5 = param_2;
        (**(code **)(lVar11 + 0x30))(param_2,1,lVar6);
        if ((int)plVar5 == 0) {
          lVar10 = *param_2;
          *param_1 = lVar10;
          iVar4 = *(int *)(lVar6 + 0x14);
          lVar8 = 0;
          func_0x000107c5ede0();
          pcVar12 = *(code **)(*(long *)(lVar8 + -8) + 0x10);
          func_0x000107c61174(lVar10);
          (*pcVar12)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar8);
          *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x18)) =
               *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x18));
          pcVar12 = *(code **)(lVar11 + 0x38);
          func_0x000107c61174();
          (*pcVar12)(param_1,0,1,lVar6);
        }
        else {
          lVar6 = 0x112f47b60;
          func_0x0001000285a8(0x112f47b60,&UNK_10db94a20);
          func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
        }
        uVar9 = 0;
      }
      else {
        uVar7 = param_2[1];
        if (uVar7 < 0xf) {
          lVar6 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = lVar6;
        }
        else {
          *param_1 = *param_2;
          param_1[1] = uVar7;
          func_0x000107c61434();
        }
        uVar9 = 1;
      }
    }
    else if (iVar4 == 2) {
      lVar8 = *param_2;
      *param_1 = lVar8;
      lVar6 = 0;
      func_0x000103182014();
      iVar4 = *(int *)(lVar6 + 0x14);
      lVar11 = 0;
      func_0x000107c5ede0();
      pcVar12 = *(code **)(*(long *)(lVar11 + -8) + 0x10);
      func_0x000107c61174(lVar8);
      (*pcVar12)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar11);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x18)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x18));
      func_0x000107c61174();
      uVar9 = 2;
    }
    else if (iVar4 == 3) {
      lVar6 = 0;
      func_0x000103182014();
      lVar11 = *(long *)(lVar6 + -8);
      plVar5 = param_2;
      (**(code **)(lVar11 + 0x30))(param_2,1,lVar6);
      if ((int)plVar5 == 0) {
        lVar10 = *param_2;
        *param_1 = lVar10;
        iVar4 = *(int *)(lVar6 + 0x14);
        lVar8 = 0;
        func_0x000107c5ede0();
        pcVar12 = *(code **)(*(long *)(lVar8 + -8) + 0x10);
        func_0x000107c61174(lVar10);
        (*pcVar12)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar8);
        *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x18)) =
             *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x18));
        pcVar12 = *(code **)(lVar11 + 0x38);
        func_0x000107c61174();
        (*pcVar12)(param_1,0,1,lVar6);
      }
      else {
        lVar6 = 0x112f47b60;
        func_0x0001000285a8(0x112f47b60,&UNK_10db94a20);
        func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
      }
      uVar9 = 3;
    }
    else {
      uVar7 = param_2[1];
      if ((uVar7 < 0xf) || (uVar7 == 0xf)) {
        lVar6 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = lVar6;
      }
      else {
        *param_1 = *param_2;
        param_1[1] = uVar7;
        func_0x000107c61434();
      }
      lVar6 = 0x112f47b68;
      func_0x0001000285a8(0x112f47b68,&UNK_10db94a28);
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x30));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x30));
      uVar9 = *puVar2;
      *puVar1 = uVar9;
      lVar11 = 0;
      func_0x000103182014();
      iVar4 = *(int *)(lVar11 + 0x14);
      lVar8 = 0;
      func_0x000107c5ede0();
      pcVar12 = *(code **)(*(long *)(lVar8 + -8) + 0x10);
      func_0x000107c61174(uVar9);
      (*pcVar12)((long)puVar1 + (long)iVar4,(long)puVar2 + (long)iVar4,lVar8);
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x18)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x18));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x40)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x40));
      func_0x000107c61174();
      uVar9 = 4;
    }
    func_0x000107c6159c(param_1,param_3,uVar9);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103191214; end: 103191373;  */

/* WARNING: Possible PIC construction at 0x000103191258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319127c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103191338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010319131c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319133c) */
/* WARNING: Removing unreachable block (ram,0x000103191280) */
/* WARNING: Removing unreachable block (ram,0x000103191320) */
/* WARNING: Removing unreachable block (ram,0x000103191340) */
/* WARNING: Removing unreachable block (ram,0x000103191364) */

void FUN_103191214(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = param_1;
  func_0x000107c614c4();
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        return;
      }
      if ((ulong)param_1[1] < 0xf) {
        return;
      }
_swift_bridgeObjectRelease:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
      return;
    }
  }
  else {
    if (iVar1 == 2) {
      uVar3 = *param_1;
      goto code_r0x000107c61170;
    }
    if (iVar1 != 3) {
      if (iVar1 != 4) {
        return;
      }
      if (0xf < (ulong)param_1[1]) goto _swift_bridgeObjectRelease;
      lVar4 = 0x112f47b68;
      func_0x0001000285a8(0x112f47b68,&UNK_10db94a28);
      uVar3 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x30));
      goto code_r0x000107c61170;
    }
  }
  lVar4 = 0;
  func_0x000103182014();
  puVar2 = param_1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(param_1,1,lVar4);
  if ((int)puVar2 != 0) {
    return;
  }
  uVar3 = *param_1;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103191374; end: 103191893;  */

undefined8 * FUN_103191374(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  
  puVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar2 = (int)puVar3;
  if (iVar2 < 2) {
    if (iVar2 != 0) {
      uVar4 = param_2[1];
      if (uVar4 < 0xf) {
        uVar10 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar10;
      }
      else {
        *param_1 = *param_2;
        param_1[1] = uVar4;
        func_0x000107c61434();
      }
      goto LAB_1031915a8;
    }
  }
  else {
    if (iVar2 == 2) {
      uVar10 = *param_2;
      *param_1 = uVar10;
      lVar7 = 0;
      func_0x000103182014();
      iVar2 = *(int *)(lVar7 + 0x14);
      lVar5 = 0;
      func_0x000107c5ede0();
      pcVar9 = *(code **)(*(long *)(lVar5 + -8) + 0x10);
      func_0x000107c61174(uVar10);
      (*pcVar9)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar5);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x18)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x18));
      func_0x000107c61174();
      goto LAB_1031915a8;
    }
    if (iVar2 != 3) {
      uVar4 = param_2[1];
      if ((uVar4 < 0xf) || (uVar4 == 0xf)) {
        uVar10 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar10;
      }
      else {
        *param_1 = *param_2;
        param_1[1] = uVar4;
        func_0x000107c61434();
      }
      lVar7 = 0x112f47b68;
      func_0x0001000285a8(0x112f47b68,&UNK_10db94a28);
      puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x30));
      puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
      uVar10 = *puVar1;
      *puVar8 = uVar10;
      lVar5 = 0;
      func_0x000103182014();
      iVar2 = *(int *)(lVar5 + 0x14);
      lVar6 = 0;
      func_0x000107c5ede0();
      pcVar9 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
      func_0x000107c61174(uVar10);
      (*pcVar9)((long)puVar8 + (long)iVar2,(long)puVar1 + (long)iVar2,lVar6);
      *(undefined8 *)((long)puVar8 + (long)*(int *)(lVar5 + 0x18)) =
           *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x18));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x40)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x40));
      func_0x000107c61174();
      goto LAB_1031915a8;
    }
  }
  lVar7 = 0;
  func_0x000103182014();
  lVar5 = *(long *)(lVar7 + -8);
  puVar8 = param_2;
  (**(code **)(lVar5 + 0x30))(param_2,1,lVar7);
  if ((int)puVar8 == 0) {
    uVar10 = *param_2;
    *param_1 = uVar10;
    iVar2 = *(int *)(lVar7 + 0x14);
    lVar6 = 0;
    func_0x000107c5ede0();
    pcVar9 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
    func_0x000107c61174(uVar10);
    (*pcVar9)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar6);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x18));
    pcVar9 = *(code **)(lVar5 + 0x38);
    func_0x000107c61174();
    (*pcVar9)(param_1,0,1,lVar7);
  }
  else {
    lVar7 = 0x112f47b60;
    func_0x0001000285a8(0x112f47b60,&UNK_10db94a20);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
LAB_1031915a8:
  func_0x000107c6159c(param_1,param_3,puVar3);
  return param_1;
}



/* Entry: 103191894; end: 103191e6b;  */

/* WARNING: Possible PIC construction at 0x000103191a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103191a90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103191a40) */
/* WARNING: Removing unreachable block (ram,0x000103191a94) */

undefined8 * FUN_103191894(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar2 = (int)puVar3;
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      lVar4 = 0;
      func_0x000103182014();
      lVar5 = *(long *)(lVar4 + -8);
      puVar3 = param_2;
      (**(code **)(lVar5 + 0x30))(param_2,1,lVar4);
      if ((int)puVar3 == 0) {
        *param_1 = *param_2;
        iVar2 = *(int *)(lVar4 + 0x14);
        lVar6 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar6 + -8) + 0x20))
                  ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar6);
        *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x18)) =
             *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x18));
        (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
        uVar7 = 0;
        goto LAB_103191b54;
      }
      lVar4 = 0x112f47b60;
      func_0x0001000285a8(0x112f47b60,&UNK_10db94a20);
      uVar7 = *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40);
      goto code_r0x000107c610b4;
    }
    if (iVar2 == 2) {
      *param_1 = *param_2;
      lVar4 = 0;
      func_0x000103182014();
      iVar2 = *(int *)(lVar4 + 0x14);
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x20))
                ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar5);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x18)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x18));
      uVar7 = 2;
      goto LAB_103191b54;
    }
  }
  else {
    if (iVar2 == 3) {
      lVar4 = 0;
      func_0x000103182014();
      lVar5 = *(long *)(lVar4 + -8);
      puVar3 = param_2;
      (**(code **)(lVar5 + 0x30))(param_2,1,lVar4);
      if ((int)puVar3 != 0) {
        lVar4 = 0x112f47b60;
        func_0x0001000285a8(0x112f47b60,&UNK_10db94a20);
        uVar7 = *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40);
        goto code_r0x000107c610b4;
      }
      *param_1 = *param_2;
      iVar2 = *(int *)(lVar4 + 0x14);
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 0x20))
                ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar6);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x18)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x18));
      (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
      uVar7 = 3;
LAB_103191b54:
      func_0x000107c6159c(param_1,param_3,uVar7);
      return param_1;
    }
    if (iVar2 == 4) {
      uVar7 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      lVar4 = 0x112f47b68;
      func_0x0001000285a8(0x112f47b68,&UNK_10db94a28);
      puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x30));
      puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x30));
      *puVar3 = *puVar1;
      lVar5 = 0;
      func_0x000103182014();
      iVar2 = *(int *)(lVar5 + 0x14);
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 0x20))
                ((long)puVar3 + (long)iVar2,(long)puVar1 + (long)iVar2,lVar6);
      *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar5 + 0x18)) =
           *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x18));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x40)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x40));
      uVar7 = 4;
      goto LAB_103191b54;
    }
  }
  uVar7 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar7);
  return param_1;
}



/* Entry: 103191e6c; end: 103191e6f;  */

void FUN_103191e6c(void)

{
  return;
}



/* Entry: 103191e70; end: 103191f2f;  */

void FUN_103191e70(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_68 [32];
  long lStack_48;
  undefined *puStack_40;
  long lStack_38;
  long lStack_30;
  undefined1 *puStack_28;
  
  uVar3 = 0x112f47c48;
  lVar1 = 0x13f;
  FUN_10318ef80(0x13f,0x112f47c48,0x103182014,PTR___sSqMa_11034e168);
  if (uVar3 < 0x40) {
    lVar1 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_10db94ae8;
    lVar2 = 0x13f;
    lStack_48 = lVar1;
    func_0x000103182014();
    if (uVar3 < 0x40) {
      lStack_38 = *(long *)(lVar2 + -8) + 0x40;
      lStack_30 = lVar1;
      func_0x000107c61508(auStack_68,&UNK_10db949d0,lStack_38,&UNK_10db94988);
      puStack_28 = auStack_68;
      func_0x000107c61528(param_1,0x100,5,&lStack_48);
    }
  }
  return;
}



/* Entry: 103191f30; end: 103191f3f;  */

void FUN_103191f30(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = param_1[1];
  if (*(char *)(param_1 + 2) != '\x01') {
    if (*(char *)(param_1 + 2) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(*param_1);
      return;
    }
    return;
  }
  if (uVar1 == 0xf) {
    return;
  }
  if (uVar1 < 0xf) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 103191f40; end: 103191fdb;  */

undefined8 * FUN_103191f40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10318f128(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103191fdc; end: 10319201f;  */

undefined8 * FUN_103191fdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_10318f22c(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 103192020; end: 103192127;  */

int FUN_103192020(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103192128; end: 1031921a3; -[_TtC21ChatAudioNoteRecorder18RecorderAVDelegate audioRecorderDidFinishRecording:successfully:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103192128(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = _DAT_112f47c78;
  pcVar2 = *(code **)(param_1 + _DAT_112f47c80);
  uVar1 = 0xf;
  if (param_4 == 0) {
    uVar1 = 10;
  }
  lVar4 = param_1;
  func_0x000107c61174();
  (*pcVar2)(0,uVar1,param_1 + lVar3);
  func_0x00010318f248(0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1031921a4; end: 103192203; -[_TtC21ChatAudioNoteRecorder18RecorderAVDelegate audioRecorderEncodeErrorDidOccur:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031921a4(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = _DAT_112f47c78;
  pcVar1 = *(code **)(param_1 + _DAT_112f47c80);
  lVar3 = param_1;
  func_0x000107c61174();
  (*pcVar1)(0,0xb,param_1 + lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 103192204; end: 103192263; -[_TtC21ChatAudioNoteRecorder18RecorderAVDelegate init] */

void FUN_103192204(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatAudioNoteRecorder.RecorderAVDelegate",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103192230);
  (*pcVar1)();
}



/* Entry: 103192264; end: 1031922b3; -[_TtC21ChatAudioNoteRecorder18RecorderAVDelegate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103192264(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_112f47c78;
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f47c80 + 8));
  return;
}



/* Entry: 1031922b4; end: 1031922bb;  */

void FUN_1031922b4(void)

{
  if (lRam0000000112f47cb0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e74cea8);
  return;
}



/* Entry: 1031922bc; end: 1031922f3;  */

void FUN_1031922bc(undefined8 param_1)

{
  if (lRam0000000112f47cb0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e74cea8);
  return;
}



/* Entry: 1031922f4; end: 103192457;  */

void FUN_1031922f4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
    func_0x000107c61630(param_1,0x100,2,&lStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 103192458; end: 103192663;  */

/* WARNING: Possible PIC construction at 0x000103192638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319263c) */

void FUN_103192458(ulong param_1,long param_2,char param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (param_3 == '\0') {
    bVar1 = (param_1 & 1) == 0;
    uVar6 = 0x74616c66;
    if (bVar1) {
      uVar6 = 0x646569726176;
    }
    uVar5 = 0xe400000000000000;
    if (bVar1) {
      uVar5 = 0xe600000000000000;
    }
    uVar4 = 0x746e6573;
    uVar7 = 0xe400000000000000;
    lVar8 = param_2;
  }
  else if (param_3 == '\x01') {
    func_0x0001031929a4();
    func_0x000107c5fb78();
    func_0x000107c6142c(param_2);
    uVar6 = 0;
    uVar4 = 0x5f64656c696166;
    uVar5 = 0xe000000000000000;
    uVar7 = 0xe700000000000000;
    lVar8 = 0;
  }
  else {
    uVar4 = 0x726f68735f6f6f74;
    lVar8 = 0;
    uVar6 = 0;
    uVar5 = 0xe000000000000000;
    uVar7 = 0xe900000000000074;
    if (param_2 != 0 || param_1 != 0) {
      uVar4 = 0xd000000000000011;
      uVar7 = 0x800000010f12b820;
    }
  }
  func_0x000107c602fc(0x17);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar6,uVar5);
  uVar3 = 0xea00000000003d6e;
  func_0x000107c5fb78(0x6f69746172756420,0xea00000000003d6e);
  func_0x000107c5fdd8(lVar8);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(0xe90000000000003d);
  puVar2 = PTR_PTR_1126ba4f0;
  func_0x000107c610f8(PTR_PTR_1126ba4f0);
  func_0x000107c453e4();
  func_0x000107c5fadc(uVar4,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c5fadc(uVar6,uVar5);
  func_0x000108460dac(puVar2,uVar4,uVar6,1);
  func_0x000107c6142c(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 103192664; end: 103192673;  */

undefined1  [16] FUN_103192664(void)

{
  return ZEXT816(0x110618470);
}



/* Entry: 103192674; end: 103192883;  */

undefined8 * FUN_103192674(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((uVar2 == 0xe || (int)uVar1 + 1U < 0x10) && ((int)uVar1 == -1)) {
    *param_1 = *param_2;
    param_1[1] = uVar2;
    func_0x000107c61434(uVar2);
    return param_1;
  }
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  return param_1;
}



/* Entry: 103192884; end: 103192bab;  */

int FUN_103192884(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7fffffef < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffff0;
  }
  uVar4 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  iVar3 = (int)uVar4;
  iVar1 = 0;
  if (iVar3 != 0xe) {
    iVar1 = iVar3 + -0xf;
  }
  iVar2 = 0;
  if (0xf < iVar3 + 1U) {
    iVar2 = iVar1;
  }
  return iVar2;
}



/* Entry: 103192bac; end: 103192df3;  */

undefined1  [16] FUN_103192bac(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  
  uVar2 = 0xec000000726f7272;
  uVar1 = 0x655f65646f636e65;
  switch(param_2) {
  case 0:
    uVar2 = 0x800000010f12ba70;
    uVar1 = 0xd000000000000011;
    break;
  case 1:
    uVar2 = 0x800000010f12ba50;
    uVar1 = 0xd00000000000001a;
    break;
  case 2:
    uVar2 = 0x800000010f12ba20;
    uVar1 = 0xd000000000000021;
    break;
  case 3:
    uVar2 = 0x800000010f12ba00;
    uVar1 = 0xd00000000000001b;
    break;
  case 4:
    uVar2 = 0x800000010f12b9d0;
    uVar1 = 0xd000000000000023;
    break;
  case 5:
    pcVar3 = "session_configure_failed";
    goto code_r0x000103192de8;
  case 6:
    uVar2 = 0x800000010f12b990;
    uVar1 = 0xd000000000000014;
    break;
  case 7:
    pcVar3 = "prepare_to_record_failed";
code_r0x000103192de8:
    uVar1 = 0xd000000000000018;
    uVar2 = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    break;
  case 8:
    uVar2 = 0x800000010f12b950;
    uVar1 = 0xd000000000000013;
    break;
  case 9:
    uVar2 = 0x800000010f12b930;
    uVar1 = 0xd00000000000001e;
    break;
  case 10:
    uVar2 = 0x800000010f12b910;
    uVar1 = 0xd00000000000001f;
    break;
  case 0xb:
    break;
  case 0xc:
    uVar2 = 0x800000010f12b8f0;
    uVar1 = 0xd000000000000017;
    break;
  case 0xd:
    uVar2 = 0x800000010f12b8b0;
    uVar1 = 0xd000000000000010;
    break;
  case 0xe:
    uVar2 = 0xe900000000000064;
    uVar1 = 0x656e6f646e616261;
    break;
  default:
    uVar1 = param_1;
    uVar2 = param_2;
    func_0x0001031929a4();
    func_0x000107c5fb78(0x203a,0xe200000000000000);
    func_0x000107c5fb78(param_1,param_2);
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Entry: 103192df4; end: 103192dfb;  */

undefined1  [16] FUN_103192df4(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 *unaff_x20;
  undefined1 auVar6 [16];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = 0xec000000726f7272;
  uVar3 = 0x655f65646f636e65;
  switch(uVar2) {
  case 0:
    uVar4 = 0x800000010f12ba70;
    uVar3 = 0xd000000000000011;
    break;
  case 1:
    uVar4 = 0x800000010f12ba50;
    uVar3 = 0xd00000000000001a;
    break;
  case 2:
    uVar4 = 0x800000010f12ba20;
    uVar3 = 0xd000000000000021;
    break;
  case 3:
    uVar4 = 0x800000010f12ba00;
    uVar3 = 0xd00000000000001b;
    break;
  case 4:
    uVar4 = 0x800000010f12b9d0;
    uVar3 = 0xd000000000000023;
    break;
  case 5:
    pcVar5 = "session_configure_failed";
    goto code_r0x000103192de8;
  case 6:
    uVar4 = 0x800000010f12b990;
    uVar3 = 0xd000000000000014;
    break;
  case 7:
    pcVar5 = "prepare_to_record_failed";
code_r0x000103192de8:
    uVar3 = 0xd000000000000018;
    uVar4 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    break;
  case 8:
    uVar4 = 0x800000010f12b950;
    uVar3 = 0xd000000000000013;
    break;
  case 9:
    uVar4 = 0x800000010f12b930;
    uVar3 = 0xd00000000000001e;
    break;
  case 10:
    uVar4 = 0x800000010f12b910;
    uVar3 = 0xd00000000000001f;
    break;
  case 0xb:
    break;
  case 0xc:
    uVar4 = 0x800000010f12b8f0;
    uVar3 = 0xd000000000000017;
    break;
  case 0xd:
    uVar4 = 0x800000010f12b8b0;
    uVar3 = 0xd000000000000010;
    break;
  case 0xe:
    uVar4 = 0xe900000000000064;
    uVar3 = 0x656e6f646e616261;
    break;
  default:
    uVar3 = uVar1;
    uVar4 = uVar2;
    func_0x0001031929a4();
    func_0x000107c5fb78(0x203a,0xe200000000000000);
    func_0x000107c5fb78(uVar1,uVar2);
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Entry: 103192dfc; end: 103192f5f;  */

undefined8 * FUN_103192dfc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 103192f60; end: 1031932e3;  */

int FUN_103192f60(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff0 < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffff1;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (0xf < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -0xe;
  }
  return iVar1;
}



/* Entry: 1031932e4; end: 1031933bf;  */

/* WARNING: Possible PIC construction at 0x000103193318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319331c) */

undefined1  [16] FUN_1031932e4(long param_1,long param_2,byte param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if ((1 < param_3) && (param_3 == 2)) {
    if (param_2 != 0) {
      func_0x000107c5fb78(0x2820,0xe200000000000000);
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0x29,0xe100000000000000);
    }
    auVar8._8_8_ = 0xec000000726f7272;
    auVar8._0_8_ = 0x655f65646f636e65;
    return auVar8;
  }
  if (param_3 < 2) {
    pcVar1 = "recorder_init_failed";
    uVar2 = 0xd000000000000018;
    if (param_3 != 0) {
      pcVar1 = "prepare_to_record_failed";
      uVar2 = 0xd000000000000014;
    }
    auVar5._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
    auVar5._0_8_ = uVar2;
    return auVar5;
  }
  if (param_3 != 2) {
    if (param_3 != 3) {
      uVar3 = 0xed00006e6f697461;
      uVar2 = 0x7275645f6f72657a;
                    /* WARNING: Could not recover jumptable at 0x000103193148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10db94c40)[param_1] * 4 + 0x10319314c))
                (0x7275645f6f72657a,0xed00006e6f697461);
      auVar7._8_8_ = uVar3;
      auVar7._0_8_ = uVar2;
      return auVar7;
    }
    auVar4._8_8_ = 0x800000010f12b8d0;
    auVar4._0_8_ = 0xd00000000000001a;
    return auVar4;
  }
  auVar6._8_8_ = 0xec000000726f7272;
  auVar6._0_8_ = 0x655f65646f636e65;
  return auVar6;
}



/* Entry: 1031933c0; end: 1031933db;  */

/* WARNING: Possible PIC construction at 0x000103193318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010319331c) */

undefined1  [16] FUN_1031933c0(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x20;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  bVar3 = *(byte *)(unaff_x20 + 2);
  if ((1 < bVar3) && (bVar3 == 2)) {
    if (lVar2 != 0) {
      func_0x000107c5fb78(0x2820,0xe200000000000000);
      func_0x000107c5fb78(lVar1,lVar2);
      func_0x000107c5fb78(0x29,0xe100000000000000);
    }
    auVar11._8_8_ = 0xec000000726f7272;
    auVar11._0_8_ = 0x655f65646f636e65;
    return auVar11;
  }
  if (bVar3 < 2) {
    pcVar4 = "recorder_init_failed";
    uVar5 = 0xd000000000000018;
    if (bVar3 != 0) {
      pcVar4 = "prepare_to_record_failed";
      uVar5 = 0xd000000000000014;
    }
    auVar8._8_8_ = (ulong)pcVar4 | 0x8000000000000000;
    auVar8._0_8_ = uVar5;
    return auVar8;
  }
  if (bVar3 != 2) {
    if (bVar3 != 3) {
      uVar6 = 0xed00006e6f697461;
      uVar5 = 0x7275645f6f72657a;
                    /* WARNING: Could not recover jumptable at 0x000103193148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10db94c40)[lVar1] * 4 + 0x10319314c))
                (0x7275645f6f72657a,0xed00006e6f697461);
      auVar10._8_8_ = uVar6;
      auVar10._0_8_ = uVar5;
      return auVar10;
    }
    auVar7._8_8_ = 0x800000010f12b8d0;
    auVar7._0_8_ = 0xd00000000000001a;
    return auVar7;
  }
  auVar9._8_8_ = 0xec000000726f7272;
  auVar9._0_8_ = 0x655f65646f636e65;
  return auVar9;
}



/* Entry: 1031933dc; end: 103193477;  */

undefined8 * FUN_1031933dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_103187774(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103193478; end: 1031934bb;  */

undefined8 * FUN_103193478(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x0001031873c0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1031934bc; end: 1031935a7;  */

int FUN_1031934bc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1031935a8; end: 1031936cb;  */

undefined8 * FUN_1031935a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  bVar2 = *(byte *)(param_2 + 2);
  if (bVar2 < 5) {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    FUN_103187774(uVar3,uVar1,bVar2);
    *param_1 = uVar3;
    param_1[1] = uVar1;
    *(byte *)(param_1 + 2) = bVar2;
  }
  else {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  return param_1;
}



/* Entry: 1031936cc; end: 10319375b;  */

undefined8 * FUN_1031936cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(byte *)(param_1 + 2) < 5) {
    bVar2 = *(byte *)(param_2 + 2);
    uVar4 = *param_1;
    uVar1 = param_1[1];
    if (bVar2 < 5) {
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      *(byte *)(param_1 + 2) = bVar2;
      func_0x0001031873c0(uVar4,uVar1);
    }
    else {
      func_0x0001031873c0(uVar4,uVar1);
      uVar4 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar4;
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    }
  }
  else {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  return param_1;
}



/* Entry: 10319375c; end: 10319384b;  */

uint FUN_10319375c(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfa < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfb;
  }
  uVar2 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 5) {
    uVar2 = 0xffffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10319384c; end: 1031938df;  */

void FUN_10319384c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x30);
  FUN_103193cc8(uVar1,uVar2,uVar3);
  func_0x000107c61434(uVar4);
  FUN_103193bb8(uVar1,uVar2,uVar3);
  func_0x000107c6142c(uVar4);
  FUN_1031873ac(uVar1,uVar2,uVar3);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1031873ac(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031938e0; end: 1031938ff;  */

void FUN_1031938e0(void)

{
  func_0x000107c61168(&PTR_PTR_112f47d00);
  return;
}



/* Entry: 103193900; end: 10319391b;  */

undefined8 * FUN_103193900(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (4 < *(byte *)(param_1 + 2)) {
    return param_1;
  }
  puVar1 = (undefined8 *)param_1[1];
  if (*(byte *)(param_1 + 2) < 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar1);
    return puVar1;
  }
  return (undefined8 *)*param_1;
}



/* Entry: 10319391c; end: 103193a3f;  */

undefined8 * FUN_10319391c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  bVar2 = *(byte *)(param_2 + 2);
  if (bVar2 < 5) {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    FUN_103187774(uVar3,uVar1,bVar2);
    *param_1 = uVar3;
    param_1[1] = uVar1;
    *(byte *)(param_1 + 2) = bVar2;
  }
  else {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  return param_1;
}



/* Entry: 103193a40; end: 103193acf;  */

undefined8 * FUN_103193a40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(byte *)(param_1 + 2) < 5) {
    bVar2 = *(byte *)(param_2 + 2);
    uVar4 = *param_1;
    uVar1 = param_1[1];
    if (bVar2 < 5) {
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      *(byte *)(param_1 + 2) = bVar2;
      func_0x0001031873c0(uVar4,uVar1);
    }
    else {
      func_0x0001031873c0(uVar4,uVar1);
      uVar4 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar4;
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    }
  }
  else {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  return param_1;
}



/* Entry: 103193ad0; end: 103193bb7;  */

int FUN_103193ad0(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf9 < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfa;
  }
  uVar2 = (uint)*(byte *)(param_1 + 4);
  if (0xfd < uVar2) {
    uVar2 = 0xfe;
  }
  iVar1 = (uVar2 ^ 0xff) - 1;
  if (*(byte *)(param_1 + 4) < 5) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Entry: 103193bb8; end: 103193cc7;  */

/* WARNING: Possible PIC construction at 0x000103193ca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103193ca8) */

void FUN_103193bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = (uint)param_3 & 0xff;
  puVar4 = PTR_PTR_1126ba4f0;
  func_0x000107c610f8(PTR_PTR_1126ba4f0);
  func_0x000107c453e4();
  if (uVar1 < 0xfe) {
    func_0x000103193070(param_1,param_2,param_3);
  }
  else {
    param_1 = 0;
    param_2 = 0xe000000000000000;
  }
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  uVar3 = 0x726f727265;
  if (uVar1 == 0xfe) {
    uVar3 = 0x6c65636e6163;
  }
  uVar2 = 0xe500000000000000;
  if (uVar1 == 0xfe) {
    uVar2 = 0xe600000000000000;
  }
  uVar5 = 0x73736563637573;
  if (uVar1 != 0xff) {
    uVar5 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (uVar1 != 0xff) {
    uVar3 = uVar2;
  }
  func_0x000107c5fadc(uVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000108460a08(puVar4,param_1,uVar5,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 103193cc8; end: 103193cdb;  */

void FUN_103193cc8(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (0xfd < param_3) {
    return;
  }
  if (param_3 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 103193cdc; end: 103193e2b;  */

void FUN_103193cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar6 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  func_0x000107c5eec4(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eeac();
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  uVar3 = 8;
  uVar5 = param_2;
  func_0x000101297580(8,lVar2,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fb2c(uVar3,lVar2,uVar5,param_4);
  func_0x000107c6142c(param_4);
  puVar4 = PTR_PTR_1126ba4f0;
  func_0x000107c610f8(PTR_PTR_1126ba4f0);
  func_0x000107c453e4();
  uVar5 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f12ba90);
  uVar3 = 0x726f727265;
  func_0x000107c5fadc(0x726f727265,0xe500000000000000);
  func_0x000108460a08(puVar4,uVar5,uVar3,1);
  func_0x000107c6142c(lVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 103193e2c; end: 103193e4b;  */

undefined8 * FUN_103193e2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  bVar2 = *(byte *)(param_2 + 2);
  if (bVar2 < 5) {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    FUN_103187774(uVar3,uVar1,bVar2);
    *param_1 = uVar3;
    param_1[1] = uVar1;
    *(byte *)(param_1 + 2) = bVar2;
  }
  else {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  return param_1;
}



/* Entry: 103193e4c; end: 103194183;  */

void FUN_103193e4c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 auStack_150 [64];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_58;
  
  uVar5 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
  func_0x000107c5faec();
  puStack_e8 = PTR___ss6UInt32VN_11034f020;
  uStack_100 = 0x61616320;
  uVar6 = *(undefined8 *)PTR__AVSampleRateKey_11034cf60;
  uStack_110 = uVar5;
  uStack_108 = param_2;
  func_0x000107c5faec();
  puVar3 = PTR___sSiN_11034deb0;
  puStack_b8 = PTR___sSiN_11034deb0;
  uStack_d0 = 0xac44;
  uVar5 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
  uStack_e0 = uVar6;
  uStack_d8 = param_2;
  func_0x000107c5faec();
  puStack_88 = puVar3;
  uStack_a0 = 1;
  uVar6 = *(undefined8 *)PTR__AVEncoderBitRateKey_11034cf28;
  uStack_b0 = uVar5;
  uStack_a8 = param_2;
  func_0x000107c5faec();
  puStack_58 = puVar3;
  uStack_70 = 32000;
  uStack_80 = uVar6;
  uStack_78 = param_2;
  func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
  lVar7 = 4;
  func_0x000107c60498();
  FUN_103198594(&uStack_110,&uStack_160,0x112d4b5f0,&UNK_10d9127d0);
  uVar11 = uStack_158;
  uVar9 = uStack_160;
  func_0x000107c6157c(lVar7);
  uVar8 = uVar9;
  uVar10 = uVar11;
  func_0x000100029284();
  if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103194168);
    (*pcVar4)();
  }
  lVar1 = lVar7 + 0x40;
  uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar10) = *(ulong *)(lVar1 + uVar10) | 1L << (uVar8 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar8 * 0x10);
  *puVar2 = uVar9;
  puVar2[1] = uVar11;
  func_0x000100102924(auStack_150,*(long *)(lVar7 + 0x38) + uVar8 * 0x20);
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10319416c);
    (*pcVar4)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  FUN_103198594(&uStack_e0,&uStack_160,0x112d4b5f0,&UNK_10d9127d0);
  uVar11 = uStack_158;
  uVar9 = uStack_160;
  uVar8 = uStack_160;
  uVar10 = uStack_158;
  func_0x000100029284();
  if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103194170);
    (*pcVar4)();
  }
  uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar10) = *(ulong *)(lVar1 + uVar10) | 1L << (uVar8 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar8 * 0x10);
  *puVar2 = uVar9;
  puVar2[1] = uVar11;
  func_0x000100102924(auStack_150,*(long *)(lVar7 + 0x38) + uVar8 * 0x20);
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103194174);
    (*pcVar4)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  FUN_103198594(&uStack_b0,&uStack_160,0x112d4b5f0,&UNK_10d9127d0);
  uVar11 = uStack_158;
  uVar9 = uStack_160;
  uVar8 = uStack_160;
  uVar10 = uStack_158;
  func_0x000100029284();
  if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103194178);
    (*pcVar4)();
  }
  uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar10) = *(ulong *)(lVar1 + uVar10) | 1L << (uVar8 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar8 * 0x10);
  *puVar2 = uVar9;
  puVar2[1] = uVar11;
  func_0x000100102924(auStack_150,*(long *)(lVar7 + 0x38) + uVar8 * 0x20);
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10319417c);
    (*pcVar4)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  FUN_103198594(&uStack_80,&uStack_160,0x112d4b5f0,&UNK_10d9127d0);
  uVar9 = uStack_160;
  uVar11 = uStack_158;
  func_0x000100029284();
  if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103194180);
    (*pcVar4)();
  }
  uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar11) = *(ulong *)(lVar1 + uVar11) | 1L << (uVar9 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
  *puVar2 = uStack_160;
  puVar2[1] = uStack_158;
  func_0x000100102924(auStack_150,*(long *)(lVar7 + 0x38) + uVar9 * 0x20);
  func_0x000107c61574(lVar7);
  uVar5 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408(&uStack_110,4,uVar5);
  if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lRam0000000112f47ff0 = lVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x103194184);
  (*pcVar4)();
}



/* Entry: 103194184; end: 1031941e7;  */

/* WARNING: Removing unreachable block (ram,0x000103194408) */
/* WARNING: Removing unreachable block (ram,0x000103194420) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103194184(ulong param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong unaff_x20;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  ulong *unaff_x22;
  ulong *puVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong unaff_x29;
  code *pcStack_3f8;
  long lStack_3f0;
  long *plStack_3e8;
  ulong uStack_3e0;
  code *pcStack_3d8;
  long lStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  code *pcStack_3a8;
  long lStack_398;
  ulong uStack_390;
  ulong *puStack_388;
  ulong uStack_380;
  code *pcStack_378;
  long lStack_370;
  ulong *puStack_368;
  ulong uStack_360;
  code *pcStack_358;
  long lStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  code *pcStack_328;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  ulong *puStack_2f8;
  ulong uStack_2f0;
  code *pcStack_2e8;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  ulong uStack_2c0;
  code *pcStack_2b8;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  ulong uStack_280;
  code *pcStack_278;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  ulong uStack_250;
  code *pcStack_248;
  long lStack_240;
  long *plStack_238;
  ulong uStack_230;
  code *pcStack_228;
  long lStack_218;
  long lStack_210;
  long *plStack_208;
  ulong uStack_200;
  code *pcStack_1f8;
  long lStack_1e8;
  ulong *puStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  ulong uStack_1b0;
  code *pcStack_1a8;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  ulong uStack_180;
  code *pcStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_150;
  ulong uStack_100;
  code *pcStack_f8;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  ulong uStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  ulong uStack_80;
  ulong uStack_70;
  code *pcStack_68;
  long lStack_58;
  ulong uStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x25] = param_1;
  unaff_x22[0x26] = unaff_x20;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
    pcVar10 = FUN_1031941e8;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_1031941e8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar20 = unaff_x22[0x26];
  lVar2 = 0;
  FUN_103197644();
  pcVar10 = FUN_103197644;
  uVar15 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  unaff_x22[0x27] = uVar15;
  uVar3 = uVar15 + 0xf & 0xfffffffffffffff0;
  func_0x000107c615b8();
  uVar15 = _DAT_112f47d68;
  unaff_x22[0x28] = _DAT_112f47d68;
  func_0x000107c61428(uVar20 + uVar15,unaff_x22 + 2,0,0);
  FUN_103187e0c(uVar20 + uVar15,uVar3);
  uVar4 = 0;
  FUN_103197894();
  unaff_x22[0x29] = uVar4;
  uVar16 = *(ulong *)(uVar4 - 8);
  unaff_x22[0x2a] = uVar16;
  uVar20 = uVar3;
  (**(code **)(uVar16 + 0x30))(uVar3,1);
  uVar14 = (undefined1)uVar4;
  FUN_103198414(uVar3);
  func_0x000107c615c0(uVar3);
  if ((int)uVar20 == 1) {
    puVar5 = (ulong *)0x90;
    func_0x000107c615b8();
    unaff_x22[0x2b] = (ulong)puVar5;
    *puVar5 = (ulong)unaff_x22;
    puVar5[1] = (ulong)FUN_103194394;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) goto LAB_103194390;
FUN_1031956e4:
    pcVar10 = FUN_1031956f8;
  }
  else {
    unaff_x22[0xf] = 0;
    unaff_x22[0xe] = 0xe;
    *(undefined1 *)(unaff_x22 + 0x10) = 4;
    puVar5 = (ulong *)0x2;
    pcVar10 = (code *)0x12;
    uVar14 = 0;
    func_0x000100029b9c();
    if ((int)puVar5 != 0) {
      FUN_103187f64();
      uVar14 = SUB81(puVar5,0);
      pcVar10 = (code *)&UNK_110618668;
      puVar5 = unaff_x22 + 0xe;
      func_0x000107c61658();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010319438c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)unaff_x22[1])(0xe,0,4);
      return;
    }
LAB_103194390:
    func_0x000107c60e78();
    uStack_70 = (ulong)&uStack_30 | 0x1000000000000000;
    plVar1 = (long *)auStack_90;
    pcStack_68 = FUN_103194394;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = *unaff_x22;
    puVar23 = (ulong *)*unaff_x22;
    *(ulong **)(uVar4 + 0x160) = puVar5;
    *(code **)(uVar4 + 0x168) = pcVar10;
    *(undefined1 *)(uVar4 + 0x81) = uVar14;
    uStack_80 = uVar3;
    func_0x000107c615c0(*(undefined8 *)(uVar4 + 0x158));
    uVar13 = *(undefined8 *)(uVar4 + 0x130);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      pcVar10 = FUN_1031952c0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    uStack_a0 = (ulong)&uStack_70 | 0x1000000000000000;
    pcStack_98 = FUN_103194444;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_b0 = uVar4;
    puStack_a8 = puVar23;
    if ((puVar23[0x2c] & 1) == 0) {
      lVar2 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      puVar23[0x3f] = uVar4;
      lVar2 = 0;
      func_0x000107c5ede0();
      uVar13 = 1;
      uVar14 = 1;
      (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar4,1,1,lVar2);
      puVar5 = (ulong *)0x100;
      func_0x000107c615b8();
      puVar23[0x40] = (ulong)puVar5;
      *puVar5 = (ulong)puVar23;
      puVar5[1] = (ulong)FUN_10319518c;
      uVar3 = puVar23[0x26];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) goto LAB_103194578;
      uVar17 = 0;
      uVar9 = uStack_a0 & 0xefffffffffffffff;
      uVar16 = uStack_b0;
      pcStack_3f8 = pcStack_98;
    }
    else {
      uVar3 = *(ulong *)(puVar23[0x26] + 0x70);
      puVar5 = (ulong *)0x110;
      func_0x000107c615b8();
      puVar23[0x2e] = (ulong)puVar5;
      *puVar5 = (ulong)puVar23;
      puVar5[1] = (ulong)FUN_10319457c;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
        puVar5[0x1c] = uVar3;
        pcVar10 = FUN_1031958c8;
        goto LAB_107c615e0;
      }
LAB_103194578:
      func_0x000107c60e78();
      uStack_d0 = (ulong)&uStack_a0 | 0x1000000000000000;
      plVar1 = (long *)auStack_f0;
      pcStack_c8 = FUN_10319457c;
      lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar16 = *puVar23;
      plVar24 = (long *)*puVar23;
      *(ulong **)(uVar16 + 0x178) = puVar5;
      *(undefined8 *)(uVar16 + 0x180) = uVar13;
      *(undefined1 *)(uVar16 + 0x82) = uVar14;
      *(ulong *)(uVar16 + 0x188) = uVar3;
      uStack_e0 = uVar4;
      uStack_d8 = uVar16;
      func_0x000107c615c0(*(undefined8 *)(uVar16 + 0x170));
      if (uVar3 == 0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
          pcVar10 = FUN_103194630;
          goto LAB_107c615e0;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
        pcVar10 = FUN_1031954d0;
        goto LAB_107c615e0;
      }
      func_0x000107c60e78();
      uStack_100 = (ulong)&uStack_d0 | 0x1000000000000000;
      pcStack_f8 = FUN_103194630;
      lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar2 = 0;
      func_0x000107c5ede0();
      plVar24[0x32] = lVar2;
      lVar27 = *(long *)(lVar2 + -8);
      plVar24[0x33] = lVar27;
      uVar9 = *(long *)(lVar27 + 0x40) + 0xf;
      uVar6 = uVar9 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar24[0x34] = uVar6;
      FUN_103195d00(uVar6);
      puVar22 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar7 = puVar22;
      func_0x000107c5ed90();
      plVar24[0x23] = 0;
      puVar8 = puVar22;
      func_0x000107c4ff50();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar22);
      lVar19 = plVar24[0x23];
      if ((int)puVar8 == 0) {
        lVar21 = lVar19;
        func_0x000107c61174(lVar19);
        func_0x000107c5ed30(lVar19);
        func_0x000107c61170(lVar21);
        func_0x000107c61654();
        func_0x000107c614ac(lVar19);
        lVar21 = 0;
      }
      else {
        lVar21 = plVar24[0x31];
        func_0x000107c61174(lVar19);
      }
      uVar9 = uVar9 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      pcVar10 = *(code **)(lVar27 + 0x10);
      (*pcVar10)();
      if (lRam0000000112f47fe8 != -1) {
        func_0x000107c61568(0x112f47fe8,FUN_103193e4c);
      }
      uVar13 = uRam0000000112f47ff0;
      puVar23 = (ulong *)PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50;
      func_0x000107c610f8();
      func_0x000107c61434(uVar13);
      uVar3 = uVar9;
      func_0x0001010416fc(uVar9,uVar13);
      plVar24[0x35] = uVar3;
      plVar24[0x36] = lVar21;
      func_0x000107c615c0(uVar9);
      if (lVar21 == 0) {
        func_0x000107c61174();
        func_0x000107c53fcc();
        func_0x000107c5668c(uVar3);
        uVar4 = uVar3;
        func_0x000107c4ee28();
        func_0x000107c61170(uVar3);
        if ((uVar4 & 1) == 0) {
          lVar19 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          uVar4 = *(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar24[0x3d] = uVar4;
          (*pcVar10)();
          (**(code **)(lVar27 + 0x38))(uVar4,0,1,lVar2);
          puVar5 = (ulong *)0x100;
          func_0x000107c615b8();
          plVar24[0x3e] = (long)puVar5;
          pcVar10 = FUN_103195010;
          goto LAB_103194af8;
        }
        if (lRam0000000112f47ff8 != -1) {
          func_0x000107c61568(0x112f47ff8,0x103193e34);
        }
        uVar4 = uVar3;
        func_0x000107c4fa98(uRam0000000112f48000);
        if ((int)uVar4 == 0) {
          lVar19 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          uVar4 = *(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar24[0x3b] = uVar4;
          (*pcVar10)();
          (**(code **)(lVar27 + 0x38))(uVar4,0,1,lVar2);
          puVar5 = (ulong *)0x100;
          func_0x000107c615b8();
          plVar24[0x3c] = (long)puVar5;
          pcVar10 = FUN_103194e98;
          goto LAB_103194af8;
        }
        uStack_170 = plVar24[0x2f];
        uVar9 = plVar24[0x29];
        lStack_168 = plVar24[0x2a];
        lVar27 = plVar24[0x27];
        lStack_160 = plVar24[0x28];
        lVar19 = plVar24[0x26];
        lVar21 = 8;
        func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
        *(undefined8 *)(lVar21 + 0x10) = 8;
        *(undefined8 *)(lVar21 + 0x28) = 0;
        *(undefined8 *)(lVar21 + 0x20) = 0;
        *(undefined8 *)(lVar21 + 0x38) = 0;
        *(undefined8 *)(lVar21 + 0x30) = 0;
        *(undefined8 *)(lVar21 + 0x48) = 0;
        *(undefined8 *)(lVar21 + 0x40) = 0;
        *(undefined8 *)(lVar21 + 0x58) = 0;
        *(undefined8 *)(lVar21 + 0x50) = 0;
        puVar11 = (undefined8 *)(lVar19 + _DAT_112f47d70);
        func_0x000107c61428(puVar11,plVar24 + 8,1,0);
        uVar13 = puVar11[2];
        *puVar11 = 0;
        puVar11[1] = 0x3fd3333333333333;
        puVar11[2] = lVar21;
        func_0x000107c6142c(uVar13);
        puVar23 = (ulong *)(lVar27 + 0xfU & 0xfffffffffffffff0);
        func_0x000107c615b8();
        (*pcVar10)((long)puVar23 + (long)*(int *)(uVar9 + 0x14),uVar6,lVar2);
        uVar4 = uStack_170;
        *puVar23 = uVar3;
        *(ulong *)((long)puVar23 + (long)*(int *)(uVar9 + 0x18)) = uStack_170;
        (**(code **)(lStack_168 + 0x38))(puVar23,0,1,uVar9);
        lVar2 = lStack_160;
        func_0x000107c61428(lVar19 + lStack_160,plVar24 + 0xb,0x21,0);
        func_0x000107c61174(uVar3);
        func_0x000107c61174(uVar4);
        func_0x000103187ec0(puVar23,lVar19 + lVar2);
        func_0x000107c614a8(plVar24 + 0xb);
        func_0x000107c615c0(puVar23);
        lVar19 = lVar19 + _DAT_113806f10;
        func_0x000107c61618();
        plVar24[0x39] = lVar19;
        if (lVar19 == 0) {
          lVar2 = plVar24[0x2f];
          func_0x000107c61170(uVar3);
          func_0x000107c61170(lVar2);
          lVar19 = plVar24[0x34];
          (**(code **)(plVar24[0x33] + 8))(lVar19,plVar24[0x32]);
          func_0x000107c615c0(lVar19);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
                    /* WARNING: Could not recover jumptable at 0x000103194bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)plVar24[1])();
            return;
          }
        }
        else {
          lVar2 = 0;
          func_0x000107c5fcec();
          lVar19 = lVar2;
          func_0x000107c5fce8();
          plVar24[0x3a] = lVar19;
          func_0x000100eea164();
          func_0x000107c5fca8(lVar2,lVar19);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
            pcVar10 = FUN_103194d90;
            goto LAB_107c615e0;
          }
        }
      }
      else {
        lVar19 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar4 = *(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar24[0x37] = uVar4;
        (*pcVar10)();
        (**(code **)(lVar27 + 0x38))(uVar4,0,1,lVar2);
        puVar5 = (ulong *)0x100;
        func_0x000107c615b8();
        plVar24[0x38] = (long)puVar5;
        pcVar10 = FUN_103194bec;
LAB_103194af8:
        *puVar5 = (ulong)plVar24;
        puVar5[1] = (ulong)pcVar10;
        uVar17 = plVar24[0x2f];
        uVar3 = plVar24[0x26];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
          uVar9 = uStack_100 & 0xefffffffffffffff;
          pcStack_3f8 = pcStack_f8;
          goto FUN_103196cf0;
        }
      }
      func_0x000107c60e78();
      uStack_180 = (ulong)&uStack_100 | 0x1000000000000000;
      pcStack_178 = FUN_103194bec;
      lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_188 = *plVar24;
      uVar13 = *(undefined8 *)(lStack_188 + 0x1b8);
      plVar24 = (long *)*plVar24;
      lStack_190 = lVar2;
      func_0x000107c615c0(*(undefined8 *)(lStack_188 + 0x1c0));
      func_0x0001000293e4(uVar13);
      func_0x000107c615c0(uVar13);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
        pcVar10 = FUN_103194c7c;
        goto LAB_107c615e0;
      }
      func_0x000107c60e78();
      uStack_1b0 = (ulong)&uStack_180 | 0x1000000000000000;
      pcStack_1a8 = FUN_103194c7c;
      lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_1e0 = puVar23;
      uStack_1d8 = uVar9;
      uStack_1d0 = uVar6;
      uStack_1c8 = uVar4;
      uStack_1c0 = uVar13;
      plStack_1b8 = plVar24;
      func_0x000107c614cc(plVar24[0x36],plVar24 + 0x24,plVar24 + 5);
      lVar2 = plVar24[6];
      lVar19 = plVar24[7];
      func_0x000107c60640();
      plVar24[0x1a] = lVar2;
      plVar24[0x1b] = lVar19;
      *(undefined1 *)(plVar24 + 0x1c) = 1;
      uVar13 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar13 != 0) {
        FUN_103187f64();
        func_0x000107c61658(plVar24 + 0x1a,&UNK_110618668,uVar13);
      }
      lVar27 = plVar24[0x33];
      lVar21 = plVar24[0x34];
      lVar25 = plVar24[0x32];
      lVar26 = plVar24[0x2f];
      func_0x000107c614ac(plVar24[0x36]);
      func_0x000107c61170(lVar26);
      (**(code **)(lVar27 + 8))(lVar21,lVar25);
      func_0x000107c615c0(lVar21);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
                    /* WARNING: Could not recover jumptable at 0x000103194d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar24[1])(lVar2,lVar19,1);
        return;
      }
      func_0x000107c60e78();
      uStack_200 = (ulong)&uStack_1b0 | 0x1000000000000000;
      pcStack_1f8 = FUN_103194d90;
      lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar2 = plVar24[0x39];
      lVar27 = plVar24[0x26];
      lStack_210 = lVar19;
      plStack_208 = plVar24;
      func_0x000107c61574(plVar24[0x3a]);
      FUN_103184874();
      func_0x000107c615e8(lVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
        pcVar10 = FUN_103194e10;
        goto LAB_107c615e0;
      }
      func_0x000107c60e78();
      uStack_230 = (ulong)&uStack_200 | 0x1000000000000000;
      pcStack_228 = FUN_103194e10;
      lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar2 = plVar24[0x2f];
      plStack_238 = plVar24;
      func_0x000107c61170(plVar24[0x35]);
      func_0x000107c61170(lVar2);
      lVar2 = plVar24[0x34];
      (**(code **)(plVar24[0x33] + 8))(lVar2,plVar24[0x32]);
      func_0x000107c615c0(lVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_240) {
                    /* WARNING: Could not recover jumptable at 0x000103194e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar24[1])();
        return;
      }
      func_0x000107c60e78();
      uStack_250 = (ulong)&uStack_230 | 0x1000000000000000;
      pcStack_248 = FUN_103194e98;
      lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_258 = *plVar24;
      uVar13 = *(undefined8 *)(lStack_258 + 0x1d8);
      plVar24 = (long *)*plVar24;
      lStack_260 = lVar27;
      func_0x000107c615c0(*(undefined8 *)(lStack_258 + 0x1e0));
      func_0x0001000293e4(uVar13);
      func_0x000107c615c0(uVar13);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
        pcVar10 = FUN_103194f28;
        goto LAB_107c615e0;
      }
      func_0x000107c60e78();
      uStack_280 = (ulong)&uStack_250 | 0x1000000000000000;
      pcStack_278 = FUN_103194f28;
      lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar24[0x21] = 0;
      plVar24[0x20] = 6;
      *(undefined1 *)(plVar24 + 0x22) = 4;
      uVar18 = 2;
      lStack_2a0 = lVar25;
      lStack_298 = lVar21;
      uStack_290 = uVar13;
      plStack_288 = plVar24;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar18 != 0) {
        FUN_103187f64();
        func_0x000107c61658(plVar24 + 0x20,&UNK_110618668,uVar18);
      }
      lVar2 = plVar24[0x34];
      lVar19 = plVar24[0x32];
      lVar27 = plVar24[0x33];
      lVar21 = plVar24[0x2f];
      func_0x000107c61170(plVar24[0x35]);
      func_0x000107c61170(lVar21);
      (**(code **)(lVar27 + 8))(lVar2,lVar19);
      func_0x000107c615c0(lVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
                    /* WARNING: Could not recover jumptable at 0x000103195008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar24[1])(6,0,4);
        return;
      }
      func_0x000107c60e78();
      uStack_2c0 = (ulong)&uStack_280 | 0x1000000000000000;
      pcStack_2b8 = FUN_103195010;
      lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_2c8 = *plVar24;
      uVar13 = *(undefined8 *)(lStack_2c8 + 0x1e8);
      puVar23 = (ulong *)*plVar24;
      lStack_2d0 = lVar19;
      func_0x000107c615c0(*(undefined8 *)(lStack_2c8 + 0x1f0));
      func_0x0001000293e4(uVar13);
      func_0x000107c615c0(uVar13);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
        pcVar10 = FUN_1031950a0;
        goto LAB_107c615e0;
      }
      func_0x000107c60e78();
      uStack_2f0 = (ulong)&uStack_2c0 | 0x1000000000000000;
      pcStack_2e8 = FUN_1031950a0;
      lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar23[0x1e] = 0;
      puVar23[0x1d] = 5;
      *(undefined1 *)(puVar23 + 0x1f) = 4;
      uVar18 = 2;
      lStack_310 = lVar27;
      lStack_308 = lVar21;
      uStack_300 = uVar13;
      puStack_2f8 = puVar23;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar18 != 0) {
        FUN_103187f64();
        func_0x000107c61658(puVar23 + 0x1d,&UNK_110618668,uVar18);
      }
      uVar3 = puVar23[0x34];
      uVar4 = puVar23[0x32];
      uVar15 = puVar23[0x33];
      uVar20 = puVar23[0x2f];
      func_0x000107c61170(puVar23[0x35]);
      func_0x000107c61170(uVar20);
      (**(code **)(uVar15 + 8))(uVar3,uVar4);
      func_0x000107c615c0(uVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
                    /* WARNING: Could not recover jumptable at 0x000103195184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)puVar23[1])(5,0,4);
        return;
      }
      func_0x000107c60e78();
      uStack_330 = (ulong)&uStack_2f0 | 0x1000000000000000;
      pcStack_328 = FUN_10319518c;
      lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_338 = *puVar23;
      uVar3 = *(ulong *)(uStack_338 + 0x1f8);
      puVar23 = (ulong *)*puVar23;
      uStack_340 = uVar4;
      func_0x000107c615c0(*(undefined8 *)(uStack_338 + 0x200));
      func_0x0001000293e4(uVar3);
      func_0x000107c615c0(uVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
        pcVar10 = FUN_10319521c;
        goto LAB_107c615e0;
      }
      func_0x000107c60e78();
      uStack_360 = (ulong)&uStack_330 | 0x1000000000000000;
      plVar1 = &lStack_370;
      pcStack_358 = FUN_10319521c;
      lStack_370 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar23[0x14] = 0;
      puVar23[0x15] = 0;
      *(undefined1 *)(puVar23 + 0x16) = 4;
      uVar13 = 2;
      puStack_368 = puVar23;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar13 != 0) {
        FUN_103187f64();
        func_0x000107c61658(puVar23 + 0x14,&UNK_110618668,uVar13);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_370) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)puVar23[1])(0,0,4);
        return;
      }
      func_0x000107c60e78();
      uStack_380 = (ulong)&uStack_360 | 0x1000000000000000;
      pcStack_378 = FUN_1031952c0;
      lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar2 = 0x112d36580;
      uStack_390 = uVar3;
      puStack_388 = puVar23;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      puVar23[0x41] = uVar4;
      lVar2 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar4,1,1,lVar2);
      puVar5 = (ulong *)0x100;
      func_0x000107c615b8();
      puVar23[0x42] = (ulong)puVar5;
      *puVar5 = (ulong)puVar23;
      puVar5[1] = (ulong)FUN_103195398;
      uVar3 = puVar23[0x26];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
        uVar17 = 0;
        uVar9 = uStack_380 & 0xefffffffffffffff;
        uVar16 = uStack_390;
        pcStack_3f8 = pcStack_378;
      }
      else {
        func_0x000107c60e78();
        uStack_3b0 = (ulong)&uStack_380 | 0x1000000000000000;
        pcStack_3a8 = FUN_103195398;
        lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uStack_3b8 = *puVar23;
        uVar16 = *(ulong *)(uStack_3b8 + 0x208);
        plVar24 = (long *)*puVar23;
        uStack_3c0 = uVar4;
        func_0x000107c615c0(*(undefined8 *)(uStack_3b8 + 0x210));
        func_0x0001000293e4(uVar16);
        func_0x000107c615c0(uVar16);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
          pcVar10 = FUN_10319542c;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_3e0 = (ulong)&uStack_3b0 | 0x1000000000000000;
        plVar1 = &lStack_3f0;
        pcStack_3d8 = FUN_10319542c;
        lStack_3f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar24[0x12] = plVar24[0x2d];
        plVar24[0x11] = plVar24[0x2c];
        *(undefined1 *)(plVar24 + 0x13) = *(undefined1 *)((long)plVar24 + 0x81);
        uVar13 = 2;
        plStack_3e8 = plVar24;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar13 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar24 + 0x11,&UNK_110618668,uVar13);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f0) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar24[1])();
          return;
        }
        func_0x000107c60e78(plVar24[0x2c],plVar24[0x2d],*(undefined1 *)((long)plVar24 + 0x81));
        pcStack_3f8 = FUN_1031954d0;
        lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar2 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar24[0x43] = uVar4;
        lVar2 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar4,1,1,lVar2);
        puVar5 = (ulong *)0x100;
        func_0x000107c615b8();
        plVar24[0x44] = (long)puVar5;
        *puVar5 = (ulong)plVar24;
        puVar5[1] = (ulong)FUN_1031955a8;
        uVar3 = plVar24[0x26];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
          func_0x000107c60e78();
          lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uVar13 = *(undefined8 *)(*plVar24 + 0x218);
          lVar19 = *plVar24;
          func_0x000107c615c0(*(undefined8 *)(*plVar24 + 0x220));
          func_0x0001000293e4(uVar13);
          func_0x000107c615c0(uVar13);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
            pcVar10 = FUN_10319563c;
            goto LAB_107c615e0;
          }
          func_0x000107c60e78();
          lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
          *(undefined8 *)(lVar19 + 0xc0) = *(undefined8 *)(lVar19 + 0x180);
          *(undefined8 *)(lVar19 + 0xb8) = *(undefined8 *)(lVar19 + 0x178);
          *(undefined1 *)(lVar19 + 200) = *(undefined1 *)(lVar19 + 0x82);
          uVar13 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar13 != 0) {
            FUN_103187f64();
            func_0x000107c61658((undefined8 *)(lVar19 + 0xb8),&UNK_110618668,uVar13);
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar19 + 8))();
            return;
          }
          func_0x000107c60e78(*(undefined8 *)(lVar19 + 0x178),*(undefined8 *)(lVar19 + 0x180),
                              *(undefined1 *)(lVar19 + 0x82));
          goto FUN_1031956e4;
        }
        uVar17 = 0;
        uVar9 = (ulong)&uStack_3e0 & 0xefffffffffffffff;
      }
    }
FUN_103196cf0:
    *(ulong *)((long)plVar1 + -0x10) = uVar9 | 0x1000000000000000;
    *(code **)((long)plVar1 + -8) = pcStack_3f8;
    *(ulong **)((long)plVar1 + -0x18) = puVar5;
    *(undefined8 *)((long)plVar1 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar5[0x15] = uVar4;
    puVar5[0x16] = uVar3;
    puVar5[0x14] = uVar17;
    lVar2 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    puVar5[0x17] = uVar3;
    uVar3 = 0;
    func_0x000107c5ede0();
    puVar5[0x18] = uVar3;
    uVar3 = *(ulong *)(uVar3 - 8);
    puVar5[0x19] = uVar3;
    uVar3 = *(long *)(uVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    puVar5[0x1a] = uVar3;
    lVar2 = 0;
    FUN_103197644();
    uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    puVar5[0x1b] = uVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x20)) {
      pcVar10 = FUN_103196dcc;
    }
    else {
      func_0x000107c60e78();
      *(ulong *)((long)plVar1 + -0x50) = uVar15;
      *(ulong *)((long)plVar1 + -0x48) = uVar20;
      *(ulong *)((long)plVar1 + -0x40) = uVar16;
      *(ulong *)((long)plVar1 + -0x30) = (ulong)((long)plVar1 + -0x10) | 0x1000000000000000;
      *(code **)((long)plVar1 + -0x28) = FUN_103196dcc;
      *(ulong **)((long)plVar1 + -0x38) = puVar5;
      *(undefined8 *)((long)plVar1 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar3 = puVar5[0x1b];
      uVar20 = puVar5[0x16];
      puVar22 = (undefined *)puVar5[0x14];
      lVar2 = 0;
      FUN_103197894();
      (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar3,1,1,lVar2);
      uVar15 = _DAT_112f47d68;
      func_0x000107c61428(uVar20 + _DAT_112f47d68,puVar5 + 10,0x21,0);
      func_0x000103187ec0(uVar3,uVar20 + uVar15);
      func_0x000107c614a8(puVar5 + 10);
      lVar2 = 8;
      func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
      *(undefined8 *)(lVar2 + 0x10) = 8;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined8 *)(lVar2 + 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x40) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      *(undefined8 *)(lVar2 + 0x50) = 0;
      puVar11 = (undefined8 *)(uVar20 + _DAT_112f47d70);
      func_0x000107c61428(puVar11,puVar5 + 0xd,1,0);
      uVar13 = puVar11[2];
      *puVar11 = 0;
      puVar11[1] = 0x3fd3333333333333;
      puVar11[2] = lVar2;
      func_0x000107c6142c(uVar13);
      if (puVar22 == (undefined *)0x0) {
        uVar15 = puVar5[0x18];
        puVar22 = (undefined *)puVar5[0x19];
        uVar20 = puVar5[0x17];
        FUN_103198594(puVar5[0x15],uVar20,0x112d36580,&UNK_10d9016d0);
        (**(code **)(puVar22 + 0x30))(uVar20,1,uVar15);
        if ((int)uVar20 == 1) {
          func_0x0001000293e4(puVar5[0x17]);
        }
        else {
          (**(code **)(puVar5[0x19] + 0x20))(puVar5[0x1a],puVar5[0x17],puVar5[0x18]);
          puVar22 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar7 = puVar22;
          func_0x000107c5ed90();
          puVar5[0x13] = 0;
          puVar8 = puVar22;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar22);
          puVar22 = (undefined *)puVar5[0x13];
          if ((int)puVar8 == 0) {
            puVar7 = puVar22;
            func_0x000107c61174(puVar22);
            func_0x000107c5ed30();
            func_0x000107c61170(puVar7);
            func_0x000107c61654();
            func_0x000107c614ac(puVar22);
          }
          else {
            func_0x000107c61174(puVar22);
            puVar22 = puVar8;
          }
          (**(code **)(puVar5[0x19] + 8))(puVar5[0x1a],puVar5[0x18]);
        }
        uVar15 = puVar5[0x16] + _DAT_113806f10;
        func_0x000107c61618();
        puVar5[0x1d] = uVar15;
        if (uVar15 == 0) {
          uVar15 = puVar5[0x1a];
          puVar11 = (undefined8 *)puVar5[0x17];
          func_0x000107c615c0(puVar5[0x1b]);
          func_0x000107c615c0(uVar15);
          func_0x000107c615c0(puVar11);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x58)) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)puVar5[1])();
            return;
          }
        }
        else {
          puVar11 = (undefined8 *)0x0;
          func_0x000107c5fcec();
          puVar12 = puVar11;
          func_0x000107c5fce8();
          puVar5[0x1e] = (ulong)puVar12;
          func_0x000100eea164();
          func_0x000107c5fca8(puVar11,puVar12);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x58)) {
            pcVar10 = FUN_103197450;
            goto LAB_107c615e0;
          }
        }
      }
      else {
        puVar5[0x1c] = *(ulong *)(puVar5[0x16] + 0x70);
        func_0x000107c61174(puVar5[0x14]);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x58)) {
          pcVar10 = FUN_1031970e0;
          goto LAB_107c615e0;
        }
      }
      func_0x000107c60e78();
      *(undefined8 **)((long)plVar1 + -0x80) = puVar11;
      *(ulong *)((long)plVar1 + -0x70) = (ulong)((long)plVar1 + -0x30) | 0x1000000000000000;
      *(code **)((long)plVar1 + -0x68) = FUN_1031970e0;
      *(ulong **)((long)plVar1 + -0x78) = puVar5;
      *(undefined8 *)((long)plVar1 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar15 = puVar5[0x14];
      puVar5[2] = (ulong)puVar5;
      puVar5[3] = (ulong)FUN_103197168;
      func_0x000107c61448(puVar5 + 2,0);
      func_0x0001031982f4();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(puVar5 + 2);
        return;
      }
      func_0x000107c60e78();
      *(ulong *)((long)plVar1 + -0xa0) = (ulong)((long)plVar1 + -0x70) | 0x1000000000000000;
      *(code **)((long)plVar1 + -0x98) = FUN_103197168;
      *(ulong **)((long)plVar1 + -0xa8) = puVar5;
      *(undefined8 *)((long)plVar1 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(ulong *)((long)plVar1 + -0xa8) = *puVar5;
      uVar20 = *puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0xb0)) {
        pcVar10 = (code *)0x1031971d4;
      }
      else {
        func_0x000107c60e78();
        *(ulong *)((long)plVar1 + -0xc0) = (ulong)((long)plVar1 + -0xa0) | 0x1000000000000000;
        *(undefined8 *)((long)plVar1 + -0xb8) = 0x1031971d4;
        *(ulong *)((long)plVar1 + -200) = uVar20;
        *(undefined8 *)((long)plVar1 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar1 + -0xd0)) {
          func_0x000107c60e78();
          *(undefined8 *)((long)plVar1 + -0x100) = 8;
          *(undefined **)((long)plVar1 + -0xf8) = puVar22;
          *(ulong *)((long)plVar1 + -0xf0) = uVar15;
          *(ulong *)((long)plVar1 + -0xe0) = (ulong)((long)plVar1 + -0xc0) | 0x1000000000000000;
          *(code **)((long)plVar1 + -0xd8) = FUN_103197234;
          *(ulong *)((long)plVar1 + -0xe8) = uVar20;
          *(undefined8 *)((long)plVar1 + -0x108) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          func_0x000107c61170(*(undefined8 *)(uVar20 + 0xa0));
          uVar13 = *(undefined8 *)(uVar20 + 0xc0);
          lVar2 = *(long *)(uVar20 + 200);
          uVar18 = *(undefined8 *)(uVar20 + 0xb8);
          FUN_103198594(*(undefined8 *)(uVar20 + 0xa8),uVar18,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lVar2 + 0x30))(uVar18,1,uVar13);
          if ((int)uVar18 == 1) {
            func_0x0001000293e4(*(undefined8 *)(uVar20 + 0xb8));
          }
          else {
            (**(code **)(*(long *)(uVar20 + 200) + 0x20))
                      (*(undefined8 *)(uVar20 + 0xd0),*(undefined8 *)(uVar20 + 0xb8),
                       *(undefined8 *)(uVar20 + 0xc0));
            puVar22 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x000107c61168();
            func_0x000107c415e0();
            func_0x000107c61180();
            puVar7 = puVar22;
            func_0x000107c5ed90();
            *(undefined8 *)(uVar20 + 0x98) = 0;
            puVar8 = puVar22;
            func_0x000107c4ff50();
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar22);
            uVar13 = *(undefined8 *)(uVar20 + 0x98);
            if ((int)puVar8 == 0) {
              uVar18 = uVar13;
              func_0x000107c61174(uVar13);
              func_0x000107c5ed30(uVar13);
              func_0x000107c61170(uVar18);
              func_0x000107c61654();
              func_0x000107c614ac(uVar13);
            }
            else {
              func_0x000107c61174(uVar13);
            }
            (**(code **)(*(long *)(uVar20 + 200) + 8))
                      (*(undefined8 *)(uVar20 + 0xd0),*(undefined8 *)(uVar20 + 0xc0));
          }
          lVar2 = *(long *)(uVar20 + 0xb0) + _DAT_113806f10;
          func_0x000107c61618();
          *(long *)(uVar20 + 0xe8) = lVar2;
          if (lVar2 == 0) {
            uVar13 = *(undefined8 *)(uVar20 + 0xd0);
            uVar18 = *(undefined8 *)(uVar20 + 0xb8);
            func_0x000107c615c0(*(undefined8 *)(uVar20 + 0xd8));
            func_0x000107c615c0(uVar13);
            func_0x000107c615c0(uVar18);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x108)) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(uVar20 + 8))();
              return;
            }
          }
          else {
            uVar18 = 0;
            func_0x000107c5fcec();
            uVar13 = uVar18;
            func_0x000107c5fce8();
            *(undefined8 *)(uVar20 + 0xf0) = uVar13;
            func_0x000100eea164();
            func_0x000107c5fca8(uVar18,uVar13);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x108)) {
              pcVar10 = FUN_103197450;
              goto LAB_107c615e0;
            }
          }
          func_0x000107c60e78();
          *(undefined8 *)((long)plVar1 + -0x130) = uVar18;
          *(ulong *)((long)plVar1 + -0x120) = (ulong)((long)plVar1 + -0xe0) | 0x1000000000000000;
          *(code **)((long)plVar1 + -0x118) = FUN_103197450;
          *(ulong *)((long)plVar1 + -0x128) = uVar20;
          *(undefined8 *)((long)plVar1 + -0x138) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar2 = *(long *)(uVar20 + 0xe8);
          func_0x000107c61574(*(undefined8 *)(uVar20 + 0xf0));
          lVar19 = _DAT_112f476d0;
          func_0x000107c61428(lVar2 + _DAT_112f476d0,uVar20 + 0x80,0,0);
          lVar2 = lVar2 + lVar19;
          func_0x000107c61618();
          if (lVar2 != 0) {
            func_0x000107c3e3e0();
            func_0x000107c615e8(lVar2);
          }
          func_0x000107c615e8(*(undefined8 *)(uVar20 + 0xe8));
          lVar2 = *(long *)(uVar20 + 0xd0);
          uVar13 = *(undefined8 *)(uVar20 + 0xb8);
          func_0x000107c615c0(*(undefined8 *)(uVar20 + 0xd8));
          func_0x000107c615c0(lVar2);
          func_0x000107c615c0(uVar13);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x138)) {
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(uVar20 + 8))();
            return;
          }
          func_0x000107c60e78();
          *(undefined1 **)((long)plVar1 + -0x150) = (undefined1 *)((long)plVar1 + -0x120);
          *(code **)((long)plVar1 + -0x148) = FUN_10319751c;
          func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x70));
          func_0x000107c61170(*(undefined8 *)(lVar2 + 0x78));
          FUN_103198414(lVar2 + _DAT_112f47d68,FUN_103197644);
          func_0x000107c6142c(*(undefined8 *)(lVar2 + _DAT_112f47d70 + 0x10));
          FUN_1031985fc(lVar2 + _DAT_113806f10);
          func_0x000107c61470(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar2);
          return;
        }
        pcVar10 = FUN_103197234;
      }
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar10);
  return;
}



/* Entry: 1031941e8; end: 103194393;  */

/* WARNING: Removing unreachable block (ram,0x000103194408) */
/* WARNING: Removing unreachable block (ram,0x000103194420) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031941e8(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  ulong *unaff_x22;
  ulong *puVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  code *pcVar28;
  ulong unaff_x29;
  code *pcStack_3d8;
  long lStack_3d0;
  long *plStack_3c8;
  ulong uStack_3c0;
  code *pcStack_3b8;
  long lStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  code *pcStack_388;
  long lStack_378;
  ulong uStack_370;
  ulong *puStack_368;
  ulong uStack_360;
  code *pcStack_358;
  long lStack_350;
  ulong *puStack_348;
  ulong uStack_340;
  code *pcStack_338;
  long lStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  code *pcStack_308;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  ulong *puStack_2d8;
  ulong uStack_2d0;
  code *pcStack_2c8;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  code *pcStack_298;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  long *plStack_268;
  ulong uStack_260;
  code *pcStack_258;
  long lStack_248;
  undefined8 *puStack_240;
  long lStack_238;
  ulong uStack_230;
  code *pcStack_228;
  long lStack_220;
  long *plStack_218;
  ulong uStack_210;
  code *pcStack_208;
  long lStack_1f8;
  long lStack_1f0;
  long *plStack_1e8;
  ulong uStack_1e0;
  code *pcStack_1d8;
  long lStack_1c8;
  ulong *puStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  ulong uStack_190;
  code *pcStack_188;
  long lStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  ulong uStack_160;
  code *pcStack_158;
  ulong uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_130;
  ulong uStack_e0;
  code *pcStack_d8;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_98;
  ulong uStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  ulong uStack_60;
  ulong uStack_50;
  code *pcStack_48;
  long lStack_38;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = unaff_x22[0x26];
  lVar2 = 0;
  FUN_103197644();
  pcVar28 = FUN_103197644;
  uVar14 = *(ulong *)(*(long *)(lVar2 + -8) + 0x40);
  unaff_x22[0x27] = uVar14;
  uVar3 = uVar14 + 0xf & 0xfffffffffffffff0;
  func_0x000107c615b8();
  uVar14 = _DAT_112f47d68;
  unaff_x22[0x28] = _DAT_112f47d68;
  func_0x000107c61428(uVar19 + uVar14,unaff_x22 + 2,0,0);
  FUN_103187e0c(uVar19 + uVar14,uVar3);
  uVar4 = 0;
  FUN_103197894();
  unaff_x22[0x29] = uVar4;
  uVar15 = *(ulong *)(uVar4 - 8);
  unaff_x22[0x2a] = uVar15;
  uVar19 = uVar3;
  (**(code **)(uVar15 + 0x30))(uVar3,1);
  uVar12 = (undefined1)uVar4;
  FUN_103198414(uVar3);
  func_0x000107c615c0(uVar3);
  if ((int)uVar19 == 1) {
    puVar5 = (ulong *)0x90;
    func_0x000107c615b8();
    unaff_x22[0x2b] = (ulong)puVar5;
    *puVar5 = (ulong)unaff_x22;
    puVar5[1] = (ulong)FUN_103194394;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) goto LAB_103194390;
FUN_1031956e4:
    pcVar28 = FUN_1031956f8;
    puVar13 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)0x0;
    goto LAB_107c615e0;
  }
  unaff_x22[0xf] = 0;
  unaff_x22[0xe] = 0xe;
  *(undefined1 *)(unaff_x22 + 0x10) = 4;
  puVar5 = (ulong *)0x2;
  pcVar28 = (code *)0x12;
  uVar12 = 0;
  func_0x000100029b9c();
  if ((int)puVar5 != 0) {
    FUN_103187f64();
    uVar12 = SUB81(puVar5,0);
    pcVar28 = (code *)&UNK_110618668;
    puVar5 = unaff_x22 + 0xe;
    func_0x000107c61658();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010319438c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])(0xe,0,4);
    return;
  }
LAB_103194390:
  func_0x000107c60e78();
  uStack_50 = (ulong)&uStack_10 | 0x1000000000000000;
  plVar1 = (long *)auStack_70;
  pcStack_48 = FUN_103194394;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *unaff_x22;
  puVar23 = (ulong *)*unaff_x22;
  *(ulong **)(uVar4 + 0x160) = puVar5;
  *(code **)(uVar4 + 0x168) = pcVar28;
  *(undefined1 *)(uVar4 + 0x81) = uVar12;
  uStack_60 = uVar3;
  func_0x000107c615c0(*(undefined8 *)(uVar4 + 0x158));
  puVar11 = *(undefined8 **)(uVar4 + 0x130);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    pcVar28 = FUN_1031952c0;
    puVar13 = (undefined8 *)0x0;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_80 = (ulong)&uStack_50 | 0x1000000000000000;
  pcStack_78 = FUN_103194444;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = uVar4;
  puStack_88 = puVar23;
  if ((puVar23[0x2c] & 1) == 0) {
    lVar2 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    puVar23[0x3f] = uVar4;
    lVar2 = 0;
    func_0x000107c5ede0();
    puVar11 = (undefined8 *)0x1;
    uVar12 = 1;
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar4,1,1,lVar2);
    puVar5 = (ulong *)0x100;
    func_0x000107c615b8();
    puVar23[0x40] = (ulong)puVar5;
    *puVar5 = (ulong)puVar23;
    puVar5[1] = (ulong)FUN_10319518c;
    puVar18 = (undefined8 *)puVar23[0x26];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) goto LAB_103194578;
    uVar16 = 0;
    uVar15 = uStack_80 & 0xefffffffffffffff;
    uVar3 = uStack_90;
    pcStack_3d8 = pcStack_78;
FUN_103196cf0:
    *(ulong *)((long)plVar1 + -0x10) = uVar15 | 0x1000000000000000;
    *(code **)((long)plVar1 + -8) = pcStack_3d8;
    *(ulong **)((long)plVar1 + -0x18) = puVar5;
    *(undefined8 *)((long)plVar1 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar5[0x15] = uVar4;
    puVar5[0x16] = (ulong)puVar18;
    puVar5[0x14] = uVar16;
    lVar2 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    puVar5[0x17] = uVar4;
    uVar4 = 0;
    func_0x000107c5ede0();
    puVar5[0x18] = uVar4;
    uVar4 = *(ulong *)(uVar4 - 8);
    puVar5[0x19] = uVar4;
    uVar4 = *(long *)(uVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    puVar5[0x1a] = uVar4;
    lVar2 = 0;
    FUN_103197644();
    uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    puVar5[0x1b] = uVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x20)) {
      pcVar28 = FUN_103196dcc;
      puVar13 = (undefined8 *)0x0;
      puVar11 = puVar18;
    }
    else {
      func_0x000107c60e78();
      *(ulong *)((long)plVar1 + -0x50) = uVar14;
      *(ulong *)((long)plVar1 + -0x48) = uVar19;
      *(ulong *)((long)plVar1 + -0x40) = uVar3;
      *(ulong *)((long)plVar1 + -0x30) = (ulong)((long)plVar1 + -0x10) | 0x1000000000000000;
      *(code **)((long)plVar1 + -0x28) = FUN_103196dcc;
      *(ulong **)((long)plVar1 + -0x38) = puVar5;
      *(undefined8 *)((long)plVar1 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar3 = puVar5[0x1b];
      uVar19 = puVar5[0x16];
      puVar22 = (undefined *)puVar5[0x14];
      lVar2 = 0;
      FUN_103197894();
      (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar3,1,1,lVar2);
      uVar14 = _DAT_112f47d68;
      func_0x000107c61428(uVar19 + _DAT_112f47d68,puVar5 + 10,0x21,0);
      func_0x000103187ec0(uVar3,uVar19 + uVar14);
      func_0x000107c614a8(puVar5 + 10);
      lVar2 = 8;
      func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
      *(undefined8 *)(lVar2 + 0x10) = 8;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined8 *)(lVar2 + 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x40) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      *(undefined8 *)(lVar2 + 0x50) = 0;
      puVar18 = (undefined8 *)(uVar19 + _DAT_112f47d70);
      func_0x000107c61428(puVar18,puVar5 + 0xd,1,0);
      uVar10 = puVar18[2];
      *puVar18 = 0;
      puVar18[1] = 0x3fd3333333333333;
      puVar18[2] = lVar2;
      func_0x000107c6142c(uVar10);
      if (puVar22 == (undefined *)0x0) {
        uVar14 = puVar5[0x18];
        puVar22 = (undefined *)puVar5[0x19];
        uVar19 = puVar5[0x17];
        FUN_103198594(puVar5[0x15],uVar19,0x112d36580,&UNK_10d9016d0);
        (**(code **)(puVar22 + 0x30))(uVar19,1,uVar14);
        if ((int)uVar19 == 1) {
          func_0x0001000293e4(puVar5[0x17]);
        }
        else {
          (**(code **)(puVar5[0x19] + 0x20))(puVar5[0x1a],puVar5[0x17],puVar5[0x18]);
          puVar22 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar8 = puVar22;
          func_0x000107c5ed90();
          puVar5[0x13] = 0;
          puVar9 = puVar22;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar22);
          puVar22 = (undefined *)puVar5[0x13];
          if ((int)puVar9 == 0) {
            puVar8 = puVar22;
            func_0x000107c61174(puVar22);
            func_0x000107c5ed30();
            func_0x000107c61170(puVar8);
            func_0x000107c61654();
            func_0x000107c614ac(puVar22);
          }
          else {
            func_0x000107c61174(puVar22);
            puVar22 = puVar9;
          }
          (**(code **)(puVar5[0x19] + 8))(puVar5[0x1a],puVar5[0x18]);
        }
        uVar14 = puVar5[0x16] + _DAT_113806f10;
        func_0x000107c61618();
        puVar5[0x1d] = uVar14;
        if (uVar14 == 0) {
          uVar14 = puVar5[0x1a];
          puVar18 = (undefined8 *)puVar5[0x17];
          func_0x000107c615c0(puVar5[0x1b]);
          func_0x000107c615c0(uVar14);
          func_0x000107c615c0(puVar18);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x58)) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)puVar5[1])();
            return;
          }
        }
        else {
          puVar18 = (undefined8 *)0x0;
          func_0x000107c5fcec();
          puVar13 = puVar18;
          func_0x000107c5fce8();
          puVar5[0x1e] = (ulong)puVar13;
          func_0x000100eea164();
          puVar11 = puVar18;
          func_0x000107c5fca8(puVar18,puVar13);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x58)) {
            pcVar28 = FUN_103197450;
            goto LAB_107c615e0;
          }
        }
      }
      else {
        puVar5[0x1c] = *(ulong *)(puVar5[0x16] + 0x70);
        func_0x000107c61174(puVar5[0x14]);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x58)) {
          pcVar28 = FUN_1031970e0;
          puVar11 = (undefined8 *)0x0;
          puVar13 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
      }
      func_0x000107c60e78();
      *(undefined8 **)((long)plVar1 + -0x80) = puVar18;
      *(ulong *)((long)plVar1 + -0x70) = (ulong)((long)plVar1 + -0x30) | 0x1000000000000000;
      *(code **)((long)plVar1 + -0x68) = FUN_1031970e0;
      *(ulong **)((long)plVar1 + -0x78) = puVar5;
      *(undefined8 *)((long)plVar1 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar14 = puVar5[0x14];
      puVar5[2] = (ulong)puVar5;
      puVar5[3] = (ulong)FUN_103197168;
      func_0x000107c61448(puVar5 + 2,0);
      func_0x0001031982f4();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(puVar5 + 2);
        return;
      }
      func_0x000107c60e78();
      *(ulong *)((long)plVar1 + -0xa0) = (ulong)((long)plVar1 + -0x70) | 0x1000000000000000;
      *(code **)((long)plVar1 + -0x98) = FUN_103197168;
      *(ulong **)((long)plVar1 + -0xa8) = puVar5;
      *(undefined8 *)((long)plVar1 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(ulong *)((long)plVar1 + -0xa8) = *puVar5;
      uVar19 = *puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0xb0)) {
        pcVar28 = (code *)0x1031971d4;
        puVar13 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c60e78();
        *(ulong *)((long)plVar1 + -0xc0) = (ulong)((long)plVar1 + -0xa0) | 0x1000000000000000;
        *(undefined8 *)((long)plVar1 + -0xb8) = 0x1031971d4;
        *(ulong *)((long)plVar1 + -200) = uVar19;
        *(undefined8 *)((long)plVar1 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar1 + -0xd0)) {
          func_0x000107c60e78();
          *(undefined8 *)((long)plVar1 + -0x100) = 8;
          *(undefined **)((long)plVar1 + -0xf8) = puVar22;
          *(ulong *)((long)plVar1 + -0xf0) = uVar14;
          *(ulong *)((long)plVar1 + -0xe0) = (ulong)((long)plVar1 + -0xc0) | 0x1000000000000000;
          *(code **)((long)plVar1 + -0xd8) = FUN_103197234;
          *(ulong *)((long)plVar1 + -0xe8) = uVar19;
          *(undefined8 *)((long)plVar1 + -0x108) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          func_0x000107c61170(*(undefined8 *)(uVar19 + 0xa0));
          uVar10 = *(undefined8 *)(uVar19 + 0xc0);
          lVar2 = *(long *)(uVar19 + 200);
          uVar17 = *(undefined8 *)(uVar19 + 0xb8);
          FUN_103198594(*(undefined8 *)(uVar19 + 0xa8),uVar17,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lVar2 + 0x30))(uVar17,1,uVar10);
          if ((int)uVar17 == 1) {
            func_0x0001000293e4(*(undefined8 *)(uVar19 + 0xb8));
          }
          else {
            (**(code **)(*(long *)(uVar19 + 200) + 0x20))
                      (*(undefined8 *)(uVar19 + 0xd0),*(undefined8 *)(uVar19 + 0xb8),
                       *(undefined8 *)(uVar19 + 0xc0));
            puVar22 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x000107c61168();
            func_0x000107c415e0();
            func_0x000107c61180();
            puVar8 = puVar22;
            func_0x000107c5ed90();
            *(undefined8 *)(uVar19 + 0x98) = 0;
            puVar9 = puVar22;
            func_0x000107c4ff50();
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar22);
            uVar10 = *(undefined8 *)(uVar19 + 0x98);
            if ((int)puVar9 == 0) {
              uVar17 = uVar10;
              func_0x000107c61174(uVar10);
              func_0x000107c5ed30(uVar10);
              func_0x000107c61170(uVar17);
              func_0x000107c61654();
              func_0x000107c614ac(uVar10);
            }
            else {
              func_0x000107c61174(uVar10);
            }
            (**(code **)(*(long *)(uVar19 + 200) + 8))
                      (*(undefined8 *)(uVar19 + 0xd0),*(undefined8 *)(uVar19 + 0xc0));
          }
          lVar2 = *(long *)(uVar19 + 0xb0) + _DAT_113806f10;
          func_0x000107c61618();
          *(long *)(uVar19 + 0xe8) = lVar2;
          if (lVar2 == 0) {
            uVar10 = *(undefined8 *)(uVar19 + 0xd0);
            puVar18 = *(undefined8 **)(uVar19 + 0xb8);
            func_0x000107c615c0(*(undefined8 *)(uVar19 + 0xd8));
            func_0x000107c615c0(uVar10);
            func_0x000107c615c0(puVar18);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x108)) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(uVar19 + 8))();
              return;
            }
          }
          else {
            puVar18 = (undefined8 *)0x0;
            func_0x000107c5fcec();
            puVar13 = puVar18;
            func_0x000107c5fce8();
            *(undefined8 **)(uVar19 + 0xf0) = puVar13;
            func_0x000100eea164();
            puVar11 = puVar18;
            func_0x000107c5fca8(puVar18,puVar13);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x108)) {
              pcVar28 = FUN_103197450;
              goto LAB_107c615e0;
            }
          }
          func_0x000107c60e78();
          *(undefined8 **)((long)plVar1 + -0x130) = puVar18;
          *(ulong *)((long)plVar1 + -0x120) = (ulong)((long)plVar1 + -0xe0) | 0x1000000000000000;
          *(code **)((long)plVar1 + -0x118) = FUN_103197450;
          *(ulong *)((long)plVar1 + -0x128) = uVar19;
          *(undefined8 *)((long)plVar1 + -0x138) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar2 = *(long *)(uVar19 + 0xe8);
          func_0x000107c61574(*(undefined8 *)(uVar19 + 0xf0));
          lVar27 = _DAT_112f476d0;
          func_0x000107c61428(lVar2 + _DAT_112f476d0,uVar19 + 0x80,0,0);
          lVar2 = lVar2 + lVar27;
          func_0x000107c61618();
          if (lVar2 != 0) {
            func_0x000107c3e3e0();
            func_0x000107c615e8(lVar2);
          }
          func_0x000107c615e8(*(undefined8 *)(uVar19 + 0xe8));
          lVar2 = *(long *)(uVar19 + 0xd0);
          uVar10 = *(undefined8 *)(uVar19 + 0xb8);
          func_0x000107c615c0(*(undefined8 *)(uVar19 + 0xd8));
          func_0x000107c615c0(lVar2);
          func_0x000107c615c0(uVar10);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x138)) {
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(uVar19 + 8))();
            return;
          }
          func_0x000107c60e78();
          *(undefined1 **)((long)plVar1 + -0x150) = (undefined1 *)((long)plVar1 + -0x120);
          *(code **)((long)plVar1 + -0x148) = FUN_10319751c;
          func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x70));
          func_0x000107c61170(*(undefined8 *)(lVar2 + 0x78));
          FUN_103198414(lVar2 + _DAT_112f47d68,FUN_103197644);
          func_0x000107c6142c(*(undefined8 *)(lVar2 + _DAT_112f47d70 + 0x10));
          FUN_1031985fc(lVar2 + _DAT_113806f10);
          func_0x000107c61470(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar2);
          return;
        }
        pcVar28 = FUN_103197234;
        puVar13 = (undefined8 *)0x0;
        puVar11 = *(undefined8 **)(uVar19 + 0xb0);
      }
    }
  }
  else {
    puVar18 = *(undefined8 **)(puVar23[0x26] + 0x70);
    puVar5 = (ulong *)0x110;
    func_0x000107c615b8();
    puVar23[0x2e] = (ulong)puVar5;
    *puVar5 = (ulong)puVar23;
    puVar5[1] = (ulong)FUN_10319457c;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      puVar5[0x1c] = (ulong)puVar18;
      pcVar28 = FUN_1031958c8;
      puVar13 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)0x0;
      goto LAB_107c615e0;
    }
LAB_103194578:
    func_0x000107c60e78();
    uStack_b0 = (ulong)&uStack_80 | 0x1000000000000000;
    plVar1 = (long *)auStack_d0;
    pcStack_a8 = FUN_10319457c;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar3 = *puVar23;
    plVar24 = (long *)*puVar23;
    *(ulong **)(uVar3 + 0x178) = puVar5;
    *(undefined8 **)(uVar3 + 0x180) = puVar11;
    *(undefined1 *)(uVar3 + 0x82) = uVar12;
    *(undefined8 **)(uVar3 + 0x188) = puVar18;
    uStack_c0 = uVar4;
    uStack_b8 = uVar3;
    func_0x000107c615c0(*(undefined8 *)(uVar3 + 0x170));
    if (puVar18 == (undefined8 *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) goto LAB_10319462c;
      pcVar28 = FUN_103194630;
    }
    else {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
LAB_10319462c:
        func_0x000107c60e78();
        uStack_e0 = (ulong)&uStack_b0 | 0x1000000000000000;
        pcStack_d8 = FUN_103194630;
        lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar6 = (undefined8 *)0x0;
        func_0x000107c5ede0();
        plVar24[0x32] = (long)puVar6;
        lVar27 = puVar6[-1];
        plVar24[0x33] = lVar27;
        uVar15 = *(long *)(lVar27 + 0x40) + 0xf;
        uVar7 = uVar15 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar24[0x34] = uVar7;
        FUN_103195d00(uVar7);
        puVar22 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar8 = puVar22;
        func_0x000107c5ed90();
        plVar24[0x23] = 0;
        puVar9 = puVar22;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar22);
        lVar2 = plVar24[0x23];
        if ((int)puVar9 == 0) {
          lVar20 = lVar2;
          func_0x000107c61174(lVar2);
          func_0x000107c5ed30(lVar2);
          func_0x000107c61170(lVar20);
          func_0x000107c61654();
          func_0x000107c614ac(lVar2);
          lVar20 = 0;
        }
        else {
          lVar20 = plVar24[0x31];
          func_0x000107c61174(lVar2);
        }
        uVar15 = uVar15 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        pcVar28 = *(code **)(lVar27 + 0x10);
        (*pcVar28)();
        if (lRam0000000112f47fe8 != -1) {
          func_0x000107c61568(0x112f47fe8,FUN_103193e4c);
        }
        uVar10 = uRam0000000112f47ff0;
        puVar23 = (ulong *)PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50;
        func_0x000107c610f8();
        func_0x000107c61434(uVar10);
        uVar16 = uVar15;
        func_0x0001010416fc(uVar15,uVar10);
        plVar24[0x35] = uVar16;
        plVar24[0x36] = lVar20;
        func_0x000107c615c0(uVar15);
        if (lVar20 == 0) {
          func_0x000107c61174();
          func_0x000107c53fcc();
          func_0x000107c5668c(uVar16);
          uVar4 = uVar16;
          func_0x000107c4ee28();
          func_0x000107c61170(uVar16);
          if ((uVar4 & 1) == 0) {
            lVar2 = 0x112d36580;
            func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
            uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            plVar24[0x3d] = uVar4;
            (*pcVar28)();
            (**(code **)(lVar27 + 0x38))(uVar4,0,1,puVar6);
            puVar5 = (ulong *)0x100;
            func_0x000107c615b8();
            plVar24[0x3e] = (long)puVar5;
            pcVar28 = FUN_103195010;
            goto LAB_103194af8;
          }
          if (lRam0000000112f47ff8 != -1) {
            func_0x000107c61568(0x112f47ff8,0x103193e34);
          }
          uVar4 = uVar16;
          func_0x000107c4fa98(uRam0000000112f48000);
          if ((int)uVar4 == 0) {
            lVar2 = 0x112d36580;
            func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
            uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            plVar24[0x3b] = uVar4;
            (*pcVar28)();
            (**(code **)(lVar27 + 0x38))(uVar4,0,1,puVar6);
            puVar5 = (ulong *)0x100;
            func_0x000107c615b8();
            plVar24[0x3c] = (long)puVar5;
            pcVar28 = FUN_103194e98;
            goto LAB_103194af8;
          }
          uStack_150 = plVar24[0x2f];
          uVar15 = plVar24[0x29];
          lStack_148 = plVar24[0x2a];
          lVar27 = plVar24[0x27];
          lStack_140 = plVar24[0x28];
          lVar2 = plVar24[0x26];
          lVar20 = 8;
          func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
          *(undefined8 *)(lVar20 + 0x10) = 8;
          *(undefined8 *)(lVar20 + 0x28) = 0;
          *(undefined8 *)(lVar20 + 0x20) = 0;
          *(undefined8 *)(lVar20 + 0x38) = 0;
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined8 *)(lVar20 + 0x48) = 0;
          *(undefined8 *)(lVar20 + 0x40) = 0;
          *(undefined8 *)(lVar20 + 0x58) = 0;
          *(undefined8 *)(lVar20 + 0x50) = 0;
          puVar11 = (undefined8 *)(lVar2 + _DAT_112f47d70);
          func_0x000107c61428(puVar11,plVar24 + 8,1,0);
          uVar10 = puVar11[2];
          *puVar11 = 0;
          puVar11[1] = 0x3fd3333333333333;
          puVar11[2] = lVar20;
          func_0x000107c6142c(uVar10);
          puVar23 = (ulong *)(lVar27 + 0xfU & 0xfffffffffffffff0);
          func_0x000107c615b8();
          (*pcVar28)((long)puVar23 + (long)*(int *)(uVar15 + 0x14),uVar7,puVar6);
          uVar4 = uStack_150;
          *puVar23 = uVar16;
          *(ulong *)((long)puVar23 + (long)*(int *)(uVar15 + 0x18)) = uStack_150;
          (**(code **)(lStack_148 + 0x38))(puVar23,0,1,uVar15);
          lVar27 = lStack_140;
          func_0x000107c61428(lVar2 + lStack_140,plVar24 + 0xb,0x21,0);
          func_0x000107c61174(uVar16);
          func_0x000107c61174(uVar4);
          func_0x000103187ec0(puVar23,lVar2 + lVar27);
          func_0x000107c614a8(plVar24 + 0xb);
          func_0x000107c615c0(puVar23);
          lVar2 = lVar2 + _DAT_113806f10;
          func_0x000107c61618();
          plVar24[0x39] = lVar2;
          if (lVar2 == 0) {
            puVar6 = (undefined8 *)plVar24[0x2f];
            func_0x000107c61170(uVar16);
            func_0x000107c61170(puVar6);
            lVar2 = plVar24[0x34];
            (**(code **)(plVar24[0x33] + 8))(lVar2,plVar24[0x32]);
            func_0x000107c615c0(lVar2);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
                    /* WARNING: Could not recover jumptable at 0x000103194bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)plVar24[1])();
              return;
            }
          }
          else {
            puVar6 = (undefined8 *)0x0;
            func_0x000107c5fcec();
            puVar13 = puVar6;
            func_0x000107c5fce8();
            plVar24[0x3a] = (long)puVar13;
            func_0x000100eea164();
            puVar11 = puVar6;
            func_0x000107c5fca8(puVar6,puVar13);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
              pcVar28 = FUN_103194d90;
              goto LAB_107c615e0;
            }
          }
        }
        else {
          lVar2 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar24[0x37] = uVar4;
          (*pcVar28)();
          (**(code **)(lVar27 + 0x38))(uVar4,0,1,puVar6);
          puVar5 = (ulong *)0x100;
          func_0x000107c615b8();
          plVar24[0x38] = (long)puVar5;
          pcVar28 = FUN_103194bec;
LAB_103194af8:
          *puVar5 = (ulong)plVar24;
          puVar5[1] = (ulong)pcVar28;
          uVar16 = plVar24[0x2f];
          puVar18 = (undefined8 *)plVar24[0x26];
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
            uVar15 = uStack_e0 & 0xefffffffffffffff;
            pcStack_3d8 = pcStack_d8;
            goto FUN_103196cf0;
          }
        }
        func_0x000107c60e78();
        uStack_160 = (ulong)&uStack_e0 | 0x1000000000000000;
        pcStack_158 = FUN_103194bec;
        lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_168 = *plVar24;
        uVar10 = *(undefined8 *)(lStack_168 + 0x1b8);
        puVar11 = *(undefined8 **)(lStack_168 + 0x130);
        plVar24 = (long *)*plVar24;
        puStack_170 = puVar6;
        func_0x000107c615c0(*(undefined8 *)(lStack_168 + 0x1c0));
        func_0x0001000293e4(uVar10);
        func_0x000107c615c0(uVar10);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
          pcVar28 = FUN_103194c7c;
          puVar13 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_190 = (ulong)&uStack_160 | 0x1000000000000000;
        pcStack_188 = FUN_103194c7c;
        lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_1c0 = puVar23;
        uStack_1b8 = uVar15;
        uStack_1b0 = uVar7;
        uStack_1a8 = uVar4;
        uStack_1a0 = uVar10;
        plStack_198 = plVar24;
        func_0x000107c614cc(plVar24[0x36],plVar24 + 0x24,plVar24 + 5);
        lVar2 = plVar24[6];
        lVar27 = plVar24[7];
        func_0x000107c60640();
        plVar24[0x1a] = lVar2;
        plVar24[0x1b] = lVar27;
        *(undefined1 *)(plVar24 + 0x1c) = 1;
        uVar10 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar10 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar24 + 0x1a,&UNK_110618668,uVar10);
        }
        lVar20 = plVar24[0x33];
        lVar21 = plVar24[0x34];
        lVar25 = plVar24[0x32];
        lVar26 = plVar24[0x2f];
        func_0x000107c614ac(plVar24[0x36]);
        func_0x000107c61170(lVar26);
        (**(code **)(lVar20 + 8))(lVar21,lVar25);
        func_0x000107c615c0(lVar21);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
                    /* WARNING: Could not recover jumptable at 0x000103194d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar24[1])(lVar2,lVar27,1);
          return;
        }
        func_0x000107c60e78();
        uStack_1e0 = (ulong)&uStack_190 | 0x1000000000000000;
        pcStack_1d8 = FUN_103194d90;
        lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar2 = plVar24[0x39];
        puVar18 = (undefined8 *)plVar24[0x26];
        lStack_1f0 = lVar27;
        plStack_1e8 = plVar24;
        func_0x000107c61574(plVar24[0x3a]);
        FUN_103184874();
        func_0x000107c615e8(lVar2);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
          pcVar28 = FUN_103194e10;
          puVar13 = (undefined8 *)0x0;
          puVar11 = puVar18;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_210 = (ulong)&uStack_1e0 | 0x1000000000000000;
        pcStack_208 = FUN_103194e10;
        lStack_220 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar2 = plVar24[0x2f];
        plStack_218 = plVar24;
        func_0x000107c61170(plVar24[0x35]);
        func_0x000107c61170(lVar2);
        lVar2 = plVar24[0x34];
        (**(code **)(plVar24[0x33] + 8))(lVar2,plVar24[0x32]);
        func_0x000107c615c0(lVar2);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_220) {
                    /* WARNING: Could not recover jumptable at 0x000103194e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar24[1])();
          return;
        }
        func_0x000107c60e78();
        uStack_230 = (ulong)&uStack_210 | 0x1000000000000000;
        pcStack_228 = FUN_103194e98;
        lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_238 = *plVar24;
        uVar10 = *(undefined8 *)(lStack_238 + 0x1d8);
        puVar11 = *(undefined8 **)(lStack_238 + 0x130);
        plVar24 = (long *)*plVar24;
        puStack_240 = puVar18;
        func_0x000107c615c0(*(undefined8 *)(lStack_238 + 0x1e0));
        func_0x0001000293e4(uVar10);
        func_0x000107c615c0(uVar10);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
          pcVar28 = FUN_103194f28;
          puVar13 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_260 = (ulong)&uStack_230 | 0x1000000000000000;
        pcStack_258 = FUN_103194f28;
        lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar24[0x21] = 0;
        plVar24[0x20] = 6;
        *(undefined1 *)(plVar24 + 0x22) = 4;
        uVar17 = 2;
        lStack_280 = lVar25;
        lStack_278 = lVar21;
        uStack_270 = uVar10;
        plStack_268 = plVar24;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar17 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar24 + 0x20,&UNK_110618668,uVar17);
        }
        lVar2 = plVar24[0x34];
        lVar27 = plVar24[0x32];
        lVar20 = plVar24[0x33];
        lVar21 = plVar24[0x2f];
        func_0x000107c61170(plVar24[0x35]);
        func_0x000107c61170(lVar21);
        (**(code **)(lVar20 + 8))(lVar2,lVar27);
        func_0x000107c615c0(lVar2);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
                    /* WARNING: Could not recover jumptable at 0x000103195008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar24[1])(6,0,4);
          return;
        }
        func_0x000107c60e78();
        uStack_2a0 = (ulong)&uStack_260 | 0x1000000000000000;
        pcStack_298 = FUN_103195010;
        lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_2a8 = *plVar24;
        uVar10 = *(undefined8 *)(lStack_2a8 + 0x1e8);
        puVar11 = *(undefined8 **)(lStack_2a8 + 0x130);
        puVar23 = (ulong *)*plVar24;
        lStack_2b0 = lVar27;
        func_0x000107c615c0(*(undefined8 *)(lStack_2a8 + 0x1f0));
        func_0x0001000293e4(uVar10);
        func_0x000107c615c0(uVar10);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
          pcVar28 = FUN_1031950a0;
          puVar13 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_2d0 = (ulong)&uStack_2a0 | 0x1000000000000000;
        pcStack_2c8 = FUN_1031950a0;
        lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar23[0x1e] = 0;
        puVar23[0x1d] = 5;
        *(undefined1 *)(puVar23 + 0x1f) = 4;
        uVar17 = 2;
        lStack_2f0 = lVar20;
        lStack_2e8 = lVar21;
        uStack_2e0 = uVar10;
        puStack_2d8 = puVar23;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar17 != 0) {
          FUN_103187f64();
          func_0x000107c61658(puVar23 + 0x1d,&UNK_110618668,uVar17);
        }
        uVar3 = puVar23[0x34];
        uVar4 = puVar23[0x32];
        uVar14 = puVar23[0x33];
        uVar19 = puVar23[0x2f];
        func_0x000107c61170(puVar23[0x35]);
        func_0x000107c61170(uVar19);
        (**(code **)(uVar14 + 8))(uVar3,uVar4);
        func_0x000107c615c0(uVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
                    /* WARNING: Could not recover jumptable at 0x000103195184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)puVar23[1])(5,0,4);
          return;
        }
        func_0x000107c60e78();
        uStack_310 = (ulong)&uStack_2d0 | 0x1000000000000000;
        pcStack_308 = FUN_10319518c;
        lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uStack_318 = *puVar23;
        uVar3 = *(ulong *)(uStack_318 + 0x1f8);
        puVar11 = *(undefined8 **)(uStack_318 + 0x130);
        puVar23 = (ulong *)*puVar23;
        uStack_320 = uVar4;
        func_0x000107c615c0(*(undefined8 *)(uStack_318 + 0x200));
        func_0x0001000293e4(uVar3);
        func_0x000107c615c0(uVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
          pcVar28 = FUN_10319521c;
          puVar13 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_340 = (ulong)&uStack_310 | 0x1000000000000000;
        plVar1 = &lStack_350;
        pcStack_338 = FUN_10319521c;
        lStack_350 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar23[0x14] = 0;
        puVar23[0x15] = 0;
        *(undefined1 *)(puVar23 + 0x16) = 4;
        uVar10 = 2;
        puStack_348 = puVar23;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar10 != 0) {
          FUN_103187f64();
          func_0x000107c61658(puVar23 + 0x14,&UNK_110618668,uVar10);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_350) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)puVar23[1])(0,0,4);
          return;
        }
        func_0x000107c60e78();
        uStack_360 = (ulong)&uStack_340 | 0x1000000000000000;
        pcStack_358 = FUN_1031952c0;
        lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar2 = 0x112d36580;
        uStack_370 = uVar3;
        puStack_368 = puVar23;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        puVar23[0x41] = uVar4;
        lVar2 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar4,1,1,lVar2);
        puVar5 = (ulong *)0x100;
        func_0x000107c615b8();
        puVar23[0x42] = (ulong)puVar5;
        *puVar5 = (ulong)puVar23;
        puVar5[1] = (ulong)FUN_103195398;
        puVar18 = (undefined8 *)puVar23[0x26];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
          uVar16 = 0;
          uVar15 = uStack_360 & 0xefffffffffffffff;
          uVar3 = uStack_370;
          pcStack_3d8 = pcStack_358;
        }
        else {
          func_0x000107c60e78();
          uStack_390 = (ulong)&uStack_360 | 0x1000000000000000;
          pcStack_388 = FUN_103195398;
          lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uStack_398 = *puVar23;
          uVar3 = *(ulong *)(uStack_398 + 0x208);
          puVar11 = *(undefined8 **)(uStack_398 + 0x130);
          plVar24 = (long *)*puVar23;
          uStack_3a0 = uVar4;
          func_0x000107c615c0(*(undefined8 *)(uStack_398 + 0x210));
          func_0x0001000293e4(uVar3);
          func_0x000107c615c0(uVar3);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
            pcVar28 = FUN_10319542c;
            puVar13 = (undefined8 *)0x0;
            goto LAB_107c615e0;
          }
          func_0x000107c60e78();
          uStack_3c0 = (ulong)&uStack_390 | 0x1000000000000000;
          plVar1 = &lStack_3d0;
          pcStack_3b8 = FUN_10319542c;
          lStack_3d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
          plVar24[0x12] = plVar24[0x2d];
          plVar24[0x11] = plVar24[0x2c];
          *(undefined1 *)(plVar24 + 0x13) = *(undefined1 *)((long)plVar24 + 0x81);
          uVar10 = 2;
          plStack_3c8 = plVar24;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar10 != 0) {
            FUN_103187f64();
            func_0x000107c61658(plVar24 + 0x11,&UNK_110618668,uVar10);
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d0) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)plVar24[1])();
            return;
          }
          func_0x000107c60e78(plVar24[0x2c],plVar24[0x2d],*(undefined1 *)((long)plVar24 + 0x81));
          pcStack_3d8 = FUN_1031954d0;
          lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar2 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar24[0x43] = uVar4;
          lVar2 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar4,1,1,lVar2);
          puVar5 = (ulong *)0x100;
          func_0x000107c615b8();
          plVar24[0x44] = (long)puVar5;
          *puVar5 = (ulong)plVar24;
          puVar5[1] = (ulong)FUN_1031955a8;
          puVar18 = (undefined8 *)plVar24[0x26];
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
            func_0x000107c60e78();
            lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar27 = *plVar24;
            uVar10 = *(undefined8 *)(lVar27 + 0x218);
            puVar11 = *(undefined8 **)(lVar27 + 0x130);
            lVar20 = *plVar24;
            func_0x000107c615c0(*(undefined8 *)(lVar27 + 0x220));
            func_0x0001000293e4(uVar10);
            func_0x000107c615c0(uVar10);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
              pcVar28 = FUN_10319563c;
              puVar13 = (undefined8 *)0x0;
              goto LAB_107c615e0;
            }
            func_0x000107c60e78();
            lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
            *(undefined8 *)(lVar20 + 0xc0) = *(undefined8 *)(lVar20 + 0x180);
            *(undefined8 *)(lVar20 + 0xb8) = *(undefined8 *)(lVar20 + 0x178);
            *(undefined1 *)(lVar20 + 200) = *(undefined1 *)(lVar20 + 0x82);
            uVar10 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar10 != 0) {
              FUN_103187f64();
              func_0x000107c61658((undefined8 *)(lVar20 + 0xb8),&UNK_110618668,uVar10);
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar20 + 8))();
              return;
            }
            func_0x000107c60e78(*(undefined8 *)(lVar20 + 0x178),*(undefined8 *)(lVar20 + 0x180),
                                *(undefined1 *)(lVar20 + 0x82));
            goto FUN_1031956e4;
          }
          uVar16 = 0;
          uVar15 = (ulong)&uStack_3c0 & 0xefffffffffffffff;
        }
        goto FUN_103196cf0;
      }
      pcVar28 = FUN_1031954d0;
    }
    puVar13 = (undefined8 *)0x0;
    puVar11 = *(undefined8 **)(uVar3 + 0x130);
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar28,puVar11,puVar13);
  return;
}



/* Entry: 103194394; end: 103194443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103194394(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 *puVar14;
  long lVar15;
  ulong unaff_x21;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  ulong *unaff_x22;
  ulong *puVar19;
  long *plVar20;
  ulong unaff_x23;
  long lVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  ulong unaff_x29;
  code *pcStack_398;
  long lStack_390;
  long *plStack_388;
  ulong uStack_380;
  code *pcStack_378;
  long lStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  code *pcStack_348;
  long lStack_338;
  ulong uStack_330;
  ulong *puStack_328;
  ulong uStack_320;
  code *pcStack_318;
  long lStack_310;
  ulong *puStack_308;
  ulong uStack_300;
  code *pcStack_2f8;
  long lStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  code *pcStack_2c8;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  ulong *puStack_298;
  ulong uStack_290;
  code *pcStack_288;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  ulong uStack_260;
  code *pcStack_258;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  ulong uStack_220;
  code *pcStack_218;
  long lStack_208;
  undefined8 *puStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  code *pcStack_1e8;
  long lStack_1e0;
  long *plStack_1d8;
  ulong uStack_1d0;
  code *pcStack_1c8;
  long lStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  code *pcStack_198;
  long lStack_188;
  ulong *puStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  ulong uStack_150;
  code *pcStack_148;
  long lStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  ulong uStack_120;
  code *pcStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  ulong uStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  code *pcStack_68;
  long lStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  ulong uStack_40;
  code *pcStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  plVar1 = (long *)auStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *unaff_x22;
  puVar19 = (ulong *)*unaff_x22;
  *(undefined8 *)(uVar11 + 0x160) = param_1;
  *(undefined8 *)(uVar11 + 0x168) = param_2;
  *(undefined1 *)(uVar11 + 0x81) = param_3;
  func_0x000107c615c0(*(undefined8 *)(uVar11 + 0x158));
  puVar8 = *(undefined8 **)(uVar11 + 0x130);
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) goto LAB_103194440;
    pcVar24 = FUN_103194444;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
LAB_103194440:
      func_0x000107c60e78();
      uStack_40 = (ulong)&uStack_10 | 0x1000000000000000;
      pcStack_38 = FUN_103194444;
      lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_50 = uVar11;
      puStack_48 = puVar19;
      if ((puVar19[0x2c] & 1) == 0) {
        lVar15 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar11 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        puVar19[0x3f] = uVar11;
        lVar15 = 0;
        func_0x000107c5ede0();
        puVar8 = (undefined8 *)0x1;
        param_3 = 1;
        (**(code **)(*(long *)(lVar15 + -8) + 0x38))(uVar11,1,1,lVar15);
        puVar2 = (ulong *)0x100;
        func_0x000107c615b8();
        puVar19[0x40] = (ulong)puVar2;
        *puVar2 = (ulong)puVar19;
        puVar2[1] = (ulong)FUN_10319518c;
        puVar14 = (undefined8 *)puVar19[0x26];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) goto LAB_103194578;
        uVar10 = 0;
        uVar6 = uStack_40 & 0xefffffffffffffff;
        uVar12 = uStack_50;
        pcStack_398 = pcStack_38;
FUN_103196cf0:
        *(ulong *)((long)plVar1 + -0x10) = uVar6 | 0x1000000000000000;
        *(code **)((long)plVar1 + -8) = pcStack_398;
        *(ulong **)((long)plVar1 + -0x18) = puVar2;
        *(undefined8 *)((long)plVar1 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        puVar2[0x15] = uVar11;
        puVar2[0x16] = (ulong)puVar14;
        puVar2[0x14] = uVar10;
        lVar15 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar11 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        puVar2[0x17] = uVar11;
        uVar11 = 0;
        func_0x000107c5ede0();
        puVar2[0x18] = uVar11;
        uVar11 = *(ulong *)(uVar11 - 8);
        puVar2[0x19] = uVar11;
        uVar11 = *(long *)(uVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        puVar2[0x1a] = uVar11;
        lVar15 = 0;
        FUN_103197644();
        uVar11 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        puVar2[0x1b] = uVar11;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x20)) {
          pcVar24 = FUN_103196dcc;
          puVar9 = (undefined8 *)0x0;
        }
        else {
          func_0x000107c60e78();
          *(ulong *)((long)plVar1 + -0x50) = unaff_x23;
          *(ulong *)((long)plVar1 + -0x48) = unaff_x21;
          *(ulong *)((long)plVar1 + -0x40) = uVar12;
          *(ulong *)((long)plVar1 + -0x30) = (ulong)((long)plVar1 + -0x10) | 0x1000000000000000;
          *(code **)((long)plVar1 + -0x28) = FUN_103196dcc;
          *(ulong **)((long)plVar1 + -0x38) = puVar2;
          *(undefined8 *)((long)plVar1 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar12 = puVar2[0x1b];
          uVar11 = puVar2[0x16];
          puVar18 = (undefined *)puVar2[0x14];
          lVar15 = 0;
          FUN_103197894();
          (**(code **)(*(long *)(lVar15 + -8) + 0x38))(uVar12,1,1,lVar15);
          lVar15 = _DAT_112f47d68;
          func_0x000107c61428(uVar11 + _DAT_112f47d68,puVar2 + 10,0x21,0);
          func_0x000103187ec0(uVar12,uVar11 + lVar15);
          func_0x000107c614a8(puVar2 + 10);
          lVar15 = 8;
          func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
          *(undefined8 *)(lVar15 + 0x10) = 8;
          *(undefined8 *)(lVar15 + 0x28) = 0;
          *(undefined8 *)(lVar15 + 0x20) = 0;
          *(undefined8 *)(lVar15 + 0x38) = 0;
          *(undefined8 *)(lVar15 + 0x30) = 0;
          *(undefined8 *)(lVar15 + 0x48) = 0;
          *(undefined8 *)(lVar15 + 0x40) = 0;
          *(undefined8 *)(lVar15 + 0x58) = 0;
          *(undefined8 *)(lVar15 + 0x50) = 0;
          puVar8 = (undefined8 *)(uVar11 + _DAT_112f47d70);
          func_0x000107c61428(puVar8,puVar2 + 0xd,1,0);
          uVar7 = puVar8[2];
          *puVar8 = 0;
          puVar8[1] = 0x3fd3333333333333;
          puVar8[2] = lVar15;
          func_0x000107c6142c(uVar7);
          if (puVar18 == (undefined *)0x0) {
            uVar11 = puVar2[0x18];
            puVar18 = (undefined *)puVar2[0x19];
            uVar12 = puVar2[0x17];
            FUN_103198594(puVar2[0x15],uVar12,0x112d36580,&UNK_10d9016d0);
            (**(code **)(puVar18 + 0x30))(uVar12,1,uVar11);
            if ((int)uVar12 == 1) {
              func_0x0001000293e4(puVar2[0x17]);
            }
            else {
              (**(code **)(puVar2[0x19] + 0x20))(puVar2[0x1a],puVar2[0x17],puVar2[0x18]);
              puVar18 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
              func_0x000107c61168();
              func_0x000107c415e0();
              func_0x000107c61180();
              puVar4 = puVar18;
              func_0x000107c5ed90();
              puVar2[0x13] = 0;
              puVar5 = puVar18;
              func_0x000107c4ff50();
              func_0x000107c61170(puVar4);
              func_0x000107c61170(puVar18);
              puVar18 = (undefined *)puVar2[0x13];
              if ((int)puVar5 == 0) {
                puVar4 = puVar18;
                func_0x000107c61174(puVar18);
                func_0x000107c5ed30();
                func_0x000107c61170(puVar4);
                func_0x000107c61654();
                func_0x000107c614ac(puVar18);
              }
              else {
                func_0x000107c61174(puVar18);
                puVar18 = puVar5;
              }
              (**(code **)(puVar2[0x19] + 8))(puVar2[0x1a],puVar2[0x18]);
            }
            uVar11 = puVar2[0x16] + _DAT_113806f10;
            func_0x000107c61618();
            puVar2[0x1d] = uVar11;
            if (uVar11 == 0) {
              uVar11 = puVar2[0x1a];
              puVar8 = (undefined8 *)puVar2[0x17];
              func_0x000107c615c0(puVar2[0x1b]);
              func_0x000107c615c0(uVar11);
              func_0x000107c615c0(puVar8);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x58)) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)puVar2[1])();
                return;
              }
            }
            else {
              puVar8 = (undefined8 *)0x0;
              func_0x000107c5fcec();
              puVar9 = puVar8;
              func_0x000107c5fce8();
              puVar2[0x1e] = (ulong)puVar9;
              func_0x000100eea164();
              puVar14 = puVar8;
              func_0x000107c5fca8(puVar8,puVar9);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x58)) {
                pcVar24 = FUN_103197450;
                goto LAB_107c615e0;
              }
            }
          }
          else {
            puVar2[0x1c] = *(ulong *)(puVar2[0x16] + 0x70);
            func_0x000107c61174(puVar2[0x14]);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x58)) {
              pcVar24 = FUN_1031970e0;
              puVar14 = (undefined8 *)0x0;
              puVar9 = (undefined8 *)0x0;
              goto LAB_107c615e0;
            }
          }
          func_0x000107c60e78();
          *(undefined8 **)((long)plVar1 + -0x80) = puVar8;
          *(ulong *)((long)plVar1 + -0x70) = (ulong)((long)plVar1 + -0x30) | 0x1000000000000000;
          *(code **)((long)plVar1 + -0x68) = FUN_1031970e0;
          *(ulong **)((long)plVar1 + -0x78) = puVar2;
          *(undefined8 *)((long)plVar1 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar11 = puVar2[0x14];
          puVar2[2] = (ulong)puVar2;
          puVar2[3] = (ulong)FUN_103197168;
          func_0x000107c61448(puVar2 + 2,0);
          func_0x0001031982f4();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_continuation_await_110350070)(puVar2 + 2);
            return;
          }
          func_0x000107c60e78();
          *(ulong *)((long)plVar1 + -0xa0) = (ulong)((long)plVar1 + -0x70) | 0x1000000000000000;
          *(code **)((long)plVar1 + -0x98) = FUN_103197168;
          *(ulong **)((long)plVar1 + -0xa8) = puVar2;
          *(undefined8 *)((long)plVar1 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          *(ulong *)((long)plVar1 + -0xa8) = *puVar2;
          uVar12 = *puVar2;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0xb0)) {
            pcVar24 = (code *)0x1031971d4;
            puVar9 = (undefined8 *)0x0;
            puVar14 = (undefined8 *)0x0;
          }
          else {
            func_0x000107c60e78();
            *(ulong *)((long)plVar1 + -0xc0) = (ulong)((long)plVar1 + -0xa0) | 0x1000000000000000;
            *(undefined8 *)((long)plVar1 + -0xb8) = 0x1031971d4;
            *(ulong *)((long)plVar1 + -200) = uVar12;
            *(undefined8 *)((long)plVar1 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar1 + -0xd0)) {
              func_0x000107c60e78();
              *(undefined8 *)((long)plVar1 + -0x100) = 8;
              *(undefined **)((long)plVar1 + -0xf8) = puVar18;
              *(ulong *)((long)plVar1 + -0xf0) = uVar11;
              *(ulong *)((long)plVar1 + -0xe0) = (ulong)((long)plVar1 + -0xc0) | 0x1000000000000000;
              *(code **)((long)plVar1 + -0xd8) = FUN_103197234;
              *(ulong *)((long)plVar1 + -0xe8) = uVar12;
              *(undefined8 *)((long)plVar1 + -0x108) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              func_0x000107c61170(*(undefined8 *)(uVar12 + 0xa0));
              uVar7 = *(undefined8 *)(uVar12 + 0xc0);
              lVar15 = *(long *)(uVar12 + 200);
              uVar13 = *(undefined8 *)(uVar12 + 0xb8);
              FUN_103198594(*(undefined8 *)(uVar12 + 0xa8),uVar13,0x112d36580,&UNK_10d9016d0);
              (**(code **)(lVar15 + 0x30))(uVar13,1,uVar7);
              if ((int)uVar13 == 1) {
                func_0x0001000293e4(*(undefined8 *)(uVar12 + 0xb8));
              }
              else {
                (**(code **)(*(long *)(uVar12 + 200) + 0x20))
                          (*(undefined8 *)(uVar12 + 0xd0),*(undefined8 *)(uVar12 + 0xb8),
                           *(undefined8 *)(uVar12 + 0xc0));
                puVar18 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
                func_0x000107c61168();
                func_0x000107c415e0();
                func_0x000107c61180();
                puVar4 = puVar18;
                func_0x000107c5ed90();
                *(undefined8 *)(uVar12 + 0x98) = 0;
                puVar5 = puVar18;
                func_0x000107c4ff50();
                func_0x000107c61170(puVar4);
                func_0x000107c61170(puVar18);
                uVar7 = *(undefined8 *)(uVar12 + 0x98);
                if ((int)puVar5 == 0) {
                  uVar13 = uVar7;
                  func_0x000107c61174(uVar7);
                  func_0x000107c5ed30(uVar7);
                  func_0x000107c61170(uVar13);
                  func_0x000107c61654();
                  func_0x000107c614ac(uVar7);
                }
                else {
                  func_0x000107c61174(uVar7);
                }
                (**(code **)(*(long *)(uVar12 + 200) + 8))
                          (*(undefined8 *)(uVar12 + 0xd0),*(undefined8 *)(uVar12 + 0xc0));
              }
              lVar15 = *(long *)(uVar12 + 0xb0) + _DAT_113806f10;
              func_0x000107c61618();
              *(long *)(uVar12 + 0xe8) = lVar15;
              if (lVar15 == 0) {
                uVar7 = *(undefined8 *)(uVar12 + 0xd0);
                puVar8 = *(undefined8 **)(uVar12 + 0xb8);
                func_0x000107c615c0(*(undefined8 *)(uVar12 + 0xd8));
                func_0x000107c615c0(uVar7);
                func_0x000107c615c0(puVar8);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x108)) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(uVar12 + 8))();
                  return;
                }
              }
              else {
                puVar8 = (undefined8 *)0x0;
                func_0x000107c5fcec();
                puVar9 = puVar8;
                func_0x000107c5fce8();
                *(undefined8 **)(uVar12 + 0xf0) = puVar9;
                func_0x000100eea164();
                puVar14 = puVar8;
                func_0x000107c5fca8(puVar8,puVar9);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x108)) {
                  pcVar24 = FUN_103197450;
                  goto LAB_107c615e0;
                }
              }
              func_0x000107c60e78();
              *(undefined8 **)((long)plVar1 + -0x130) = puVar8;
              *(ulong *)((long)plVar1 + -0x120) = (ulong)((long)plVar1 + -0xe0) | 0x1000000000000000
              ;
              *(code **)((long)plVar1 + -0x118) = FUN_103197450;
              *(ulong *)((long)plVar1 + -0x128) = uVar12;
              *(undefined8 *)((long)plVar1 + -0x138) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              lVar15 = *(long *)(uVar12 + 0xe8);
              func_0x000107c61574(*(undefined8 *)(uVar12 + 0xf0));
              lVar23 = _DAT_112f476d0;
              func_0x000107c61428(lVar15 + _DAT_112f476d0,uVar12 + 0x80,0,0);
              lVar15 = lVar15 + lVar23;
              func_0x000107c61618();
              if (lVar15 != 0) {
                func_0x000107c3e3e0();
                func_0x000107c615e8(lVar15);
              }
              func_0x000107c615e8(*(undefined8 *)(uVar12 + 0xe8));
              lVar15 = *(long *)(uVar12 + 0xd0);
              uVar7 = *(undefined8 *)(uVar12 + 0xb8);
              func_0x000107c615c0(*(undefined8 *)(uVar12 + 0xd8));
              func_0x000107c615c0(lVar15);
              func_0x000107c615c0(uVar7);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar1 + -0x138)) {
                func_0x000107c60e78();
                *(undefined1 **)((long)plVar1 + -0x150) = (undefined1 *)((long)plVar1 + -0x120);
                *(code **)((long)plVar1 + -0x148) = FUN_10319751c;
                func_0x000107c615e8(*(undefined8 *)(lVar15 + 0x70));
                func_0x000107c61170(*(undefined8 *)(lVar15 + 0x78));
                FUN_103198414(lVar15 + _DAT_112f47d68,FUN_103197644);
                func_0x000107c6142c(*(undefined8 *)(lVar15 + _DAT_112f47d70 + 0x10));
                FUN_1031985fc(lVar15 + _DAT_113806f10);
                func_0x000107c61470(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar15);
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(uVar12 + 8))();
              return;
            }
            pcVar24 = FUN_103197234;
            puVar9 = (undefined8 *)0x0;
            puVar14 = *(undefined8 **)(uVar12 + 0xb0);
          }
        }
      }
      else {
        puVar14 = *(undefined8 **)(puVar19[0x26] + 0x70);
        puVar2 = (ulong *)0x110;
        func_0x000107c615b8();
        puVar19[0x2e] = (ulong)puVar2;
        *puVar2 = (ulong)puVar19;
        puVar2[1] = (ulong)FUN_10319457c;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          puVar2[0x1c] = (ulong)puVar14;
          pcVar24 = FUN_1031958c8;
          puVar9 = (undefined8 *)0x0;
          puVar14 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
LAB_103194578:
        func_0x000107c60e78();
        uStack_70 = (ulong)&uStack_40 | 0x1000000000000000;
        plVar1 = (long *)auStack_90;
        pcStack_68 = FUN_10319457c;
        lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar12 = *puVar19;
        plVar20 = (long *)*puVar19;
        *(ulong **)(uVar12 + 0x178) = puVar2;
        *(undefined8 **)(uVar12 + 0x180) = puVar8;
        *(undefined1 *)(uVar12 + 0x82) = param_3;
        *(undefined8 **)(uVar12 + 0x188) = puVar14;
        uStack_80 = uVar11;
        uStack_78 = uVar12;
        func_0x000107c615c0(*(undefined8 *)(uVar12 + 0x170));
        if (puVar14 == (undefined8 *)0x0) {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) goto LAB_10319462c;
          pcVar24 = FUN_103194630;
        }
        else {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
LAB_10319462c:
            func_0x000107c60e78();
            uStack_a0 = (ulong)&uStack_70 | 0x1000000000000000;
            pcStack_98 = FUN_103194630;
            lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar8 = (undefined8 *)0x0;
            func_0x000107c5ede0();
            plVar20[0x32] = (long)puVar8;
            lVar23 = puVar8[-1];
            plVar20[0x33] = lVar23;
            uVar6 = *(long *)(lVar23 + 0x40) + 0xf;
            uVar3 = uVar6 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            plVar20[0x34] = uVar3;
            FUN_103195d00(uVar3);
            puVar18 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x000107c61168();
            func_0x000107c415e0();
            func_0x000107c61180();
            puVar4 = puVar18;
            func_0x000107c5ed90();
            plVar20[0x23] = 0;
            puVar5 = puVar18;
            func_0x000107c4ff50();
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar18);
            lVar15 = plVar20[0x23];
            if ((int)puVar5 == 0) {
              lVar16 = lVar15;
              func_0x000107c61174(lVar15);
              func_0x000107c5ed30(lVar15);
              func_0x000107c61170(lVar16);
              func_0x000107c61654();
              func_0x000107c614ac(lVar15);
              lVar16 = 0;
            }
            else {
              lVar16 = plVar20[0x31];
              func_0x000107c61174(lVar15);
            }
            uVar6 = uVar6 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            pcVar24 = *(code **)(lVar23 + 0x10);
            (*pcVar24)();
            if (lRam0000000112f47fe8 != -1) {
              func_0x000107c61568(0x112f47fe8,FUN_103193e4c);
            }
            uVar7 = uRam0000000112f47ff0;
            puVar19 = (ulong *)PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50;
            func_0x000107c610f8();
            func_0x000107c61434(uVar7);
            uVar10 = uVar6;
            func_0x0001010416fc(uVar6,uVar7);
            plVar20[0x35] = uVar10;
            plVar20[0x36] = lVar16;
            func_0x000107c615c0(uVar6);
            if (lVar16 == 0) {
              func_0x000107c61174();
              func_0x000107c53fcc();
              func_0x000107c5668c(uVar10);
              uVar11 = uVar10;
              func_0x000107c4ee28();
              func_0x000107c61170(uVar10);
              if ((uVar11 & 1) == 0) {
                lVar15 = 0x112d36580;
                func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
                uVar11 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
                func_0x000107c615b8();
                plVar20[0x3d] = uVar11;
                (*pcVar24)();
                (**(code **)(lVar23 + 0x38))(uVar11,0,1,puVar8);
                puVar2 = (ulong *)0x100;
                func_0x000107c615b8();
                plVar20[0x3e] = (long)puVar2;
                pcVar24 = FUN_103195010;
                goto LAB_103194af8;
              }
              if (lRam0000000112f47ff8 != -1) {
                func_0x000107c61568(0x112f47ff8,0x103193e34);
              }
              uVar11 = uVar10;
              func_0x000107c4fa98(uRam0000000112f48000);
              if ((int)uVar11 == 0) {
                lVar15 = 0x112d36580;
                func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
                uVar11 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
                func_0x000107c615b8();
                plVar20[0x3b] = uVar11;
                (*pcVar24)();
                (**(code **)(lVar23 + 0x38))(uVar11,0,1,puVar8);
                puVar2 = (ulong *)0x100;
                func_0x000107c615b8();
                plVar20[0x3c] = (long)puVar2;
                pcVar24 = FUN_103194e98;
                goto LAB_103194af8;
              }
              uStack_110 = plVar20[0x2f];
              uVar6 = plVar20[0x29];
              lStack_108 = plVar20[0x2a];
              lVar23 = plVar20[0x27];
              lStack_100 = plVar20[0x28];
              lVar15 = plVar20[0x26];
              lVar16 = 8;
              func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
              *(undefined8 *)(lVar16 + 0x10) = 8;
              *(undefined8 *)(lVar16 + 0x28) = 0;
              *(undefined8 *)(lVar16 + 0x20) = 0;
              *(undefined8 *)(lVar16 + 0x38) = 0;
              *(undefined8 *)(lVar16 + 0x30) = 0;
              *(undefined8 *)(lVar16 + 0x48) = 0;
              *(undefined8 *)(lVar16 + 0x40) = 0;
              *(undefined8 *)(lVar16 + 0x58) = 0;
              *(undefined8 *)(lVar16 + 0x50) = 0;
              puVar14 = (undefined8 *)(lVar15 + _DAT_112f47d70);
              func_0x000107c61428(puVar14,plVar20 + 8,1,0);
              uVar7 = puVar14[2];
              *puVar14 = 0;
              puVar14[1] = 0x3fd3333333333333;
              puVar14[2] = lVar16;
              func_0x000107c6142c(uVar7);
              puVar19 = (ulong *)(lVar23 + 0xfU & 0xfffffffffffffff0);
              func_0x000107c615b8();
              (*pcVar24)((long)puVar19 + (long)*(int *)(uVar6 + 0x14),uVar3,puVar8);
              uVar11 = uStack_110;
              *puVar19 = uVar10;
              *(ulong *)((long)puVar19 + (long)*(int *)(uVar6 + 0x18)) = uStack_110;
              (**(code **)(lStack_108 + 0x38))(puVar19,0,1,uVar6);
              lVar23 = lStack_100;
              func_0x000107c61428(lVar15 + lStack_100,plVar20 + 0xb,0x21,0);
              func_0x000107c61174(uVar10);
              func_0x000107c61174(uVar11);
              func_0x000103187ec0(puVar19,lVar15 + lVar23);
              func_0x000107c614a8(plVar20 + 0xb);
              func_0x000107c615c0(puVar19);
              lVar15 = lVar15 + _DAT_113806f10;
              func_0x000107c61618();
              plVar20[0x39] = lVar15;
              if (lVar15 == 0) {
                puVar8 = (undefined8 *)plVar20[0x2f];
                func_0x000107c61170(uVar10);
                func_0x000107c61170(puVar8);
                lVar15 = plVar20[0x34];
                (**(code **)(plVar20[0x33] + 8))(lVar15,plVar20[0x32]);
                func_0x000107c615c0(lVar15);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
                    /* WARNING: Could not recover jumptable at 0x000103194bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)plVar20[1])();
                  return;
                }
              }
              else {
                puVar8 = (undefined8 *)0x0;
                func_0x000107c5fcec();
                puVar9 = puVar8;
                func_0x000107c5fce8();
                plVar20[0x3a] = (long)puVar9;
                func_0x000100eea164();
                puVar14 = puVar8;
                func_0x000107c5fca8(puVar8,puVar9);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
                  pcVar24 = FUN_103194d90;
                  goto LAB_107c615e0;
                }
              }
            }
            else {
              lVar15 = 0x112d36580;
              func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
              uVar11 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
              func_0x000107c615b8();
              plVar20[0x37] = uVar11;
              (*pcVar24)();
              (**(code **)(lVar23 + 0x38))(uVar11,0,1,puVar8);
              puVar2 = (ulong *)0x100;
              func_0x000107c615b8();
              plVar20[0x38] = (long)puVar2;
              pcVar24 = FUN_103194bec;
LAB_103194af8:
              *puVar2 = (ulong)plVar20;
              puVar2[1] = (ulong)pcVar24;
              uVar10 = plVar20[0x2f];
              puVar14 = (undefined8 *)plVar20[0x26];
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
                uVar6 = uStack_a0 & 0xefffffffffffffff;
                pcStack_398 = pcStack_98;
                goto FUN_103196cf0;
              }
            }
            func_0x000107c60e78();
            uStack_120 = (ulong)&uStack_a0 | 0x1000000000000000;
            pcStack_118 = FUN_103194bec;
            lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lStack_128 = *plVar20;
            uVar7 = *(undefined8 *)(lStack_128 + 0x1b8);
            puVar14 = *(undefined8 **)(lStack_128 + 0x130);
            plVar20 = (long *)*plVar20;
            puStack_130 = puVar8;
            func_0x000107c615c0(*(undefined8 *)(lStack_128 + 0x1c0));
            func_0x0001000293e4(uVar7);
            func_0x000107c615c0(uVar7);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
              pcVar24 = FUN_103194c7c;
              puVar9 = (undefined8 *)0x0;
              goto LAB_107c615e0;
            }
            func_0x000107c60e78();
            uStack_150 = (ulong)&uStack_120 | 0x1000000000000000;
            pcStack_148 = FUN_103194c7c;
            lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puStack_180 = puVar19;
            uStack_178 = uVar6;
            uStack_170 = uVar3;
            uStack_168 = uVar11;
            uStack_160 = uVar7;
            plStack_158 = plVar20;
            func_0x000107c614cc(plVar20[0x36],plVar20 + 0x24,plVar20 + 5);
            lVar15 = plVar20[6];
            lVar23 = plVar20[7];
            func_0x000107c60640();
            plVar20[0x1a] = lVar15;
            plVar20[0x1b] = lVar23;
            *(undefined1 *)(plVar20 + 0x1c) = 1;
            uVar7 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar7 != 0) {
              FUN_103187f64();
              func_0x000107c61658(plVar20 + 0x1a,&UNK_110618668,uVar7);
            }
            lVar16 = plVar20[0x33];
            lVar17 = plVar20[0x34];
            lVar21 = plVar20[0x32];
            lVar22 = plVar20[0x2f];
            func_0x000107c614ac(plVar20[0x36]);
            func_0x000107c61170(lVar22);
            (**(code **)(lVar16 + 8))(lVar17,lVar21);
            func_0x000107c615c0(lVar17);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
                    /* WARNING: Could not recover jumptable at 0x000103194d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)plVar20[1])(lVar15,lVar23,1);
              return;
            }
            func_0x000107c60e78();
            uStack_1a0 = (ulong)&uStack_150 | 0x1000000000000000;
            pcStack_198 = FUN_103194d90;
            lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar15 = plVar20[0x39];
            puVar8 = (undefined8 *)plVar20[0x26];
            lStack_1b0 = lVar23;
            plStack_1a8 = plVar20;
            func_0x000107c61574(plVar20[0x3a]);
            FUN_103184874();
            func_0x000107c615e8(lVar15);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
              pcVar24 = FUN_103194e10;
              puVar9 = (undefined8 *)0x0;
              puVar14 = puVar8;
              goto LAB_107c615e0;
            }
            func_0x000107c60e78();
            uStack_1d0 = (ulong)&uStack_1a0 | 0x1000000000000000;
            pcStack_1c8 = FUN_103194e10;
            lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar15 = plVar20[0x2f];
            plStack_1d8 = plVar20;
            func_0x000107c61170(plVar20[0x35]);
            func_0x000107c61170(lVar15);
            lVar15 = plVar20[0x34];
            (**(code **)(plVar20[0x33] + 8))(lVar15,plVar20[0x32]);
            func_0x000107c615c0(lVar15);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
                    /* WARNING: Could not recover jumptable at 0x000103194e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)plVar20[1])();
              return;
            }
            func_0x000107c60e78();
            uStack_1f0 = (ulong)&uStack_1d0 | 0x1000000000000000;
            pcStack_1e8 = FUN_103194e98;
            lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lStack_1f8 = *plVar20;
            uVar7 = *(undefined8 *)(lStack_1f8 + 0x1d8);
            puVar14 = *(undefined8 **)(lStack_1f8 + 0x130);
            plVar20 = (long *)*plVar20;
            puStack_200 = puVar8;
            func_0x000107c615c0(*(undefined8 *)(lStack_1f8 + 0x1e0));
            func_0x0001000293e4(uVar7);
            func_0x000107c615c0(uVar7);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
              pcVar24 = FUN_103194f28;
              puVar9 = (undefined8 *)0x0;
              goto LAB_107c615e0;
            }
            func_0x000107c60e78();
            uStack_220 = (ulong)&uStack_1f0 | 0x1000000000000000;
            pcStack_218 = FUN_103194f28;
            lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
            plVar20[0x21] = 0;
            plVar20[0x20] = 6;
            *(undefined1 *)(plVar20 + 0x22) = 4;
            uVar13 = 2;
            lStack_240 = lVar21;
            lStack_238 = lVar17;
            uStack_230 = uVar7;
            plStack_228 = plVar20;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar13 != 0) {
              FUN_103187f64();
              func_0x000107c61658(plVar20 + 0x20,&UNK_110618668,uVar13);
            }
            lVar15 = plVar20[0x34];
            lVar23 = plVar20[0x32];
            lVar16 = plVar20[0x33];
            lVar17 = plVar20[0x2f];
            func_0x000107c61170(plVar20[0x35]);
            func_0x000107c61170(lVar17);
            (**(code **)(lVar16 + 8))(lVar15,lVar23);
            func_0x000107c615c0(lVar15);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
                    /* WARNING: Could not recover jumptable at 0x000103195008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)plVar20[1])(6,0,4);
              return;
            }
            func_0x000107c60e78();
            uStack_260 = (ulong)&uStack_220 | 0x1000000000000000;
            pcStack_258 = FUN_103195010;
            lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lStack_268 = *plVar20;
            uVar7 = *(undefined8 *)(lStack_268 + 0x1e8);
            puVar14 = *(undefined8 **)(lStack_268 + 0x130);
            puVar19 = (ulong *)*plVar20;
            lStack_270 = lVar23;
            func_0x000107c615c0(*(undefined8 *)(lStack_268 + 0x1f0));
            func_0x0001000293e4(uVar7);
            func_0x000107c615c0(uVar7);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
              pcVar24 = FUN_1031950a0;
              puVar9 = (undefined8 *)0x0;
              goto LAB_107c615e0;
            }
            func_0x000107c60e78();
            uStack_290 = (ulong)&uStack_260 | 0x1000000000000000;
            pcStack_288 = FUN_1031950a0;
            lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar19[0x1e] = 0;
            puVar19[0x1d] = 5;
            *(undefined1 *)(puVar19 + 0x1f) = 4;
            uVar13 = 2;
            lStack_2b0 = lVar16;
            lStack_2a8 = lVar17;
            uStack_2a0 = uVar7;
            puStack_298 = puVar19;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar13 != 0) {
              FUN_103187f64();
              func_0x000107c61658(puVar19 + 0x1d,&UNK_110618668,uVar13);
            }
            uVar11 = puVar19[0x34];
            uVar12 = puVar19[0x32];
            unaff_x23 = puVar19[0x33];
            unaff_x21 = puVar19[0x2f];
            func_0x000107c61170(puVar19[0x35]);
            func_0x000107c61170(unaff_x21);
            (**(code **)(unaff_x23 + 8))(uVar11,uVar12);
            func_0x000107c615c0(uVar11);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
                    /* WARNING: Could not recover jumptable at 0x000103195184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)puVar19[1])(5,0,4);
              return;
            }
            func_0x000107c60e78();
            uStack_2d0 = (ulong)&uStack_290 | 0x1000000000000000;
            pcStack_2c8 = FUN_10319518c;
            lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            uStack_2d8 = *puVar19;
            uVar11 = *(ulong *)(uStack_2d8 + 0x1f8);
            puVar14 = *(undefined8 **)(uStack_2d8 + 0x130);
            puVar19 = (ulong *)*puVar19;
            uStack_2e0 = uVar12;
            func_0x000107c615c0(*(undefined8 *)(uStack_2d8 + 0x200));
            func_0x0001000293e4(uVar11);
            func_0x000107c615c0(uVar11);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
              pcVar24 = FUN_10319521c;
              puVar9 = (undefined8 *)0x0;
              goto LAB_107c615e0;
            }
            func_0x000107c60e78();
            uStack_300 = (ulong)&uStack_2d0 | 0x1000000000000000;
            plVar1 = &lStack_310;
            pcStack_2f8 = FUN_10319521c;
            lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar19[0x14] = 0;
            puVar19[0x15] = 0;
            *(undefined1 *)(puVar19 + 0x16) = 4;
            uVar7 = 2;
            puStack_308 = puVar19;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar7 != 0) {
              FUN_103187f64();
              func_0x000107c61658(puVar19 + 0x14,&UNK_110618668,uVar7);
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_310) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)puVar19[1])(0,0,4);
              return;
            }
            func_0x000107c60e78();
            uStack_320 = (ulong)&uStack_300 | 0x1000000000000000;
            pcStack_318 = FUN_1031952c0;
            lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar15 = 0x112d36580;
            uStack_330 = uVar11;
            puStack_328 = puVar19;
            func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
            uVar11 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            puVar19[0x41] = uVar11;
            lVar15 = 0;
            func_0x000107c5ede0();
            (**(code **)(*(long *)(lVar15 + -8) + 0x38))(uVar11,1,1,lVar15);
            puVar2 = (ulong *)0x100;
            func_0x000107c615b8();
            puVar19[0x42] = (ulong)puVar2;
            *puVar2 = (ulong)puVar19;
            puVar2[1] = (ulong)FUN_103195398;
            puVar14 = (undefined8 *)puVar19[0x26];
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
              uVar10 = 0;
              uVar6 = uStack_320 & 0xefffffffffffffff;
              uVar12 = uStack_330;
              pcStack_398 = pcStack_318;
            }
            else {
              func_0x000107c60e78();
              uStack_350 = (ulong)&uStack_320 | 0x1000000000000000;
              pcStack_348 = FUN_103195398;
              lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
              uStack_358 = *puVar19;
              uVar12 = *(ulong *)(uStack_358 + 0x208);
              puVar14 = *(undefined8 **)(uStack_358 + 0x130);
              plVar20 = (long *)*puVar19;
              uStack_360 = uVar11;
              func_0x000107c615c0(*(undefined8 *)(uStack_358 + 0x210));
              func_0x0001000293e4(uVar12);
              func_0x000107c615c0(uVar12);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
                pcVar24 = FUN_10319542c;
                puVar9 = (undefined8 *)0x0;
                goto LAB_107c615e0;
              }
              func_0x000107c60e78();
              uStack_380 = (ulong)&uStack_350 | 0x1000000000000000;
              plVar1 = &lStack_390;
              pcStack_378 = FUN_10319542c;
              lStack_390 = *(long *)PTR____stack_chk_guard_11034bdc0;
              plVar20[0x12] = plVar20[0x2d];
              plVar20[0x11] = plVar20[0x2c];
              *(undefined1 *)(plVar20 + 0x13) = *(undefined1 *)((long)plVar20 + 0x81);
              uVar7 = 2;
              plStack_388 = plVar20;
              func_0x000100029b9c(2,0x12,0,0);
              if ((int)uVar7 != 0) {
                FUN_103187f64();
                func_0x000107c61658(plVar20 + 0x11,&UNK_110618668,uVar7);
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_390) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)plVar20[1])();
                return;
              }
              func_0x000107c60e78(plVar20[0x2c],plVar20[0x2d],*(undefined1 *)((long)plVar20 + 0x81))
              ;
              pcStack_398 = FUN_1031954d0;
              lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
              lVar15 = 0x112d36580;
              func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
              uVar11 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
              func_0x000107c615b8();
              plVar20[0x43] = uVar11;
              lVar15 = 0;
              func_0x000107c5ede0();
              (**(code **)(*(long *)(lVar15 + -8) + 0x38))(uVar11,1,1,lVar15);
              puVar2 = (ulong *)0x100;
              func_0x000107c615b8();
              plVar20[0x44] = (long)puVar2;
              *puVar2 = (ulong)plVar20;
              puVar2[1] = (ulong)FUN_1031955a8;
              puVar14 = (undefined8 *)plVar20[0x26];
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar23) {
                func_0x000107c60e78();
                lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
                lVar23 = *plVar20;
                uVar7 = *(undefined8 *)(lVar23 + 0x218);
                puVar14 = *(undefined8 **)(lVar23 + 0x130);
                lVar16 = *plVar20;
                func_0x000107c615c0(*(undefined8 *)(lVar23 + 0x220));
                func_0x0001000293e4(uVar7);
                func_0x000107c615c0(uVar7);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                  pcVar24 = FUN_10319563c;
                  puVar9 = (undefined8 *)0x0;
                }
                else {
                  func_0x000107c60e78();
                  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  *(undefined8 *)(lVar16 + 0xc0) = *(undefined8 *)(lVar16 + 0x180);
                  *(undefined8 *)(lVar16 + 0xb8) = *(undefined8 *)(lVar16 + 0x178);
                  *(undefined1 *)(lVar16 + 200) = *(undefined1 *)(lVar16 + 0x82);
                  uVar7 = 2;
                  func_0x000100029b9c(2,0x12,0,0);
                  if ((int)uVar7 != 0) {
                    FUN_103187f64();
                    func_0x000107c61658((undefined8 *)(lVar16 + 0xb8),&UNK_110618668,uVar7);
                  }
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(lVar16 + 8))();
                    return;
                  }
                  func_0x000107c60e78(*(undefined8 *)(lVar16 + 0x178),
                                      *(undefined8 *)(lVar16 + 0x180),*(undefined1 *)(lVar16 + 0x82)
                                     );
                  pcVar24 = FUN_1031956f8;
                  puVar14 = (undefined8 *)0x0;
                  puVar9 = (undefined8 *)0x0;
                }
                goto LAB_107c615e0;
              }
              uVar10 = 0;
              uVar6 = (ulong)&uStack_380 & 0xefffffffffffffff;
            }
            goto FUN_103196cf0;
          }
          pcVar24 = FUN_1031954d0;
        }
        puVar9 = (undefined8 *)0x0;
        puVar14 = *(undefined8 **)(uVar12 + 0x130);
      }
      goto LAB_107c615e0;
    }
    pcVar24 = FUN_1031952c0;
  }
  puVar9 = (undefined8 *)0x0;
  puVar14 = puVar8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar24,puVar14,puVar9);
  return;
}



/* Entry: 103194444; end: 10319457b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103194444(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong unaff_x19;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong unaff_x21;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  ulong *unaff_x22;
  long *plVar17;
  ulong *puVar18;
  ulong unaff_x23;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  ulong unaff_x29;
  code *unaff_x30;
  code *pcStack_368;
  long lStack_360;
  long *plStack_358;
  ulong uStack_350;
  code *pcStack_348;
  long lStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  code *pcStack_318;
  long lStack_308;
  ulong uStack_300;
  ulong *puStack_2f8;
  ulong uStack_2f0;
  code *pcStack_2e8;
  long lStack_2e0;
  ulong *puStack_2d8;
  ulong uStack_2d0;
  code *pcStack_2c8;
  long lStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  code *pcStack_298;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  ulong *puStack_268;
  ulong uStack_260;
  code *pcStack_258;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  ulong uStack_230;
  code *pcStack_228;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  ulong uStack_1f0;
  code *pcStack_1e8;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  code *pcStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  code *pcStack_198;
  long lStack_188;
  long lStack_180;
  long *plStack_178;
  ulong uStack_170;
  code *pcStack_168;
  long lStack_158;
  ulong *puStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  ulong uStack_120;
  code *pcStack_118;
  long lStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  ulong uStack_f0;
  code *pcStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c0;
  ulong uStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  ulong uStack_50;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_28;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((unaff_x22[0x2c] & 1) == 0) {
    lVar13 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar7 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    unaff_x22[0x3f] = uVar7;
    lVar13 = 0;
    func_0x000107c5ede0();
    param_2 = 1;
    param_3 = 1;
    (**(code **)(*(long *)(lVar13 + -8) + 0x38))(uVar7,1,1,lVar13);
    puVar1 = (ulong *)0x100;
    func_0x000107c615b8();
    unaff_x22[0x40] = (ulong)puVar1;
    *puVar1 = (ulong)unaff_x22;
    puVar1[1] = (ulong)FUN_10319518c;
    puVar12 = (undefined8 *)unaff_x22[0x26];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) goto LAB_103194578;
    uVar10 = 0;
    uVar6 = uStack_10 & 0xefffffffffffffff;
    pcStack_368 = unaff_x30;
FUN_103196cf0:
    *(ulong *)((long)register0x00000008 + -0x10) = uVar6 | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -8) = pcStack_368;
    *(ulong **)((long)register0x00000008 + -0x18) = puVar1;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar1[0x15] = uVar7;
    puVar1[0x16] = (ulong)puVar12;
    puVar1[0x14] = uVar10;
    lVar13 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar7 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    puVar1[0x17] = uVar7;
    uVar7 = 0;
    func_0x000107c5ede0();
    puVar1[0x18] = uVar7;
    uVar7 = *(ulong *)(uVar7 - 8);
    puVar1[0x19] = uVar7;
    uVar7 = *(long *)(uVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    puVar1[0x1a] = uVar7;
    lVar13 = 0;
    FUN_103197644();
    uVar7 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    puVar1[0x1b] = uVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x20)) {
      pcVar22 = FUN_103196dcc;
      puVar9 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c60e78();
      *(ulong *)((long)register0x00000008 + -0x50) = unaff_x23;
      *(ulong *)((long)register0x00000008 + -0x48) = unaff_x21;
      *(ulong *)((long)register0x00000008 + -0x40) = unaff_x19;
      *(ulong *)((long)register0x00000008 + -0x30) =
           (ulong)((long)register0x00000008 + -0x10) | 0x1000000000000000;
      *(code **)((long)register0x00000008 + -0x28) = FUN_103196dcc;
      *(ulong **)((long)register0x00000008 + -0x38) = puVar1;
      *(undefined8 *)((long)register0x00000008 + -0x58) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar6 = puVar1[0x1b];
      uVar7 = puVar1[0x16];
      puVar16 = (undefined *)puVar1[0x14];
      lVar13 = 0;
      FUN_103197894();
      (**(code **)(*(long *)(lVar13 + -8) + 0x38))(uVar6,1,1,lVar13);
      lVar13 = _DAT_112f47d68;
      func_0x000107c61428(uVar7 + _DAT_112f47d68,puVar1 + 10,0x21,0);
      func_0x000103187ec0(uVar6,uVar7 + lVar13);
      func_0x000107c614a8(puVar1 + 10);
      lVar13 = 8;
      func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
      *(undefined8 *)(lVar13 + 0x10) = 8;
      *(undefined8 *)(lVar13 + 0x28) = 0;
      *(undefined8 *)(lVar13 + 0x20) = 0;
      *(undefined8 *)(lVar13 + 0x38) = 0;
      *(undefined8 *)(lVar13 + 0x30) = 0;
      *(undefined8 *)(lVar13 + 0x48) = 0;
      *(undefined8 *)(lVar13 + 0x40) = 0;
      *(undefined8 *)(lVar13 + 0x58) = 0;
      *(undefined8 *)(lVar13 + 0x50) = 0;
      puVar2 = (undefined8 *)(uVar7 + _DAT_112f47d70);
      func_0x000107c61428(puVar2,puVar1 + 0xd,1,0);
      uVar8 = puVar2[2];
      *puVar2 = 0;
      puVar2[1] = 0x3fd3333333333333;
      puVar2[2] = lVar13;
      func_0x000107c6142c(uVar8);
      if (puVar16 == (undefined *)0x0) {
        uVar7 = puVar1[0x18];
        puVar16 = (undefined *)puVar1[0x19];
        uVar6 = puVar1[0x17];
        FUN_103198594(puVar1[0x15],uVar6,0x112d36580,&UNK_10d9016d0);
        (**(code **)(puVar16 + 0x30))(uVar6,1,uVar7);
        if ((int)uVar6 == 1) {
          func_0x0001000293e4(puVar1[0x17]);
        }
        else {
          (**(code **)(puVar1[0x19] + 0x20))(puVar1[0x1a],puVar1[0x17],puVar1[0x18]);
          puVar16 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar4 = puVar16;
          func_0x000107c5ed90();
          puVar1[0x13] = 0;
          puVar5 = puVar16;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar16);
          puVar16 = (undefined *)puVar1[0x13];
          if ((int)puVar5 == 0) {
            puVar4 = puVar16;
            func_0x000107c61174(puVar16);
            func_0x000107c5ed30();
            func_0x000107c61170(puVar4);
            func_0x000107c61654();
            func_0x000107c614ac(puVar16);
          }
          else {
            func_0x000107c61174(puVar16);
            puVar16 = puVar5;
          }
          (**(code **)(puVar1[0x19] + 8))(puVar1[0x1a],puVar1[0x18]);
        }
        uVar7 = puVar1[0x16] + _DAT_113806f10;
        func_0x000107c61618();
        puVar1[0x1d] = uVar7;
        if (uVar7 == 0) {
          uVar7 = puVar1[0x1a];
          puVar2 = (undefined8 *)puVar1[0x17];
          func_0x000107c615c0(puVar1[0x1b]);
          func_0x000107c615c0(uVar7);
          func_0x000107c615c0(puVar2);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)puVar1[1])();
            return;
          }
        }
        else {
          puVar2 = (undefined8 *)0x0;
          func_0x000107c5fcec();
          puVar9 = puVar2;
          func_0x000107c5fce8();
          puVar1[0x1e] = (ulong)puVar9;
          func_0x000100eea164();
          puVar12 = puVar2;
          func_0x000107c5fca8(puVar2,puVar9);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
            pcVar22 = FUN_103197450;
            goto LAB_107c615e0;
          }
        }
      }
      else {
        puVar1[0x1c] = *(ulong *)(puVar1[0x16] + 0x70);
        func_0x000107c61174(puVar1[0x14]);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
          pcVar22 = FUN_1031970e0;
          puVar12 = (undefined8 *)0x0;
          puVar9 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
      }
      func_0x000107c60e78();
      *(undefined8 **)((long)register0x00000008 + -0x80) = puVar2;
      *(ulong *)((long)register0x00000008 + -0x70) =
           (ulong)((long)register0x00000008 + -0x30) | 0x1000000000000000;
      *(code **)((long)register0x00000008 + -0x68) = FUN_1031970e0;
      *(ulong **)((long)register0x00000008 + -0x78) = puVar1;
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar7 = puVar1[0x14];
      puVar1[2] = (ulong)puVar1;
      puVar1[3] = (ulong)FUN_103197168;
      func_0x000107c61448(puVar1 + 2,0);
      func_0x0001031982f4();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x88))
      {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(puVar1 + 2);
        return;
      }
      func_0x000107c60e78();
      *(ulong *)((long)register0x00000008 + -0xa0) =
           (ulong)((long)register0x00000008 + -0x70) | 0x1000000000000000;
      *(code **)((long)register0x00000008 + -0x98) = FUN_103197168;
      *(ulong **)((long)register0x00000008 + -0xa8) = puVar1;
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(ulong *)((long)register0x00000008 + -0xa8) = *puVar1;
      uVar6 = *puVar1;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xb0))
      {
        pcVar22 = (code *)0x1031971d4;
        puVar9 = (undefined8 *)0x0;
        puVar12 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c60e78();
        *(ulong *)((long)register0x00000008 + -0xc0) =
             (ulong)((long)register0x00000008 + -0xa0) | 0x1000000000000000;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x1031971d4;
        *(ulong *)((long)register0x00000008 + -200) = uVar6;
        *(undefined8 *)((long)register0x00000008 + -0xd0) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0xd0)
           ) {
          func_0x000107c60e78();
          *(undefined8 *)((long)register0x00000008 + -0x100) = 8;
          *(undefined **)((long)register0x00000008 + -0xf8) = puVar16;
          *(ulong *)((long)register0x00000008 + -0xf0) = uVar7;
          *(ulong *)((long)register0x00000008 + -0xe0) =
               (ulong)((long)register0x00000008 + -0xc0) | 0x1000000000000000;
          *(code **)((long)register0x00000008 + -0xd8) = FUN_103197234;
          *(ulong *)((long)register0x00000008 + -0xe8) = uVar6;
          *(undefined8 *)((long)register0x00000008 + -0x108) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          func_0x000107c61170(*(undefined8 *)(uVar6 + 0xa0));
          uVar8 = *(undefined8 *)(uVar6 + 0xc0);
          lVar13 = *(long *)(uVar6 + 200);
          uVar11 = *(undefined8 *)(uVar6 + 0xb8);
          FUN_103198594(*(undefined8 *)(uVar6 + 0xa8),uVar11,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lVar13 + 0x30))(uVar11,1,uVar8);
          if ((int)uVar11 == 1) {
            func_0x0001000293e4(*(undefined8 *)(uVar6 + 0xb8));
          }
          else {
            (**(code **)(*(long *)(uVar6 + 200) + 0x20))
                      (*(undefined8 *)(uVar6 + 0xd0),*(undefined8 *)(uVar6 + 0xb8),
                       *(undefined8 *)(uVar6 + 0xc0));
            puVar16 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x000107c61168();
            func_0x000107c415e0();
            func_0x000107c61180();
            puVar4 = puVar16;
            func_0x000107c5ed90();
            *(undefined8 *)(uVar6 + 0x98) = 0;
            puVar5 = puVar16;
            func_0x000107c4ff50();
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar16);
            uVar8 = *(undefined8 *)(uVar6 + 0x98);
            if ((int)puVar5 == 0) {
              uVar11 = uVar8;
              func_0x000107c61174(uVar8);
              func_0x000107c5ed30(uVar8);
              func_0x000107c61170(uVar11);
              func_0x000107c61654();
              func_0x000107c614ac(uVar8);
            }
            else {
              func_0x000107c61174(uVar8);
            }
            (**(code **)(*(long *)(uVar6 + 200) + 8))
                      (*(undefined8 *)(uVar6 + 0xd0),*(undefined8 *)(uVar6 + 0xc0));
          }
          lVar13 = *(long *)(uVar6 + 0xb0) + _DAT_113806f10;
          func_0x000107c61618();
          *(long *)(uVar6 + 0xe8) = lVar13;
          if (lVar13 == 0) {
            uVar8 = *(undefined8 *)(uVar6 + 0xd0);
            puVar2 = *(undefined8 **)(uVar6 + 0xb8);
            func_0x000107c615c0(*(undefined8 *)(uVar6 + 0xd8));
            func_0x000107c615c0(uVar8);
            func_0x000107c615c0(puVar2);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x108)) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(uVar6 + 8))();
              return;
            }
          }
          else {
            puVar2 = (undefined8 *)0x0;
            func_0x000107c5fcec();
            puVar9 = puVar2;
            func_0x000107c5fce8();
            *(undefined8 **)(uVar6 + 0xf0) = puVar9;
            func_0x000100eea164();
            puVar12 = puVar2;
            func_0x000107c5fca8(puVar2,puVar9);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x108)) {
              pcVar22 = FUN_103197450;
              goto LAB_107c615e0;
            }
          }
          func_0x000107c60e78();
          *(undefined8 **)((long)register0x00000008 + -0x130) = puVar2;
          *(ulong *)((long)register0x00000008 + -0x120) =
               (ulong)((long)register0x00000008 + -0xe0) | 0x1000000000000000;
          *(code **)((long)register0x00000008 + -0x118) = FUN_103197450;
          *(ulong *)((long)register0x00000008 + -0x128) = uVar6;
          *(undefined8 *)((long)register0x00000008 + -0x138) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar13 = *(long *)(uVar6 + 0xe8);
          func_0x000107c61574(*(undefined8 *)(uVar6 + 0xf0));
          lVar21 = _DAT_112f476d0;
          func_0x000107c61428(lVar13 + _DAT_112f476d0,uVar6 + 0x80,0,0);
          lVar13 = lVar13 + lVar21;
          func_0x000107c61618();
          if (lVar13 != 0) {
            func_0x000107c3e3e0();
            func_0x000107c615e8(lVar13);
          }
          func_0x000107c615e8(*(undefined8 *)(uVar6 + 0xe8));
          lVar13 = *(long *)(uVar6 + 0xd0);
          uVar8 = *(undefined8 *)(uVar6 + 0xb8);
          func_0x000107c615c0(*(undefined8 *)(uVar6 + 0xd8));
          func_0x000107c615c0(lVar13);
          func_0x000107c615c0(uVar8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
              *(long *)((long)register0x00000008 + -0x138)) {
            func_0x000107c60e78();
            *(undefined1 **)((long)register0x00000008 + -0x150) =
                 (undefined1 *)((long)register0x00000008 + -0x120);
            *(code **)((long)register0x00000008 + -0x148) = FUN_10319751c;
            func_0x000107c615e8(*(undefined8 *)(lVar13 + 0x70));
            func_0x000107c61170(*(undefined8 *)(lVar13 + 0x78));
            FUN_103198414(lVar13 + _DAT_112f47d68,FUN_103197644);
            func_0x000107c6142c(*(undefined8 *)(lVar13 + _DAT_112f47d70 + 0x10));
            FUN_1031985fc(lVar13 + _DAT_113806f10);
            func_0x000107c61470(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar13);
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(uVar6 + 8))();
          return;
        }
        pcVar22 = FUN_103197234;
        puVar9 = (undefined8 *)0x0;
        puVar12 = *(undefined8 **)(uVar6 + 0xb0);
      }
    }
  }
  else {
    puVar12 = *(undefined8 **)(unaff_x22[0x26] + 0x70);
    puVar1 = (ulong *)0x110;
    func_0x000107c615b8();
    unaff_x22[0x2e] = (ulong)puVar1;
    *puVar1 = (ulong)unaff_x22;
    puVar1[1] = (ulong)FUN_10319457c;
    uVar7 = unaff_x19;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      puVar1[0x1c] = (ulong)puVar12;
      pcVar22 = FUN_1031958c8;
      puVar9 = (undefined8 *)0x0;
      puVar12 = (undefined8 *)0x0;
      goto LAB_107c615e0;
    }
LAB_103194578:
    func_0x000107c60e78();
    uStack_40 = (ulong)&uStack_10 | 0x1000000000000000;
    pcStack_38 = FUN_10319457c;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    unaff_x19 = *unaff_x22;
    plVar17 = (long *)*unaff_x22;
    *(ulong **)(unaff_x19 + 0x178) = puVar1;
    *(undefined8 *)(unaff_x19 + 0x180) = param_2;
    *(undefined1 *)(unaff_x19 + 0x82) = param_3;
    *(undefined8 **)(unaff_x19 + 0x188) = puVar12;
    uStack_50 = uVar7;
    func_0x000107c615c0(*(undefined8 *)(unaff_x19 + 0x170));
    if (puVar12 == (undefined8 *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) goto LAB_10319462c;
      pcVar22 = FUN_103194630;
    }
    else {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
LAB_10319462c:
        func_0x000107c60e78();
        uStack_70 = (ulong)&uStack_40 | 0x1000000000000000;
        pcStack_68 = FUN_103194630;
        lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar2 = (undefined8 *)0x0;
        func_0x000107c5ede0();
        plVar17[0x32] = (long)puVar2;
        lVar21 = puVar2[-1];
        plVar17[0x33] = lVar21;
        uVar6 = *(long *)(lVar21 + 0x40) + 0xf;
        uVar3 = uVar6 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar17[0x34] = uVar3;
        FUN_103195d00(uVar3);
        puVar16 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar4 = puVar16;
        func_0x000107c5ed90();
        plVar17[0x23] = 0;
        puVar5 = puVar16;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar16);
        lVar13 = plVar17[0x23];
        if ((int)puVar5 == 0) {
          lVar14 = lVar13;
          func_0x000107c61174(lVar13);
          func_0x000107c5ed30(lVar13);
          func_0x000107c61170(lVar14);
          func_0x000107c61654();
          func_0x000107c614ac(lVar13);
          lVar14 = 0;
        }
        else {
          lVar14 = plVar17[0x31];
          func_0x000107c61174(lVar13);
        }
        uVar6 = uVar6 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        pcVar22 = *(code **)(lVar21 + 0x10);
        (*pcVar22)();
        if (lRam0000000112f47fe8 != -1) {
          func_0x000107c61568(0x112f47fe8,FUN_103193e4c);
        }
        uVar8 = uRam0000000112f47ff0;
        puVar18 = (ulong *)PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50;
        func_0x000107c610f8();
        func_0x000107c61434(uVar8);
        uVar10 = uVar6;
        func_0x0001010416fc(uVar6,uVar8);
        plVar17[0x35] = uVar10;
        plVar17[0x36] = lVar14;
        func_0x000107c615c0(uVar6);
        if (lVar14 == 0) {
          func_0x000107c61174();
          func_0x000107c53fcc();
          func_0x000107c5668c(uVar10);
          uVar7 = uVar10;
          func_0x000107c4ee28();
          func_0x000107c61170(uVar10);
          if ((uVar7 & 1) == 0) {
            lVar13 = 0x112d36580;
            func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
            uVar7 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            plVar17[0x3d] = uVar7;
            (*pcVar22)();
            (**(code **)(lVar21 + 0x38))(uVar7,0,1,puVar2);
            puVar1 = (ulong *)0x100;
            func_0x000107c615b8();
            plVar17[0x3e] = (long)puVar1;
            pcVar22 = FUN_103195010;
            goto LAB_103194af8;
          }
          if (lRam0000000112f47ff8 != -1) {
            func_0x000107c61568(0x112f47ff8,0x103193e34);
          }
          uVar7 = uVar10;
          func_0x000107c4fa98(uRam0000000112f48000);
          if ((int)uVar7 == 0) {
            lVar13 = 0x112d36580;
            func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
            uVar7 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            plVar17[0x3b] = uVar7;
            (*pcVar22)();
            (**(code **)(lVar21 + 0x38))(uVar7,0,1,puVar2);
            puVar1 = (ulong *)0x100;
            func_0x000107c615b8();
            plVar17[0x3c] = (long)puVar1;
            pcVar22 = FUN_103194e98;
            goto LAB_103194af8;
          }
          uStack_e0 = plVar17[0x2f];
          uVar6 = plVar17[0x29];
          lStack_d8 = plVar17[0x2a];
          lVar21 = plVar17[0x27];
          lStack_d0 = plVar17[0x28];
          lVar13 = plVar17[0x26];
          lVar14 = 8;
          func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
          *(undefined8 *)(lVar14 + 0x10) = 8;
          *(undefined8 *)(lVar14 + 0x28) = 0;
          *(undefined8 *)(lVar14 + 0x20) = 0;
          *(undefined8 *)(lVar14 + 0x38) = 0;
          *(undefined8 *)(lVar14 + 0x30) = 0;
          *(undefined8 *)(lVar14 + 0x48) = 0;
          *(undefined8 *)(lVar14 + 0x40) = 0;
          *(undefined8 *)(lVar14 + 0x58) = 0;
          *(undefined8 *)(lVar14 + 0x50) = 0;
          puVar12 = (undefined8 *)(lVar13 + _DAT_112f47d70);
          func_0x000107c61428(puVar12,plVar17 + 8,1,0);
          uVar8 = puVar12[2];
          *puVar12 = 0;
          puVar12[1] = 0x3fd3333333333333;
          puVar12[2] = lVar14;
          func_0x000107c6142c(uVar8);
          puVar18 = (ulong *)(lVar21 + 0xfU & 0xfffffffffffffff0);
          func_0x000107c615b8();
          (*pcVar22)((long)puVar18 + (long)*(int *)(uVar6 + 0x14),uVar3,puVar2);
          uVar7 = uStack_e0;
          *puVar18 = uVar10;
          *(ulong *)((long)puVar18 + (long)*(int *)(uVar6 + 0x18)) = uStack_e0;
          (**(code **)(lStack_d8 + 0x38))(puVar18,0,1,uVar6);
          lVar21 = lStack_d0;
          func_0x000107c61428(lVar13 + lStack_d0,plVar17 + 0xb,0x21,0);
          func_0x000107c61174(uVar10);
          func_0x000107c61174(uVar7);
          func_0x000103187ec0(puVar18,lVar13 + lVar21);
          func_0x000107c614a8(plVar17 + 0xb);
          func_0x000107c615c0(puVar18);
          lVar13 = lVar13 + _DAT_113806f10;
          func_0x000107c61618();
          plVar17[0x39] = lVar13;
          if (lVar13 == 0) {
            puVar2 = (undefined8 *)plVar17[0x2f];
            func_0x000107c61170(uVar10);
            func_0x000107c61170(puVar2);
            lVar13 = plVar17[0x34];
            (**(code **)(plVar17[0x33] + 8))(lVar13,plVar17[0x32]);
            func_0x000107c615c0(lVar13);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
                    /* WARNING: Could not recover jumptable at 0x000103194bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)plVar17[1])();
              return;
            }
          }
          else {
            puVar2 = (undefined8 *)0x0;
            func_0x000107c5fcec();
            puVar9 = puVar2;
            func_0x000107c5fce8();
            plVar17[0x3a] = (long)puVar9;
            func_0x000100eea164();
            puVar12 = puVar2;
            func_0x000107c5fca8(puVar2,puVar9);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
              pcVar22 = FUN_103194d90;
              goto LAB_107c615e0;
            }
          }
        }
        else {
          lVar13 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          uVar7 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar17[0x37] = uVar7;
          (*pcVar22)();
          (**(code **)(lVar21 + 0x38))(uVar7,0,1,puVar2);
          puVar1 = (ulong *)0x100;
          func_0x000107c615b8();
          plVar17[0x38] = (long)puVar1;
          pcVar22 = FUN_103194bec;
LAB_103194af8:
          *puVar1 = (ulong)plVar17;
          puVar1[1] = (ulong)pcVar22;
          uVar10 = plVar17[0x2f];
          puVar12 = (undefined8 *)plVar17[0x26];
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
            uVar6 = uStack_70 & 0xefffffffffffffff;
            register0x00000008 = (BADSPACEBASE *)auStack_60;
            pcStack_368 = pcStack_68;
            goto FUN_103196cf0;
          }
        }
        func_0x000107c60e78();
        uStack_f0 = (ulong)&uStack_70 | 0x1000000000000000;
        pcStack_e8 = FUN_103194bec;
        lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_f8 = *plVar17;
        uVar8 = *(undefined8 *)(lStack_f8 + 0x1b8);
        puVar12 = *(undefined8 **)(lStack_f8 + 0x130);
        plVar17 = (long *)*plVar17;
        puStack_100 = puVar2;
        func_0x000107c615c0(*(undefined8 *)(lStack_f8 + 0x1c0));
        func_0x0001000293e4(uVar8);
        func_0x000107c615c0(uVar8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
          pcVar22 = FUN_103194c7c;
          puVar9 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_120 = (ulong)&uStack_f0 | 0x1000000000000000;
        pcStack_118 = FUN_103194c7c;
        lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_150 = puVar18;
        uStack_148 = uVar6;
        uStack_140 = uVar3;
        uStack_138 = uVar7;
        uStack_130 = uVar8;
        plStack_128 = plVar17;
        func_0x000107c614cc(plVar17[0x36],plVar17 + 0x24,plVar17 + 5);
        lVar13 = plVar17[6];
        lVar21 = plVar17[7];
        func_0x000107c60640();
        plVar17[0x1a] = lVar13;
        plVar17[0x1b] = lVar21;
        *(undefined1 *)(plVar17 + 0x1c) = 1;
        uVar8 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar8 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar17 + 0x1a,&UNK_110618668,uVar8);
        }
        lVar14 = plVar17[0x33];
        lVar15 = plVar17[0x34];
        lVar19 = plVar17[0x32];
        lVar20 = plVar17[0x2f];
        func_0x000107c614ac(plVar17[0x36]);
        func_0x000107c61170(lVar20);
        (**(code **)(lVar14 + 8))(lVar15,lVar19);
        func_0x000107c615c0(lVar15);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
                    /* WARNING: Could not recover jumptable at 0x000103194d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar17[1])(lVar13,lVar21,1);
          return;
        }
        func_0x000107c60e78();
        uStack_170 = (ulong)&uStack_120 | 0x1000000000000000;
        pcStack_168 = FUN_103194d90;
        lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar13 = plVar17[0x39];
        puVar2 = (undefined8 *)plVar17[0x26];
        lStack_180 = lVar21;
        plStack_178 = plVar17;
        func_0x000107c61574(plVar17[0x3a]);
        FUN_103184874();
        func_0x000107c615e8(lVar13);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
          pcVar22 = FUN_103194e10;
          puVar9 = (undefined8 *)0x0;
          puVar12 = puVar2;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_1a0 = (ulong)&uStack_170 | 0x1000000000000000;
        pcStack_198 = FUN_103194e10;
        lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar13 = plVar17[0x2f];
        plStack_1a8 = plVar17;
        func_0x000107c61170(plVar17[0x35]);
        func_0x000107c61170(lVar13);
        lVar13 = plVar17[0x34];
        (**(code **)(plVar17[0x33] + 8))(lVar13,plVar17[0x32]);
        func_0x000107c615c0(lVar13);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
                    /* WARNING: Could not recover jumptable at 0x000103194e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar17[1])();
          return;
        }
        func_0x000107c60e78();
        uStack_1c0 = (ulong)&uStack_1a0 | 0x1000000000000000;
        pcStack_1b8 = FUN_103194e98;
        lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_1c8 = *plVar17;
        uVar8 = *(undefined8 *)(lStack_1c8 + 0x1d8);
        puVar12 = *(undefined8 **)(lStack_1c8 + 0x130);
        plVar17 = (long *)*plVar17;
        puStack_1d0 = puVar2;
        func_0x000107c615c0(*(undefined8 *)(lStack_1c8 + 0x1e0));
        func_0x0001000293e4(uVar8);
        func_0x000107c615c0(uVar8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
          pcVar22 = FUN_103194f28;
          puVar9 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_1f0 = (ulong)&uStack_1c0 | 0x1000000000000000;
        pcStack_1e8 = FUN_103194f28;
        lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar17[0x21] = 0;
        plVar17[0x20] = 6;
        *(undefined1 *)(plVar17 + 0x22) = 4;
        uVar11 = 2;
        lStack_210 = lVar19;
        lStack_208 = lVar15;
        uStack_200 = uVar8;
        plStack_1f8 = plVar17;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar11 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar17 + 0x20,&UNK_110618668,uVar11);
        }
        lVar13 = plVar17[0x34];
        lVar21 = plVar17[0x32];
        lVar14 = plVar17[0x33];
        lVar15 = plVar17[0x2f];
        func_0x000107c61170(plVar17[0x35]);
        func_0x000107c61170(lVar15);
        (**(code **)(lVar14 + 8))(lVar13,lVar21);
        func_0x000107c615c0(lVar13);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
                    /* WARNING: Could not recover jumptable at 0x000103195008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar17[1])(6,0,4);
          return;
        }
        func_0x000107c60e78();
        uStack_230 = (ulong)&uStack_1f0 | 0x1000000000000000;
        pcStack_228 = FUN_103195010;
        lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_238 = *plVar17;
        uVar8 = *(undefined8 *)(lStack_238 + 0x1e8);
        puVar12 = *(undefined8 **)(lStack_238 + 0x130);
        puVar18 = (ulong *)*plVar17;
        lStack_240 = lVar21;
        func_0x000107c615c0(*(undefined8 *)(lStack_238 + 0x1f0));
        func_0x0001000293e4(uVar8);
        func_0x000107c615c0(uVar8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
          pcVar22 = FUN_1031950a0;
          puVar9 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_260 = (ulong)&uStack_230 | 0x1000000000000000;
        pcStack_258 = FUN_1031950a0;
        lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar18[0x1e] = 0;
        puVar18[0x1d] = 5;
        *(undefined1 *)(puVar18 + 0x1f) = 4;
        uVar11 = 2;
        lStack_280 = lVar14;
        lStack_278 = lVar15;
        uStack_270 = uVar8;
        puStack_268 = puVar18;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar11 != 0) {
          FUN_103187f64();
          func_0x000107c61658(puVar18 + 0x1d,&UNK_110618668,uVar11);
        }
        uVar7 = puVar18[0x34];
        uVar6 = puVar18[0x32];
        unaff_x23 = puVar18[0x33];
        unaff_x21 = puVar18[0x2f];
        func_0x000107c61170(puVar18[0x35]);
        func_0x000107c61170(unaff_x21);
        (**(code **)(unaff_x23 + 8))(uVar7,uVar6);
        func_0x000107c615c0(uVar7);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
                    /* WARNING: Could not recover jumptable at 0x000103195184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)puVar18[1])(5,0,4);
          return;
        }
        func_0x000107c60e78();
        uStack_2a0 = (ulong)&uStack_260 | 0x1000000000000000;
        pcStack_298 = FUN_10319518c;
        lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uStack_2a8 = *puVar18;
        uVar7 = *(ulong *)(uStack_2a8 + 0x1f8);
        puVar12 = *(undefined8 **)(uStack_2a8 + 0x130);
        puVar18 = (ulong *)*puVar18;
        uStack_2b0 = uVar6;
        func_0x000107c615c0(*(undefined8 *)(uStack_2a8 + 0x200));
        func_0x0001000293e4(uVar7);
        func_0x000107c615c0(uVar7);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
          pcVar22 = FUN_10319521c;
          puVar9 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_2d0 = (ulong)&uStack_2a0 | 0x1000000000000000;
        pcStack_2c8 = FUN_10319521c;
        lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar18[0x14] = 0;
        puVar18[0x15] = 0;
        *(undefined1 *)(puVar18 + 0x16) = 4;
        uVar8 = 2;
        puStack_2d8 = puVar18;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar8 != 0) {
          FUN_103187f64();
          func_0x000107c61658(puVar18 + 0x14,&UNK_110618668,uVar8);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e0) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)puVar18[1])(0,0,4);
          return;
        }
        func_0x000107c60e78();
        uStack_2f0 = (ulong)&uStack_2d0 | 0x1000000000000000;
        pcStack_2e8 = FUN_1031952c0;
        lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar13 = 0x112d36580;
        uStack_300 = uVar7;
        puStack_2f8 = puVar18;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar7 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        puVar18[0x41] = uVar7;
        lVar13 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar13 + -8) + 0x38))(uVar7,1,1,lVar13);
        puVar1 = (ulong *)0x100;
        func_0x000107c615b8();
        puVar18[0x42] = (ulong)puVar1;
        *puVar1 = (ulong)puVar18;
        puVar1[1] = (ulong)FUN_103195398;
        puVar12 = (undefined8 *)puVar18[0x26];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
          uVar10 = 0;
          uVar6 = uStack_2f0 & 0xefffffffffffffff;
          register0x00000008 = (BADSPACEBASE *)&lStack_2e0;
          unaff_x19 = uStack_300;
          pcStack_368 = pcStack_2e8;
        }
        else {
          func_0x000107c60e78();
          uStack_320 = (ulong)&uStack_2f0 | 0x1000000000000000;
          pcStack_318 = FUN_103195398;
          lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uStack_328 = *puVar18;
          unaff_x19 = *(ulong *)(uStack_328 + 0x208);
          puVar12 = *(undefined8 **)(uStack_328 + 0x130);
          plVar17 = (long *)*puVar18;
          uStack_330 = uVar7;
          func_0x000107c615c0(*(undefined8 *)(uStack_328 + 0x210));
          func_0x0001000293e4(unaff_x19);
          func_0x000107c615c0(unaff_x19);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
            pcVar22 = FUN_10319542c;
            puVar9 = (undefined8 *)0x0;
            goto LAB_107c615e0;
          }
          func_0x000107c60e78();
          uStack_350 = (ulong)&uStack_320 | 0x1000000000000000;
          pcStack_348 = FUN_10319542c;
          lStack_360 = *(long *)PTR____stack_chk_guard_11034bdc0;
          plVar17[0x12] = plVar17[0x2d];
          plVar17[0x11] = plVar17[0x2c];
          *(undefined1 *)(plVar17 + 0x13) = *(undefined1 *)((long)plVar17 + 0x81);
          uVar8 = 2;
          plStack_358 = plVar17;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar8 != 0) {
            FUN_103187f64();
            func_0x000107c61658(plVar17 + 0x11,&UNK_110618668,uVar8);
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_360) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)plVar17[1])();
            return;
          }
          func_0x000107c60e78(plVar17[0x2c],plVar17[0x2d],*(undefined1 *)((long)plVar17 + 0x81));
          pcStack_368 = FUN_1031954d0;
          lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar13 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          uVar7 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar17[0x43] = uVar7;
          lVar13 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar13 + -8) + 0x38))(uVar7,1,1,lVar13);
          puVar1 = (ulong *)0x100;
          func_0x000107c615b8();
          plVar17[0x44] = (long)puVar1;
          *puVar1 = (ulong)plVar17;
          puVar1[1] = (ulong)FUN_1031955a8;
          puVar12 = (undefined8 *)plVar17[0x26];
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
            func_0x000107c60e78();
            lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar21 = *plVar17;
            uVar8 = *(undefined8 *)(lVar21 + 0x218);
            puVar12 = *(undefined8 **)(lVar21 + 0x130);
            lVar14 = *plVar17;
            func_0x000107c615c0(*(undefined8 *)(lVar21 + 0x220));
            func_0x0001000293e4(uVar8);
            func_0x000107c615c0(uVar8);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
              pcVar22 = FUN_10319563c;
              puVar9 = (undefined8 *)0x0;
            }
            else {
              func_0x000107c60e78();
              lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
              *(undefined8 *)(lVar14 + 0xc0) = *(undefined8 *)(lVar14 + 0x180);
              *(undefined8 *)(lVar14 + 0xb8) = *(undefined8 *)(lVar14 + 0x178);
              *(undefined1 *)(lVar14 + 200) = *(undefined1 *)(lVar14 + 0x82);
              uVar8 = 2;
              func_0x000100029b9c(2,0x12,0,0);
              if ((int)uVar8 != 0) {
                FUN_103187f64();
                func_0x000107c61658((undefined8 *)(lVar14 + 0xb8),&UNK_110618668,uVar8);
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar14 + 8))();
                return;
              }
              func_0x000107c60e78(*(undefined8 *)(lVar14 + 0x178),*(undefined8 *)(lVar14 + 0x180),
                                  *(undefined1 *)(lVar14 + 0x82));
              pcVar22 = FUN_1031956f8;
              puVar12 = (undefined8 *)0x0;
              puVar9 = (undefined8 *)0x0;
            }
            goto LAB_107c615e0;
          }
          uVar10 = 0;
          uVar6 = (ulong)&uStack_350 & 0xefffffffffffffff;
          register0x00000008 = (BADSPACEBASE *)&lStack_360;
        }
        goto FUN_103196cf0;
      }
      pcVar22 = FUN_1031954d0;
    }
    puVar9 = (undefined8 *)0x0;
    puVar12 = *(undefined8 **)(unaff_x19 + 0x130);
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar22,puVar12,puVar9);
  return;
}



/* Entry: 10319457c; end: 10319462f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319457c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x20;
  long lVar15;
  undefined8 *puVar16;
  long unaff_x21;
  long lVar17;
  undefined *puVar18;
  long *unaff_x22;
  long *plVar19;
  long unaff_x23;
  long lVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  ulong unaff_x29;
  code *pcStack_338;
  long lStack_330;
  long *plStack_328;
  ulong uStack_320;
  code *pcStack_318;
  long lStack_308;
  ulong uStack_300;
  long lStack_2f8;
  ulong uStack_2f0;
  code *pcStack_2e8;
  long lStack_2d8;
  long lStack_2d0;
  long *plStack_2c8;
  ulong uStack_2c0;
  code *pcStack_2b8;
  long lStack_2b0;
  long *plStack_2a8;
  ulong uStack_2a0;
  code *pcStack_298;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  ulong uStack_270;
  code *pcStack_268;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  ulong uStack_230;
  code *pcStack_228;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  ulong uStack_200;
  code *pcStack_1f8;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  ulong uStack_1c0;
  code *pcStack_1b8;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  long lStack_198;
  ulong uStack_190;
  code *pcStack_188;
  long lStack_180;
  long *plStack_178;
  ulong uStack_170;
  code *pcStack_168;
  long lStack_158;
  long lStack_150;
  long *plStack_148;
  ulong uStack_140;
  code *pcStack_138;
  long lStack_128;
  ulong *puStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  ulong uStack_f0;
  code *pcStack_e8;
  long lStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  code *pcStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  ulong uStack_40;
  code *pcStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  plVar1 = (long *)auStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *unaff_x22;
  plVar19 = (long *)*unaff_x22;
  *(undefined8 *)(lVar13 + 0x178) = param_1;
  *(undefined8 *)(lVar13 + 0x180) = param_2;
  *(undefined1 *)(lVar13 + 0x82) = param_3;
  *(long *)(lVar13 + 0x188) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x170));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) goto LAB_10319462c;
    pcVar23 = FUN_103194630;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
LAB_10319462c:
      func_0x000107c60e78();
      uStack_40 = (ulong)&uStack_10 | 0x1000000000000000;
      pcStack_38 = FUN_103194630;
      lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar2 = (undefined8 *)0x0;
      func_0x000107c5ede0();
      plVar19[0x32] = (long)puVar2;
      lVar22 = puVar2[-1];
      plVar19[0x33] = lVar22;
      uVar6 = *(long *)(lVar22 + 0x40) + 0xf;
      uVar3 = uVar6 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar19[0x34] = uVar3;
      FUN_103195d00(uVar3);
      puVar18 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar4 = puVar18;
      func_0x000107c5ed90();
      plVar19[0x23] = 0;
      puVar5 = puVar18;
      func_0x000107c4ff50();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar18);
      lVar15 = plVar19[0x23];
      if ((int)puVar5 == 0) {
        lVar17 = lVar15;
        func_0x000107c61174(lVar15);
        func_0x000107c5ed30(lVar15);
        func_0x000107c61170(lVar17);
        func_0x000107c61654();
        func_0x000107c614ac(lVar15);
        lVar17 = 0;
      }
      else {
        lVar17 = plVar19[0x31];
        func_0x000107c61174(lVar15);
      }
      uVar6 = uVar6 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      pcVar23 = *(code **)(lVar22 + 0x10);
      (*pcVar23)();
      if (lRam0000000112f47fe8 != -1) {
        func_0x000107c61568(0x112f47fe8,FUN_103193e4c);
      }
      uVar11 = uRam0000000112f47ff0;
      puVar10 = (ulong *)PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50;
      func_0x000107c610f8();
      func_0x000107c61434(uVar11);
      uVar7 = uVar6;
      func_0x0001010416fc(uVar6,uVar11);
      plVar19[0x35] = uVar7;
      plVar19[0x36] = lVar17;
      func_0x000107c615c0(uVar6);
      if (lVar17 == 0) {
        func_0x000107c61174();
        func_0x000107c53fcc();
        func_0x000107c5668c(uVar7);
        uVar8 = uVar7;
        func_0x000107c4ee28();
        func_0x000107c61170(uVar7);
        if ((uVar8 & 1) == 0) {
          lVar15 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          uVar8 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar19[0x3d] = uVar8;
          (*pcVar23)();
          (**(code **)(lVar22 + 0x38))(uVar8,0,1,puVar2);
          plVar9 = (long *)0x100;
          func_0x000107c615b8();
          plVar19[0x3e] = (long)plVar9;
          pcVar23 = FUN_103195010;
          goto LAB_103194af8;
        }
        if (lRam0000000112f47ff8 != -1) {
          func_0x000107c61568(0x112f47ff8,0x103193e34);
        }
        uVar8 = uVar7;
        func_0x000107c4fa98(uRam0000000112f48000);
        if ((int)uVar8 == 0) {
          lVar15 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          uVar8 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar19[0x3b] = uVar8;
          (*pcVar23)();
          (**(code **)(lVar22 + 0x38))(uVar8,0,1,puVar2);
          plVar9 = (long *)0x100;
          func_0x000107c615b8();
          plVar19[0x3c] = (long)plVar9;
          pcVar23 = FUN_103194e98;
          goto LAB_103194af8;
        }
        uStack_b0 = plVar19[0x2f];
        uVar6 = plVar19[0x29];
        lStack_a8 = plVar19[0x2a];
        lVar15 = plVar19[0x27];
        lStack_a0 = plVar19[0x28];
        lVar13 = plVar19[0x26];
        lVar22 = 8;
        func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
        *(undefined8 *)(lVar22 + 0x10) = 8;
        *(undefined8 *)(lVar22 + 0x28) = 0;
        *(undefined8 *)(lVar22 + 0x20) = 0;
        *(undefined8 *)(lVar22 + 0x38) = 0;
        *(undefined8 *)(lVar22 + 0x30) = 0;
        *(undefined8 *)(lVar22 + 0x48) = 0;
        *(undefined8 *)(lVar22 + 0x40) = 0;
        *(undefined8 *)(lVar22 + 0x58) = 0;
        *(undefined8 *)(lVar22 + 0x50) = 0;
        puVar12 = (undefined8 *)(lVar13 + _DAT_112f47d70);
        func_0x000107c61428(puVar12,plVar19 + 8,1,0);
        uVar11 = puVar12[2];
        *puVar12 = 0;
        puVar12[1] = 0x3fd3333333333333;
        puVar12[2] = lVar22;
        func_0x000107c6142c(uVar11);
        puVar10 = (ulong *)(lVar15 + 0xfU & 0xfffffffffffffff0);
        func_0x000107c615b8();
        (*pcVar23)((long)puVar10 + (long)*(int *)(uVar6 + 0x14),uVar3,puVar2);
        uVar8 = uStack_b0;
        *puVar10 = uVar7;
        *(ulong *)((long)puVar10 + (long)*(int *)(uVar6 + 0x18)) = uStack_b0;
        (**(code **)(lStack_a8 + 0x38))(puVar10,0,1,uVar6);
        lVar15 = lStack_a0;
        func_0x000107c61428(lVar13 + lStack_a0,plVar19 + 0xb,0x21,0);
        func_0x000107c61174(uVar7);
        func_0x000107c61174(uVar8);
        func_0x000103187ec0(puVar10,lVar13 + lVar15);
        func_0x000107c614a8(plVar19 + 0xb);
        func_0x000107c615c0(puVar10);
        lVar13 = lVar13 + _DAT_113806f10;
        func_0x000107c61618();
        plVar19[0x39] = lVar13;
        if (lVar13 == 0) {
          puVar2 = (undefined8 *)plVar19[0x2f];
          func_0x000107c61170(uVar7);
          func_0x000107c61170(puVar2);
          lVar13 = plVar19[0x34];
          (**(code **)(plVar19[0x33] + 8))(lVar13,plVar19[0x32]);
          func_0x000107c615c0(lVar13);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x000103194bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)plVar19[1])();
            return;
          }
        }
        else {
          puVar2 = (undefined8 *)0x0;
          func_0x000107c5fcec();
          puVar12 = puVar2;
          func_0x000107c5fce8();
          plVar19[0x3a] = (long)puVar12;
          func_0x000100eea164();
          puVar16 = puVar2;
          func_0x000107c5fca8(puVar2,puVar12);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
            pcVar23 = FUN_103194d90;
            goto LAB_107c615e0;
          }
        }
LAB_103194be8:
        func_0x000107c60e78();
        uStack_c0 = (ulong)&uStack_40 | 0x1000000000000000;
        pcStack_b8 = FUN_103194bec;
        lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_c8 = *plVar19;
        uVar11 = *(undefined8 *)(lStack_c8 + 0x1b8);
        puVar16 = *(undefined8 **)(lStack_c8 + 0x130);
        plVar19 = (long *)*plVar19;
        puStack_d0 = puVar2;
        func_0x000107c615c0(*(undefined8 *)(lStack_c8 + 0x1c0));
        func_0x0001000293e4(uVar11);
        func_0x000107c615c0(uVar11);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
          pcVar23 = FUN_103194c7c;
          puVar12 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_f0 = (ulong)&uStack_c0 | 0x1000000000000000;
        pcStack_e8 = FUN_103194c7c;
        lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_120 = puVar10;
        uStack_118 = uVar6;
        uStack_110 = uVar3;
        uStack_108 = uVar8;
        uStack_100 = uVar11;
        plStack_f8 = plVar19;
        func_0x000107c614cc(plVar19[0x36],plVar19 + 0x24,plVar19 + 5);
        lVar13 = plVar19[6];
        lVar15 = plVar19[7];
        func_0x000107c60640();
        plVar19[0x1a] = lVar13;
        plVar19[0x1b] = lVar15;
        *(undefined1 *)(plVar19 + 0x1c) = 1;
        uVar11 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar11 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar19 + 0x1a,&UNK_110618668,uVar11);
        }
        lVar22 = plVar19[0x33];
        lVar17 = plVar19[0x34];
        lVar20 = plVar19[0x32];
        lVar21 = plVar19[0x2f];
        func_0x000107c614ac(plVar19[0x36]);
        func_0x000107c61170(lVar21);
        (**(code **)(lVar22 + 8))(lVar17,lVar20);
        func_0x000107c615c0(lVar17);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
                    /* WARNING: Could not recover jumptable at 0x000103194d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar19[1])(lVar13,lVar15,1);
          return;
        }
        func_0x000107c60e78();
        uStack_140 = (ulong)&uStack_f0 | 0x1000000000000000;
        pcStack_138 = FUN_103194d90;
        lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar13 = plVar19[0x39];
        puVar2 = (undefined8 *)plVar19[0x26];
        lStack_150 = lVar15;
        plStack_148 = plVar19;
        func_0x000107c61574(plVar19[0x3a]);
        FUN_103184874();
        func_0x000107c615e8(lVar13);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
          pcVar23 = FUN_103194e10;
          puVar12 = (undefined8 *)0x0;
          puVar16 = puVar2;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_170 = (ulong)&uStack_140 | 0x1000000000000000;
        pcStack_168 = FUN_103194e10;
        lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar13 = plVar19[0x2f];
        plStack_178 = plVar19;
        func_0x000107c61170(plVar19[0x35]);
        func_0x000107c61170(lVar13);
        lVar13 = plVar19[0x34];
        (**(code **)(plVar19[0x33] + 8))(lVar13,plVar19[0x32]);
        func_0x000107c615c0(lVar13);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
                    /* WARNING: Could not recover jumptable at 0x000103194e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar19[1])();
          return;
        }
        func_0x000107c60e78();
        uStack_190 = (ulong)&uStack_170 | 0x1000000000000000;
        pcStack_188 = FUN_103194e98;
        lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_198 = *plVar19;
        uVar11 = *(undefined8 *)(lStack_198 + 0x1d8);
        puVar16 = *(undefined8 **)(lStack_198 + 0x130);
        plVar19 = (long *)*plVar19;
        puStack_1a0 = puVar2;
        func_0x000107c615c0(*(undefined8 *)(lStack_198 + 0x1e0));
        func_0x0001000293e4(uVar11);
        func_0x000107c615c0(uVar11);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
          pcVar23 = FUN_103194f28;
          puVar12 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_1c0 = (ulong)&uStack_190 | 0x1000000000000000;
        pcStack_1b8 = FUN_103194f28;
        lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar19[0x21] = 0;
        plVar19[0x20] = 6;
        *(undefined1 *)(plVar19 + 0x22) = 4;
        uVar14 = 2;
        lStack_1e0 = lVar20;
        lStack_1d8 = lVar17;
        uStack_1d0 = uVar11;
        plStack_1c8 = plVar19;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar14 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar19 + 0x20,&UNK_110618668,uVar14);
        }
        lVar13 = plVar19[0x34];
        lVar15 = plVar19[0x32];
        lVar22 = plVar19[0x33];
        lVar17 = plVar19[0x2f];
        func_0x000107c61170(plVar19[0x35]);
        func_0x000107c61170(lVar17);
        (**(code **)(lVar22 + 8))(lVar13,lVar15);
        func_0x000107c615c0(lVar13);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
                    /* WARNING: Could not recover jumptable at 0x000103195008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar19[1])(6,0,4);
          return;
        }
        func_0x000107c60e78();
        uStack_200 = (ulong)&uStack_1c0 | 0x1000000000000000;
        pcStack_1f8 = FUN_103195010;
        lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_208 = *plVar19;
        uVar11 = *(undefined8 *)(lStack_208 + 0x1e8);
        puVar16 = *(undefined8 **)(lStack_208 + 0x130);
        plVar19 = (long *)*plVar19;
        lStack_210 = lVar15;
        func_0x000107c615c0(*(undefined8 *)(lStack_208 + 0x1f0));
        func_0x0001000293e4(uVar11);
        func_0x000107c615c0(uVar11);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
          pcVar23 = FUN_1031950a0;
          puVar12 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_230 = (ulong)&uStack_200 | 0x1000000000000000;
        pcStack_228 = FUN_1031950a0;
        lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar19[0x1e] = 0;
        plVar19[0x1d] = 5;
        *(undefined1 *)(plVar19 + 0x1f) = 4;
        uVar14 = 2;
        lStack_250 = lVar22;
        lStack_248 = lVar17;
        uStack_240 = uVar11;
        plStack_238 = plVar19;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar14 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar19 + 0x1d,&UNK_110618668,uVar14);
        }
        lVar13 = plVar19[0x34];
        lVar15 = plVar19[0x32];
        unaff_x23 = plVar19[0x33];
        unaff_x21 = plVar19[0x2f];
        func_0x000107c61170(plVar19[0x35]);
        func_0x000107c61170(unaff_x21);
        (**(code **)(unaff_x23 + 8))(lVar13,lVar15);
        func_0x000107c615c0(lVar13);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
                    /* WARNING: Could not recover jumptable at 0x000103195184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar19[1])(5,0,4);
          return;
        }
        func_0x000107c60e78();
        uStack_270 = (ulong)&uStack_230 | 0x1000000000000000;
        pcStack_268 = FUN_10319518c;
        lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_278 = *plVar19;
        lVar13 = *(long *)(lStack_278 + 0x1f8);
        puVar16 = *(undefined8 **)(lStack_278 + 0x130);
        plVar19 = (long *)*plVar19;
        lStack_280 = lVar15;
        func_0x000107c615c0(*(undefined8 *)(lStack_278 + 0x200));
        func_0x0001000293e4(lVar13);
        func_0x000107c615c0(lVar13);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
          pcVar23 = FUN_10319521c;
          puVar12 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_2a0 = (ulong)&uStack_270 | 0x1000000000000000;
        plVar1 = &lStack_2b0;
        pcStack_298 = FUN_10319521c;
        lStack_2b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar19[0x14] = 0;
        plVar19[0x15] = 0;
        *(undefined1 *)(plVar19 + 0x16) = 4;
        uVar11 = 2;
        plStack_2a8 = plVar19;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar11 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar19 + 0x14,&UNK_110618668,uVar11);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b0) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar19[1])(0,0,4);
          return;
        }
        func_0x000107c60e78();
        uStack_2c0 = (ulong)&uStack_2a0 | 0x1000000000000000;
        pcStack_2b8 = FUN_1031952c0;
        lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar15 = 0x112d36580;
        lStack_2d0 = lVar13;
        plStack_2c8 = plVar19;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar8 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar19[0x41] = uVar8;
        lVar13 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar13 + -8) + 0x38))(uVar8,1,1,lVar13);
        plVar9 = (long *)0x100;
        func_0x000107c615b8();
        plVar19[0x42] = (long)plVar9;
        *plVar9 = (long)plVar19;
        plVar9[1] = (long)FUN_103195398;
        puVar16 = (undefined8 *)plVar19[0x26];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
          lVar15 = 0;
          uVar6 = uStack_2c0 & 0xefffffffffffffff;
          lVar13 = lStack_2d0;
          pcStack_338 = pcStack_2b8;
        }
        else {
          func_0x000107c60e78();
          uStack_2f0 = (ulong)&uStack_2c0 | 0x1000000000000000;
          pcStack_2e8 = FUN_103195398;
          lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lStack_2f8 = *plVar19;
          lVar13 = *(long *)(lStack_2f8 + 0x208);
          puVar16 = *(undefined8 **)(lStack_2f8 + 0x130);
          plVar19 = (long *)*plVar19;
          uStack_300 = uVar8;
          func_0x000107c615c0(*(undefined8 *)(lStack_2f8 + 0x210));
          func_0x0001000293e4(lVar13);
          func_0x000107c615c0(lVar13);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
            pcVar23 = FUN_10319542c;
            puVar12 = (undefined8 *)0x0;
            goto LAB_107c615e0;
          }
          func_0x000107c60e78();
          uStack_320 = (ulong)&uStack_2f0 | 0x1000000000000000;
          plVar1 = &lStack_330;
          pcStack_318 = FUN_10319542c;
          lStack_330 = *(long *)PTR____stack_chk_guard_11034bdc0;
          plVar19[0x12] = plVar19[0x2d];
          plVar19[0x11] = plVar19[0x2c];
          *(undefined1 *)(plVar19 + 0x13) = *(undefined1 *)((long)plVar19 + 0x81);
          uVar11 = 2;
          plStack_328 = plVar19;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar11 != 0) {
            FUN_103187f64();
            func_0x000107c61658(plVar19 + 0x11,&UNK_110618668,uVar11);
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_330) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)plVar19[1])();
            return;
          }
          func_0x000107c60e78(plVar19[0x2c],plVar19[0x2d],*(undefined1 *)((long)plVar19 + 0x81));
          pcStack_338 = FUN_1031954d0;
          lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar15 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          uVar8 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar19[0x43] = uVar8;
          lVar15 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar15 + -8) + 0x38))(uVar8,1,1,lVar15);
          plVar9 = (long *)0x100;
          func_0x000107c615b8();
          plVar19[0x44] = (long)plVar9;
          *plVar9 = (long)plVar19;
          plVar9[1] = (long)FUN_1031955a8;
          puVar16 = (undefined8 *)plVar19[0x26];
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar22) {
            func_0x000107c60e78();
            lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar15 = *plVar19;
            uVar11 = *(undefined8 *)(lVar15 + 0x218);
            puVar16 = *(undefined8 **)(lVar15 + 0x130);
            lVar22 = *plVar19;
            func_0x000107c615c0(*(undefined8 *)(lVar15 + 0x220));
            func_0x0001000293e4(uVar11);
            func_0x000107c615c0(uVar11);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
              pcVar23 = FUN_10319563c;
              puVar12 = (undefined8 *)0x0;
            }
            else {
              func_0x000107c60e78();
              lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
              *(undefined8 *)(lVar22 + 0xc0) = *(undefined8 *)(lVar22 + 0x180);
              *(undefined8 *)(lVar22 + 0xb8) = *(undefined8 *)(lVar22 + 0x178);
              *(undefined1 *)(lVar22 + 200) = *(undefined1 *)(lVar22 + 0x82);
              uVar11 = 2;
              func_0x000100029b9c(2,0x12,0,0);
              if ((int)uVar11 != 0) {
                FUN_103187f64();
                func_0x000107c61658((undefined8 *)(lVar22 + 0xb8),&UNK_110618668,uVar11);
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar22 + 8))();
                return;
              }
              func_0x000107c60e78(*(undefined8 *)(lVar22 + 0x178),*(undefined8 *)(lVar22 + 0x180),
                                  *(undefined1 *)(lVar22 + 0x82));
              pcVar23 = FUN_1031956f8;
              puVar16 = (undefined8 *)0x0;
              puVar12 = (undefined8 *)0x0;
            }
            goto LAB_107c615e0;
          }
          lVar15 = 0;
          uVar6 = (ulong)&uStack_320 & 0xefffffffffffffff;
        }
      }
      else {
        lVar15 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar8 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar19[0x37] = uVar8;
        (*pcVar23)();
        (**(code **)(lVar22 + 0x38))(uVar8,0,1,puVar2);
        plVar9 = (long *)0x100;
        func_0x000107c615b8();
        plVar19[0x38] = (long)plVar9;
        pcVar23 = FUN_103194bec;
LAB_103194af8:
        *plVar9 = (long)plVar19;
        plVar9[1] = (long)pcVar23;
        lVar15 = plVar19[0x2f];
        puVar16 = (undefined8 *)plVar19[0x26];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) goto LAB_103194be8;
        uVar6 = uStack_40 & 0xefffffffffffffff;
        pcStack_338 = pcStack_38;
      }
      *(ulong *)((long)plVar1 + -0x10) = uVar6 | 0x1000000000000000;
      *(code **)((long)plVar1 + -8) = pcStack_338;
      *(long **)((long)plVar1 + -0x18) = plVar9;
      *(undefined8 *)((long)plVar1 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      plVar9[0x15] = uVar8;
      plVar9[0x16] = (long)puVar16;
      plVar9[0x14] = lVar15;
      lVar15 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar6 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar9[0x17] = uVar6;
      lVar15 = 0;
      func_0x000107c5ede0();
      plVar9[0x18] = lVar15;
      lVar15 = *(long *)(lVar15 + -8);
      plVar9[0x19] = lVar15;
      uVar6 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar9[0x1a] = uVar6;
      lVar15 = 0;
      FUN_103197644();
      uVar6 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar9[0x1b] = uVar6;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x20)) {
        pcVar23 = FUN_103196dcc;
        puVar12 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c60e78();
        *(long *)((long)plVar1 + -0x50) = unaff_x23;
        *(long *)((long)plVar1 + -0x48) = unaff_x21;
        *(long *)((long)plVar1 + -0x40) = lVar13;
        *(ulong *)((long)plVar1 + -0x30) = (ulong)((long)plVar1 + -0x10) | 0x1000000000000000;
        *(code **)((long)plVar1 + -0x28) = FUN_103196dcc;
        *(long **)((long)plVar1 + -0x38) = plVar9;
        *(undefined8 *)((long)plVar1 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        lVar22 = plVar9[0x1b];
        lVar15 = plVar9[0x16];
        puVar18 = (undefined *)plVar9[0x14];
        lVar13 = 0;
        FUN_103197894();
        (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar22,1,1,lVar13);
        lVar13 = _DAT_112f47d68;
        func_0x000107c61428(lVar15 + _DAT_112f47d68,plVar9 + 10,0x21,0);
        func_0x000103187ec0(lVar22,lVar15 + lVar13);
        func_0x000107c614a8(plVar9 + 10);
        lVar13 = 8;
        func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
        *(undefined8 *)(lVar13 + 0x10) = 8;
        *(undefined8 *)(lVar13 + 0x28) = 0;
        *(undefined8 *)(lVar13 + 0x20) = 0;
        *(undefined8 *)(lVar13 + 0x38) = 0;
        *(undefined8 *)(lVar13 + 0x30) = 0;
        *(undefined8 *)(lVar13 + 0x48) = 0;
        *(undefined8 *)(lVar13 + 0x40) = 0;
        *(undefined8 *)(lVar13 + 0x58) = 0;
        *(undefined8 *)(lVar13 + 0x50) = 0;
        puVar2 = (undefined8 *)(lVar15 + _DAT_112f47d70);
        func_0x000107c61428(puVar2,plVar9 + 0xd,1,0);
        uVar11 = puVar2[2];
        *puVar2 = 0;
        puVar2[1] = 0x3fd3333333333333;
        puVar2[2] = lVar13;
        func_0x000107c6142c(uVar11);
        if (puVar18 == (undefined *)0x0) {
          lVar13 = plVar9[0x18];
          puVar18 = (undefined *)plVar9[0x19];
          lVar15 = plVar9[0x17];
          FUN_103198594(plVar9[0x15],lVar15,0x112d36580,&UNK_10d9016d0);
          (**(code **)(puVar18 + 0x30))(lVar15,1,lVar13);
          if ((int)lVar15 == 1) {
            func_0x0001000293e4(plVar9[0x17]);
          }
          else {
            (**(code **)(plVar9[0x19] + 0x20))(plVar9[0x1a],plVar9[0x17],plVar9[0x18]);
            puVar18 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x000107c61168();
            func_0x000107c415e0();
            func_0x000107c61180();
            puVar4 = puVar18;
            func_0x000107c5ed90();
            plVar9[0x13] = 0;
            puVar5 = puVar18;
            func_0x000107c4ff50();
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar18);
            puVar18 = (undefined *)plVar9[0x13];
            if ((int)puVar5 == 0) {
              puVar4 = puVar18;
              func_0x000107c61174(puVar18);
              func_0x000107c5ed30();
              func_0x000107c61170(puVar4);
              func_0x000107c61654();
              func_0x000107c614ac(puVar18);
            }
            else {
              func_0x000107c61174(puVar18);
              puVar18 = puVar5;
            }
            (**(code **)(plVar9[0x19] + 8))(plVar9[0x1a],plVar9[0x18]);
          }
          lVar13 = plVar9[0x16] + _DAT_113806f10;
          func_0x000107c61618();
          plVar9[0x1d] = lVar13;
          if (lVar13 == 0) {
            lVar13 = plVar9[0x1a];
            puVar2 = (undefined8 *)plVar9[0x17];
            func_0x000107c615c0(plVar9[0x1b]);
            func_0x000107c615c0(lVar13);
            func_0x000107c615c0(puVar2);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x58)) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)plVar9[1])();
              return;
            }
          }
          else {
            puVar2 = (undefined8 *)0x0;
            func_0x000107c5fcec();
            puVar12 = puVar2;
            func_0x000107c5fce8();
            plVar9[0x1e] = (long)puVar12;
            func_0x000100eea164();
            puVar16 = puVar2;
            func_0x000107c5fca8(puVar2,puVar12);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x58)) {
              pcVar23 = FUN_103197450;
              goto LAB_107c615e0;
            }
          }
        }
        else {
          plVar9[0x1c] = *(long *)(plVar9[0x16] + 0x70);
          func_0x000107c61174(plVar9[0x14]);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x58)) {
            pcVar23 = FUN_1031970e0;
            puVar16 = (undefined8 *)0x0;
            puVar12 = (undefined8 *)0x0;
            goto LAB_107c615e0;
          }
        }
        func_0x000107c60e78();
        *(undefined8 **)((long)plVar1 + -0x80) = puVar2;
        *(ulong *)((long)plVar1 + -0x70) = (ulong)((long)plVar1 + -0x30) | 0x1000000000000000;
        *(code **)((long)plVar1 + -0x68) = FUN_1031970e0;
        *(long **)((long)plVar1 + -0x78) = plVar9;
        *(undefined8 *)((long)plVar1 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        lVar13 = plVar9[0x14];
        plVar9[2] = (long)plVar9;
        plVar9[3] = (long)FUN_103197168;
        func_0x000107c61448(plVar9 + 2,0);
        func_0x0001031982f4();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(plVar9 + 2);
          return;
        }
        func_0x000107c60e78();
        *(ulong *)((long)plVar1 + -0xa0) = (ulong)((long)plVar1 + -0x70) | 0x1000000000000000;
        *(code **)((long)plVar1 + -0x98) = FUN_103197168;
        *(long **)((long)plVar1 + -0xa8) = plVar9;
        *(undefined8 *)((long)plVar1 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        *(long *)((long)plVar1 + -0xa8) = *plVar9;
        lVar15 = *plVar9;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0xb0)) {
          pcVar23 = (code *)0x1031971d4;
          puVar12 = (undefined8 *)0x0;
          puVar16 = (undefined8 *)0x0;
        }
        else {
          func_0x000107c60e78();
          *(ulong *)((long)plVar1 + -0xc0) = (ulong)((long)plVar1 + -0xa0) | 0x1000000000000000;
          *(undefined8 *)((long)plVar1 + -0xb8) = 0x1031971d4;
          *(long *)((long)plVar1 + -200) = lVar15;
          *(undefined8 *)((long)plVar1 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar1 + -0xd0)) {
            func_0x000107c60e78();
            *(undefined8 *)((long)plVar1 + -0x100) = 8;
            *(undefined **)((long)plVar1 + -0xf8) = puVar18;
            *(long *)((long)plVar1 + -0xf0) = lVar13;
            *(ulong *)((long)plVar1 + -0xe0) = (ulong)((long)plVar1 + -0xc0) | 0x1000000000000000;
            *(code **)((long)plVar1 + -0xd8) = FUN_103197234;
            *(long *)((long)plVar1 + -0xe8) = lVar15;
            *(undefined8 *)((long)plVar1 + -0x108) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
            ;
            func_0x000107c61170(*(undefined8 *)(lVar15 + 0xa0));
            uVar11 = *(undefined8 *)(lVar15 + 0xc0);
            lVar13 = *(long *)(lVar15 + 200);
            uVar14 = *(undefined8 *)(lVar15 + 0xb8);
            FUN_103198594(*(undefined8 *)(lVar15 + 0xa8),uVar14,0x112d36580,&UNK_10d9016d0);
            (**(code **)(lVar13 + 0x30))(uVar14,1,uVar11);
            if ((int)uVar14 == 1) {
              func_0x0001000293e4(*(undefined8 *)(lVar15 + 0xb8));
            }
            else {
              (**(code **)(*(long *)(lVar15 + 200) + 0x20))
                        (*(undefined8 *)(lVar15 + 0xd0),*(undefined8 *)(lVar15 + 0xb8),
                         *(undefined8 *)(lVar15 + 0xc0));
              puVar18 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
              func_0x000107c61168();
              func_0x000107c415e0();
              func_0x000107c61180();
              puVar4 = puVar18;
              func_0x000107c5ed90();
              *(undefined8 *)(lVar15 + 0x98) = 0;
              puVar5 = puVar18;
              func_0x000107c4ff50();
              func_0x000107c61170(puVar4);
              func_0x000107c61170(puVar18);
              uVar11 = *(undefined8 *)(lVar15 + 0x98);
              if ((int)puVar5 == 0) {
                uVar14 = uVar11;
                func_0x000107c61174(uVar11);
                func_0x000107c5ed30(uVar11);
                func_0x000107c61170(uVar14);
                func_0x000107c61654();
                func_0x000107c614ac(uVar11);
              }
              else {
                func_0x000107c61174(uVar11);
              }
              (**(code **)(*(long *)(lVar15 + 200) + 8))
                        (*(undefined8 *)(lVar15 + 0xd0),*(undefined8 *)(lVar15 + 0xc0));
            }
            lVar13 = *(long *)(lVar15 + 0xb0) + _DAT_113806f10;
            func_0x000107c61618();
            *(long *)(lVar15 + 0xe8) = lVar13;
            if (lVar13 == 0) {
              uVar11 = *(undefined8 *)(lVar15 + 0xd0);
              puVar2 = *(undefined8 **)(lVar15 + 0xb8);
              func_0x000107c615c0(*(undefined8 *)(lVar15 + 0xd8));
              func_0x000107c615c0(uVar11);
              func_0x000107c615c0(puVar2);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x108)) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar15 + 8))();
                return;
              }
            }
            else {
              puVar2 = (undefined8 *)0x0;
              func_0x000107c5fcec();
              puVar12 = puVar2;
              func_0x000107c5fce8();
              *(undefined8 **)(lVar15 + 0xf0) = puVar12;
              func_0x000100eea164();
              puVar16 = puVar2;
              func_0x000107c5fca8(puVar2,puVar12);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x108)) {
                pcVar23 = FUN_103197450;
                goto LAB_107c615e0;
              }
            }
            func_0x000107c60e78();
            *(undefined8 **)((long)plVar1 + -0x130) = puVar2;
            *(ulong *)((long)plVar1 + -0x120) = (ulong)((long)plVar1 + -0xe0) | 0x1000000000000000;
            *(code **)((long)plVar1 + -0x118) = FUN_103197450;
            *(long *)((long)plVar1 + -0x128) = lVar15;
            *(undefined8 *)((long)plVar1 + -0x138) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
            ;
            lVar13 = *(long *)(lVar15 + 0xe8);
            func_0x000107c61574(*(undefined8 *)(lVar15 + 0xf0));
            lVar22 = _DAT_112f476d0;
            func_0x000107c61428(lVar13 + _DAT_112f476d0,lVar15 + 0x80,0,0);
            lVar13 = lVar13 + lVar22;
            func_0x000107c61618();
            if (lVar13 != 0) {
              func_0x000107c3e3e0();
              func_0x000107c615e8(lVar13);
            }
            func_0x000107c615e8(*(undefined8 *)(lVar15 + 0xe8));
            lVar13 = *(long *)(lVar15 + 0xd0);
            uVar11 = *(undefined8 *)(lVar15 + 0xb8);
            func_0x000107c615c0(*(undefined8 *)(lVar15 + 0xd8));
            func_0x000107c615c0(lVar13);
            func_0x000107c615c0(uVar11);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar1 + -0x138)) {
              func_0x000107c60e78();
              *(undefined1 **)((long)plVar1 + -0x150) = (undefined1 *)((long)plVar1 + -0x120);
              *(code **)((long)plVar1 + -0x148) = FUN_10319751c;
              func_0x000107c615e8(*(undefined8 *)(lVar13 + 0x70));
              func_0x000107c61170(*(undefined8 *)(lVar13 + 0x78));
              FUN_103198414(lVar13 + _DAT_112f47d68,FUN_103197644);
              func_0x000107c6142c(*(undefined8 *)(lVar13 + _DAT_112f47d70 + 0x10));
              FUN_1031985fc(lVar13 + _DAT_113806f10);
              func_0x000107c61470(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar13);
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar15 + 8))();
            return;
          }
          pcVar23 = FUN_103197234;
          puVar12 = (undefined8 *)0x0;
          puVar16 = *(undefined8 **)(lVar15 + 0xb0);
        }
      }
      goto LAB_107c615e0;
    }
    pcVar23 = FUN_1031954d0;
  }
  puVar12 = (undefined8 *)0x0;
  puVar16 = *(undefined8 **)(lVar13 + 0x130);
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar23,puVar16,puVar12);
  return;
}



/* Entry: 103194630; end: 103194beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103194630(void)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 unaff_x19;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long unaff_x21;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long *unaff_x22;
  long *plVar19;
  long unaff_x23;
  long lVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  ulong unaff_x29;
  code *unaff_x30;
  code *pcStack_308;
  long lStack_300;
  long *plStack_2f8;
  ulong uStack_2f0;
  code *pcStack_2e8;
  long lStack_2d8;
  ulong uStack_2d0;
  long lStack_2c8;
  ulong uStack_2c0;
  code *pcStack_2b8;
  long lStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  ulong uStack_290;
  code *pcStack_288;
  long lStack_280;
  long *plStack_278;
  ulong uStack_270;
  code *pcStack_268;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  ulong uStack_240;
  code *pcStack_238;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  ulong uStack_200;
  code *pcStack_1f8;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  code *pcStack_1c8;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  ulong uStack_190;
  code *pcStack_188;
  long lStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  ulong uStack_160;
  code *pcStack_158;
  long lStack_150;
  long *plStack_148;
  ulong uStack_140;
  code *pcStack_138;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  ulong uStack_110;
  code *pcStack_108;
  long lStack_f8;
  ulong *puStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  undefined8 *puStack_a0;
  ulong uStack_90;
  code *pcStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_60;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_60 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)0x0;
  func_0x000107c5ede0();
  unaff_x22[0x32] = (long)puVar2;
  lVar22 = puVar2[-1];
  unaff_x22[0x33] = lVar22;
  uVar6 = *(long *)(lVar22 + 0x40) + 0xf;
  uVar3 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x34] = uVar3;
  FUN_103195d00(uVar3);
  puVar18 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar4 = puVar18;
  func_0x000107c5ed90();
  unaff_x22[0x23] = 0;
  puVar5 = puVar18;
  func_0x000107c4ff50();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar18);
  lVar14 = unaff_x22[0x23];
  if ((int)puVar5 == 0) {
    lVar16 = lVar14;
    func_0x000107c61174(lVar14);
    func_0x000107c5ed30(lVar14);
    func_0x000107c61170(lVar16);
    func_0x000107c61654();
    func_0x000107c614ac(lVar14);
    lVar16 = 0;
  }
  else {
    lVar16 = unaff_x22[0x31];
    func_0x000107c61174(lVar14);
  }
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  pcVar23 = *(code **)(lVar22 + 0x10);
  (*pcVar23)();
  if (lRam0000000112f47fe8 != -1) {
    func_0x000107c61568(0x112f47fe8,FUN_103193e4c);
  }
  uVar11 = uRam0000000112f47ff0;
  puVar10 = (ulong *)PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50;
  func_0x000107c610f8();
  func_0x000107c61434(uVar11);
  uVar7 = uVar6;
  func_0x0001010416fc(uVar6,uVar11);
  unaff_x22[0x35] = uVar7;
  unaff_x22[0x36] = lVar16;
  func_0x000107c615c0(uVar6);
  if (lVar16 == 0) {
    func_0x000107c61174();
    func_0x000107c53fcc();
    func_0x000107c5668c(uVar7);
    uVar8 = uVar7;
    func_0x000107c4ee28();
    func_0x000107c61170(uVar7);
    if ((uVar8 & 1) == 0) {
      lVar14 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar8 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      unaff_x22[0x3d] = uVar8;
      (*pcVar23)();
      (**(code **)(lVar22 + 0x38))(uVar8,0,1,puVar2);
      plVar9 = (long *)0x100;
      func_0x000107c615b8();
      unaff_x22[0x3e] = (long)plVar9;
      pcVar23 = FUN_103195010;
      goto LAB_103194af8;
    }
    if (lRam0000000112f47ff8 != -1) {
      func_0x000107c61568(0x112f47ff8,0x103193e34);
    }
    uVar8 = uVar7;
    func_0x000107c4fa98(uRam0000000112f48000);
    if ((int)uVar8 == 0) {
      lVar14 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar8 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      unaff_x22[0x3b] = uVar8;
      (*pcVar23)();
      (**(code **)(lVar22 + 0x38))(uVar8,0,1,puVar2);
      plVar9 = (long *)0x100;
      func_0x000107c615b8();
      unaff_x22[0x3c] = (long)plVar9;
      pcVar23 = FUN_103194e98;
      goto LAB_103194af8;
    }
    uStack_80 = unaff_x22[0x2f];
    uVar6 = unaff_x22[0x29];
    lStack_78 = unaff_x22[0x2a];
    lVar22 = unaff_x22[0x27];
    lStack_70 = unaff_x22[0x28];
    lVar14 = unaff_x22[0x26];
    lVar16 = 8;
    func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
    *(undefined8 *)(lVar16 + 0x10) = 8;
    *(undefined8 *)(lVar16 + 0x28) = 0;
    *(undefined8 *)(lVar16 + 0x20) = 0;
    *(undefined8 *)(lVar16 + 0x38) = 0;
    *(undefined8 *)(lVar16 + 0x30) = 0;
    *(undefined8 *)(lVar16 + 0x48) = 0;
    *(undefined8 *)(lVar16 + 0x40) = 0;
    *(undefined8 *)(lVar16 + 0x58) = 0;
    *(undefined8 *)(lVar16 + 0x50) = 0;
    puVar12 = (undefined8 *)(lVar14 + _DAT_112f47d70);
    func_0x000107c61428(puVar12,unaff_x22 + 8,1,0);
    uVar11 = puVar12[2];
    *puVar12 = 0;
    puVar12[1] = 0x3fd3333333333333;
    puVar12[2] = lVar16;
    func_0x000107c6142c(uVar11);
    puVar10 = (ulong *)(lVar22 + 0xfU & 0xfffffffffffffff0);
    func_0x000107c615b8();
    (*pcVar23)((long)puVar10 + (long)*(int *)(uVar6 + 0x14),uVar3,puVar2);
    uVar8 = uStack_80;
    *puVar10 = uVar7;
    *(ulong *)((long)puVar10 + (long)*(int *)(uVar6 + 0x18)) = uStack_80;
    (**(code **)(lStack_78 + 0x38))(puVar10,0,1,uVar6);
    lVar22 = lStack_70;
    func_0x000107c61428(lVar14 + lStack_70,unaff_x22 + 0xb,0x21,0);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar8);
    func_0x000103187ec0(puVar10,lVar14 + lVar22);
    func_0x000107c614a8(unaff_x22 + 0xb);
    func_0x000107c615c0(puVar10);
    lVar14 = lVar14 + _DAT_113806f10;
    func_0x000107c61618();
    unaff_x22[0x39] = lVar14;
    if (lVar14 == 0) {
      puVar2 = (undefined8 *)unaff_x22[0x2f];
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar2);
      lVar14 = unaff_x22[0x34];
      (**(code **)(unaff_x22[0x33] + 8))(lVar14,unaff_x22[0x32]);
      func_0x000107c615c0(lVar14);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
                    /* WARNING: Could not recover jumptable at 0x000103194bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)unaff_x22[1])();
        return;
      }
    }
    else {
      puVar2 = (undefined8 *)0x0;
      func_0x000107c5fcec();
      puVar12 = puVar2;
      func_0x000107c5fce8();
      unaff_x22[0x3a] = (long)puVar12;
      func_0x000100eea164();
      puVar15 = puVar2;
      func_0x000107c5fca8(puVar2,puVar12);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
        pcVar23 = FUN_103194d90;
        goto LAB_107c615e0;
      }
    }
LAB_103194be8:
    func_0x000107c60e78();
    uStack_90 = (ulong)&uStack_10 | 0x1000000000000000;
    pcStack_88 = FUN_103194bec;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = *unaff_x22;
    uVar11 = *(undefined8 *)(lVar14 + 0x1b8);
    puVar15 = *(undefined8 **)(lVar14 + 0x130);
    plVar19 = (long *)*unaff_x22;
    puStack_a0 = puVar2;
    func_0x000107c615c0(*(undefined8 *)(lVar14 + 0x1c0));
    func_0x0001000293e4(uVar11);
    func_0x000107c615c0(uVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
      pcVar23 = FUN_103194c7c;
      puVar12 = (undefined8 *)0x0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    uStack_c0 = (ulong)&uStack_90 | 0x1000000000000000;
    pcStack_b8 = FUN_103194c7c;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_f0 = puVar10;
    uStack_e8 = uVar6;
    uStack_e0 = uVar3;
    uStack_d8 = uVar8;
    uStack_d0 = uVar11;
    plStack_c8 = plVar19;
    func_0x000107c614cc(plVar19[0x36],plVar19 + 0x24,plVar19 + 5);
    lVar14 = plVar19[6];
    lVar22 = plVar19[7];
    func_0x000107c60640();
    plVar19[0x1a] = lVar14;
    plVar19[0x1b] = lVar22;
    *(undefined1 *)(plVar19 + 0x1c) = 1;
    uVar11 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar11 != 0) {
      FUN_103187f64();
      func_0x000107c61658(plVar19 + 0x1a,&UNK_110618668,uVar11);
    }
    lVar16 = plVar19[0x33];
    lVar17 = plVar19[0x34];
    lVar20 = plVar19[0x32];
    lVar21 = plVar19[0x2f];
    func_0x000107c614ac(plVar19[0x36]);
    func_0x000107c61170(lVar21);
    (**(code **)(lVar16 + 8))(lVar17,lVar20);
    func_0x000107c615c0(lVar17);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
                    /* WARNING: Could not recover jumptable at 0x000103194d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar19[1])(lVar14,lVar22,1);
      return;
    }
    func_0x000107c60e78();
    uStack_110 = (ulong)&uStack_c0 | 0x1000000000000000;
    pcStack_108 = FUN_103194d90;
    lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = plVar19[0x39];
    puVar2 = (undefined8 *)plVar19[0x26];
    lStack_120 = lVar22;
    plStack_118 = plVar19;
    func_0x000107c61574(plVar19[0x3a]);
    FUN_103184874();
    func_0x000107c615e8(lVar14);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
      pcVar23 = FUN_103194e10;
      puVar12 = (undefined8 *)0x0;
      puVar15 = puVar2;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    uStack_140 = (ulong)&uStack_110 | 0x1000000000000000;
    pcStack_138 = FUN_103194e10;
    lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = plVar19[0x2f];
    plStack_148 = plVar19;
    func_0x000107c61170(plVar19[0x35]);
    func_0x000107c61170(lVar14);
    lVar14 = plVar19[0x34];
    (**(code **)(plVar19[0x33] + 8))(lVar14,plVar19[0x32]);
    func_0x000107c615c0(lVar14);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
                    /* WARNING: Could not recover jumptable at 0x000103194e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar19[1])();
      return;
    }
    func_0x000107c60e78();
    uStack_160 = (ulong)&uStack_140 | 0x1000000000000000;
    pcStack_158 = FUN_103194e98;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_168 = *plVar19;
    uVar11 = *(undefined8 *)(lStack_168 + 0x1d8);
    puVar15 = *(undefined8 **)(lStack_168 + 0x130);
    plVar19 = (long *)*plVar19;
    puStack_170 = puVar2;
    func_0x000107c615c0(*(undefined8 *)(lStack_168 + 0x1e0));
    func_0x0001000293e4(uVar11);
    func_0x000107c615c0(uVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
      pcVar23 = FUN_103194f28;
      puVar12 = (undefined8 *)0x0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    uStack_190 = (ulong)&uStack_160 | 0x1000000000000000;
    pcStack_188 = FUN_103194f28;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar19[0x21] = 0;
    plVar19[0x20] = 6;
    *(undefined1 *)(plVar19 + 0x22) = 4;
    uVar13 = 2;
    lStack_1b0 = lVar20;
    lStack_1a8 = lVar17;
    uStack_1a0 = uVar11;
    plStack_198 = plVar19;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar13 != 0) {
      FUN_103187f64();
      func_0x000107c61658(plVar19 + 0x20,&UNK_110618668,uVar13);
    }
    lVar14 = plVar19[0x34];
    lVar22 = plVar19[0x32];
    lVar16 = plVar19[0x33];
    lVar17 = plVar19[0x2f];
    func_0x000107c61170(plVar19[0x35]);
    func_0x000107c61170(lVar17);
    (**(code **)(lVar16 + 8))(lVar14,lVar22);
    func_0x000107c615c0(lVar14);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
                    /* WARNING: Could not recover jumptable at 0x000103195008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar19[1])(6,0,4);
      return;
    }
    func_0x000107c60e78();
    uStack_1d0 = (ulong)&uStack_190 | 0x1000000000000000;
    pcStack_1c8 = FUN_103195010;
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_1d8 = *plVar19;
    uVar11 = *(undefined8 *)(lStack_1d8 + 0x1e8);
    puVar15 = *(undefined8 **)(lStack_1d8 + 0x130);
    plVar19 = (long *)*plVar19;
    lStack_1e0 = lVar22;
    func_0x000107c615c0(*(undefined8 *)(lStack_1d8 + 0x1f0));
    func_0x0001000293e4(uVar11);
    func_0x000107c615c0(uVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
      pcVar23 = FUN_1031950a0;
      puVar12 = (undefined8 *)0x0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    uStack_200 = (ulong)&uStack_1d0 | 0x1000000000000000;
    pcStack_1f8 = FUN_1031950a0;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar19[0x1e] = 0;
    plVar19[0x1d] = 5;
    *(undefined1 *)(plVar19 + 0x1f) = 4;
    uVar13 = 2;
    lStack_220 = lVar16;
    lStack_218 = lVar17;
    uStack_210 = uVar11;
    plStack_208 = plVar19;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar13 != 0) {
      FUN_103187f64();
      func_0x000107c61658(plVar19 + 0x1d,&UNK_110618668,uVar13);
    }
    lVar14 = plVar19[0x34];
    lVar22 = plVar19[0x32];
    unaff_x23 = plVar19[0x33];
    unaff_x21 = plVar19[0x2f];
    func_0x000107c61170(plVar19[0x35]);
    func_0x000107c61170(unaff_x21);
    (**(code **)(unaff_x23 + 8))(lVar14,lVar22);
    func_0x000107c615c0(lVar14);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
                    /* WARNING: Could not recover jumptable at 0x000103195184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar19[1])(5,0,4);
      return;
    }
    func_0x000107c60e78();
    uStack_240 = (ulong)&uStack_200 | 0x1000000000000000;
    pcStack_238 = FUN_10319518c;
    lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_248 = *plVar19;
    uVar11 = *(undefined8 *)(lStack_248 + 0x1f8);
    puVar15 = *(undefined8 **)(lStack_248 + 0x130);
    plVar19 = (long *)*plVar19;
    lStack_250 = lVar22;
    func_0x000107c615c0(*(undefined8 *)(lStack_248 + 0x200));
    func_0x0001000293e4(uVar11);
    func_0x000107c615c0(uVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
      pcVar23 = FUN_10319521c;
      puVar12 = (undefined8 *)0x0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    uStack_270 = (ulong)&uStack_240 | 0x1000000000000000;
    plVar1 = &lStack_280;
    pcStack_268 = FUN_10319521c;
    lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar19[0x14] = 0;
    plVar19[0x15] = 0;
    *(undefined1 *)(plVar19 + 0x16) = 4;
    uVar13 = 2;
    plStack_278 = plVar19;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar13 != 0) {
      FUN_103187f64();
      func_0x000107c61658(plVar19 + 0x14,&UNK_110618668,uVar13);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_280) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar19[1])(0,0,4);
      return;
    }
    func_0x000107c60e78();
    uStack_290 = (ulong)&uStack_270 | 0x1000000000000000;
    pcStack_288 = FUN_1031952c0;
    lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = 0x112d36580;
    uStack_2a0 = uVar11;
    plStack_298 = plVar19;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar8 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar19[0x41] = uVar8;
    lVar14 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar14 + -8) + 0x38))(uVar8,1,1,lVar14);
    plVar9 = (long *)0x100;
    func_0x000107c615b8();
    plVar19[0x42] = (long)plVar9;
    *plVar9 = (long)plVar19;
    plVar9[1] = (long)FUN_103195398;
    puVar15 = (undefined8 *)plVar19[0x26];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
      lVar14 = 0;
      uVar6 = uStack_290 & 0xefffffffffffffff;
      unaff_x19 = uStack_2a0;
      unaff_x30 = pcStack_288;
    }
    else {
      func_0x000107c60e78();
      uStack_2c0 = (ulong)&uStack_290 | 0x1000000000000000;
      pcStack_2b8 = FUN_103195398;
      lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_2c8 = *plVar19;
      unaff_x19 = *(undefined8 *)(lStack_2c8 + 0x208);
      puVar15 = *(undefined8 **)(lStack_2c8 + 0x130);
      plVar19 = (long *)*plVar19;
      uStack_2d0 = uVar8;
      func_0x000107c615c0(*(undefined8 *)(lStack_2c8 + 0x210));
      func_0x0001000293e4(unaff_x19);
      func_0x000107c615c0(unaff_x19);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
        pcVar23 = FUN_10319542c;
        puVar12 = (undefined8 *)0x0;
        goto LAB_107c615e0;
      }
      func_0x000107c60e78();
      uStack_2f0 = (ulong)&uStack_2c0 | 0x1000000000000000;
      plVar1 = &lStack_300;
      pcStack_2e8 = FUN_10319542c;
      lStack_300 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar19[0x12] = plVar19[0x2d];
      plVar19[0x11] = plVar19[0x2c];
      *(undefined1 *)(plVar19 + 0x13) = *(undefined1 *)((long)plVar19 + 0x81);
      uVar11 = 2;
      plStack_2f8 = plVar19;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar11 != 0) {
        FUN_103187f64();
        func_0x000107c61658(plVar19 + 0x11,&UNK_110618668,uVar11);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_300) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar19[1])();
        return;
      }
      func_0x000107c60e78(plVar19[0x2c],plVar19[0x2d],*(undefined1 *)((long)plVar19 + 0x81));
      pcStack_308 = FUN_1031954d0;
      lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar14 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar8 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar19[0x43] = uVar8;
      lVar14 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar14 + -8) + 0x38))(uVar8,1,1,lVar14);
      plVar9 = (long *)0x100;
      func_0x000107c615b8();
      plVar19[0x44] = (long)plVar9;
      *plVar9 = (long)plVar19;
      plVar9[1] = (long)FUN_1031955a8;
      puVar15 = (undefined8 *)plVar19[0x26];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar22) {
        func_0x000107c60e78();
        lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar22 = *plVar19;
        uVar11 = *(undefined8 *)(lVar22 + 0x218);
        puVar15 = *(undefined8 **)(lVar22 + 0x130);
        lVar16 = *plVar19;
        func_0x000107c615c0(*(undefined8 *)(lVar22 + 0x220));
        func_0x0001000293e4(uVar11);
        func_0x000107c615c0(uVar11);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
          pcVar23 = FUN_10319563c;
          puVar12 = (undefined8 *)0x0;
        }
        else {
          func_0x000107c60e78();
          lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
          *(undefined8 *)(lVar16 + 0xc0) = *(undefined8 *)(lVar16 + 0x180);
          *(undefined8 *)(lVar16 + 0xb8) = *(undefined8 *)(lVar16 + 0x178);
          *(undefined1 *)(lVar16 + 200) = *(undefined1 *)(lVar16 + 0x82);
          uVar11 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar11 != 0) {
            FUN_103187f64();
            func_0x000107c61658((undefined8 *)(lVar16 + 0xb8),&UNK_110618668,uVar11);
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar16 + 8))();
            return;
          }
          func_0x000107c60e78(*(undefined8 *)(lVar16 + 0x178),*(undefined8 *)(lVar16 + 0x180),
                              *(undefined1 *)(lVar16 + 0x82));
          pcVar23 = FUN_1031956f8;
          puVar15 = (undefined8 *)0x0;
          puVar12 = (undefined8 *)0x0;
        }
        goto LAB_107c615e0;
      }
      lVar14 = 0;
      uVar6 = (ulong)&uStack_2f0 & 0xefffffffffffffff;
      unaff_x30 = pcStack_308;
    }
  }
  else {
    lVar14 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar8 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    unaff_x22[0x37] = uVar8;
    (*pcVar23)();
    (**(code **)(lVar22 + 0x38))(uVar8,0,1,puVar2);
    plVar9 = (long *)0x100;
    func_0x000107c615b8();
    unaff_x22[0x38] = (long)plVar9;
    pcVar23 = FUN_103194bec;
LAB_103194af8:
    *plVar9 = (long)unaff_x22;
    plVar9[1] = (long)pcVar23;
    lVar14 = unaff_x22[0x2f];
    puVar15 = (undefined8 *)unaff_x22[0x26];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_60) goto LAB_103194be8;
    uVar6 = uStack_10 & 0xefffffffffffffff;
    plVar1 = (long *)register0x00000008;
  }
  *(ulong *)((long)plVar1 + -0x10) = uVar6 | 0x1000000000000000;
  *(code **)((long)plVar1 + -8) = unaff_x30;
  *(long **)((long)plVar1 + -0x18) = plVar9;
  *(undefined8 *)((long)plVar1 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar9[0x15] = uVar8;
  plVar9[0x16] = (long)puVar15;
  plVar9[0x14] = lVar14;
  lVar14 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar6 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x17] = uVar6;
  lVar14 = 0;
  func_0x000107c5ede0();
  plVar9[0x18] = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  plVar9[0x19] = lVar14;
  uVar6 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x1a] = uVar6;
  lVar14 = 0;
  FUN_103197644();
  uVar6 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x1b] = uVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x20)) {
    pcVar23 = FUN_103196dcc;
    puVar12 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c60e78();
    *(long *)((long)plVar1 + -0x50) = unaff_x23;
    *(long *)((long)plVar1 + -0x48) = unaff_x21;
    *(undefined8 *)((long)plVar1 + -0x40) = unaff_x19;
    *(ulong *)((long)plVar1 + -0x30) = (ulong)((long)plVar1 + -0x10) | 0x1000000000000000;
    *(code **)((long)plVar1 + -0x28) = FUN_103196dcc;
    *(long **)((long)plVar1 + -0x38) = plVar9;
    *(undefined8 *)((long)plVar1 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar16 = plVar9[0x1b];
    lVar22 = plVar9[0x16];
    puVar18 = (undefined *)plVar9[0x14];
    lVar14 = 0;
    FUN_103197894();
    (**(code **)(*(long *)(lVar14 + -8) + 0x38))(lVar16,1,1,lVar14);
    lVar14 = _DAT_112f47d68;
    func_0x000107c61428(lVar22 + _DAT_112f47d68,plVar9 + 10,0x21,0);
    func_0x000103187ec0(lVar16,lVar22 + lVar14);
    func_0x000107c614a8(plVar9 + 10);
    lVar14 = 8;
    func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
    *(undefined8 *)(lVar14 + 0x10) = 8;
    *(undefined8 *)(lVar14 + 0x28) = 0;
    *(undefined8 *)(lVar14 + 0x20) = 0;
    *(undefined8 *)(lVar14 + 0x38) = 0;
    *(undefined8 *)(lVar14 + 0x30) = 0;
    *(undefined8 *)(lVar14 + 0x48) = 0;
    *(undefined8 *)(lVar14 + 0x40) = 0;
    *(undefined8 *)(lVar14 + 0x58) = 0;
    *(undefined8 *)(lVar14 + 0x50) = 0;
    puVar2 = (undefined8 *)(lVar22 + _DAT_112f47d70);
    func_0x000107c61428(puVar2,plVar9 + 0xd,1,0);
    uVar11 = puVar2[2];
    *puVar2 = 0;
    puVar2[1] = 0x3fd3333333333333;
    puVar2[2] = lVar14;
    func_0x000107c6142c(uVar11);
    if (puVar18 == (undefined *)0x0) {
      lVar14 = plVar9[0x18];
      puVar18 = (undefined *)plVar9[0x19];
      lVar22 = plVar9[0x17];
      FUN_103198594(plVar9[0x15],lVar22,0x112d36580,&UNK_10d9016d0);
      (**(code **)(puVar18 + 0x30))(lVar22,1,lVar14);
      if ((int)lVar22 == 1) {
        func_0x0001000293e4(plVar9[0x17]);
      }
      else {
        (**(code **)(plVar9[0x19] + 0x20))(plVar9[0x1a],plVar9[0x17],plVar9[0x18]);
        puVar18 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar4 = puVar18;
        func_0x000107c5ed90();
        plVar9[0x13] = 0;
        puVar5 = puVar18;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar18);
        puVar18 = (undefined *)plVar9[0x13];
        if ((int)puVar5 == 0) {
          puVar4 = puVar18;
          func_0x000107c61174(puVar18);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar4);
          func_0x000107c61654();
          func_0x000107c614ac(puVar18);
        }
        else {
          func_0x000107c61174(puVar18);
          puVar18 = puVar5;
        }
        (**(code **)(plVar9[0x19] + 8))(plVar9[0x1a],plVar9[0x18]);
      }
      lVar14 = plVar9[0x16] + _DAT_113806f10;
      func_0x000107c61618();
      plVar9[0x1d] = lVar14;
      if (lVar14 == 0) {
        lVar14 = plVar9[0x1a];
        puVar2 = (undefined8 *)plVar9[0x17];
        func_0x000107c615c0(plVar9[0x1b]);
        func_0x000107c615c0(lVar14);
        func_0x000107c615c0(puVar2);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x58)) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar9[1])();
          return;
        }
      }
      else {
        puVar2 = (undefined8 *)0x0;
        func_0x000107c5fcec();
        puVar12 = puVar2;
        func_0x000107c5fce8();
        plVar9[0x1e] = (long)puVar12;
        func_0x000100eea164();
        puVar15 = puVar2;
        func_0x000107c5fca8(puVar2,puVar12);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x58)) {
          pcVar23 = FUN_103197450;
          goto LAB_107c615e0;
        }
      }
    }
    else {
      plVar9[0x1c] = *(long *)(plVar9[0x16] + 0x70);
      func_0x000107c61174(plVar9[0x14]);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x58)) {
        pcVar23 = FUN_1031970e0;
        puVar15 = (undefined8 *)0x0;
        puVar12 = (undefined8 *)0x0;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    *(undefined8 **)((long)plVar1 + -0x80) = puVar2;
    *(ulong *)((long)plVar1 + -0x70) = (ulong)((long)plVar1 + -0x30) | 0x1000000000000000;
    *(code **)((long)plVar1 + -0x68) = FUN_1031970e0;
    *(long **)((long)plVar1 + -0x78) = plVar9;
    *(undefined8 *)((long)plVar1 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = plVar9[0x14];
    plVar9[2] = (long)plVar9;
    plVar9[3] = (long)FUN_103197168;
    func_0x000107c61448(plVar9 + 2,0);
    func_0x0001031982f4();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(plVar9 + 2);
      return;
    }
    func_0x000107c60e78();
    *(ulong *)((long)plVar1 + -0xa0) = (ulong)((long)plVar1 + -0x70) | 0x1000000000000000;
    *(code **)((long)plVar1 + -0x98) = FUN_103197168;
    *(long **)((long)plVar1 + -0xa8) = plVar9;
    *(undefined8 *)((long)plVar1 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(long *)((long)plVar1 + -0xa8) = *plVar9;
    lVar22 = *plVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0xb0)) {
      pcVar23 = (code *)0x1031971d4;
      puVar12 = (undefined8 *)0x0;
      puVar15 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c60e78();
      *(ulong *)((long)plVar1 + -0xc0) = (ulong)((long)plVar1 + -0xa0) | 0x1000000000000000;
      *(undefined8 *)((long)plVar1 + -0xb8) = 0x1031971d4;
      *(long *)((long)plVar1 + -200) = lVar22;
      *(undefined8 *)((long)plVar1 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar1 + -0xd0)) {
        func_0x000107c60e78();
        *(undefined8 *)((long)plVar1 + -0x100) = 8;
        *(undefined **)((long)plVar1 + -0xf8) = puVar18;
        *(long *)((long)plVar1 + -0xf0) = lVar14;
        *(ulong *)((long)plVar1 + -0xe0) = (ulong)((long)plVar1 + -0xc0) | 0x1000000000000000;
        *(code **)((long)plVar1 + -0xd8) = FUN_103197234;
        *(long *)((long)plVar1 + -0xe8) = lVar22;
        *(undefined8 *)((long)plVar1 + -0x108) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        func_0x000107c61170(*(undefined8 *)(lVar22 + 0xa0));
        uVar11 = *(undefined8 *)(lVar22 + 0xc0);
        lVar14 = *(long *)(lVar22 + 200);
        uVar13 = *(undefined8 *)(lVar22 + 0xb8);
        FUN_103198594(*(undefined8 *)(lVar22 + 0xa8),uVar13,0x112d36580,&UNK_10d9016d0);
        (**(code **)(lVar14 + 0x30))(uVar13,1,uVar11);
        if ((int)uVar13 == 1) {
          func_0x0001000293e4(*(undefined8 *)(lVar22 + 0xb8));
        }
        else {
          (**(code **)(*(long *)(lVar22 + 200) + 0x20))
                    (*(undefined8 *)(lVar22 + 0xd0),*(undefined8 *)(lVar22 + 0xb8),
                     *(undefined8 *)(lVar22 + 0xc0));
          puVar18 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar4 = puVar18;
          func_0x000107c5ed90();
          *(undefined8 *)(lVar22 + 0x98) = 0;
          puVar5 = puVar18;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar18);
          uVar11 = *(undefined8 *)(lVar22 + 0x98);
          if ((int)puVar5 == 0) {
            uVar13 = uVar11;
            func_0x000107c61174(uVar11);
            func_0x000107c5ed30(uVar11);
            func_0x000107c61170(uVar13);
            func_0x000107c61654();
            func_0x000107c614ac(uVar11);
          }
          else {
            func_0x000107c61174(uVar11);
          }
          (**(code **)(*(long *)(lVar22 + 200) + 8))
                    (*(undefined8 *)(lVar22 + 0xd0),*(undefined8 *)(lVar22 + 0xc0));
        }
        lVar14 = *(long *)(lVar22 + 0xb0) + _DAT_113806f10;
        func_0x000107c61618();
        *(long *)(lVar22 + 0xe8) = lVar14;
        if (lVar14 == 0) {
          uVar11 = *(undefined8 *)(lVar22 + 0xd0);
          puVar2 = *(undefined8 **)(lVar22 + 0xb8);
          func_0x000107c615c0(*(undefined8 *)(lVar22 + 0xd8));
          func_0x000107c615c0(uVar11);
          func_0x000107c615c0(puVar2);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x108)) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar22 + 8))();
            return;
          }
        }
        else {
          puVar2 = (undefined8 *)0x0;
          func_0x000107c5fcec();
          puVar12 = puVar2;
          func_0x000107c5fce8();
          *(undefined8 **)(lVar22 + 0xf0) = puVar12;
          func_0x000100eea164();
          puVar15 = puVar2;
          func_0x000107c5fca8(puVar2,puVar12);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar1 + -0x108)) {
            pcVar23 = FUN_103197450;
            goto LAB_107c615e0;
          }
        }
        func_0x000107c60e78();
        *(undefined8 **)((long)plVar1 + -0x130) = puVar2;
        *(ulong *)((long)plVar1 + -0x120) = (ulong)((long)plVar1 + -0xe0) | 0x1000000000000000;
        *(code **)((long)plVar1 + -0x118) = FUN_103197450;
        *(long *)((long)plVar1 + -0x128) = lVar22;
        *(undefined8 *)((long)plVar1 + -0x138) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        lVar14 = *(long *)(lVar22 + 0xe8);
        func_0x000107c61574(*(undefined8 *)(lVar22 + 0xf0));
        lVar16 = _DAT_112f476d0;
        func_0x000107c61428(lVar14 + _DAT_112f476d0,lVar22 + 0x80,0,0);
        lVar14 = lVar14 + lVar16;
        func_0x000107c61618();
        if (lVar14 != 0) {
          func_0x000107c3e3e0();
          func_0x000107c615e8(lVar14);
        }
        func_0x000107c615e8(*(undefined8 *)(lVar22 + 0xe8));
        lVar14 = *(long *)(lVar22 + 0xd0);
        uVar11 = *(undefined8 *)(lVar22 + 0xb8);
        func_0x000107c615c0(*(undefined8 *)(lVar22 + 0xd8));
        func_0x000107c615c0(lVar14);
        func_0x000107c615c0(uVar11);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar1 + -0x138)) {
          func_0x000107c60e78();
          *(undefined1 **)((long)plVar1 + -0x150) = (undefined1 *)((long)plVar1 + -0x120);
          *(code **)((long)plVar1 + -0x148) = FUN_10319751c;
          func_0x000107c615e8(*(undefined8 *)(lVar14 + 0x70));
          func_0x000107c61170(*(undefined8 *)(lVar14 + 0x78));
          FUN_103198414(lVar14 + _DAT_112f47d68,FUN_103197644);
          func_0x000107c6142c(*(undefined8 *)(lVar14 + _DAT_112f47d70 + 0x10));
          FUN_1031985fc(lVar14 + _DAT_113806f10);
          func_0x000107c61470(lVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar14);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar22 + 8))();
        return;
      }
      pcVar23 = FUN_103197234;
      puVar12 = (undefined8 *)0x0;
      puVar15 = *(undefined8 **)(lVar22 + 0xb0);
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar23,puVar15,puVar12);
  return;
}



/* Entry: 103194bec; end: 103194c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103194bec(void)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long *unaff_x22;
  long *plVar18;
  long lVar19;
  long lVar20;
  ulong unaff_x29;
  code *pcStack_288;
  long lStack_280;
  long *plStack_278;
  ulong uStack_270;
  code *pcStack_268;
  long lStack_258;
  ulong uStack_250;
  long lStack_248;
  ulong uStack_240;
  code *pcStack_238;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  ulong *puStack_210;
  code *pcStack_208;
  long lStack_200;
  long *plStack_1f8;
  ulong uStack_1f0;
  code *pcStack_1e8;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  code *pcStack_1b8;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  ulong uStack_180;
  code *pcStack_178;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  ulong uStack_150;
  code *pcStack_148;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  ulong uStack_110;
  code *pcStack_108;
  long lStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_78;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_28;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar12 + 0x1b8);
  puVar14 = *(undefined8 **)(lVar12 + 0x130);
  plVar18 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar12 + 0x1c0));
  func_0x0001000293e4(uVar3);
  func_0x000107c615c0(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    pcVar4 = FUN_103194c7c;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c60e78();
    uStack_40 = (ulong)&uStack_10 | 0x1000000000000000;
    pcStack_38 = FUN_103194c7c;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c614cc(plVar18[0x36],plVar18 + 0x24,plVar18 + 5);
    lVar12 = plVar18[6];
    lVar10 = plVar18[7];
    func_0x000107c60640();
    plVar18[0x1a] = lVar12;
    plVar18[0x1b] = lVar10;
    *(undefined1 *)(plVar18 + 0x1c) = 1;
    uVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar3 != 0) {
      FUN_103187f64();
      func_0x000107c61658(plVar18 + 0x1a,&UNK_110618668,uVar3);
    }
    lVar15 = plVar18[0x33];
    lVar16 = plVar18[0x34];
    lVar19 = plVar18[0x32];
    lVar20 = plVar18[0x2f];
    func_0x000107c614ac(plVar18[0x36]);
    func_0x000107c61170(lVar20);
    (**(code **)(lVar15 + 8))(lVar16,lVar19);
    func_0x000107c615c0(lVar16);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x000103194d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar18[1])(lVar12,lVar10,1);
      return;
    }
    func_0x000107c60e78();
    uStack_90 = (ulong)&uStack_40 | 0x1000000000000000;
    pcStack_88 = FUN_103194d90;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar12 = plVar18[0x39];
    puVar13 = (undefined8 *)plVar18[0x26];
    lStack_a0 = lVar10;
    plStack_98 = plVar18;
    func_0x000107c61574(plVar18[0x3a]);
    FUN_103184874();
    func_0x000107c615e8(lVar12);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
      pcVar4 = FUN_103194e10;
      puVar11 = (undefined8 *)0x0;
      puVar14 = puVar13;
    }
    else {
      func_0x000107c60e78();
      uStack_c0 = (ulong)&uStack_90 | 0x1000000000000000;
      pcStack_b8 = FUN_103194e10;
      lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar12 = plVar18[0x2f];
      plStack_c8 = plVar18;
      func_0x000107c61170(plVar18[0x35]);
      func_0x000107c61170(lVar12);
      lVar12 = plVar18[0x34];
      (**(code **)(plVar18[0x33] + 8))(lVar12,plVar18[0x32]);
      func_0x000107c615c0(lVar12);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
                    /* WARNING: Could not recover jumptable at 0x000103194e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar18[1])();
        return;
      }
      func_0x000107c60e78();
      uStack_e0 = (ulong)&uStack_c0 | 0x1000000000000000;
      pcStack_d8 = FUN_103194e98;
      lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_e8 = *plVar18;
      uVar3 = *(undefined8 *)(lStack_e8 + 0x1d8);
      puVar14 = *(undefined8 **)(lStack_e8 + 0x130);
      plVar18 = (long *)*plVar18;
      puStack_f0 = puVar13;
      func_0x000107c615c0(*(undefined8 *)(lStack_e8 + 0x1e0));
      func_0x0001000293e4(uVar3);
      func_0x000107c615c0(uVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
        pcVar4 = FUN_103194f28;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c60e78();
        uStack_110 = (ulong)&uStack_e0 | 0x1000000000000000;
        pcStack_108 = FUN_103194f28;
        lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar18[0x21] = 0;
        plVar18[0x20] = 6;
        *(undefined1 *)(plVar18 + 0x22) = 4;
        uVar5 = 2;
        lStack_130 = lVar19;
        lStack_128 = lVar16;
        uStack_120 = uVar3;
        plStack_118 = plVar18;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar5 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar18 + 0x20,&UNK_110618668,uVar5);
        }
        lVar12 = plVar18[0x34];
        lVar10 = plVar18[0x32];
        lVar15 = plVar18[0x33];
        lVar16 = plVar18[0x2f];
        func_0x000107c61170(plVar18[0x35]);
        func_0x000107c61170(lVar16);
        (**(code **)(lVar15 + 8))(lVar12,lVar10);
        func_0x000107c615c0(lVar12);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
                    /* WARNING: Could not recover jumptable at 0x000103195008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar18[1])(6,0,4);
          return;
        }
        func_0x000107c60e78();
        uStack_150 = (ulong)&uStack_110 | 0x1000000000000000;
        pcStack_148 = FUN_103195010;
        lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_158 = *plVar18;
        uVar3 = *(undefined8 *)(lStack_158 + 0x1e8);
        puVar14 = *(undefined8 **)(lStack_158 + 0x130);
        plVar18 = (long *)*plVar18;
        lStack_160 = lVar10;
        func_0x000107c615c0(*(undefined8 *)(lStack_158 + 0x1f0));
        func_0x0001000293e4(uVar3);
        func_0x000107c615c0(uVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
          pcVar4 = FUN_1031950a0;
          puVar11 = (undefined8 *)0x0;
        }
        else {
          func_0x000107c60e78();
          uStack_180 = (ulong)&uStack_150 | 0x1000000000000000;
          pcStack_178 = FUN_1031950a0;
          lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          plVar18[0x1e] = 0;
          plVar18[0x1d] = 5;
          *(undefined1 *)(plVar18 + 0x1f) = 4;
          uVar5 = 2;
          lStack_1a0 = lVar15;
          lStack_198 = lVar16;
          uStack_190 = uVar3;
          plStack_188 = plVar18;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar5 != 0) {
            FUN_103187f64();
            func_0x000107c61658(plVar18 + 0x1d,&UNK_110618668,uVar5);
          }
          lVar12 = plVar18[0x34];
          lVar10 = plVar18[0x32];
          lVar15 = plVar18[0x33];
          lVar16 = plVar18[0x2f];
          func_0x000107c61170(plVar18[0x35]);
          func_0x000107c61170(lVar16);
          (**(code **)(lVar15 + 8))(lVar12,lVar10);
          func_0x000107c615c0(lVar12);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
                    /* WARNING: Could not recover jumptable at 0x000103195184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)plVar18[1])(5,0,4);
            return;
          }
          func_0x000107c60e78();
          uStack_1c0 = (ulong)&uStack_180 | 0x1000000000000000;
          pcStack_1b8 = FUN_10319518c;
          lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lStack_1c8 = *plVar18;
          uVar3 = *(undefined8 *)(lStack_1c8 + 0x1f8);
          puVar14 = *(undefined8 **)(lStack_1c8 + 0x130);
          plVar18 = (long *)*plVar18;
          lStack_1d0 = lVar10;
          func_0x000107c615c0(*(undefined8 *)(lStack_1c8 + 0x200));
          func_0x0001000293e4(uVar3);
          func_0x000107c615c0(uVar3);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
            pcVar4 = FUN_10319521c;
            puVar11 = (undefined8 *)0x0;
          }
          else {
            func_0x000107c60e78();
            uStack_1f0 = (ulong)&uStack_1c0 | 0x1000000000000000;
            plVar2 = &lStack_200;
            pcStack_1e8 = FUN_10319521c;
            lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
            plVar18[0x14] = 0;
            plVar18[0x15] = 0;
            *(undefined1 *)(plVar18 + 0x16) = 4;
            uVar5 = 2;
            plStack_1f8 = plVar18;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar5 != 0) {
              FUN_103187f64();
              func_0x000107c61658(plVar18 + 0x14,&UNK_110618668,uVar5);
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)plVar18[1])(0,0,4);
              return;
            }
            func_0x000107c60e78();
            puStack_210 = (ulong *)((ulong)&uStack_1f0 | 0x1000000000000000);
            pcStack_208 = FUN_1031952c0;
            lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar12 = 0x112d36580;
            uStack_220 = uVar3;
            plStack_218 = plVar18;
            func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
            uVar6 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            plVar18[0x41] = uVar6;
            lVar12 = 0;
            func_0x000107c5ede0();
            (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar6,1,1,lVar12);
            plVar7 = (long *)0x100;
            func_0x000107c615b8();
            plVar18[0x42] = (long)plVar7;
            *plVar7 = (long)plVar18;
            plVar7[1] = (long)FUN_103195398;
            puVar14 = (undefined8 *)plVar18[0x26];
            uVar3 = uStack_220;
            pcStack_288 = pcStack_208;
            puVar1 = puStack_210;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
              func_0x000107c60e78();
              uStack_240 = (ulong)&puStack_210 | 0x1000000000000000;
              pcStack_238 = FUN_103195398;
              lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
              lStack_248 = *plVar18;
              uVar3 = *(undefined8 *)(lStack_248 + 0x208);
              puVar14 = *(undefined8 **)(lStack_248 + 0x130);
              plVar18 = (long *)*plVar18;
              uStack_250 = uVar6;
              func_0x000107c615c0(*(undefined8 *)(lStack_248 + 0x210));
              func_0x0001000293e4(uVar3);
              func_0x000107c615c0(uVar3);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
                pcVar4 = FUN_10319542c;
                puVar11 = (undefined8 *)0x0;
                goto LAB_107c615e0;
              }
              func_0x000107c60e78();
              uStack_270 = (ulong)&uStack_240 | 0x1000000000000000;
              plVar2 = &lStack_280;
              pcStack_268 = FUN_10319542c;
              lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
              plVar18[0x12] = plVar18[0x2d];
              plVar18[0x11] = plVar18[0x2c];
              *(undefined1 *)(plVar18 + 0x13) = *(undefined1 *)((long)plVar18 + 0x81);
              uVar5 = 2;
              plStack_278 = plVar18;
              func_0x000100029b9c(2,0x12,0,0);
              if ((int)uVar5 != 0) {
                FUN_103187f64();
                func_0x000107c61658(plVar18 + 0x11,&UNK_110618668,uVar5);
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_280) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)plVar18[1])();
                return;
              }
              func_0x000107c60e78(plVar18[0x2c],plVar18[0x2d],*(undefined1 *)((long)plVar18 + 0x81))
              ;
              pcStack_288 = FUN_1031954d0;
              lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
              lVar12 = 0x112d36580;
              func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
              uVar6 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
              func_0x000107c615b8();
              plVar18[0x43] = uVar6;
              lVar12 = 0;
              func_0x000107c5ede0();
              (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar6,1,1,lVar12);
              plVar7 = (long *)0x100;
              func_0x000107c615b8();
              plVar18[0x44] = (long)plVar7;
              *plVar7 = (long)plVar18;
              plVar7[1] = (long)FUN_1031955a8;
              puVar14 = (undefined8 *)plVar18[0x26];
              puVar1 = &uStack_270;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
                func_0x000107c60e78();
                lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
                lVar10 = *plVar18;
                uVar3 = *(undefined8 *)(lVar10 + 0x218);
                puVar14 = *(undefined8 **)(lVar10 + 0x130);
                lVar15 = *plVar18;
                func_0x000107c615c0(*(undefined8 *)(lVar10 + 0x220));
                func_0x0001000293e4(uVar3);
                func_0x000107c615c0(uVar3);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                  pcVar4 = FUN_10319563c;
                  puVar11 = (undefined8 *)0x0;
                }
                else {
                  func_0x000107c60e78();
                  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  *(undefined8 *)(lVar15 + 0xc0) = *(undefined8 *)(lVar15 + 0x180);
                  *(undefined8 *)(lVar15 + 0xb8) = *(undefined8 *)(lVar15 + 0x178);
                  *(undefined1 *)(lVar15 + 200) = *(undefined1 *)(lVar15 + 0x82);
                  uVar3 = 2;
                  func_0x000100029b9c(2,0x12,0,0);
                  if ((int)uVar3 != 0) {
                    FUN_103187f64();
                    func_0x000107c61658((undefined8 *)(lVar15 + 0xb8),&UNK_110618668,uVar3);
                  }
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(lVar15 + 8))();
                    return;
                  }
                  func_0x000107c60e78(*(undefined8 *)(lVar15 + 0x178),
                                      *(undefined8 *)(lVar15 + 0x180),*(undefined1 *)(lVar15 + 0x82)
                                     );
                  pcVar4 = FUN_1031956f8;
                  puVar14 = (undefined8 *)0x0;
                  puVar11 = (undefined8 *)0x0;
                }
                goto LAB_107c615e0;
              }
            }
            *(ulong *)((long)plVar2 + -0x10) =
                 (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
            *(code **)((long)plVar2 + -8) = pcStack_288;
            *(long **)((long)plVar2 + -0x18) = plVar7;
            *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            plVar7[0x15] = uVar6;
            plVar7[0x16] = (long)puVar14;
            plVar7[0x14] = 0;
            lVar12 = 0x112d36580;
            func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
            uVar6 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            plVar7[0x17] = uVar6;
            lVar12 = 0;
            func_0x000107c5ede0();
            plVar7[0x18] = lVar12;
            lVar12 = *(long *)(lVar12 + -8);
            plVar7[0x19] = lVar12;
            uVar6 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            plVar7[0x1a] = uVar6;
            lVar12 = 0;
            FUN_103197644();
            uVar6 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            plVar7[0x1b] = uVar6;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x20)) {
              pcVar4 = FUN_103196dcc;
              puVar11 = (undefined8 *)0x0;
            }
            else {
              func_0x000107c60e78();
              *(long *)((long)plVar2 + -0x50) = lVar15;
              *(long *)((long)plVar2 + -0x48) = lVar16;
              *(undefined8 *)((long)plVar2 + -0x40) = uVar3;
              *(ulong *)((long)plVar2 + -0x30) = (ulong)((long)plVar2 + -0x10) | 0x1000000000000000;
              *(code **)((long)plVar2 + -0x28) = FUN_103196dcc;
              *(long **)((long)plVar2 + -0x38) = plVar7;
              *(undefined8 *)((long)plVar2 + -0x58) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              lVar15 = plVar7[0x1b];
              lVar10 = plVar7[0x16];
              puVar17 = (undefined *)plVar7[0x14];
              lVar12 = 0;
              FUN_103197894();
              (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar15,1,1,lVar12);
              lVar12 = _DAT_112f47d68;
              func_0x000107c61428(lVar10 + _DAT_112f47d68,plVar7 + 10,0x21,0);
              func_0x000103187ec0(lVar15,lVar10 + lVar12);
              func_0x000107c614a8(plVar7 + 10);
              lVar12 = 8;
              func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
              *(undefined8 *)(lVar12 + 0x10) = 8;
              *(undefined8 *)(lVar12 + 0x28) = 0;
              *(undefined8 *)(lVar12 + 0x20) = 0;
              *(undefined8 *)(lVar12 + 0x38) = 0;
              *(undefined8 *)(lVar12 + 0x30) = 0;
              *(undefined8 *)(lVar12 + 0x48) = 0;
              *(undefined8 *)(lVar12 + 0x40) = 0;
              *(undefined8 *)(lVar12 + 0x58) = 0;
              *(undefined8 *)(lVar12 + 0x50) = 0;
              puVar13 = (undefined8 *)(lVar10 + _DAT_112f47d70);
              func_0x000107c61428(puVar13,plVar7 + 0xd,1,0);
              uVar3 = puVar13[2];
              *puVar13 = 0;
              puVar13[1] = 0x3fd3333333333333;
              puVar13[2] = lVar12;
              func_0x000107c6142c(uVar3);
              if (puVar17 == (undefined *)0x0) {
                lVar12 = plVar7[0x18];
                puVar17 = (undefined *)plVar7[0x19];
                lVar10 = plVar7[0x17];
                FUN_103198594(plVar7[0x15],lVar10,0x112d36580,&UNK_10d9016d0);
                (**(code **)(puVar17 + 0x30))(lVar10,1,lVar12);
                if ((int)lVar10 == 1) {
                  func_0x0001000293e4(plVar7[0x17]);
                }
                else {
                  (**(code **)(plVar7[0x19] + 0x20))(plVar7[0x1a],plVar7[0x17],plVar7[0x18]);
                  puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
                  func_0x000107c61168();
                  func_0x000107c415e0();
                  func_0x000107c61180();
                  puVar8 = puVar17;
                  func_0x000107c5ed90();
                  plVar7[0x13] = 0;
                  puVar9 = puVar17;
                  func_0x000107c4ff50();
                  func_0x000107c61170(puVar8);
                  func_0x000107c61170(puVar17);
                  puVar17 = (undefined *)plVar7[0x13];
                  if ((int)puVar9 == 0) {
                    puVar8 = puVar17;
                    func_0x000107c61174(puVar17);
                    func_0x000107c5ed30();
                    func_0x000107c61170(puVar8);
                    func_0x000107c61654();
                    func_0x000107c614ac(puVar17);
                  }
                  else {
                    func_0x000107c61174(puVar17);
                    puVar17 = puVar9;
                  }
                  (**(code **)(plVar7[0x19] + 8))(plVar7[0x1a],plVar7[0x18]);
                }
                lVar12 = plVar7[0x16] + _DAT_113806f10;
                func_0x000107c61618();
                plVar7[0x1d] = lVar12;
                if (lVar12 == 0) {
                  lVar12 = plVar7[0x1a];
                  puVar13 = (undefined8 *)plVar7[0x17];
                  func_0x000107c615c0(plVar7[0x1b]);
                  func_0x000107c615c0(lVar12);
                  func_0x000107c615c0(puVar13);
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58))
                  {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)plVar7[1])();
                    return;
                  }
                }
                else {
                  puVar13 = (undefined8 *)0x0;
                  func_0x000107c5fcec();
                  puVar11 = puVar13;
                  func_0x000107c5fce8();
                  plVar7[0x1e] = (long)puVar11;
                  func_0x000100eea164();
                  puVar14 = puVar13;
                  func_0x000107c5fca8(puVar13,puVar11);
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58))
                  {
                    pcVar4 = FUN_103197450;
                    goto LAB_107c615e0;
                  }
                }
              }
              else {
                plVar7[0x1c] = *(long *)(plVar7[0x16] + 0x70);
                func_0x000107c61174(plVar7[0x14]);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                  pcVar4 = FUN_1031970e0;
                  puVar14 = (undefined8 *)0x0;
                  puVar11 = (undefined8 *)0x0;
                  goto LAB_107c615e0;
                }
              }
              func_0x000107c60e78();
              *(undefined8 **)((long)plVar2 + -0x80) = puVar13;
              *(ulong *)((long)plVar2 + -0x70) = (ulong)((long)plVar2 + -0x30) | 0x1000000000000000;
              *(code **)((long)plVar2 + -0x68) = FUN_1031970e0;
              *(long **)((long)plVar2 + -0x78) = plVar7;
              *(undefined8 *)((long)plVar2 + -0x88) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              lVar12 = plVar7[0x14];
              plVar7[2] = (long)plVar7;
              plVar7[3] = (long)FUN_103197168;
              func_0x000107c61448(plVar7 + 2,0);
              func_0x0001031982f4();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__swift_continuation_await_110350070)(plVar7 + 2);
                return;
              }
              func_0x000107c60e78();
              *(ulong *)((long)plVar2 + -0xa0) = (ulong)((long)plVar2 + -0x70) | 0x1000000000000000;
              *(code **)((long)plVar2 + -0x98) = FUN_103197168;
              *(long **)((long)plVar2 + -0xa8) = plVar7;
              *(undefined8 *)((long)plVar2 + -0xb0) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              *(long *)((long)plVar2 + -0xa8) = *plVar7;
              lVar10 = *plVar7;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0xb0)) {
                pcVar4 = (code *)0x1031971d4;
                puVar14 = (undefined8 *)0x0;
                puVar11 = (undefined8 *)0x0;
              }
              else {
                func_0x000107c60e78();
                *(ulong *)((long)plVar2 + -0xc0) =
                     (ulong)((long)plVar2 + -0xa0) | 0x1000000000000000;
                *(undefined8 *)((long)plVar2 + -0xb8) = 0x1031971d4;
                *(long *)((long)plVar2 + -200) = lVar10;
                *(undefined8 *)((long)plVar2 + -0xd0) =
                     *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                puVar14 = *(undefined8 **)(lVar10 + 0xb0);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0xd0)) {
                  func_0x000107c60e78();
                  *(undefined8 *)((long)plVar2 + -0x100) = 8;
                  *(undefined **)((long)plVar2 + -0xf8) = puVar17;
                  *(long *)((long)plVar2 + -0xf0) = lVar12;
                  *(ulong *)((long)plVar2 + -0xe0) =
                       (ulong)((long)plVar2 + -0xc0) | 0x1000000000000000;
                  *(code **)((long)plVar2 + -0xd8) = FUN_103197234;
                  *(long *)((long)plVar2 + -0xe8) = lVar10;
                  *(undefined8 *)((long)plVar2 + -0x108) =
                       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                  func_0x000107c61170(*(undefined8 *)(lVar10 + 0xa0));
                  uVar3 = *(undefined8 *)(lVar10 + 0xc0);
                  lVar12 = *(long *)(lVar10 + 200);
                  uVar5 = *(undefined8 *)(lVar10 + 0xb8);
                  FUN_103198594(*(undefined8 *)(lVar10 + 0xa8),uVar5,0x112d36580,&UNK_10d9016d0);
                  (**(code **)(lVar12 + 0x30))(uVar5,1,uVar3);
                  if ((int)uVar5 == 1) {
                    func_0x0001000293e4(*(undefined8 *)(lVar10 + 0xb8));
                  }
                  else {
                    (**(code **)(*(long *)(lVar10 + 200) + 0x20))
                              (*(undefined8 *)(lVar10 + 0xd0),*(undefined8 *)(lVar10 + 0xb8),
                               *(undefined8 *)(lVar10 + 0xc0));
                    puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
                    func_0x000107c61168();
                    func_0x000107c415e0();
                    func_0x000107c61180();
                    puVar8 = puVar17;
                    func_0x000107c5ed90();
                    *(undefined8 *)(lVar10 + 0x98) = 0;
                    puVar9 = puVar17;
                    func_0x000107c4ff50();
                    func_0x000107c61170(puVar8);
                    func_0x000107c61170(puVar17);
                    uVar3 = *(undefined8 *)(lVar10 + 0x98);
                    if ((int)puVar9 == 0) {
                      uVar5 = uVar3;
                      func_0x000107c61174(uVar3);
                      func_0x000107c5ed30(uVar3);
                      func_0x000107c61170(uVar5);
                      func_0x000107c61654();
                      func_0x000107c614ac(uVar3);
                    }
                    else {
                      func_0x000107c61174(uVar3);
                    }
                    (**(code **)(*(long *)(lVar10 + 200) + 8))
                              (*(undefined8 *)(lVar10 + 0xd0),*(undefined8 *)(lVar10 + 0xc0));
                  }
                  lVar12 = *(long *)(lVar10 + 0xb0) + _DAT_113806f10;
                  func_0x000107c61618();
                  *(long *)(lVar10 + 0xe8) = lVar12;
                  if (lVar12 == 0) {
                    uVar3 = *(undefined8 *)(lVar10 + 0xd0);
                    puVar13 = *(undefined8 **)(lVar10 + 0xb8);
                    func_0x000107c615c0(*(undefined8 *)(lVar10 + 0xd8));
                    func_0x000107c615c0(uVar3);
                    func_0x000107c615c0(puVar13);
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                        *(long *)((long)plVar2 + -0x108)) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(lVar10 + 8))();
                      return;
                    }
                  }
                  else {
                    puVar13 = (undefined8 *)0x0;
                    func_0x000107c5fcec();
                    puVar11 = puVar13;
                    func_0x000107c5fce8();
                    *(undefined8 **)(lVar10 + 0xf0) = puVar11;
                    func_0x000100eea164();
                    puVar14 = puVar13;
                    func_0x000107c5fca8(puVar13,puVar11);
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                        *(long *)((long)plVar2 + -0x108)) {
                      pcVar4 = FUN_103197450;
                      goto LAB_107c615e0;
                    }
                  }
                  func_0x000107c60e78();
                  *(undefined8 **)((long)plVar2 + -0x130) = puVar13;
                  *(ulong *)((long)plVar2 + -0x120) =
                       (ulong)((long)plVar2 + -0xe0) | 0x1000000000000000;
                  *(code **)((long)plVar2 + -0x118) = FUN_103197450;
                  *(long *)((long)plVar2 + -0x128) = lVar10;
                  *(undefined8 *)((long)plVar2 + -0x138) =
                       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                  lVar12 = *(long *)(lVar10 + 0xe8);
                  func_0x000107c61574(*(undefined8 *)(lVar10 + 0xf0));
                  lVar15 = _DAT_112f476d0;
                  func_0x000107c61428(lVar12 + _DAT_112f476d0,lVar10 + 0x80,0,0);
                  lVar12 = lVar12 + lVar15;
                  func_0x000107c61618();
                  if (lVar12 != 0) {
                    func_0x000107c3e3e0();
                    func_0x000107c615e8(lVar12);
                  }
                  func_0x000107c615e8(*(undefined8 *)(lVar10 + 0xe8));
                  lVar12 = *(long *)(lVar10 + 0xd0);
                  uVar3 = *(undefined8 *)(lVar10 + 0xb8);
                  func_0x000107c615c0(*(undefined8 *)(lVar10 + 0xd8));
                  func_0x000107c615c0(lVar12);
                  func_0x000107c615c0(uVar3);
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0x138))
                  {
                    func_0x000107c60e78();
                    *(undefined1 **)((long)plVar2 + -0x150) = (undefined1 *)((long)plVar2 + -0x120);
                    *(code **)((long)plVar2 + -0x148) = FUN_10319751c;
                    func_0x000107c615e8(*(undefined8 *)(lVar12 + 0x70));
                    func_0x000107c61170(*(undefined8 *)(lVar12 + 0x78));
                    FUN_103198414(lVar12 + _DAT_112f47d68,FUN_103197644);
                    func_0x000107c6142c(*(undefined8 *)(lVar12 + _DAT_112f47d70 + 0x10));
                    FUN_1031985fc(lVar12 + _DAT_113806f10);
                    func_0x000107c61470(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar12);
                    return;
                  }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(lVar10 + 8))();
                  return;
                }
                pcVar4 = FUN_103197234;
                puVar11 = (undefined8 *)0x0;
              }
            }
          }
        }
      }
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,puVar14,puVar11);
  return;
}



/* Entry: 103194c7c; end: 103194d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103194c7c(void)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long *unaff_x22;
  long *plVar18;
  long lVar19;
  long lVar20;
  ulong unaff_x29;
  code *pcStack_258;
  long lStack_250;
  long *plStack_248;
  ulong uStack_240;
  code *pcStack_238;
  long lStack_228;
  ulong uStack_220;
  long lStack_218;
  ulong uStack_210;
  code *pcStack_208;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  ulong *puStack_1e0;
  code *pcStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  ulong uStack_1c0;
  code *pcStack_1b8;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  ulong uStack_190;
  code *pcStack_188;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  ulong uStack_150;
  code *pcStack_148;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  code *pcStack_118;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  undefined8 *puStack_c0;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_78;
  long lStack_70;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_48;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c614cc(unaff_x22[0x36],unaff_x22 + 0x24,unaff_x22 + 5);
  lVar13 = unaff_x22[6];
  lVar10 = unaff_x22[7];
  func_0x000107c60640();
  unaff_x22[0x1a] = lVar13;
  unaff_x22[0x1b] = lVar10;
  *(undefined1 *)(unaff_x22 + 0x1c) = 1;
  uVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar3 != 0) {
    FUN_103187f64();
    func_0x000107c61658(unaff_x22 + 0x1a,&UNK_110618668,uVar3);
  }
  lVar15 = unaff_x22[0x33];
  lVar16 = unaff_x22[0x34];
  lVar19 = unaff_x22[0x32];
  lVar20 = unaff_x22[0x2f];
  func_0x000107c614ac(unaff_x22[0x36]);
  func_0x000107c61170(lVar20);
  (**(code **)(lVar15 + 8))(lVar16,lVar19);
  func_0x000107c615c0(lVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x000103194d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])(lVar13,lVar10,1);
    return;
  }
  func_0x000107c60e78();
  uStack_60 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_58 = FUN_103194d90;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = unaff_x22[0x39];
  puVar12 = (undefined8 *)unaff_x22[0x26];
  lStack_70 = lVar10;
  func_0x000107c61574(unaff_x22[0x3a]);
  FUN_103184874();
  func_0x000107c615e8(lVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    pcVar5 = FUN_103194e10;
    puVar11 = (undefined8 *)0x0;
    puVar14 = puVar12;
  }
  else {
    func_0x000107c60e78();
    uStack_90 = (ulong)&uStack_60 | 0x1000000000000000;
    pcStack_88 = FUN_103194e10;
    lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = unaff_x22[0x2f];
    func_0x000107c61170(unaff_x22[0x35]);
    func_0x000107c61170(lVar13);
    lVar13 = unaff_x22[0x34];
    (**(code **)(unaff_x22[0x33] + 8))(lVar13,unaff_x22[0x32]);
    func_0x000107c615c0(lVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
                    /* WARNING: Could not recover jumptable at 0x000103194e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)unaff_x22[1])();
      return;
    }
    func_0x000107c60e78();
    uStack_b0 = (ulong)&uStack_90 | 0x1000000000000000;
    pcStack_a8 = FUN_103194e98;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = *unaff_x22;
    uVar3 = *(undefined8 *)(lVar13 + 0x1d8);
    puVar14 = *(undefined8 **)(lVar13 + 0x130);
    plVar18 = (long *)*unaff_x22;
    puStack_c0 = puVar12;
    func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x1e0));
    func_0x0001000293e4(uVar3);
    func_0x000107c615c0(uVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
      pcVar5 = FUN_103194f28;
      puVar11 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c60e78();
      uStack_e0 = (ulong)&uStack_b0 | 0x1000000000000000;
      pcStack_d8 = FUN_103194f28;
      lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar18[0x21] = 0;
      plVar18[0x20] = 6;
      *(undefined1 *)(plVar18 + 0x22) = 4;
      uVar4 = 2;
      lStack_100 = lVar19;
      lStack_f8 = lVar16;
      uStack_f0 = uVar3;
      plStack_e8 = plVar18;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar4 != 0) {
        FUN_103187f64();
        func_0x000107c61658(plVar18 + 0x20,&UNK_110618668,uVar4);
      }
      lVar13 = plVar18[0x34];
      lVar10 = plVar18[0x32];
      lVar15 = plVar18[0x33];
      lVar16 = plVar18[0x2f];
      func_0x000107c61170(plVar18[0x35]);
      func_0x000107c61170(lVar16);
      (**(code **)(lVar15 + 8))(lVar13,lVar10);
      func_0x000107c615c0(lVar13);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
                    /* WARNING: Could not recover jumptable at 0x000103195008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar18[1])(6,0,4);
        return;
      }
      func_0x000107c60e78();
      uStack_120 = (ulong)&uStack_e0 | 0x1000000000000000;
      pcStack_118 = FUN_103195010;
      lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_128 = *plVar18;
      uVar3 = *(undefined8 *)(lStack_128 + 0x1e8);
      puVar14 = *(undefined8 **)(lStack_128 + 0x130);
      plVar18 = (long *)*plVar18;
      lStack_130 = lVar10;
      func_0x000107c615c0(*(undefined8 *)(lStack_128 + 0x1f0));
      func_0x0001000293e4(uVar3);
      func_0x000107c615c0(uVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
        pcVar5 = FUN_1031950a0;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c60e78();
        uStack_150 = (ulong)&uStack_120 | 0x1000000000000000;
        pcStack_148 = FUN_1031950a0;
        lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar18[0x1e] = 0;
        plVar18[0x1d] = 5;
        *(undefined1 *)(plVar18 + 0x1f) = 4;
        uVar4 = 2;
        lStack_170 = lVar15;
        lStack_168 = lVar16;
        uStack_160 = uVar3;
        plStack_158 = plVar18;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar4 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar18 + 0x1d,&UNK_110618668,uVar4);
        }
        lVar13 = plVar18[0x34];
        lVar10 = plVar18[0x32];
        lVar15 = plVar18[0x33];
        lVar16 = plVar18[0x2f];
        func_0x000107c61170(plVar18[0x35]);
        func_0x000107c61170(lVar16);
        (**(code **)(lVar15 + 8))(lVar13,lVar10);
        func_0x000107c615c0(lVar13);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
                    /* WARNING: Could not recover jumptable at 0x000103195184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar18[1])(5,0,4);
          return;
        }
        func_0x000107c60e78();
        uStack_190 = (ulong)&uStack_150 | 0x1000000000000000;
        pcStack_188 = FUN_10319518c;
        lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_198 = *plVar18;
        uVar3 = *(undefined8 *)(lStack_198 + 0x1f8);
        puVar14 = *(undefined8 **)(lStack_198 + 0x130);
        plVar18 = (long *)*plVar18;
        lStack_1a0 = lVar10;
        func_0x000107c615c0(*(undefined8 *)(lStack_198 + 0x200));
        func_0x0001000293e4(uVar3);
        func_0x000107c615c0(uVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
          pcVar5 = FUN_10319521c;
          puVar11 = (undefined8 *)0x0;
        }
        else {
          func_0x000107c60e78();
          uStack_1c0 = (ulong)&uStack_190 | 0x1000000000000000;
          plVar2 = &lStack_1d0;
          pcStack_1b8 = FUN_10319521c;
          lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
          plVar18[0x14] = 0;
          plVar18[0x15] = 0;
          *(undefined1 *)(plVar18 + 0x16) = 4;
          uVar4 = 2;
          plStack_1c8 = plVar18;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar4 != 0) {
            FUN_103187f64();
            func_0x000107c61658(plVar18 + 0x14,&UNK_110618668,uVar4);
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)plVar18[1])(0,0,4);
            return;
          }
          func_0x000107c60e78();
          puStack_1e0 = (ulong *)((ulong)&uStack_1c0 | 0x1000000000000000);
          pcStack_1d8 = FUN_1031952c0;
          lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar13 = 0x112d36580;
          uStack_1f0 = uVar3;
          plStack_1e8 = plVar18;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          uVar6 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar18[0x41] = uVar6;
          lVar13 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar13 + -8) + 0x38))(uVar6,1,1,lVar13);
          plVar7 = (long *)0x100;
          func_0x000107c615b8();
          plVar18[0x42] = (long)plVar7;
          *plVar7 = (long)plVar18;
          plVar7[1] = (long)FUN_103195398;
          puVar14 = (undefined8 *)plVar18[0x26];
          uVar3 = uStack_1f0;
          pcStack_258 = pcStack_1d8;
          puVar1 = puStack_1e0;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
            func_0x000107c60e78();
            uStack_210 = (ulong)&puStack_1e0 | 0x1000000000000000;
            pcStack_208 = FUN_103195398;
            lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lStack_218 = *plVar18;
            uVar3 = *(undefined8 *)(lStack_218 + 0x208);
            puVar14 = *(undefined8 **)(lStack_218 + 0x130);
            plVar18 = (long *)*plVar18;
            uStack_220 = uVar6;
            func_0x000107c615c0(*(undefined8 *)(lStack_218 + 0x210));
            func_0x0001000293e4(uVar3);
            func_0x000107c615c0(uVar3);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
              pcVar5 = FUN_10319542c;
              puVar11 = (undefined8 *)0x0;
              goto LAB_107c615e0;
            }
            func_0x000107c60e78();
            uStack_240 = (ulong)&uStack_210 | 0x1000000000000000;
            plVar2 = &lStack_250;
            pcStack_238 = FUN_10319542c;
            lStack_250 = *(long *)PTR____stack_chk_guard_11034bdc0;
            plVar18[0x12] = plVar18[0x2d];
            plVar18[0x11] = plVar18[0x2c];
            *(undefined1 *)(plVar18 + 0x13) = *(undefined1 *)((long)plVar18 + 0x81);
            uVar4 = 2;
            plStack_248 = plVar18;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar4 != 0) {
              FUN_103187f64();
              func_0x000107c61658(plVar18 + 0x11,&UNK_110618668,uVar4);
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_250) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)plVar18[1])();
              return;
            }
            func_0x000107c60e78(plVar18[0x2c],plVar18[0x2d],*(undefined1 *)((long)plVar18 + 0x81));
            pcStack_258 = FUN_1031954d0;
            lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar13 = 0x112d36580;
            func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
            uVar6 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            plVar18[0x43] = uVar6;
            lVar13 = 0;
            func_0x000107c5ede0();
            (**(code **)(*(long *)(lVar13 + -8) + 0x38))(uVar6,1,1,lVar13);
            plVar7 = (long *)0x100;
            func_0x000107c615b8();
            plVar18[0x44] = (long)plVar7;
            *plVar7 = (long)plVar18;
            plVar7[1] = (long)FUN_1031955a8;
            puVar14 = (undefined8 *)plVar18[0x26];
            puVar1 = &uStack_240;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
              func_0x000107c60e78();
              lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
              lVar10 = *plVar18;
              uVar3 = *(undefined8 *)(lVar10 + 0x218);
              puVar14 = *(undefined8 **)(lVar10 + 0x130);
              lVar15 = *plVar18;
              func_0x000107c615c0(*(undefined8 *)(lVar10 + 0x220));
              func_0x0001000293e4(uVar3);
              func_0x000107c615c0(uVar3);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                pcVar5 = FUN_10319563c;
                puVar11 = (undefined8 *)0x0;
              }
              else {
                func_0x000107c60e78();
                lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
                *(undefined8 *)(lVar15 + 0xc0) = *(undefined8 *)(lVar15 + 0x180);
                *(undefined8 *)(lVar15 + 0xb8) = *(undefined8 *)(lVar15 + 0x178);
                *(undefined1 *)(lVar15 + 200) = *(undefined1 *)(lVar15 + 0x82);
                uVar3 = 2;
                func_0x000100029b9c(2,0x12,0,0);
                if ((int)uVar3 != 0) {
                  FUN_103187f64();
                  func_0x000107c61658((undefined8 *)(lVar15 + 0xb8),&UNK_110618668,uVar3);
                }
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(lVar15 + 8))();
                  return;
                }
                func_0x000107c60e78(*(undefined8 *)(lVar15 + 0x178),*(undefined8 *)(lVar15 + 0x180),
                                    *(undefined1 *)(lVar15 + 0x82));
                pcVar5 = FUN_1031956f8;
                puVar14 = (undefined8 *)0x0;
                puVar11 = (undefined8 *)0x0;
              }
              goto LAB_107c615e0;
            }
          }
          *(ulong *)((long)plVar2 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000
          ;
          *(code **)((long)plVar2 + -8) = pcStack_258;
          *(long **)((long)plVar2 + -0x18) = plVar7;
          *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          plVar7[0x15] = uVar6;
          plVar7[0x16] = (long)puVar14;
          plVar7[0x14] = 0;
          lVar13 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          uVar6 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar7[0x17] = uVar6;
          lVar13 = 0;
          func_0x000107c5ede0();
          plVar7[0x18] = lVar13;
          lVar13 = *(long *)(lVar13 + -8);
          plVar7[0x19] = lVar13;
          uVar6 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar7[0x1a] = uVar6;
          lVar13 = 0;
          FUN_103197644();
          uVar6 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar7[0x1b] = uVar6;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x20)) {
            pcVar5 = FUN_103196dcc;
            puVar11 = (undefined8 *)0x0;
          }
          else {
            func_0x000107c60e78();
            *(long *)((long)plVar2 + -0x50) = lVar15;
            *(long *)((long)plVar2 + -0x48) = lVar16;
            *(undefined8 *)((long)plVar2 + -0x40) = uVar3;
            *(ulong *)((long)plVar2 + -0x30) = (ulong)((long)plVar2 + -0x10) | 0x1000000000000000;
            *(code **)((long)plVar2 + -0x28) = FUN_103196dcc;
            *(long **)((long)plVar2 + -0x38) = plVar7;
            *(undefined8 *)((long)plVar2 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            lVar15 = plVar7[0x1b];
            lVar10 = plVar7[0x16];
            puVar17 = (undefined *)plVar7[0x14];
            lVar13 = 0;
            FUN_103197894();
            (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar15,1,1,lVar13);
            lVar13 = _DAT_112f47d68;
            func_0x000107c61428(lVar10 + _DAT_112f47d68,plVar7 + 10,0x21,0);
            func_0x000103187ec0(lVar15,lVar10 + lVar13);
            func_0x000107c614a8(plVar7 + 10);
            lVar13 = 8;
            func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
            *(undefined8 *)(lVar13 + 0x10) = 8;
            *(undefined8 *)(lVar13 + 0x28) = 0;
            *(undefined8 *)(lVar13 + 0x20) = 0;
            *(undefined8 *)(lVar13 + 0x38) = 0;
            *(undefined8 *)(lVar13 + 0x30) = 0;
            *(undefined8 *)(lVar13 + 0x48) = 0;
            *(undefined8 *)(lVar13 + 0x40) = 0;
            *(undefined8 *)(lVar13 + 0x58) = 0;
            *(undefined8 *)(lVar13 + 0x50) = 0;
            puVar12 = (undefined8 *)(lVar10 + _DAT_112f47d70);
            func_0x000107c61428(puVar12,plVar7 + 0xd,1,0);
            uVar3 = puVar12[2];
            *puVar12 = 0;
            puVar12[1] = 0x3fd3333333333333;
            puVar12[2] = lVar13;
            func_0x000107c6142c(uVar3);
            if (puVar17 == (undefined *)0x0) {
              lVar13 = plVar7[0x18];
              puVar17 = (undefined *)plVar7[0x19];
              lVar10 = plVar7[0x17];
              FUN_103198594(plVar7[0x15],lVar10,0x112d36580,&UNK_10d9016d0);
              (**(code **)(puVar17 + 0x30))(lVar10,1,lVar13);
              if ((int)lVar10 == 1) {
                func_0x0001000293e4(plVar7[0x17]);
              }
              else {
                (**(code **)(plVar7[0x19] + 0x20))(plVar7[0x1a],plVar7[0x17],plVar7[0x18]);
                puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
                func_0x000107c61168();
                func_0x000107c415e0();
                func_0x000107c61180();
                puVar8 = puVar17;
                func_0x000107c5ed90();
                plVar7[0x13] = 0;
                puVar9 = puVar17;
                func_0x000107c4ff50();
                func_0x000107c61170(puVar8);
                func_0x000107c61170(puVar17);
                puVar17 = (undefined *)plVar7[0x13];
                if ((int)puVar9 == 0) {
                  puVar8 = puVar17;
                  func_0x000107c61174(puVar17);
                  func_0x000107c5ed30();
                  func_0x000107c61170(puVar8);
                  func_0x000107c61654();
                  func_0x000107c614ac(puVar17);
                }
                else {
                  func_0x000107c61174(puVar17);
                  puVar17 = puVar9;
                }
                (**(code **)(plVar7[0x19] + 8))(plVar7[0x1a],plVar7[0x18]);
              }
              lVar13 = plVar7[0x16] + _DAT_113806f10;
              func_0x000107c61618();
              plVar7[0x1d] = lVar13;
              if (lVar13 == 0) {
                lVar13 = plVar7[0x1a];
                puVar12 = (undefined8 *)plVar7[0x17];
                func_0x000107c615c0(plVar7[0x1b]);
                func_0x000107c615c0(lVar13);
                func_0x000107c615c0(puVar12);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)plVar7[1])();
                  return;
                }
              }
              else {
                puVar12 = (undefined8 *)0x0;
                func_0x000107c5fcec();
                puVar11 = puVar12;
                func_0x000107c5fce8();
                plVar7[0x1e] = (long)puVar11;
                func_0x000100eea164();
                puVar14 = puVar12;
                func_0x000107c5fca8(puVar12,puVar11);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                  pcVar5 = FUN_103197450;
                  goto LAB_107c615e0;
                }
              }
            }
            else {
              plVar7[0x1c] = *(long *)(plVar7[0x16] + 0x70);
              func_0x000107c61174(plVar7[0x14]);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                pcVar5 = FUN_1031970e0;
                puVar14 = (undefined8 *)0x0;
                puVar11 = (undefined8 *)0x0;
                goto LAB_107c615e0;
              }
            }
            func_0x000107c60e78();
            *(undefined8 **)((long)plVar2 + -0x80) = puVar12;
            *(ulong *)((long)plVar2 + -0x70) = (ulong)((long)plVar2 + -0x30) | 0x1000000000000000;
            *(code **)((long)plVar2 + -0x68) = FUN_1031970e0;
            *(long **)((long)plVar2 + -0x78) = plVar7;
            *(undefined8 *)((long)plVar2 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            lVar13 = plVar7[0x14];
            plVar7[2] = (long)plVar7;
            plVar7[3] = (long)FUN_103197168;
            func_0x000107c61448(plVar7 + 2,0);
            func_0x0001031982f4();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_continuation_await_110350070)(plVar7 + 2);
              return;
            }
            func_0x000107c60e78();
            *(ulong *)((long)plVar2 + -0xa0) = (ulong)((long)plVar2 + -0x70) | 0x1000000000000000;
            *(code **)((long)plVar2 + -0x98) = FUN_103197168;
            *(long **)((long)plVar2 + -0xa8) = plVar7;
            *(undefined8 *)((long)plVar2 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            *(long *)((long)plVar2 + -0xa8) = *plVar7;
            lVar10 = *plVar7;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0xb0)) {
              pcVar5 = (code *)0x1031971d4;
              puVar14 = (undefined8 *)0x0;
              puVar11 = (undefined8 *)0x0;
            }
            else {
              func_0x000107c60e78();
              *(ulong *)((long)plVar2 + -0xc0) = (ulong)((long)plVar2 + -0xa0) | 0x1000000000000000;
              *(undefined8 *)((long)plVar2 + -0xb8) = 0x1031971d4;
              *(long *)((long)plVar2 + -200) = lVar10;
              *(undefined8 *)((long)plVar2 + -0xd0) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              puVar14 = *(undefined8 **)(lVar10 + 0xb0);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0xd0)) {
                func_0x000107c60e78();
                *(undefined8 *)((long)plVar2 + -0x100) = 8;
                *(undefined **)((long)plVar2 + -0xf8) = puVar17;
                *(long *)((long)plVar2 + -0xf0) = lVar13;
                *(ulong *)((long)plVar2 + -0xe0) =
                     (ulong)((long)plVar2 + -0xc0) | 0x1000000000000000;
                *(code **)((long)plVar2 + -0xd8) = FUN_103197234;
                *(long *)((long)plVar2 + -0xe8) = lVar10;
                *(undefined8 *)((long)plVar2 + -0x108) =
                     *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                func_0x000107c61170(*(undefined8 *)(lVar10 + 0xa0));
                uVar3 = *(undefined8 *)(lVar10 + 0xc0);
                lVar13 = *(long *)(lVar10 + 200);
                uVar4 = *(undefined8 *)(lVar10 + 0xb8);
                FUN_103198594(*(undefined8 *)(lVar10 + 0xa8),uVar4,0x112d36580,&UNK_10d9016d0);
                (**(code **)(lVar13 + 0x30))(uVar4,1,uVar3);
                if ((int)uVar4 == 1) {
                  func_0x0001000293e4(*(undefined8 *)(lVar10 + 0xb8));
                }
                else {
                  (**(code **)(*(long *)(lVar10 + 200) + 0x20))
                            (*(undefined8 *)(lVar10 + 0xd0),*(undefined8 *)(lVar10 + 0xb8),
                             *(undefined8 *)(lVar10 + 0xc0));
                  puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
                  func_0x000107c61168();
                  func_0x000107c415e0();
                  func_0x000107c61180();
                  puVar8 = puVar17;
                  func_0x000107c5ed90();
                  *(undefined8 *)(lVar10 + 0x98) = 0;
                  puVar9 = puVar17;
                  func_0x000107c4ff50();
                  func_0x000107c61170(puVar8);
                  func_0x000107c61170(puVar17);
                  uVar3 = *(undefined8 *)(lVar10 + 0x98);
                  if ((int)puVar9 == 0) {
                    uVar4 = uVar3;
                    func_0x000107c61174(uVar3);
                    func_0x000107c5ed30(uVar3);
                    func_0x000107c61170(uVar4);
                    func_0x000107c61654();
                    func_0x000107c614ac(uVar3);
                  }
                  else {
                    func_0x000107c61174(uVar3);
                  }
                  (**(code **)(*(long *)(lVar10 + 200) + 8))
                            (*(undefined8 *)(lVar10 + 0xd0),*(undefined8 *)(lVar10 + 0xc0));
                }
                lVar13 = *(long *)(lVar10 + 0xb0) + _DAT_113806f10;
                func_0x000107c61618();
                *(long *)(lVar10 + 0xe8) = lVar13;
                if (lVar13 == 0) {
                  uVar3 = *(undefined8 *)(lVar10 + 0xd0);
                  puVar12 = *(undefined8 **)(lVar10 + 0xb8);
                  func_0x000107c615c0(*(undefined8 *)(lVar10 + 0xd8));
                  func_0x000107c615c0(uVar3);
                  func_0x000107c615c0(puVar12);
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108))
                  {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(lVar10 + 8))();
                    return;
                  }
                }
                else {
                  puVar12 = (undefined8 *)0x0;
                  func_0x000107c5fcec();
                  puVar11 = puVar12;
                  func_0x000107c5fce8();
                  *(undefined8 **)(lVar10 + 0xf0) = puVar11;
                  func_0x000100eea164();
                  puVar14 = puVar12;
                  func_0x000107c5fca8(puVar12,puVar11);
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108))
                  {
                    pcVar5 = FUN_103197450;
                    goto LAB_107c615e0;
                  }
                }
                func_0x000107c60e78();
                *(undefined8 **)((long)plVar2 + -0x130) = puVar12;
                *(ulong *)((long)plVar2 + -0x120) =
                     (ulong)((long)plVar2 + -0xe0) | 0x1000000000000000;
                *(code **)((long)plVar2 + -0x118) = FUN_103197450;
                *(long *)((long)plVar2 + -0x128) = lVar10;
                *(undefined8 *)((long)plVar2 + -0x138) =
                     *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                lVar13 = *(long *)(lVar10 + 0xe8);
                func_0x000107c61574(*(undefined8 *)(lVar10 + 0xf0));
                lVar15 = _DAT_112f476d0;
                func_0x000107c61428(lVar13 + _DAT_112f476d0,lVar10 + 0x80,0,0);
                lVar13 = lVar13 + lVar15;
                func_0x000107c61618();
                if (lVar13 != 0) {
                  func_0x000107c3e3e0();
                  func_0x000107c615e8(lVar13);
                }
                func_0x000107c615e8(*(undefined8 *)(lVar10 + 0xe8));
                lVar13 = *(long *)(lVar10 + 0xd0);
                uVar3 = *(undefined8 *)(lVar10 + 0xb8);
                func_0x000107c615c0(*(undefined8 *)(lVar10 + 0xd8));
                func_0x000107c615c0(lVar13);
                func_0x000107c615c0(uVar3);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0x138)) {
                  func_0x000107c60e78();
                  *(undefined1 **)((long)plVar2 + -0x150) = (undefined1 *)((long)plVar2 + -0x120);
                  *(code **)((long)plVar2 + -0x148) = FUN_10319751c;
                  func_0x000107c615e8(*(undefined8 *)(lVar13 + 0x70));
                  func_0x000107c61170(*(undefined8 *)(lVar13 + 0x78));
                  FUN_103198414(lVar13 + _DAT_112f47d68,FUN_103197644);
                  func_0x000107c6142c(*(undefined8 *)(lVar13 + _DAT_112f47d70 + 0x10));
                  FUN_1031985fc(lVar13 + _DAT_113806f10);
                  func_0x000107c61470(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar13);
                  return;
                }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar10 + 8))();
                return;
              }
              pcVar5 = FUN_103197234;
              puVar11 = (undefined8 *)0x0;
            }
          }
        }
      }
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,puVar14,puVar11);
  return;
}



/* Entry: 103194d90; end: 103194e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103194d90(void)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long *unaff_x22;
  long *plVar18;
  ulong unaff_x29;
  code *pcStack_208;
  long lStack_200;
  long *plStack_1f8;
  ulong uStack_1f0;
  code *pcStack_1e8;
  long lStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  code *pcStack_1b8;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  ulong *puStack_190;
  code *pcStack_188;
  long lStack_180;
  long *plStack_178;
  ulong uStack_170;
  code *pcStack_168;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  ulong uStack_140;
  code *pcStack_138;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_78;
  undefined8 *puStack_70;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_50;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_28;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = unaff_x22[0x39];
  puVar11 = (undefined8 *)unaff_x22[0x26];
  func_0x000107c61574(unaff_x22[0x3a]);
  FUN_103184874();
  func_0x000107c615e8(lVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    pcVar4 = FUN_103194e10;
    puVar10 = (undefined8 *)0x0;
    puVar14 = puVar11;
  }
  else {
    func_0x000107c60e78();
    uStack_40 = (ulong)&uStack_10 | 0x1000000000000000;
    pcStack_38 = FUN_103194e10;
    lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = unaff_x22[0x2f];
    func_0x000107c61170(unaff_x22[0x35]);
    func_0x000107c61170(lVar13);
    lVar13 = unaff_x22[0x34];
    (**(code **)(unaff_x22[0x33] + 8))(lVar13,unaff_x22[0x32]);
    func_0x000107c615c0(lVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
                    /* WARNING: Could not recover jumptable at 0x000103194e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)unaff_x22[1])();
      return;
    }
    func_0x000107c60e78();
    uStack_60 = (ulong)&uStack_40 | 0x1000000000000000;
    pcStack_58 = FUN_103194e98;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = *unaff_x22;
    uVar3 = *(undefined8 *)(lVar13 + 0x1d8);
    puVar14 = *(undefined8 **)(lVar13 + 0x130);
    plVar18 = (long *)*unaff_x22;
    puStack_70 = puVar11;
    func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x1e0));
    func_0x0001000293e4(uVar3);
    func_0x000107c615c0(uVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      pcVar4 = FUN_103194f28;
      puVar10 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c60e78();
      uStack_90 = (ulong)&uStack_60 | 0x1000000000000000;
      pcStack_88 = FUN_103194f28;
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar18[0x21] = 0;
      plVar18[0x20] = 6;
      *(undefined1 *)(plVar18 + 0x22) = 4;
      uVar3 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar3 != 0) {
        FUN_103187f64();
        func_0x000107c61658(plVar18 + 0x20,&UNK_110618668,uVar3);
      }
      lVar13 = plVar18[0x34];
      lVar12 = plVar18[0x32];
      lVar15 = plVar18[0x33];
      lVar16 = plVar18[0x2f];
      func_0x000107c61170(plVar18[0x35]);
      func_0x000107c61170(lVar16);
      (**(code **)(lVar15 + 8))(lVar13,lVar12);
      func_0x000107c615c0(lVar13);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
                    /* WARNING: Could not recover jumptable at 0x000103195008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar18[1])(6,0,4);
        return;
      }
      func_0x000107c60e78();
      uStack_d0 = (ulong)&uStack_90 | 0x1000000000000000;
      pcStack_c8 = FUN_103195010;
      lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_d8 = *plVar18;
      uVar3 = *(undefined8 *)(lStack_d8 + 0x1e8);
      puVar14 = *(undefined8 **)(lStack_d8 + 0x130);
      plVar18 = (long *)*plVar18;
      lStack_e0 = lVar12;
      func_0x000107c615c0(*(undefined8 *)(lStack_d8 + 0x1f0));
      func_0x0001000293e4(uVar3);
      func_0x000107c615c0(uVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
        pcVar4 = FUN_1031950a0;
        puVar10 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c60e78();
        uStack_100 = (ulong)&uStack_d0 | 0x1000000000000000;
        pcStack_f8 = FUN_1031950a0;
        lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar18[0x1e] = 0;
        plVar18[0x1d] = 5;
        *(undefined1 *)(plVar18 + 0x1f) = 4;
        uVar5 = 2;
        lStack_120 = lVar15;
        lStack_118 = lVar16;
        uStack_110 = uVar3;
        plStack_108 = plVar18;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar5 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar18 + 0x1d,&UNK_110618668,uVar5);
        }
        lVar13 = plVar18[0x34];
        lVar12 = plVar18[0x32];
        lVar15 = plVar18[0x33];
        lVar16 = plVar18[0x2f];
        func_0x000107c61170(plVar18[0x35]);
        func_0x000107c61170(lVar16);
        (**(code **)(lVar15 + 8))(lVar13,lVar12);
        func_0x000107c615c0(lVar13);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
                    /* WARNING: Could not recover jumptable at 0x000103195184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar18[1])(5,0,4);
          return;
        }
        func_0x000107c60e78();
        uStack_140 = (ulong)&uStack_100 | 0x1000000000000000;
        pcStack_138 = FUN_10319518c;
        lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_148 = *plVar18;
        uVar3 = *(undefined8 *)(lStack_148 + 0x1f8);
        puVar14 = *(undefined8 **)(lStack_148 + 0x130);
        plVar18 = (long *)*plVar18;
        lStack_150 = lVar12;
        func_0x000107c615c0(*(undefined8 *)(lStack_148 + 0x200));
        func_0x0001000293e4(uVar3);
        func_0x000107c615c0(uVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
          pcVar4 = FUN_10319521c;
          puVar10 = (undefined8 *)0x0;
        }
        else {
          func_0x000107c60e78();
          uStack_170 = (ulong)&uStack_140 | 0x1000000000000000;
          plVar2 = &lStack_180;
          pcStack_168 = FUN_10319521c;
          lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
          plVar18[0x14] = 0;
          plVar18[0x15] = 0;
          *(undefined1 *)(plVar18 + 0x16) = 4;
          uVar5 = 2;
          plStack_178 = plVar18;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar5 != 0) {
            FUN_103187f64();
            func_0x000107c61658(plVar18 + 0x14,&UNK_110618668,uVar5);
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)plVar18[1])(0,0,4);
            return;
          }
          func_0x000107c60e78();
          puStack_190 = (ulong *)((ulong)&uStack_170 | 0x1000000000000000);
          pcStack_188 = FUN_1031952c0;
          lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar13 = 0x112d36580;
          uStack_1a0 = uVar3;
          plStack_198 = plVar18;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          uVar6 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar18[0x41] = uVar6;
          lVar13 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar13 + -8) + 0x38))(uVar6,1,1,lVar13);
          plVar7 = (long *)0x100;
          func_0x000107c615b8();
          plVar18[0x42] = (long)plVar7;
          *plVar7 = (long)plVar18;
          plVar7[1] = (long)FUN_103195398;
          puVar14 = (undefined8 *)plVar18[0x26];
          uVar3 = uStack_1a0;
          pcStack_208 = pcStack_188;
          puVar1 = puStack_190;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
            func_0x000107c60e78();
            uStack_1c0 = (ulong)&puStack_190 | 0x1000000000000000;
            pcStack_1b8 = FUN_103195398;
            lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lStack_1c8 = *plVar18;
            uVar3 = *(undefined8 *)(lStack_1c8 + 0x208);
            puVar14 = *(undefined8 **)(lStack_1c8 + 0x130);
            plVar18 = (long *)*plVar18;
            uStack_1d0 = uVar6;
            func_0x000107c615c0(*(undefined8 *)(lStack_1c8 + 0x210));
            func_0x0001000293e4(uVar3);
            func_0x000107c615c0(uVar3);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
              pcVar4 = FUN_10319542c;
              puVar10 = (undefined8 *)0x0;
              goto LAB_107c615e0;
            }
            func_0x000107c60e78();
            uStack_1f0 = (ulong)&uStack_1c0 | 0x1000000000000000;
            plVar2 = &lStack_200;
            pcStack_1e8 = FUN_10319542c;
            lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
            plVar18[0x12] = plVar18[0x2d];
            plVar18[0x11] = plVar18[0x2c];
            *(undefined1 *)(plVar18 + 0x13) = *(undefined1 *)((long)plVar18 + 0x81);
            uVar5 = 2;
            plStack_1f8 = plVar18;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar5 != 0) {
              FUN_103187f64();
              func_0x000107c61658(plVar18 + 0x11,&UNK_110618668,uVar5);
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)plVar18[1])();
              return;
            }
            func_0x000107c60e78(plVar18[0x2c],plVar18[0x2d],*(undefined1 *)((long)plVar18 + 0x81));
            pcStack_208 = FUN_1031954d0;
            lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar13 = 0x112d36580;
            func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
            uVar6 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            plVar18[0x43] = uVar6;
            lVar13 = 0;
            func_0x000107c5ede0();
            (**(code **)(*(long *)(lVar13 + -8) + 0x38))(uVar6,1,1,lVar13);
            plVar7 = (long *)0x100;
            func_0x000107c615b8();
            plVar18[0x44] = (long)plVar7;
            *plVar7 = (long)plVar18;
            plVar7[1] = (long)FUN_1031955a8;
            puVar14 = (undefined8 *)plVar18[0x26];
            puVar1 = &uStack_1f0;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
              func_0x000107c60e78();
              lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
              lVar12 = *plVar18;
              uVar3 = *(undefined8 *)(lVar12 + 0x218);
              puVar14 = *(undefined8 **)(lVar12 + 0x130);
              lVar15 = *plVar18;
              func_0x000107c615c0(*(undefined8 *)(lVar12 + 0x220));
              func_0x0001000293e4(uVar3);
              func_0x000107c615c0(uVar3);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                pcVar4 = FUN_10319563c;
                puVar10 = (undefined8 *)0x0;
              }
              else {
                func_0x000107c60e78();
                lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
                *(undefined8 *)(lVar15 + 0xc0) = *(undefined8 *)(lVar15 + 0x180);
                *(undefined8 *)(lVar15 + 0xb8) = *(undefined8 *)(lVar15 + 0x178);
                *(undefined1 *)(lVar15 + 200) = *(undefined1 *)(lVar15 + 0x82);
                uVar3 = 2;
                func_0x000100029b9c(2,0x12,0,0);
                if ((int)uVar3 != 0) {
                  FUN_103187f64();
                  func_0x000107c61658((undefined8 *)(lVar15 + 0xb8),&UNK_110618668,uVar3);
                }
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(lVar15 + 8))();
                  return;
                }
                func_0x000107c60e78(*(undefined8 *)(lVar15 + 0x178),*(undefined8 *)(lVar15 + 0x180),
                                    *(undefined1 *)(lVar15 + 0x82));
                pcVar4 = FUN_1031956f8;
                puVar14 = (undefined8 *)0x0;
                puVar10 = (undefined8 *)0x0;
              }
              goto LAB_107c615e0;
            }
          }
          *(ulong *)((long)plVar2 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000
          ;
          *(code **)((long)plVar2 + -8) = pcStack_208;
          *(long **)((long)plVar2 + -0x18) = plVar7;
          *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          plVar7[0x15] = uVar6;
          plVar7[0x16] = (long)puVar14;
          plVar7[0x14] = 0;
          lVar13 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          uVar6 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar7[0x17] = uVar6;
          lVar13 = 0;
          func_0x000107c5ede0();
          plVar7[0x18] = lVar13;
          lVar13 = *(long *)(lVar13 + -8);
          plVar7[0x19] = lVar13;
          uVar6 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar7[0x1a] = uVar6;
          lVar13 = 0;
          FUN_103197644();
          uVar6 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar7[0x1b] = uVar6;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x20)) {
            pcVar4 = FUN_103196dcc;
            puVar10 = (undefined8 *)0x0;
          }
          else {
            func_0x000107c60e78();
            *(long *)((long)plVar2 + -0x50) = lVar15;
            *(long *)((long)plVar2 + -0x48) = lVar16;
            *(undefined8 *)((long)plVar2 + -0x40) = uVar3;
            *(ulong *)((long)plVar2 + -0x30) = (ulong)((long)plVar2 + -0x10) | 0x1000000000000000;
            *(code **)((long)plVar2 + -0x28) = FUN_103196dcc;
            *(long **)((long)plVar2 + -0x38) = plVar7;
            *(undefined8 *)((long)plVar2 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            lVar15 = plVar7[0x1b];
            lVar12 = plVar7[0x16];
            puVar17 = (undefined *)plVar7[0x14];
            lVar13 = 0;
            FUN_103197894();
            (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar15,1,1,lVar13);
            lVar13 = _DAT_112f47d68;
            func_0x000107c61428(lVar12 + _DAT_112f47d68,plVar7 + 10,0x21,0);
            func_0x000103187ec0(lVar15,lVar12 + lVar13);
            func_0x000107c614a8(plVar7 + 10);
            lVar13 = 8;
            func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
            *(undefined8 *)(lVar13 + 0x10) = 8;
            *(undefined8 *)(lVar13 + 0x28) = 0;
            *(undefined8 *)(lVar13 + 0x20) = 0;
            *(undefined8 *)(lVar13 + 0x38) = 0;
            *(undefined8 *)(lVar13 + 0x30) = 0;
            *(undefined8 *)(lVar13 + 0x48) = 0;
            *(undefined8 *)(lVar13 + 0x40) = 0;
            *(undefined8 *)(lVar13 + 0x58) = 0;
            *(undefined8 *)(lVar13 + 0x50) = 0;
            puVar11 = (undefined8 *)(lVar12 + _DAT_112f47d70);
            func_0x000107c61428(puVar11,plVar7 + 0xd,1,0);
            uVar3 = puVar11[2];
            *puVar11 = 0;
            puVar11[1] = 0x3fd3333333333333;
            puVar11[2] = lVar13;
            func_0x000107c6142c(uVar3);
            if (puVar17 == (undefined *)0x0) {
              lVar13 = plVar7[0x18];
              puVar17 = (undefined *)plVar7[0x19];
              lVar12 = plVar7[0x17];
              FUN_103198594(plVar7[0x15],lVar12,0x112d36580,&UNK_10d9016d0);
              (**(code **)(puVar17 + 0x30))(lVar12,1,lVar13);
              if ((int)lVar12 == 1) {
                func_0x0001000293e4(plVar7[0x17]);
              }
              else {
                (**(code **)(plVar7[0x19] + 0x20))(plVar7[0x1a],plVar7[0x17],plVar7[0x18]);
                puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
                func_0x000107c61168();
                func_0x000107c415e0();
                func_0x000107c61180();
                puVar8 = puVar17;
                func_0x000107c5ed90();
                plVar7[0x13] = 0;
                puVar9 = puVar17;
                func_0x000107c4ff50();
                func_0x000107c61170(puVar8);
                func_0x000107c61170(puVar17);
                puVar17 = (undefined *)plVar7[0x13];
                if ((int)puVar9 == 0) {
                  puVar8 = puVar17;
                  func_0x000107c61174(puVar17);
                  func_0x000107c5ed30();
                  func_0x000107c61170(puVar8);
                  func_0x000107c61654();
                  func_0x000107c614ac(puVar17);
                }
                else {
                  func_0x000107c61174(puVar17);
                  puVar17 = puVar9;
                }
                (**(code **)(plVar7[0x19] + 8))(plVar7[0x1a],plVar7[0x18]);
              }
              lVar13 = plVar7[0x16] + _DAT_113806f10;
              func_0x000107c61618();
              plVar7[0x1d] = lVar13;
              if (lVar13 == 0) {
                lVar13 = plVar7[0x1a];
                puVar11 = (undefined8 *)plVar7[0x17];
                func_0x000107c615c0(plVar7[0x1b]);
                func_0x000107c615c0(lVar13);
                func_0x000107c615c0(puVar11);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)plVar7[1])();
                  return;
                }
              }
              else {
                puVar11 = (undefined8 *)0x0;
                func_0x000107c5fcec();
                puVar10 = puVar11;
                func_0x000107c5fce8();
                plVar7[0x1e] = (long)puVar10;
                func_0x000100eea164();
                puVar14 = puVar11;
                func_0x000107c5fca8(puVar11,puVar10);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                  pcVar4 = FUN_103197450;
                  goto LAB_107c615e0;
                }
              }
            }
            else {
              plVar7[0x1c] = *(long *)(plVar7[0x16] + 0x70);
              func_0x000107c61174(plVar7[0x14]);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                pcVar4 = FUN_1031970e0;
                puVar14 = (undefined8 *)0x0;
                puVar10 = (undefined8 *)0x0;
                goto LAB_107c615e0;
              }
            }
            func_0x000107c60e78();
            *(undefined8 **)((long)plVar2 + -0x80) = puVar11;
            *(ulong *)((long)plVar2 + -0x70) = (ulong)((long)plVar2 + -0x30) | 0x1000000000000000;
            *(code **)((long)plVar2 + -0x68) = FUN_1031970e0;
            *(long **)((long)plVar2 + -0x78) = plVar7;
            *(undefined8 *)((long)plVar2 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            lVar13 = plVar7[0x14];
            plVar7[2] = (long)plVar7;
            plVar7[3] = (long)FUN_103197168;
            func_0x000107c61448(plVar7 + 2,0);
            func_0x0001031982f4();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_continuation_await_110350070)(plVar7 + 2);
              return;
            }
            func_0x000107c60e78();
            *(ulong *)((long)plVar2 + -0xa0) = (ulong)((long)plVar2 + -0x70) | 0x1000000000000000;
            *(code **)((long)plVar2 + -0x98) = FUN_103197168;
            *(long **)((long)plVar2 + -0xa8) = plVar7;
            *(undefined8 *)((long)plVar2 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            *(long *)((long)plVar2 + -0xa8) = *plVar7;
            lVar12 = *plVar7;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0xb0)) {
              pcVar4 = (code *)0x1031971d4;
              puVar14 = (undefined8 *)0x0;
              puVar10 = (undefined8 *)0x0;
            }
            else {
              func_0x000107c60e78();
              *(ulong *)((long)plVar2 + -0xc0) = (ulong)((long)plVar2 + -0xa0) | 0x1000000000000000;
              *(undefined8 *)((long)plVar2 + -0xb8) = 0x1031971d4;
              *(long *)((long)plVar2 + -200) = lVar12;
              *(undefined8 *)((long)plVar2 + -0xd0) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              puVar14 = *(undefined8 **)(lVar12 + 0xb0);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0xd0)) {
                func_0x000107c60e78();
                *(undefined8 *)((long)plVar2 + -0x100) = 8;
                *(undefined **)((long)plVar2 + -0xf8) = puVar17;
                *(long *)((long)plVar2 + -0xf0) = lVar13;
                *(ulong *)((long)plVar2 + -0xe0) =
                     (ulong)((long)plVar2 + -0xc0) | 0x1000000000000000;
                *(code **)((long)plVar2 + -0xd8) = FUN_103197234;
                *(long *)((long)plVar2 + -0xe8) = lVar12;
                *(undefined8 *)((long)plVar2 + -0x108) =
                     *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                func_0x000107c61170(*(undefined8 *)(lVar12 + 0xa0));
                uVar3 = *(undefined8 *)(lVar12 + 0xc0);
                lVar13 = *(long *)(lVar12 + 200);
                uVar5 = *(undefined8 *)(lVar12 + 0xb8);
                FUN_103198594(*(undefined8 *)(lVar12 + 0xa8),uVar5,0x112d36580,&UNK_10d9016d0);
                (**(code **)(lVar13 + 0x30))(uVar5,1,uVar3);
                if ((int)uVar5 == 1) {
                  func_0x0001000293e4(*(undefined8 *)(lVar12 + 0xb8));
                }
                else {
                  (**(code **)(*(long *)(lVar12 + 200) + 0x20))
                            (*(undefined8 *)(lVar12 + 0xd0),*(undefined8 *)(lVar12 + 0xb8),
                             *(undefined8 *)(lVar12 + 0xc0));
                  puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
                  func_0x000107c61168();
                  func_0x000107c415e0();
                  func_0x000107c61180();
                  puVar8 = puVar17;
                  func_0x000107c5ed90();
                  *(undefined8 *)(lVar12 + 0x98) = 0;
                  puVar9 = puVar17;
                  func_0x000107c4ff50();
                  func_0x000107c61170(puVar8);
                  func_0x000107c61170(puVar17);
                  uVar3 = *(undefined8 *)(lVar12 + 0x98);
                  if ((int)puVar9 == 0) {
                    uVar5 = uVar3;
                    func_0x000107c61174(uVar3);
                    func_0x000107c5ed30(uVar3);
                    func_0x000107c61170(uVar5);
                    func_0x000107c61654();
                    func_0x000107c614ac(uVar3);
                  }
                  else {
                    func_0x000107c61174(uVar3);
                  }
                  (**(code **)(*(long *)(lVar12 + 200) + 8))
                            (*(undefined8 *)(lVar12 + 0xd0),*(undefined8 *)(lVar12 + 0xc0));
                }
                lVar13 = *(long *)(lVar12 + 0xb0) + _DAT_113806f10;
                func_0x000107c61618();
                *(long *)(lVar12 + 0xe8) = lVar13;
                if (lVar13 == 0) {
                  uVar3 = *(undefined8 *)(lVar12 + 0xd0);
                  puVar11 = *(undefined8 **)(lVar12 + 0xb8);
                  func_0x000107c615c0(*(undefined8 *)(lVar12 + 0xd8));
                  func_0x000107c615c0(uVar3);
                  func_0x000107c615c0(puVar11);
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108))
                  {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(lVar12 + 8))();
                    return;
                  }
                }
                else {
                  puVar11 = (undefined8 *)0x0;
                  func_0x000107c5fcec();
                  puVar10 = puVar11;
                  func_0x000107c5fce8();
                  *(undefined8 **)(lVar12 + 0xf0) = puVar10;
                  func_0x000100eea164();
                  puVar14 = puVar11;
                  func_0x000107c5fca8(puVar11,puVar10);
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108))
                  {
                    pcVar4 = FUN_103197450;
                    goto LAB_107c615e0;
                  }
                }
                func_0x000107c60e78();
                *(undefined8 **)((long)plVar2 + -0x130) = puVar11;
                *(ulong *)((long)plVar2 + -0x120) =
                     (ulong)((long)plVar2 + -0xe0) | 0x1000000000000000;
                *(code **)((long)plVar2 + -0x118) = FUN_103197450;
                *(long *)((long)plVar2 + -0x128) = lVar12;
                *(undefined8 *)((long)plVar2 + -0x138) =
                     *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
                lVar13 = *(long *)(lVar12 + 0xe8);
                func_0x000107c61574(*(undefined8 *)(lVar12 + 0xf0));
                lVar15 = _DAT_112f476d0;
                func_0x000107c61428(lVar13 + _DAT_112f476d0,lVar12 + 0x80,0,0);
                lVar13 = lVar13 + lVar15;
                func_0x000107c61618();
                if (lVar13 != 0) {
                  func_0x000107c3e3e0();
                  func_0x000107c615e8(lVar13);
                }
                func_0x000107c615e8(*(undefined8 *)(lVar12 + 0xe8));
                lVar13 = *(long *)(lVar12 + 0xd0);
                uVar3 = *(undefined8 *)(lVar12 + 0xb8);
                func_0x000107c615c0(*(undefined8 *)(lVar12 + 0xd8));
                func_0x000107c615c0(lVar13);
                func_0x000107c615c0(uVar3);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0x138)) {
                  func_0x000107c60e78();
                  *(undefined1 **)((long)plVar2 + -0x150) = (undefined1 *)((long)plVar2 + -0x120);
                  *(code **)((long)plVar2 + -0x148) = FUN_10319751c;
                  func_0x000107c615e8(*(undefined8 *)(lVar13 + 0x70));
                  func_0x000107c61170(*(undefined8 *)(lVar13 + 0x78));
                  FUN_103198414(lVar13 + _DAT_112f47d68,FUN_103197644);
                  func_0x000107c6142c(*(undefined8 *)(lVar13 + _DAT_112f47d70 + 0x10));
                  FUN_1031985fc(lVar13 + _DAT_113806f10);
                  func_0x000107c61470(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar13);
                  return;
                }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar12 + 8))();
                return;
              }
              pcVar4 = FUN_103197234;
              puVar10 = (undefined8 *)0x0;
            }
          }
        }
      }
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,puVar14,puVar10);
  return;
}



/* Entry: 103194e10; end: 103194e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103194e10(void)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long *unaff_x22;
  long *plVar18;
  ulong unaff_x29;
  code *pcStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  ulong uStack_1c0;
  code *pcStack_1b8;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  ulong uStack_190;
  code *pcStack_188;
  long lStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  ulong *puStack_160;
  code *pcStack_158;
  long lStack_150;
  long *plStack_148;
  ulong uStack_140;
  code *pcStack_138;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  code *pcStack_108;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  code *pcStack_98;
  long lStack_88;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_48;
  ulong uStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = unaff_x22[0x2f];
  func_0x000107c61170(unaff_x22[0x35]);
  func_0x000107c61170(lVar13);
  lVar13 = unaff_x22[0x34];
  (**(code **)(unaff_x22[0x33] + 8))(lVar13,unaff_x22[0x32]);
  func_0x000107c615c0(lVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
                    /* WARNING: Could not recover jumptable at 0x000103194e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])();
    return;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_103194e98;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar13 + 0x1d8);
  puVar14 = *(undefined8 **)(lVar13 + 0x130);
  plVar18 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x1e0));
  func_0x0001000293e4(uVar3);
  func_0x000107c615c0(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    pcVar5 = FUN_103194f28;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c60e78();
    uStack_60 = (ulong)&uStack_30 | 0x1000000000000000;
    pcStack_58 = FUN_103194f28;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar18[0x21] = 0;
    plVar18[0x20] = 6;
    *(undefined1 *)(plVar18 + 0x22) = 4;
    uVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar3 != 0) {
      FUN_103187f64();
      func_0x000107c61658(plVar18 + 0x20,&UNK_110618668,uVar3);
    }
    lVar13 = plVar18[0x34];
    lVar12 = plVar18[0x32];
    lVar15 = plVar18[0x33];
    lVar16 = plVar18[0x2f];
    func_0x000107c61170(plVar18[0x35]);
    func_0x000107c61170(lVar16);
    (**(code **)(lVar15 + 8))(lVar13,lVar12);
    func_0x000107c615c0(lVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x000103195008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar18[1])(6,0,4);
      return;
    }
    func_0x000107c60e78();
    uStack_a0 = (ulong)&uStack_60 | 0x1000000000000000;
    pcStack_98 = FUN_103195010;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_a8 = *plVar18;
    uVar3 = *(undefined8 *)(lStack_a8 + 0x1e8);
    puVar14 = *(undefined8 **)(lStack_a8 + 0x130);
    plVar18 = (long *)*plVar18;
    lStack_b0 = lVar12;
    func_0x000107c615c0(*(undefined8 *)(lStack_a8 + 0x1f0));
    func_0x0001000293e4(uVar3);
    func_0x000107c615c0(uVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      pcVar5 = FUN_1031950a0;
      puVar11 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c60e78();
      uStack_d0 = (ulong)&uStack_a0 | 0x1000000000000000;
      pcStack_c8 = FUN_1031950a0;
      lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar18[0x1e] = 0;
      plVar18[0x1d] = 5;
      *(undefined1 *)(plVar18 + 0x1f) = 4;
      uVar4 = 2;
      lStack_f0 = lVar15;
      lStack_e8 = lVar16;
      uStack_e0 = uVar3;
      plStack_d8 = plVar18;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar4 != 0) {
        FUN_103187f64();
        func_0x000107c61658(plVar18 + 0x1d,&UNK_110618668,uVar4);
      }
      lVar13 = plVar18[0x34];
      lVar12 = plVar18[0x32];
      lVar15 = plVar18[0x33];
      lVar16 = plVar18[0x2f];
      func_0x000107c61170(plVar18[0x35]);
      func_0x000107c61170(lVar16);
      (**(code **)(lVar15 + 8))(lVar13,lVar12);
      func_0x000107c615c0(lVar13);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
                    /* WARNING: Could not recover jumptable at 0x000103195184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar18[1])(5,0,4);
        return;
      }
      func_0x000107c60e78();
      uStack_110 = (ulong)&uStack_d0 | 0x1000000000000000;
      pcStack_108 = FUN_10319518c;
      lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_118 = *plVar18;
      uVar3 = *(undefined8 *)(lStack_118 + 0x1f8);
      puVar14 = *(undefined8 **)(lStack_118 + 0x130);
      plVar18 = (long *)*plVar18;
      lStack_120 = lVar12;
      func_0x000107c615c0(*(undefined8 *)(lStack_118 + 0x200));
      func_0x0001000293e4(uVar3);
      func_0x000107c615c0(uVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
        pcVar5 = FUN_10319521c;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c60e78();
        uStack_140 = (ulong)&uStack_110 | 0x1000000000000000;
        plVar2 = &lStack_150;
        pcStack_138 = FUN_10319521c;
        lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar18[0x14] = 0;
        plVar18[0x15] = 0;
        *(undefined1 *)(plVar18 + 0x16) = 4;
        uVar4 = 2;
        plStack_148 = plVar18;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar4 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar18 + 0x14,&UNK_110618668,uVar4);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar18[1])(0,0,4);
          return;
        }
        func_0x000107c60e78();
        puStack_160 = (ulong *)((ulong)&uStack_140 | 0x1000000000000000);
        pcStack_158 = FUN_1031952c0;
        lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar13 = 0x112d36580;
        uStack_170 = uVar3;
        plStack_168 = plVar18;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar6 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar18[0x41] = uVar6;
        lVar13 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar13 + -8) + 0x38))(uVar6,1,1,lVar13);
        plVar7 = (long *)0x100;
        func_0x000107c615b8();
        plVar18[0x42] = (long)plVar7;
        *plVar7 = (long)plVar18;
        plVar7[1] = (long)FUN_103195398;
        puVar14 = (undefined8 *)plVar18[0x26];
        uVar3 = uStack_170;
        pcStack_1d8 = pcStack_158;
        puVar1 = puStack_160;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
          func_0x000107c60e78();
          uStack_190 = (ulong)&puStack_160 | 0x1000000000000000;
          pcStack_188 = FUN_103195398;
          lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lStack_198 = *plVar18;
          uVar3 = *(undefined8 *)(lStack_198 + 0x208);
          puVar14 = *(undefined8 **)(lStack_198 + 0x130);
          plVar18 = (long *)*plVar18;
          uStack_1a0 = uVar6;
          func_0x000107c615c0(*(undefined8 *)(lStack_198 + 0x210));
          func_0x0001000293e4(uVar3);
          func_0x000107c615c0(uVar3);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
            pcVar5 = FUN_10319542c;
            puVar11 = (undefined8 *)0x0;
            goto LAB_107c615e0;
          }
          func_0x000107c60e78();
          uStack_1c0 = (ulong)&uStack_190 | 0x1000000000000000;
          plVar2 = &lStack_1d0;
          pcStack_1b8 = FUN_10319542c;
          lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
          plVar18[0x12] = plVar18[0x2d];
          plVar18[0x11] = plVar18[0x2c];
          *(undefined1 *)(plVar18 + 0x13) = *(undefined1 *)((long)plVar18 + 0x81);
          uVar4 = 2;
          plStack_1c8 = plVar18;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar4 != 0) {
            FUN_103187f64();
            func_0x000107c61658(plVar18 + 0x11,&UNK_110618668,uVar4);
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)plVar18[1])();
            return;
          }
          func_0x000107c60e78(plVar18[0x2c],plVar18[0x2d],*(undefined1 *)((long)plVar18 + 0x81));
          pcStack_1d8 = FUN_1031954d0;
          lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar13 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          uVar6 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar18[0x43] = uVar6;
          lVar13 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar13 + -8) + 0x38))(uVar6,1,1,lVar13);
          plVar7 = (long *)0x100;
          func_0x000107c615b8();
          plVar18[0x44] = (long)plVar7;
          *plVar7 = (long)plVar18;
          plVar7[1] = (long)FUN_1031955a8;
          puVar14 = (undefined8 *)plVar18[0x26];
          puVar1 = &uStack_1c0;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
            func_0x000107c60e78();
            lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar12 = *plVar18;
            uVar3 = *(undefined8 *)(lVar12 + 0x218);
            puVar14 = *(undefined8 **)(lVar12 + 0x130);
            lVar15 = *plVar18;
            func_0x000107c615c0(*(undefined8 *)(lVar12 + 0x220));
            func_0x0001000293e4(uVar3);
            func_0x000107c615c0(uVar3);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
              pcVar5 = FUN_10319563c;
              puVar11 = (undefined8 *)0x0;
            }
            else {
              func_0x000107c60e78();
              lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
              *(undefined8 *)(lVar15 + 0xc0) = *(undefined8 *)(lVar15 + 0x180);
              *(undefined8 *)(lVar15 + 0xb8) = *(undefined8 *)(lVar15 + 0x178);
              *(undefined1 *)(lVar15 + 200) = *(undefined1 *)(lVar15 + 0x82);
              uVar3 = 2;
              func_0x000100029b9c(2,0x12,0,0);
              if ((int)uVar3 != 0) {
                FUN_103187f64();
                func_0x000107c61658((undefined8 *)(lVar15 + 0xb8),&UNK_110618668,uVar3);
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar15 + 8))();
                return;
              }
              func_0x000107c60e78(*(undefined8 *)(lVar15 + 0x178),*(undefined8 *)(lVar15 + 0x180),
                                  *(undefined1 *)(lVar15 + 0x82));
              pcVar5 = FUN_1031956f8;
              puVar14 = (undefined8 *)0x0;
              puVar11 = (undefined8 *)0x0;
            }
            goto LAB_107c615e0;
          }
        }
        *(ulong *)((long)plVar2 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
        *(code **)((long)plVar2 + -8) = pcStack_1d8;
        *(long **)((long)plVar2 + -0x18) = plVar7;
        *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        plVar7[0x15] = uVar6;
        plVar7[0x16] = (long)puVar14;
        plVar7[0x14] = 0;
        lVar13 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar6 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar7[0x17] = uVar6;
        lVar13 = 0;
        func_0x000107c5ede0();
        plVar7[0x18] = lVar13;
        lVar13 = *(long *)(lVar13 + -8);
        plVar7[0x19] = lVar13;
        uVar6 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar7[0x1a] = uVar6;
        lVar13 = 0;
        FUN_103197644();
        uVar6 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar7[0x1b] = uVar6;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x20)) {
          pcVar5 = FUN_103196dcc;
          puVar11 = (undefined8 *)0x0;
        }
        else {
          func_0x000107c60e78();
          *(long *)((long)plVar2 + -0x50) = lVar15;
          *(long *)((long)plVar2 + -0x48) = lVar16;
          *(undefined8 *)((long)plVar2 + -0x40) = uVar3;
          *(ulong *)((long)plVar2 + -0x30) = (ulong)((long)plVar2 + -0x10) | 0x1000000000000000;
          *(code **)((long)plVar2 + -0x28) = FUN_103196dcc;
          *(long **)((long)plVar2 + -0x38) = plVar7;
          *(undefined8 *)((long)plVar2 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar15 = plVar7[0x1b];
          lVar12 = plVar7[0x16];
          puVar17 = (undefined *)plVar7[0x14];
          lVar13 = 0;
          FUN_103197894();
          (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar15,1,1,lVar13);
          lVar13 = _DAT_112f47d68;
          func_0x000107c61428(lVar12 + _DAT_112f47d68,plVar7 + 10,0x21,0);
          func_0x000103187ec0(lVar15,lVar12 + lVar13);
          func_0x000107c614a8(plVar7 + 10);
          lVar13 = 8;
          func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
          *(undefined8 *)(lVar13 + 0x10) = 8;
          *(undefined8 *)(lVar13 + 0x28) = 0;
          *(undefined8 *)(lVar13 + 0x20) = 0;
          *(undefined8 *)(lVar13 + 0x38) = 0;
          *(undefined8 *)(lVar13 + 0x30) = 0;
          *(undefined8 *)(lVar13 + 0x48) = 0;
          *(undefined8 *)(lVar13 + 0x40) = 0;
          *(undefined8 *)(lVar13 + 0x58) = 0;
          *(undefined8 *)(lVar13 + 0x50) = 0;
          puVar10 = (undefined8 *)(lVar12 + _DAT_112f47d70);
          func_0x000107c61428(puVar10,plVar7 + 0xd,1,0);
          uVar3 = puVar10[2];
          *puVar10 = 0;
          puVar10[1] = 0x3fd3333333333333;
          puVar10[2] = lVar13;
          func_0x000107c6142c(uVar3);
          if (puVar17 == (undefined *)0x0) {
            lVar13 = plVar7[0x18];
            puVar17 = (undefined *)plVar7[0x19];
            lVar12 = plVar7[0x17];
            FUN_103198594(plVar7[0x15],lVar12,0x112d36580,&UNK_10d9016d0);
            (**(code **)(puVar17 + 0x30))(lVar12,1,lVar13);
            if ((int)lVar12 == 1) {
              func_0x0001000293e4(plVar7[0x17]);
            }
            else {
              (**(code **)(plVar7[0x19] + 0x20))(plVar7[0x1a],plVar7[0x17],plVar7[0x18]);
              puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
              func_0x000107c61168();
              func_0x000107c415e0();
              func_0x000107c61180();
              puVar8 = puVar17;
              func_0x000107c5ed90();
              plVar7[0x13] = 0;
              puVar9 = puVar17;
              func_0x000107c4ff50();
              func_0x000107c61170(puVar8);
              func_0x000107c61170(puVar17);
              puVar17 = (undefined *)plVar7[0x13];
              if ((int)puVar9 == 0) {
                puVar8 = puVar17;
                func_0x000107c61174(puVar17);
                func_0x000107c5ed30();
                func_0x000107c61170(puVar8);
                func_0x000107c61654();
                func_0x000107c614ac(puVar17);
              }
              else {
                func_0x000107c61174(puVar17);
                puVar17 = puVar9;
              }
              (**(code **)(plVar7[0x19] + 8))(plVar7[0x1a],plVar7[0x18]);
            }
            lVar13 = plVar7[0x16] + _DAT_113806f10;
            func_0x000107c61618();
            plVar7[0x1d] = lVar13;
            if (lVar13 == 0) {
              lVar13 = plVar7[0x1a];
              puVar10 = (undefined8 *)plVar7[0x17];
              func_0x000107c615c0(plVar7[0x1b]);
              func_0x000107c615c0(lVar13);
              func_0x000107c615c0(puVar10);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)plVar7[1])();
                return;
              }
            }
            else {
              puVar10 = (undefined8 *)0x0;
              func_0x000107c5fcec();
              puVar11 = puVar10;
              func_0x000107c5fce8();
              plVar7[0x1e] = (long)puVar11;
              func_0x000100eea164();
              puVar14 = puVar10;
              func_0x000107c5fca8(puVar10,puVar11);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                pcVar5 = FUN_103197450;
                goto LAB_107c615e0;
              }
            }
          }
          else {
            plVar7[0x1c] = *(long *)(plVar7[0x16] + 0x70);
            func_0x000107c61174(plVar7[0x14]);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
              pcVar5 = FUN_1031970e0;
              puVar14 = (undefined8 *)0x0;
              puVar11 = (undefined8 *)0x0;
              goto LAB_107c615e0;
            }
          }
          func_0x000107c60e78();
          *(undefined8 **)((long)plVar2 + -0x80) = puVar10;
          *(ulong *)((long)plVar2 + -0x70) = (ulong)((long)plVar2 + -0x30) | 0x1000000000000000;
          *(code **)((long)plVar2 + -0x68) = FUN_1031970e0;
          *(long **)((long)plVar2 + -0x78) = plVar7;
          *(undefined8 *)((long)plVar2 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar13 = plVar7[0x14];
          plVar7[2] = (long)plVar7;
          plVar7[3] = (long)FUN_103197168;
          func_0x000107c61448(plVar7 + 2,0);
          func_0x0001031982f4();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_continuation_await_110350070)(plVar7 + 2);
            return;
          }
          func_0x000107c60e78();
          *(ulong *)((long)plVar2 + -0xa0) = (ulong)((long)plVar2 + -0x70) | 0x1000000000000000;
          *(code **)((long)plVar2 + -0x98) = FUN_103197168;
          *(long **)((long)plVar2 + -0xa8) = plVar7;
          *(undefined8 *)((long)plVar2 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          *(long *)((long)plVar2 + -0xa8) = *plVar7;
          lVar12 = *plVar7;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0xb0)) {
            pcVar5 = (code *)0x1031971d4;
            puVar14 = (undefined8 *)0x0;
            puVar11 = (undefined8 *)0x0;
          }
          else {
            func_0x000107c60e78();
            *(ulong *)((long)plVar2 + -0xc0) = (ulong)((long)plVar2 + -0xa0) | 0x1000000000000000;
            *(undefined8 *)((long)plVar2 + -0xb8) = 0x1031971d4;
            *(long *)((long)plVar2 + -200) = lVar12;
            *(undefined8 *)((long)plVar2 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            puVar14 = *(undefined8 **)(lVar12 + 0xb0);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0xd0)) {
              func_0x000107c60e78();
              *(undefined8 *)((long)plVar2 + -0x100) = 8;
              *(undefined **)((long)plVar2 + -0xf8) = puVar17;
              *(long *)((long)plVar2 + -0xf0) = lVar13;
              *(ulong *)((long)plVar2 + -0xe0) = (ulong)((long)plVar2 + -0xc0) | 0x1000000000000000;
              *(code **)((long)plVar2 + -0xd8) = FUN_103197234;
              *(long *)((long)plVar2 + -0xe8) = lVar12;
              *(undefined8 *)((long)plVar2 + -0x108) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              func_0x000107c61170(*(undefined8 *)(lVar12 + 0xa0));
              uVar3 = *(undefined8 *)(lVar12 + 0xc0);
              lVar13 = *(long *)(lVar12 + 200);
              uVar4 = *(undefined8 *)(lVar12 + 0xb8);
              FUN_103198594(*(undefined8 *)(lVar12 + 0xa8),uVar4,0x112d36580,&UNK_10d9016d0);
              (**(code **)(lVar13 + 0x30))(uVar4,1,uVar3);
              if ((int)uVar4 == 1) {
                func_0x0001000293e4(*(undefined8 *)(lVar12 + 0xb8));
              }
              else {
                (**(code **)(*(long *)(lVar12 + 200) + 0x20))
                          (*(undefined8 *)(lVar12 + 0xd0),*(undefined8 *)(lVar12 + 0xb8),
                           *(undefined8 *)(lVar12 + 0xc0));
                puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
                func_0x000107c61168();
                func_0x000107c415e0();
                func_0x000107c61180();
                puVar8 = puVar17;
                func_0x000107c5ed90();
                *(undefined8 *)(lVar12 + 0x98) = 0;
                puVar9 = puVar17;
                func_0x000107c4ff50();
                func_0x000107c61170(puVar8);
                func_0x000107c61170(puVar17);
                uVar3 = *(undefined8 *)(lVar12 + 0x98);
                if ((int)puVar9 == 0) {
                  uVar4 = uVar3;
                  func_0x000107c61174(uVar3);
                  func_0x000107c5ed30(uVar3);
                  func_0x000107c61170(uVar4);
                  func_0x000107c61654();
                  func_0x000107c614ac(uVar3);
                }
                else {
                  func_0x000107c61174(uVar3);
                }
                (**(code **)(*(long *)(lVar12 + 200) + 8))
                          (*(undefined8 *)(lVar12 + 0xd0),*(undefined8 *)(lVar12 + 0xc0));
              }
              lVar13 = *(long *)(lVar12 + 0xb0) + _DAT_113806f10;
              func_0x000107c61618();
              *(long *)(lVar12 + 0xe8) = lVar13;
              if (lVar13 == 0) {
                uVar3 = *(undefined8 *)(lVar12 + 0xd0);
                puVar10 = *(undefined8 **)(lVar12 + 0xb8);
                func_0x000107c615c0(*(undefined8 *)(lVar12 + 0xd8));
                func_0x000107c615c0(uVar3);
                func_0x000107c615c0(puVar10);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108)) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(lVar12 + 8))();
                  return;
                }
              }
              else {
                puVar10 = (undefined8 *)0x0;
                func_0x000107c5fcec();
                puVar11 = puVar10;
                func_0x000107c5fce8();
                *(undefined8 **)(lVar12 + 0xf0) = puVar11;
                func_0x000100eea164();
                puVar14 = puVar10;
                func_0x000107c5fca8(puVar10,puVar11);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108)) {
                  pcVar5 = FUN_103197450;
                  goto LAB_107c615e0;
                }
              }
              func_0x000107c60e78();
              *(undefined8 **)((long)plVar2 + -0x130) = puVar10;
              *(ulong *)((long)plVar2 + -0x120) = (ulong)((long)plVar2 + -0xe0) | 0x1000000000000000
              ;
              *(code **)((long)plVar2 + -0x118) = FUN_103197450;
              *(long *)((long)plVar2 + -0x128) = lVar12;
              *(undefined8 *)((long)plVar2 + -0x138) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              lVar13 = *(long *)(lVar12 + 0xe8);
              func_0x000107c61574(*(undefined8 *)(lVar12 + 0xf0));
              lVar15 = _DAT_112f476d0;
              func_0x000107c61428(lVar13 + _DAT_112f476d0,lVar12 + 0x80,0,0);
              lVar13 = lVar13 + lVar15;
              func_0x000107c61618();
              if (lVar13 != 0) {
                func_0x000107c3e3e0();
                func_0x000107c615e8(lVar13);
              }
              func_0x000107c615e8(*(undefined8 *)(lVar12 + 0xe8));
              lVar13 = *(long *)(lVar12 + 0xd0);
              uVar3 = *(undefined8 *)(lVar12 + 0xb8);
              func_0x000107c615c0(*(undefined8 *)(lVar12 + 0xd8));
              func_0x000107c615c0(lVar13);
              func_0x000107c615c0(uVar3);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0x138)) {
                func_0x000107c60e78();
                *(undefined1 **)((long)plVar2 + -0x150) = (undefined1 *)((long)plVar2 + -0x120);
                *(code **)((long)plVar2 + -0x148) = FUN_10319751c;
                func_0x000107c615e8(*(undefined8 *)(lVar13 + 0x70));
                func_0x000107c61170(*(undefined8 *)(lVar13 + 0x78));
                FUN_103198414(lVar13 + _DAT_112f47d68,FUN_103197644);
                func_0x000107c6142c(*(undefined8 *)(lVar13 + _DAT_112f47d70 + 0x10));
                FUN_1031985fc(lVar13 + _DAT_113806f10);
                func_0x000107c61470(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar13);
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar12 + 8))();
              return;
            }
            pcVar5 = FUN_103197234;
            puVar11 = (undefined8 *)0x0;
          }
        }
      }
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,puVar14,puVar11);
  return;
}



/* Entry: 103194e98; end: 103194f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103194e98(void)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long *unaff_x22;
  long *plVar18;
  ulong unaff_x29;
  code *pcStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  code *pcStack_198;
  long lStack_188;
  ulong uStack_180;
  long lStack_178;
  ulong uStack_170;
  code *pcStack_168;
  long lStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  ulong *puStack_140;
  code *pcStack_138;
  long lStack_130;
  long *plStack_128;
  ulong uStack_120;
  code *pcStack_118;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  ulong uStack_f0;
  code *pcStack_e8;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_68;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_28;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar12 + 0x1d8);
  puVar14 = *(undefined8 **)(lVar12 + 0x130);
  plVar18 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar12 + 0x1e0));
  func_0x0001000293e4(uVar3);
  func_0x000107c615c0(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    pcVar5 = FUN_103194f28;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c60e78();
    uStack_40 = (ulong)&uStack_10 | 0x1000000000000000;
    pcStack_38 = FUN_103194f28;
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar18[0x21] = 0;
    plVar18[0x20] = 6;
    *(undefined1 *)(plVar18 + 0x22) = 4;
    uVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar3 != 0) {
      FUN_103187f64();
      func_0x000107c61658(plVar18 + 0x20,&UNK_110618668,uVar3);
    }
    lVar12 = plVar18[0x34];
    lVar13 = plVar18[0x32];
    lVar15 = plVar18[0x33];
    lVar16 = plVar18[0x2f];
    func_0x000107c61170(plVar18[0x35]);
    func_0x000107c61170(lVar16);
    (**(code **)(lVar15 + 8))(lVar12,lVar13);
    func_0x000107c615c0(lVar12);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x000103195008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar18[1])(6,0,4);
      return;
    }
    func_0x000107c60e78();
    uStack_80 = (ulong)&uStack_40 | 0x1000000000000000;
    pcStack_78 = FUN_103195010;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_88 = *plVar18;
    uVar3 = *(undefined8 *)(lStack_88 + 0x1e8);
    puVar14 = *(undefined8 **)(lStack_88 + 0x130);
    plVar18 = (long *)*plVar18;
    lStack_90 = lVar13;
    func_0x000107c615c0(*(undefined8 *)(lStack_88 + 0x1f0));
    func_0x0001000293e4(uVar3);
    func_0x000107c615c0(uVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      pcVar5 = FUN_1031950a0;
      puVar11 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c60e78();
      uStack_b0 = (ulong)&uStack_80 | 0x1000000000000000;
      pcStack_a8 = FUN_1031950a0;
      lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar18[0x1e] = 0;
      plVar18[0x1d] = 5;
      *(undefined1 *)(plVar18 + 0x1f) = 4;
      uVar4 = 2;
      lStack_d0 = lVar15;
      lStack_c8 = lVar16;
      uStack_c0 = uVar3;
      plStack_b8 = plVar18;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar4 != 0) {
        FUN_103187f64();
        func_0x000107c61658(plVar18 + 0x1d,&UNK_110618668,uVar4);
      }
      lVar12 = plVar18[0x34];
      lVar13 = plVar18[0x32];
      lVar15 = plVar18[0x33];
      lVar16 = plVar18[0x2f];
      func_0x000107c61170(plVar18[0x35]);
      func_0x000107c61170(lVar16);
      (**(code **)(lVar15 + 8))(lVar12,lVar13);
      func_0x000107c615c0(lVar12);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
                    /* WARNING: Could not recover jumptable at 0x000103195184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar18[1])(5,0,4);
        return;
      }
      func_0x000107c60e78();
      uStack_f0 = (ulong)&uStack_b0 | 0x1000000000000000;
      pcStack_e8 = FUN_10319518c;
      lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_f8 = *plVar18;
      uVar3 = *(undefined8 *)(lStack_f8 + 0x1f8);
      puVar14 = *(undefined8 **)(lStack_f8 + 0x130);
      plVar18 = (long *)*plVar18;
      lStack_100 = lVar13;
      func_0x000107c615c0(*(undefined8 *)(lStack_f8 + 0x200));
      func_0x0001000293e4(uVar3);
      func_0x000107c615c0(uVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
        pcVar5 = FUN_10319521c;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c60e78();
        uStack_120 = (ulong)&uStack_f0 | 0x1000000000000000;
        plVar2 = &lStack_130;
        pcStack_118 = FUN_10319521c;
        lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar18[0x14] = 0;
        plVar18[0x15] = 0;
        *(undefined1 *)(plVar18 + 0x16) = 4;
        uVar4 = 2;
        plStack_128 = plVar18;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar4 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar18 + 0x14,&UNK_110618668,uVar4);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar18[1])(0,0,4);
          return;
        }
        func_0x000107c60e78();
        puStack_140 = (ulong *)((ulong)&uStack_120 | 0x1000000000000000);
        pcStack_138 = FUN_1031952c0;
        lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar12 = 0x112d36580;
        uStack_150 = uVar3;
        plStack_148 = plVar18;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar6 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar18[0x41] = uVar6;
        lVar12 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar6,1,1,lVar12);
        plVar7 = (long *)0x100;
        func_0x000107c615b8();
        plVar18[0x42] = (long)plVar7;
        *plVar7 = (long)plVar18;
        plVar7[1] = (long)FUN_103195398;
        puVar14 = (undefined8 *)plVar18[0x26];
        uVar3 = uStack_150;
        pcStack_1b8 = pcStack_138;
        puVar1 = puStack_140;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
          func_0x000107c60e78();
          uStack_170 = (ulong)&puStack_140 | 0x1000000000000000;
          pcStack_168 = FUN_103195398;
          lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lStack_178 = *plVar18;
          uVar3 = *(undefined8 *)(lStack_178 + 0x208);
          puVar14 = *(undefined8 **)(lStack_178 + 0x130);
          plVar18 = (long *)*plVar18;
          uStack_180 = uVar6;
          func_0x000107c615c0(*(undefined8 *)(lStack_178 + 0x210));
          func_0x0001000293e4(uVar3);
          func_0x000107c615c0(uVar3);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
            pcVar5 = FUN_10319542c;
            puVar11 = (undefined8 *)0x0;
            goto LAB_107c615e0;
          }
          func_0x000107c60e78();
          uStack_1a0 = (ulong)&uStack_170 | 0x1000000000000000;
          plVar2 = &lStack_1b0;
          pcStack_198 = FUN_10319542c;
          lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
          plVar18[0x12] = plVar18[0x2d];
          plVar18[0x11] = plVar18[0x2c];
          *(undefined1 *)(plVar18 + 0x13) = *(undefined1 *)((long)plVar18 + 0x81);
          uVar4 = 2;
          plStack_1a8 = plVar18;
          func_0x000100029b9c(2,0x12,0,0);
          if ((int)uVar4 != 0) {
            FUN_103187f64();
            func_0x000107c61658(plVar18 + 0x11,&UNK_110618668,uVar4);
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)plVar18[1])();
            return;
          }
          func_0x000107c60e78(plVar18[0x2c],plVar18[0x2d],*(undefined1 *)((long)plVar18 + 0x81));
          pcStack_1b8 = FUN_1031954d0;
          lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar12 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          uVar6 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar18[0x43] = uVar6;
          lVar12 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar6,1,1,lVar12);
          plVar7 = (long *)0x100;
          func_0x000107c615b8();
          plVar18[0x44] = (long)plVar7;
          *plVar7 = (long)plVar18;
          plVar7[1] = (long)FUN_1031955a8;
          puVar14 = (undefined8 *)plVar18[0x26];
          puVar1 = &uStack_1a0;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
            func_0x000107c60e78();
            lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar13 = *plVar18;
            uVar3 = *(undefined8 *)(lVar13 + 0x218);
            puVar14 = *(undefined8 **)(lVar13 + 0x130);
            lVar15 = *plVar18;
            func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x220));
            func_0x0001000293e4(uVar3);
            func_0x000107c615c0(uVar3);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
              pcVar5 = FUN_10319563c;
              puVar11 = (undefined8 *)0x0;
            }
            else {
              func_0x000107c60e78();
              lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
              *(undefined8 *)(lVar15 + 0xc0) = *(undefined8 *)(lVar15 + 0x180);
              *(undefined8 *)(lVar15 + 0xb8) = *(undefined8 *)(lVar15 + 0x178);
              *(undefined1 *)(lVar15 + 200) = *(undefined1 *)(lVar15 + 0x82);
              uVar3 = 2;
              func_0x000100029b9c(2,0x12,0,0);
              if ((int)uVar3 != 0) {
                FUN_103187f64();
                func_0x000107c61658((undefined8 *)(lVar15 + 0xb8),&UNK_110618668,uVar3);
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar15 + 8))();
                return;
              }
              func_0x000107c60e78(*(undefined8 *)(lVar15 + 0x178),*(undefined8 *)(lVar15 + 0x180),
                                  *(undefined1 *)(lVar15 + 0x82));
              pcVar5 = FUN_1031956f8;
              puVar14 = (undefined8 *)0x0;
              puVar11 = (undefined8 *)0x0;
            }
            goto LAB_107c615e0;
          }
        }
        *(ulong *)((long)plVar2 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
        *(code **)((long)plVar2 + -8) = pcStack_1b8;
        *(long **)((long)plVar2 + -0x18) = plVar7;
        *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        plVar7[0x15] = uVar6;
        plVar7[0x16] = (long)puVar14;
        plVar7[0x14] = 0;
        lVar12 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar6 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar7[0x17] = uVar6;
        lVar12 = 0;
        func_0x000107c5ede0();
        plVar7[0x18] = lVar12;
        lVar12 = *(long *)(lVar12 + -8);
        plVar7[0x19] = lVar12;
        uVar6 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar7[0x1a] = uVar6;
        lVar12 = 0;
        FUN_103197644();
        uVar6 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar7[0x1b] = uVar6;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x20)) {
          pcVar5 = FUN_103196dcc;
          puVar11 = (undefined8 *)0x0;
        }
        else {
          func_0x000107c60e78();
          *(long *)((long)plVar2 + -0x50) = lVar15;
          *(long *)((long)plVar2 + -0x48) = lVar16;
          *(undefined8 *)((long)plVar2 + -0x40) = uVar3;
          *(ulong *)((long)plVar2 + -0x30) = (ulong)((long)plVar2 + -0x10) | 0x1000000000000000;
          *(code **)((long)plVar2 + -0x28) = FUN_103196dcc;
          *(long **)((long)plVar2 + -0x38) = plVar7;
          *(undefined8 *)((long)plVar2 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar15 = plVar7[0x1b];
          lVar13 = plVar7[0x16];
          puVar17 = (undefined *)plVar7[0x14];
          lVar12 = 0;
          FUN_103197894();
          (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar15,1,1,lVar12);
          lVar12 = _DAT_112f47d68;
          func_0x000107c61428(lVar13 + _DAT_112f47d68,plVar7 + 10,0x21,0);
          func_0x000103187ec0(lVar15,lVar13 + lVar12);
          func_0x000107c614a8(plVar7 + 10);
          lVar12 = 8;
          func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
          *(undefined8 *)(lVar12 + 0x10) = 8;
          *(undefined8 *)(lVar12 + 0x28) = 0;
          *(undefined8 *)(lVar12 + 0x20) = 0;
          *(undefined8 *)(lVar12 + 0x38) = 0;
          *(undefined8 *)(lVar12 + 0x30) = 0;
          *(undefined8 *)(lVar12 + 0x48) = 0;
          *(undefined8 *)(lVar12 + 0x40) = 0;
          *(undefined8 *)(lVar12 + 0x58) = 0;
          *(undefined8 *)(lVar12 + 0x50) = 0;
          puVar10 = (undefined8 *)(lVar13 + _DAT_112f47d70);
          func_0x000107c61428(puVar10,plVar7 + 0xd,1,0);
          uVar3 = puVar10[2];
          *puVar10 = 0;
          puVar10[1] = 0x3fd3333333333333;
          puVar10[2] = lVar12;
          func_0x000107c6142c(uVar3);
          if (puVar17 == (undefined *)0x0) {
            lVar12 = plVar7[0x18];
            puVar17 = (undefined *)plVar7[0x19];
            lVar13 = plVar7[0x17];
            FUN_103198594(plVar7[0x15],lVar13,0x112d36580,&UNK_10d9016d0);
            (**(code **)(puVar17 + 0x30))(lVar13,1,lVar12);
            if ((int)lVar13 == 1) {
              func_0x0001000293e4(plVar7[0x17]);
            }
            else {
              (**(code **)(plVar7[0x19] + 0x20))(plVar7[0x1a],plVar7[0x17],plVar7[0x18]);
              puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
              func_0x000107c61168();
              func_0x000107c415e0();
              func_0x000107c61180();
              puVar8 = puVar17;
              func_0x000107c5ed90();
              plVar7[0x13] = 0;
              puVar9 = puVar17;
              func_0x000107c4ff50();
              func_0x000107c61170(puVar8);
              func_0x000107c61170(puVar17);
              puVar17 = (undefined *)plVar7[0x13];
              if ((int)puVar9 == 0) {
                puVar8 = puVar17;
                func_0x000107c61174(puVar17);
                func_0x000107c5ed30();
                func_0x000107c61170(puVar8);
                func_0x000107c61654();
                func_0x000107c614ac(puVar17);
              }
              else {
                func_0x000107c61174(puVar17);
                puVar17 = puVar9;
              }
              (**(code **)(plVar7[0x19] + 8))(plVar7[0x1a],plVar7[0x18]);
            }
            lVar12 = plVar7[0x16] + _DAT_113806f10;
            func_0x000107c61618();
            plVar7[0x1d] = lVar12;
            if (lVar12 == 0) {
              lVar12 = plVar7[0x1a];
              puVar10 = (undefined8 *)plVar7[0x17];
              func_0x000107c615c0(plVar7[0x1b]);
              func_0x000107c615c0(lVar12);
              func_0x000107c615c0(puVar10);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)plVar7[1])();
                return;
              }
            }
            else {
              puVar10 = (undefined8 *)0x0;
              func_0x000107c5fcec();
              puVar11 = puVar10;
              func_0x000107c5fce8();
              plVar7[0x1e] = (long)puVar11;
              func_0x000100eea164();
              puVar14 = puVar10;
              func_0x000107c5fca8(puVar10,puVar11);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                pcVar5 = FUN_103197450;
                goto LAB_107c615e0;
              }
            }
          }
          else {
            plVar7[0x1c] = *(long *)(plVar7[0x16] + 0x70);
            func_0x000107c61174(plVar7[0x14]);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
              pcVar5 = FUN_1031970e0;
              puVar14 = (undefined8 *)0x0;
              puVar11 = (undefined8 *)0x0;
              goto LAB_107c615e0;
            }
          }
          func_0x000107c60e78();
          *(undefined8 **)((long)plVar2 + -0x80) = puVar10;
          *(ulong *)((long)plVar2 + -0x70) = (ulong)((long)plVar2 + -0x30) | 0x1000000000000000;
          *(code **)((long)plVar2 + -0x68) = FUN_1031970e0;
          *(long **)((long)plVar2 + -0x78) = plVar7;
          *(undefined8 *)((long)plVar2 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar12 = plVar7[0x14];
          plVar7[2] = (long)plVar7;
          plVar7[3] = (long)FUN_103197168;
          func_0x000107c61448(plVar7 + 2,0);
          func_0x0001031982f4();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_continuation_await_110350070)(plVar7 + 2);
            return;
          }
          func_0x000107c60e78();
          *(ulong *)((long)plVar2 + -0xa0) = (ulong)((long)plVar2 + -0x70) | 0x1000000000000000;
          *(code **)((long)plVar2 + -0x98) = FUN_103197168;
          *(long **)((long)plVar2 + -0xa8) = plVar7;
          *(undefined8 *)((long)plVar2 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          *(long *)((long)plVar2 + -0xa8) = *plVar7;
          lVar13 = *plVar7;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0xb0)) {
            pcVar5 = (code *)0x1031971d4;
            puVar14 = (undefined8 *)0x0;
            puVar11 = (undefined8 *)0x0;
          }
          else {
            func_0x000107c60e78();
            *(ulong *)((long)plVar2 + -0xc0) = (ulong)((long)plVar2 + -0xa0) | 0x1000000000000000;
            *(undefined8 *)((long)plVar2 + -0xb8) = 0x1031971d4;
            *(long *)((long)plVar2 + -200) = lVar13;
            *(undefined8 *)((long)plVar2 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            puVar14 = *(undefined8 **)(lVar13 + 0xb0);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0xd0)) {
              func_0x000107c60e78();
              *(undefined8 *)((long)plVar2 + -0x100) = 8;
              *(undefined **)((long)plVar2 + -0xf8) = puVar17;
              *(long *)((long)plVar2 + -0xf0) = lVar12;
              *(ulong *)((long)plVar2 + -0xe0) = (ulong)((long)plVar2 + -0xc0) | 0x1000000000000000;
              *(code **)((long)plVar2 + -0xd8) = FUN_103197234;
              *(long *)((long)plVar2 + -0xe8) = lVar13;
              *(undefined8 *)((long)plVar2 + -0x108) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              func_0x000107c61170(*(undefined8 *)(lVar13 + 0xa0));
              uVar3 = *(undefined8 *)(lVar13 + 0xc0);
              lVar12 = *(long *)(lVar13 + 200);
              uVar4 = *(undefined8 *)(lVar13 + 0xb8);
              FUN_103198594(*(undefined8 *)(lVar13 + 0xa8),uVar4,0x112d36580,&UNK_10d9016d0);
              (**(code **)(lVar12 + 0x30))(uVar4,1,uVar3);
              if ((int)uVar4 == 1) {
                func_0x0001000293e4(*(undefined8 *)(lVar13 + 0xb8));
              }
              else {
                (**(code **)(*(long *)(lVar13 + 200) + 0x20))
                          (*(undefined8 *)(lVar13 + 0xd0),*(undefined8 *)(lVar13 + 0xb8),
                           *(undefined8 *)(lVar13 + 0xc0));
                puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
                func_0x000107c61168();
                func_0x000107c415e0();
                func_0x000107c61180();
                puVar8 = puVar17;
                func_0x000107c5ed90();
                *(undefined8 *)(lVar13 + 0x98) = 0;
                puVar9 = puVar17;
                func_0x000107c4ff50();
                func_0x000107c61170(puVar8);
                func_0x000107c61170(puVar17);
                uVar3 = *(undefined8 *)(lVar13 + 0x98);
                if ((int)puVar9 == 0) {
                  uVar4 = uVar3;
                  func_0x000107c61174(uVar3);
                  func_0x000107c5ed30(uVar3);
                  func_0x000107c61170(uVar4);
                  func_0x000107c61654();
                  func_0x000107c614ac(uVar3);
                }
                else {
                  func_0x000107c61174(uVar3);
                }
                (**(code **)(*(long *)(lVar13 + 200) + 8))
                          (*(undefined8 *)(lVar13 + 0xd0),*(undefined8 *)(lVar13 + 0xc0));
              }
              lVar12 = *(long *)(lVar13 + 0xb0) + _DAT_113806f10;
              func_0x000107c61618();
              *(long *)(lVar13 + 0xe8) = lVar12;
              if (lVar12 == 0) {
                uVar3 = *(undefined8 *)(lVar13 + 0xd0);
                puVar10 = *(undefined8 **)(lVar13 + 0xb8);
                func_0x000107c615c0(*(undefined8 *)(lVar13 + 0xd8));
                func_0x000107c615c0(uVar3);
                func_0x000107c615c0(puVar10);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108)) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(lVar13 + 8))();
                  return;
                }
              }
              else {
                puVar10 = (undefined8 *)0x0;
                func_0x000107c5fcec();
                puVar11 = puVar10;
                func_0x000107c5fce8();
                *(undefined8 **)(lVar13 + 0xf0) = puVar11;
                func_0x000100eea164();
                puVar14 = puVar10;
                func_0x000107c5fca8(puVar10,puVar11);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108)) {
                  pcVar5 = FUN_103197450;
                  goto LAB_107c615e0;
                }
              }
              func_0x000107c60e78();
              *(undefined8 **)((long)plVar2 + -0x130) = puVar10;
              *(ulong *)((long)plVar2 + -0x120) = (ulong)((long)plVar2 + -0xe0) | 0x1000000000000000
              ;
              *(code **)((long)plVar2 + -0x118) = FUN_103197450;
              *(long *)((long)plVar2 + -0x128) = lVar13;
              *(undefined8 *)((long)plVar2 + -0x138) =
                   *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              lVar12 = *(long *)(lVar13 + 0xe8);
              func_0x000107c61574(*(undefined8 *)(lVar13 + 0xf0));
              lVar15 = _DAT_112f476d0;
              func_0x000107c61428(lVar12 + _DAT_112f476d0,lVar13 + 0x80,0,0);
              lVar12 = lVar12 + lVar15;
              func_0x000107c61618();
              if (lVar12 != 0) {
                func_0x000107c3e3e0();
                func_0x000107c615e8(lVar12);
              }
              func_0x000107c615e8(*(undefined8 *)(lVar13 + 0xe8));
              lVar12 = *(long *)(lVar13 + 0xd0);
              uVar3 = *(undefined8 *)(lVar13 + 0xb8);
              func_0x000107c615c0(*(undefined8 *)(lVar13 + 0xd8));
              func_0x000107c615c0(lVar12);
              func_0x000107c615c0(uVar3);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0x138)) {
                func_0x000107c60e78();
                *(undefined1 **)((long)plVar2 + -0x150) = (undefined1 *)((long)plVar2 + -0x120);
                *(code **)((long)plVar2 + -0x148) = FUN_10319751c;
                func_0x000107c615e8(*(undefined8 *)(lVar12 + 0x70));
                func_0x000107c61170(*(undefined8 *)(lVar12 + 0x78));
                FUN_103198414(lVar12 + _DAT_112f47d68,FUN_103197644);
                func_0x000107c6142c(*(undefined8 *)(lVar12 + _DAT_112f47d70 + 0x10));
                FUN_1031985fc(lVar12 + _DAT_113806f10);
                func_0x000107c61470(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar12);
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar13 + 8))();
              return;
            }
            pcVar5 = FUN_103197234;
            puVar11 = (undefined8 *)0x0;
          }
        }
      }
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,puVar14,puVar11);
  return;
}



/* Entry: 103194f28; end: 10319500f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103194f28(void)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long *unaff_x22;
  long *plVar18;
  ulong unaff_x29;
  code *pcStack_188;
  long lStack_180;
  long *plStack_178;
  ulong uStack_170;
  code *pcStack_168;
  long lStack_158;
  ulong uStack_150;
  long lStack_148;
  ulong uStack_140;
  code *pcStack_138;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  ulong *puStack_110;
  code *pcStack_108;
  long lStack_100;
  long *plStack_f8;
  ulong uStack_f0;
  code *pcStack_e8;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_68;
  long lStack_60;
  ulong uStack_50;
  code *pcStack_48;
  long lStack_38;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x21] = 0;
  unaff_x22[0x20] = 6;
  *(undefined1 *)(unaff_x22 + 0x22) = 4;
  uVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar3 != 0) {
    FUN_103187f64();
    func_0x000107c61658(unaff_x22 + 0x20,&UNK_110618668,uVar3);
  }
  lVar12 = unaff_x22[0x34];
  lVar13 = unaff_x22[0x32];
  lVar15 = unaff_x22[0x33];
  lVar16 = unaff_x22[0x2f];
  func_0x000107c61170(unaff_x22[0x35]);
  func_0x000107c61170(lVar16);
  (**(code **)(lVar15 + 8))(lVar12,lVar13);
  func_0x000107c615c0(lVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x000103195008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])(6,0,4);
    return;
  }
  func_0x000107c60e78();
  uStack_50 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_48 = FUN_103195010;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar12 + 0x1e8);
  puVar14 = *(undefined8 **)(lVar12 + 0x130);
  plVar18 = (long *)*unaff_x22;
  lStack_60 = lVar13;
  func_0x000107c615c0(*(undefined8 *)(lVar12 + 0x1f0));
  func_0x0001000293e4(uVar3);
  func_0x000107c615c0(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    pcVar7 = FUN_1031950a0;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c60e78();
    uStack_80 = (ulong)&uStack_50 | 0x1000000000000000;
    pcStack_78 = FUN_1031950a0;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar18[0x1e] = 0;
    plVar18[0x1d] = 5;
    *(undefined1 *)(plVar18 + 0x1f) = 4;
    uVar4 = 2;
    lStack_a0 = lVar15;
    lStack_98 = lVar16;
    uStack_90 = uVar3;
    plStack_88 = plVar18;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar4 != 0) {
      FUN_103187f64();
      func_0x000107c61658(plVar18 + 0x1d,&UNK_110618668,uVar4);
    }
    lVar12 = plVar18[0x34];
    lVar13 = plVar18[0x32];
    lVar15 = plVar18[0x33];
    lVar16 = plVar18[0x2f];
    func_0x000107c61170(plVar18[0x35]);
    func_0x000107c61170(lVar16);
    (**(code **)(lVar15 + 8))(lVar12,lVar13);
    func_0x000107c615c0(lVar12);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
                    /* WARNING: Could not recover jumptable at 0x000103195184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar18[1])(5,0,4);
      return;
    }
    func_0x000107c60e78();
    uStack_c0 = (ulong)&uStack_80 | 0x1000000000000000;
    pcStack_b8 = FUN_10319518c;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_c8 = *plVar18;
    uVar3 = *(undefined8 *)(lStack_c8 + 0x1f8);
    puVar14 = *(undefined8 **)(lStack_c8 + 0x130);
    plVar18 = (long *)*plVar18;
    lStack_d0 = lVar13;
    func_0x000107c615c0(*(undefined8 *)(lStack_c8 + 0x200));
    func_0x0001000293e4(uVar3);
    func_0x000107c615c0(uVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      pcVar7 = FUN_10319521c;
      puVar11 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c60e78();
      uStack_f0 = (ulong)&uStack_c0 | 0x1000000000000000;
      plVar2 = &lStack_100;
      pcStack_e8 = FUN_10319521c;
      lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar18[0x14] = 0;
      plVar18[0x15] = 0;
      *(undefined1 *)(plVar18 + 0x16) = 4;
      uVar4 = 2;
      plStack_f8 = plVar18;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar4 != 0) {
        FUN_103187f64();
        func_0x000107c61658(plVar18 + 0x14,&UNK_110618668,uVar4);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar18[1])(0,0,4);
        return;
      }
      func_0x000107c60e78();
      puStack_110 = (ulong *)((ulong)&uStack_f0 | 0x1000000000000000);
      pcStack_108 = FUN_1031952c0;
      lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar12 = 0x112d36580;
      uStack_120 = uVar3;
      plStack_118 = plVar18;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar5 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar18[0x41] = uVar5;
      lVar12 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar5,1,1,lVar12);
      plVar6 = (long *)0x100;
      func_0x000107c615b8();
      plVar18[0x42] = (long)plVar6;
      *plVar6 = (long)plVar18;
      plVar6[1] = (long)FUN_103195398;
      puVar14 = (undefined8 *)plVar18[0x26];
      uVar3 = uStack_120;
      pcStack_188 = pcStack_108;
      puVar1 = puStack_110;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
        func_0x000107c60e78();
        uStack_140 = (ulong)&puStack_110 | 0x1000000000000000;
        pcStack_138 = FUN_103195398;
        lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_148 = *plVar18;
        uVar3 = *(undefined8 *)(lStack_148 + 0x208);
        puVar14 = *(undefined8 **)(lStack_148 + 0x130);
        plVar18 = (long *)*plVar18;
        uStack_150 = uVar5;
        func_0x000107c615c0(*(undefined8 *)(lStack_148 + 0x210));
        func_0x0001000293e4(uVar3);
        func_0x000107c615c0(uVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
          pcVar7 = FUN_10319542c;
          puVar11 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_170 = (ulong)&uStack_140 | 0x1000000000000000;
        plVar2 = &lStack_180;
        pcStack_168 = FUN_10319542c;
        lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar18[0x12] = plVar18[0x2d];
        plVar18[0x11] = plVar18[0x2c];
        *(undefined1 *)(plVar18 + 0x13) = *(undefined1 *)((long)plVar18 + 0x81);
        uVar4 = 2;
        plStack_178 = plVar18;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar4 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar18 + 0x11,&UNK_110618668,uVar4);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar18[1])();
          return;
        }
        func_0x000107c60e78(plVar18[0x2c],plVar18[0x2d],*(undefined1 *)((long)plVar18 + 0x81));
        pcStack_188 = FUN_1031954d0;
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar12 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar5 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar18[0x43] = uVar5;
        lVar12 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar5,1,1,lVar12);
        plVar6 = (long *)0x100;
        func_0x000107c615b8();
        plVar18[0x44] = (long)plVar6;
        *plVar6 = (long)plVar18;
        plVar6[1] = (long)FUN_1031955a8;
        puVar14 = (undefined8 *)plVar18[0x26];
        puVar1 = &uStack_170;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
          func_0x000107c60e78();
          lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar13 = *plVar18;
          uVar3 = *(undefined8 *)(lVar13 + 0x218);
          puVar14 = *(undefined8 **)(lVar13 + 0x130);
          lVar15 = *plVar18;
          func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x220));
          func_0x0001000293e4(uVar3);
          func_0x000107c615c0(uVar3);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
            pcVar7 = FUN_10319563c;
            puVar11 = (undefined8 *)0x0;
          }
          else {
            func_0x000107c60e78();
            lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
            *(undefined8 *)(lVar15 + 0xc0) = *(undefined8 *)(lVar15 + 0x180);
            *(undefined8 *)(lVar15 + 0xb8) = *(undefined8 *)(lVar15 + 0x178);
            *(undefined1 *)(lVar15 + 200) = *(undefined1 *)(lVar15 + 0x82);
            uVar3 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar3 != 0) {
              FUN_103187f64();
              func_0x000107c61658((undefined8 *)(lVar15 + 0xb8),&UNK_110618668,uVar3);
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar15 + 8))();
              return;
            }
            func_0x000107c60e78(*(undefined8 *)(lVar15 + 0x178),*(undefined8 *)(lVar15 + 0x180),
                                *(undefined1 *)(lVar15 + 0x82));
            pcVar7 = FUN_1031956f8;
            puVar14 = (undefined8 *)0x0;
            puVar11 = (undefined8 *)0x0;
          }
          goto LAB_107c615e0;
        }
      }
      *(ulong *)((long)plVar2 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
      *(code **)((long)plVar2 + -8) = pcStack_188;
      *(long **)((long)plVar2 + -0x18) = plVar6;
      *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      plVar6[0x15] = uVar5;
      plVar6[0x16] = (long)puVar14;
      plVar6[0x14] = 0;
      lVar12 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar5 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar6[0x17] = uVar5;
      lVar12 = 0;
      func_0x000107c5ede0();
      plVar6[0x18] = lVar12;
      lVar12 = *(long *)(lVar12 + -8);
      plVar6[0x19] = lVar12;
      uVar5 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar6[0x1a] = uVar5;
      lVar12 = 0;
      FUN_103197644();
      uVar5 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar6[0x1b] = uVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x20)) {
        pcVar7 = FUN_103196dcc;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c60e78();
        *(long *)((long)plVar2 + -0x50) = lVar15;
        *(long *)((long)plVar2 + -0x48) = lVar16;
        *(undefined8 *)((long)plVar2 + -0x40) = uVar3;
        *(ulong *)((long)plVar2 + -0x30) = (ulong)((long)plVar2 + -0x10) | 0x1000000000000000;
        *(code **)((long)plVar2 + -0x28) = FUN_103196dcc;
        *(long **)((long)plVar2 + -0x38) = plVar6;
        *(undefined8 *)((long)plVar2 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        lVar15 = plVar6[0x1b];
        lVar13 = plVar6[0x16];
        puVar17 = (undefined *)plVar6[0x14];
        lVar12 = 0;
        FUN_103197894();
        (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar15,1,1,lVar12);
        lVar12 = _DAT_112f47d68;
        func_0x000107c61428(lVar13 + _DAT_112f47d68,plVar6 + 10,0x21,0);
        func_0x000103187ec0(lVar15,lVar13 + lVar12);
        func_0x000107c614a8(plVar6 + 10);
        lVar12 = 8;
        func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
        *(undefined8 *)(lVar12 + 0x10) = 8;
        *(undefined8 *)(lVar12 + 0x28) = 0;
        *(undefined8 *)(lVar12 + 0x20) = 0;
        *(undefined8 *)(lVar12 + 0x38) = 0;
        *(undefined8 *)(lVar12 + 0x30) = 0;
        *(undefined8 *)(lVar12 + 0x48) = 0;
        *(undefined8 *)(lVar12 + 0x40) = 0;
        *(undefined8 *)(lVar12 + 0x58) = 0;
        *(undefined8 *)(lVar12 + 0x50) = 0;
        puVar10 = (undefined8 *)(lVar13 + _DAT_112f47d70);
        func_0x000107c61428(puVar10,plVar6 + 0xd,1,0);
        uVar3 = puVar10[2];
        *puVar10 = 0;
        puVar10[1] = 0x3fd3333333333333;
        puVar10[2] = lVar12;
        func_0x000107c6142c(uVar3);
        if (puVar17 == (undefined *)0x0) {
          lVar12 = plVar6[0x18];
          puVar17 = (undefined *)plVar6[0x19];
          lVar13 = plVar6[0x17];
          FUN_103198594(plVar6[0x15],lVar13,0x112d36580,&UNK_10d9016d0);
          (**(code **)(puVar17 + 0x30))(lVar13,1,lVar12);
          if ((int)lVar13 == 1) {
            func_0x0001000293e4(plVar6[0x17]);
          }
          else {
            (**(code **)(plVar6[0x19] + 0x20))(plVar6[0x1a],plVar6[0x17],plVar6[0x18]);
            puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x000107c61168();
            func_0x000107c415e0();
            func_0x000107c61180();
            puVar8 = puVar17;
            func_0x000107c5ed90();
            plVar6[0x13] = 0;
            puVar9 = puVar17;
            func_0x000107c4ff50();
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar17);
            puVar17 = (undefined *)plVar6[0x13];
            if ((int)puVar9 == 0) {
              puVar8 = puVar17;
              func_0x000107c61174(puVar17);
              func_0x000107c5ed30();
              func_0x000107c61170(puVar8);
              func_0x000107c61654();
              func_0x000107c614ac(puVar17);
            }
            else {
              func_0x000107c61174(puVar17);
              puVar17 = puVar9;
            }
            (**(code **)(plVar6[0x19] + 8))(plVar6[0x1a],plVar6[0x18]);
          }
          lVar12 = plVar6[0x16] + _DAT_113806f10;
          func_0x000107c61618();
          plVar6[0x1d] = lVar12;
          if (lVar12 == 0) {
            lVar12 = plVar6[0x1a];
            puVar10 = (undefined8 *)plVar6[0x17];
            func_0x000107c615c0(plVar6[0x1b]);
            func_0x000107c615c0(lVar12);
            func_0x000107c615c0(puVar10);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)plVar6[1])();
              return;
            }
          }
          else {
            puVar10 = (undefined8 *)0x0;
            func_0x000107c5fcec();
            puVar11 = puVar10;
            func_0x000107c5fce8();
            plVar6[0x1e] = (long)puVar11;
            func_0x000100eea164();
            puVar14 = puVar10;
            func_0x000107c5fca8(puVar10,puVar11);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
              pcVar7 = FUN_103197450;
              goto LAB_107c615e0;
            }
          }
        }
        else {
          plVar6[0x1c] = *(long *)(plVar6[0x16] + 0x70);
          func_0x000107c61174(plVar6[0x14]);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
            pcVar7 = FUN_1031970e0;
            puVar14 = (undefined8 *)0x0;
            puVar11 = (undefined8 *)0x0;
            goto LAB_107c615e0;
          }
        }
        func_0x000107c60e78();
        *(undefined8 **)((long)plVar2 + -0x80) = puVar10;
        *(ulong *)((long)plVar2 + -0x70) = (ulong)((long)plVar2 + -0x30) | 0x1000000000000000;
        *(code **)((long)plVar2 + -0x68) = FUN_1031970e0;
        *(long **)((long)plVar2 + -0x78) = plVar6;
        *(undefined8 *)((long)plVar2 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        lVar12 = plVar6[0x14];
        plVar6[2] = (long)plVar6;
        plVar6[3] = (long)FUN_103197168;
        func_0x000107c61448(plVar6 + 2,0);
        func_0x0001031982f4();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(plVar6 + 2);
          return;
        }
        func_0x000107c60e78();
        *(ulong *)((long)plVar2 + -0xa0) = (ulong)((long)plVar2 + -0x70) | 0x1000000000000000;
        *(code **)((long)plVar2 + -0x98) = FUN_103197168;
        *(long **)((long)plVar2 + -0xa8) = plVar6;
        *(undefined8 *)((long)plVar2 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        *(long *)((long)plVar2 + -0xa8) = *plVar6;
        lVar13 = *plVar6;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0xb0)) {
          pcVar7 = (code *)0x1031971d4;
          puVar14 = (undefined8 *)0x0;
          puVar11 = (undefined8 *)0x0;
        }
        else {
          func_0x000107c60e78();
          *(ulong *)((long)plVar2 + -0xc0) = (ulong)((long)plVar2 + -0xa0) | 0x1000000000000000;
          *(undefined8 *)((long)plVar2 + -0xb8) = 0x1031971d4;
          *(long *)((long)plVar2 + -200) = lVar13;
          *(undefined8 *)((long)plVar2 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          puVar14 = *(undefined8 **)(lVar13 + 0xb0);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0xd0)) {
            func_0x000107c60e78();
            *(undefined8 *)((long)plVar2 + -0x100) = 8;
            *(undefined **)((long)plVar2 + -0xf8) = puVar17;
            *(long *)((long)plVar2 + -0xf0) = lVar12;
            *(ulong *)((long)plVar2 + -0xe0) = (ulong)((long)plVar2 + -0xc0) | 0x1000000000000000;
            *(code **)((long)plVar2 + -0xd8) = FUN_103197234;
            *(long *)((long)plVar2 + -0xe8) = lVar13;
            *(undefined8 *)((long)plVar2 + -0x108) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
            ;
            func_0x000107c61170(*(undefined8 *)(lVar13 + 0xa0));
            uVar3 = *(undefined8 *)(lVar13 + 0xc0);
            lVar12 = *(long *)(lVar13 + 200);
            uVar4 = *(undefined8 *)(lVar13 + 0xb8);
            FUN_103198594(*(undefined8 *)(lVar13 + 0xa8),uVar4,0x112d36580,&UNK_10d9016d0);
            (**(code **)(lVar12 + 0x30))(uVar4,1,uVar3);
            if ((int)uVar4 == 1) {
              func_0x0001000293e4(*(undefined8 *)(lVar13 + 0xb8));
            }
            else {
              (**(code **)(*(long *)(lVar13 + 200) + 0x20))
                        (*(undefined8 *)(lVar13 + 0xd0),*(undefined8 *)(lVar13 + 0xb8),
                         *(undefined8 *)(lVar13 + 0xc0));
              puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
              func_0x000107c61168();
              func_0x000107c415e0();
              func_0x000107c61180();
              puVar8 = puVar17;
              func_0x000107c5ed90();
              *(undefined8 *)(lVar13 + 0x98) = 0;
              puVar9 = puVar17;
              func_0x000107c4ff50();
              func_0x000107c61170(puVar8);
              func_0x000107c61170(puVar17);
              uVar3 = *(undefined8 *)(lVar13 + 0x98);
              if ((int)puVar9 == 0) {
                uVar4 = uVar3;
                func_0x000107c61174(uVar3);
                func_0x000107c5ed30(uVar3);
                func_0x000107c61170(uVar4);
                func_0x000107c61654();
                func_0x000107c614ac(uVar3);
              }
              else {
                func_0x000107c61174(uVar3);
              }
              (**(code **)(*(long *)(lVar13 + 200) + 8))
                        (*(undefined8 *)(lVar13 + 0xd0),*(undefined8 *)(lVar13 + 0xc0));
            }
            lVar12 = *(long *)(lVar13 + 0xb0) + _DAT_113806f10;
            func_0x000107c61618();
            *(long *)(lVar13 + 0xe8) = lVar12;
            if (lVar12 == 0) {
              uVar3 = *(undefined8 *)(lVar13 + 0xd0);
              puVar10 = *(undefined8 **)(lVar13 + 0xb8);
              func_0x000107c615c0(*(undefined8 *)(lVar13 + 0xd8));
              func_0x000107c615c0(uVar3);
              func_0x000107c615c0(puVar10);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108)) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar13 + 8))();
                return;
              }
            }
            else {
              puVar10 = (undefined8 *)0x0;
              func_0x000107c5fcec();
              puVar11 = puVar10;
              func_0x000107c5fce8();
              *(undefined8 **)(lVar13 + 0xf0) = puVar11;
              func_0x000100eea164();
              puVar14 = puVar10;
              func_0x000107c5fca8(puVar10,puVar11);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108)) {
                pcVar7 = FUN_103197450;
                goto LAB_107c615e0;
              }
            }
            func_0x000107c60e78();
            *(undefined8 **)((long)plVar2 + -0x130) = puVar10;
            *(ulong *)((long)plVar2 + -0x120) = (ulong)((long)plVar2 + -0xe0) | 0x1000000000000000;
            *(code **)((long)plVar2 + -0x118) = FUN_103197450;
            *(long *)((long)plVar2 + -0x128) = lVar13;
            *(undefined8 *)((long)plVar2 + -0x138) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
            ;
            lVar12 = *(long *)(lVar13 + 0xe8);
            func_0x000107c61574(*(undefined8 *)(lVar13 + 0xf0));
            lVar15 = _DAT_112f476d0;
            func_0x000107c61428(lVar12 + _DAT_112f476d0,lVar13 + 0x80,0,0);
            lVar12 = lVar12 + lVar15;
            func_0x000107c61618();
            if (lVar12 != 0) {
              func_0x000107c3e3e0();
              func_0x000107c615e8(lVar12);
            }
            func_0x000107c615e8(*(undefined8 *)(lVar13 + 0xe8));
            lVar12 = *(long *)(lVar13 + 0xd0);
            uVar3 = *(undefined8 *)(lVar13 + 0xb8);
            func_0x000107c615c0(*(undefined8 *)(lVar13 + 0xd8));
            func_0x000107c615c0(lVar12);
            func_0x000107c615c0(uVar3);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0x138)) {
              func_0x000107c60e78();
              *(undefined1 **)((long)plVar2 + -0x150) = (undefined1 *)((long)plVar2 + -0x120);
              *(code **)((long)plVar2 + -0x148) = FUN_10319751c;
              func_0x000107c615e8(*(undefined8 *)(lVar12 + 0x70));
              func_0x000107c61170(*(undefined8 *)(lVar12 + 0x78));
              FUN_103198414(lVar12 + _DAT_112f47d68,FUN_103197644);
              func_0x000107c6142c(*(undefined8 *)(lVar12 + _DAT_112f47d70 + 0x10));
              FUN_1031985fc(lVar12 + _DAT_113806f10);
              func_0x000107c61470(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar12);
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar13 + 8))();
            return;
          }
          pcVar7 = FUN_103197234;
          puVar11 = (undefined8 *)0x0;
        }
      }
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar7,puVar14,puVar11);
  return;
}



/* Entry: 103195010; end: 10319509f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103195010(void)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long *unaff_x22;
  long *plVar18;
  ulong unaff_x29;
  code *pcStack_148;
  long lStack_140;
  long *plStack_138;
  ulong uStack_130;
  code *pcStack_128;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  ulong *puStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_68;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_28;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar12 + 0x1e8);
  puVar14 = *(undefined8 **)(lVar12 + 0x130);
  plVar18 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar12 + 0x1f0));
  func_0x0001000293e4(uVar3);
  func_0x000107c615c0(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    pcVar7 = FUN_1031950a0;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c60e78();
    uStack_40 = (ulong)&uStack_10 | 0x1000000000000000;
    pcStack_38 = FUN_1031950a0;
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar18[0x1e] = 0;
    plVar18[0x1d] = 5;
    *(undefined1 *)(plVar18 + 0x1f) = 4;
    uVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar3 != 0) {
      FUN_103187f64();
      func_0x000107c61658(plVar18 + 0x1d,&UNK_110618668,uVar3);
    }
    lVar12 = plVar18[0x34];
    lVar13 = plVar18[0x32];
    lVar15 = plVar18[0x33];
    lVar16 = plVar18[0x2f];
    func_0x000107c61170(plVar18[0x35]);
    func_0x000107c61170(lVar16);
    (**(code **)(lVar15 + 8))(lVar12,lVar13);
    func_0x000107c615c0(lVar12);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x000103195184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar18[1])(5,0,4);
      return;
    }
    func_0x000107c60e78();
    uStack_80 = (ulong)&uStack_40 | 0x1000000000000000;
    pcStack_78 = FUN_10319518c;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_88 = *plVar18;
    uVar3 = *(undefined8 *)(lStack_88 + 0x1f8);
    puVar14 = *(undefined8 **)(lStack_88 + 0x130);
    plVar18 = (long *)*plVar18;
    lStack_90 = lVar13;
    func_0x000107c615c0(*(undefined8 *)(lStack_88 + 0x200));
    func_0x0001000293e4(uVar3);
    func_0x000107c615c0(uVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      pcVar7 = FUN_10319521c;
      puVar11 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c60e78();
      uStack_b0 = (ulong)&uStack_80 | 0x1000000000000000;
      plVar2 = &lStack_c0;
      pcStack_a8 = FUN_10319521c;
      lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar18[0x14] = 0;
      plVar18[0x15] = 0;
      *(undefined1 *)(plVar18 + 0x16) = 4;
      uVar4 = 2;
      plStack_b8 = plVar18;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar4 != 0) {
        FUN_103187f64();
        func_0x000107c61658(plVar18 + 0x14,&UNK_110618668,uVar4);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar18[1])(0,0,4);
        return;
      }
      func_0x000107c60e78();
      puStack_d0 = (ulong *)((ulong)&uStack_b0 | 0x1000000000000000);
      pcStack_c8 = FUN_1031952c0;
      lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar12 = 0x112d36580;
      uStack_e0 = uVar3;
      plStack_d8 = plVar18;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar5 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar18[0x41] = uVar5;
      lVar12 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar5,1,1,lVar12);
      plVar6 = (long *)0x100;
      func_0x000107c615b8();
      plVar18[0x42] = (long)plVar6;
      *plVar6 = (long)plVar18;
      plVar6[1] = (long)FUN_103195398;
      puVar14 = (undefined8 *)plVar18[0x26];
      uVar3 = uStack_e0;
      pcStack_148 = pcStack_c8;
      puVar1 = puStack_d0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
        func_0x000107c60e78();
        uStack_100 = (ulong)&puStack_d0 | 0x1000000000000000;
        pcStack_f8 = FUN_103195398;
        lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_108 = *plVar18;
        uVar3 = *(undefined8 *)(lStack_108 + 0x208);
        puVar14 = *(undefined8 **)(lStack_108 + 0x130);
        plVar18 = (long *)*plVar18;
        uStack_110 = uVar5;
        func_0x000107c615c0(*(undefined8 *)(lStack_108 + 0x210));
        func_0x0001000293e4(uVar3);
        func_0x000107c615c0(uVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
          pcVar7 = FUN_10319542c;
          puVar11 = (undefined8 *)0x0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_130 = (ulong)&uStack_100 | 0x1000000000000000;
        plVar2 = &lStack_140;
        pcStack_128 = FUN_10319542c;
        lStack_140 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar18[0x12] = plVar18[0x2d];
        plVar18[0x11] = plVar18[0x2c];
        *(undefined1 *)(plVar18 + 0x13) = *(undefined1 *)((long)plVar18 + 0x81);
        uVar4 = 2;
        plStack_138 = plVar18;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar4 != 0) {
          FUN_103187f64();
          func_0x000107c61658(plVar18 + 0x11,&UNK_110618668,uVar4);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_140) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar18[1])();
          return;
        }
        func_0x000107c60e78(plVar18[0x2c],plVar18[0x2d],*(undefined1 *)((long)plVar18 + 0x81));
        pcStack_148 = FUN_1031954d0;
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar12 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        uVar5 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar18[0x43] = uVar5;
        lVar12 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar5,1,1,lVar12);
        plVar6 = (long *)0x100;
        func_0x000107c615b8();
        plVar18[0x44] = (long)plVar6;
        *plVar6 = (long)plVar18;
        plVar6[1] = (long)FUN_1031955a8;
        puVar14 = (undefined8 *)plVar18[0x26];
        puVar1 = &uStack_130;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
          func_0x000107c60e78();
          lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar13 = *plVar18;
          uVar3 = *(undefined8 *)(lVar13 + 0x218);
          puVar14 = *(undefined8 **)(lVar13 + 0x130);
          lVar15 = *plVar18;
          func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x220));
          func_0x0001000293e4(uVar3);
          func_0x000107c615c0(uVar3);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
            pcVar7 = FUN_10319563c;
            puVar11 = (undefined8 *)0x0;
          }
          else {
            func_0x000107c60e78();
            lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
            *(undefined8 *)(lVar15 + 0xc0) = *(undefined8 *)(lVar15 + 0x180);
            *(undefined8 *)(lVar15 + 0xb8) = *(undefined8 *)(lVar15 + 0x178);
            *(undefined1 *)(lVar15 + 200) = *(undefined1 *)(lVar15 + 0x82);
            uVar3 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if ((int)uVar3 != 0) {
              FUN_103187f64();
              func_0x000107c61658((undefined8 *)(lVar15 + 0xb8),&UNK_110618668,uVar3);
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar15 + 8))();
              return;
            }
            func_0x000107c60e78(*(undefined8 *)(lVar15 + 0x178),*(undefined8 *)(lVar15 + 0x180),
                                *(undefined1 *)(lVar15 + 0x82));
            pcVar7 = FUN_1031956f8;
            puVar14 = (undefined8 *)0x0;
            puVar11 = (undefined8 *)0x0;
          }
          goto LAB_107c615e0;
        }
      }
      *(ulong *)((long)plVar2 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
      *(code **)((long)plVar2 + -8) = pcStack_148;
      *(long **)((long)plVar2 + -0x18) = plVar6;
      *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      plVar6[0x15] = uVar5;
      plVar6[0x16] = (long)puVar14;
      plVar6[0x14] = 0;
      lVar12 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar5 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar6[0x17] = uVar5;
      lVar12 = 0;
      func_0x000107c5ede0();
      plVar6[0x18] = lVar12;
      lVar12 = *(long *)(lVar12 + -8);
      plVar6[0x19] = lVar12;
      uVar5 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar6[0x1a] = uVar5;
      lVar12 = 0;
      FUN_103197644();
      uVar5 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar6[0x1b] = uVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x20)) {
        pcVar7 = FUN_103196dcc;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c60e78();
        *(long *)((long)plVar2 + -0x50) = lVar15;
        *(long *)((long)plVar2 + -0x48) = lVar16;
        *(undefined8 *)((long)plVar2 + -0x40) = uVar3;
        *(ulong *)((long)plVar2 + -0x30) = (ulong)((long)plVar2 + -0x10) | 0x1000000000000000;
        *(code **)((long)plVar2 + -0x28) = FUN_103196dcc;
        *(long **)((long)plVar2 + -0x38) = plVar6;
        *(undefined8 *)((long)plVar2 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        lVar15 = plVar6[0x1b];
        lVar13 = plVar6[0x16];
        puVar17 = (undefined *)plVar6[0x14];
        lVar12 = 0;
        FUN_103197894();
        (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar15,1,1,lVar12);
        lVar12 = _DAT_112f47d68;
        func_0x000107c61428(lVar13 + _DAT_112f47d68,plVar6 + 10,0x21,0);
        func_0x000103187ec0(lVar15,lVar13 + lVar12);
        func_0x000107c614a8(plVar6 + 10);
        lVar12 = 8;
        func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
        *(undefined8 *)(lVar12 + 0x10) = 8;
        *(undefined8 *)(lVar12 + 0x28) = 0;
        *(undefined8 *)(lVar12 + 0x20) = 0;
        *(undefined8 *)(lVar12 + 0x38) = 0;
        *(undefined8 *)(lVar12 + 0x30) = 0;
        *(undefined8 *)(lVar12 + 0x48) = 0;
        *(undefined8 *)(lVar12 + 0x40) = 0;
        *(undefined8 *)(lVar12 + 0x58) = 0;
        *(undefined8 *)(lVar12 + 0x50) = 0;
        puVar10 = (undefined8 *)(lVar13 + _DAT_112f47d70);
        func_0x000107c61428(puVar10,plVar6 + 0xd,1,0);
        uVar3 = puVar10[2];
        *puVar10 = 0;
        puVar10[1] = 0x3fd3333333333333;
        puVar10[2] = lVar12;
        func_0x000107c6142c(uVar3);
        if (puVar17 == (undefined *)0x0) {
          lVar12 = plVar6[0x18];
          puVar17 = (undefined *)plVar6[0x19];
          lVar13 = plVar6[0x17];
          FUN_103198594(plVar6[0x15],lVar13,0x112d36580,&UNK_10d9016d0);
          (**(code **)(puVar17 + 0x30))(lVar13,1,lVar12);
          if ((int)lVar13 == 1) {
            func_0x0001000293e4(plVar6[0x17]);
          }
          else {
            (**(code **)(plVar6[0x19] + 0x20))(plVar6[0x1a],plVar6[0x17],plVar6[0x18]);
            puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x000107c61168();
            func_0x000107c415e0();
            func_0x000107c61180();
            puVar8 = puVar17;
            func_0x000107c5ed90();
            plVar6[0x13] = 0;
            puVar9 = puVar17;
            func_0x000107c4ff50();
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar17);
            puVar17 = (undefined *)plVar6[0x13];
            if ((int)puVar9 == 0) {
              puVar8 = puVar17;
              func_0x000107c61174(puVar17);
              func_0x000107c5ed30();
              func_0x000107c61170(puVar8);
              func_0x000107c61654();
              func_0x000107c614ac(puVar17);
            }
            else {
              func_0x000107c61174(puVar17);
              puVar17 = puVar9;
            }
            (**(code **)(plVar6[0x19] + 8))(plVar6[0x1a],plVar6[0x18]);
          }
          lVar12 = plVar6[0x16] + _DAT_113806f10;
          func_0x000107c61618();
          plVar6[0x1d] = lVar12;
          if (lVar12 == 0) {
            lVar12 = plVar6[0x1a];
            puVar10 = (undefined8 *)plVar6[0x17];
            func_0x000107c615c0(plVar6[0x1b]);
            func_0x000107c615c0(lVar12);
            func_0x000107c615c0(puVar10);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)plVar6[1])();
              return;
            }
          }
          else {
            puVar10 = (undefined8 *)0x0;
            func_0x000107c5fcec();
            puVar11 = puVar10;
            func_0x000107c5fce8();
            plVar6[0x1e] = (long)puVar11;
            func_0x000100eea164();
            puVar14 = puVar10;
            func_0x000107c5fca8(puVar10,puVar11);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
              pcVar7 = FUN_103197450;
              goto LAB_107c615e0;
            }
          }
        }
        else {
          plVar6[0x1c] = *(long *)(plVar6[0x16] + 0x70);
          func_0x000107c61174(plVar6[0x14]);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
            pcVar7 = FUN_1031970e0;
            puVar14 = (undefined8 *)0x0;
            puVar11 = (undefined8 *)0x0;
            goto LAB_107c615e0;
          }
        }
        func_0x000107c60e78();
        *(undefined8 **)((long)plVar2 + -0x80) = puVar10;
        *(ulong *)((long)plVar2 + -0x70) = (ulong)((long)plVar2 + -0x30) | 0x1000000000000000;
        *(code **)((long)plVar2 + -0x68) = FUN_1031970e0;
        *(long **)((long)plVar2 + -0x78) = plVar6;
        *(undefined8 *)((long)plVar2 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        lVar12 = plVar6[0x14];
        plVar6[2] = (long)plVar6;
        plVar6[3] = (long)FUN_103197168;
        func_0x000107c61448(plVar6 + 2,0);
        func_0x0001031982f4();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(plVar6 + 2);
          return;
        }
        func_0x000107c60e78();
        *(ulong *)((long)plVar2 + -0xa0) = (ulong)((long)plVar2 + -0x70) | 0x1000000000000000;
        *(code **)((long)plVar2 + -0x98) = FUN_103197168;
        *(long **)((long)plVar2 + -0xa8) = plVar6;
        *(undefined8 *)((long)plVar2 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        *(long *)((long)plVar2 + -0xa8) = *plVar6;
        lVar13 = *plVar6;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0xb0)) {
          pcVar7 = (code *)0x1031971d4;
          puVar14 = (undefined8 *)0x0;
          puVar11 = (undefined8 *)0x0;
        }
        else {
          func_0x000107c60e78();
          *(ulong *)((long)plVar2 + -0xc0) = (ulong)((long)plVar2 + -0xa0) | 0x1000000000000000;
          *(undefined8 *)((long)plVar2 + -0xb8) = 0x1031971d4;
          *(long *)((long)plVar2 + -200) = lVar13;
          *(undefined8 *)((long)plVar2 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          puVar14 = *(undefined8 **)(lVar13 + 0xb0);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0xd0)) {
            func_0x000107c60e78();
            *(undefined8 *)((long)plVar2 + -0x100) = 8;
            *(undefined **)((long)plVar2 + -0xf8) = puVar17;
            *(long *)((long)plVar2 + -0xf0) = lVar12;
            *(ulong *)((long)plVar2 + -0xe0) = (ulong)((long)plVar2 + -0xc0) | 0x1000000000000000;
            *(code **)((long)plVar2 + -0xd8) = FUN_103197234;
            *(long *)((long)plVar2 + -0xe8) = lVar13;
            *(undefined8 *)((long)plVar2 + -0x108) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
            ;
            func_0x000107c61170(*(undefined8 *)(lVar13 + 0xa0));
            uVar3 = *(undefined8 *)(lVar13 + 0xc0);
            lVar12 = *(long *)(lVar13 + 200);
            uVar4 = *(undefined8 *)(lVar13 + 0xb8);
            FUN_103198594(*(undefined8 *)(lVar13 + 0xa8),uVar4,0x112d36580,&UNK_10d9016d0);
            (**(code **)(lVar12 + 0x30))(uVar4,1,uVar3);
            if ((int)uVar4 == 1) {
              func_0x0001000293e4(*(undefined8 *)(lVar13 + 0xb8));
            }
            else {
              (**(code **)(*(long *)(lVar13 + 200) + 0x20))
                        (*(undefined8 *)(lVar13 + 0xd0),*(undefined8 *)(lVar13 + 0xb8),
                         *(undefined8 *)(lVar13 + 0xc0));
              puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
              func_0x000107c61168();
              func_0x000107c415e0();
              func_0x000107c61180();
              puVar8 = puVar17;
              func_0x000107c5ed90();
              *(undefined8 *)(lVar13 + 0x98) = 0;
              puVar9 = puVar17;
              func_0x000107c4ff50();
              func_0x000107c61170(puVar8);
              func_0x000107c61170(puVar17);
              uVar3 = *(undefined8 *)(lVar13 + 0x98);
              if ((int)puVar9 == 0) {
                uVar4 = uVar3;
                func_0x000107c61174(uVar3);
                func_0x000107c5ed30(uVar3);
                func_0x000107c61170(uVar4);
                func_0x000107c61654();
                func_0x000107c614ac(uVar3);
              }
              else {
                func_0x000107c61174(uVar3);
              }
              (**(code **)(*(long *)(lVar13 + 200) + 8))
                        (*(undefined8 *)(lVar13 + 0xd0),*(undefined8 *)(lVar13 + 0xc0));
            }
            lVar12 = *(long *)(lVar13 + 0xb0) + _DAT_113806f10;
            func_0x000107c61618();
            *(long *)(lVar13 + 0xe8) = lVar12;
            if (lVar12 == 0) {
              uVar3 = *(undefined8 *)(lVar13 + 0xd0);
              puVar10 = *(undefined8 **)(lVar13 + 0xb8);
              func_0x000107c615c0(*(undefined8 *)(lVar13 + 0xd8));
              func_0x000107c615c0(uVar3);
              func_0x000107c615c0(puVar10);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108)) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar13 + 8))();
                return;
              }
            }
            else {
              puVar10 = (undefined8 *)0x0;
              func_0x000107c5fcec();
              puVar11 = puVar10;
              func_0x000107c5fce8();
              *(undefined8 **)(lVar13 + 0xf0) = puVar11;
              func_0x000100eea164();
              puVar14 = puVar10;
              func_0x000107c5fca8(puVar10,puVar11);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108)) {
                pcVar7 = FUN_103197450;
                goto LAB_107c615e0;
              }
            }
            func_0x000107c60e78();
            *(undefined8 **)((long)plVar2 + -0x130) = puVar10;
            *(ulong *)((long)plVar2 + -0x120) = (ulong)((long)plVar2 + -0xe0) | 0x1000000000000000;
            *(code **)((long)plVar2 + -0x118) = FUN_103197450;
            *(long *)((long)plVar2 + -0x128) = lVar13;
            *(undefined8 *)((long)plVar2 + -0x138) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
            ;
            lVar12 = *(long *)(lVar13 + 0xe8);
            func_0x000107c61574(*(undefined8 *)(lVar13 + 0xf0));
            lVar15 = _DAT_112f476d0;
            func_0x000107c61428(lVar12 + _DAT_112f476d0,lVar13 + 0x80,0,0);
            lVar12 = lVar12 + lVar15;
            func_0x000107c61618();
            if (lVar12 != 0) {
              func_0x000107c3e3e0();
              func_0x000107c615e8(lVar12);
            }
            func_0x000107c615e8(*(undefined8 *)(lVar13 + 0xe8));
            lVar12 = *(long *)(lVar13 + 0xd0);
            uVar3 = *(undefined8 *)(lVar13 + 0xb8);
            func_0x000107c615c0(*(undefined8 *)(lVar13 + 0xd8));
            func_0x000107c615c0(lVar12);
            func_0x000107c615c0(uVar3);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0x138)) {
              func_0x000107c60e78();
              *(undefined1 **)((long)plVar2 + -0x150) = (undefined1 *)((long)plVar2 + -0x120);
              *(code **)((long)plVar2 + -0x148) = FUN_10319751c;
              func_0x000107c615e8(*(undefined8 *)(lVar12 + 0x70));
              func_0x000107c61170(*(undefined8 *)(lVar12 + 0x78));
              FUN_103198414(lVar12 + _DAT_112f47d68,FUN_103197644);
              func_0x000107c6142c(*(undefined8 *)(lVar12 + _DAT_112f47d70 + 0x10));
              FUN_1031985fc(lVar12 + _DAT_113806f10);
              func_0x000107c61470(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar12);
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar13 + 8))();
            return;
          }
          pcVar7 = FUN_103197234;
          puVar11 = (undefined8 *)0x0;
        }
      }
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar7,puVar14,puVar11);
  return;
}



/* Entry: 1031950a0; end: 10319518b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031950a0(void)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long *unaff_x22;
  long *plVar18;
  ulong unaff_x29;
  code *pcStack_118;
  long lStack_110;
  long *plStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  ulong *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  long *plStack_88;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_68;
  long lStack_60;
  ulong uStack_50;
  code *pcStack_48;
  long lStack_38;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x1e] = 0;
  unaff_x22[0x1d] = 5;
  *(undefined1 *)(unaff_x22 + 0x1f) = 4;
  uVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar3 != 0) {
    FUN_103187f64();
    func_0x000107c61658(unaff_x22 + 0x1d,&UNK_110618668,uVar3);
  }
  lVar12 = unaff_x22[0x34];
  lVar13 = unaff_x22[0x32];
  lVar15 = unaff_x22[0x33];
  lVar16 = unaff_x22[0x2f];
  func_0x000107c61170(unaff_x22[0x35]);
  func_0x000107c61170(lVar16);
  (**(code **)(lVar15 + 8))(lVar12,lVar13);
  func_0x000107c615c0(lVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x000103195184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])(5,0,4);
    return;
  }
  func_0x000107c60e78();
  uStack_50 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_48 = FUN_10319518c;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar12 + 0x1f8);
  puVar14 = *(undefined8 **)(lVar12 + 0x130);
  plVar18 = (long *)*unaff_x22;
  lStack_60 = lVar13;
  func_0x000107c615c0(*(undefined8 *)(lVar12 + 0x200));
  func_0x0001000293e4(uVar3);
  func_0x000107c615c0(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    pcVar9 = FUN_10319521c;
    puVar11 = (undefined8 *)0x0;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_80 = (ulong)&uStack_50 | 0x1000000000000000;
  plVar2 = &lStack_90;
  pcStack_78 = FUN_10319521c;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar18[0x14] = 0;
  plVar18[0x15] = 0;
  *(undefined1 *)(plVar18 + 0x16) = 4;
  uVar4 = 2;
  plStack_88 = plVar18;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar4 != 0) {
    FUN_103187f64();
    func_0x000107c61658(plVar18 + 0x14,&UNK_110618668,uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar18[1])(0,0,4);
    return;
  }
  func_0x000107c60e78();
  puStack_a0 = (ulong *)((ulong)&uStack_80 | 0x1000000000000000);
  pcStack_98 = FUN_1031952c0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = 0x112d36580;
  uStack_b0 = uVar3;
  plStack_a8 = plVar18;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar5 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar18[0x41] = uVar5;
  lVar12 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar5,1,1,lVar12);
  plVar6 = (long *)0x100;
  func_0x000107c615b8();
  plVar18[0x42] = (long)plVar6;
  *plVar6 = (long)plVar18;
  plVar6[1] = (long)FUN_103195398;
  puVar14 = (undefined8 *)plVar18[0x26];
  uVar3 = uStack_b0;
  pcStack_118 = pcStack_98;
  puVar1 = puStack_a0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
    func_0x000107c60e78();
    uStack_d0 = (ulong)&puStack_a0 | 0x1000000000000000;
    pcStack_c8 = FUN_103195398;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_d8 = *plVar18;
    uVar3 = *(undefined8 *)(lStack_d8 + 0x208);
    puVar14 = *(undefined8 **)(lStack_d8 + 0x130);
    plVar18 = (long *)*plVar18;
    uStack_e0 = uVar5;
    func_0x000107c615c0(*(undefined8 *)(lStack_d8 + 0x210));
    func_0x0001000293e4(uVar3);
    func_0x000107c615c0(uVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      pcVar9 = FUN_10319542c;
      puVar11 = (undefined8 *)0x0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    uStack_100 = (ulong)&uStack_d0 | 0x1000000000000000;
    plVar2 = &lStack_110;
    pcStack_f8 = FUN_10319542c;
    lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar18[0x12] = plVar18[0x2d];
    plVar18[0x11] = plVar18[0x2c];
    *(undefined1 *)(plVar18 + 0x13) = *(undefined1 *)((long)plVar18 + 0x81);
    uVar4 = 2;
    plStack_108 = plVar18;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar4 != 0) {
      FUN_103187f64();
      func_0x000107c61658(plVar18 + 0x11,&UNK_110618668,uVar4);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar18[1])();
      return;
    }
    func_0x000107c60e78(plVar18[0x2c],plVar18[0x2d],*(undefined1 *)((long)plVar18 + 0x81));
    pcStack_118 = FUN_1031954d0;
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar12 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar5 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar18[0x43] = uVar5;
    lVar12 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar5,1,1,lVar12);
    plVar6 = (long *)0x100;
    func_0x000107c615b8();
    plVar18[0x44] = (long)plVar6;
    *plVar6 = (long)plVar18;
    plVar6[1] = (long)FUN_1031955a8;
    puVar14 = (undefined8 *)plVar18[0x26];
    puVar1 = &uStack_100;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
      func_0x000107c60e78();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar13 = *plVar18;
      uVar3 = *(undefined8 *)(lVar13 + 0x218);
      puVar14 = *(undefined8 **)(lVar13 + 0x130);
      lVar15 = *plVar18;
      func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x220));
      func_0x0001000293e4(uVar3);
      func_0x000107c615c0(uVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar9 = FUN_10319563c;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c60e78();
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        *(undefined8 *)(lVar15 + 0xc0) = *(undefined8 *)(lVar15 + 0x180);
        *(undefined8 *)(lVar15 + 0xb8) = *(undefined8 *)(lVar15 + 0x178);
        *(undefined1 *)(lVar15 + 200) = *(undefined1 *)(lVar15 + 0x82);
        uVar3 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar3 != 0) {
          FUN_103187f64();
          func_0x000107c61658((undefined8 *)(lVar15 + 0xb8),&UNK_110618668,uVar3);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar15 + 8))();
          return;
        }
        func_0x000107c60e78(*(undefined8 *)(lVar15 + 0x178),*(undefined8 *)(lVar15 + 0x180),
                            *(undefined1 *)(lVar15 + 0x82));
        pcVar9 = FUN_1031956f8;
        puVar14 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)0x0;
      }
      goto LAB_107c615e0;
    }
  }
  *(ulong *)((long)plVar2 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
  *(code **)((long)plVar2 + -8) = pcStack_118;
  *(long **)((long)plVar2 + -0x18) = plVar6;
  *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar6[0x15] = uVar5;
  plVar6[0x16] = (long)puVar14;
  plVar6[0x14] = 0;
  lVar12 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar5 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x17] = uVar5;
  lVar12 = 0;
  func_0x000107c5ede0();
  plVar6[0x18] = lVar12;
  lVar12 = *(long *)(lVar12 + -8);
  plVar6[0x19] = lVar12;
  uVar5 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1a] = uVar5;
  lVar12 = 0;
  FUN_103197644();
  uVar5 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1b] = uVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x20)) {
    pcVar9 = FUN_103196dcc;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c60e78();
    *(long *)((long)plVar2 + -0x50) = lVar15;
    *(long *)((long)plVar2 + -0x48) = lVar16;
    *(undefined8 *)((long)plVar2 + -0x40) = uVar3;
    *(ulong *)((long)plVar2 + -0x30) = (ulong)((long)plVar2 + -0x10) | 0x1000000000000000;
    *(code **)((long)plVar2 + -0x28) = FUN_103196dcc;
    *(long **)((long)plVar2 + -0x38) = plVar6;
    *(undefined8 *)((long)plVar2 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar15 = plVar6[0x1b];
    lVar13 = plVar6[0x16];
    puVar17 = (undefined *)plVar6[0x14];
    lVar12 = 0;
    FUN_103197894();
    (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar15,1,1,lVar12);
    lVar12 = _DAT_112f47d68;
    func_0x000107c61428(lVar13 + _DAT_112f47d68,plVar6 + 10,0x21,0);
    func_0x000103187ec0(lVar15,lVar13 + lVar12);
    func_0x000107c614a8(plVar6 + 10);
    lVar12 = 8;
    func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
    *(undefined8 *)(lVar12 + 0x10) = 8;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined8 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined8 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x48) = 0;
    *(undefined8 *)(lVar12 + 0x40) = 0;
    *(undefined8 *)(lVar12 + 0x58) = 0;
    *(undefined8 *)(lVar12 + 0x50) = 0;
    puVar10 = (undefined8 *)(lVar13 + _DAT_112f47d70);
    func_0x000107c61428(puVar10,plVar6 + 0xd,1,0);
    uVar3 = puVar10[2];
    *puVar10 = 0;
    puVar10[1] = 0x3fd3333333333333;
    puVar10[2] = lVar12;
    func_0x000107c6142c(uVar3);
    if (puVar17 == (undefined *)0x0) {
      lVar12 = plVar6[0x18];
      puVar17 = (undefined *)plVar6[0x19];
      lVar13 = plVar6[0x17];
      FUN_103198594(plVar6[0x15],lVar13,0x112d36580,&UNK_10d9016d0);
      (**(code **)(puVar17 + 0x30))(lVar13,1,lVar12);
      if ((int)lVar13 == 1) {
        func_0x0001000293e4(plVar6[0x17]);
      }
      else {
        (**(code **)(plVar6[0x19] + 0x20))(plVar6[0x1a],plVar6[0x17],plVar6[0x18]);
        puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar7 = puVar17;
        func_0x000107c5ed90();
        plVar6[0x13] = 0;
        puVar8 = puVar17;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar17);
        puVar17 = (undefined *)plVar6[0x13];
        if ((int)puVar8 == 0) {
          puVar7 = puVar17;
          func_0x000107c61174(puVar17);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar7);
          func_0x000107c61654();
          func_0x000107c614ac(puVar17);
        }
        else {
          func_0x000107c61174(puVar17);
          puVar17 = puVar8;
        }
        (**(code **)(plVar6[0x19] + 8))(plVar6[0x1a],plVar6[0x18]);
      }
      lVar12 = plVar6[0x16] + _DAT_113806f10;
      func_0x000107c61618();
      plVar6[0x1d] = lVar12;
      if (lVar12 == 0) {
        lVar12 = plVar6[0x1a];
        puVar10 = (undefined8 *)plVar6[0x17];
        func_0x000107c615c0(plVar6[0x1b]);
        func_0x000107c615c0(lVar12);
        func_0x000107c615c0(puVar10);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar6[1])();
          return;
        }
      }
      else {
        puVar10 = (undefined8 *)0x0;
        func_0x000107c5fcec();
        puVar11 = puVar10;
        func_0x000107c5fce8();
        plVar6[0x1e] = (long)puVar11;
        func_0x000100eea164();
        puVar14 = puVar10;
        func_0x000107c5fca8(puVar10,puVar11);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
          pcVar9 = FUN_103197450;
          goto LAB_107c615e0;
        }
      }
    }
    else {
      plVar6[0x1c] = *(long *)(plVar6[0x16] + 0x70);
      func_0x000107c61174(plVar6[0x14]);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
        pcVar9 = FUN_1031970e0;
        puVar14 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)0x0;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    *(undefined8 **)((long)plVar2 + -0x80) = puVar10;
    *(ulong *)((long)plVar2 + -0x70) = (ulong)((long)plVar2 + -0x30) | 0x1000000000000000;
    *(code **)((long)plVar2 + -0x68) = FUN_1031970e0;
    *(long **)((long)plVar2 + -0x78) = plVar6;
    *(undefined8 *)((long)plVar2 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar12 = plVar6[0x14];
    plVar6[2] = (long)plVar6;
    plVar6[3] = (long)FUN_103197168;
    func_0x000107c61448(plVar6 + 2,0);
    func_0x0001031982f4();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(plVar6 + 2);
      return;
    }
    func_0x000107c60e78();
    *(ulong *)((long)plVar2 + -0xa0) = (ulong)((long)plVar2 + -0x70) | 0x1000000000000000;
    *(code **)((long)plVar2 + -0x98) = FUN_103197168;
    *(long **)((long)plVar2 + -0xa8) = plVar6;
    *(undefined8 *)((long)plVar2 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(long *)((long)plVar2 + -0xa8) = *plVar6;
    lVar13 = *plVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0xb0)) {
      pcVar9 = (code *)0x1031971d4;
      puVar14 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c60e78();
      *(ulong *)((long)plVar2 + -0xc0) = (ulong)((long)plVar2 + -0xa0) | 0x1000000000000000;
      *(undefined8 *)((long)plVar2 + -0xb8) = 0x1031971d4;
      *(long *)((long)plVar2 + -200) = lVar13;
      *(undefined8 *)((long)plVar2 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar14 = *(undefined8 **)(lVar13 + 0xb0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0xd0)) {
        func_0x000107c60e78();
        *(undefined8 *)((long)plVar2 + -0x100) = 8;
        *(undefined **)((long)plVar2 + -0xf8) = puVar17;
        *(long *)((long)plVar2 + -0xf0) = lVar12;
        *(ulong *)((long)plVar2 + -0xe0) = (ulong)((long)plVar2 + -0xc0) | 0x1000000000000000;
        *(code **)((long)plVar2 + -0xd8) = FUN_103197234;
        *(long *)((long)plVar2 + -0xe8) = lVar13;
        *(undefined8 *)((long)plVar2 + -0x108) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        func_0x000107c61170(*(undefined8 *)(lVar13 + 0xa0));
        uVar3 = *(undefined8 *)(lVar13 + 0xc0);
        lVar12 = *(long *)(lVar13 + 200);
        uVar4 = *(undefined8 *)(lVar13 + 0xb8);
        FUN_103198594(*(undefined8 *)(lVar13 + 0xa8),uVar4,0x112d36580,&UNK_10d9016d0);
        (**(code **)(lVar12 + 0x30))(uVar4,1,uVar3);
        if ((int)uVar4 == 1) {
          func_0x0001000293e4(*(undefined8 *)(lVar13 + 0xb8));
        }
        else {
          (**(code **)(*(long *)(lVar13 + 200) + 0x20))
                    (*(undefined8 *)(lVar13 + 0xd0),*(undefined8 *)(lVar13 + 0xb8),
                     *(undefined8 *)(lVar13 + 0xc0));
          puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar7 = puVar17;
          func_0x000107c5ed90();
          *(undefined8 *)(lVar13 + 0x98) = 0;
          puVar8 = puVar17;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar17);
          uVar3 = *(undefined8 *)(lVar13 + 0x98);
          if ((int)puVar8 == 0) {
            uVar4 = uVar3;
            func_0x000107c61174(uVar3);
            func_0x000107c5ed30(uVar3);
            func_0x000107c61170(uVar4);
            func_0x000107c61654();
            func_0x000107c614ac(uVar3);
          }
          else {
            func_0x000107c61174(uVar3);
          }
          (**(code **)(*(long *)(lVar13 + 200) + 8))
                    (*(undefined8 *)(lVar13 + 0xd0),*(undefined8 *)(lVar13 + 0xc0));
        }
        lVar12 = *(long *)(lVar13 + 0xb0) + _DAT_113806f10;
        func_0x000107c61618();
        *(long *)(lVar13 + 0xe8) = lVar12;
        if (lVar12 == 0) {
          uVar3 = *(undefined8 *)(lVar13 + 0xd0);
          puVar10 = *(undefined8 **)(lVar13 + 0xb8);
          func_0x000107c615c0(*(undefined8 *)(lVar13 + 0xd8));
          func_0x000107c615c0(uVar3);
          func_0x000107c615c0(puVar10);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108)) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar13 + 8))();
            return;
          }
        }
        else {
          puVar10 = (undefined8 *)0x0;
          func_0x000107c5fcec();
          puVar11 = puVar10;
          func_0x000107c5fce8();
          *(undefined8 **)(lVar13 + 0xf0) = puVar11;
          func_0x000100eea164();
          puVar14 = puVar10;
          func_0x000107c5fca8(puVar10,puVar11);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108)) {
            pcVar9 = FUN_103197450;
            goto LAB_107c615e0;
          }
        }
        func_0x000107c60e78();
        *(undefined8 **)((long)plVar2 + -0x130) = puVar10;
        *(ulong *)((long)plVar2 + -0x120) = (ulong)((long)plVar2 + -0xe0) | 0x1000000000000000;
        *(code **)((long)plVar2 + -0x118) = FUN_103197450;
        *(long *)((long)plVar2 + -0x128) = lVar13;
        *(undefined8 *)((long)plVar2 + -0x138) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        lVar12 = *(long *)(lVar13 + 0xe8);
        func_0x000107c61574(*(undefined8 *)(lVar13 + 0xf0));
        lVar15 = _DAT_112f476d0;
        func_0x000107c61428(lVar12 + _DAT_112f476d0,lVar13 + 0x80,0,0);
        lVar12 = lVar12 + lVar15;
        func_0x000107c61618();
        if (lVar12 != 0) {
          func_0x000107c3e3e0();
          func_0x000107c615e8(lVar12);
        }
        func_0x000107c615e8(*(undefined8 *)(lVar13 + 0xe8));
        lVar12 = *(long *)(lVar13 + 0xd0);
        uVar3 = *(undefined8 *)(lVar13 + 0xb8);
        func_0x000107c615c0(*(undefined8 *)(lVar13 + 0xd8));
        func_0x000107c615c0(lVar12);
        func_0x000107c615c0(uVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0x138)) {
          func_0x000107c60e78();
          *(undefined1 **)((long)plVar2 + -0x150) = (undefined1 *)((long)plVar2 + -0x120);
          *(code **)((long)plVar2 + -0x148) = FUN_10319751c;
          func_0x000107c615e8(*(undefined8 *)(lVar12 + 0x70));
          func_0x000107c61170(*(undefined8 *)(lVar12 + 0x78));
          FUN_103198414(lVar12 + _DAT_112f47d68,FUN_103197644);
          func_0x000107c6142c(*(undefined8 *)(lVar12 + _DAT_112f47d70 + 0x10));
          FUN_1031985fc(lVar12 + _DAT_113806f10);
          func_0x000107c61470(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar12);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar13 + 8))();
        return;
      }
      pcVar9 = FUN_103197234;
      puVar11 = (undefined8 *)0x0;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar9,puVar14,puVar11);
  return;
}



/* Entry: 10319518c; end: 10319521b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319518c(void)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 unaff_x21;
  undefined *puVar16;
  long *unaff_x22;
  long *plVar17;
  undefined8 unaff_x23;
  ulong unaff_x29;
  code *pcStack_d8;
  long lStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  code *pcStack_b8;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  ulong *puStack_60;
  code *pcStack_58;
  long lStack_50;
  long *plStack_48;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_28;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *unaff_x22;
  uVar6 = *(undefined8 *)(lVar12 + 0x1f8);
  puVar14 = *(undefined8 **)(lVar12 + 0x130);
  plVar17 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar12 + 0x200));
  func_0x0001000293e4(uVar6);
  func_0x000107c615c0(uVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    pcVar9 = FUN_10319521c;
    puVar11 = (undefined8 *)0x0;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_40 = (ulong)&uStack_10 | 0x1000000000000000;
  plVar2 = &lStack_50;
  pcStack_38 = FUN_10319521c;
  lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar17[0x14] = 0;
  plVar17[0x15] = 0;
  *(undefined1 *)(plVar17 + 0x16) = 4;
  uVar3 = 2;
  plStack_48 = plVar17;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar3 != 0) {
    FUN_103187f64();
    func_0x000107c61658(plVar17 + 0x14,&UNK_110618668,uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar17[1])(0,0,4);
    return;
  }
  func_0x000107c60e78();
  puStack_60 = (ulong *)((ulong)&uStack_40 | 0x1000000000000000);
  pcStack_58 = FUN_1031952c0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = 0x112d36580;
  uStack_70 = uVar6;
  plStack_68 = plVar17;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar4 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar17[0x41] = uVar4;
  lVar12 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar4,1,1,lVar12);
  plVar5 = (long *)0x100;
  func_0x000107c615b8();
  plVar17[0x42] = (long)plVar5;
  *plVar5 = (long)plVar17;
  plVar5[1] = (long)FUN_103195398;
  puVar14 = (undefined8 *)plVar17[0x26];
  uVar6 = uStack_70;
  pcStack_d8 = pcStack_58;
  puVar1 = puStack_60;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    func_0x000107c60e78();
    uStack_90 = (ulong)&puStack_60 | 0x1000000000000000;
    pcStack_88 = FUN_103195398;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_98 = *plVar17;
    uVar6 = *(undefined8 *)(lStack_98 + 0x208);
    puVar14 = *(undefined8 **)(lStack_98 + 0x130);
    plVar17 = (long *)*plVar17;
    uStack_a0 = uVar4;
    func_0x000107c615c0(*(undefined8 *)(lStack_98 + 0x210));
    func_0x0001000293e4(uVar6);
    func_0x000107c615c0(uVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
      pcVar9 = FUN_10319542c;
      puVar11 = (undefined8 *)0x0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    uStack_c0 = (ulong)&uStack_90 | 0x1000000000000000;
    plVar2 = &lStack_d0;
    pcStack_b8 = FUN_10319542c;
    lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar17[0x12] = plVar17[0x2d];
    plVar17[0x11] = plVar17[0x2c];
    *(undefined1 *)(plVar17 + 0x13) = *(undefined1 *)((long)plVar17 + 0x81);
    uVar3 = 2;
    plStack_c8 = plVar17;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar3 != 0) {
      FUN_103187f64();
      func_0x000107c61658(plVar17 + 0x11,&UNK_110618668,uVar3);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar17[1])();
      return;
    }
    func_0x000107c60e78(plVar17[0x2c],plVar17[0x2d],*(undefined1 *)((long)plVar17 + 0x81));
    pcStack_d8 = FUN_1031954d0;
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar12 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar4 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar17[0x43] = uVar4;
    lVar12 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar4,1,1,lVar12);
    plVar5 = (long *)0x100;
    func_0x000107c615b8();
    plVar17[0x44] = (long)plVar5;
    *plVar5 = (long)plVar17;
    plVar5[1] = (long)FUN_1031955a8;
    puVar14 = (undefined8 *)plVar17[0x26];
    puVar1 = &uStack_c0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
      func_0x000107c60e78();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar13 = *plVar17;
      uVar6 = *(undefined8 *)(lVar13 + 0x218);
      puVar14 = *(undefined8 **)(lVar13 + 0x130);
      lVar15 = *plVar17;
      func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x220));
      func_0x0001000293e4(uVar6);
      func_0x000107c615c0(uVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar9 = FUN_10319563c;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c60e78();
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        *(undefined8 *)(lVar15 + 0xc0) = *(undefined8 *)(lVar15 + 0x180);
        *(undefined8 *)(lVar15 + 0xb8) = *(undefined8 *)(lVar15 + 0x178);
        *(undefined1 *)(lVar15 + 200) = *(undefined1 *)(lVar15 + 0x82);
        uVar6 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar6 != 0) {
          FUN_103187f64();
          func_0x000107c61658((undefined8 *)(lVar15 + 0xb8),&UNK_110618668,uVar6);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar15 + 8))();
          return;
        }
        func_0x000107c60e78(*(undefined8 *)(lVar15 + 0x178),*(undefined8 *)(lVar15 + 0x180),
                            *(undefined1 *)(lVar15 + 0x82));
        pcVar9 = FUN_1031956f8;
        puVar14 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)0x0;
      }
      goto LAB_107c615e0;
    }
  }
  *(ulong *)((long)plVar2 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
  *(code **)((long)plVar2 + -8) = pcStack_d8;
  *(long **)((long)plVar2 + -0x18) = plVar5;
  *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar5[0x15] = uVar4;
  plVar5[0x16] = (long)puVar14;
  plVar5[0x14] = 0;
  lVar12 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar4 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x17] = uVar4;
  lVar12 = 0;
  func_0x000107c5ede0();
  plVar5[0x18] = lVar12;
  lVar12 = *(long *)(lVar12 + -8);
  plVar5[0x19] = lVar12;
  uVar4 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x1a] = uVar4;
  lVar12 = 0;
  FUN_103197644();
  uVar4 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x1b] = uVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x20)) {
    pcVar9 = FUN_103196dcc;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c60e78();
    *(undefined8 *)((long)plVar2 + -0x50) = unaff_x23;
    *(undefined8 *)((long)plVar2 + -0x48) = unaff_x21;
    *(undefined8 *)((long)plVar2 + -0x40) = uVar6;
    *(ulong *)((long)plVar2 + -0x30) = (ulong)((long)plVar2 + -0x10) | 0x1000000000000000;
    *(code **)((long)plVar2 + -0x28) = FUN_103196dcc;
    *(long **)((long)plVar2 + -0x38) = plVar5;
    *(undefined8 *)((long)plVar2 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar15 = plVar5[0x1b];
    lVar13 = plVar5[0x16];
    puVar16 = (undefined *)plVar5[0x14];
    lVar12 = 0;
    FUN_103197894();
    (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar15,1,1,lVar12);
    lVar12 = _DAT_112f47d68;
    func_0x000107c61428(lVar13 + _DAT_112f47d68,plVar5 + 10,0x21,0);
    func_0x000103187ec0(lVar15,lVar13 + lVar12);
    func_0x000107c614a8(plVar5 + 10);
    lVar12 = 8;
    func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
    *(undefined8 *)(lVar12 + 0x10) = 8;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined8 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined8 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x48) = 0;
    *(undefined8 *)(lVar12 + 0x40) = 0;
    *(undefined8 *)(lVar12 + 0x58) = 0;
    *(undefined8 *)(lVar12 + 0x50) = 0;
    puVar10 = (undefined8 *)(lVar13 + _DAT_112f47d70);
    func_0x000107c61428(puVar10,plVar5 + 0xd,1,0);
    uVar6 = puVar10[2];
    *puVar10 = 0;
    puVar10[1] = 0x3fd3333333333333;
    puVar10[2] = lVar12;
    func_0x000107c6142c(uVar6);
    if (puVar16 == (undefined *)0x0) {
      lVar12 = plVar5[0x18];
      puVar16 = (undefined *)plVar5[0x19];
      lVar13 = plVar5[0x17];
      FUN_103198594(plVar5[0x15],lVar13,0x112d36580,&UNK_10d9016d0);
      (**(code **)(puVar16 + 0x30))(lVar13,1,lVar12);
      if ((int)lVar13 == 1) {
        func_0x0001000293e4(plVar5[0x17]);
      }
      else {
        (**(code **)(plVar5[0x19] + 0x20))(plVar5[0x1a],plVar5[0x17],plVar5[0x18]);
        puVar16 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar7 = puVar16;
        func_0x000107c5ed90();
        plVar5[0x13] = 0;
        puVar8 = puVar16;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar16);
        puVar16 = (undefined *)plVar5[0x13];
        if ((int)puVar8 == 0) {
          puVar7 = puVar16;
          func_0x000107c61174(puVar16);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar7);
          func_0x000107c61654();
          func_0x000107c614ac(puVar16);
        }
        else {
          func_0x000107c61174(puVar16);
          puVar16 = puVar8;
        }
        (**(code **)(plVar5[0x19] + 8))(plVar5[0x1a],plVar5[0x18]);
      }
      lVar12 = plVar5[0x16] + _DAT_113806f10;
      func_0x000107c61618();
      plVar5[0x1d] = lVar12;
      if (lVar12 == 0) {
        lVar12 = plVar5[0x1a];
        puVar10 = (undefined8 *)plVar5[0x17];
        func_0x000107c615c0(plVar5[0x1b]);
        func_0x000107c615c0(lVar12);
        func_0x000107c615c0(puVar10);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar5[1])();
          return;
        }
      }
      else {
        puVar10 = (undefined8 *)0x0;
        func_0x000107c5fcec();
        puVar11 = puVar10;
        func_0x000107c5fce8();
        plVar5[0x1e] = (long)puVar11;
        func_0x000100eea164();
        puVar14 = puVar10;
        func_0x000107c5fca8(puVar10,puVar11);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
          pcVar9 = FUN_103197450;
          goto LAB_107c615e0;
        }
      }
    }
    else {
      plVar5[0x1c] = *(long *)(plVar5[0x16] + 0x70);
      func_0x000107c61174(plVar5[0x14]);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
        pcVar9 = FUN_1031970e0;
        puVar14 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)0x0;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    *(undefined8 **)((long)plVar2 + -0x80) = puVar10;
    *(ulong *)((long)plVar2 + -0x70) = (ulong)((long)plVar2 + -0x30) | 0x1000000000000000;
    *(code **)((long)plVar2 + -0x68) = FUN_1031970e0;
    *(long **)((long)plVar2 + -0x78) = plVar5;
    *(undefined8 *)((long)plVar2 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar12 = plVar5[0x14];
    plVar5[2] = (long)plVar5;
    plVar5[3] = (long)FUN_103197168;
    func_0x000107c61448(plVar5 + 2,0);
    func_0x0001031982f4();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(plVar5 + 2);
      return;
    }
    func_0x000107c60e78();
    *(ulong *)((long)plVar2 + -0xa0) = (ulong)((long)plVar2 + -0x70) | 0x1000000000000000;
    *(code **)((long)plVar2 + -0x98) = FUN_103197168;
    *(long **)((long)plVar2 + -0xa8) = plVar5;
    *(undefined8 *)((long)plVar2 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(long *)((long)plVar2 + -0xa8) = *plVar5;
    lVar13 = *plVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0xb0)) {
      pcVar9 = (code *)0x1031971d4;
      puVar14 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c60e78();
      *(ulong *)((long)plVar2 + -0xc0) = (ulong)((long)plVar2 + -0xa0) | 0x1000000000000000;
      *(undefined8 *)((long)plVar2 + -0xb8) = 0x1031971d4;
      *(long *)((long)plVar2 + -200) = lVar13;
      *(undefined8 *)((long)plVar2 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar14 = *(undefined8 **)(lVar13 + 0xb0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0xd0)) {
        func_0x000107c60e78();
        *(undefined8 *)((long)plVar2 + -0x100) = 8;
        *(undefined **)((long)plVar2 + -0xf8) = puVar16;
        *(long *)((long)plVar2 + -0xf0) = lVar12;
        *(ulong *)((long)plVar2 + -0xe0) = (ulong)((long)plVar2 + -0xc0) | 0x1000000000000000;
        *(code **)((long)plVar2 + -0xd8) = FUN_103197234;
        *(long *)((long)plVar2 + -0xe8) = lVar13;
        *(undefined8 *)((long)plVar2 + -0x108) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        func_0x000107c61170(*(undefined8 *)(lVar13 + 0xa0));
        uVar6 = *(undefined8 *)(lVar13 + 0xc0);
        lVar12 = *(long *)(lVar13 + 200);
        uVar3 = *(undefined8 *)(lVar13 + 0xb8);
        FUN_103198594(*(undefined8 *)(lVar13 + 0xa8),uVar3,0x112d36580,&UNK_10d9016d0);
        (**(code **)(lVar12 + 0x30))(uVar3,1,uVar6);
        if ((int)uVar3 == 1) {
          func_0x0001000293e4(*(undefined8 *)(lVar13 + 0xb8));
        }
        else {
          (**(code **)(*(long *)(lVar13 + 200) + 0x20))
                    (*(undefined8 *)(lVar13 + 0xd0),*(undefined8 *)(lVar13 + 0xb8),
                     *(undefined8 *)(lVar13 + 0xc0));
          puVar16 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar7 = puVar16;
          func_0x000107c5ed90();
          *(undefined8 *)(lVar13 + 0x98) = 0;
          puVar8 = puVar16;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar16);
          uVar6 = *(undefined8 *)(lVar13 + 0x98);
          if ((int)puVar8 == 0) {
            uVar3 = uVar6;
            func_0x000107c61174(uVar6);
            func_0x000107c5ed30(uVar6);
            func_0x000107c61170(uVar3);
            func_0x000107c61654();
            func_0x000107c614ac(uVar6);
          }
          else {
            func_0x000107c61174(uVar6);
          }
          (**(code **)(*(long *)(lVar13 + 200) + 8))
                    (*(undefined8 *)(lVar13 + 0xd0),*(undefined8 *)(lVar13 + 0xc0));
        }
        lVar12 = *(long *)(lVar13 + 0xb0) + _DAT_113806f10;
        func_0x000107c61618();
        *(long *)(lVar13 + 0xe8) = lVar12;
        if (lVar12 == 0) {
          uVar6 = *(undefined8 *)(lVar13 + 0xd0);
          puVar10 = *(undefined8 **)(lVar13 + 0xb8);
          func_0x000107c615c0(*(undefined8 *)(lVar13 + 0xd8));
          func_0x000107c615c0(uVar6);
          func_0x000107c615c0(puVar10);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108)) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar13 + 8))();
            return;
          }
        }
        else {
          puVar10 = (undefined8 *)0x0;
          func_0x000107c5fcec();
          puVar11 = puVar10;
          func_0x000107c5fce8();
          *(undefined8 **)(lVar13 + 0xf0) = puVar11;
          func_0x000100eea164();
          puVar14 = puVar10;
          func_0x000107c5fca8(puVar10,puVar11);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108)) {
            pcVar9 = FUN_103197450;
            goto LAB_107c615e0;
          }
        }
        func_0x000107c60e78();
        *(undefined8 **)((long)plVar2 + -0x130) = puVar10;
        *(ulong *)((long)plVar2 + -0x120) = (ulong)((long)plVar2 + -0xe0) | 0x1000000000000000;
        *(code **)((long)plVar2 + -0x118) = FUN_103197450;
        *(long *)((long)plVar2 + -0x128) = lVar13;
        *(undefined8 *)((long)plVar2 + -0x138) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        lVar12 = *(long *)(lVar13 + 0xe8);
        func_0x000107c61574(*(undefined8 *)(lVar13 + 0xf0));
        lVar15 = _DAT_112f476d0;
        func_0x000107c61428(lVar12 + _DAT_112f476d0,lVar13 + 0x80,0,0);
        lVar12 = lVar12 + lVar15;
        func_0x000107c61618();
        if (lVar12 != 0) {
          func_0x000107c3e3e0();
          func_0x000107c615e8(lVar12);
        }
        func_0x000107c615e8(*(undefined8 *)(lVar13 + 0xe8));
        lVar12 = *(long *)(lVar13 + 0xd0);
        uVar6 = *(undefined8 *)(lVar13 + 0xb8);
        func_0x000107c615c0(*(undefined8 *)(lVar13 + 0xd8));
        func_0x000107c615c0(lVar12);
        func_0x000107c615c0(uVar6);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0x138)) {
          func_0x000107c60e78();
          *(undefined1 **)((long)plVar2 + -0x150) = (undefined1 *)((long)plVar2 + -0x120);
          *(code **)((long)plVar2 + -0x148) = FUN_10319751c;
          func_0x000107c615e8(*(undefined8 *)(lVar12 + 0x70));
          func_0x000107c61170(*(undefined8 *)(lVar12 + 0x78));
          FUN_103198414(lVar12 + _DAT_112f47d68,FUN_103197644);
          func_0x000107c6142c(*(undefined8 *)(lVar12 + _DAT_112f47d70 + 0x10));
          FUN_1031985fc(lVar12 + _DAT_113806f10);
          func_0x000107c61470(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar12);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar13 + 8))();
        return;
      }
      pcVar9 = FUN_103197234;
      puVar11 = (undefined8 *)0x0;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar9,puVar14,puVar11);
  return;
}



/* Entry: 10319521c; end: 1031952bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10319521c(void)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 unaff_x19;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 unaff_x21;
  undefined *puVar16;
  long *unaff_x22;
  long *plVar17;
  undefined8 unaff_x23;
  ulong unaff_x29;
  code *pcStack_a8;
  long lStack_a0;
  long *plStack_98;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_48;
  ulong *puStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  plVar2 = &lStack_20;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x14] = 0;
  unaff_x22[0x15] = 0;
  *(undefined1 *)(unaff_x22 + 0x16) = 4;
  uVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar3 != 0) {
    FUN_103187f64();
    func_0x000107c61658(unaff_x22 + 0x14,&UNK_110618668,uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
                    /* WARNING: Could not recover jumptable at 0x0001031952b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])(0,0,4);
    return;
  }
  func_0x000107c60e78();
  puStack_30 = (ulong *)((ulong)&uStack_10 | 0x1000000000000000);
  pcStack_28 = FUN_1031952c0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x41] = uVar4;
  lVar5 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(uVar4,1,1,lVar5);
  plVar6 = (long *)0x100;
  func_0x000107c615b8();
  unaff_x22[0x42] = (long)plVar6;
  *plVar6 = (long)unaff_x22;
  plVar6[1] = (long)FUN_103195398;
  puVar14 = (undefined8 *)unaff_x22[0x26];
  pcStack_a8 = pcStack_28;
  puVar1 = puStack_30;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    uStack_60 = (ulong)&puStack_30 | 0x1000000000000000;
    pcStack_58 = FUN_103195398;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar5 = *unaff_x22;
    unaff_x19 = *(undefined8 *)(lVar5 + 0x208);
    puVar14 = *(undefined8 **)(lVar5 + 0x130);
    plVar17 = (long *)*unaff_x22;
    uStack_70 = uVar4;
    func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x210));
    func_0x0001000293e4(unaff_x19);
    func_0x000107c615c0(unaff_x19);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      pcVar9 = FUN_10319542c;
      puVar11 = (undefined8 *)0x0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    uStack_90 = (ulong)&uStack_60 | 0x1000000000000000;
    plVar2 = &lStack_a0;
    pcStack_88 = FUN_10319542c;
    lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar17[0x12] = plVar17[0x2d];
    plVar17[0x11] = plVar17[0x2c];
    *(undefined1 *)(plVar17 + 0x13) = *(undefined1 *)((long)plVar17 + 0x81);
    uVar3 = 2;
    plStack_98 = plVar17;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar3 != 0) {
      FUN_103187f64();
      func_0x000107c61658(plVar17 + 0x11,&UNK_110618668,uVar3);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar17[1])();
      return;
    }
    func_0x000107c60e78(plVar17[0x2c],plVar17[0x2d],*(undefined1 *)((long)plVar17 + 0x81));
    pcStack_a8 = FUN_1031954d0;
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar17[0x43] = uVar4;
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(uVar4,1,1,lVar5);
    plVar6 = (long *)0x100;
    func_0x000107c615b8();
    plVar17[0x44] = (long)plVar6;
    *plVar6 = (long)plVar17;
    plVar6[1] = (long)FUN_1031955a8;
    puVar14 = (undefined8 *)plVar17[0x26];
    puVar1 = &uStack_90;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      func_0x000107c60e78();
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar12 = *plVar17;
      uVar3 = *(undefined8 *)(lVar12 + 0x218);
      puVar14 = *(undefined8 **)(lVar12 + 0x130);
      lVar15 = *plVar17;
      func_0x000107c615c0(*(undefined8 *)(lVar12 + 0x220));
      func_0x0001000293e4(uVar3);
      func_0x000107c615c0(uVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        pcVar9 = FUN_10319563c;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c60e78();
        lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
        *(undefined8 *)(lVar15 + 0xc0) = *(undefined8 *)(lVar15 + 0x180);
        *(undefined8 *)(lVar15 + 0xb8) = *(undefined8 *)(lVar15 + 0x178);
        *(undefined1 *)(lVar15 + 200) = *(undefined1 *)(lVar15 + 0x82);
        uVar3 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar3 != 0) {
          FUN_103187f64();
          func_0x000107c61658((undefined8 *)(lVar15 + 0xb8),&UNK_110618668,uVar3);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar15 + 8))();
          return;
        }
        func_0x000107c60e78(*(undefined8 *)(lVar15 + 0x178),*(undefined8 *)(lVar15 + 0x180),
                            *(undefined1 *)(lVar15 + 0x82));
        pcVar9 = FUN_1031956f8;
        puVar14 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)0x0;
      }
      goto LAB_107c615e0;
    }
  }
  *(ulong *)((long)plVar2 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
  *(code **)((long)plVar2 + -8) = pcStack_a8;
  *(long **)((long)plVar2 + -0x18) = plVar6;
  *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar6[0x15] = uVar4;
  plVar6[0x16] = (long)puVar14;
  plVar6[0x14] = 0;
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x17] = uVar4;
  lVar5 = 0;
  func_0x000107c5ede0();
  plVar6[0x18] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar6[0x19] = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1a] = uVar4;
  lVar5 = 0;
  FUN_103197644();
  uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1b] = uVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x20)) {
    pcVar9 = FUN_103196dcc;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c60e78();
    *(undefined8 *)((long)plVar2 + -0x50) = unaff_x23;
    *(undefined8 *)((long)plVar2 + -0x48) = unaff_x21;
    *(undefined8 *)((long)plVar2 + -0x40) = unaff_x19;
    *(ulong *)((long)plVar2 + -0x30) = (ulong)((long)plVar2 + -0x10) | 0x1000000000000000;
    *(code **)((long)plVar2 + -0x28) = FUN_103196dcc;
    *(long **)((long)plVar2 + -0x38) = plVar6;
    *(undefined8 *)((long)plVar2 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar15 = plVar6[0x1b];
    lVar12 = plVar6[0x16];
    puVar16 = (undefined *)plVar6[0x14];
    lVar5 = 0;
    FUN_103197894();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar15,1,1,lVar5);
    lVar5 = _DAT_112f47d68;
    func_0x000107c61428(lVar12 + _DAT_112f47d68,plVar6 + 10,0x21,0);
    func_0x000103187ec0(lVar15,lVar12 + lVar5);
    func_0x000107c614a8(plVar6 + 10);
    lVar5 = 8;
    func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
    *(undefined8 *)(lVar5 + 0x10) = 8;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x30) = 0;
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x58) = 0;
    *(undefined8 *)(lVar5 + 0x50) = 0;
    puVar10 = (undefined8 *)(lVar12 + _DAT_112f47d70);
    func_0x000107c61428(puVar10,plVar6 + 0xd,1,0);
    uVar3 = puVar10[2];
    *puVar10 = 0;
    puVar10[1] = 0x3fd3333333333333;
    puVar10[2] = lVar5;
    func_0x000107c6142c(uVar3);
    if (puVar16 == (undefined *)0x0) {
      lVar5 = plVar6[0x18];
      puVar16 = (undefined *)plVar6[0x19];
      lVar12 = plVar6[0x17];
      FUN_103198594(plVar6[0x15],lVar12,0x112d36580,&UNK_10d9016d0);
      (**(code **)(puVar16 + 0x30))(lVar12,1,lVar5);
      if ((int)lVar12 == 1) {
        func_0x0001000293e4(plVar6[0x17]);
      }
      else {
        (**(code **)(plVar6[0x19] + 0x20))(plVar6[0x1a],plVar6[0x17],plVar6[0x18]);
        puVar16 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar7 = puVar16;
        func_0x000107c5ed90();
        plVar6[0x13] = 0;
        puVar8 = puVar16;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar16);
        puVar16 = (undefined *)plVar6[0x13];
        if ((int)puVar8 == 0) {
          puVar7 = puVar16;
          func_0x000107c61174(puVar16);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar7);
          func_0x000107c61654();
          func_0x000107c614ac(puVar16);
        }
        else {
          func_0x000107c61174(puVar16);
          puVar16 = puVar8;
        }
        (**(code **)(plVar6[0x19] + 8))(plVar6[0x1a],plVar6[0x18]);
      }
      lVar5 = plVar6[0x16] + _DAT_113806f10;
      func_0x000107c61618();
      plVar6[0x1d] = lVar5;
      if (lVar5 == 0) {
        lVar5 = plVar6[0x1a];
        puVar10 = (undefined8 *)plVar6[0x17];
        func_0x000107c615c0(plVar6[0x1b]);
        func_0x000107c615c0(lVar5);
        func_0x000107c615c0(puVar10);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar6[1])();
          return;
        }
      }
      else {
        puVar10 = (undefined8 *)0x0;
        func_0x000107c5fcec();
        puVar11 = puVar10;
        func_0x000107c5fce8();
        plVar6[0x1e] = (long)puVar11;
        func_0x000100eea164();
        puVar14 = puVar10;
        func_0x000107c5fca8(puVar10,puVar11);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
          pcVar9 = FUN_103197450;
          goto LAB_107c615e0;
        }
      }
    }
    else {
      plVar6[0x1c] = *(long *)(plVar6[0x16] + 0x70);
      func_0x000107c61174(plVar6[0x14]);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x58)) {
        pcVar9 = FUN_1031970e0;
        puVar14 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)0x0;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    *(undefined8 **)((long)plVar2 + -0x80) = puVar10;
    *(ulong *)((long)plVar2 + -0x70) = (ulong)((long)plVar2 + -0x30) | 0x1000000000000000;
    *(code **)((long)plVar2 + -0x68) = FUN_1031970e0;
    *(long **)((long)plVar2 + -0x78) = plVar6;
    *(undefined8 *)((long)plVar2 + -0x88) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar5 = plVar6[0x14];
    plVar6[2] = (long)plVar6;
    plVar6[3] = (long)FUN_103197168;
    func_0x000107c61448(plVar6 + 2,0);
    func_0x0001031982f4();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(plVar6 + 2);
      return;
    }
    func_0x000107c60e78();
    *(ulong *)((long)plVar2 + -0xa0) = (ulong)((long)plVar2 + -0x70) | 0x1000000000000000;
    *(code **)((long)plVar2 + -0x98) = FUN_103197168;
    *(long **)((long)plVar2 + -0xa8) = plVar6;
    *(undefined8 *)((long)plVar2 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(long *)((long)plVar2 + -0xa8) = *plVar6;
    lVar12 = *plVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0xb0)) {
      pcVar9 = (code *)0x1031971d4;
      puVar14 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c60e78();
      *(ulong *)((long)plVar2 + -0xc0) = (ulong)((long)plVar2 + -0xa0) | 0x1000000000000000;
      *(undefined8 *)((long)plVar2 + -0xb8) = 0x1031971d4;
      *(long *)((long)plVar2 + -200) = lVar12;
      *(undefined8 *)((long)plVar2 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar14 = *(undefined8 **)(lVar12 + 0xb0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0xd0)) {
        func_0x000107c60e78();
        *(undefined8 *)((long)plVar2 + -0x100) = 8;
        *(undefined **)((long)plVar2 + -0xf8) = puVar16;
        *(long *)((long)plVar2 + -0xf0) = lVar5;
        *(ulong *)((long)plVar2 + -0xe0) = (ulong)((long)plVar2 + -0xc0) | 0x1000000000000000;
        *(code **)((long)plVar2 + -0xd8) = FUN_103197234;
        *(long *)((long)plVar2 + -0xe8) = lVar12;
        *(undefined8 *)((long)plVar2 + -0x108) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        func_0x000107c61170(*(undefined8 *)(lVar12 + 0xa0));
        uVar3 = *(undefined8 *)(lVar12 + 0xc0);
        lVar5 = *(long *)(lVar12 + 200);
        uVar13 = *(undefined8 *)(lVar12 + 0xb8);
        FUN_103198594(*(undefined8 *)(lVar12 + 0xa8),uVar13,0x112d36580,&UNK_10d9016d0);
        (**(code **)(lVar5 + 0x30))(uVar13,1,uVar3);
        if ((int)uVar13 == 1) {
          func_0x0001000293e4(*(undefined8 *)(lVar12 + 0xb8));
        }
        else {
          (**(code **)(*(long *)(lVar12 + 200) + 0x20))
                    (*(undefined8 *)(lVar12 + 0xd0),*(undefined8 *)(lVar12 + 0xb8),
                     *(undefined8 *)(lVar12 + 0xc0));
          puVar16 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar7 = puVar16;
          func_0x000107c5ed90();
          *(undefined8 *)(lVar12 + 0x98) = 0;
          puVar8 = puVar16;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar16);
          uVar3 = *(undefined8 *)(lVar12 + 0x98);
          if ((int)puVar8 == 0) {
            uVar13 = uVar3;
            func_0x000107c61174(uVar3);
            func_0x000107c5ed30(uVar3);
            func_0x000107c61170(uVar13);
            func_0x000107c61654();
            func_0x000107c614ac(uVar3);
          }
          else {
            func_0x000107c61174(uVar3);
          }
          (**(code **)(*(long *)(lVar12 + 200) + 8))
                    (*(undefined8 *)(lVar12 + 0xd0),*(undefined8 *)(lVar12 + 0xc0));
        }
        lVar5 = *(long *)(lVar12 + 0xb0) + _DAT_113806f10;
        func_0x000107c61618();
        *(long *)(lVar12 + 0xe8) = lVar5;
        if (lVar5 == 0) {
          uVar3 = *(undefined8 *)(lVar12 + 0xd0);
          puVar10 = *(undefined8 **)(lVar12 + 0xb8);
          func_0x000107c615c0(*(undefined8 *)(lVar12 + 0xd8));
          func_0x000107c615c0(uVar3);
          func_0x000107c615c0(puVar10);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108)) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar12 + 8))();
            return;
          }
        }
        else {
          puVar10 = (undefined8 *)0x0;
          func_0x000107c5fcec();
          puVar11 = puVar10;
          func_0x000107c5fce8();
          *(undefined8 **)(lVar12 + 0xf0) = puVar11;
          func_0x000100eea164();
          puVar14 = puVar10;
          func_0x000107c5fca8(puVar10,puVar11);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar2 + -0x108)) {
            pcVar9 = FUN_103197450;
            goto LAB_107c615e0;
          }
        }
        func_0x000107c60e78();
        *(undefined8 **)((long)plVar2 + -0x130) = puVar10;
        *(ulong *)((long)plVar2 + -0x120) = (ulong)((long)plVar2 + -0xe0) | 0x1000000000000000;
        *(code **)((long)plVar2 + -0x118) = FUN_103197450;
        *(long *)((long)plVar2 + -0x128) = lVar12;
        *(undefined8 *)((long)plVar2 + -0x138) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        lVar5 = *(long *)(lVar12 + 0xe8);
        func_0x000107c61574(*(undefined8 *)(lVar12 + 0xf0));
        lVar15 = _DAT_112f476d0;
        func_0x000107c61428(lVar5 + _DAT_112f476d0,lVar12 + 0x80,0,0);
        lVar5 = lVar5 + lVar15;
        func_0x000107c61618();
        if (lVar5 != 0) {
          func_0x000107c3e3e0();
          func_0x000107c615e8(lVar5);
        }
        func_0x000107c615e8(*(undefined8 *)(lVar12 + 0xe8));
        lVar5 = *(long *)(lVar12 + 0xd0);
        uVar3 = *(undefined8 *)(lVar12 + 0xb8);
        func_0x000107c615c0(*(undefined8 *)(lVar12 + 0xd8));
        func_0x000107c615c0(lVar5);
        func_0x000107c615c0(uVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)plVar2 + -0x138)) {
          func_0x000107c60e78();
          *(undefined1 **)((long)plVar2 + -0x150) = (undefined1 *)((long)plVar2 + -0x120);
          *(code **)((long)plVar2 + -0x148) = FUN_10319751c;
          func_0x000107c615e8(*(undefined8 *)(lVar5 + 0x70));
          func_0x000107c61170(*(undefined8 *)(lVar5 + 0x78));
          FUN_103198414(lVar5 + _DAT_112f47d68,FUN_103197644);
          func_0x000107c6142c(*(undefined8 *)(lVar5 + _DAT_112f47d70 + 0x10));
          FUN_1031985fc(lVar5 + _DAT_113806f10);
          func_0x000107c61470(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar5);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar12 + 8))();
        return;
      }
      pcVar9 = FUN_103197234;
      puVar11 = (undefined8 *)0x0;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar9,puVar14,puVar11);
  return;
}



/* Entry: 1031952c0; end: 103195397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031952c0(void)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 unaff_x19;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 unaff_x21;
  undefined *puVar15;
  long *unaff_x22;
  long *plVar16;
  undefined8 unaff_x23;
  ulong unaff_x29;
  code *unaff_x30;
  code *pcStack_88;
  long lStack_80;
  long *plStack_78;
  ulong uStack_70;
  code *pcStack_68;
  long lStack_58;
  ulong uStack_50;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_28;
  ulong *puStack_10;
  
  puStack_10 = (ulong *)(unaff_x29 | 0x1000000000000000);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  unaff_x22[0x41] = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar2,1,1,lVar3);
  plVar4 = (long *)0x100;
  func_0x000107c615b8();
  unaff_x22[0x42] = (long)plVar4;
  *plVar4 = (long)unaff_x22;
  plVar4[1] = (long)FUN_103195398;
  puVar13 = (undefined8 *)unaff_x22[0x26];
  pcStack_88 = unaff_x30;
  puVar1 = puStack_10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    func_0x000107c60e78();
    uStack_40 = (ulong)&puStack_10 | 0x1000000000000000;
    pcStack_38 = FUN_103195398;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar3 = *unaff_x22;
    unaff_x19 = *(undefined8 *)(lVar3 + 0x208);
    puVar13 = *(undefined8 **)(lVar3 + 0x130);
    plVar16 = (long *)*unaff_x22;
    uStack_50 = uVar2;
    func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x210));
    func_0x0001000293e4(unaff_x19);
    func_0x000107c615c0(unaff_x19);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      pcVar8 = FUN_10319542c;
      puVar10 = (undefined8 *)0x0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    uStack_70 = (ulong)&uStack_40 | 0x1000000000000000;
    pcStack_68 = FUN_10319542c;
    puVar1 = &uStack_70;
    lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar16[0x12] = plVar16[0x2d];
    plVar16[0x11] = plVar16[0x2c];
    *(undefined1 *)(plVar16 + 0x13) = *(undefined1 *)((long)plVar16 + 0x81);
    uVar5 = 2;
    plStack_78 = plVar16;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar5 != 0) {
      FUN_103187f64();
      func_0x000107c61658(plVar16 + 0x11,&UNK_110618668,uVar5);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar16[1])();
      return;
    }
    func_0x000107c60e78(plVar16[0x2c],plVar16[0x2d],*(undefined1 *)((long)plVar16 + 0x81));
    pcStack_88 = FUN_1031954d0;
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar3 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar16[0x43] = uVar2;
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar2,1,1,lVar3);
    plVar4 = (long *)0x100;
    func_0x000107c615b8();
    plVar16[0x44] = (long)plVar4;
    *plVar4 = (long)plVar16;
    plVar4[1] = (long)FUN_1031955a8;
    puVar13 = (undefined8 *)plVar16[0x26];
    register0x00000008 = (BADSPACEBASE *)&lStack_80;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      func_0x000107c60e78();
      lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar11 = *plVar16;
      uVar5 = *(undefined8 *)(lVar11 + 0x218);
      puVar13 = *(undefined8 **)(lVar11 + 0x130);
      lVar14 = *plVar16;
      func_0x000107c615c0(*(undefined8 *)(lVar11 + 0x220));
      func_0x0001000293e4(uVar5);
      func_0x000107c615c0(uVar5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
        pcVar8 = FUN_10319563c;
        puVar10 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c60e78();
        lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
        *(undefined8 *)(lVar14 + 0xc0) = *(undefined8 *)(lVar14 + 0x180);
        *(undefined8 *)(lVar14 + 0xb8) = *(undefined8 *)(lVar14 + 0x178);
        *(undefined1 *)(lVar14 + 200) = *(undefined1 *)(lVar14 + 0x82);
        uVar5 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar5 != 0) {
          FUN_103187f64();
          func_0x000107c61658((undefined8 *)(lVar14 + 0xb8),&UNK_110618668,uVar5);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar14 + 8))();
          return;
        }
        func_0x000107c60e78(*(undefined8 *)(lVar14 + 0x178),*(undefined8 *)(lVar14 + 0x180),
                            *(undefined1 *)(lVar14 + 0x82));
        pcVar8 = FUN_1031956f8;
        puVar13 = (undefined8 *)0x0;
        puVar10 = (undefined8 *)0x0;
      }
      goto LAB_107c615e0;
    }
  }
  *(ulong *)((long)register0x00000008 + -0x10) =
       (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
  *(code **)((long)register0x00000008 + -8) = pcStack_88;
  *(long **)((long)register0x00000008 + -0x18) = plVar4;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar4[0x15] = uVar2;
  plVar4[0x16] = (long)puVar13;
  plVar4[0x14] = 0;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x17] = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar4[0x18] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0x19] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1a] = uVar2;
  lVar3 = 0;
  FUN_103197644();
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1b] = uVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x20)) {
    pcVar8 = FUN_103196dcc;
    puVar10 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c60e78();
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x19;
    *(ulong *)((long)register0x00000008 + -0x30) =
         (ulong)((long)register0x00000008 + -0x10) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x28) = FUN_103196dcc;
    *(long **)((long)register0x00000008 + -0x38) = plVar4;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = plVar4[0x1b];
    lVar11 = plVar4[0x16];
    puVar15 = (undefined *)plVar4[0x14];
    lVar3 = 0;
    FUN_103197894();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar14,1,1,lVar3);
    lVar3 = _DAT_112f47d68;
    func_0x000107c61428(lVar11 + _DAT_112f47d68,plVar4 + 10,0x21,0);
    func_0x000103187ec0(lVar14,lVar11 + lVar3);
    func_0x000107c614a8(plVar4 + 10);
    lVar3 = 8;
    func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
    *(undefined8 *)(lVar3 + 0x10) = 8;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    puVar9 = (undefined8 *)(lVar11 + _DAT_112f47d70);
    func_0x000107c61428(puVar9,plVar4 + 0xd,1,0);
    uVar5 = puVar9[2];
    *puVar9 = 0;
    puVar9[1] = 0x3fd3333333333333;
    puVar9[2] = lVar3;
    func_0x000107c6142c(uVar5);
    if (puVar15 == (undefined *)0x0) {
      lVar3 = plVar4[0x18];
      puVar15 = (undefined *)plVar4[0x19];
      lVar11 = plVar4[0x17];
      FUN_103198594(plVar4[0x15],lVar11,0x112d36580,&UNK_10d9016d0);
      (**(code **)(puVar15 + 0x30))(lVar11,1,lVar3);
      if ((int)lVar11 == 1) {
        func_0x0001000293e4(plVar4[0x17]);
      }
      else {
        (**(code **)(plVar4[0x19] + 0x20))(plVar4[0x1a],plVar4[0x17],plVar4[0x18]);
        puVar15 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar6 = puVar15;
        func_0x000107c5ed90();
        plVar4[0x13] = 0;
        puVar7 = puVar15;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar15);
        puVar15 = (undefined *)plVar4[0x13];
        if ((int)puVar7 == 0) {
          puVar6 = puVar15;
          func_0x000107c61174(puVar15);
          func_0x000107c5ed30();
          func_0x000107c61170(puVar6);
          func_0x000107c61654();
          func_0x000107c614ac(puVar15);
        }
        else {
          func_0x000107c61174(puVar15);
          puVar15 = puVar7;
        }
        (**(code **)(plVar4[0x19] + 8))(plVar4[0x1a],plVar4[0x18]);
      }
      lVar3 = plVar4[0x16] + _DAT_113806f10;
      func_0x000107c61618();
      plVar4[0x1d] = lVar3;
      if (lVar3 == 0) {
        lVar3 = plVar4[0x1a];
        puVar9 = (undefined8 *)plVar4[0x17];
        func_0x000107c615c0(plVar4[0x1b]);
        func_0x000107c615c0(lVar3);
        func_0x000107c615c0(puVar9);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)plVar4[1])();
          return;
        }
      }
      else {
        puVar9 = (undefined8 *)0x0;
        func_0x000107c5fcec();
        puVar10 = puVar9;
        func_0x000107c5fce8();
        plVar4[0x1e] = (long)puVar10;
        func_0x000100eea164();
        puVar13 = puVar9;
        func_0x000107c5fca8(puVar9,puVar10);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
          pcVar8 = FUN_103197450;
          goto LAB_107c615e0;
        }
      }
    }
    else {
      plVar4[0x1c] = *(long *)(plVar4[0x16] + 0x70);
      func_0x000107c61174(plVar4[0x14]);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
      {
        pcVar8 = FUN_1031970e0;
        puVar13 = (undefined8 *)0x0;
        puVar10 = (undefined8 *)0x0;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    *(undefined8 **)((long)register0x00000008 + -0x80) = puVar9;
    *(ulong *)((long)register0x00000008 + -0x70) =
         (ulong)((long)register0x00000008 + -0x30) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x68) = FUN_1031970e0;
    *(long **)((long)register0x00000008 + -0x78) = plVar4;
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar3 = plVar4[0x14];
    plVar4[2] = (long)plVar4;
    plVar4[3] = (long)FUN_103197168;
    func_0x000107c61448(plVar4 + 2,0);
    func_0x0001031982f4();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x88)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(plVar4 + 2);
      return;
    }
    func_0x000107c60e78();
    *(ulong *)((long)register0x00000008 + -0xa0) =
         (ulong)((long)register0x00000008 + -0x70) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x98) = FUN_103197168;
    *(long **)((long)register0x00000008 + -0xa8) = plVar4;
    *(undefined8 *)((long)register0x00000008 + -0xb0) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(long *)((long)register0x00000008 + -0xa8) = *plVar4;
    lVar11 = *plVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xb0)) {
      pcVar8 = (code *)0x1031971d4;
      puVar13 = (undefined8 *)0x0;
      puVar10 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c60e78();
      *(ulong *)((long)register0x00000008 + -0xc0) =
           (ulong)((long)register0x00000008 + -0xa0) | 0x1000000000000000;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x1031971d4;
      *(long *)((long)register0x00000008 + -200) = lVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar13 = *(undefined8 **)(lVar11 + 0xb0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0xd0))
      {
        func_0x000107c60e78();
        *(undefined8 *)((long)register0x00000008 + -0x100) = 8;
        *(undefined **)((long)register0x00000008 + -0xf8) = puVar15;
        *(long *)((long)register0x00000008 + -0xf0) = lVar3;
        *(ulong *)((long)register0x00000008 + -0xe0) =
             (ulong)((long)register0x00000008 + -0xc0) | 0x1000000000000000;
        *(code **)((long)register0x00000008 + -0xd8) = FUN_103197234;
        *(long *)((long)register0x00000008 + -0xe8) = lVar11;
        *(undefined8 *)((long)register0x00000008 + -0x108) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        func_0x000107c61170(*(undefined8 *)(lVar11 + 0xa0));
        uVar5 = *(undefined8 *)(lVar11 + 0xc0);
        lVar3 = *(long *)(lVar11 + 200);
        uVar12 = *(undefined8 *)(lVar11 + 0xb8);
        FUN_103198594(*(undefined8 *)(lVar11 + 0xa8),uVar12,0x112d36580,&UNK_10d9016d0);
        (**(code **)(lVar3 + 0x30))(uVar12,1,uVar5);
        if ((int)uVar12 == 1) {
          func_0x0001000293e4(*(undefined8 *)(lVar11 + 0xb8));
        }
        else {
          (**(code **)(*(long *)(lVar11 + 200) + 0x20))
                    (*(undefined8 *)(lVar11 + 0xd0),*(undefined8 *)(lVar11 + 0xb8),
                     *(undefined8 *)(lVar11 + 0xc0));
          puVar15 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar6 = puVar15;
          func_0x000107c5ed90();
          *(undefined8 *)(lVar11 + 0x98) = 0;
          puVar7 = puVar15;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar15);
          uVar5 = *(undefined8 *)(lVar11 + 0x98);
          if ((int)puVar7 == 0) {
            uVar12 = uVar5;
            func_0x000107c61174(uVar5);
            func_0x000107c5ed30(uVar5);
            func_0x000107c61170(uVar12);
            func_0x000107c61654();
            func_0x000107c614ac(uVar5);
          }
          else {
            func_0x000107c61174(uVar5);
          }
          (**(code **)(*(long *)(lVar11 + 200) + 8))
                    (*(undefined8 *)(lVar11 + 0xd0),*(undefined8 *)(lVar11 + 0xc0));
        }
        lVar3 = *(long *)(lVar11 + 0xb0) + _DAT_113806f10;
        func_0x000107c61618();
        *(long *)(lVar11 + 0xe8) = lVar3;
        if (lVar3 == 0) {
          uVar5 = *(undefined8 *)(lVar11 + 0xd0);
          puVar9 = *(undefined8 **)(lVar11 + 0xb8);
          func_0x000107c615c0(*(undefined8 *)(lVar11 + 0xd8));
          func_0x000107c615c0(uVar5);
          func_0x000107c615c0(puVar9);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x108)) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar11 + 8))();
            return;
          }
        }
        else {
          puVar9 = (undefined8 *)0x0;
          func_0x000107c5fcec();
          puVar10 = puVar9;
          func_0x000107c5fce8();
          *(undefined8 **)(lVar11 + 0xf0) = puVar10;
          func_0x000100eea164();
          puVar13 = puVar9;
          func_0x000107c5fca8(puVar9,puVar10);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x108)) {
            pcVar8 = FUN_103197450;
            goto LAB_107c615e0;
          }
        }
        func_0x000107c60e78();
        *(undefined8 **)((long)register0x00000008 + -0x130) = puVar9;
        *(ulong *)((long)register0x00000008 + -0x120) =
             (ulong)((long)register0x00000008 + -0xe0) | 0x1000000000000000;
        *(code **)((long)register0x00000008 + -0x118) = FUN_103197450;
        *(long *)((long)register0x00000008 + -0x128) = lVar11;
        *(undefined8 *)((long)register0x00000008 + -0x138) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        lVar3 = *(long *)(lVar11 + 0xe8);
        func_0x000107c61574(*(undefined8 *)(lVar11 + 0xf0));
        lVar14 = _DAT_112f476d0;
        func_0x000107c61428(lVar3 + _DAT_112f476d0,lVar11 + 0x80,0,0);
        lVar3 = lVar3 + lVar14;
        func_0x000107c61618();
        if (lVar3 != 0) {
          func_0x000107c3e3e0();
          func_0x000107c615e8(lVar3);
        }
        func_0x000107c615e8(*(undefined8 *)(lVar11 + 0xe8));
        lVar3 = *(long *)(lVar11 + 0xd0);
        uVar5 = *(undefined8 *)(lVar11 + 0xb8);
        func_0x000107c615c0(*(undefined8 *)(lVar11 + 0xd8));
        func_0x000107c615c0(lVar3);
        func_0x000107c615c0(uVar5);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
            *(long *)((long)register0x00000008 + -0x138)) {
          func_0x000107c60e78();
          *(undefined1 **)((long)register0x00000008 + -0x150) =
               (undefined1 *)((long)register0x00000008 + -0x120);
          *(code **)((long)register0x00000008 + -0x148) = FUN_10319751c;
          func_0x000107c615e8(*(undefined8 *)(lVar3 + 0x70));
          func_0x000107c61170(*(undefined8 *)(lVar3 + 0x78));
          FUN_103198414(lVar3 + _DAT_112f47d68,FUN_103197644);
          func_0x000107c6142c(*(undefined8 *)(lVar3 + _DAT_112f47d70 + 0x10));
          FUN_1031985fc(lVar3 + _DAT_113806f10);
          func_0x000107c61470(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar3);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar11 + 8))();
        return;
      }
      pcVar8 = FUN_103197234;
      puVar10 = (undefined8 *)0x0;
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar8,puVar13,puVar10);
  return;
}



/* Entry: 103195398; end: 10319542b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103195398(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *unaff_x22;
  long *plVar15;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *unaff_x22;
  uVar10 = *(undefined8 *)(lVar9 + 0x208);
  lVar12 = *(long *)(lVar9 + 0x130);
  plVar15 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar9 + 0x210));
  func_0x0001000293e4(uVar10);
  func_0x000107c615c0(uVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    pcVar7 = FUN_10319542c;
    lVar8 = 0;
  }
  else {
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar15[0x12] = plVar15[0x2d];
    plVar15[0x11] = plVar15[0x2c];
    *(undefined1 *)(plVar15 + 0x13) = *(undefined1 *)((long)plVar15 + 0x81);
    uVar10 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar10 != 0) {
      FUN_103187f64();
      func_0x000107c61658(plVar15 + 0x11,&UNK_110618668,uVar10);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x0001031954c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar15[1])();
      return;
    }
    func_0x000107c60e78(plVar15[0x2c],plVar15[0x2d],*(undefined1 *)((long)plVar15 + 0x81));
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar12 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar2 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar15[0x43] = uVar2;
    lVar12 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar2,1,1,lVar12);
    plVar3 = (long *)0x100;
    func_0x000107c615b8();
    plVar15[0x44] = (long)plVar3;
    *plVar3 = (long)plVar15;
    plVar3[1] = (long)FUN_1031955a8;
    lVar12 = plVar15[0x26];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar3[0x15] = uVar2;
      plVar3[0x16] = lVar12;
      plVar3[0x14] = 0;
      lVar8 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar2 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar3[0x17] = uVar2;
      lVar8 = 0;
      func_0x000107c5ede0();
      plVar3[0x18] = lVar8;
      lVar8 = *(long *)(lVar8 + -8);
      plVar3[0x19] = lVar8;
      uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar3[0x1a] = uVar2;
      lVar8 = 0;
      FUN_103197644();
      uVar2 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar3[0x1b] = uVar2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        pcVar7 = FUN_103196dcc;
        lVar8 = 0;
      }
      else {
        func_0x000107c60e78();
        lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar13 = plVar3[0x1b];
        lVar8 = plVar3[0x16];
        lVar14 = plVar3[0x14];
        lVar12 = 0;
        FUN_103197894();
        (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar13,1,1,lVar12);
        lVar12 = _DAT_112f47d68;
        func_0x000107c61428(lVar8 + _DAT_112f47d68,plVar3 + 10,0x21,0);
        func_0x000103187ec0(lVar13,lVar8 + lVar12);
        func_0x000107c614a8(plVar3 + 10);
        lVar12 = 8;
        func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
        *(undefined8 *)(lVar12 + 0x10) = 8;
        *(undefined8 *)(lVar12 + 0x28) = 0;
        *(undefined8 *)(lVar12 + 0x20) = 0;
        *(undefined8 *)(lVar12 + 0x38) = 0;
        *(undefined8 *)(lVar12 + 0x30) = 0;
        *(undefined8 *)(lVar12 + 0x48) = 0;
        *(undefined8 *)(lVar12 + 0x40) = 0;
        *(undefined8 *)(lVar12 + 0x58) = 0;
        *(undefined8 *)(lVar12 + 0x50) = 0;
        puVar1 = (undefined8 *)(lVar8 + _DAT_112f47d70);
        func_0x000107c61428(puVar1,plVar3 + 0xd,1,0);
        uVar10 = puVar1[2];
        *puVar1 = 0;
        puVar1[1] = 0x3fd3333333333333;
        puVar1[2] = lVar12;
        func_0x000107c6142c(uVar10);
        if (lVar14 == 0) {
          lVar12 = plVar3[0x18];
          lVar8 = plVar3[0x19];
          lVar13 = plVar3[0x17];
          FUN_103198594(plVar3[0x15],lVar13,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lVar8 + 0x30))(lVar13,1,lVar12);
          if ((int)lVar13 == 1) {
            func_0x0001000293e4(plVar3[0x17]);
          }
          else {
            (**(code **)(plVar3[0x19] + 0x20))(plVar3[0x1a],plVar3[0x17],plVar3[0x18]);
            puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x000107c61168();
            func_0x000107c415e0();
            func_0x000107c61180();
            puVar5 = puVar4;
            func_0x000107c5ed90();
            plVar3[0x13] = 0;
            puVar6 = puVar4;
            func_0x000107c4ff50();
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar4);
            lVar12 = plVar3[0x13];
            if ((int)puVar6 == 0) {
              lVar8 = lVar12;
              func_0x000107c61174(lVar12);
              func_0x000107c5ed30();
              func_0x000107c61170(lVar8);
              func_0x000107c61654();
              func_0x000107c614ac(lVar12);
            }
            else {
              func_0x000107c61174(lVar12);
            }
            (**(code **)(plVar3[0x19] + 8))(plVar3[0x1a],plVar3[0x18]);
          }
          lVar12 = plVar3[0x16] + _DAT_113806f10;
          func_0x000107c61618();
          plVar3[0x1d] = lVar12;
          if (lVar12 == 0) {
            lVar12 = plVar3[0x1a];
            lVar8 = plVar3[0x17];
            func_0x000107c615c0(plVar3[0x1b]);
            func_0x000107c615c0(lVar12);
            func_0x000107c615c0(lVar8);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x0001031970d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)plVar3[1])();
              return;
            }
          }
          else {
            lVar12 = 0;
            func_0x000107c5fcec();
            lVar8 = lVar12;
            func_0x000107c5fce8();
            plVar3[0x1e] = lVar8;
            func_0x000100eea164();
            func_0x000107c5fca8(lVar12,lVar8);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
              pcVar7 = FUN_103197450;
              goto LAB_107c615e0;
            }
          }
        }
        else {
          plVar3[0x1c] = *(long *)(plVar3[0x16] + 0x70);
          func_0x000107c61174(plVar3[0x14]);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
            pcVar7 = FUN_1031970e0;
            lVar12 = 0;
            lVar8 = 0;
            goto LAB_107c615e0;
          }
        }
        func_0x000107c60e78();
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar3[2] = (long)plVar3;
        plVar3[3] = (long)FUN_103197168;
        func_0x000107c61448(plVar3 + 2,0);
        func_0x0001031982f4();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(plVar3 + 2);
          return;
        }
        func_0x000107c60e78();
        lVar9 = *plVar3;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0)
        {
          pcVar7 = (code *)0x1031971d4;
          lVar12 = 0;
          lVar8 = 0;
        }
        else {
          func_0x000107c60e78();
          lVar12 = *(long *)(lVar9 + 0xb0);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0
             ) {
            func_0x000107c60e78();
            lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
            func_0x000107c61170(*(undefined8 *)(lVar9 + 0xa0));
            uVar10 = *(undefined8 *)(lVar9 + 0xc0);
            lVar12 = *(long *)(lVar9 + 200);
            uVar11 = *(undefined8 *)(lVar9 + 0xb8);
            FUN_103198594(*(undefined8 *)(lVar9 + 0xa8),uVar11,0x112d36580,&UNK_10d9016d0);
            (**(code **)(lVar12 + 0x30))(uVar11,1,uVar10);
            if ((int)uVar11 == 1) {
              func_0x0001000293e4(*(undefined8 *)(lVar9 + 0xb8));
            }
            else {
              (**(code **)(*(long *)(lVar9 + 200) + 0x20))
                        (*(undefined8 *)(lVar9 + 0xd0),*(undefined8 *)(lVar9 + 0xb8),
                         *(undefined8 *)(lVar9 + 0xc0));
              puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
              func_0x000107c61168();
              func_0x000107c415e0();
              func_0x000107c61180();
              puVar5 = puVar4;
              func_0x000107c5ed90();
              *(undefined8 *)(lVar9 + 0x98) = 0;
              puVar6 = puVar4;
              func_0x000107c4ff50();
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar4);
              uVar10 = *(undefined8 *)(lVar9 + 0x98);
              if ((int)puVar6 == 0) {
                uVar11 = uVar10;
                func_0x000107c61174(uVar10);
                func_0x000107c5ed30(uVar10);
                func_0x000107c61170(uVar11);
                func_0x000107c61654();
                func_0x000107c614ac(uVar10);
              }
              else {
                func_0x000107c61174(uVar10);
              }
              (**(code **)(*(long *)(lVar9 + 200) + 8))
                        (*(undefined8 *)(lVar9 + 0xd0),*(undefined8 *)(lVar9 + 0xc0));
            }
            lVar12 = *(long *)(lVar9 + 0xb0) + _DAT_113806f10;
            func_0x000107c61618();
            *(long *)(lVar9 + 0xe8) = lVar12;
            if (lVar12 == 0) {
              uVar10 = *(undefined8 *)(lVar9 + 0xd0);
              uVar11 = *(undefined8 *)(lVar9 + 0xb8);
              func_0x000107c615c0(*(undefined8 *)(lVar9 + 0xd8));
              func_0x000107c615c0(uVar10);
              func_0x000107c615c0(uVar11);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000103197448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar9 + 8))();
                return;
              }
            }
            else {
              lVar12 = 0;
              func_0x000107c5fcec();
              lVar8 = lVar12;
              func_0x000107c5fce8();
              *(long *)(lVar9 + 0xf0) = lVar8;
              func_0x000100eea164();
              func_0x000107c5fca8(lVar12,lVar8);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                pcVar7 = FUN_103197450;
                goto LAB_107c615e0;
              }
            }
            func_0x000107c60e78();
            lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar12 = *(long *)(lVar9 + 0xe8);
            func_0x000107c61574(*(undefined8 *)(lVar9 + 0xf0));
            lVar8 = _DAT_112f476d0;
            func_0x000107c61428(lVar12 + _DAT_112f476d0,lVar9 + 0x80,0,0);
            lVar12 = lVar12 + lVar8;
            func_0x000107c61618();
            if (lVar12 != 0) {
              func_0x000107c3e3e0();
              func_0x000107c615e8(lVar12);
            }
            func_0x000107c615e8(*(undefined8 *)(lVar9 + 0xe8));
            lVar12 = *(long *)(lVar9 + 0xd0);
            uVar10 = *(undefined8 *)(lVar9 + 0xb8);
            func_0x000107c615c0(*(undefined8 *)(lVar9 + 0xd8));
            func_0x000107c615c0(lVar12);
            func_0x000107c615c0(uVar10);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
              func_0x000107c60e78();
              func_0x000107c615e8(*(undefined8 *)(lVar12 + 0x70));
              func_0x000107c61170(*(undefined8 *)(lVar12 + 0x78));
              FUN_103198414(lVar12 + _DAT_112f47d68,FUN_103197644);
              func_0x000107c6142c(*(undefined8 *)(lVar12 + _DAT_112f47d70 + 0x10));
              FUN_1031985fc(lVar12 + _DAT_113806f10);
              func_0x000107c61470(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_defaultActor_deallocate_110350098)(lVar12);
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x000103197514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar9 + 8))();
            return;
          }
          pcVar7 = FUN_103197234;
          lVar8 = 0;
        }
      }
    }
    else {
      func_0x000107c60e78();
      lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar9 = *plVar15;
      uVar10 = *(undefined8 *)(lVar9 + 0x218);
      lVar12 = *(long *)(lVar9 + 0x130);
      lVar13 = *plVar15;
      func_0x000107c615c0(*(undefined8 *)(lVar9 + 0x220));
      func_0x0001000293e4(uVar10);
      func_0x000107c615c0(uVar10);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        pcVar7 = FUN_10319563c;
        lVar8 = 0;
      }
      else {
        func_0x000107c60e78();
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        *(undefined8 *)(lVar13 + 0xc0) = *(undefined8 *)(lVar13 + 0x180);
        *(undefined8 *)(lVar13 + 0xb8) = *(undefined8 *)(lVar13 + 0x178);
        *(undefined1 *)(lVar13 + 200) = *(undefined1 *)(lVar13 + 0x82);
        uVar10 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar10 != 0) {
          FUN_103187f64();
          func_0x000107c61658((undefined8 *)(lVar13 + 0xb8),&UNK_110618668,uVar10);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x0001031956dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar13 + 8))();
          return;
        }
        func_0x000107c60e78(*(undefined8 *)(lVar13 + 0x178),*(undefined8 *)(lVar13 + 0x180),
                            *(undefined1 *)(lVar13 + 0x82));
        pcVar7 = FUN_1031956f8;
        lVar12 = 0;
        lVar8 = 0;
      }
    }
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar7,lVar12,lVar8);
  return;
}


