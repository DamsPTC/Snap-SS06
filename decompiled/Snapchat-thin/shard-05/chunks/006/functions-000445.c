/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ff5efc; end: 103ff5f4b;  */

undefined8 * FUN_103ff5efc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = param_2[6];
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  param_1[6] = uVar8;
  FUN_103ff5d80(uVar7,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  return param_1;
}



/* Entry: 103ff5f4c; end: 103ff5fd3;  */

int FUN_103ff5f4c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103ff5fd4; end: 103ff6077;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103ff5fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_7 >> 0x20);
  uVar1 = uVar2 >> 0x1c & 3 | (param_8 & 0x3f) << 2;
  if (uVar1 < 3) {
    if (uVar1 == 1) {
      _swift_bridgeObjectRetain(param_2);
      func_0x00010174c278(param_3,param_4,param_5);
      uVar2 = uVar2 >> 0x1e;
      if (uVar2 == 1) {
        param_6 = param_7 & 0xfffffffffffffff;
      }
      else if (uVar2 != 2) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_retain_11034f4d0)(param_6);
      return;
    }
    if (uVar1 != 2) {
      return;
    }
  }
  else if ((uVar1 != 3) && (uVar1 != 4)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 103ff6078; end: 103ff6093;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

ulong FUN_103ff6078(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar6 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar2 = param_1[4];
  uVar5 = param_1[5];
  uVar7 = param_1[6];
  uVar8 = (uint)(uVar7 >> 0x20);
  uVar4 = uVar8 >> 0x1c & 3 | ((byte)param_1[7] & 0x3f) << 2;
  if (uVar4 < 3) {
    if (uVar4 == 1) {
      _swift_bridgeObjectRelease(uVar6);
      func_0x00010174c2bc(uVar1,uVar3,uVar2);
      uVar8 = uVar8 >> 0x1e;
      if (uVar8 == 1) {
        uVar5 = uVar7 & 0xfffffffffffffff;
      }
      else if (uVar8 != 2) {
        return uVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar5);
      return uVar5;
    }
    if (uVar4 != 2) {
      return *param_1;
    }
  }
  else if ((uVar4 != 3) && (uVar4 != 4)) {
    return *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
  return uVar6;
}



/* Entry: 103ff6094; end: 103ff6137;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103ff6094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_7 >> 0x20);
  uVar1 = uVar2 >> 0x1c & 3 | (param_8 & 0x3f) << 2;
  if (uVar1 < 3) {
    if (uVar1 == 1) {
      _swift_bridgeObjectRelease(param_2);
      func_0x00010174c2bc(param_3,param_4,param_5);
      uVar2 = uVar2 >> 0x1e;
      if (uVar2 == 1) {
        param_6 = param_7 & 0xfffffffffffffff;
      }
      else if (uVar2 != 2) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(param_6);
      return;
    }
    if (uVar1 != 2) {
      return;
    }
  }
  else if ((uVar1 != 3) && (uVar1 != 4)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103ff6138; end: 103ff6267;  */

undefined8 * FUN_103ff6138(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar8 = param_2[6];
  uVar7 = *(undefined1 *)(param_2 + 7);
  FUN_103ff5fd4(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  param_1[6] = uVar8;
  *(undefined1 *)(param_1 + 7) = uVar7;
  return param_1;
}



/* Entry: 103ff6268; end: 103ff62c3;  */

undefined8 * FUN_103ff6268(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar10 = param_2[6];
  uVar7 = *(undefined1 *)(param_2 + 7);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[6] = uVar10;
  uVar8 = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar7;
  FUN_103ff6094(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8);
  return param_1;
}



/* Entry: 103ff62c4; end: 103ff63d7;  */

int FUN_103ff62c4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3fb < param_2) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + 0x3fc;
  }
  uVar1 = ((uint)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x3c) & 3 |
          (uint)*(byte *)(param_1 + 0xe) << 2) ^ 0x3ff;
  if (0x3fa < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103ff63d8; end: 103ff646f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff63d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113045f50) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ff6470; end: 103ff64cf; -[ComplianceEngineServicingServices init] */

void FUN_103ff6470(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ComplianceEngineService.ComplianceEngineServicingServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff649c);
  (*pcVar1)();
}



/* Entry: 103ff64d0; end: 103ff64f3; -[ComplianceEngineServicingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff64d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113045f50));
  return;
}



/* Entry: 103ff64f4; end: 103ff675b;  */

void FUN_103ff64f4(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar4 = 0xe900000000000070;
  uVar5 = 0x656761726f7473;
  if (bVar2 != 2) {
    uVar5 = 0xd000000000000012;
  }
  uVar1 = 0xe700000000000000;
  if (bVar2 != 2) {
    uVar1 = 0x800000010efb9c20;
  }
  uVar3 = 0x61727473746f6f62;
  if (bVar2 != 0) {
    uVar4 = 0xea0000000000636e;
    uVar3 = 0x79735f61746c6564;
  }
  if (bVar2 < 2) {
    uVar1 = uVar4;
    uVar5 = uVar3;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ff675c; end: 103ff67e7;  */

void FUN_103ff675c(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar4 = 0xe900000000000070;
  uVar5 = 0x656761726f7473;
  if (bVar2 != 2) {
    uVar5 = 0xd000000000000012;
  }
  uVar1 = 0xe700000000000000;
  if (bVar2 != 2) {
    uVar1 = 0x800000010efb9c20;
  }
  uVar3 = 0x61727473746f6f62;
  if (bVar2 != 0) {
    uVar4 = 0xea0000000000636e;
    uVar3 = 0x79735f61746c6564;
  }
  if (bVar2 < 2) {
    uVar1 = uVar4;
    uVar5 = uVar3;
  }
  *param_1 = uVar5;
  param_1[1] = uVar1;
  return;
}



/* Entry: 103ff67e8; end: 103ff684b;  */

ulong FUN_103ff67e8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 103ff684c; end: 103ff684f;  */

void FUN_103ff684c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113045f80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbf5a0;
  _swift_getWitnessTable(&UNK_10dcbf5a0,&UNK_1107324c0);
  puRam0000000113045f80 = puVar1;
  return;
}



/* Entry: 103ff6850; end: 103ff688f;  */

void FUN_103ff6850(void)

{
  undefined *puVar1;
  
  if (puRam0000000113045f80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbf5a0;
  _swift_getWitnessTable(&UNK_10dcbf5a0,&UNK_1107324c0);
  puRam0000000113045f80 = puVar1;
  return;
}



/* Entry: 103ff6890; end: 103ff6b77;  */

int FUN_103ff6890(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103ff690c;
        goto LAB_103ff68f0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103ff68f0:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_103ff690c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103ff6b78; end: 103ff6b87; -[SCComplianceFlag enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103ff6b78(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113046010);
}



/* Entry: 103ff6b88; end: 103ff6b97; -[SCComplianceFlag remediable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103ff6b88(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113046018);
}



/* Entry: 103ff6b98; end: 103ff6bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff6b98(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_113046010) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_113046018) = (byte)((uint)param_1 >> 8) & 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ff6bf8; end: 103ff6c23; -[SCComplianceFlag init] */

void FUN_103ff6bf8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ComplianceEngineScope.SCComplianceFlag",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff6c24);
  (*pcVar1)();
}



/* Entry: 103ff6c24; end: 103ff6c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff6c24(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113046020);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ff6c80; end: 103ff6e5f; -[SCComplianceEngine flagForFeature:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff6c80(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  pcVar1 = *(code **)(param_1 + _DAT_113046020);
  _objc_retain();
  _objc_retain();
  lVar2 = param_1;
  (*pcVar1)();
  lVar3 = lVar2;
  _swift_getObjectType();
  uVar4 = param_3;
  (**(code **)(param_2 + 8))(param_3,param_4,lVar3,param_2);
  _swift_unknownObjectRelease();
  func_0x000100670a68();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(byte *)(lVar3 + _DAT_113046010) = (byte)uVar4 & 1;
  *(byte *)(lVar3 + _DAT_113046018) = (byte)((ulong)uVar4 >> 8) & 1;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 103ff6e60; end: 103ff6e6b;  */

void FUN_103ff6e60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_1107325f0;
  _swift_allocObject(&UNK_1107325f0,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = param_1;
  _swift_retain(uVar2);
  _objc_retain(uVar1);
  _swift_retain(param_1);
  uVar5 = 7;
  func_0x0001001ca524(7,0,0x5c,4,0,0,&UNK_10dcbf740,puVar4,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar4);
  func_0x0001000b6d30(0);
  _swift_allocObject();
  func_0x0001000b6d50(FUN_103ff752c,uVar5);
  return;
}



/* Entry: 103ff6e6c; end: 103ff6f13;  */

void FUN_103ff6e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  lVar2 = 0x112dc5838;
  func_0x0001000285a8(0x112dc5838,&UNK_10d985418);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
  lVar2 = 0x112dc5490;
  func_0x0001000285a8(0x112dc5490,&UNK_10d985250);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ff6f14,0,0);
  return;
}



/* Entry: 103ff6f14; end: 103ff6fd7;  */

void FUN_103ff6f14(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(unaff_x22 + 0x28))();
  uVar5 = param_1;
  _swift_getObjectType();
  (**(code **)(param_2 + 0x10))(uVar7,uVar2,uVar4,uVar5,param_2);
  _swift_unknownObjectRelease(param_1);
  __sScS17makeAsyncIteratorScS0C0Vyx_GyF(uVar1,uVar3);
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103ff6fd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,unaff_x22 + 0x90,*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Entry: 103ff6fd8; end: 103ff701f;  */

void FUN_103ff6fd8(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ff7020,0,0);
  return;
}



/* Entry: 103ff7020; end: 103ff715b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff7020(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x22;
  
  uVar4 = *(ushort *)(unaff_x22 + 0x90);
  if ((uVar4 & 0xff) == 2) {
    lVar5 = *(long *)(unaff_x22 + 0x70);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x50));
    func_0x000100c7f554();
    (**(code **)(lVar5 + 8))(uVar2,uVar3);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103ff70a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000100670a68();
  lVar5 = param_1;
  _objc_allocWithZone();
  *(byte *)(lVar5 + _DAT_113046010) = (byte)uVar4 & 1;
  *(byte *)(lVar5 + _DAT_113046018) = (byte)(uVar4 >> 8) & 1;
  plVar6 = (long *)(unaff_x22 + 0x10);
  *plVar6 = lVar5;
  *(long *)(unaff_x22 + 0x18) = param_1;
  _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  *(long **)(unaff_x22 + 0x20) = plVar6;
  func_0x000100087f6c();
  _objc_release(plVar6);
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103ff715c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,(ushort *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Entry: 103ff715c; end: 103ff71a3;  */

