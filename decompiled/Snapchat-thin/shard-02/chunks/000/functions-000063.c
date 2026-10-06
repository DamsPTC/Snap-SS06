/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101873220; end: 1018733ab;  */

long FUN_101873220(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar1 + 0x10))();
  lVar1 = *(long *)(lVar1 + 0x40) + 7;
  *(undefined8 *)(lVar1 + param_1 & 0xffffffffffffff8) =
       *(undefined8 *)(lVar1 + param_2 & 0xffffffffffffff8);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1018733ac; end: 10187349f;  */

uint * FUN_1018733ac(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 8;
    uVar1 = uVar7 & 0xfffffff8;
    uVar6 = (uint)uVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar1 == 0) {
      uVar4 = (param_2 - uVar2) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_10187343c;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_10187343c:
        uVar9 = uVar9 - 1;
        if (uVar1 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar2 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_10187343c;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000101873478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xffffffffffffff8);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Entry: 1018734a0; end: 1018735fb;  */

void FUN_1018734a0(int *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  lVar7 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar8 = *(long *)(lVar7 + 0x40);
  lVar1 = (lVar8 + 7U & 0xfffffffffffffff8) + 8;
  uVar9 = 2;
  uVar4 = uVar9;
  if ((int)lVar1 == 0) {
    uVar4 = (param_3 - uVar2) + 1;
  }
  if (0xffff < uVar4) {
    uVar9 = 4;
  }
  if (uVar4 < 0x100) {
    uVar9 = 1;
  }
  uVar3 = 0;
  if (1 < uVar4) {
    uVar3 = uVar9;
  }
  uVar9 = 0;
  if (uVar2 < param_3) {
    uVar9 = uVar3;
  }
  iVar6 = param_2 - uVar2;
  if (param_2 < uVar2 || iVar6 == 0) {
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar9 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001018735b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))();
        return;
      }
      if ((int)param_2 < 0) {
        param_2 = param_2 & 0x7fffffff;
      }
      else {
        param_2 = param_2 - 1;
      }
      *(ulong *)((long)param_1 + lVar8 + 7 & 0xfffffffffffffff8) = (ulong)param_2;
    }
  }
  else {
    if ((int)lVar1 != 0) {
      iVar6 = 1;
      func_0x000107c60ee4(param_1,lVar1);
      *param_1 = param_2 + ~uVar2;
    }
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar6;
      }
    }
    else if (uVar9 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar6;
    }
  }
  return;
}



/* Entry: 1018735fc; end: 10187361b;  */

void FUN_1018735fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e654d30);
  return;
}



/* Entry: 10187361c; end: 1018736c7;  */

void FUN_10187361c(void)

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



/* Entry: 1018736c8; end: 1018736cb;  */

void FUN_1018736c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98e960;
  func_0x000107c61520(&UNK_10d98e960,&UNK_110409c88);
  puRam0000000112dcc398 = puVar1;
  return;
}



/* Entry: 1018736cc; end: 10187370b;  */

void FUN_1018736cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98e960;
  func_0x000107c61520(&UNK_10d98e960,&UNK_110409c88);
  puRam0000000112dcc398 = puVar1;
  return;
}



/* Entry: 10187370c; end: 10187386f;  */

int FUN_10187370c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101873788;
        goto LAB_10187376c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10187376c:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_101873788:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101873870; end: 101873a0f;  */

undefined1
FUN_101873870(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4,long param_5)

{
  undefined1 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  
  pcVar3 = "_binding_collection_track_info";
  uVar4 = 0xd000000000000033;
  if (param_3 != 5) {
    pcVar3 = "unarchiver_init_threw";
    uVar4 = 0xd00000000000002e;
  }
  pcVar2 = "_binding_web_view_track_info";
  uVar5 = 0xd00000000000002f;
  if (param_3 != 3) {
    pcVar2 = "neration_track_info";
    uVar5 = 0xd00000000000002c;
  }
  if (param_3 < 5) {
    pcVar3 = pcVar2;
    uVar4 = uVar5;
  }
  uVar5 = 0xd000000000000025;
  pcVar2 = "ads_ios_ad_track_binding_deep_link_track_info";
  if (param_3 != 1) {
    uVar5 = 0xd00000000000002d;
    pcVar2 = "ads_ios_ad_track_binding_app_install_track_info";
  }
  uVar6 = 0xd00000000000002a;
  pcVar7 = "ads_ios_ad_track_binding_view_context";
  if (param_3 != 0) {
    uVar6 = uVar5;
    pcVar7 = pcVar2;
  }
  if (param_3 < 3) {
    pcVar3 = pcVar7 + 0x10;
    uVar4 = uVar6;
  }
  func_0x000107c5fb78(uVar4,(ulong)pcVar3 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar3 | 0x8000000000000000);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x65646f6d5f,0xe500000000000000);
  lVar8 = 0;
  func_0x000107c614f0(param_4);
  (**(code **)(param_5 + 0x10))(0,0xe000000000000000,0,param_4,param_5);
  func_0x000107c6142c(0xe000000000000000);
  uVar1 = 2;
  if (lVar8 != 2) {
    uVar1 = lVar8 == 1;
  }
  return uVar1;
}



/* Entry: 101873a10; end: 101873a6b;  */

bool FUN_101873a10(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_2[2];
  if ((uVar3 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar3 & 1) == 0))
  {
    return false;
  }
  return (char)uVar1 == (char)uVar2;
}



/* Entry: 101873a6c; end: 101873a73;  */

void FUN_101873a6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101873a74; end: 101873aa7;  */

undefined8 * FUN_101873a74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101873aa8; end: 101873afb;  */

undefined8 * FUN_101873aa8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 101873afc; end: 101873b37;  */

undefined8 * FUN_101873afc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 101873b38; end: 101873bd7;  */