void FUN_103ff715c(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ff71a4,0,0);
  return;
}



/* Entry: 103ff71a4; end: 103ff72df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff71a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x22;
  
  uVar4 = *(ushort *)(unaff_x22 + 0x90);
  if ((uVar4 & 0xff) == 2) {
    lVar5 = *(long *)(unaff_x22 + 0x70);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x50));
    func_0x000100c7f554();
    (**(code **)(lVar5 + 8))(uVar2,uVar3);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103ff722c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000100670a68();
  lVar5 = param_1;
  _objc_allocWithZone();
  *(byte *)(lVar5 + _DAT_113046010) = (byte)uVar4 & 1;
  *(byte *)(lVar5 + _DAT_113046018) = (byte)(uVar4 >> 8) & 1;
  plVar6 = (long *)(unaff_x22 + 0x10);
  *plVar6 = lVar5;
  *(long *)(unaff_x22 + 0x18) = param_1;
  _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  *(long **)(unaff_x22 + 0x20) = plVar6;
  func_0x000100087f6c();
  _objc_release(plVar6);
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103ff715c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,(ushort *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Entry: 103ff72e0; end: 103ff73cb; -[SCComplianceEngine observableForFeature:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff72e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113046020);
  puVar2 = &UNK_1107325c8;
  _swift_allocObject(&UNK_1107325c8,0x30,7);
  uVar3 = puVar1[1];
  uVar4 = *puVar1;
  *(undefined8 *)(puVar2 + 0x18) = puVar1[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  func_0x0001000285a8(0x113046028,&UNK_10dcbf6f0);
  _swift_allocObject();
  _objc_retain(param_3);
  _objc_retain();
  _objc_retain(param_1);
  _swift_retain(uVar3);
  uVar3 = 0x103ff7550;
  func_0x0001000b64ac(0x103ff7550,puVar2);
  uVar4 = uVar3;
  func_0x0001004575f0();
  _objc_release(param_3);
  _objc_release(param_1);
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 103ff73cc; end: 103ff73f7; -[SCComplianceEngine init] */

void FUN_103ff73cc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ComplianceEngineScope.SCComplianceEngine",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff73f8);
  (*pcVar1)();
}



/* Entry: 103ff73f8; end: 103ff73fb;  */

void FUN_103ff73f8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ff73fc; end: 103ff742f;  */

void FUN_103ff73fc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ff7430; end: 103ff7443; -[SCComplianceEngine .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ff7430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113046020 + 8));
  return;
}



/* Entry: 103ff7444; end: 103ff746f;  */

void FUN_103ff7444(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103ff7470; end: 103ff74ef;  */

void FUN_103ff7470(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103ff74f0;
  plVar5[8] = lVar3;
  plVar5[9] = lVar7;
  plVar5[6] = lVar2;
  plVar5[7] = lVar1;
  plVar5[5] = lVar6;
  lVar6 = 0x112dc5838;
  func_0x0001000285a8(0x112dc5838,&UNK_10d985418);
  plVar5[10] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
  lVar6 = 0x112dc5490;
  func_0x0001000285a8(0x112dc5490,&UNK_10d985250);
  plVar5[0xd] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0xe] = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xf] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ff6f14,0,0);
  return;
}



/* Entry: 103ff74f0; end: 103ff752b;  */

void FUN_103ff74f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103ff7528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103ff752c; end: 103ff7583;  */

void FUN_103ff752c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 103ff7584; end: 103ff75c3;  */