int FUN_101873b38(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101873bd8; end: 101873c07;  */

void FUN_101873bd8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101873c08; end: 101873c13;  */

void FUN_101873c08(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101873c14; end: 101873fe7;  */

/* WARNING: Possible PIC construction at 0x000101873cb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101873cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101873cf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101873d18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101873d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101873e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101873da0) */
/* WARNING: Removing unreachable block (ram,0x000101873de4) */
/* WARNING: Removing unreachable block (ram,0x000101873dc8) */
/* WARNING: Removing unreachable block (ram,0x000101873de0) */
/* WARNING: Removing unreachable block (ram,0x000101873e24) */
/* WARNING: Removing unreachable block (ram,0x000101873d1c) */
/* WARNING: Removing unreachable block (ram,0x000101873d54) */
/* WARNING: Removing unreachable block (ram,0x000101873cfc) */
/* WARNING: Removing unreachable block (ram,0x000101873cd8) */
/* WARNING: Removing unreachable block (ram,0x000101873cb4) */
/* WARNING: Removing unreachable block (ram,0x000101873e58) */

void FUN_101873c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((lVar2 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    puVar1 = PTR_PTR_1126a7c48;
    func_0x000107c610f8(PTR_PTR_1126a7c48);
    func_0x000107c615f0(lVar2);
    func_0x000107c453e4(puVar1);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c522e4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 101873fe8; end: 10187400b;  */

void FUN_101873fe8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10187400c; end: 10187405b;  */

void FUN_10187400c(void)

{
  FUN_101873c14();
  return;
}



/* Entry: 10187405c; end: 101874113;  */

void FUN_10187405c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101874114();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101874114; end: 101874237;  */

undefined * FUN_101874114(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101874238);
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
    puVar3 = param_1;
    FUN_1018766c8();
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
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000101874078(0);
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



/* Entry: 101874238; end: 10187445b;  */

undefined * FUN_101874238(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101874354);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112dcc448;
    func_0x0001000285a8(0x112dcc448,&UNK_10d98f8d0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11040a888);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10187445c; end: 101874507;  */

void FUN_10187445c(void)

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



/* Entry: 101874508; end: 10187450b;  */

void FUN_101874508(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98eae0;
  func_0x000107c61520(&UNK_10d98eae0,&UNK_110409e00);
  puRam0000000112dcc450 = puVar1;
  return;
}



/* Entry: 10187450c; end: 10187454b;  */

void FUN_10187450c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98eae0;
  func_0x000107c61520(&UNK_10d98eae0,&UNK_110409e00);
  puRam0000000112dcc450 = puVar1;
  return;
}



/* Entry: 10187454c; end: 1018746c3;  */

bool FUN_10187454c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1018746c4; end: 101874c7f;  */

void FUN_1018746c4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  code *pcVar14;
  long unaff_x20;
  ulong uVar15;
  long lVar16;
  double dVar17;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a0;
  undefined1 auStack_180 [32];
  undefined8 uStack_160;
  undefined8 uStack_158;
  double dStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_fe;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_86;
  
  lVar16 = *(long *)(param_2 + 0x10);
  uStack_1b8 = param_3;
  if (lVar16 == 0) {
    puStack_1b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_1a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    param_2 = param_2 + 0x20;
    uStack_1c8 = 0x800000010efbbfb0;
    uStack_1c0 = 0x800000010efbbf70;
    uStack_1d0 = 0x800000010efbbfd0;
    puStack_1b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_1a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      func_0x00010178e580(param_2,&uStack_e8);
      lVar9 = lStack_d0;
      dVar17 = dStack_d8;
      uVar5 = uStack_e0;
      uVar13 = uStack_e8;
      uStack_138 = uStack_c0;
      lStack_140 = lStack_c8;
      lVar6 = lStack_140;
      uStack_128 = uStack_b0;
      uStack_130 = uStack_b8;
      uStack_118 = uStack_a0;
      uStack_120 = uStack_a8;
      uStack_110 = uStack_98;
      uStack_fe = uStack_86;
      uStack_158 = uStack_e0;
      uStack_160 = uStack_e8;
      lStack_148 = lStack_d0;
      dStack_150 = dStack_d8;
      lStack_140._0_1_ = (char)lStack_c8;
      param_1 = dStack_d8;
      lStack_140 = lVar6;
      if ((char)lStack_140 == '\0') {
        uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
        lVar6 = *(long *)(unaff_x20 + 0x20);
        func_0x0001000a8868(unaff_x20,uVar5);
        uVar8 = uStack_158;
        uVar7 = uStack_160;
        uVar2 = SUB84(dVar17,0) & 0xff;
        uVar13 = 0xd000000000000011;
        puVar11 = &uStack_1c0;
        if (uVar2 == 2) {
          uVar13 = 0xd000000000000012;
          puVar11 = &uStack_1c8;
        }
        bVar10 = ((ulong)dVar17 & 0xff) != 0;
        uVar4 = 0x6f697469646e6f63;
        if (bVar10) {
          uVar4 = 0xd000000000000014;
        }
        uVar3 = 0xef65736c61665f6e;
        if (bVar10) {
          uVar3 = uStack_1d0;
        }
        if (uVar2 == 1 || ((ulong)dVar17 & 0xff) == 0) {
          uVar13 = uVar4;
        }
        uVar4 = *puVar11;
        if (uVar2 == 1 || ((ulong)dVar17 & 0xff) == 0) {
          uVar4 = uVar3;
        }
        (**(code **)(lVar6 + 0x18))(param_5,param_6,uStack_160,uStack_158,uVar13,uVar4,uVar5,lVar6);
        func_0x000107c6142c(uVar4);
        uVar15 = (ulong)uStack_fe._6_1_;
        if (uStack_fe._6_1_ == 2) {
          FUN_101875058(auStack_180,&uStack_138);
          uVar15 = 0;
          FUN_1018755c4();
          func_0x000101875b64(auStack_180,0x112d387f8,&UNK_10d902650);
        }
        if (((((ulong)dVar17 & 0xff) == 1) && ((uVar15 & 1) != 0)) &&
           ((uStack_fe & 0x100000000000000) == 0)) {
          uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
          lVar6 = *(long *)(unaff_x20 + 0x20);
          func_0x0001000a8868(unaff_x20,uVar13);
          (**(code **)(lVar6 + 0x18))
                    (param_5,param_6,uVar7,uVar8,0xd00000000000001f,0x800000010efbbf90,uVar13,lVar6)
          ;
        }
      }
      else if ((char)lStack_140 == '\x01') {
        FUN_101874c80(dStack_d8,lStack_d0,1);
        func_0x000107c61434(uVar5);
        puVar12 = puStack_1a0;
        func_0x000107c61558();
        if (((ulong)puVar12 & 1) == 0) {
          plVar1 = (long *)(puStack_1a0 + 0x10);
          puStack_1a0 = (undefined *)0x0;
          func_0x000101872170(0,*plVar1 + 1,1);
        }
        uVar15 = *(ulong *)(puStack_1a0 + 0x10);
        if (*(ulong *)(puStack_1a0 + 0x18) >> 1 <= uVar15) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puStack_1a0 + 0x18));
          func_0x000101872170(puVar12,uVar15 + 1,1,puStack_1a0);
          puStack_1a0 = puVar12;
        }
        *(ulong *)(puStack_1a0 + 0x10) = uVar15 + 1;
        *(undefined8 *)(puStack_1a0 + uVar15 * 0x20 + 0x20) = uVar13;
        *(undefined8 *)(puStack_1a0 + uVar15 * 0x20 + 0x28) = uVar5;
        *(double *)(puStack_1a0 + uVar15 * 0x20 + 0x30) = dVar17;
        *(long *)(puStack_1a0 + uVar15 * 0x20 + 0x38) = lVar9;
      }
      else {
        puVar11 = &uStack_160;
        FUN_101874c98(puVar11,param_5,param_6);
        uVar5 = uStack_158;
        uVar13 = uStack_160;
        if (((uint)puVar11 & 0xff) != 3) {
          func_0x000107c61434(uStack_158);
          puVar12 = puStack_1b0;
          func_0x000107c61558();
          if (((ulong)puVar12 & 1) == 0) {
            puVar12 = (undefined *)0x0;
            FUN_1018722a0(0,*(long *)(puStack_1b0 + 0x10) + 1,1);
            puStack_1b0 = puVar12;
          }
          uVar15 = *(ulong *)(puStack_1b0 + 0x10);
          if (*(ulong *)(puStack_1b0 + 0x18) >> 1 <= uVar15) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puStack_1b0 + 0x18));
            FUN_1018722a0(puVar12,uVar15 + 1,1,puStack_1b0);
            puStack_1b0 = puVar12;
          }
          *(ulong *)(puStack_1b0 + 0x10) = uVar15 + 1;
          *(undefined8 *)(puStack_1b0 + uVar15 * 0x18 + 0x20) = uVar13;
          *(undefined8 *)(puStack_1b0 + uVar15 * 0x18 + 0x28) = uVar5;
          puStack_1b0[uVar15 * 0x18 + 0x30] = (char)puVar11;
        }
      }
      func_0x00010178e5bc(&uStack_160);
      param_2 = param_2 + 0x70;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  if ((*(long *)(puStack_1b0 + 0x10) == 0) && (*(long *)(puStack_1a0 + 0x10) == 0)) {
    func_0x000107c6142c(puStack_1a0);
    puStack_1a0 = puStack_1b0;
  }
  else {
    FUN_101875b1c(unaff_x20 + 0x28,&uStack_160,0x112dcc458,&UNK_10d98eb40);
    if (lStack_148 == 0) {
      func_0x000107c6142c(puStack_1b0);
      func_0x000101875b64(&uStack_160,0x112dcc458,&UNK_10d98eb40);
    }
    else {
      func_0x000100cbd414(&uStack_160,&uStack_e8);
      lVar16 = *(long *)(puStack_1a0 + 0x10);
      if (lVar16 != 0) {
        puVar11 = (undefined8 *)(puStack_1a0 + 0x38);
        do {
          lVar9 = lStack_c8;
          lVar6 = lStack_d0;
          uVar13 = puVar11[-3];
          uVar7 = puVar11[-2];
          uVar5 = puVar11[-1];
          uVar8 = *puVar11;
          func_0x0001000a8868(&uStack_e8,lStack_d0);
          pcVar14 = *(code **)(lVar9 + 0x10);
          func_0x000107c61434(uVar7);
          func_0x000107c61434(uVar8);
          (*pcVar14)(uVar13,uVar7,uVar5,uVar8,uStack_1b8,param_4,param_5,param_6,lVar6,lVar9);
          func_0x000107c6142c(uVar8);
          func_0x000107c6142c(uVar7);
          puVar11 = puVar11 + 4;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      if (((*(long *)(puStack_1b0 + 0x10) != 0) &&
          ((**(code **)(unaff_x20 + 0x50))(),
          -1 < (long)param_1 && (long)ABS(param_1) + 0xfff0000000000000U >> 0x35 < 0x3ff ||
          (long)param_1 - 1U < 0xfffffffffffff)) &&
         ((1.0 <= param_1 || (dVar17 = param_1, (**(code **)(unaff_x20 + 0x60))(), dVar17 < param_1)
          ))) {
        func_0x0001000a8868(&uStack_e8,lStack_d0);
        (**(code **)(lStack_c8 + 8))
                  (puStack_1b0,uStack_1b8,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   lStack_d0,lStack_c8);
      }
      func_0x000107c6142c(puStack_1b0);
      func_0x000101875afc(&uStack_e8);
    }
  }
  func_0x000107c6142c(puStack_1a0);
  return;
}



/* Entry: 101874c80; end: 101874c97;  */

void FUN_101874c80(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 101874c98; end: 101875057;  */

undefined1 FUN_101874c98(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined1 auStack_f0 [24];
  long lStack_d8;
  undefined1 auStack_d0 [24];
  long lStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  puVar7 = auStack_f0;
  puVar8 = auStack_f0;
  puVar9 = auStack_f0;
  FUN_101875058(auStack_70,param_1 + 5);
  FUN_101875058(auStack_90,param_1 + 9);
  if (lStack_58 == 0 && lStack_78 == 0) {
    uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    func_0x0001000a8868();
    (**(code **)(lVar3 + 8))(param_2,param_3,*param_1,param_1[1],uVar12,lVar3);
LAB_101874f58:
    func_0x000101875b64(auStack_90,0x112d387f8,&UNK_10d902650);
    func_0x000101875b64(auStack_70,0x112d387f8,&UNK_10d902650);
    return 3;
  }
  func_0x000101875b1c(auStack_70,auStack_d0,0x112d387f8,&UNK_10d902650);
  if (lStack_b8 == 0) {
    puVar9 = auStack_d0;
  }
  else {
    func_0x000100102924(auStack_d0,auStack_b0);
    func_0x000101875b1c(auStack_90,auStack_f0,0x112d387f8,&UNK_10d902650);
    if (lStack_d8 != 0) {
      func_0x000100102924(auStack_f0,auStack_d0);
      func_0x0001000bb420(auStack_b0,auStack_f0);
      puVar11 = PTR___sypN_11034f1a8;
      puVar10 = PTR___sypN_11034f1a8 + 8;
      func_0x000107c5fb18();
      func_0x0001000bb420(auStack_d0,auStack_f0);
      puVar11 = puVar11 + 8;
      func_0x000107c5fb18();
      if ((puVar7 == puVar8) && (puVar10 == puVar11)) {
        func_0x000107c6142c(puVar10);
        func_0x000107c6142c(puVar11);
      }
      else {
        func_0x000107c605b8(puVar7,puVar10,puVar8,puVar11,0);
        func_0x000107c6142c(puVar10);
        func_0x000107c6142c(puVar11);
        if (((ulong)puVar7 & 1) == 0) {
          func_0x000101875afc(auStack_d0);
          func_0x000101875afc(auStack_b0);
          goto joined_r0x000101874e28;
        }
      }
      uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      func_0x0001000a8868();
      (**(code **)(lVar3 + 8))(param_2,param_3,*param_1,param_1[1],uVar12,lVar3);
      func_0x000101875afc(auStack_d0);
      func_0x000101875afc(auStack_b0);
      goto LAB_101874f58;
    }
    func_0x000101875afc(auStack_b0);
  }
  func_0x000101875b64(puVar9,0x112d387f8,&UNK_10d902650);
joined_r0x000101874e28:
  if ((lStack_58 == 0) || (lStack_78 == 0)) {
    uVar6 = lStack_58 != 0;
    uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    func_0x0001000a8868();
    (**(code **)(lVar3 + 0x10))
              (param_2,param_3,*param_1,param_1[1],0x765f73765f6c696e,0xec00000065756c61,uVar12,
               lVar3);
    func_0x000107c6142c(0xec00000065756c61);
    func_0x000101875b64(auStack_90,0x112d387f8,&UNK_10d902650);
    func_0x000101875b64(auStack_70,0x112d387f8,&UNK_10d902650);
  }
  else {
    bVar4 = *(byte *)(param_1 + 0xd);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    func_0x0001000a8868();
    bVar5 = (bVar4 & 1) == 0;
    uVar12 = 0x686374616d73696d;
    if (bVar4 != 2 && bVar5) {
      uVar12 = 0xd000000000000015;
    }
    uVar1 = 0xe800000000000000;
    if (bVar4 != 2 && bVar5) {
      uVar1 = 0x800000010efbbff0;
    }
    (**(code **)(lVar3 + 0x10))(param_2,param_3,*param_1,param_1[1],uVar12,uVar1,uVar2,lVar3);
    func_0x000107c6142c(uVar1);
    func_0x000101875b64(auStack_90,0x112d387f8,&UNK_10d902650);
    func_0x000101875b64(auStack_70,0x112d387f8,&UNK_10d902650);
    uVar6 = 2;
  }
  return uVar6;
}



/* Entry: 101875058; end: 1018755c3;  */

void FUN_101875058(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_120 [4];
  uint uStack_11c;
  undefined1 *puStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [5];
  
  lVar6 = 0;
  func_0x000107c606b4();
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar18 = 0x112dcc470;
  puStack_118 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112dcc470,&UNK_10d98eb78);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar7 = 0x112dcc478;
  func_0x0001000285a8(0x112dcc478,&UNK_10d98eb80);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar13 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_100 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar13 - extraout_x12_00;
  lVar7 = 0;
  func_0x000107c606c4();
  lStack_f8 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  lVar14 = lVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_101875b1c(param_2,&uStack_b8,0x112d387f8,&UNK_10d902650);
  if (lStack_a0 == 0) {
    func_0x000101875b64(&uStack_b8,0x112d387f8,&UNK_10d902650);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  lStack_110 = lVar7;
  puStack_108 = param_1;
  func_0x000100102924(&uStack_b8,auStack_88);
  func_0x0001000bb420(auStack_88,&uStack_b8);
  func_0x000107c606b0(lVar14,&uStack_b8);
  func_0x000107c606b8(lVar19);
  (**(code **)(lVar15 + 0x68))
            (lVar13,*(undefined4 *)PTR___ss6MirrorV12DisplayStyleO8optionalyA2DmFWC_11034efa8,lVar6)
  ;
  (**(code **)(lVar15 + 0x38))(lVar13,0,1,lVar6);
  lVar18 = (long)*(int *)(lVar18 + 0x30);
  FUN_101875b1c(lVar19,lVar17,0x112dcc478,&UNK_10d98eb80);
  FUN_101875b1c(lVar13,lVar17 + lVar18,0x112dcc478,&UNK_10d98eb80);
  pcVar16 = *(code **)(lVar15 + 0x30);
  lVar8 = lVar17;
  (*pcVar16)(lVar17,1,lVar6);
  lVar7 = lStack_100;
  if ((int)lVar8 == 1) {
    func_0x000101875b64(lVar13,0x112dcc478,&UNK_10d98eb80);
    func_0x000101875b64(lVar19,0x112dcc478,&UNK_10d98eb80);
    lVar18 = lVar17 + lVar18;
    (*pcVar16)(lVar18,1,lVar6);
    if ((int)lVar18 == 1) {
      func_0x000101875b64(lVar17,0x112dcc478,&UNK_10d98eb80);
LAB_10187546c:
      lVar18 = lVar14;
      func_0x000107c606c0();
      uVar1 = *(ulong *)(lVar18 + 0x10);
      uVar3 = *(undefined8 *)(lVar18 + 0x18);
      uVar2 = *(ulong *)(lVar18 + 0x20);
      uVar4 = *(undefined8 *)(lVar18 + 0x28);
      uVar9 = uVar1;
      func_0x000107c614f0();
      func_0x000107c615f0(uVar1);
      func_0x000107c615f0(uVar2);
      uVar10 = uVar9;
      func_0x000107c60310(uVar9,uVar3);
      uVar11 = uVar2;
      func_0x000107c614f0();
      func_0x000107c60310();
      if (uVar10 != uVar11) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1018755c4);
        (*pcVar16)();
      }
      uVar10 = uVar2;
      func_0x000107c60314(uVar2,uVar4,uVar9,uVar3);
      func_0x000107c615e8(uVar2);
      if ((uVar10 & 1) != 0) {
        func_0x000107c615e8(uVar1);
        (**(code **)(lStack_f8 + 8))(lVar14,lStack_110);
        func_0x000101875afc(auStack_88);
        func_0x000107c61574(lVar18);
        puStack_108[1] = 0;
        *puStack_108 = 0;
        puStack_108[3] = 0;
        puStack_108[2] = 0;
        return;
      }
      func_0x000107c603e8(&uStack_b8,uVar1,uVar3);
      func_0x000107c615e8(uVar1);
      (**(code **)(lStack_f8 + 8))(lVar14,lStack_110);
      func_0x000101875afc(auStack_88);
      func_0x000107c61574(lVar18);
      uStack_e8 = uStack_b0;
      uStack_f0 = uStack_b8;
      lStack_d8 = lStack_a0;
      uStack_e0 = uStack_a8;
      uStack_c8 = uStack_90;
      uStack_d0 = uStack_98;
      func_0x000107c6142c(uStack_b0);
      puVar12 = &uStack_e0;
      goto LAB_101875598;
    }
LAB_10187538c:
    func_0x000101875b64(lVar17,0x112dcc470,&UNK_10d98eb78);
  }
  else {
    FUN_101875b1c(lVar17,lStack_100,0x112dcc478,&UNK_10d98eb80);
    lVar8 = lVar17 + lVar18;
    (*pcVar16)(lVar8,1,lVar6);
    puVar5 = puStack_118;
    if ((int)lVar8 == 1) {
      func_0x000101875b64(lVar13,0x112dcc478,&UNK_10d98eb80);
      func_0x000101875b64(lVar19,0x112dcc478,&UNK_10d98eb80);
      (**(code **)(lVar15 + 8))(lVar7,lVar6);
      goto LAB_10187538c;
    }
    (**(code **)(lVar15 + 0x20))(puStack_118,lVar17 + lVar18,lVar6);
    lVar18 = lVar7;
    func_0x000107c5fab8(lVar7,puVar5,lVar6,PTR___ss6MirrorV12DisplayStyleOSQsWP_11034efc0);
    uStack_11c = (uint)lVar18;
    pcVar16 = *(code **)(lVar15 + 8);
    (*pcVar16)(puVar5,lVar6);
    func_0x000101875b64(lVar13,0x112dcc478,&UNK_10d98eb80);
    func_0x000101875b64(lVar19,0x112dcc478,&UNK_10d98eb80);
    (*pcVar16)(lVar7,lVar6);
    func_0x000101875b64(lVar17,0x112dcc478,&UNK_10d98eb80);
    if ((uStack_11c & 1) != 0) goto LAB_10187546c;
  }
  (**(code **)(lStack_f8 + 8))(lVar14,lStack_110);
  puVar12 = auStack_88;
LAB_101875598:
  func_0x000100102924(puVar12,puStack_108);
  return;
}



/* Entry: 1018755c4; end: 1018757f3;  */

uint FUN_1018755c4(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (int)&uStack_c0;
  iVar3 = (int)&uStack_c0;
  iVar4 = (int)&uStack_c0;
  iVar5 = (int)&uStack_c0;
  FUN_101875b1c(param_1,auStack_78,0x112d387f8,&UNK_10d902650);
  if (lStack_60 == 0) {
    func_0x000101875b64(auStack_78,0x112d387f8,&UNK_10d902650);
    uVar9 = 0;
  }
  else {
    func_0x000100102924(auStack_78,auStack_50);
    func_0x0001000bb420(auStack_50,auStack_78);
    puVar1 = PTR___sypN_11034f1a8;
    func_0x000107c6147c(&uStack_c0,auStack_78,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,0);
    if (iVar2 == 0) {
      uVar6 = 0;
      func_0x0001002ed07c(0);
      func_0x000107c6147c(&uStack_c0,auStack_78,puVar1 + 8,uVar6,0);
      if (iVar3 == 0) {
        func_0x000107c6147c(&uStack_c0,auStack_78,puVar1 + 8,PTR___sSSN_11034da80,0);
        if (iVar4 == 0) {
          func_0x000101875afc(auStack_78);
          func_0x0001000bb420(auStack_50,auStack_98);
          uVar6 = 0x112dcc460;
          func_0x0001000285a8(0x112dcc460,&UNK_10d98eb68);
          func_0x000107c6147c(&uStack_c0,auStack_98,puVar1 + 8,uVar6,6);
          if (iVar5 == 0) {
            func_0x000101875afc(auStack_50);
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            func_0x000101875b64(&uStack_c0,0x112dcc468,&UNK_10d98eb70);
            uVar9 = 1;
            goto LAB_1018757a8;
          }
          func_0x000100cbd414(&uStack_c0,auStack_78);
          func_0x0001000a8868(auStack_78,lStack_60);
          lVar8 = lStack_60;
          func_0x000107c5fe90(lStack_60,uStack_58);
          func_0x000101875afc(auStack_50);
          uVar9 = (uint)lVar8 ^ 1;
        }
        else {
          func_0x000101875afc(auStack_50);
          func_0x000107c6142c(uStack_b8);
          uVar7 = uStack_c0 & 0xffffffffffff;
          if ((uStack_b8 & 0x2000000000000000) != 0) {
            uVar7 = uStack_b8 >> 0x38 & 0xf;
          }
          uVar9 = (uint)(uVar7 != 0);
        }
      }
      else {
        uVar6 = 0;
        func_0x000107c60110(0);
        uVar7 = uStack_c0;
        func_0x000107c60118(uStack_c0,uVar6);
        func_0x000101875afc(auStack_50);
        func_0x000107c61170(uStack_c0);
        func_0x000107c61170(uVar6);
        uVar9 = (uint)uVar7 ^ 1;
      }
    }
    else {
      func_0x000101875afc(auStack_50);
      uVar9 = (uint)(byte)uStack_c0;
    }
    func_0x000101875afc(auStack_78);
  }
LAB_1018757a8:
  return uVar9 & 1;
}



/* Entry: 1018757f4; end: 10187585b;  */

long FUN_1018757f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10187585c; end: 1018759c7;  */

long FUN_10187585c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  lVar1 = *(long *)(param_2 + 0x40);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    *(long *)(param_1 + 0x40) = lVar1;
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x28,param_2 + 0x28);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 1018759c8; end: 101875a47;  */

undefined8 * FUN_1018759c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000101875afc();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  if (param_1[8] != 0) {
    func_0x000101875afc(param_1 + 5);
  }
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  uVar1 = param_1[0xb];
  uVar2 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[0xd];
  uVar2 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101875a48; end: 101875b1b;  */

int FUN_101875a48(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101875b1c; end: 101875ba3;  */

undefined8 FUN_101875b1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101875ba4; end: 101875c5f;  */

undefined1 FUN_101875ba4(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_78 [72];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_78,*(undefined8 *)(param_2 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if ((int)*(undefined8 *)(*(long *)(param_2 + 0x30) + uVar1 * 8) == (int)param_1) {
        return 1;
      }
      uVar1 = uVar1 + 1 & ~uVar2;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 101875c60; end: 101875d87;  */

void FUN_101875c60(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_98 [72];
  
  func_0x0001000285a8(0x112dcc370,&UNK_10d98e930);
  lVar3 = 4;
  func_0x000107c602e8();
  lVar11 = 0;
  lVar1 = lVar3 + 0x38;
  do {
    uVar10 = *(ulong *)(lVar11 * 8 + 0x112dcc650);
    func_0x000107c6068c(auStack_98,*(undefined8 *)(lVar3 + 0x28));
    uVar4 = uVar10;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
    uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
    uVar6 = uVar4 >> 6;
    uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
    uVar8 = 1L << (uVar4 & 0x3f);
    lVar5 = *(long *)(lVar3 + 0x30);
    if ((uVar8 & uVar7) != 0) {
      do {
        if ((int)*(undefined8 *)(lVar5 + uVar4 * 8) == (int)uVar10) goto LAB_101875cd8;
        uVar4 = uVar4 + 1 & ~uVar9;
        uVar6 = uVar4 >> 6;
        uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
        uVar8 = 1L << (uVar4 & 0x3f);
      } while ((uVar8 & uVar7) != 0);
    }
    *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
    *(ulong *)(lVar5 + uVar4 * 8) = uVar10;
    if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101875d88);
      (*pcVar2)();
    }
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_101875cd8:
    lVar11 = lVar11 + 1;
    if (lVar11 == 4) {
      lRam0000000112dcc488 = lVar3;
      return;
    }
  } while( true );
}



/* Entry: 101875d88; end: 101875e0f;  */

void FUN_101875d88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112dcc480 != -1) {
    func_0x000107c61568(0x112dcc480,FUN_101875c60);
  }
  uVar1 = uRam0000000112dcc488;
  uVar2 = 0x112dcc620;
  func_0x0001000285a8(0x112dcc620,&UNK_10dc64c20);
  func_0x000107c61538();
  func_0x000107c61434(uVar1);
  FUN_101876230(uVar2,uVar1);
  uRam0000000112dcc498 = uVar2;
  return;
}



/* Entry: 101875e10; end: 101875e53;  */

void FUN_101875e10(void)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_88 [72];
  
  func_0x0001000285a8(0x112dcc370,&UNK_10d98e930);
  lVar4 = 2;
  func_0x000107c602e8();
  uVar2 = uRam0000000112dcc5e0;
  lVar1 = lVar4 + 0x38;
  func_0x000107c6068c(auStack_88,*(undefined8 *)(lVar4 + 0x28));
  uVar5 = uVar2;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
  uVar7 = uVar5 >> 6;
  uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
  uVar9 = 1L << (uVar5 & 0x3f);
  lVar6 = *(long *)(lVar4 + 0x30);
  if ((uVar9 & uVar8) != 0) {
    do {
      if ((int)*(undefined8 *)(lVar6 + uVar5 * 8) == (int)uVar2) goto LAB_101875f5c;
      uVar5 = uVar5 + 1 & ~uVar10;
      uVar7 = uVar5 >> 6;
      uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
      uVar9 = 1L << (uVar5 & 0x3f);
    } while ((uVar9 & uVar8) != 0);
  }
  *(ulong *)(lVar1 + uVar7 * 8) = uVar9 | uVar8;
  *(ulong *)(lVar6 + uVar5 * 8) = uVar2;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
LAB_101875f5c:
    uVar2 = uRam0000000112dcc5e8;
    func_0x000107c6068c(auStack_88,*(undefined8 *)(lVar4 + 0x28));
    uVar5 = uVar2;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar5 >> 6;
    uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
    uVar9 = 1L << (uVar5 & 0x3f);
    lVar6 = *(long *)(lVar4 + 0x30);
    if ((uVar9 & uVar8) != 0) {
      do {
        if ((int)*(undefined8 *)(lVar6 + uVar5 * 8) == (int)uVar2) {
          lRam0000000112dcc4a8 = lVar4;
          return;
        }
        uVar5 = uVar5 + 1 & ~uVar10;
        uVar7 = uVar5 >> 6;
        uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
        uVar9 = 1L << (uVar5 & 0x3f);
      } while ((uVar9 & uVar8) != 0);
    }
    *(ulong *)(lVar1 + uVar7 * 8) = uVar9 | uVar8;
    *(ulong *)(lVar6 + uVar5 * 8) = uVar2;
    if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
      *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
      lRam0000000112dcc4a8 = lVar4;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101876038);
  (*pcVar3)();
}



/* Entry: 101875e54; end: 101876037;  */

void FUN_101875e54(undefined8 param_1,ulong *param_2,ulong *param_3,long *param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_88 [72];
  
  func_0x0001000285a8(0x112dcc370,&UNK_10d98e930);
  lVar3 = 2;
  func_0x000107c602e8();
  lVar1 = lVar3 + 0x38;
  uVar10 = *param_2;
  func_0x000107c6068c(auStack_88,*(undefined8 *)(lVar3 + 0x28));
  uVar4 = uVar10;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
  uVar6 = uVar4 >> 6;
  uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
  uVar8 = 1L << (uVar4 & 0x3f);
  lVar5 = *(long *)(lVar3 + 0x30);
  if ((uVar8 & uVar7) != 0) {
    do {
      if ((int)*(undefined8 *)(lVar5 + uVar4 * 8) == (int)uVar10) goto LAB_101875f5c;
      uVar4 = uVar4 + 1 & ~uVar9;
      uVar6 = uVar4 >> 6;
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
      uVar8 = 1L << (uVar4 & 0x3f);
    } while ((uVar8 & uVar7) != 0);
  }
  *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
  *(ulong *)(lVar5 + uVar4 * 8) = uVar10;
  if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_101875f5c:
    uVar10 = *param_3;
    func_0x000107c6068c(auStack_88,*(undefined8 *)(lVar3 + 0x28));
    uVar4 = uVar10;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
    uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
    uVar6 = uVar4 >> 6;
    uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
    uVar8 = 1L << (uVar4 & 0x3f);
    lVar5 = *(long *)(lVar3 + 0x30);
    if ((uVar8 & uVar7) != 0) {
      do {
        if ((int)*(undefined8 *)(lVar5 + uVar4 * 8) == (int)uVar10) goto LAB_101876018;
        uVar4 = uVar4 + 1 & ~uVar9;
        uVar6 = uVar4 >> 6;
        uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
        uVar8 = 1L << (uVar4 & 0x3f);
      } while ((uVar8 & uVar7) != 0);
    }
    *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
    *(ulong *)(lVar5 + uVar4 * 8) = uVar10;
    if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_101876018:
      *param_4 = lVar3;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101876038);
  (*pcVar2)();
}



/* Entry: 101876038; end: 10187605f;  */

void FUN_101876038(void)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_88 [72];
  
  func_0x0001000285a8(0x112dcc370,&UNK_10d98e930);
  lVar4 = 1;
  func_0x000107c602e8();
  uVar2 = uRam0000000112dcc548;
  lVar1 = lVar4 + 0x38;
  func_0x000107c6068c(auStack_88,*(undefined8 *)(lVar4 + 0x28));
  uVar5 = uVar2;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
  uVar7 = uVar5 >> 6;
  uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
  uVar9 = 1L << (uVar5 & 0x3f);
  lVar6 = *(long *)(lVar4 + 0x30);
  if ((uVar9 & uVar8) != 0) {
    do {
      if ((int)*(undefined8 *)(lVar6 + uVar5 * 8) == (int)uVar2) {
        lRam0000000112dcc4d8 = lVar4;
        return;
      }
      uVar5 = uVar5 + 1 & ~uVar10;
      uVar7 = uVar5 >> 6;
      uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
      uVar9 = 1L << (uVar5 & 0x3f);
    } while ((uVar9 & uVar8) != 0);
  }
  *(ulong *)(lVar1 + uVar7 * 8) = uVar9 | uVar8;
  *(ulong *)(lVar6 + uVar5 * 8) = uVar2;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lRam0000000112dcc4d8 = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101876164);
  (*pcVar3)();
}



/* Entry: 101876060; end: 101876163;  */

void FUN_101876060(undefined8 param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_88 [72];
  
  func_0x0001000285a8(0x112dcc370,&UNK_10d98e930);
  lVar3 = 1;
  func_0x000107c602e8();
  lVar1 = lVar3 + 0x38;
  uVar10 = *param_2;
  func_0x000107c6068c(auStack_88,*(undefined8 *)(lVar3 + 0x28));
  uVar4 = uVar10;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
  uVar6 = uVar4 >> 6;
  uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
  uVar8 = 1L << (uVar4 & 0x3f);
  lVar5 = *(long *)(lVar3 + 0x30);
  if ((uVar8 & uVar7) != 0) {
    do {
      if ((int)*(undefined8 *)(lVar5 + uVar4 * 8) == (int)uVar10) goto LAB_101876144;
      uVar4 = uVar4 + 1 & ~uVar9;
      uVar6 = uVar4 >> 6;
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
      uVar8 = 1L << (uVar4 & 0x3f);
    } while ((uVar8 & uVar7) != 0);
  }
  *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
  *(ulong *)(lVar5 + uVar4 * 8) = uVar10;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101876164);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_101876144:
  *param_3 = lVar3;
  return;
}



/* Entry: 101876164; end: 1018761af;  */