void FUN_103ff7584(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113046118;
  func_0x0001000285a8(0x113046118,&UNK_10dcbf760);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 103ff75c4; end: 103ff75f3;  */

void FUN_103ff75c4(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103ffdcc8)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103ff75f4; end: 103ff76e7;  */

void FUN_103ff75f4(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_68 [72];
  
  lVar2 = *unaff_x20;
  lVar1 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  if ((char)lVar1 == '\x01') {
    lVar2 = *(long *)(&UNK_10dcc0f58 + lVar2 * 8);
  }
  __ss6HasherV8_combineyySuF(lVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ff76e8; end: 103ff7797;  */

bool FUN_103ff76e8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if ((char)param_1[1] == '\x01') {
    lVar1 = *(long *)(&UNK_10dcc0f58 + lVar1 * 8);
  }
  lVar2 = *param_2;
  if ((char)param_2[1] == '\x01') {
    lVar2 = *(long *)(&UNK_10dcc0f58 + lVar2 * 8);
  }
  return lVar1 == lVar2;
}



/* Entry: 103ff7798; end: 103ff788b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103ff7798(undefined8 *param_1,long *param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined5 uStack_98;
  undefined3 uStack_93;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined5 uStack_38;
  undefined3 uStack_33;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  undefined3 uStack_23;
  long lStack_20;
  long lStack_18;
  
  uVar8 = 0;
  pbVar10 = (byte *)*param_1;
  pbVar25 = (byte *)param_1[1];
  lVar24 = *param_2;
  uVar16 = param_2[1];
  cVar1 = (char)param_2[0xc];
  pbStack_d0 = pbVar10;
  pbStack_c8 = pbVar25;
  lStack_70 = lVar24;
  uStack_68 = uVar16;
  if (*(char *)(param_1 + 0xc) == '\0') {
    uStack_a0 = param_1[6];
    uStack_98 = (undefined5)param_1[7];
    uStack_93 = (undefined3)((ulong)param_1[7] >> 0x28);
    uStack_88 = (undefined5)param_1[9];
    uStack_83 = (undefined3)((ulong)param_1[9] >> 0x28);
    uStack_90 = (undefined5)param_1[8];
    uStack_8b = (undefined3)((ulong)param_1[8] >> 0x28);
    uStack_78 = param_1[0xb];
    uStack_80 = param_1[10];
    uStack_c0 = param_1[2];
    uStack_b8 = param_1[3];
    uStack_a8 = param_1[5];
    uStack_b0 = param_1[4];
    if (cVar1 == '\0') {
      lStack_40 = param_2[6];
      uStack_38 = (undefined5)param_2[7];
      uStack_33 = (undefined3)((ulong)param_2[7] >> 0x28);
      uStack_28 = (undefined5)param_2[9];
      uStack_23 = (undefined3)((ulong)param_2[9] >> 0x28);
      uStack_30 = (undefined5)param_2[8];
      uStack_2b = (undefined3)((ulong)param_2[8] >> 0x28);
      lStack_18 = param_2[0xb];
      lStack_20 = param_2[10];
      lStack_60 = param_2[2];
      lStack_58 = param_2[3];
      lStack_48 = param_2[5];
      lStack_50 = param_2[4];
      uVar8 = 0;
      FUN_104009e10(&pbStack_d0,&lStack_70);
      goto LAB_103ff787c;
    }
  }
  else if (*(char *)(param_1 + 0xc) == '\x01') {
    uStack_b8 = param_1[3];
    uStack_c0 = param_1[2];
    uStack_b0 = param_1[4];
    uStack_a8 = param_1[5];
    uStack_a0 = param_1[6];
    uStack_98 = (undefined5)param_1[7];
    uStack_8b = (undefined3)*(undefined8 *)((long)param_1 + 0x45);
    uStack_88 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x45) >> 0x18);
    uStack_93 = (undefined3)*(undefined8 *)((long)param_1 + 0x3d);
    uStack_90 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x3d) >> 0x18);
    if (cVar1 == '\x01') {
      lStack_58 = param_2[3];
      lStack_60 = param_2[2];
      lStack_50 = param_2[4];
      lStack_48 = param_2[5];
      lStack_40 = param_2[6];
      uStack_38 = (undefined5)param_2[7];
      uStack_2b = (undefined3)*(undefined8 *)((long)param_2 + 0x45);
      uStack_28 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x45) >> 0x18);
      uStack_33 = (undefined3)*(undefined8 *)((long)param_2 + 0x3d);
      uStack_30 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x3d) >> 0x18);
      FUN_103ffe18c(&pbStack_d0,&lStack_70);
      goto LAB_103ff787c;
    }
  }
  else if (cVar1 == '\x02') {
    do {
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
      *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
      *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      *(undefined8 *)((long)register0x00000008 + -0x58) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar8 = (uint)((ulong)pbVar25 >> 0x20);
      uVar18 = uVar8 >> 0x1e;
      uVar5 = (uint)(uVar16 >> 0x20);
      uVar21 = uVar5 >> 0x1e;
      iVar7 = (int)pbVar10;
      pbVar13 = pbVar25;
      if ((ulong)pbVar25 >> 0x3e == 3) {
        uVar20 = 0;
        if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
            (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
        goto joined_r0x000100e26170;
code_r0x000100e26128:
        pbVar9 = (byte *)0x1;
      }
      else if (uVar8 >> 0x1e < 2) {
        if (uVar18 == 0) {
          uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
        }
        else {
          iVar19 = (int)((ulong)pbVar10 >> 0x20);
          if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
            (*pcVar6)();
          }
          uVar20 = (ulong)(iVar19 - iVar7);
        }
joined_r0x000100e26170:
        if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
        if (uVar21 == 0) {
          uVar22 = uVar16 >> 0x30 & 0xff;
          goto code_r0x000100e2608c;
        }
        iVar19 = (int)((ulong)lVar24 >> 0x20);
        if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
          (*pcVar6)();
        }
        if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar18 == 2) {
          uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
          if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
            (*pcVar6)();
          }
          goto joined_r0x000100e26170;
        }
        uVar20 = 0;
        if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
        if (uVar21 == 2) {
          uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
          if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
            (*pcVar6)();
          }
code_r0x000100e2608c:
          if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
          if ((long)uVar20 < 1) goto code_r0x000100e26128;
          if (uVar18 < 2) {
            if (uVar18 == 0) {
              *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
              *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
              *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
              *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
              *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
              *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
              *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
              *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
              *(char *)((long)register0x00000008 + -0x68) = (char)pbVar25;
              *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar25 >> 8);
              *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar25 >> 0x10);
              *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar25 >> 0x18);
              *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar25 >> 0x20);
              *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar25 >> 0x28);
              pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70)
                                );
code_r0x000100e26260:
              unaff_x21 = 0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                  (undefined1 *)((long)register0x00000008 + -0x70));
              pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
              goto code_r0x000100e262b0;
            }
            unaff_x25 = (byte *)(long)iVar7;
            unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
            if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
              (*pcVar6)();
            }
            func_0x000107c5ec30();
            unaff_x24 = pbVar25;
            if (pbVar10 == (byte *)0x0) {
              func_0x000107c5ec38();
              pbVar10 = (byte *)0x0;
            }
            else {
              pbVar13 = pbVar10;
              func_0x000107c5ec3c();
              if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                (*pcVar6)();
              }
              pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                if ((long)unaff_x23 <= (long)pbVar13) {
                  pbVar13 = unaff_x23;
                }
                pbVar13 = pbVar13 + (long)pbVar10;
                goto code_r0x000100e262a4;
              }
            }
            pbVar13 = (byte *)0x0;
          }
          else {
            if (uVar18 != 2) {
              *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
              pbVar13 = (byte *)((long)register0x00000008 + -0x70);
              goto code_r0x000100e26260;
            }
            lVar26 = *(long *)(pbVar10 + 0x10);
            unaff_x24 = *(byte **)(pbVar10 + 0x18);
            func_0x000107c5ec30();
            pbVar13 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              func_0x000107c5ec3c();
              if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                (*pcVar6)();
              }
              pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
            }
            unaff_x23 = unaff_x24 + -lVar26;
            if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
              (*pcVar6)();
            }
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            unaff_x25 = pbVar25;
            if (pbVar10 == (byte *)0x0) {
              pbVar13 = (byte *)0x0;
            }
            else {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
            }
          }
code_r0x000100e262a4:
          unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
          unaff_x21 = 0;
          func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar13,
                              lVar24,uVar16);
          pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
          unaff_x22 = uVar16;
        }
        else {
          pbVar9 = (byte *)(ulong)(uVar20 == 0);
        }
      }
code_r0x000100e262b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
      {
        return pbVar9;
      }
      func_0x000107c60e78();
      *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
      *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
      *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
      *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
      *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x90) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
      pbVar12 = *(byte **)pbVar9;
      pbVar10 = *(byte **)(pbVar9 + 8);
      pbVar23 = *(byte **)(pbVar9 + 0x18);
      bVar27 = pbVar9[0x28];
      pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                         (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
      pbVar14 = pbVar10;
      if (bVar27 < 3) {
        if (bVar27 == 0) {
          if (pbVar13[0x28] == 0) {
            lVar24 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar24,uVar11);
            return (byte *)(ulong)((uint)pbVar12 & 1);
          }
          return (byte *)0x0;
        }
        if (bVar27 == 1) {
          if (pbVar13[0x28] != 1) {
            return (byte *)0x0;
          }
          pbVar15 = *(byte **)(pbVar13 + 8);
          pbVar17 = *(byte **)(pbVar13 + 0x10);
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          if (((ulong)pbVar12 & 1) == 0) {
            return (byte *)0x0;
          }
          pbVar12 = pbVar10;
          pbVar14 = pbVar25;
          if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
            return (byte *)0x1;
          }
        }
        else {
          if (pbVar13[0x28] != 2) {
            return (byte *)0x0;
          }
          pbVar15 = *(byte **)pbVar13;
          pbVar17 = *(byte **)(pbVar13 + 8);
          lVar24 = *(long *)(pbVar13 + 0x18);
          if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
            if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
              return (byte *)0x0;
            }
            if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar10 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar10;
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
        }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(pbVar12,pbVar14,pbVar15,pbVar17,0);
        return pbVar12;
      }
      lVar26 = *(long *)(pbVar9 + 0x20);
      if (bVar27 < 5) {
        if (bVar27 != 3) {
          if (pbVar13[0x28] != 4) {
            return (byte *)0x0;
          }
          pbVar15 = *(byte **)pbVar13;
          pbVar17 = *(byte **)(pbVar13 + 8);
          if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
             (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
             pbVar17 = *(byte **)(pbVar13 + 0x18),
             pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
            return (byte *)0x1;
          }
          goto code_r0x000107c605b8;
        }
        if (pbVar13[0x28] != 3) {
          return (byte *)0x0;
        }
        if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)(pbVar13 + 0x20);
        if (pbVar25 == (byte *)0x0) {
          if (pbVar17 != (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          if (pbVar17 == (byte *)0x0) {
            return (byte *)0x0;
          }
          pbVar15 = *(byte **)(pbVar13 + 8);
          pbVar12 = pbVar10;
          pbVar14 = pbVar25;
          if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
        }
        if (lVar26 != 0) {
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
            return (byte *)0x1;
          }
          func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
          goto joined_r0x000100e266a4;
        }
joined_r0x000100e26620:
        if (lVar24 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if (bVar27 != 5) {
        if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
            lVar26 == 0) && pbVar25 == (byte *)0x0) {
          if (pbVar13[0x28] != 6) {
            return (byte *)0x0;
          }
          lVar26 = *(long *)(pbVar13 + 0x20);
          lVar24 = *(long *)(pbVar13 + 0x18);
          bVar27 = pbVar13[8] | (byte)lVar24;
          bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar13[0x10] | (byte)lVar26;
          bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
          auVar43[1] = bVar28;
          auVar43[0] = bVar27;
          auVar43[2] = bVar29;
          auVar43[3] = bVar30;
          auVar43[4] = bVar31;
          auVar43[5] = bVar32;
          auVar43[6] = bVar33;
          auVar43[7] = bVar34;
          auVar43[8] = bVar35;
          auVar43[9] = bVar36;
          auVar43[10] = bVar37;
          auVar43[0xb] = bVar38;
          auVar43[0xc] = bVar39;
          auVar43[0xd] = bVar40;
          auVar43[0xe] = bVar41;
          auVar43[0xf] = bVar42;
          auVar4[1] = bVar28;
          auVar4[0] = bVar27;
          auVar4[2] = bVar29;
          auVar4[3] = bVar30;
          auVar4[4] = bVar31;
          auVar4[5] = bVar32;
          auVar4[6] = bVar33;
          auVar4[7] = bVar34;
          auVar4[8] = bVar35;
          auVar4[9] = bVar36;
          auVar4[10] = bVar37;
          auVar4[0xb] = bVar38;
          auVar4[0xc] = bVar39;
          auVar4[0xd] = bVar40;
          auVar4[0xe] = bVar41;
          auVar4[0xf] = bVar42;
          auVar43 = NEON_ext(auVar43,auVar4,8,1);
          if (CONCAT17(bVar34 | auVar43[7],
                       CONCAT16(bVar33 | auVar43[6],
                                CONCAT15(bVar32 | auVar43[5],
                                         CONCAT14(bVar31 | auVar43[4],
                                                  CONCAT13(bVar30 | auVar43[3],
                                                           CONCAT12(bVar29 | auVar43[2],
                                                                    CONCAT11(bVar28 | auVar43[1],
                                                                             bVar27 | auVar43[0]))))
                                        ))) == 0 && *(long *)pbVar13 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if ((pbVar12 == (byte *)0x1) &&
           (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
            lVar26 == 0)) {
          if (pbVar13[0x28] != 6) {
            return (byte *)0x0;
          }
          if (*(long *)pbVar13 != 1) {
            return (byte *)0x0;
          }
        }
        else {
          if (pbVar13[0x28] != 6) {
            return (byte *)0x0;
          }
          if (*(long *)pbVar13 != 2) {
            return (byte *)0x0;
          }
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar2[1] = bVar28;
        auVar2[0] = bVar27;
        auVar2[2] = bVar29;
        auVar2[3] = bVar30;
        auVar2[4] = bVar31;
        auVar2[5] = bVar32;
        auVar2[6] = bVar33;
        auVar2[7] = bVar34;
        auVar2[8] = bVar35;
        auVar2[9] = bVar36;
        auVar2[10] = bVar37;
        auVar2[0xb] = bVar38;
        auVar2[0xc] = bVar39;
        auVar2[0xd] = bVar40;
        auVar2[0xe] = bVar41;
        auVar2[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar2,auVar3,8,1);
        lVar24 = CONCAT17(bVar34 | auVar43[7],
                          CONCAT16(bVar33 | auVar43[6],
                                   CONCAT15(bVar32 | auVar43[5],
                                            CONCAT14(bVar31 | auVar43[4],
                                                     CONCAT13(bVar30 | auVar43[3],
                                                              CONCAT12(bVar29 | auVar43[2],
                                                                       CONCAT11(bVar28 | auVar43[1],
                                                                                bVar27 | auVar43[0])
                                                                      ))))));
        goto joined_r0x000100e26620;
      }
      if (pbVar13[0x28] != 5) {
        return (byte *)0x0;
      }
      lVar24 = *(long *)(pbVar13 + 8);
      uVar16 = *(ulong *)(pbVar13 + 0x10);
      lVar26 = *(long *)pbVar13;
      uVar11 = 0;
      func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c60118(pbVar12,lVar26,uVar11);
      if (((ulong)pbVar12 & 1) == 0) {
        return (byte *)0x0;
      }
      unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
      unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
      unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
      unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
      unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
      unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
      unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
      unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    } while( true );
  }
  uVar8 = 0;
LAB_103ff787c:
  return (byte *)(ulong)(uVar8 & 1);
}



/* Entry: 103ff788c; end: 103ff78fb;  */

/* WARNING: Possible PIC construction at 0x00010400b5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010400b5d8) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103ff788c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *unaff_x19;
  long lVar22;
  byte *unaff_x20;
  byte *unaff_x21;
  byte *pbVar23;
  byte *unaff_x22;
  long lVar24;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  byte *unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar41 [16];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [88];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  pbVar11 = (byte *)*param_1;
  pbVar12 = (byte *)param_1[1];
  pbVar10 = (byte *)param_1[2];
  pbVar8 = (byte *)*param_2;
  pbVar13 = (byte *)param_2[1];
  pbVar16 = (byte *)param_2[2];
  if (((ulong)pbVar10 >> 0x3d & 1) == 0) {
    if (((ulong)pbVar16 >> 0x3d & 1) != 0) {
      return (byte *)0x0;
    }
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x24 = *(byte **)(pbVar11 + 0x10);
    if (unaff_x24 != *(byte **)(pbVar8 + 0x10)) {
      return (byte *)0x0;
    }
    if (unaff_x24 != (byte *)0x0 && pbVar11 != pbVar8) {
      unaff_x25 = (byte *)&lStack_120;
      unaff_x26 = pbVar11 + 0x20;
      pbVar8 = pbVar8 + 0x20;
      pbVar11 = unaff_x24;
      do {
        lStack_f8 = *(long *)(unaff_x26 + 0x28);
        lStack_100 = *(long *)(unaff_x26 + 0x20);
        lStack_f0 = *(long *)(unaff_x26 + 0x30);
        lStack_e8 = *(long *)(unaff_x26 + 0x38);
        lStack_d8 = *(long *)(unaff_x26 + 0x48);
        lStack_e0 = *(long *)(unaff_x26 + 0x40);
        lStack_d0 = *(long *)(unaff_x26 + 0x50);
        lStack_118 = *(long *)(unaff_x26 + 8);
        lStack_120 = *(long *)unaff_x26;
        lStack_110 = *(long *)(unaff_x26 + 0x10);
        lStack_108 = *(long *)(unaff_x26 + 0x18);
        lStack_98 = *(long *)(pbVar8 + 0x28);
        lStack_a0 = *(long *)(pbVar8 + 0x20);
        lStack_90 = *(long *)(pbVar8 + 0x30);
        lStack_88 = *(long *)(pbVar8 + 0x38);
        lStack_78 = *(long *)(pbVar8 + 0x48);
        lStack_80 = *(long *)(pbVar8 + 0x40);
        lStack_70 = *(long *)(pbVar8 + 0x50);
        lStack_b8 = *(long *)(pbVar8 + 8);
        lStack_c0 = *(long *)pbVar8;
        lStack_b0 = *(long *)(pbVar8 + 0x10);
        lStack_a8 = *(long *)(pbVar8 + 0x18);
        func_0x00010400d844(&lStack_120,auStack_178);
        func_0x00010400d844(&lStack_c0,auStack_178);
        unaff_x23 = (byte *)&lStack_120;
        FUN_10400b0f8(unaff_x23,&lStack_c0);
        func_0x00010400d878(&lStack_c0);
        func_0x00010400d878(&lStack_120);
        if (((ulong)unaff_x23 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar8 = pbVar8 + 0x58;
        unaff_x26 = unaff_x26 + 0x58;
        pbVar11 = pbVar11 + -1;
        unaff_x24 = (byte *)0x0;
      } while (pbVar11 != (byte *)0x0);
    }
    unaff_x30 = 0x10400b5d8;
    register0x00000008 = (BADSPACEBASE *)auStack_180;
    pbVar11 = pbVar12;
    pbVar8 = pbVar13;
    pbVar15 = pbVar16;
    unaff_x19 = pbVar16;
    unaff_x20 = pbVar13;
    unaff_x21 = pbVar10;
    unaff_x22 = pbVar12;
  }
  else {
    pbVar10 = pbVar12;
    pbVar15 = pbVar13;
    if (((ulong)pbVar16 >> 0x3d & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(byte **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(byte **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(byte **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar10 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)((ulong)pbVar15 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar11;
    if ((ulong)pbVar10 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar10 != (byte *)0xc000000000000000)) ||
          ((ulong)pbVar15 >> 0x3e < 3)) ||
         ((uVar19 = 0, pbVar8 != (byte *)0x0 || (pbVar15 != (byte *)0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar10 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = (ulong)pbVar15 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)pbVar8 >> 0x20);
      if (SBORROW4(iVar18,(int)pbVar8)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)pbVar8)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(pbVar8 + 0x18) - *(long *)(pbVar8 + 0x10);
        if (SBORROW8(*(long *)(pbVar8 + 0x18),*(long *)(pbVar8 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar11;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar11 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar11 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar11 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar11 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar11 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar11 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar11 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar10;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar10 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar10 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar10 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar10 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar10 >> 0x28);
            pbVar10 = (byte *)((long)register0x00000008 + (((ulong)pbVar10 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = (byte *)0x0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar10;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar10 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar22 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar22,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + (lVar22 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar22;
          if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar10;
          if (pbVar11 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (byte *)((ulong)pbVar10 & 0x3fffffffffffffff);
        unaff_x21 = (byte *)0x0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar11,pbVar12,pbVar8,
                            pbVar15);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        pbVar10 = pbVar12;
        unaff_x22 = pbVar15;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar19 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(byte **)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(byte **)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(byte **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar8;
    pbVar11 = *(byte **)(pbVar8 + 8);
    pbVar16 = *(byte **)(pbVar8 + 0x18);
    bVar25 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar11;
    if (bVar25 < 3) {
      if (bVar25 == 0) {
        if (pbVar10[0x28] == 0) {
          lVar22 = *(long *)pbVar10;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar22,uVar9);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar25 == 1) {
        if (pbVar10[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar10 + 8);
        pbVar15 = *(byte **)(pbVar10 + 0x10);
        lVar22 = *(long *)pbVar10;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar22,uVar9);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar11;
        pbVar13 = pbVar23;
        if ((pbVar11 == pbVar14) && (pbVar23 == pbVar15)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar10[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar10;
        pbVar15 = *(byte **)(pbVar10 + 8);
        lVar22 = *(long *)(pbVar10 + 0x18);
        if ((pbVar12 == pbVar14) && (pbVar11 == pbVar15)) {
          if (((pbVar8[0x10] ^ pbVar10[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar16 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar10 = pbVar16;
          func_0x000107c60118();
          func_0x000107c61170(pbVar16);
          func_0x000107c61170(lVar22);
          pbVar16 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar16 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar13,pbVar14,pbVar15,0);
      return pbVar12;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar25 < 5) {
      if (bVar25 != 3) {
        if (pbVar10[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar10;
        pbVar15 = *(byte **)(pbVar10 + 8);
        if (((pbVar12 == pbVar14) && (pbVar11 == pbVar15)) &&
           (pbVar12 = pbVar23, pbVar13 = pbVar16, pbVar14 = *(byte **)(pbVar10 + 0x10),
           pbVar15 = *(byte **)(pbVar10 + 0x18),
           pbVar23 == *(byte **)(pbVar10 + 0x10) && pbVar16 == *(byte **)(pbVar10 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar10[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar10 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar15 = *(byte **)(pbVar10 + 0x10);
      lVar22 = *(long *)(pbVar10 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar15 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar15 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar10 + 8);
        pbVar12 = pbVar11;
        pbVar13 = pbVar23;
        if ((pbVar11 != pbVar14) || (pbVar23 != pbVar15)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar16 == *(byte **)(pbVar10 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar16,lVar24,*(byte **)(pbVar10 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar25 != 5) {
      if ((((pbVar16 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar10[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar10 + 0x20);
        lVar22 = *(long *)(pbVar10 + 0x18);
        bVar25 = pbVar10[8] | (byte)lVar22;
        bVar26 = pbVar10[9] | (byte)((ulong)lVar22 >> 8);
        bVar27 = pbVar10[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar28 = pbVar10[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar29 = pbVar10[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar30 = pbVar10[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar31 = pbVar10[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar32 = pbVar10[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar33 = pbVar10[0x10] | (byte)lVar24;
        bVar34 = pbVar10[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar35 = pbVar10[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar36 = pbVar10[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar37 = pbVar10[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar38 = pbVar10[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar39 = pbVar10[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar40 = pbVar10[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar41[1] = bVar26;
        auVar41[0] = bVar25;
        auVar41[2] = bVar27;
        auVar41[3] = bVar28;
        auVar41[4] = bVar29;
        auVar41[5] = bVar30;
        auVar41[6] = bVar31;
        auVar41[7] = bVar32;
        auVar41[8] = bVar33;
        auVar41[9] = bVar34;
        auVar41[10] = bVar35;
        auVar41[0xb] = bVar36;
        auVar41[0xc] = bVar37;
        auVar41[0xd] = bVar38;
        auVar41[0xe] = bVar39;
        auVar41[0xf] = bVar40;
        auVar3[1] = bVar26;
        auVar3[0] = bVar25;
        auVar3[2] = bVar27;
        auVar3[3] = bVar28;
        auVar3[4] = bVar29;
        auVar3[5] = bVar30;
        auVar3[6] = bVar31;
        auVar3[7] = bVar32;
        auVar3[8] = bVar33;
        auVar3[9] = bVar34;
        auVar3[10] = bVar35;
        auVar3[0xb] = bVar36;
        auVar3[0xc] = bVar37;
        auVar3[0xd] = bVar38;
        auVar3[0xe] = bVar39;
        auVar3[0xf] = bVar40;
        auVar41 = NEON_ext(auVar41,auVar3,8,1);
        if (CONCAT17(bVar32 | auVar41[7],
                     CONCAT16(bVar31 | auVar41[6],
                              CONCAT15(bVar30 | auVar41[5],
                                       CONCAT14(bVar29 | auVar41[4],
                                                CONCAT13(bVar28 | auVar41[3],
                                                         CONCAT12(bVar27 | auVar41[2],
                                                                  CONCAT11(bVar26 | auVar41[1],
                                                                           bVar25 | auVar41[0]))))))
                    ) == 0 && *(long *)pbVar10 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar16 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar10[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar10 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar10[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar10 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar10 + 0x20);
      lVar22 = *(long *)(pbVar10 + 0x18);
      bVar25 = pbVar10[8] | (byte)lVar22;
      bVar26 = pbVar10[9] | (byte)((ulong)lVar22 >> 8);
      bVar27 = pbVar10[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar28 = pbVar10[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar29 = pbVar10[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar30 = pbVar10[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar31 = pbVar10[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar32 = pbVar10[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar33 = pbVar10[0x10] | (byte)lVar24;
      bVar34 = pbVar10[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar35 = pbVar10[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar36 = pbVar10[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar37 = pbVar10[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar38 = pbVar10[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar39 = pbVar10[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar40 = pbVar10[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar26;
      auVar1[0] = bVar25;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33;
      auVar1[9] = bVar34;
      auVar1[10] = bVar35;
      auVar1[0xb] = bVar36;
      auVar1[0xc] = bVar37;
      auVar1[0xd] = bVar38;
      auVar1[0xe] = bVar39;
      auVar1[0xf] = bVar40;
      auVar2[1] = bVar26;
      auVar2[0] = bVar25;
      auVar2[2] = bVar27;
      auVar2[3] = bVar28;
      auVar2[4] = bVar29;
      auVar2[5] = bVar30;
      auVar2[6] = bVar31;
      auVar2[7] = bVar32;
      auVar2[8] = bVar33;
      auVar2[9] = bVar34;
      auVar2[10] = bVar35;
      auVar2[0xb] = bVar36;
      auVar2[0xc] = bVar37;
      auVar2[0xd] = bVar38;
      auVar2[0xe] = bVar39;
      auVar2[0xf] = bVar40;
      auVar41 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar32 | auVar41[7],
                        CONCAT16(bVar31 | auVar41[6],
                                 CONCAT15(bVar30 | auVar41[5],
                                          CONCAT14(bVar29 | auVar41[4],
                                                   CONCAT13(bVar28 | auVar41[3],
                                                            CONCAT12(bVar27 | auVar41[2],
                                                                     CONCAT11(bVar26 | auVar41[1],
                                                                              bVar25 | auVar41[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar10[0x28] != 5) {
      return (byte *)0x0;
    }
    pbVar8 = *(byte **)(pbVar10 + 8);
    pbVar15 = *(byte **)(pbVar10 + 0x10);
    lVar22 = *(long *)pbVar10;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar22,uVar9);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(byte **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(byte **)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(byte **)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    pbVar10 = pbVar23;
  } while( true );
}



/* Entry: 103ff78fc; end: 103ff793b;  */

void FUN_103ff78fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113046160;
  func_0x0001000285a8(0x113046160,&UNK_10dcbf770);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 103ff793c; end: 103ff7977;  */

void FUN_103ff793c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = lVar1 == 0;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 103ff7978; end: 103ff7a47;  */

void FUN_103ff7978(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  cVar2 = *(char *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0;
  if (cVar2 != '\x01') {
    uVar1 = uVar3;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ff7a48; end: 103ff7a87;  */

bool FUN_103ff7a48(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if ((char)param_1[1] == '\x01') {
    lVar2 = 0;
  }
  else {
    lVar2 = *param_1;
  }
  lVar1 = 0;
  if ((char)param_2[1] != '\x01') {
    lVar1 = *param_2;
  }
  return lVar2 == lVar1;
}



/* Entry: 103ff7a88; end: 103ff7ac7;  */

void FUN_103ff7a88(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130461e8;
  func_0x0001000285a8(0x1130461e8,&UNK_10dcbf780);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 103ff7ac8; end: 103ff7adf;  */

void FUN_103ff7ac8(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103ffebec)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103ff7ae0; end: 103ff7b4f;  */

void FUN_103ff7ae0(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103ff7b50; end: 103ff7b5b;  */

void FUN_103ff7b50(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103ffebf8)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103ff7b5c; end: 103ff7c13;  */

void FUN_103ff7b5c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103ff7c14; end: 103ff7c5b;  */

void FUN_103ff7c14(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc0e70,0x66,2);
  uRam00000001138129a8 = uStack_38;
  uRam00000001138129a0 = uStack_40;
  uRam00000001138129b8 = uStack_28;
  uRam00000001138129b0 = uStack_30;
  uRam00000001138129c8 = uStack_18;
  uRam00000001138129c0 = uStack_20;
  return;
}



/* Entry: 103ff7c5c; end: 103ff7cfb;  */

void FUN_103ff7c5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046260 != -1) {
    _swift_once(0x113046260,FUN_103ff7c14);
  }
  uVar5 = uRam00000001138129c8;
  uVar4 = uRam00000001138129c0;
  uVar3 = uRam00000001138129b8;
  uVar2 = uRam00000001138129b0;
  uVar1 = uRam00000001138129a8;
  *param_1 = uRam00000001138129a0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103ff7cfc; end: 103ff7d43;  */

void FUN_103ff7cfc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc0e40,0x21,2);
  uRam00000001138129d8 = uStack_38;
  uRam00000001138129d0 = uStack_40;
  uRam00000001138129e8 = uStack_28;
  uRam00000001138129e0 = uStack_30;
  uRam00000001138129f8 = uStack_18;
  uRam00000001138129f0 = uStack_20;
  return;
}



/* Entry: 103ff7d44; end: 103ff7e17;  */

/* WARNING: Removing unreachable block (ram,0x000103ff7e14) */

void FUN_103ff7d44(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 400);
        FUN_103ffec04();
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x150))(unaff_x20 + 8,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103ff7e18; end: 103ff7edb;  */

void FUN_103ff7e18(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *unaff_x20;
  if (*(long *)(lVar4 + 0x10) != 0) {
    pcVar5 = *(code **)(param_3 + 400);
    uVar3 = param_1;
    FUN_103ffec04();
    (*pcVar5)(lVar4,1,&UNK_110733e90,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[2];
  uVar1 = unaff_x20[1] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[1],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 103ff7edc; end: 103ff7f37;  */

void FUN_103ff7edc(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = 0;
  param_1[2] = 0xe000000000000000;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}



/* Entry: 103ff7f38; end: 103ff7f5f;  */

void FUN_103ff7f38(void)

{
  FUN_103ff7d44();
  return;
}



/* Entry: 103ff7f60; end: 103ff7f97;  */

uint FUN_103ff7f60(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x0001040040a4();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103ff7f98; end: 103ff8047;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103ff7f98(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  byte *pbVar26;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  ulong uVar28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  
  uVar2 = param_1[1];
  uVar21 = param_1[2];
  lVar25 = param_1[3];
  uVar28 = param_1[4];
  uVar23 = *unaff_x20;
  uVar14 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  pbVar11 = (byte *)unaff_x20[3];
  pbVar26 = (byte *)unaff_x20[4];
  func_0x000103ffdba4(uVar23,*param_1);
  if (((uVar23 & 1) == 0) ||
     ((uVar14 != uVar2 || uVar1 != uVar21 &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (uVar14,uVar1,uVar2,uVar21,0), (uVar14 & 1) == 0)))) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar6 = (uint)((ulong)pbVar26 >> 0x20);
    uVar19 = uVar6 >> 0x1e;
    uVar7 = (uint)(uVar28 >> 0x20);
    uVar22 = uVar7 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar15 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar28 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar28 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar6 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar8)();
        }
        uVar21 = (ulong)(iVar20 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar7 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar28 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar8)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar8)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar8)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar11;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar11 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar11 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar11 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar11 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar11 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar11 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar11 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar26;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar26 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar26 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar26 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar26 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar26 >> 0x28);
            pbVar15 = (byte *)((long)register0x00000008 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar10 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar8)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar15 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar8)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar15);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar15) {
                pbVar15 = unaff_x23;
              }
              pbVar15 = pbVar15 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar15 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar15 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar27 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar15 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar27,(long)pbVar15)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar8)();
            }
            pbVar11 = pbVar11 + (lVar27 - (long)pbVar15);
          }
          unaff_x23 = unaff_x24 + -lVar27;
          if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar8)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            pbVar15 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar15) {
              pbVar15 = unaff_x23;
            }
            pbVar15 = pbVar15 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong *)((ulong)pbVar26 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar11,pbVar15,lVar25,
                            uVar28);
        pbVar10 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar28;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar24 = *(byte **)(pbVar10 + 0x18);
    bVar29 = pbVar10[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar16 = pbVar11;
    if (bVar29 < 3) {
      if (bVar29 == 0) {
        if (pbVar15[0x28] == 0) {
          lVar25 = *(long *)pbVar15;
          uVar12 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar25,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar29 == 1) {
        if (pbVar15[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)(pbVar15 + 8);
        pbVar18 = *(byte **)(pbVar15 + 0x10);
        lVar25 = *(long *)pbVar15;
        uVar12 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar25,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar16 = pbVar26;
        if ((pbVar11 == pbVar17) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar15[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)pbVar15;
        pbVar18 = *(byte **)(pbVar15 + 8);
        lVar25 = *(long *)(pbVar15 + 0x18);
        if ((pbVar13 == pbVar17) && (pbVar11 == pbVar18)) {
          if (((pbVar10[0x10] ^ pbVar15[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar11 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar13,pbVar16,pbVar17,pbVar18,0);
      return pbVar13;
    }
    lVar27 = *(long *)(pbVar10 + 0x20);
    if (bVar29 < 5) {
      if (bVar29 != 3) {
        if (pbVar15[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)pbVar15;
        pbVar18 = *(byte **)(pbVar15 + 8);
        if (((pbVar13 == pbVar17) && (pbVar11 == pbVar18)) &&
           (pbVar13 = pbVar26, pbVar16 = pbVar24, pbVar17 = *(byte **)(pbVar15 + 0x10),
           pbVar18 = *(byte **)(pbVar15 + 0x18),
           pbVar26 == *(byte **)(pbVar15 + 0x10) && pbVar24 == *(byte **)(pbVar15 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar15[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar18 = *(byte **)(pbVar15 + 0x10);
      lVar25 = *(long *)(pbVar15 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)(pbVar15 + 8);
        pbVar13 = pbVar11;
        pbVar16 = pbVar26;
        if ((pbVar11 != pbVar17) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar15 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar15 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar29 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar15[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar15 + 0x20);
        lVar25 = *(long *)(pbVar15 + 0x18);
        bVar29 = pbVar15[8] | (byte)lVar25;
        bVar30 = pbVar15[9] | (byte)((ulong)lVar25 >> 8);
        bVar31 = pbVar15[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar32 = pbVar15[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar33 = pbVar15[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar34 = pbVar15[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar35 = pbVar15[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar36 = pbVar15[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar37 = pbVar15[0x10] | (byte)lVar27;
        bVar38 = pbVar15[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar39 = pbVar15[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar40 = pbVar15[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar41 = pbVar15[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar42 = pbVar15[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar43 = pbVar15[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar44 = pbVar15[0x17] | (byte)((ulong)lVar27 >> 0x38);
        auVar45[1] = bVar30;
        auVar45[0] = bVar29;
        auVar45[2] = bVar31;
        auVar45[3] = bVar32;
        auVar45[4] = bVar33;
        auVar45[5] = bVar34;
        auVar45[6] = bVar35;
        auVar45[7] = bVar36;
        auVar45[8] = bVar37;
        auVar45[9] = bVar38;
        auVar45[10] = bVar39;
        auVar45[0xb] = bVar40;
        auVar45[0xc] = bVar41;
        auVar45[0xd] = bVar42;
        auVar45[0xe] = bVar43;
        auVar45[0xf] = bVar44;
        auVar5[1] = bVar30;
        auVar5[0] = bVar29;
        auVar5[2] = bVar31;
        auVar5[3] = bVar32;
        auVar5[4] = bVar33;
        auVar5[5] = bVar34;
        auVar5[6] = bVar35;
        auVar5[7] = bVar36;
        auVar5[8] = bVar37;
        auVar5[9] = bVar38;
        auVar5[10] = bVar39;
        auVar5[0xb] = bVar40;
        auVar5[0xc] = bVar41;
        auVar5[0xd] = bVar42;
        auVar5[0xe] = bVar43;
        auVar5[0xf] = bVar44;
        auVar45 = NEON_ext(auVar45,auVar5,8,1);
        if (CONCAT17(bVar36 | auVar45[7],
                     CONCAT16(bVar35 | auVar45[6],
                              CONCAT15(bVar34 | auVar45[5],
                                       CONCAT14(bVar33 | auVar45[4],
                                                CONCAT13(bVar32 | auVar45[3],
                                                         CONCAT12(bVar31 | auVar45[2],
                                                                  CONCAT11(bVar30 | auVar45[1],
                                                                           bVar29 | auVar45[0]))))))
                    ) == 0 && *(long *)pbVar15 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar27 == 0)) {
        if (pbVar15[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar15 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar15[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar15 != 2) {
          return (byte *)0x0;
        }
      }
      lVar27 = *(long *)(pbVar15 + 0x20);
      lVar25 = *(long *)(pbVar15 + 0x18);
      bVar29 = pbVar15[8] | (byte)lVar25;
      bVar30 = pbVar15[9] | (byte)((ulong)lVar25 >> 8);
      bVar31 = pbVar15[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar32 = pbVar15[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar33 = pbVar15[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar34 = pbVar15[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar35 = pbVar15[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar36 = pbVar15[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar37 = pbVar15[0x10] | (byte)lVar27;
      bVar38 = pbVar15[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar39 = pbVar15[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar40 = pbVar15[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar41 = pbVar15[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar42 = pbVar15[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar43 = pbVar15[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar44 = pbVar15[0x17] | (byte)((ulong)lVar27 >> 0x38);
      auVar3[1] = bVar30;
      auVar3[0] = bVar29;
      auVar3[2] = bVar31;
      auVar3[3] = bVar32;
      auVar3[4] = bVar33;
      auVar3[5] = bVar34;
      auVar3[6] = bVar35;
      auVar3[7] = bVar36;
      auVar3[8] = bVar37;
      auVar3[9] = bVar38;
      auVar3[10] = bVar39;
      auVar3[0xb] = bVar40;
      auVar3[0xc] = bVar41;
      auVar3[0xd] = bVar42;
      auVar3[0xe] = bVar43;
      auVar3[0xf] = bVar44;
      auVar4[1] = bVar30;
      auVar4[0] = bVar29;
      auVar4[2] = bVar31;
      auVar4[3] = bVar32;
      auVar4[4] = bVar33;
      auVar4[5] = bVar34;
      auVar4[6] = bVar35;
      auVar4[7] = bVar36;
      auVar4[8] = bVar37;
      auVar4[9] = bVar38;
      auVar4[10] = bVar39;
      auVar4[0xb] = bVar40;
      auVar4[0xc] = bVar41;
      auVar4[0xd] = bVar42;
      auVar4[0xe] = bVar43;
      auVar4[0xf] = bVar44;
      auVar45 = NEON_ext(auVar3,auVar4,8,1);
      lVar25 = CONCAT17(bVar36 | auVar45[7],
                        CONCAT16(bVar35 | auVar45[6],
                                 CONCAT15(bVar34 | auVar45[5],
                                          CONCAT14(bVar33 | auVar45[4],
                                                   CONCAT13(bVar32 | auVar45[3],
                                                            CONCAT12(bVar31 | auVar45[2],
                                                                     CONCAT11(bVar30 | auVar45[1],
                                                                              bVar29 | auVar45[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar15[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar25 = *(long *)(pbVar15 + 8);
    uVar28 = *(ulong *)(pbVar15 + 0x10);
    lVar27 = *(long *)pbVar15;
    uVar12 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar27,uVar12);
    if (((ulong)pbVar13 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103ff8048; end: 103ff80e7;  */

void FUN_103ff8048(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046268 != -1) {
    _swift_once(0x113046268,FUN_103ff7cfc);
  }
  uVar5 = uRam00000001138129f8;
  uVar4 = uRam00000001138129f0;
  uVar3 = uRam00000001138129e8;
  uVar2 = uRam00000001138129e0;
  uVar1 = uRam00000001138129d8;
  *param_1 = uRam00000001138129d0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103ff80e8; end: 103ff80fb;  */

void FUN_103ff80e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130465c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130465c8,&UNK_10dcc0a50);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 103ff80fc; end: 103ff820f;  */

void FUN_103ff80fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = unaff_x20[1];
  uStack_58 = *unaff_x20;
  uStack_48 = unaff_x20[2];
  uStack_38 = unaff_x20[4];
  uStack_40 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_a0,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_a0,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ff8210; end: 103ff82bb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103ff8210(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong unaff_x20;
  byte *pbVar26;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong uVar27;
  long lVar28;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  
  uVar21 = *param_1;
  uVar14 = param_1[1];
  uVar23 = param_1[2];
  pbVar11 = (byte *)param_1[3];
  pbVar26 = (byte *)param_1[4];
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  lVar25 = param_2[3];
  uVar27 = param_2[4];
  func_0x000103ffdba4(uVar21,*param_2);
  if (((uVar21 & 1) == 0) ||
     ((uVar14 != uVar2 || uVar23 != uVar1 &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (uVar14,uVar23,uVar2,uVar1,0), (uVar14 & 1) == 0)))) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar6 = (uint)((ulong)pbVar26 >> 0x20);
    uVar19 = uVar6 >> 0x1e;
    uVar7 = (uint)(uVar27 >> 0x20);
    uVar22 = uVar7 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar15 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar27 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar27 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar6 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar8)();
        }
        uVar21 = (ulong)(iVar20 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar7 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar27 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar8)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar8)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar8)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar11;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar11 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar11 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar11 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar11 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar11 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar11 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar11 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar26;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar26 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar26 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar26 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar26 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar26 >> 0x28);
            pbVar15 = (byte *)((long)register0x00000008 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar10 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar8)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar15 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar8)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar15);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar15) {
                pbVar15 = unaff_x23;
              }
              pbVar15 = pbVar15 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar15 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar15 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar28 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar15 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar28,(long)pbVar15)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar8)();
            }
            pbVar11 = pbVar11 + (lVar28 - (long)pbVar15);
          }
          unaff_x23 = unaff_x24 + -lVar28;
          if (SBORROW8((long)unaff_x24,lVar28)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar8)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            pbVar15 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar15) {
              pbVar15 = unaff_x23;
            }
            pbVar15 = pbVar15 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar11,pbVar15,lVar25,
                            uVar27);
        pbVar10 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar27;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar24 = *(byte **)(pbVar10 + 0x18);
    bVar29 = pbVar10[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar16 = pbVar11;
    if (bVar29 < 3) {
      if (bVar29 == 0) {
        if (pbVar15[0x28] == 0) {
          lVar25 = *(long *)pbVar15;
          uVar12 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar25,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar29 == 1) {
        if (pbVar15[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)(pbVar15 + 8);
        pbVar18 = *(byte **)(pbVar15 + 0x10);
        lVar25 = *(long *)pbVar15;
        uVar12 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar25,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar16 = pbVar26;
        if ((pbVar11 == pbVar17) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar15[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)pbVar15;
        pbVar18 = *(byte **)(pbVar15 + 8);
        lVar25 = *(long *)(pbVar15 + 0x18);
        if ((pbVar13 == pbVar17) && (pbVar11 == pbVar18)) {
          if (((pbVar10[0x10] ^ pbVar15[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar11 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar13,pbVar16,pbVar17,pbVar18,0);
      return pbVar13;
    }
    lVar28 = *(long *)(pbVar10 + 0x20);
    if (bVar29 < 5) {
      if (bVar29 != 3) {
        if (pbVar15[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)pbVar15;
        pbVar18 = *(byte **)(pbVar15 + 8);
        if (((pbVar13 == pbVar17) && (pbVar11 == pbVar18)) &&
           (pbVar13 = pbVar26, pbVar16 = pbVar24, pbVar17 = *(byte **)(pbVar15 + 0x10),
           pbVar18 = *(byte **)(pbVar15 + 0x18),
           pbVar26 == *(byte **)(pbVar15 + 0x10) && pbVar24 == *(byte **)(pbVar15 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar15[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar18 = *(byte **)(pbVar15 + 0x10);
      lVar25 = *(long *)(pbVar15 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar17 = *(byte **)(pbVar15 + 8);
        pbVar13 = pbVar11;
        pbVar16 = pbVar26;
        if ((pbVar11 != pbVar17) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar28 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar15 + 0x18)) && (lVar28 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar28,*(byte **)(pbVar15 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar29 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
          lVar28 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar15[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar28 = *(long *)(pbVar15 + 0x20);
        lVar25 = *(long *)(pbVar15 + 0x18);
        bVar29 = pbVar15[8] | (byte)lVar25;
        bVar30 = pbVar15[9] | (byte)((ulong)lVar25 >> 8);
        bVar31 = pbVar15[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar32 = pbVar15[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar33 = pbVar15[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar34 = pbVar15[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar35 = pbVar15[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar36 = pbVar15[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar37 = pbVar15[0x10] | (byte)lVar28;
        bVar38 = pbVar15[0x11] | (byte)((ulong)lVar28 >> 8);
        bVar39 = pbVar15[0x12] | (byte)((ulong)lVar28 >> 0x10);
        bVar40 = pbVar15[0x13] | (byte)((ulong)lVar28 >> 0x18);
        bVar41 = pbVar15[0x14] | (byte)((ulong)lVar28 >> 0x20);
        bVar42 = pbVar15[0x15] | (byte)((ulong)lVar28 >> 0x28);
        bVar43 = pbVar15[0x16] | (byte)((ulong)lVar28 >> 0x30);
        bVar44 = pbVar15[0x17] | (byte)((ulong)lVar28 >> 0x38);
        auVar45[1] = bVar30;
        auVar45[0] = bVar29;
        auVar45[2] = bVar31;
        auVar45[3] = bVar32;
        auVar45[4] = bVar33;
        auVar45[5] = bVar34;
        auVar45[6] = bVar35;
        auVar45[7] = bVar36;
        auVar45[8] = bVar37;
        auVar45[9] = bVar38;
        auVar45[10] = bVar39;
        auVar45[0xb] = bVar40;
        auVar45[0xc] = bVar41;
        auVar45[0xd] = bVar42;
        auVar45[0xe] = bVar43;
        auVar45[0xf] = bVar44;
        auVar5[1] = bVar30;
        auVar5[0] = bVar29;
        auVar5[2] = bVar31;
        auVar5[3] = bVar32;
        auVar5[4] = bVar33;
        auVar5[5] = bVar34;
        auVar5[6] = bVar35;
        auVar5[7] = bVar36;
        auVar5[8] = bVar37;
        auVar5[9] = bVar38;
        auVar5[10] = bVar39;
        auVar5[0xb] = bVar40;
        auVar5[0xc] = bVar41;
        auVar5[0xd] = bVar42;
        auVar5[0xe] = bVar43;
        auVar5[0xf] = bVar44;
        auVar45 = NEON_ext(auVar45,auVar5,8,1);
        if (CONCAT17(bVar36 | auVar45[7],
                     CONCAT16(bVar35 | auVar45[6],
                              CONCAT15(bVar34 | auVar45[5],
                                       CONCAT14(bVar33 | auVar45[4],
                                                CONCAT13(bVar32 | auVar45[3],
                                                         CONCAT12(bVar31 | auVar45[2],
                                                                  CONCAT11(bVar30 | auVar45[1],
                                                                           bVar29 | auVar45[0]))))))
                    ) == 0 && *(long *)pbVar15 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar28 == 0)) {
        if (pbVar15[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar15 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar15[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar15 != 2) {
          return (byte *)0x0;
        }
      }
      lVar28 = *(long *)(pbVar15 + 0x20);
      lVar25 = *(long *)(pbVar15 + 0x18);
      bVar29 = pbVar15[8] | (byte)lVar25;
      bVar30 = pbVar15[9] | (byte)((ulong)lVar25 >> 8);
      bVar31 = pbVar15[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar32 = pbVar15[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar33 = pbVar15[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar34 = pbVar15[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar35 = pbVar15[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar36 = pbVar15[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar37 = pbVar15[0x10] | (byte)lVar28;
      bVar38 = pbVar15[0x11] | (byte)((ulong)lVar28 >> 8);
      bVar39 = pbVar15[0x12] | (byte)((ulong)lVar28 >> 0x10);
      bVar40 = pbVar15[0x13] | (byte)((ulong)lVar28 >> 0x18);
      bVar41 = pbVar15[0x14] | (byte)((ulong)lVar28 >> 0x20);
      bVar42 = pbVar15[0x15] | (byte)((ulong)lVar28 >> 0x28);
      bVar43 = pbVar15[0x16] | (byte)((ulong)lVar28 >> 0x30);
      bVar44 = pbVar15[0x17] | (byte)((ulong)lVar28 >> 0x38);
      auVar3[1] = bVar30;
      auVar3[0] = bVar29;
      auVar3[2] = bVar31;
      auVar3[3] = bVar32;
      auVar3[4] = bVar33;
      auVar3[5] = bVar34;
      auVar3[6] = bVar35;
      auVar3[7] = bVar36;
      auVar3[8] = bVar37;
      auVar3[9] = bVar38;
      auVar3[10] = bVar39;
      auVar3[0xb] = bVar40;
      auVar3[0xc] = bVar41;
      auVar3[0xd] = bVar42;
      auVar3[0xe] = bVar43;
      auVar3[0xf] = bVar44;
      auVar4[1] = bVar30;
      auVar4[0] = bVar29;
      auVar4[2] = bVar31;
      auVar4[3] = bVar32;
      auVar4[4] = bVar33;
      auVar4[5] = bVar34;
      auVar4[6] = bVar35;
      auVar4[7] = bVar36;
      auVar4[8] = bVar37;
      auVar4[9] = bVar38;
      auVar4[10] = bVar39;
      auVar4[0xb] = bVar40;
      auVar4[0xc] = bVar41;
      auVar4[0xd] = bVar42;
      auVar4[0xe] = bVar43;
      auVar4[0xf] = bVar44;
      auVar45 = NEON_ext(auVar3,auVar4,8,1);
      lVar25 = CONCAT17(bVar36 | auVar45[7],
                        CONCAT16(bVar35 | auVar45[6],
                                 CONCAT15(bVar34 | auVar45[5],
                                          CONCAT14(bVar33 | auVar45[4],
                                                   CONCAT13(bVar32 | auVar45[3],
                                                            CONCAT12(bVar31 | auVar45[2],
                                                                     CONCAT11(bVar30 | auVar45[1],
                                                                              bVar29 | auVar45[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar15[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar25 = *(long *)(pbVar15 + 8);
    uVar27 = *(ulong *)(pbVar15 + 0x10);
    lVar28 = *(long *)pbVar15;
    uVar12 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar28,uVar12);
    if (((ulong)pbVar13 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103ff82bc; end: 103ff8303;  */

void FUN_103ff82bc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc0dd0,0x66,2);
  uRam0000000113812a08 = uStack_38;
  uRam0000000113812a00 = uStack_40;
  uRam0000000113812a18 = uStack_28;
  uRam0000000113812a10 = uStack_30;
  uRam0000000113812a28 = uStack_18;
  uRam0000000113812a20 = uStack_20;
  return;
}



/* Entry: 103ff8304; end: 103ff845f;  */

/* WARNING: Removing unreachable block (ram,0x000103ff83d0) */
/* WARNING: Removing unreachable block (ram,0x000103ff8424) */
/* WARNING: Removing unreachable block (ram,0x000103ff8440) */
/* WARNING: Removing unreachable block (ram,0x000103ff845c) */

void FUN_103ff8304(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000103ffec84();
          (*pcVar3)();
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x10;
LAB_103ff8430:
          (*pcVar3)(lVar1,param_2,param_3);
        }
        else if (lVar1 == 3) {
          FUN_103ff8460();
        }
      }
      else if (lVar1 == 4) {
        FUN_103ff85d8();
      }
      else if (lVar1 == 5) {
        FUN_103ff87bc();
      }
      else if (lVar1 == 6) {
        pcVar3 = *(code **)(param_3 + 0x150);
        lVar1 = unaff_x20 + 0x50;
        goto LAB_103ff8430;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103ff8460; end: 103ff85d7;  */

/* WARNING: Removing unreachable block (ram,0x000103ff8598) */

void FUN_103ff8460(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x21;
  code *pcVar11;
  long lVar12;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = 0;
  lStack_78 = 0;
  uStack_70 = 0;
  uVar1 = *(ulong *)(param_1 + 0x48) & 0x3000000000000000;
  lVar10 = param_1;
  if (uVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    lVar12 = *(long *)(param_1 + 0x20);
    FUN_103ffe8dc(lVar12,uVar2,uVar6,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40)
                 );
    lVar10 = 0;
    FUN_104004164(0,0,0);
    lStack_78 = lVar12;
    uStack_70 = uVar2;
    uStack_68 = uVar6;
  }
  pcVar11 = *(code **)(param_4 + 0x198);
  FUN_10400076c();
  (*pcVar11)(&lStack_78,&UNK_1107333d8,lVar10,param_3,param_4);
  uVar6 = uStack_68;
  uVar2 = uStack_70;
  lVar10 = lStack_78;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if (uVar1 == 0x3000000000000000) {
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(uVar2,uVar6);
    }
    else {
      pcVar11 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(uVar2,uVar6);
      (*pcVar11)(param_3,param_4);
    }
    FUN_104004164(lStack_78,uStack_70,uStack_68);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x20) = lVar10;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    func_0x000100db10b0(uVar3,uVar7,uVar4,uVar8,uVar5,uVar9);
  }
  else {
    FUN_104004164(lStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 103ff85d8; end: 103ff87bb;  */

/* WARNING: Removing unreachable block (ram,0x000103ff8734) */

void FUN_103ff85d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x21;
  code *pcVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0xf000000000000000;
  uVar14 = *(ulong *)(param_1 + 0x48) & 0x3000000000000000;
  lVar11 = param_1;
  if (uVar14 == 0x1000000000000000) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(ulong *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    FUN_103ffe8dc(uVar13,uVar2,uVar7,uVar1,uVar6);
    lVar11 = 0;
    func_0x000104004198(0,0,0,0,0xf000000000000000);
    uStack_90 = uVar13;
    uStack_88 = uVar2;
    uStack_80 = uVar7;
    uStack_78 = uVar1;
    uStack_70 = uVar6;
  }
  pcVar12 = *(code **)(param_4 + 0x198);
  FUN_104000868();
  (*pcVar12)(&uStack_90,&UNK_110733458,lVar11,param_3,param_4);
  uVar6 = uStack_70;
  uVar13 = uStack_78;
  uVar7 = uStack_80;
  uVar2 = uStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (uStack_70 >> 0x3c < 0xf)) {
    if (uVar14 == 0x3000000000000000) {
      func_0x00010174c278();
      func_0x00010006c00c(uVar13,uVar6);
    }
    else {
      pcVar12 = *(code **)(param_4 + 8);
      func_0x00010174c278();
      func_0x00010006c00c(uVar13,uVar6);
      (*pcVar12)(param_3,param_4);
    }
    func_0x000104004198(uStack_90,uStack_88,uStack_80,uStack_78,uStack_70);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    *(undefined8 *)(param_1 + 0x38) = uVar13;
    *(ulong *)(param_1 + 0x40) = uVar6;
    *(undefined8 *)(param_1 + 0x48) = 0x1000000000000000;
    func_0x000100db10b0(uVar3,uVar8,uVar4,uVar9,uVar5,uVar10);
  }
  else {
    func_0x000104004198(uStack_90,uStack_88,uStack_80,uStack_78,uStack_70);
  }
  return;
}



/* Entry: 103ff87bc; end: 103ff89b3;  */

/* WARNING: Removing unreachable block (ram,0x000103ff8954) */

void FUN_103ff87bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x21;
  code *pcVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uVar12 = *(ulong *)(param_1 + 0x48);
  uVar15 = uVar12 & 0x3000000000000000;
  lVar11 = param_1;
  if (uVar15 == 0x2000000000000000) {
    uVar1 = *(ulong *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    FUN_103ffe8dc(uVar14,lVar2,uVar7,uVar1,uVar6);
    lVar11 = 0;
    func_0x0001040041d4(0,0,0,0,0,0);
    uStack_78 = uVar1 & 0xff;
    uStack_90 = uVar14;
    lStack_88 = lVar2;
    uStack_80 = uVar7;
    uStack_70 = uVar6;
    uStack_68 = uVar12 & 0xcfffffffffffffff;
  }
  pcVar13 = *(code **)(param_4 + 0x198);
  FUN_104000964();
  (*pcVar13)(&uStack_90,&UNK_110733568,lVar11,param_3,param_4);
  uVar1 = uStack_68;
  uVar14 = uStack_70;
  uVar12 = uStack_78;
  uVar7 = uStack_80;
  lVar11 = lStack_88;
  uVar6 = uStack_90;
  if ((unaff_x21 == 0) && (lStack_88 != 0)) {
    if (uVar15 == 0x3000000000000000) {
      _swift_bridgeObjectRetain(lStack_88);
      func_0x00010006c00c(uVar14,uVar1);
    }
    else {
      pcVar13 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(lStack_88);
      func_0x00010006c00c(uVar14,uVar1);
      (*pcVar13)(param_3,param_4);
    }
    func_0x0001040041d4(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    *(long *)(param_1 + 0x28) = lVar11;
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    *(ulong *)(param_1 + 0x38) = uVar12 & 0xff;
    *(undefined8 *)(param_1 + 0x40) = uVar14;
    *(ulong *)(param_1 + 0x48) = uVar1 | 0x2000000000000000;
    func_0x000100db10b0(uVar3,uVar8,uVar4,uVar9,uVar5,uVar10);
  }
  else {
    func_0x0001040041d4(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 103ff89b4; end: 103ff8b03;  */

void FUN_103ff89b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar5;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar5 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_50 = *unaff_x20;
    func_0x000103ffec84();
    (*pcVar5)(&lStack_50,1,&UNK_110732e80,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
    if (((unaff_x20[9] ^ 0xffffffffffffffffU) & 0x3000000000000000) != 0) {
      uVar4 = (uint)((ulong)unaff_x20[9] >> 0x3c) & 3;
      if (uVar4 == 0) {
        FUN_103ff8b04();
      }
      else if (uVar4 == 1) {
        FUN_103ff8b90();
      }
      else {
        FUN_103ff8c24();
      }
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar2 = unaff_x20[0xb];
    uVar1 = unaff_x20[10] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[10],uVar2,6,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[0xc],unaff_x20[0xd],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103ff8b04; end: 103ff8b8f;  */

void FUN_103ff8b04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((*(byte *)(param_1 + 0x4f) & 0x30) == 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10400076c();
    (*pcVar1)(&uStack_60,3,&UNK_1107333d8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff8b90);
  (*pcVar1)();
}



/* Entry: 103ff8b90; end: 103ff8c23;  */

void FUN_103ff8b90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((*(ulong *)(param_1 + 0x48) & 0x3000000000000000) == 0x1000000000000000) {
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    uStack_68 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_104000868();
    (*pcVar1)(&uStack_70,4,&UNK_110733458,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff8c24);
  (*pcVar1)();
}



/* Entry: 103ff8c24; end: 103ff8cbb;  */

void FUN_103ff8c24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  if ((*(ulong *)(param_1 + 0x48) & 0x3000000000000000) == 0x2000000000000000) {
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    uStack_48 = *(ulong *)(param_1 + 0x48) & 0xcfffffffffffffff;
    uStack_68 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_104000964();
    (*pcVar1)(&uStack_70,5,&UNK_110733568,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ff8cbc);
  (*pcVar1)();
}



/* Entry: 103ff8cbc; end: 103ff8d33;  */

void FUN_103ff8cbc(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = 0x3000000000000000;
  param_1[0xb] = 0xe000000000000000;
  param_1[0xd] = 0xc000000000000000;
  param_1[0xc] = 0;
  return;
}



/* Entry: 103ff8d34; end: 103ff8d47;  */

void FUN_103ff8d34(void)

{
  FUN_103ff8304();
  return;
}



/* Entry: 103ff8d48; end: 103ff8d8f;  */

void FUN_103ff8d48(void)

{
  FUN_103ff89b4();
  return;
}



/* Entry: 103ff8d90; end: 103ff8dc7;  */

uint FUN_103ff8d90(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000104004064();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103ff8dc8; end: 103ff8e2f;  */

uint FUN_103ff8dc8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_18 = param_1[0xd];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  FUN_103ffecc4(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103ff8e30; end: 103ff8ecf;  */

void FUN_103ff8e30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046280 != -1) {
    _swift_once(0x113046280,FUN_103ff82bc);
  }
  uVar5 = uRam0000000113812a28;
  uVar4 = uRam0000000113812a20;
  uVar3 = uRam0000000113812a18;
  uVar2 = uRam0000000113812a10;
  uVar1 = uRam0000000113812a08;
  *param_1 = uRam0000000113812a00;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103ff8ed0; end: 103ff8ee3;  */

void FUN_103ff8ed0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130465b8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130465b8,&UNK_10dcc0a48);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 103ff8ee4; end: 103ff900f;  */

void FUN_103ff8ee4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(auStack_e8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_e8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ff9010; end: 103ff90bb;  */

uint FUN_103ff9010(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_103ffecc4(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103ff90bc; end: 103ff91c3;  */

/* WARNING: Removing unreachable block (ram,0x000103ff91c0) */

void FUN_103ff90bc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        (**(code **)(param_3 + 0x150))(unaff_x20 + 8,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_104000574();
        }
        else {
          if (lVar1 != 1) goto LAB_103ff9144;
          pcVar4 = *(code **)(param_3 + 400);
          FUN_103ffec04();
        }
        (*pcVar4)();
      }
LAB_103ff9144:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103ff91c4; end: 103ff929f;  */

void FUN_103ff91c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *unaff_x20;
  if (*(long *)(lVar4 + 0x10) != 0) {
    pcVar5 = *(code **)(param_3 + 400);
    uVar3 = param_1;
    FUN_103ffec04();
    (*pcVar5)(lVar4,1,&UNK_110733e90,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_103ff92a0();
  if (unaff_x21 == 0) {
    uVar2 = unaff_x20[2];
    uVar1 = unaff_x20[1] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[1],uVar2,3,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 103ff92a0; end: 103ff934b;  */

void FUN_103ff92a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_60 = *(ulong *)(param_1 + 0x88);
  if ((uStack_60 & 0xff) != 0xfe) {
    uStack_98 = *(undefined8 *)(param_1 + 0x50);
    uStack_a0 = *(undefined8 *)(param_1 + 0x48);
    uStack_88 = *(undefined8 *)(param_1 + 0x60);
    uStack_90 = *(undefined8 *)(param_1 + 0x58);
    uStack_78 = *(undefined8 *)(param_1 + 0x70);
    uStack_80 = *(undefined8 *)(param_1 + 0x68);
    uStack_68 = *(undefined8 *)(param_1 + 0x80);
    uStack_70 = *(undefined8 *)(param_1 + 0x78);
    uStack_b8 = *(undefined8 *)(param_1 + 0x30);
    uStack_c0 = *(undefined8 *)(param_1 + 0x28);
    uStack_a8 = *(undefined8 *)(param_1 + 0x40);
    uStack_b0 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x98);
    uStack_58 = *(undefined8 *)(param_1 + 0x90);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_104000574();
    (*pcVar1)(&uStack_c0,2,&UNK_110733248,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103ff934c; end: 103ff93bb;  */

void FUN_103ff934c(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = 0;
  param_1[2] = 0xe000000000000000;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0xfe;
  return;
}



/* Entry: 103ff93bc; end: 103ff93eb;  */

undefined1  [16] FUN_103ff93bc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 103ff93ec; end: 103ff941f;  */

void FUN_103ff93ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 103ff9420; end: 103ff9433;  */

undefined1  [16] FUN_103ff9420(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x103ff9430;
  return auVar1;
}



/* Entry: 103ff9434; end: 103ff9447;  */

void FUN_103ff9434(void)

{
  FUN_103ff90bc();
  return;
}



/* Entry: 103ff9448; end: 103ff9497;  */

void FUN_103ff9448(void)

{
  FUN_103ff91c4();
  return;
}



/* Entry: 103ff9498; end: 103ff949b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103ff9498(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103ff949c; end: 103ff94d3;  */

uint FUN_103ff949c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000104004024();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103ff94d4; end: 103ff9553;  */

uint FUN_103ff94d4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  uStack_38 = param_1[0x11];
  uStack_40 = param_1[0x10];
  uStack_28 = param_1[0x13];
  uStack_30 = param_1[0x12];
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_f8 = unaff_x20[0xd];
  uStack_100 = unaff_x20[0xc];
  uStack_e8 = unaff_x20[0xf];
  uStack_f0 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[0x11];
  uStack_e0 = unaff_x20[0x10];
  uStack_c8 = unaff_x20[0x13];
  uStack_d0 = unaff_x20[0x12];
  uStack_138 = unaff_x20[5];
  uStack_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_118 = unaff_x20[9];
  uStack_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  uStack_158 = unaff_x20[1];
  uStack_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  FUN_103fff200(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 103ff9554; end: 103ff95f3;  */

void FUN_103ff9554(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046298 != -1) {
    _swift_once(0x113046298,0x103ff9074);
  }
  uVar5 = uRam0000000113812a58;
  uVar4 = uRam0000000113812a50;
  uVar3 = uRam0000000113812a48;
  uVar2 = uRam0000000113812a40;
  uVar1 = uRam0000000113812a38;
  *param_1 = uRam0000000113812a30;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103ff95f4; end: 103ff962f;  */

void FUN_103ff95f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130465a8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130465a8,&UNK_10dcc0a40);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 103ff9630; end: 103ff976b;  */

void FUN_103ff9630(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
  uStack_38 = unaff_x20[0x13];
  uStack_40 = unaff_x20[0x12];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_118,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_118,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}