undefined1 FUN_101876164(ulong param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_78 [72];
  
  if (*param_2 == -1) {
    lVar1 = *param_3;
  }
  else {
    func_0x000107c61568(param_2,param_4);
    lVar1 = *param_3;
  }
  if (*(long *)(lVar1 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_78,*(undefined8 *)(lVar1 + 0x28));
  uVar2 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar1 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((int)*(undefined8 *)(*(long *)(lVar1 + 0x30) + uVar2 * 8) == (int)param_1) {
        return 1;
      }
      uVar2 = uVar2 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 1018761b0; end: 10187622f;  */

undefined1 FUN_1018761b0(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_78 [72];
  
  if (lRam0000000112dcc4b0 != -1) {
    func_0x000107c61568(0x112dcc4b0,0x101875e28);
  }
  lVar1 = lRam0000000112dcc4b8;
  if (*(long *)(lRam0000000112dcc4b8 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_78,*(undefined8 *)(lRam0000000112dcc4b8 + 0x28));
  uVar2 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar1 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((int)*(undefined8 *)(*(long *)(lVar1 + 0x30) + uVar2 * 8) == (int)param_1) {
        return 1;
      }
      uVar2 = uVar2 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 101876230; end: 101876287;  */

undefined8 FUN_101876230(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x20);
    uStack_38 = param_2;
    do {
      FUN_101872080(auStack_40,*puVar2);
      lVar1 = lVar1 + -1;
      param_2 = uStack_38;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  return param_2;
}



/* Entry: 101876288; end: 1018763e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101876288(undefined8 param_1,long param_2,long param_3,code *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  byte bStack_52;
  char cStack_51;
  
  if (*(int *)(param_3 + _DAT_113803420) != 10) {
    return 1;
  }
  func_0x000107c614f0();
  pcVar4 = *(code **)(param_2 + 8);
  (*pcVar4)(&cStack_51,&UNK_110409ef0,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
  if (cStack_51 != '\x01') {
    uVar1 = 0;
    goto LAB_1018763c8;
  }
  lVar3 = *(long *)(param_3 + _DAT_113803438);
  if (lVar3 - 4U < 2) {
LAB_101876364:
    uVar1 = 1;
  }
  else {
    if (lVar3 == 3) {
      (*pcVar4)(&bStack_52,&UNK_110409f08,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
      if ((bStack_52 & 1) != 0) goto LAB_101876364;
    }
    else if (lVar3 == 9) {
      uVar2 = 0;
      func_0x00010403c628(0xd00000000000002a,0x800000010efbc050,param_1,param_2);
      if ((uVar2 & 1) != 0) goto LAB_101876364;
    }
    param_3 = param_3 + _DAT_113803418;
    (*param_4)(param_3);
    uVar1 = (uint)param_3;
  }
LAB_1018763c8:
  return uVar1 & 1;
}



/* Entry: 1018763e8; end: 1018763ff;  */

void FUN_1018763e8(undefined1 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined1 uVar7;
  undefined *puVar8;
  
  puVar4 = &UNK_10b890820;
  FUN_101882394();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(param_2 + 0x10) != 0) {
    puVar5 = puVar4;
    func_0x000107c61434(param_2);
    lVar1 = 3;
    func_0x0001018815cc();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (((ulong)puVar5 & 1) != 0) {
      puVar8 = *(undefined **)(*(long *)(param_2 + 0x38) + lVar1 * 8);
      func_0x000107c61434(puVar8);
    }
    func_0x000107c6142c(param_2);
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(puVar4);
  plVar6 = (long *)(puVar8 + 0x10);
  if (*plVar6 == 0) {
    func_0x000107c6142c(puVar8);
    uVar7 = 2;
  }
  else {
    lVar1 = plVar6[*plVar6 * 2];
    lVar2 = (plVar6 + *plVar6 * 2)[1];
    func_0x000107c61174(lVar1);
    func_0x000107c61174();
    func_0x000107c6142c(puVar8);
    lVar3 = lVar2;
    (*(code *)&UNK_10b890820)();
    uVar7 = (undefined1)lVar3;
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  *param_1 = uVar7;
  return;
}



/* Entry: 101876400; end: 1018764ff;  */

void FUN_101876400(undefined1 *param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined1 uVar8;
  undefined *puVar9;
  
  uVar6 = (undefined4)((ulong)param_3 >> 0x20);
  uVar5 = (uint)param_3;
  FUN_101882394();
  uVar1 = CONCAT44(uVar6,uVar5);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x000107c61434(param_2);
    lVar2 = 3;
    func_0x0001018815cc();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar5 & 1) != 0) {
      puVar9 = *(undefined **)(*(long *)(param_2 + 0x38) + lVar2 * 8);
      func_0x000107c61434(puVar9);
    }
    func_0x000107c6142c(param_2);
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  plVar7 = (long *)(puVar9 + 0x10);
  if (*plVar7 == 0) {
    func_0x000107c6142c(puVar9);
    uVar8 = 2;
  }
  else {
    lVar2 = plVar7[*plVar7 * 2];
    lVar3 = (plVar7 + *plVar7 * 2)[1];
    func_0x000107c61174(lVar2);
    func_0x000107c61174();
    func_0x000107c6142c(puVar9);
    lVar4 = lVar3;
    (*param_3)();
    uVar8 = (undefined1)lVar4;
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
  }
  *param_1 = uVar8;
  return;
}



/* Entry: 101876500; end: 101876553;  */

undefined1 FUN_101876500(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_78 [72];
  
  if (lRam0000000112dcc4a0 != -1) {
    func_0x000107c61568(0x112dcc4a0,FUN_101875e10);
  }
  lVar1 = lRam0000000112dcc4a8;
  if (*(long *)(lRam0000000112dcc4a8 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_78,*(undefined8 *)(lRam0000000112dcc4a8 + 0x28));
  uVar2 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar1 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((int)*(undefined8 *)(*(long *)(lVar1 + 0x30) + uVar2 * 8) == (int)param_1) {
        return 1;
      }
      uVar2 = uVar2 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 101876554; end: 1018766c7;  */

void FUN_101876554(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  long *plVar8;
  undefined *puVar9;
  
  uVar6 = (undefined4)((ulong)param_4 >> 0x20);
  uVar5 = (uint)param_4;
  FUN_101882394();
  uVar1 = CONCAT44(uVar6,uVar5);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(param_3 + 0x10) != 0) {
    func_0x000107c61434(param_3);
    lVar2 = 3;
    func_0x0001018815cc();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar5 & 1) != 0) {
      puVar9 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar2 * 8);
      func_0x000107c61434(puVar9);
    }
    func_0x000107c6142c(param_3);
  }
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(uVar1);
  plVar8 = (long *)(puVar9 + 0x10);
  if (*plVar8 == 0) {
    func_0x000107c6142c(puVar9);
    *param_1 = 0;
    uVar7 = 1;
  }
  else {
    lVar2 = plVar8[*plVar8 * 2];
    lVar3 = (plVar8 + *plVar8 * 2)[1];
    func_0x000107c61174(lVar2);
    func_0x000107c61174();
    func_0x000107c6142c(puVar9);
    func_0x000107c61174(lVar2);
    func_0x000107c61174();
    lVar4 = lVar3;
    func_0x000107c30b60();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar2);
      uVar7 = 0;
      *param_1 = 0;
    }
    else {
      func_0x000107c4223c();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar4);
      uVar7 = 0;
      *param_1 = param_2;
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar7;
  return;
}



/* Entry: 1018766c8; end: 10187673b;  */

void FUN_1018766c8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112dcc680;
  plVar5 = (long *)&UNK_10d98ec78;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*(code *)0x101874078)();
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



/* Entry: 10187673c; end: 1018767a7;  */

void FUN_10187673c(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1018767a8; end: 1018767b3;  */

undefined1 FUN_1018767a8(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_78 [72];
  
  if (lRam0000000112dcc4a0 != -1) {
    func_0x000107c61568(0x112dcc4a0,FUN_101875e10);
  }
  lVar1 = lRam0000000112dcc4a8;
  if (*(long *)(lRam0000000112dcc4a8 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_78,*(undefined8 *)(lRam0000000112dcc4a8 + 0x28));
  uVar2 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar1 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((int)*(undefined8 *)(*(long *)(lVar1 + 0x30) + uVar2 * 8) == (int)param_1) {
        return 1;
      }
      uVar2 = uVar2 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 1018767b4; end: 101876ec7;  */

long FUN_1018767b4(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_538 [112];
  undefined1 auStack_4c8 [112];
  undefined1 auStack_458 [112];
  undefined1 auStack_3e8 [112];
  undefined1 auStack_378 [112];
  undefined1 auStack_308 [112];
  undefined1 auStack_298 [112];
  undefined1 auStack_228 [112];
  undefined1 auStack_1b8 [112];
  undefined1 auStack_148 [112];
  undefined8 auStack_d8 [15];
  
  puVar2 = &UNK_110409f50;
  func_0x000107c613fc(&UNK_110409f50,0x11,7);
  puVar2[0x10] = param_2;
  puVar3 = &UNK_10d98ec80;
  func_0x000107c614e0();
  auStack_d8[0] = 0;
  puVar4 = puVar3;
  FUN_1018776b8();
  func_0x000107c61580(puVar2,0xb);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010040288c(auStack_538,0xd00000000000001e,0x800000010efbc120,puVar3,0,0,FUN_101876ec8,0,
                      auStack_d8,PTR___swiftEmptyArrayStorage_11034f1c8,FUN_1018776b0,puVar2,puVar4)
  ;
  puVar3 = &UNK_10d98eca0;
  func_0x000107c614e0(&UNK_10d98eca0);
  puVar4 = &UNK_110409f78;
  func_0x000107c613fc(&UNK_110409f78,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  *(undefined8 *)(puVar4 + 0x18) = param_5;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  func_0x000100402814(auStack_4c8,0xd00000000000001d,0x800000010efbc140,puVar3,0,0,FUN_1018776f8,
                      puVar4,puVar1,FUN_1018776b0,puVar2);
  puVar3 = &UNK_10d98ecc0;
  func_0x000107c614e0(&UNK_10d98ecc0);
  puVar4 = &UNK_110409fa0;
  func_0x000107c613fc(&UNK_110409fa0,0x19,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  puVar4[0x18] = param_3;
  func_0x000100402814(auStack_458,0xd00000000000002a,0x800000010efbc160,puVar3,0,0,0x101877704,
                      puVar4,puVar1,FUN_1018776b0,puVar2);
  puVar3 = &UNK_10d98ece0;
  func_0x000107c614e0(&UNK_10d98ece0);
  puVar4 = &UNK_110409fc8;
  func_0x000107c613fc(&UNK_110409fc8,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  func_0x000100402814(auStack_3e8,0xd000000000000029,0x800000010efbc190,puVar3,0,0,FUN_101877710,
                      puVar4,puVar1,FUN_1018776b0,puVar2);
  puVar3 = &UNK_10d98ed00;
  func_0x000107c614e0(&UNK_10d98ed00);
  puVar4 = &UNK_110409ff0;
  func_0x000107c613fc(&UNK_110409ff0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  func_0x000100402814(auStack_378,0xd00000000000002a,0x800000010efbc1c0,puVar3,0,0,0x10187772c,
                      puVar4,puVar1,FUN_1018776b0,puVar2);
  puVar3 = &UNK_10d98ed20;
  func_0x000107c614e0(&UNK_10d98ed20);
  puVar4 = &UNK_11040a018;
  func_0x000107c613fc(&UNK_11040a018,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  func_0x000100402814(auStack_308,0xd000000000000020,0x800000010efbc1f0,puVar3,0,0,0x101877748,
                      puVar4,puVar1,FUN_1018776b0,puVar2);
  puVar3 = &UNK_10d98ed40;
  func_0x000107c614e0(&UNK_10d98ed40);
  puVar4 = &UNK_11040a040;
  func_0x000107c613fc(&UNK_11040a040,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  func_0x000100402814(auStack_298,0xd000000000000030,0x800000010efbc220,puVar3,0,0,0x101877764,
                      puVar4,puVar1,FUN_1018776b0,puVar2);
  puVar3 = &UNK_10d98ed60;
  func_0x000107c614e0(&UNK_10d98ed60);
  puVar4 = &UNK_11040a068;
  func_0x000107c613fc(&UNK_11040a068,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  func_0x000100402814(auStack_228,0xd00000000000001b,0x800000010efbc260,puVar3,0,0,FUN_101877780,
                      puVar4,puVar1,FUN_1018776b0,puVar2);
  puVar3 = &UNK_10d98ed80;
  func_0x000107c614e0(&UNK_10d98ed80);
  puVar4 = &UNK_11040a090;
  func_0x000107c613fc(&UNK_11040a090,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  func_0x000100402814(auStack_1b8,0xd000000000000027,0x800000010efbc280,puVar3,0,0,FUN_101877788,
                      puVar4,puVar1,FUN_1018776b0,puVar2);
  puVar3 = &UNK_10d98eda0;
  func_0x000107c614e0(&UNK_10d98eda0);
  puVar4 = &UNK_11040a0b8;
  func_0x000107c613fc(&UNK_11040a0b8,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  func_0x000100402814(auStack_148,0xd000000000000026,0x800000010efbc2b0,puVar3,0,0,0x1018777a8,
                      puVar4,puVar1,FUN_1018776b0,puVar2);
  puVar3 = &UNK_10d98edc0;
  func_0x000107c614e0(&UNK_10d98edc0);
  puVar4 = &UNK_11040a0e0;
  func_0x000107c613fc(&UNK_11040a0e0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  lVar5 = -0x2fffffffffffffcc;
  func_0x000100402814(auStack_d8,0xd000000000000034,0x800000010efbc2e0,puVar3,0,0,FUN_1018777c8,
                      puVar4,puVar1,FUN_1018776b0,puVar2);
  func_0x0001018766f4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 0x17;
  *(undefined8 *)(lVar5 + 0x10) = 0xb;
  func_0x000107c6157c(param_5);
  uVar8 = 0x112dcc690;
  func_0x0001000285a8(0x112dcc690,&UNK_10d98ede0);
  func_0x000100401efc();
  *(undefined8 *)(lVar5 + 0x20) = uVar8;
  uVar8 = 0x112dcc698;
  func_0x0001000285a8(0x112dcc698,&UNK_10d98ede8);
  func_0x000100401efc();
  *(undefined8 *)(lVar5 + 0x28) = uVar8;
  uVar8 = 0x112dcc6a0;
  func_0x0001000285a8(0x112dcc6a0,&UNK_10d98edf0);
  uVar6 = uVar8;
  func_0x000100401efc();
  *(undefined8 *)(lVar5 + 0x30) = uVar6;
  uVar6 = 0x112dcc6a8;
  func_0x0001000285a8(0x112dcc6a8,&UNK_10d98edf8);
  uVar7 = uVar6;
  func_0x000100401efc();
  *(undefined8 *)(lVar5 + 0x38) = uVar7;
  uVar7 = uVar6;
  func_0x000100401efc();
  *(undefined8 *)(lVar5 + 0x40) = uVar7;
  uVar7 = uVar6;
  func_0x000100401efc();
  *(undefined8 *)(lVar5 + 0x48) = uVar7;
  uVar7 = uVar6;
  func_0x000100401efc();
  *(undefined8 *)(lVar5 + 0x50) = uVar7;
  uVar7 = 0x112dcc6b0;
  func_0x0001000285a8(0x112dcc6b0,&UNK_10d98ee00);
  func_0x000100401efc();
  *(undefined8 *)(lVar5 + 0x58) = uVar7;
  uVar7 = uVar6;
  func_0x000100401efc();
  *(undefined8 *)(lVar5 + 0x60) = uVar7;
  func_0x000100401efc();
  *(undefined8 *)(lVar5 + 0x68) = uVar6;
  func_0x000100401efc();
  func_0x000107c61574(puVar2);
  FUN_1018777d0(auStack_d8,0x112dcc6a0,&UNK_10d98edf0);
  FUN_1018777d0(auStack_148,0x112dcc6a8,&UNK_10d98edf8);
  FUN_1018777d0(auStack_1b8,0x112dcc6a8,&UNK_10d98edf8);
  FUN_1018777d0(auStack_228,0x112dcc6b0,&UNK_10d98ee00);
  FUN_1018777d0(auStack_298,0x112dcc6a8,&UNK_10d98edf8);
  FUN_1018777d0(auStack_308,0x112dcc6a8,&UNK_10d98edf8);
  FUN_1018777d0(auStack_378,0x112dcc6a8,&UNK_10d98edf8);
  FUN_1018777d0(auStack_3e8,0x112dcc6a8,&UNK_10d98edf8);
  FUN_1018777d0(auStack_458,0x112dcc6a0,&UNK_10d98edf0);
  FUN_1018777d0(auStack_4c8,0x112dcc698,&UNK_10d98ede8);
  FUN_1018777d0(auStack_538,0x112dcc690,&UNK_10d98ede0);
  *(undefined8 *)(lVar5 + 0x70) = uVar8;
  return lVar5;
}



/* Entry: 101876ec8; end: 101876ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101876ec8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_2 + _DAT_113803438);
  uVar1 = 3;
  if (iVar2 != 9 && iVar2 != 3) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_113803438);
  }
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101876ef4; end: 101876f63;  */

void FUN_101876ef4(long *param_1,long param_2,code *param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_2;
  (*param_3)();
  FUN_101877820();
  lVar3 = lVar4;
  if ((param_5 & 0xff) != 1) {
    lVar3 = param_2;
  }
  lVar1 = lVar4;
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  lVar2 = 0;
  if (lVar3 != lVar4) {
    lVar2 = lVar1;
  }
  if (0 < lVar4) {
    lVar3 = lVar2;
  }
  *param_1 = lVar3;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101876f64; end: 10187718f;  */

void FUN_101876f64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar1 = param_4;
  uVar4 = param_4;
  FUN_101881d40();
  uVar8 = 0;
  if (uVar1 == 0) goto LAB_101877168;
  uVar2 = param_4;
  uVar5 = uVar4;
  FUN_101881ebc();
  uVar6 = uVar5;
  if (uVar2 == 0) {
LAB_101877094:
    uVar2 = param_4;
    FUN_101881fec();
    if (uVar2 != 0) {
      if (*(long *)(uVar2 + 0x10) != 0) {
        uVar5 = uVar6;
        func_0x000107c61434(uVar2);
        lVar3 = 10;
        func_0x0001018815c8();
        if ((uVar5 & 1) != 0) {
          lVar7 = *(long *)(*(long *)(uVar2 + 0x38) + lVar3 * 8);
          func_0x000107c61434(lVar7);
          func_0x000107c6142c(uVar6);
          func_0x000107c61430(uVar2,2);
          lVar3 = *(long *)(lVar7 + 0x10);
          func_0x000107c6142c(lVar7);
          if (lVar3 != 0) goto LAB_1018770fc;
          goto LAB_101877124;
        }
        func_0x000107c6142c(uVar2);
      }
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(uVar6);
    }
LAB_101877124:
    if ((param_5 & 1) == 0) {
      param_4 = 0;
    }
    else {
      FUN_1018821c4(param_4);
    }
    FUN_10187bde4(uVar4,param_4);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar1);
  }
  else {
    if (*(long *)(uVar2 + 0x10) == 0) {
LAB_101877084:
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(uVar5);
      goto LAB_101877094;
    }
    func_0x000107c61434(uVar2);
    lVar3 = 2;
    func_0x0001018815d0();
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(uVar2);
LAB_101877028:
      if (*(long *)(uVar2 + 0x10) != 0) {
        func_0x000107c61434(uVar2);
        lVar3 = 4;
        func_0x0001018815d0();
        if ((uVar6 & 1) != 0) {
          lVar7 = *(long *)(*(long *)(uVar2 + 0x38) + lVar3 * 8);
          func_0x000107c61434(lVar7);
          func_0x000107c6142c(uVar5);
          uVar6 = 2;
          func_0x000107c61430(uVar2);
          lVar3 = *(long *)(lVar7 + 0x10);
          func_0x000107c6142c(lVar7);
          if (lVar3 == 0) goto LAB_101877094;
          goto LAB_1018770fc;
        }
        func_0x000107c6142c(uVar2);
      }
      goto LAB_101877084;
    }
    lVar3 = *(long *)(*(long *)(uVar2 + 0x38) + lVar3 * 8);
    func_0x000107c61434(lVar3);
    func_0x000107c6142c(uVar2);
    lVar7 = *(long *)(lVar3 + 0x10);
    func_0x000107c6142c(lVar3);
    if (lVar7 == 0) goto LAB_101877028;
    func_0x000107c6142c(uVar5);
    func_0x000107c6142c(uVar2);
LAB_1018770fc:
    func_0x000107c6142c(uVar4);
    param_4 = uVar1;
    param_2 = 0;
  }
  func_0x000107c6142c(param_4);
  uVar8 = param_2;
LAB_101877168:
  *param_1 = uVar8;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101877190; end: 10187724b;  */

void FUN_101877190(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *puVar6;
  
  uVar4 = (undefined4)((ulong)param_3 >> 0x20);
  uVar3 = (uint)param_3;
  FUN_101881ebc();
  if (param_3 == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = CONCAT44(uVar4,uVar3);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(param_3 + 0x10) != 0) {
      func_0x000107c61434(param_3);
      func_0x0001018815d0();
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((uVar3 & 1) != 0) {
        puVar6 = *(undefined **)(*(long *)(param_3 + 0x38) + param_4 * 8);
        func_0x000107c61434(puVar6);
      }
      func_0x000107c6142c(param_3);
    }
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(uVar1);
    lVar5 = *(long *)(puVar6 + 0x10);
    func_0x000107c6142c(puVar6);
    bVar2 = lVar5 != 0;
  }
  *(bool *)param_1 = bVar2;
  return;
}



/* Entry: 10187724c; end: 101877403;  */

void FUN_10187724c(long *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  
  lVar6 = param_3;
  FUN_101881ebc();
  if (param_3 != 0) {
    lVar7 = lVar6;
    func_0x000107c6142c();
    uVar9 = *(ulong *)(lVar6 + 0x10);
    if (uVar9 == 0) {
      uVar9 = 0;
    }
    else {
      uVar8 = 0;
      plVar10 = (long *)(lVar6 + 0x28);
      do {
        lVar2 = plVar10[-1];
        lVar3 = *plVar10;
        func_0x000107c61174(lVar2);
        func_0x000107c61174();
        func_0x000107c61174(lVar2);
        func_0x000107c61174();
        lVar4 = lVar3;
        func_0x000107c30b4c();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar2);
        if (lVar4 != 0) {
          func_0x000107c61170(lVar4);
          uVar9 = uVar8;
          break;
        }
        plVar10 = plVar10 + 2;
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
    }
    if (uVar9 != *(ulong *)(lVar6 + 0x10)) {
      if (*(ulong *)(lVar6 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018773e0);
        (*pcVar1)();
      }
      lVar2 = lVar6 + uVar9 * 0x10;
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
      lVar2 = *(long *)(lVar2 + 0x28);
      func_0x000107c61174(uVar5);
      func_0x000107c61174();
      func_0x000107c61174(uVar5);
      func_0x000107c61174();
      lVar3 = lVar2;
      func_0x000107c30b4c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c5faec();
        func_0x000107c6142c(lVar6);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(lVar3);
        *param_1 = lVar4;
        param_1[1] = lVar7;
        return;
      }
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar5);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101877404);
      (*pcVar1)();
    }
    func_0x000107c6142c(lVar6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 101877404; end: 10187745b;  */

void FUN_101877404(undefined1 *param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  FUN_10187798c();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c61170();
    uVar1 = param_3;
    (*param_4)();
    uVar2 = (undefined1)uVar1;
    func_0x000107c61170(param_3);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 10187745c; end: 10187757f;  */

void FUN_10187745c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  uVar6 = (undefined4)((ulong)param_4 >> 0x20);
  uVar5 = (uint)param_4;
  FUN_101882288();
  uVar9 = 0;
  if (param_4 != 0) {
    uVar1 = CONCAT44(uVar6,uVar5);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(param_4 + 0x10) != 0) {
      func_0x000107c61434(param_4);
      lVar2 = 3;
      func_0x0001018815cc();
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((uVar5 & 1) != 0) {
        puVar8 = *(undefined **)(*(long *)(param_4 + 0x38) + lVar2 * 8);
        func_0x000107c61434(puVar8);
      }
      func_0x000107c6142c(param_4);
    }
    func_0x000107c6142c(param_4);
    func_0x000107c6142c(uVar1);
    plVar7 = (long *)(puVar8 + 0x10);
    if (*plVar7 == 0) {
      func_0x000107c6142c(puVar8);
    }
    else {
      lVar2 = plVar7[*plVar7 * 2];
      lVar3 = (plVar7 + *plVar7 * 2)[1];
      func_0x000107c61174(lVar2);
      func_0x000107c61174();
      func_0x000107c6142c(puVar8);
      lVar4 = lVar3;
      func_0x000107c30b60();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c4223c();
        func_0x000107c61170(lVar4);
        uVar9 = param_2;
      }
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
    }
  }
  *param_1 = uVar9;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101877580; end: 1018776af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101877580(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  byte bStack_42;
  char cStack_41;
  
  if (*(int *)(param_3 + _DAT_113803420) == 10) {
    func_0x000107c614f0();
    pcVar3 = *(code **)(param_2 + 8);
    (*pcVar3)(&cStack_41,&UNK_110409ef0,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
    if (cStack_41 != '\x01') {
      param_4 = 0;
      goto LAB_101877694;
    }
    lVar2 = *(long *)(param_3 + _DAT_113803438);
    if (1 < lVar2 - 4U) {
      if (lVar2 == 9) {
        uVar1 = 0;
        func_0x00010403c628(0xd00000000000002a,0x800000010efbc050,param_1,param_2);
      }
      else {
        if (lVar2 != 3) goto LAB_101877694;
        (*pcVar3)(&bStack_42,&UNK_110409f08,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
        uVar1 = (uint)bStack_42;
      }
      param_4 = uVar1 | param_4;
      goto LAB_101877694;
    }
  }
  param_4 = 1;
LAB_101877694:
  return param_4 & 1;
}



/* Entry: 1018776b0; end: 1018776b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1018776b0(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  byte bStack_42;
  char cStack_41;
  
  bVar1 = *(byte *)(unaff_x20 + 0x10);
  if (*(int *)(param_3 + _DAT_113803420) == 10) {
    uVar2 = (uint)bVar1;
    func_0x000107c614f0();
    pcVar4 = *(code **)(param_2 + 8);
    (*pcVar4)(&cStack_41,&UNK_110409ef0,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
    if (cStack_41 != '\x01') {
      uVar2 = 0;
      goto LAB_101877694;
    }
    lVar3 = *(long *)(param_3 + _DAT_113803438);
    if (1 < lVar3 - 4U) {
      if (lVar3 == 9) {
        uVar2 = 0;
        func_0x00010403c628(0xd00000000000002a,0x800000010efbc050,param_1,param_2);
      }
      else {
        if (lVar3 != 3) goto LAB_101877694;
        (*pcVar4)(&bStack_42,&UNK_110409f08,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
        uVar2 = (uint)bStack_42;
      }
      uVar2 = uVar2 | bVar1;
      goto LAB_101877694;
    }
  }
  uVar2 = 1;
LAB_101877694:
  return uVar2 & 1;
}



/* Entry: 1018776b8; end: 1018776f7;  */

void FUN_1018776b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd26f70;
  func_0x000107c61520(&UNK_10dd26f70,&UNK_110796f88);
  puRam0000000112dcc688 = puVar1;
  return;
}



/* Entry: 1018776f8; end: 10187770f;  */

void FUN_1018776f8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  
  uVar5 = (uint)*(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = param_2;
  (**(code **)(unaff_x20 + 0x10))
            (param_2,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_101877820();
  lVar3 = lVar4;
  if ((uVar5 & 0xff) != 1) {
    lVar3 = param_2;
  }
  lVar1 = lVar4;
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  lVar2 = 0;
  if (lVar3 != lVar4) {
    lVar2 = lVar1;
  }
  if (0 < lVar4) {
    lVar3 = lVar2;
  }
  *param_1 = lVar3;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101877710; end: 10187777f;  */

void FUN_101877710(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101877190(param_1,*(undefined8 *)(unaff_x20 + 0x10),3);
  return;
}



/* Entry: 101877780; end: 101877787;  */

void FUN_101877780(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar6 = lVar7;
  FUN_101881ebc();
  if (lVar7 != 0) {
    lVar7 = lVar6;
    func_0x000107c6142c();
    uVar9 = *(ulong *)(lVar6 + 0x10);
    if (uVar9 == 0) {
      uVar9 = 0;
    }
    else {
      uVar8 = 0;
      plVar10 = (long *)(lVar6 + 0x28);
      do {
        lVar2 = plVar10[-1];
        lVar3 = *plVar10;
        func_0x000107c61174(lVar2);
        func_0x000107c61174();
        func_0x000107c61174(lVar2);
        func_0x000107c61174();
        lVar4 = lVar3;
        func_0x000107c30b4c();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar2);
        if (lVar4 != 0) {
          func_0x000107c61170(lVar4);
          uVar9 = uVar8;
          break;
        }
        plVar10 = plVar10 + 2;
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
    }
    if (uVar9 != *(ulong *)(lVar6 + 0x10)) {
      if (*(ulong *)(lVar6 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018773e0);
        (*pcVar1)();
      }
      lVar2 = lVar6 + uVar9 * 0x10;
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
      lVar2 = *(long *)(lVar2 + 0x28);
      func_0x000107c61174(uVar5);
      func_0x000107c61174();
      func_0x000107c61174(uVar5);
      func_0x000107c61174();
      lVar3 = lVar2;
      func_0x000107c30b4c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c5faec();
        func_0x000107c6142c(lVar6);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(lVar3);
        *param_1 = lVar4;
        param_1[1] = lVar7;
        return;
      }
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar5);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101877404);
      (*pcVar1)();
    }
    func_0x000107c6142c(lVar6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 101877788; end: 1018777c7;  */

void FUN_101877788(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101877404(param_1,*(undefined8 *)(unaff_x20 + 0x10),&UNK_10b890820);
  return;
}



/* Entry: 1018777c8; end: 1018777cf;  */

void FUN_1018777c8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  uVar6 = *(ulong *)(unaff_x20 + 0x10);
  uVar4 = uVar6;
  FUN_101882288();
  uVar9 = 0;
  if (uVar6 != 0) {
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(uVar6 + 0x10) != 0) {
      uVar5 = uVar4;
      func_0x000107c61434(uVar6);
      lVar1 = 3;
      func_0x0001018815cc();
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((uVar5 & 1) != 0) {
        puVar8 = *(undefined **)(*(long *)(uVar6 + 0x38) + lVar1 * 8);
        func_0x000107c61434(puVar8);
      }
      func_0x000107c6142c(uVar6);
    }
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(uVar4);
    plVar7 = (long *)(puVar8 + 0x10);
    if (*plVar7 == 0) {
      func_0x000107c6142c(puVar8);
    }
    else {
      lVar1 = plVar7[*plVar7 * 2];
      lVar2 = (plVar7 + *plVar7 * 2)[1];
      func_0x000107c61174(lVar1);
      func_0x000107c61174();
      func_0x000107c6142c(puVar8);
      lVar3 = lVar2;
      func_0x000107c30b60();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c4223c();
        func_0x000107c61170(lVar3);
        uVar9 = param_2;
      }
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
    }
  }
  *param_1 = uVar9;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1018777d0; end: 10187780f;  */

undefined8 FUN_1018777d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101877810; end: 10187781f;  */

undefined1  [16] FUN_101877810(void)

{
  return ZEXT816(0x11040a108);
}



/* Entry: 101877820; end: 10187798b;  */

void FUN_101877820(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  lVar6 = param_2;
  FUN_101881d40();
  if (param_2 != 0) {
    uVar8 = *(ulong *)(lVar6 + 0x10);
    if (uVar8 != 0) {
      uVar9 = 0;
      puVar10 = (undefined8 *)(lVar6 + 0x30);
      do {
        if (*(ulong *)(lVar6 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10187798c);
          (*pcVar1)();
        }
        lVar3 = puVar10[-2];
        uVar4 = puVar10[-1];
        uVar7 = *puVar10;
        uVar2 = uVar7;
        func_0x000107c61174(uVar7);
        func_0x000107c61174();
        func_0x000107c61174(uVar4);
        lVar5 = lVar3;
        func_0x0001018868c8(lVar3,uVar4,uVar7);
        if (((int)lVar5 == 3) ||
           (lVar5 = lVar3, func_0x0001018868c8(lVar3,uVar4,uVar7), (int)lVar5 == 4)) {
          func_0x000107c61170(uVar4);
          func_0x000107c6142c(lVar6);
          func_0x000107c6142c(param_2);
          func_0x000107c61170(uVar2);
          lVar6 = lVar3;
          func_0x000107c30af8();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          if (lVar6 == 0) {
            return;
          }
          func_0x000107c49820(lVar6);
          func_0x000107c61170(lVar6);
          return;
        }
        uVar9 = uVar9 + 1;
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(lVar3);
        puVar10 = puVar10 + 3;
      } while (uVar8 != uVar9);
    }
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(param_2);
  }
  return;
}



/* Entry: 10187798c; end: 101877a6b;  */

void FUN_10187798c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined *puVar5;
  
  uVar2 = param_2;
  FUN_101882288();
  if (param_2 != 0) {
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar3 = uVar2;
      func_0x000107c61434(param_2);
      lVar1 = 3;
      func_0x0001018815cc();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((uVar3 & 1) != 0) {
        puVar5 = *(undefined **)(*(long *)(param_2 + 0x38) + lVar1 * 8);
        func_0x000107c61434(puVar5);
      }
      func_0x000107c6142c(param_2);
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar2);
    plVar4 = (long *)(puVar5 + 0x10);
    if (*plVar4 == 0) {
      func_0x000107c6142c(puVar5);
    }
    else {
      lVar1 = (plVar4 + *plVar4 * 2)[1];
      func_0x000107c61174(plVar4[*plVar4 * 2]);
      func_0x000107c61174(lVar1);
      func_0x000107c6142c(puVar5);
    }
  }
  return;
}



/* Entry: 101877a6c; end: 101877b93;  */

undefined1 * FUN_101877a6c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x0001046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000101541068(param_1,puVar3);
  uVar2 = 0;
  func_0x0001047c6864(0);
  func_0x000107c610f8();
  func_0x0001047c2b40(puVar3,uVar2);
  puVar4 = puVar3;
  func_0x000107c49f38();
  func_0x000107c61170(puVar3);
  return puVar4;
}



/* Entry: 101877b94; end: 101877ba3;  */

undefined1  [16] FUN_101877b94(void)

{
  return ZEXT816(0x11040a128);
}



/* Entry: 101877ba4; end: 101877cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101877ba4(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  
  FUN_101881b6c();
  lVar1 = param_4;
  func_0x000107c6142c();
  lVar4 = *(long *)(param_4 + 0x10);
  func_0x000107c6142c(param_4);
  if (lVar4 == 0) {
    *param_1 = 0;
    uVar2 = 1;
  }
  else {
    FUN_101883b70();
    if (*(long *)(lVar1 + 0x10) == 0) {
      func_0x000107c6142c(lVar1);
      func_0x000107c6142c(param_4);
      uVar2 = 0;
      *param_1 = 0;
    }
    else {
      if (*(int *)(param_3 + _DAT_113803420) == 3) {
        lVar4 = param_4;
        FUN_101883e34();
        lVar3 = 0;
      }
      else {
        if (*(int *)(param_3 + _DAT_113803420) == 6) {
          lVar3 = param_4;
          FUN_101883c50();
        }
        else {
          lVar3 = 0;
        }
        lVar4 = 0;
      }
      FUN_101877e7c(param_4,lVar1,lVar3,lVar4);
      func_0x000107c6142c(lVar1);
      func_0x000107c6142c(param_4);
      func_0x000107c6142c(lVar4);
      func_0x000107c6142c(lVar3);
      uVar2 = 0;
      *param_1 = param_2;
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}



/* Entry: 101877cbc; end: 101877cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101877cbc(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  
  FUN_101881b6c();
  lVar1 = param_4;
  func_0x000107c6142c();
  lVar4 = *(long *)(param_4 + 0x10);
  func_0x000107c6142c(param_4);
  if (lVar4 == 0) {
    *param_1 = 0;
    uVar2 = 1;
  }
  else {
    FUN_101883b70();
    if (*(long *)(lVar1 + 0x10) == 0) {
      func_0x000107c6142c(lVar1);
      func_0x000107c6142c(param_4);
      uVar2 = 0;
      *param_1 = 0;
    }
    else {
      if (*(int *)(param_3 + _DAT_113803420) == 3) {
        lVar4 = param_4;
        FUN_101883e34();
        lVar3 = 0;
      }
      else {
        if (*(int *)(param_3 + _DAT_113803420) == 6) {
          lVar3 = param_4;
          FUN_101883c50();
        }
        else {
          lVar3 = 0;
        }
        lVar4 = 0;
      }
      FUN_101877e7c(param_4,lVar1,lVar3,lVar4);
      func_0x000107c6142c(lVar1);
      func_0x000107c6142c(param_4);
      func_0x000107c6142c(lVar4);
      func_0x000107c6142c(lVar3);
      uVar2 = 0;
      *param_1 = param_2;
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}



/* Entry: 101877cc0; end: 101877d2f;  */

void FUN_101877cc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  
  FUN_101881b6c();
  func_0x000107c6142c();
  bVar1 = *(long *)(param_4 + 0x10) == 0;
  if (bVar1) {
    param_2 = 0;
  }
  else {
    FUN_101878268(param_4);
  }
  func_0x000107c6142c(param_4);
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = bVar1;
  return;
}



/* Entry: 101877d30; end: 101877d33;  */

void FUN_101877d30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  
  FUN_101881b6c();
  func_0x000107c6142c();
  bVar1 = *(long *)(param_4 + 0x10) == 0;
  if (bVar1) {
    param_2 = 0;
  }
  else {
    FUN_101878268(param_4);
  }
  func_0x000107c6142c(param_4);
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = bVar1;
  return;
}



/* Entry: 101877d34; end: 101877d87;  */

undefined1 FUN_101877d34(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_78 [72];
  
  if (lRam0000000112dcc480 != -1) {
    func_0x000107c61568(0x112dcc480,FUN_101875c60);
  }
  lVar1 = lRam0000000112dcc488;
  if (*(long *)(lRam0000000112dcc488 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_78,*(undefined8 *)(lRam0000000112dcc488 + 0x28));
  uVar2 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar1 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((int)*(undefined8 *)(*(long *)(lVar1 + 0x30) + uVar2 * 8) == (int)param_1) {
        return 1;
      }
      uVar2 = uVar2 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 101877d88; end: 101877e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101877d88(undefined8 *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_101881b6c();
  func_0x000107c6142c();
  lVar3 = *(long *)(param_3 + 0x10);
  func_0x000107c6142c(param_3);
  if ((lVar3 == 0) || (*(int *)(param_2 + _DAT_113803428) != 0x16)) {
    uVar2 = 0;
    uVar1 = 1;
  }
  else {
    param_2 = param_2 + _DAT_113803418;
    lVar3 = 0;
    func_0x0001046d90b0();
    uVar1 = 0;
    uVar2 = *(undefined8 *)(param_2 + *(int *)(lVar3 + 0x40));
  }
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}



/* Entry: 101877e1c; end: 101877e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101877e1c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_68;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  if (*(int *)(param_3 + _DAT_113803420) == 10) {
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(uVar4);
    FUN_10187cae0(param_3,0,pcVar1,uVar6,param_3,uVar4);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(param_3);
    func_0x000107c61574(uVar4);
    uVar5 = 0;
    *param_1 = param_2;
  }
  else {
    pcVar3 = pcVar1;
    FUN_101881b6c();
    func_0x000107c6142c();
    lVar7 = *(long *)(pcVar3 + 0x10);
    func_0x000107c6142c(pcVar3);
    if (lVar7 == 0) {
      *param_1 = 0;
      uVar5 = 1;
    }
    else {
      uVar2 = param_3 + _DAT_113803418;
      (*pcVar1)();
      if ((uVar2 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        func_0x0001000d224c(&uStack_68);
        uVar6 = uStack_68;
        func_0x000107c4260c(uStack_68);
        func_0x000107c615e8(uStack_68);
      }
      FUN_10187cd88(param_3,uVar6);
      uVar5 = 0;
      *param_1 = param_2;
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar5;
  return;
}



/* Entry: 101877e30; end: 101877e5b;  */

void FUN_101877e30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101877e5c; end: 101877e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101877e5c(undefined8 *param_1,code *param_2)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 uVar4;
  long unaff_x20;
  code *pcVar5;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcStack_68;
  
  pcVar9 = *(code **)(unaff_x20 + 0x10);
  iVar1 = *(int *)(param_2 + _DAT_113803420);
  if (iVar1 == 10) {
    FUN_101881cb4();
  }
  else {
    pcVar8 = pcVar9;
    FUN_101881b6c(param_2,pcVar9,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                 );
    pcVar3 = pcVar8;
    func_0x000107c6142c();
    lVar6 = *(long *)(pcVar8 + 0x10);
    func_0x000107c6142c(pcVar8);
    if (lVar6 == 0) {
      param_2 = (code *)0x0;
      uVar4 = 1;
      goto LAB_10187d6bc;
    }
    if (iVar1 == 3) {
      FUN_101882438();
      pcVar5 = (code *)0x0;
      pcVar7 = (code *)0x0;
      pcVar10 = pcVar3;
    }
    else {
      if (iVar1 == 6) {
        FUN_101882274();
        pcVar5 = pcVar3;
      }
      else {
        pcVar5 = (code *)0x0;
        pcVar8 = (code *)0x0;
      }
      pcVar7 = pcVar8;
      pcVar8 = (code *)0x0;
      pcVar10 = (code *)0x0;
    }
    pcVar2 = param_2 + _DAT_113803418;
    (*pcVar9)();
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar9 = (code *)0x0;
    }
    else {
      func_0x0001000d224c(&pcStack_68);
      pcVar9 = pcStack_68;
      func_0x000107c4260c(pcStack_68);
      func_0x000107c615e8(pcStack_68);
      pcVar2 = pcStack_68;
    }
    FUN_101881b6c();
    param_2 = pcVar3;
    FUN_10187db1c(pcVar3,pcVar7,pcVar5,pcVar8,pcVar10,pcVar9);
    func_0x000107c6142c(pcVar3);
    func_0x000107c6142c(pcVar2);
    FUN_10187e2f8(pcVar8,pcVar10);
    FUN_10187e2f8(pcVar7,pcVar5);
  }
  uVar4 = 0;
LAB_10187d6bc:
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar4;
  return;
}



/* Entry: 101877e7c; end: 101878267;  */

double FUN_101877e7c(double param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  double dVar14;
  
  uVar8 = param_3;
  if (*(long *)(param_2 + 0x10) == 0) {
    lVar1 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(param_2);
    lVar1 = 9;
    func_0x0001018815d4();
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar8 & 1) != 0) {
      puVar12 = *(undefined **)(*(long *)(param_2 + 0x38) + lVar1 * 8);
      func_0x000107c61434(puVar12);
    }
    func_0x000107c6142c(param_2);
    lVar1 = *(long *)(puVar12 + 0x10);
  }
  if (lVar1 == 0) {
    func_0x000107c6142c(puVar12);
  }
  else {
    uVar3 = *(undefined8 *)(puVar12 + 0x20);
    uVar4 = *(undefined8 *)(puVar12 + 0x28);
    uVar9 = *(undefined8 *)(puVar12 + 0x30);
    uVar2 = uVar9;
    func_0x000107c61174(uVar9);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar4);
    func_0x000107c6142c(puVar12);
    if (*(long *)(param_2 + 0x10) == 0) {
      lVar1 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61434(param_2);
      lVar1 = 10;
      func_0x0001018815d4();
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((uVar8 & 1) != 0) {
        puVar12 = *(undefined **)(*(long *)(param_2 + 0x38) + lVar1 * 8);
        func_0x000107c61434(puVar12);
      }
      func_0x000107c6142c(param_2);
      lVar1 = *(long *)(puVar12 + 0x10);
    }
    if (lVar1 != 0) {
      uVar5 = *(undefined8 *)(puVar12 + 0x20);
      uVar6 = *(undefined8 *)(puVar12 + 0x28);
      uVar10 = *(undefined8 *)(puVar12 + 0x30);
      uVar7 = uVar10;
      func_0x000107c61174(uVar10);
      func_0x000107c61174(uVar5);
      func_0x000107c61174(uVar6);
      func_0x000107c6142c(puVar12);
      func_0x0001018868e4(uVar3,uVar4,uVar9);
      dVar14 = param_1;
      func_0x0001018868e4(uVar5,uVar6,uVar10);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      uVar3 = uVar5;
LAB_101878234:
      func_0x000107c61170(uVar3);
      if (0.0 < param_1 - dVar14) {
        return param_1 - dVar14;
      }
      return 0.0;
    }
    func_0x000107c6142c(puVar12);
    if ((param_4 != 0) && (lVar1 = *(long *)(param_4 + 0x10), lVar1 != 0)) {
      puVar13 = (undefined8 *)(param_4 + 0x28);
      do {
        uVar5 = puVar13[-1];
        uVar6 = *puVar13;
        func_0x000107c61174();
        func_0x000107c61174(uVar6);
        uVar7 = uVar5;
        func_0x0001018868d0(uVar5,uVar6);
        if (((int)uVar7 == 2) || (uVar7 = uVar5, func_0x0001018868d0(uVar5,uVar6), (int)uVar7 == 4))
        {
          func_0x0001018868e4(uVar3,uVar4,uVar9);
          dVar14 = param_1;
          func_0x000101886c4c(uVar5,uVar6);
          goto LAB_101878214;
        }
        puVar13 = puVar13 + 2;
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar5);
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
    if ((param_5 != 0) && (lVar1 = *(long *)(param_5 + 0x10), lVar1 != 0)) {
      puVar13 = (undefined8 *)(param_5 + 0x28);
      do {
        uVar5 = puVar13[-1];
        uVar6 = *puVar13;
        func_0x000107c61174();
        func_0x000107c61174(uVar6);
        uVar7 = uVar5;
        func_0x0001018868dc(uVar5,uVar6);
        if (((int)uVar7 == 10) || (uVar7 = uVar5, func_0x0001018868dc(uVar5,uVar6), (int)uVar7 == 7)
           ) {
          func_0x0001018868e4(uVar3,uVar4,uVar9);
          dVar14 = param_1;
          func_0x0001018868d8(uVar5,uVar6);
          goto LAB_101878214;
        }
        puVar13 = puVar13 + 2;
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar5);
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
    lVar1 = *(long *)(param_3 + 0x10);
    if (lVar1 != 0) {
      puVar13 = (undefined8 *)(param_3 + 0x30);
      do {
        uVar5 = puVar13[-2];
        uVar6 = puVar13[-1];
        uVar11 = *puVar13;
        uVar7 = uVar11;
        func_0x000107c61174(uVar11);
        func_0x000107c61174(uVar5);
        func_0x000107c61174();
        uVar10 = uVar6;
        func_0x000107c30b24();
        if ((int)uVar10 == 4) {
          func_0x0001018868e4(uVar3,uVar4,uVar9);
          dVar14 = param_1;
          func_0x0001018868e4(uVar5,uVar6,uVar11);
          func_0x000107c61170(uVar7);
LAB_101878214:
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar2);
          func_0x000107c61170(uVar4);
          goto LAB_101878234;
        }
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar5);
        lVar1 = lVar1 + -1;
        puVar13 = puVar13 + 3;
      } while (lVar1 != 0);
    }
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
  return 0.0;
}



/* Entry: 101878268; end: 1018785ff;  */

double FUN_101878268(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_88;
  
  lVar10 = *(long *)(param_2 + 0x10);
  if (lVar10 == 0) {
    dVar12 = 0.0;
  }
  else {
    lVar6 = 0;
    puVar7 = (undefined8 *)(param_2 + 0x30);
    dVar12 = 0.0;
    uVar5 = 0;
    uVar9 = 0;
    do {
      lVar2 = puVar7[-2];
      uVar3 = puVar7[-1];
      uVar8 = *puVar7;
      uVar1 = uVar8;
      func_0x000107c61174(uVar8);
      func_0x000107c61174();
      func_0x000107c61174();
      lVar4 = lVar2;
      func_0x0001018868c8(lVar2,uVar3,uVar8);
      if (lVar4 == 1) {
        FUN_101878600(lVar6,uVar5,uVar9);
        uStack_88 = uVar3;
        func_0x000107c61174();
        uVar5 = uVar1;
        func_0x000107c61174(uVar1);
        func_0x000101878638(0,0,0);
        lVar4 = lVar2;
        func_0x000107c61174(lVar2);
        func_0x000107c61174(uVar5);
        lVar6 = lVar2;
LAB_1018784a8:
        func_0x000107c61170();
        func_0x000107c61170(uStack_88);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(uVar1);
      }
      else {
        if (lVar4 == 2) {
          if (lVar6 != 0) {
            FUN_101878600(0,0,0);
            func_0x000107c61174(lVar2);
            func_0x000107c61174(uVar3);
            func_0x000107c61174(uVar1);
            func_0x000101878638(0,0,0);
            func_0x0001018868e4(lVar2,uVar3,uVar8);
            dVar11 = param_1;
            func_0x0001018868e4(lVar6,uVar5,uVar9);
            func_0x000107c61170(uVar5);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(uVar1);
            func_0x000107c61170(uVar1);
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar3);
            func_0x000107c61170(lVar2);
LAB_101878578:
            func_0x000107c61170(lVar2);
            func_0x000107c61170(uVar9);
            lVar6 = 0;
            param_1 = param_1 - dVar11;
            dVar12 = dVar12 + param_1;
            uVar3 = 0;
            uVar8 = 0;
            goto LAB_1018782cc;
          }
        }
        else if (lVar4 == 4) {
          if (lVar6 != 0) {
            FUN_101878600(0,0,0);
            func_0x000107c61174(lVar2);
            func_0x000107c61174(uVar3);
            func_0x000107c61174(uVar1);
            func_0x0001018868e4(lVar2,uVar3,uVar8);
            dVar11 = param_1;
            func_0x0001018868e4(lVar6,uVar5,uVar9);
            func_0x000107c61170(uVar1);
            func_0x000107c61170(uVar1);
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar3);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(uVar5);
            lVar2 = lVar6;
            goto LAB_101878578;
          }
        }
        else if (lVar6 != 0) {
          func_0x000101878638(lVar6,uVar5,uVar9);
          func_0x000101878638(0,0,0);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(uVar9);
          lVar4 = lVar6;
          func_0x000107c61174(lVar6);
          uStack_88 = uVar5;
          func_0x000107c61174();
          func_0x000107c61174(uVar9);
          func_0x000107c61170(uVar3);
          func_0x000107c61170(lVar2);
          uVar3 = uVar5;
          uVar8 = uVar9;
          goto LAB_1018784a8;
        }
        func_0x000107c61170(uVar1);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(lVar2);
        uVar3 = uVar5;
        uVar8 = uVar9;
      }
LAB_1018782cc:
      puVar7 = puVar7 + 3;
      lVar10 = lVar10 + -1;
      uVar5 = uVar3;
      uVar9 = uVar8;
    } while (lVar10 != 0);
    FUN_101878600(0,0,0);
    FUN_101878600(0,0,0);
    FUN_101878600(lVar6,uVar3,uVar8);
  }
  return dVar12;
}



/* Entry: 101878600; end: 101878673;  */

/* WARNING: Possible PIC construction at 0x000101878618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010187861c) */

void FUN_101878600(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 101878674; end: 10187868f;  */

undefined1 FUN_101878674(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_78 [72];
  
  if (lRam0000000112dcc480 != -1) {
    func_0x000107c61568(0x112dcc480,FUN_101875c60);
  }
  lVar1 = lRam0000000112dcc488;
  if (*(long *)(lRam0000000112dcc488 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_78,*(undefined8 *)(lRam0000000112dcc488 + 0x28));
  uVar2 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar1 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((int)*(undefined8 *)(*(long *)(lVar1 + 0x30) + uVar2 * 8) == (int)param_1) {
        return 1;
      }
      uVar2 = uVar2 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 101878690; end: 10187876b;  */

void FUN_101878690(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = param_3;
  FUN_101882274();
  uVar2 = uVar1;
  func_0x000107c6142c();
  lVar6 = *(long *)(uVar1 + 0x10);
  func_0x000107c6142c();
  if (lVar6 == 0) {
    uVar4 = 0;
    uVar3 = 1;
    goto LAB_101878750;
  }
  FUN_101882274();
  if (*(long *)(uVar1 + 0x10) == 0) {
LAB_101878738:
    func_0x000107c6142c(uVar1);
    uVar4 = 0;
  }
  else {
    uVar5 = uVar2;
    func_0x000107c61434(uVar1);
    func_0x0001018815d0();
    if ((uVar5 & 1) == 0) {
      func_0x000107c6142c(uVar1);
      goto LAB_101878738;
    }
    uVar5 = *(ulong *)(*(long *)(uVar1 + 0x38) + param_3 * 8);
    func_0x000107c61434(uVar5);
    func_0x000107c6142c(uVar2);
    func_0x000107c61430(uVar1,2);
    uVar4 = *(undefined8 *)(uVar5 + 0x10);
    uVar2 = uVar5;
  }
  func_0x000107c6142c(uVar2);
  uVar3 = 0;
LAB_101878750:
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar3;
  return;
}



/* Entry: 10187876c; end: 10187877b;  */

void FUN_10187876c(undefined8 param_1,long param_2,byte *param_3)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  
  if ((*param_3 & 1) == 0) {
    FUN_101882274();
    if (*(long *)(param_2 + 0x10) != 0) {
      pbVar3 = param_3;
      func_0x000107c61434(param_2);
      lVar2 = 3;
      func_0x0001018815d0();
      if (((ulong)pbVar3 & 1) != 0) {
        lVar4 = *(long *)(*(long *)(param_2 + 0x38) + lVar2 * 8);
        func_0x000107c61434(lVar4);
        func_0x000107c6142c(param_3);
        func_0x000107c61430(param_2,2);
        lVar2 = *(long *)(lVar4 + 0x10);
        func_0x000107c6142c(lVar4);
        bVar1 = lVar2 != 0;
        goto LAB_101878828;
      }
      func_0x000107c6142c(param_2);
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_3);
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
LAB_101878828:
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 10187877c; end: 10187883b;  */

void FUN_10187877c(undefined8 param_1,long param_2,byte *param_3,long param_4)

{
  bool bVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  
  if ((*param_3 & 1) == 0) {
    FUN_101882274();
    if (*(long *)(param_2 + 0x10) != 0) {
      pbVar2 = param_3;
      func_0x000107c61434(param_2);
      func_0x0001018815d0();
      if (((ulong)pbVar2 & 1) != 0) {
        lVar4 = *(long *)(*(long *)(param_2 + 0x38) + param_4 * 8);
        func_0x000107c61434(lVar4);
        func_0x000107c6142c(param_3);
        func_0x000107c61430(param_2,2);
        lVar3 = *(long *)(lVar4 + 0x10);
        func_0x000107c6142c(lVar4);
        bVar1 = lVar3 != 0;
        goto LAB_101878828;
      }
      func_0x000107c6142c(param_2);
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_3);
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
LAB_101878828:
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 10187883c; end: 1018788db;  */

void FUN_10187883c(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  
  if ((*param_3 & 1) == 0) {
    FUN_101882274();
    func_0x000107c6142c();
    lVar4 = *(long *)(param_3 + 0x10);
    uVar7 = 0xffffffffffffffff;
    lVar5 = 0x28;
    do {
      bVar2 = uVar7 - lVar4 == -1;
      bVar6 = !bVar2;
      if (bVar2) break;
      uVar7 = uVar7 + 1;
      if (*(ulong *)(param_3 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018788dc);
        (*pcVar1)();
      }
      iVar3 = (int)*(undefined8 *)(param_3 + lVar5);
      func_0x000107c30b50();
      lVar5 = lVar5 + 0x10;
    } while (iVar3 == 0);
    func_0x000107c6142c(param_3);
  }
  else {
    bVar6 = true;
  }
  *(bool *)param_1 = bVar6;
  return;
}



/* Entry: 1018788dc; end: 101878d4b;  */

void FUN_1018788dc(long *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  
  FUN_101882274();
  lVar5 = param_3;
  func_0x000107c6142c();
  lVar6 = *(long *)(param_3 + 0x10);
  func_0x000107c6142c(param_3);
  if (lVar6 == 0) {
    lVar7 = 1;
    lVar6 = 0;
  }
  else {
    FUN_101882274();
    lVar7 = lVar5;
    func_0x000107c6142c();
    uVar9 = *(ulong *)(lVar5 + 0x10);
    if (uVar9 == 0) {
      uVar9 = 0;
    }
    else {
      uVar8 = 0;
      plVar10 = (long *)(lVar5 + 0x28);
      do {
        lVar6 = plVar10[-1];
        lVar2 = *plVar10;
        func_0x000107c61174(lVar6);
        func_0x000107c61174();
        func_0x000107c61174(lVar6);
        func_0x000107c61174();
        lVar3 = lVar2;
        func_0x000107c30b4c();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar6);
        if (lVar3 != 0) {
          func_0x000107c61170(lVar3);
          uVar9 = uVar8;
          break;
        }
        plVar10 = plVar10 + 2;
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
    }
    if (uVar9 == *(ulong *)(lVar5 + 0x10)) {
      func_0x000107c6142c(lVar5);
      lVar6 = 0;
      lVar7 = 0;
    }
    else {
      if (*(ulong *)(lVar5 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101878a90);
        (*pcVar1)();
      }
      lVar6 = lVar5 + uVar9 * 0x10;
      uVar4 = *(undefined8 *)(lVar6 + 0x20);
      lVar2 = *(long *)(lVar6 + 0x28);
      func_0x000107c61174(uVar4);
      func_0x000107c61174();
      func_0x000107c61174(uVar4);
      func_0x000107c61174();
      lVar3 = lVar2;
      func_0x000107c30b4c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar4);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101878ab4);
        (*pcVar1)();
      }
      lVar6 = lVar3;
      func_0x000107c5faec();
      func_0x000107c6142c(lVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lVar3);
    }
  }
  *param_1 = lVar6;
  param_1[1] = lVar7;
  return;
}



/* Entry: 101878d4c; end: 101878d5b;  */

undefined1  [16] FUN_101878d4c(void)

{
  return ZEXT816(0x11040a210);
}



/* Entry: 101878d5c; end: 101878e33;  */

undefined8 FUN_101878d5c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101878e34; end: 101878ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101878e34(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined1 uStack_267;
  undefined6 uStack_266;
  undefined1 uStack_260;
  undefined1 uStack_25f;
  undefined7 uStack_25e;
  undefined1 uStack_257;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined8 uStack_1df;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
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
  undefined8 uStack_df;
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
  undefined8 uStack_5f;
  
  FUN_101881b6c();
  lVar3 = param_3;
  func_0x000107c6142c();
  lVar5 = *(long *)(param_3 + 0x10);
  func_0x000107c6142c(param_3);
  if (lVar5 == 0) {
LAB_101878f4c:
    FUN_101879788(&uStack_2d0);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + _DAT_113803428);
    FUN_101881b6c();
    lVar5 = param_3;
    FUN_101878ff4(&uStack_250,uVar4,param_3);
    func_0x000107c6142c(lVar3);
    func_0x000107c6142c(param_3);
    uStack_88 = uStack_208;
    uStack_90 = uStack_210;
    uStack_78 = uStack_1f8;
    uStack_80 = uStack_200;
    uStack_70 = uStack_1f0;
    uStack_5f = uStack_1df;
    uStack_c8 = uStack_248;
    uStack_d0 = uStack_250;
    uStack_b8 = uStack_238;
    uStack_c0 = uStack_240;
    uStack_a8 = uStack_228;
    uStack_b0 = uStack_230;
    uStack_98 = uStack_218;
    uStack_a0 = uStack_220;
    puVar2 = &uStack_d0;
    FUN_1018793b8();
    if ((int)puVar2 == 1) {
      FUN_101881b6c();
      FUN_1018793d4(&uStack_1d0);
      func_0x000107c6142c(lVar5);
      func_0x000107c6142c(puVar2);
      uStack_108 = uStack_188;
      uStack_110 = uStack_190;
      uStack_f8 = uStack_178;
      uStack_100 = uStack_180;
      uStack_f0 = uStack_170;
      uStack_df = uStack_15f;
      uStack_148 = uStack_1c8;
      uStack_150 = uStack_1d0;
      uStack_138 = uStack_1b8;
      uStack_140 = uStack_1c0;
      uStack_128 = uStack_1a8;
      uStack_130 = uStack_1b0;
      uStack_118 = uStack_198;
      uStack_120 = uStack_1a0;
      iVar1 = (int)&uStack_150;
      FUN_1018793b8();
      if (iVar1 == 1) goto LAB_101878f4c;
      uStack_288 = uStack_188;
      uStack_290 = uStack_190;
      uStack_278 = uStack_178;
      uStack_280 = uStack_180;
      uStack_268 = uStack_168;
      uStack_270 = uStack_170;
      uStack_25f = (undefined1)uStack_15f;
      uStack_25e = (undefined7)((ulong)uStack_15f >> 8);
      uStack_267 = (undefined1)uStack_167;
      uStack_266 = (undefined6)((uint7)uStack_167 >> 8);
      uStack_260 = uStack_160;
      uStack_2c8 = uStack_1c8;
      uStack_2d0 = uStack_1d0;
      uStack_2b8 = uStack_1b8;
      uStack_2c0 = uStack_1c0;
    }
    else {
      uStack_288 = uStack_208;
      uStack_290 = uStack_210;
      uStack_278 = uStack_1f8;
      uStack_280 = uStack_200;
      uStack_268 = uStack_1e8;
      uStack_270 = uStack_1f0;
      uStack_25f = (undefined1)uStack_1df;
      uStack_25e = (undefined7)((ulong)uStack_1df >> 8);
      uStack_267 = (undefined1)uStack_1e7;
      uStack_266 = (undefined6)((uint7)uStack_1e7 >> 8);
      uStack_260 = uStack_1e0;
      uStack_2c8 = uStack_248;
      uStack_2d0 = uStack_250;
      uStack_2b8 = uStack_238;
      uStack_2c0 = uStack_240;
      uStack_1b0 = uStack_230;
      uStack_1a8 = uStack_228;
      uStack_1a0 = uStack_220;
      uStack_198 = uStack_218;
    }
    uStack_2b0 = uStack_1b0;
    uStack_2a8 = uStack_1a8;
    uStack_2a0 = uStack_1a0;
    uStack_298 = uStack_198;
    func_0x0001018797ac(&uStack_2d0);
  }
  param_1[9] = uStack_288;
  param_1[8] = uStack_290;
  param_1[0xb] = uStack_278;
  param_1[10] = uStack_280;
  param_1[0xd] = CONCAT62(uStack_266,CONCAT11(uStack_267,uStack_268));
  param_1[0xc] = uStack_270;
  *(ulong *)((long)param_1 + 0x72) = CONCAT17(uStack_257,uStack_25e);
  *(ulong *)((long)param_1 + 0x6a) = CONCAT17(uStack_25f,CONCAT16(uStack_260,uStack_266));
  param_1[1] = uStack_2c8;
  *param_1 = uStack_2d0;
  param_1[3] = uStack_2b8;
  param_1[2] = uStack_2c0;
  param_1[5] = uStack_2a8;
  param_1[4] = uStack_2b0;
  param_1[7] = uStack_298;
  param_1[6] = uStack_2a0;
  return;
}



/* Entry: 101878ff4; end: 1018793b7;  */

void FUN_101878ff4(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
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
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  
  if ((param_3 & 0xfffffffe) == 0x16) {
    if (*(long *)(param_4 + 0x10) == 0) {
      lVar1 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar4 = param_4;
      func_0x000107c61434(param_4);
      lVar1 = 3;
      func_0x0001018815d4();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((uVar4 & 1) != 0) {
        puVar5 = *(undefined **)(*(long *)(param_4 + 0x38) + lVar1 * 8);
        func_0x000107c61434(puVar5);
      }
      func_0x000107c6142c(param_4);
      lVar1 = *(long *)(puVar5 + 0x10);
    }
    if (lVar1 == 0) {
      func_0x000107c6142c(puVar5);
    }
    else {
      uVar9 = *(undefined8 *)(puVar5 + 0x20);
      uVar7 = *(undefined8 *)(puVar5 + 0x28);
      lVar6 = *(long *)(puVar5 + 0x30);
      lVar1 = lVar6;
      func_0x000107c61174();
      func_0x000107c61174(uVar9);
      func_0x000107c61174(uVar7);
      func_0x000107c6142c(puVar5);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar9);
      if (lVar6 != 0) {
        lVar6 = lVar1;
        func_0x000107c30c6c();
        func_0x000107c61180();
        uVar7 = 0;
        uVar8 = 0;
        uVar9 = 0;
        if (lVar6 != 0) {
          lVar2 = lVar1;
          func_0x000107c30c70();
          func_0x000107c61180();
          uVar10 = param_2;
          if (lVar2 != 0) {
            func_0x000107c4223c(lVar6);
            uVar9 = param_2;
            func_0x000107c4223c(lVar2);
            uVar10 = uVar9;
            func_0x000107c61170(lVar2);
            uVar8 = param_2;
          }
          param_2 = uVar10;
          func_0x000107c61170(lVar6);
        }
        lVar6 = lVar1;
        func_0x000107c30c74();
        func_0x000107c61180();
        uVar10 = 0;
        if (lVar6 != 0) {
          lVar2 = lVar1;
          func_0x000107c30c78();
          func_0x000107c61180();
          if (lVar2 != 0) {
            func_0x000107c4223c(lVar6);
            uVar10 = param_2;
            func_0x000107c4223c(lVar2);
            func_0x000107c61170(lVar2);
            uVar7 = param_2;
          }
          func_0x000107c61170(lVar6);
        }
        lVar6 = lVar1;
        func_0x000107c30c7c();
        func_0x000107c61180();
        if (lVar6 != 0) {
          lVar2 = lVar1;
          func_0x000107c30c80();
          func_0x000107c61180();
          if (lVar2 != 0) {
            func_0x000107c4223c(lVar6);
            func_0x000107c4223c(lVar2);
            func_0x000107c61170(lVar2);
          }
          func_0x000107c61170(lVar6);
        }
        lVar6 = lVar1;
        func_0x000107c30c84();
        func_0x000107c61180();
        if (lVar6 != 0) {
          lVar2 = lVar1;
          func_0x000107c30c88();
          func_0x000107c61180();
          if (lVar2 != 0) {
            func_0x000107c4223c(lVar6);
            func_0x000107c4223c(lVar2);
            func_0x000107c61170(lVar2);
          }
          func_0x000107c61170(lVar6);
        }
        lVar6 = lVar1;
        func_0x000107c30c8c();
        func_0x000107c61180();
        if (lVar6 != 0) {
          func_0x000107c4223c();
          func_0x000107c61170(lVar6);
        }
        lVar6 = lVar1;
        func_0x000107c30c90();
        func_0x000107c61180();
        if (lVar6 != 0) {
          func_0x000107c4223c();
          func_0x000107c61170(lVar6);
        }
        lVar6 = lVar1;
        func_0x000107c30c94(lVar1);
        uVar3 = 0;
        func_0x0001047c8648(0);
        func_0x000107c610f8();
        func_0x0001047c7744(uVar8,uVar9,uVar7,uVar10,0,0,0,0,lVar6,uVar3);
        func_0x0001047c84d8(&uStack_190);
        func_0x000107c61170(lVar1);
        func_0x0001018797d8(&uStack_190);
        uStack_c8 = uStack_148;
        uStack_d0 = uStack_150;
        uStack_b8 = uStack_138;
        uStack_c0 = uStack_140;
        uStack_a8 = uStack_128;
        uStack_b0 = uStack_130;
        uStack_9f = uStack_11f;
        uStack_a7 = uStack_127;
        uStack_a0 = uStack_120;
        uStack_108 = uStack_188;
        uStack_110 = uStack_190;
        uStack_f8 = uStack_178;
        uStack_100 = uStack_180;
        uStack_e8 = uStack_168;
        uStack_f0 = uStack_170;
        uStack_d8 = uStack_158;
        uStack_e0 = uStack_160;
        goto LAB_101879364;
      }
    }
  }
  func_0x0001018797b4(&uStack_110);
LAB_101879364:
  param_1[9] = uStack_c8;
  param_1[8] = uStack_d0;
  param_1[0xb] = uStack_b8;
  param_1[10] = uStack_c0;
  param_1[0xd] = CONCAT71(uStack_a7,uStack_a8);
  param_1[0xc] = uStack_b0;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_9f;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_a0,uStack_a7);
  param_1[1] = uStack_108;
  *param_1 = uStack_110;
  param_1[3] = uStack_f8;
  param_1[2] = uStack_100;
  param_1[5] = uStack_e8;
  param_1[4] = uStack_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  return;
}



/* Entry: 1018793b8; end: 1018793d3;  */

int FUN_1018793b8(int *param_1)

{
  if ((char)param_1[0x1e] != '\0') {
    return *param_1 + 1;
  }
  return 0;
}


