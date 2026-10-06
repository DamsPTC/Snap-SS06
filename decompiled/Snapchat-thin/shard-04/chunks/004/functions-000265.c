/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10341b50c; end: 10341b557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341b50c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f66f20) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10341b558; end: 10341b5b7; -[_TtC30SCViewfinderDataSourceServices30SCViewfinderDataSourceServices init] */

void FUN_10341b558(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCViewfinderDataSourceServices.SCViewfinderDataSourceServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10341b584);
  (*pcVar1)();
}



/* Entry: 10341b5b8; end: 10341b5d7; -[_TtC30SCViewfinderDataSourceServices30SCViewfinderDataSourceServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341b5b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f66f20));
  return;
}



/* Entry: 10341b5d8; end: 10341b7af;  */

undefined1  [16] FUN_10341b5d8(ulong param_1,long param_2,char param_3)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_50;
  ulong uStack_48;
  
  if (param_3 == '\0') {
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c602fc(0x28);
    func_0x000107c5fb78(0xd00000000000001e,0x800000010f14bd10);
    func_0x000107c5fddc(param_1,&uStack_50,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    param_1 = 0x73646e6f63657320;
    param_2 = -0x1800000000000000;
  }
  else {
    if (param_3 != '\x01') {
      uVar1 = param_2 + (ulong)(param_1 >= 2);
      if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 2))) {
        pcVar2 = "Image capture timed out after ";
        uStack_50 = 0xd00000000000001d;
        if (param_1 != 0 || param_2 != 0) {
          pcVar2 = "already in progress";
          uStack_50 = 0xd000000000000024;
        }
        uStack_48 = (ulong)pcVar2 | 0x8000000000000000;
      }
      else {
        pcVar2 = "CViewfinderDataSourceServices";
        uVar4 = 0xd00000000000001d;
        if (param_1 != 3 || param_2 != 0) {
          pcVar2 = s_Cancelling_video_recording_disca_10f0f5f20 + 0x10;
          uVar4 = 0xd00000000000001b;
        }
        pcVar3 = "Video recording was cancelled";
        uStack_50 = 0xd000000000000030;
        if (param_1 != 2 || param_2 != 0) {
          pcVar3 = pcVar2;
          uStack_50 = uVar4;
        }
        uStack_48 = (ulong)pcVar3 | 0x8000000000000000;
      }
      goto LAB_10341b798;
    }
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c602fc(0x1a);
    func_0x000107c6142c(uStack_48);
    uStack_50 = 0xd000000000000018;
    uStack_48 = 0x800000010f0f5e80;
  }
  func_0x000107c5fb78(param_1,param_2);
LAB_10341b798:
  auVar5._8_8_ = uStack_48;
  auVar5._0_8_ = uStack_50;
  return auVar5;
}



/* Entry: 10341b7b0; end: 10341b7df;  */

void FUN_10341b7b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef9110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc2ab0;
  func_0x000107c61520(&UNK_10dbc2ab0,&UNK_110652ef8);
  puRam0000000112ef9110 = puVar1;
  return;
}



/* Entry: 10341b7e0; end: 10341b87b;  */

undefined8 * FUN_10341b7e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000102b6b720(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10341b87c; end: 10341b8bf;  */

undefined8 * FUN_10341b87c(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001033fa020(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10341b8c0; end: 10341b993;  */

int FUN_10341b8c0(int *param_1,uint param_2)

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



/* Entry: 10341b994; end: 10341b9e3;  */

uint FUN_10341b994(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  
  func_0x000107c61174();
  FUN_10341be2c(auStack_48);
  FUN_10341b9e4(param_1);
  FUN_10341baa4(auStack_48);
  return (uint)param_1 & 0xff;
}



/* Entry: 10341b9e4; end: 10341baa3;  */

undefined4 FUN_10341b9e4(int param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  
  if (((ulong)unaff_x20[4] >> 0x3d & 1) == 0) {
    uVar2 = unaff_x20[3] & 0xffffffffffff;
  }
  else {
    uVar2 = (ulong)unaff_x20[4] >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    return 5;
  }
  lVar3 = *unaff_x20;
  if (lVar3 == 0x6d) {
    return 4;
  }
  if ((*(byte *)((long)unaff_x20 + 0x11) & 1) != 0) {
    return 3;
  }
  if (lVar3 == 0x59) {
    return 6;
  }
  if (lVar3 == 0x79) {
    return 7;
  }
  if (lVar3 == 0x85) {
    return 8;
  }
  if (unaff_x20[1] != 0x2a) {
    if (lVar3 - 0x2aU < 2) {
      uVar1 = 1;
      if (param_1 == 1) {
        uVar1 = 2;
      }
      return uVar1;
    }
    if (lVar3 != 0x3c) {
      return 10;
    }
    return 9;
  }
  return 0;
}



/* Entry: 10341baa4; end: 10341bad7;  */

undefined8 FUN_10341baa4(undefined8 param_1)

{
  FUN_10341bb0c();
  return param_1;
}



/* Entry: 10341bad8; end: 10341badf;  */

void FUN_10341bad8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10341bae0; end: 10341bb0b;  */

long FUN_10341bae0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10341bb0c; end: 10341bb13;  */

void FUN_10341bb0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10341bb14; end: 10341bbf7;  */

undefined8 * FUN_10341bb14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10341bbf8; end: 10341bc97;  */

int FUN_10341bbf8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10341bc98; end: 10341bdaf;  */

void FUN_10341bc98(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long in_x6;
  undefined8 *in_x7;
  undefined8 *in_stack_00000000;
  undefined1 *in_stack_00000008;
  long *in_stack_00000010;
  undefined1 *in_stack_00000018;
  
  uVar1 = param_1;
  func_0x000107c5b3f0();
  *in_x7 = uVar1;
  func_0x000107c4d534();
  *in_stack_00000000 = param_1;
  if (param_3 == 0) {
    *in_stack_00000008 = 0;
    lVar3 = in_stack_00000010[1];
    *in_stack_00000010 = 0;
    in_stack_00000010[1] = -0x2000000000000000;
    func_0x000107c6142c(lVar3);
  }
  else {
    *in_stack_00000008 = 1;
    func_0x000107c52060();
    func_0x000107c61180();
    lVar3 = param_3;
    func_0x000107c5faec();
    func_0x000107c61170(param_3);
    lVar2 = in_stack_00000010[1];
    *in_stack_00000010 = lVar3;
    in_stack_00000010[1] = param_2;
    func_0x000107c6142c(lVar2);
  }
  if (in_x6 != 0) {
    func_0x000107c4f4a8();
    func_0x000107c61180();
    if (in_x6 != 0) {
      lVar3 = in_x6;
      func_0x000107c43700();
      func_0x000107c61180();
      func_0x000107c61170(in_x6);
      if (lVar3 != 0) {
        lVar2 = lVar3;
        func_0x000107c49804();
        func_0x000107c61170(lVar3);
        if ((int)lVar2 == 3) {
          *in_stack_00000018 = 1;
        }
      }
    }
  }
  return;
}



/* Entry: 10341bdb0; end: 10341be2b;  */

long FUN_10341bdb0(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar1 = 0;
  if (((param_1[1] == param_2[1]) && (((*(byte *)(param_2 + 2) ^ *(byte *)(param_1 + 2)) & 1) == 0))
     && (((*(byte *)((long)param_2 + 0x11) ^ *(byte *)((long)param_1 + 0x11)) & 1) == 0)) {
    lVar1 = param_1[3];
    if ((lVar1 != param_2[3]) || (param_1[4] != param_2[4])) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(lVar1,param_1[4],param_2[3],param_2[4],0);
      return lVar1;
    }
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 10341be2c; end: 10341bfd3;  */

void FUN_10341be2c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_72;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = 0xffffffffffffffff;
  uStack_68 = 0xffffffffffffffff;
  uStack_72 = 0;
  uStack_88 = 0;
  uStack_80 = 0xe000000000000000;
  puVar9 = &UNK_1106530d8;
  func_0x000107c613fc(&UNK_1106530d8,0x38,7);
  *(undefined8 **)(puVar9 + 0x10) = &uStack_68;
  *(undefined8 **)(puVar9 + 0x18) = &uStack_70;
  *(long *)(puVar9 + 0x20) = (long)&uStack_72 + 1;
  *(undefined8 **)(puVar9 + 0x28) = &uStack_88;
  *(undefined2 **)(puVar9 + 0x30) = &uStack_72;
  puVar10 = &UNK_110653100;
  func_0x000107c613fc(&UNK_110653100,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_10341c13c;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  uStack_98 = 0x10341c16c;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_1019dec60;
  puStack_a0 = &UNK_110653118;
  ppuVar11 = &puStack_b8;
  puStack_90 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar1 = puStack_90;
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c4c590(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd0(ppuVar11);
  uVar7 = uStack_68;
  uVar6 = uStack_70;
  uVar3 = uStack_80;
  uVar2 = uStack_88;
  uVar5 = uStack_72._1_1_;
  uVar4 = (undefined1)uStack_72;
  func_0x000107c61574(puVar9);
  puVar9 = puVar10;
  func_0x000107c61544(puVar10,"",0x74,0x1d,0x25,1);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar9 & 1) == 0) {
    *param_1 = uVar7;
    param_1[1] = uVar6;
    *(undefined1 *)(param_1 + 2) = uVar5;
    *(undefined1 *)((long)param_1 + 0x11) = uVar4;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10341bfd4);
  (*pcVar8)();
}



/* Entry: 10341bfd4; end: 10341c13b;  */

undefined4 FUN_10341bfd4(long *param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = param_1[1];
  if ((lVar4 == 0x2a) && (*param_1 == 0x3c)) {
    FUN_10341baa4();
    uVar3 = 6;
  }
  else if ((*(byte *)((long)param_1 + 0x11) & 1) == 0) {
    FUN_10341baa4();
    lVar1 = *param_1;
    if (lVar1 < 0x3c) {
      if (lVar1 < 0x2a) {
        if (lVar1 == 1) {
          return 3;
        }
        if (lVar1 == 0x11) {
          return 5;
        }
      }
      else {
        if (lVar1 == 0x2a) {
          return 0xb;
        }
        if (lVar1 == 0x2b) {
          if (lVar4 != 0xe) {
            return 4;
          }
          uVar3 = 0xf;
          if (param_2 != 1) {
            uVar3 = 7;
          }
          if ((*(byte *)(param_1 + 2) & 1) != 0) {
            return 4;
          }
          return uVar3;
        }
      }
    }
    else if (lVar1 < 0x6d) {
      if (lVar1 == 0x3c) {
        return 10;
      }
      if (lVar1 == 0x59) {
        return 9;
      }
    }
    else {
      if (lVar1 == 0x6d) {
        return 1;
      }
      if (lVar1 == 0x79) {
        return 8;
      }
      if (lVar1 == 0x85) {
        return 0x10;
      }
    }
    uVar3 = 0;
  }
  else {
    lVar4 = *param_1;
    FUN_10341baa4();
    uVar2 = 0xe;
    if (param_2 != 1) {
      uVar2 = 2;
    }
    if (lVar4 == 0x2a) {
      uVar2 = 0xd;
    }
    uVar3 = 0xc;
    if (lVar4 != 1) {
      uVar3 = uVar2;
    }
  }
  return uVar3;
}



/* Entry: 10341c13c; end: 10341c18f;  */

void FUN_10341c13c(void)

{
  FUN_10341bc98();
  return;
}



/* Entry: 10341c190; end: 10341c1d3;  */

void FUN_10341c190(long param_1,long param_2)

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



/* Entry: 10341c1d4; end: 10341c223;  */

undefined1 * FUN_10341c1d4(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [40];
  
  func_0x000107c61174();
  FUN_10341be2c(auStack_48);
  puVar1 = auStack_48;
  FUN_10341bfd4(puVar1,param_2);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 10341c224; end: 10341c2b7;  */

void FUN_10341c224(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126c8c00;
    func_0x000107c610f8(PTR_PTR_1126c8c00);
    func_0x000107c453e4();
    func_0x000107c4ca50();
    func_0x000107c61170(puVar1);
    FUN_10341c2b8(param_1,uVar2);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 10341c2b8; end: 10341c54f;  */

/* WARNING: Possible PIC construction at 0x00010341c328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010341c35c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010341c424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010341c334: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010341c428) */
/* WARNING: Removing unreachable block (ram,0x00010341c360) */
/* WARNING: Removing unreachable block (ram,0x00010341c32c) */
/* WARNING: Removing unreachable block (ram,0x00010341c524) */
/* WARNING: Removing unreachable block (ram,0x00010341c338) */
/* WARNING: Removing unreachable block (ram,0x00010341c36c) */
/* WARNING: Removing unreachable block (ram,0x00010341c374) */
/* WARNING: Removing unreachable block (ram,0x00010341c37c) */
/* WARNING: Removing unreachable block (ram,0x00010341c3a4) */
/* WARNING: Removing unreachable block (ram,0x00010341c544) */
/* WARNING: Removing unreachable block (ram,0x00010341c3cc) */
/* WARNING: Removing unreachable block (ram,0x00010341c3d8) */
/* WARNING: Removing unreachable block (ram,0x00010341c3dc) */
/* WARNING: Removing unreachable block (ram,0x00010341c548) */
/* WARNING: Removing unreachable block (ram,0x00010341c3e0) */
/* WARNING: Removing unreachable block (ram,0x00010341c3e8) */
/* WARNING: Removing unreachable block (ram,0x00010341c3ec) */
/* WARNING: Removing unreachable block (ram,0x00010341c54c) */
/* WARNING: Removing unreachable block (ram,0x00010341c3f0) */
/* WARNING: Removing unreachable block (ram,0x00010341c388) */

void FUN_10341c2b8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c61434(lVar2);
  func_0x000107c4b1dc();
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  lVar4 = param_2;
  if ((lVar2 != 0) && ((lVar4 = lVar2, lVar1 != lVar3 || (lVar2 != param_2)))) {
    func_0x000107c605b8(lVar1,lVar2,lVar3,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar4);
  return;
}



/* Entry: 10341c550; end: 10341c5ef;  */

void FUN_10341c550(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if (2 < (uint)((ulong)uVar2 >> 0x3d) - 1) {
      puVar1 = PTR_PTR_1126c8c00;
      func_0x000107c610f8(PTR_PTR_1126c8c00);
      func_0x000107c453e4();
      func_0x000107c4ca50();
      func_0x000107c61170(puVar1);
      FUN_10341c5f0(param_1);
    }
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 10341c5f0; end: 10341c753;  */

/* WARNING: Possible PIC construction at 0x00010341c6f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010341c6f8) */

void FUN_10341c5f0(double param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x30);
  if (lVar1 == 0) {
    return;
  }
  puVar4 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c61434(lVar1);
  func_0x000107c51b38(puVar4);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10341c74c);
    (*pcVar3)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10341c750);
    (*pcVar3)();
  }
  if (param_1 < 9.223372036854776e+18) {
    lVar2 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
    lVar5 = 0x112f67000;
    func_0x0001000285a8(0x112f67000,&UNK_10dbc2e20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x30) = 0;
    *(long *)(lVar5 + 0x20) = (long)param_1;
    *(undefined1 *)(lVar5 + 0x38) = 0xd;
    (**(code **)(lVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10341c754);
  (*pcVar3)();
}



/* Entry: 10341c754; end: 10341c7a7;  */

void FUN_10341c754(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10341c7a8; end: 10341c7bb;  */

bool FUN_10341c7a8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10341c7bc; end: 10341c867;  */

void FUN_10341c7bc(void)

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



/* Entry: 10341c868; end: 10341c873;  */

undefined8
FUN_10341c868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c614f0();
  uVar1 = param_1;
  FUN_10341d93c(param_1,param_3,param_4,param_5);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_5);
  return uVar1;
}



/* Entry: 10341c874; end: 10341cb57;  */

undefined8
FUN_10341c874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,code *param_6)

{
  undefined8 uVar1;
  
  func_0x000107c614f0();
  uVar1 = param_1;
  (*param_6)(param_1,param_3,param_4,param_5);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_5);
  return uVar1;
}



/* Entry: 10341cb58; end: 10341cc1f;  */

void FUN_10341cb58(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  func_0x000104505ba4(FUN_10341cc20,0,0x10341cc24,0,0x10341cc28,0,0x10341cc2c,0,0x10341dc3c,
                      auStack_40,0x10341dc48,param_3,0x10341dc50,param_3,FUN_10341d4d4,0,0x10341d4d8
                      ,0,0x10341d4dc,0,0x10341d4e0,0,0x10341d4e4,0);
  return;
}



/* Entry: 10341cc20; end: 10341cc2f;  */

void FUN_10341cc20(void)

{
  return;
}



/* Entry: 10341cc30; end: 10341cdab;  */

void FUN_10341cc30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint in_w5;
  long in_x6;
  undefined1 auStack_58 [24];
  
  if ((in_w5 & 1) != 0) {
    func_0x000107c61428(in_x6 + 0x10,auStack_58,0,0);
    in_x6 = in_x6 + 0x10;
    func_0x000107c61648();
    if (in_x6 != 0) {
      uVar1 = 0x112f67100;
      func_0x0001000285a8(0x112f67100,&UNK_10dbc31e0);
      func_0x000107c61538();
      puVar2 = PTR_PTR_1126c8c00;
      func_0x000107c610f8(PTR_PTR_1126c8c00);
      func_0x000107c453e4();
      func_0x000107c4ca50();
      func_0x000107c61170(puVar2);
      FUN_10341cdac(param_1,uVar1,param_2);
      func_0x000107c61574(in_x6);
    }
  }
  return;
}



/* Entry: 10341cdac; end: 10341d417;  */

void FUN_10341cdac(double param_1,long param_2,ulong param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  long lVar18;
  char *pcVar19;
  char *pcVar20;
  long unaff_x20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  double dVar26;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar12 = auStack_90;
  puVar13 = auStack_90;
  puVar14 = auStack_90;
  uVar22 = param_3;
  func_0x000107c61168(PTR_PTR_1126afec0);
  dVar26 = param_1;
  func_0x000107c51b38();
  if (0x7fefffffffffffff < (ulong)ABS(dVar26)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10341d29c);
    (*pcVar2)();
  }
  if (dVar26 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10341d2a0);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar26) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10341d2a4);
    (*pcVar2)();
  }
  uVar21 = *(ulong *)(unaff_x20 + 0x28);
  uVar10 = uVar22;
  if (uVar21 != 0) {
    uVar23 = *(ulong *)(unaff_x20 + 0x20);
    func_0x000107c61434(uVar21);
    uVar4 = param_3;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5faec();
    uVar10 = uVar22;
    func_0x000107c61170(uVar4);
    if ((uVar23 == uVar5) && (uVar21 == uVar22)) {
      func_0x000107c6142c(uVar21);
      func_0x000107c6142c(uVar22);
    }
    else {
      uVar10 = uVar21;
      func_0x000107c605b8(uVar23,uVar21,uVar5,uVar22,0);
      func_0x000107c6142c(uVar21);
      func_0x000107c6142c(uVar22);
      if ((uVar23 & 1) == 0) {
        FUN_10341d6e4(param_1);
      }
    }
  }
  uVar22 = param_3;
  func_0x000107c49c88();
  if ((uVar22 & 1) != 0) {
    return;
  }
  lVar25 = (long)dVar26;
  uVar22 = param_3;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar21 = uVar22;
  func_0x000107c5faec();
  func_0x000107c61170(uVar22);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  *(ulong *)(unaff_x20 + 0x20) = uVar21;
  *(ulong *)(unaff_x20 + 0x28) = uVar10;
  func_0x000107c6142c(uVar6);
  puVar11 = auStack_78;
  func_0x000107c61428(unaff_x20 + 0x30,puVar11,0,0);
  lVar15 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x10);
  pcVar17 = (char *)(*(long *)(unaff_x20 + 0x30) + 0x20);
  do {
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar15 == 0) {
      lVar15 = *(long *)(param_2 + 0x10);
      pcVar17 = (char *)(param_2 + 0x20);
      goto LAB_10341cf50;
    }
    cVar1 = *pcVar17;
    lVar15 = lVar15 + -1;
    pcVar17 = pcVar17 + 1;
  } while (cVar1 != '\0');
  goto LAB_10341cff0;
  while( true ) {
    cVar1 = *pcVar20;
    lVar16 = lVar16 + -1;
    pcVar20 = pcVar20 + 1;
    if (cVar1 == '\x02') break;
LAB_10341d048:
    if (lVar16 == 0) goto LAB_10341d098;
  }
  goto LAB_10341d05c;
  while( true ) {
    cVar1 = *pcVar19;
    lVar18 = lVar18 + -1;
    pcVar19 = pcVar19 + 1;
    if (cVar1 == '\x01') break;
LAB_10341d0b0:
    if (lVar18 == 0) goto LAB_10341d150;
  }
  puVar7 = puVar9;
  func_0x000107c61558();
  puVar8 = puVar9;
  if (((ulong)puVar7 & 1) == 0) {
    puVar8 = (undefined *)0x0;
    func_0x000103422070(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
  }
  uVar22 = *(ulong *)(puVar8 + 0x10);
  puVar9 = puVar8;
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar22) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    func_0x000103422070(puVar9,uVar22 + 1,1,puVar8);
  }
  *(ulong *)(puVar9 + 0x10) = uVar22 + 1;
  *(undefined8 *)(puVar9 + uVar22 * 0x20 + 0x28) = 0;
  *(undefined8 *)(puVar9 + uVar22 * 0x20 + 0x30) = 0;
  *(long *)(puVar9 + uVar22 * 0x20 + 0x20) = lVar25;
  puVar9[uVar22 * 0x20 + 0x38] = 1;
  func_0x000107c61428(unaff_x20 + 0x30,auStack_90,0x21,0);
  uVar21 = *(ulong *)(unaff_x20 + 0x30);
  uVar22 = uVar21;
  func_0x000107c61558();
  *(ulong *)(unaff_x20 + 0x30) = uVar21;
  puVar11 = puVar13;
  uVar10 = uVar21;
  if ((uVar22 & 1) == 0) {
    puVar11 = (undefined1 *)(*(long *)(uVar21 + 0x10) + 1);
    uVar10 = 0;
    FUN_103421f80(0,puVar11,1,uVar21);
    *(ulong *)(unaff_x20 + 0x30) = uVar10;
  }
  uVar21 = *(ulong *)(uVar10 + 0x10);
  puVar12 = (undefined1 *)(uVar21 + 1);
  uVar22 = uVar10;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar21) {
    uVar22 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    puVar11 = puVar12;
    FUN_103421f80(uVar22,puVar12,1,uVar10);
  }
  *(undefined1 **)(uVar22 + 0x10) = puVar12;
  *(undefined1 *)(uVar22 + uVar21 + 0x20) = 1;
  *(ulong *)(unaff_x20 + 0x30) = uVar22;
  func_0x000107c614a8(auStack_90);
  lVar16 = *(long *)(uVar22 + 0x10);
  goto LAB_10341d150;
  while( true ) {
    cVar1 = *pcVar17;
    lVar24 = lVar24 + -1;
    pcVar17 = pcVar17 + 1;
    if (cVar1 == '\x02') break;
LAB_10341d17c:
    if (lVar24 == 0) goto LAB_10341d20c;
  }
  puVar7 = puVar9;
  func_0x000107c61558();
  puVar8 = puVar9;
  if (((ulong)puVar7 & 1) == 0) {
    puVar8 = (undefined *)0x0;
    func_0x000103422070(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
  }
  uVar22 = *(ulong *)(puVar8 + 0x10);
  puVar9 = puVar8;
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar22) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    func_0x000103422070(puVar9,uVar22 + 1,1,puVar8);
  }
  *(ulong *)(puVar9 + 0x10) = uVar22 + 1;
  *(undefined8 *)(puVar9 + uVar22 * 0x20 + 0x28) = 0;
  *(undefined8 *)(puVar9 + uVar22 * 0x20 + 0x30) = 0;
  *(long *)(puVar9 + uVar22 * 0x20 + 0x20) = lVar25;
  puVar9[uVar22 * 0x20 + 0x38] = 2;
  func_0x000107c61428(unaff_x20 + 0x30,auStack_90,0x21,0);
  uVar21 = *(ulong *)(unaff_x20 + 0x30);
  uVar22 = uVar21;
  func_0x000107c61558();
  *(ulong *)(unaff_x20 + 0x30) = uVar21;
  puVar11 = puVar14;
  uVar10 = uVar21;
  if ((uVar22 & 1) == 0) {
    puVar11 = (undefined1 *)(*(long *)(uVar21 + 0x10) + 1);
    uVar10 = 0;
    FUN_103421f80(0,puVar11,1,uVar21);
    *(ulong *)(unaff_x20 + 0x30) = uVar10;
  }
  uVar22 = *(ulong *)(uVar10 + 0x10);
  puVar12 = (undefined1 *)(uVar22 + 1);
  uVar21 = uVar10;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar22) {
    uVar21 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    puVar11 = puVar12;
    FUN_103421f80(uVar21,puVar12,1,uVar10);
  }
  *(undefined1 **)(uVar21 + 0x10) = puVar12;
  *(undefined1 *)(uVar21 + uVar22 + 0x20) = 2;
  *(ulong *)(unaff_x20 + 0x30) = uVar21;
  func_0x000107c614a8(auStack_90);
  goto LAB_10341d20c;
  while( true ) {
    cVar1 = *pcVar17;
    lVar15 = lVar15 + -1;
    pcVar17 = pcVar17 + 1;
    if (cVar1 == '\0') break;
LAB_10341cf50:
    if (lVar15 == 0) goto LAB_10341cff0;
  }
  puVar7 = (undefined *)0x0;
  func_0x000103422070(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar22 = *(ulong *)(puVar7 + 0x10);
  puVar9 = puVar7;
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar22) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
    func_0x000103422070(puVar9,uVar22 + 1,1,puVar7);
  }
  *(ulong *)(puVar9 + 0x10) = uVar22 + 1;
  *(undefined8 *)(puVar9 + uVar22 * 0x20 + 0x28) = 0;
  *(undefined8 *)(puVar9 + uVar22 * 0x20 + 0x30) = 0;
  *(long *)(puVar9 + uVar22 * 0x20 + 0x20) = lVar25;
  puVar9[uVar22 * 0x20 + 0x38] = 0;
  func_0x000107c61428(unaff_x20 + 0x30,auStack_90,0x21,0);
  uVar21 = *(ulong *)(unaff_x20 + 0x30);
  uVar22 = uVar21;
  func_0x000107c61558();
  *(ulong *)(unaff_x20 + 0x30) = uVar21;
  puVar11 = puVar12;
  uVar10 = uVar21;
  if ((uVar22 & 1) == 0) {
    puVar11 = (undefined1 *)(*(long *)(uVar21 + 0x10) + 1);
    uVar10 = 0;
    FUN_103421f80(0,puVar11,1,uVar21);
    *(ulong *)(unaff_x20 + 0x30) = uVar10;
  }
  uVar22 = *(ulong *)(uVar10 + 0x10);
  puVar12 = (undefined1 *)(uVar22 + 1);
  uVar21 = uVar10;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar22) {
    uVar21 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    puVar11 = puVar12;
    FUN_103421f80(uVar21,puVar12,1,uVar10);
  }
  *(undefined1 **)(uVar21 + 0x10) = puVar12;
  *(undefined1 *)(uVar21 + uVar22 + 0x20) = 0;
  *(ulong *)(unaff_x20 + 0x30) = uVar21;
  func_0x000107c614a8(auStack_90);
LAB_10341cff0:
  uVar22 = param_3;
  func_0x000107c5d0f0();
  if (uVar22 == 10) {
    bVar3 = true;
  }
  else {
    uVar22 = param_3;
    func_0x000107c5d0f0();
    bVar3 = uVar22 == 0;
  }
  lVar24 = *(long *)(param_2 + 0x10);
  pcVar17 = (char *)(param_2 + 0x20);
  lVar15 = lVar24;
  pcVar19 = pcVar17;
  do {
    lVar16 = lVar24;
    pcVar20 = pcVar17;
    if (lVar15 == 0) goto LAB_10341d048;
    cVar1 = *pcVar19;
    lVar15 = lVar15 + -1;
    pcVar19 = pcVar19 + 1;
  } while (cVar1 != '\x01');
LAB_10341d05c:
  if ((bVar3) || (uVar22 = param_3, func_0x000107c49d84(), (int)uVar22 != 0)) {
    lVar15 = 0;
    uVar22 = *(ulong *)(unaff_x20 + 0x30);
    lVar16 = *(long *)(uVar22 + 0x10);
    do {
      lVar18 = lVar24;
      pcVar19 = pcVar17;
      if (lVar16 == lVar15) goto LAB_10341d0b0;
      lVar18 = uVar22 + lVar15;
      lVar15 = lVar15 + 1;
    } while (*(char *)(lVar18 + 0x20) != '\x01');
LAB_10341d150:
    pcVar19 = (char *)(uVar22 + 0x20);
    do {
      if (lVar16 == 0) goto LAB_10341d17c;
      cVar1 = *pcVar19;
      lVar16 = lVar16 + -1;
      pcVar19 = pcVar19 + 1;
    } while (cVar1 != '\x02');
LAB_10341d20c:
    func_0x000107c4b1dc(param_3);
  }
  else {
LAB_10341d098:
    func_0x000107c4b1dc(param_3);
  }
  func_0x000107c61180();
  uVar22 = param_3;
  func_0x000107c5faec();
  func_0x000107c61170(param_3);
  if (*(long *)(puVar9 + 0x10) != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar15 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c614f0(uVar6);
    (**(code **)(lVar15 + 8))(puVar9,uVar22,puVar11,uVar6,lVar15);
  }
  func_0x000107c6142c(puVar9);
  func_0x000107c6142c(puVar11);
  return;
}



/* Entry: 10341d418; end: 10341d4d3;  */

void FUN_10341d418(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long in_x5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(in_x5 + 0x10,auStack_58,0,0);
  in_x5 = in_x5 + 0x10;
  func_0x000107c61648();
  if (in_x5 != 0) {
    uVar1 = 0x112f67100;
    func_0x0001000285a8(0x112f67100,&UNK_10dbc31e0);
    func_0x000107c61538();
    puVar2 = PTR_PTR_1126c8c00;
    func_0x000107c610f8(PTR_PTR_1126c8c00);
    func_0x000107c453e4();
    func_0x000107c4ca50();
    func_0x000107c61170(puVar2);
    FUN_10341cdac(param_1,uVar1,param_2);
    func_0x000107c61574(in_x5);
  }
  return;
}



/* Entry: 10341d4d4; end: 10341d4e7;  */

void FUN_10341d4d4(void)

{
  return;
}



/* Entry: 10341d4e8; end: 10341d6e3;  */

void FUN_10341d4e8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  uVar3 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar1 = 0x112f67100;
    func_0x0001000285a8(0x112f67100,&UNK_10dbc31e0);
    func_0x000107c61538();
    puVar2 = PTR_PTR_1126c8c00;
    func_0x000107c610f8(PTR_PTR_1126c8c00);
    func_0x000107c453e4();
    func_0x000107c4ca50();
    func_0x000107c61170(puVar2);
    FUN_10341cdac(param_1,uVar1,uVar3);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 10341d6e4; end: 10341d853;  */

void FUN_10341d6e4(double param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  if (lVar1 != 0) {
    puVar4 = PTR_PTR_1126afec0;
    func_0x000107c61168(PTR_PTR_1126afec0);
    func_0x000107c61434(lVar1);
    func_0x000107c51b38(puVar4);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10341d84c);
      (*pcVar3)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10341d850);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10341d854);
      (*pcVar3)();
    }
    lVar5 = 0x112f67000;
    func_0x0001000285a8(0x112f67000,&UNK_10dbc2e20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x30) = 0;
    *(long *)(lVar5 + 0x20) = (long)param_1;
    *(undefined1 *)(lVar5 + 0x38) = 0xd;
    uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar2 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c614f0(uVar6);
    (**(code **)(lVar2 + 8))(lVar5,uVar7,lVar1,uVar6,lVar2);
    func_0x000107c6142c(lVar1);
    func_0x000107c61574(lVar5);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    func_0x000107c6142c(uVar7);
    func_0x000107c61428(unaff_x20 + 0x30,auStack_78,1,0);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined **)(unaff_x20 + 0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6142c(uVar7);
  }
  return;
}



/* Entry: 10341d854; end: 10341d88f;  */

void FUN_10341d854(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10341d890; end: 10341d93b;  */

long FUN_10341d890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_5 + 0x20) = 0;
  *(undefined8 *)(param_5 + 0x28) = 0;
  *(undefined **)(param_5 + 0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_5 + 0x38) = uVar1;
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_7;
  func_0x000107c615f0(param_1);
  func_0x00010341c8f8(param_2,param_3,param_4);
  func_0x00010341dbcc(param_3);
  func_0x0001000834e4(param_2);
  return param_5;
}



/* Entry: 10341d93c; end: 10341d9a7;  */

long FUN_10341d93c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c613fc(param_5,0x40,7);
  *(undefined8 *)(param_5 + 0x20) = 0;
  *(undefined8 *)(param_5 + 0x28) = 0;
  *(undefined **)(param_5 + 0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_5 + 0x38) = uVar1;
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_7;
  func_0x000107c615f0(param_1);
  func_0x00010341c8f8(param_2,param_3,param_4);
  func_0x00010341dbcc(param_3);
  func_0x0001000834e4(param_2);
  return param_5;
}



/* Entry: 10341d9a8; end: 10341d9c7;  */

void FUN_10341d9a8(void)

{
  func_0x000107c61168(&PTR_PTR_112f67048);
  return;
}



/* Entry: 10341d9c8; end: 10341db2f;  */

int FUN_10341d9c8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10341da44;
        goto LAB_10341da28;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10341da28:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10341da44:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10341db30; end: 10341db6f;  */

void FUN_10341db30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f670c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc2eb4;
  func_0x000107c61520(&UNK_10dbc2eb4,&UNK_1106532a8);
  puRam0000000112f670c0 = puVar1;
  return;
}



/* Entry: 10341db70; end: 10341db7b;  */

void FUN_10341db70(void)

{
  long unaff_x20;
  undefined1 auStack_40 [16];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = *(undefined1 *)(unaff_x20 + 0x10);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000104505ba4(FUN_10341cc20,0,0x10341cc24,0,0x10341cc28,0,0x10341cc2c,0,0x10341dc3c,
                      auStack_40,0x10341dc48,uStack_28,0x10341dc50,uStack_28,FUN_10341d4d4,0,
                      0x10341d4d8,0,0x10341d4dc,0,0x10341d4e0,0,0x10341d4e4,0);
  return;
}



/* Entry: 10341db7c; end: 10341dc13;  */

undefined8 FUN_10341db7c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f670c8;
  func_0x0001000285a8(0x112f670c8,&UNK_10dbc2ee0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10341dc14; end: 10341dc57;  */

void FUN_10341dc14(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar2 == 0) {
      return;
    }
    puVar3 = PTR_PTR_1126c8c00;
    func_0x000107c610f8(PTR_PTR_1126c8c00);
    func_0x000107c453e4();
    func_0x000107c4ca50();
    func_0x000107c61170(puVar3);
    FUN_10341d6e4(param_1);
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar2 == 0) {
      return;
    }
    if (*(long *)(lVar2 + 0x28) == 0) {
      uVar1 = 0x112f67100;
      func_0x0001000285a8(0x112f67100,&UNK_10dbc31e0);
      func_0x000107c61538();
      puVar3 = PTR_PTR_1126c8c00;
      func_0x000107c610f8(PTR_PTR_1126c8c00);
      func_0x000107c61174(lVar4);
      func_0x000107c453e4(puVar3);
      func_0x000107c4ca50();
      func_0x000107c61170(puVar3);
      FUN_10341cdac(param_1,uVar1,lVar4);
      func_0x000107c61574(lVar2);
      func_0x000107c61170(lVar4);
      return;
    }
  }
  func_0x000107c61574(lVar2);
  return;
}



/* Entry: 10341dc58; end: 10341de07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341dc58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110653350;
  func_0x000107c613fc(&UNK_110653350,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_8);
  func_0x0001000285a8(0x112f671c8,&UNK_10dbc2ef0);
  func_0x000107c613fc();
  pcVar2 = FUN_10341dec8;
  func_0x0001000bdd8c(FUN_10341dec8,puVar1);
  uVar3 = param_3;
  func_0x000107c4b364();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_5 + _DAT_113038790);
  func_0x000107c61174(uVar4);
  uVar5 = param_6;
  func_0x000107c4aeb0(param_6);
  func_0x000107c61180();
  func_0x000103420aac(0);
  func_0x000107c613fc();
  uVar6 = uVar3;
  FUN_103420d30(uVar3,param_4,uVar4,uVar5,param_7,pcVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_7);
  func_0x000107c61574(pcVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar6;
  return;
}



/* Entry: 10341de08; end: 10341dec7;  */

void FUN_10341de08(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c4b254();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      puStack_50 = PTR_DAT_11269e4f8;
      lVar1 = lVar2;
      func_0x000107c61494(lVar2,1,&puStack_50);
      if (lVar1 != 0) {
        *param_1 = lVar1;
        return;
      }
      func_0x000107c615e8(lVar2);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10341dec8; end: 10341decf;  */

void FUN_10341dec8(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4b254();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      puStack_50 = PTR_DAT_11269e4f8;
      lVar2 = lVar1;
      func_0x000107c61494(lVar1,1,&puStack_50);
      if (lVar2 != 0) {
        *param_1 = lVar2;
        return;
      }
      func_0x000107c615e8(lVar1);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10341ded0; end: 10341def3;  */

void FUN_10341ded0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10341def4; end: 10341deff;  */

void FUN_10341def4(void)

{
  return;
}



/* Entry: 10341df00; end: 10341df1f;  */

void FUN_10341df00(void)

{
  func_0x000107c61168(&PTR_PTR_112f67210);
  return;
}



/* Entry: 10341df20; end: 10341df27;  */

undefined8 FUN_10341df20(void)

{
  return 0x1b;
}



/* Entry: 10341df28; end: 10341dfcb;  */

void FUN_10341df28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110653398;
  func_0x000107c613fc(&UNK_110653398,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_10341e184,puVar1);
  return;
}



/* Entry: 10341dfcc; end: 10341e183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341dfcc(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_10341e458();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = 0;
  puVar1 = &UNK_1106533c0;
  func_0x000107c613fc(&UNK_1106533c0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,uStack_80);
  uVar2 = 0x112f671c8;
  func_0x0001000285a8(0x112f671c8,&UNK_10dbc2ef0);
  func_0x000107c613fc();
  pcVar3 = FUN_10341e478;
  func_0x0001000bdd8c(FUN_10341e478,puVar1,uVar2);
  func_0x0001000d224c(&uStack_88);
  uVar4 = *(undefined8 *)(lStack_68 + _DAT_11306f9c8);
  func_0x000103420aac(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  uVar2 = uStack_88;
  func_0x000103421074(uStack_88,uVar4,uStack_70,uStack_78,pcVar3);
  func_0x000107c61170(lStack_68);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(uStack_88);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_78);
  func_0x000107c61574(pcVar3);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_1106533e8;
  return;
}



/* Entry: 10341e184; end: 10341e18f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341e184(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&lStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_10341e458();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  puVar2 = &UNK_1106533c0;
  func_0x000107c613fc(&UNK_1106533c0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uStack_80);
  uVar3 = 0x112f671c8;
  func_0x0001000285a8(0x112f671c8,&UNK_10dbc2ef0);
  func_0x000107c613fc();
  pcVar4 = FUN_10341e478;
  func_0x0001000bdd8c(FUN_10341e478,puVar2,uVar3);
  func_0x0001000d224c(&uStack_88);
  uVar5 = *(undefined8 *)(lStack_68 + _DAT_11306f9c8);
  func_0x000103420aac(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar5);
  uVar3 = uStack_88;
  func_0x000103421074(uStack_88,uVar5,uStack_70,uStack_78,pcVar4);
  func_0x000107c61170(lStack_68);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(uStack_88);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_78);
  func_0x000107c61574(pcVar4);
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1106533e8;
  return;
}



/* Entry: 10341e190; end: 10341e2fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10341e190(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1106533c0;
  func_0x000107c613fc(&UNK_1106533c0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_4);
  uVar2 = 0x112f671c8;
  func_0x0001000285a8(0x112f671c8,&UNK_10dbc2ef0);
  func_0x000107c613fc();
  pcVar3 = FUN_10341e3bc;
  func_0x0001000bdd8c(FUN_10341e3bc,puVar1,uVar2);
  func_0x0001000d224c(&uStack_68);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11306f9c8);
  func_0x000103420aac(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  uVar2 = uStack_68;
  func_0x000103421074(uStack_68,uVar4,param_2,param_3,pcVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(pcVar3);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  return unaff_x20;
}



/* Entry: 10341e2fc; end: 10341e3bb;  */

void FUN_10341e2fc(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c4b254();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      puStack_50 = PTR_DAT_11269e4f8;
      lVar1 = lVar2;
      func_0x000107c61494(lVar2,1,&puStack_50);
      if (lVar1 != 0) {
        *param_1 = lVar1;
        return;
      }
      func_0x000107c615e8(lVar2);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10341e3bc; end: 10341e3c3;  */

void FUN_10341e3bc(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4b254();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      puStack_50 = PTR_DAT_11269e4f8;
      lVar2 = lVar1;
      func_0x000107c61494(lVar1,1,&puStack_50);
      if (lVar2 != 0) {
        *param_1 = lVar2;
        return;
      }
      func_0x000107c615e8(lVar1);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10341e3c4; end: 10341e40b;  */

void FUN_10341e3c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10341e40c; end: 10341e457;  */

void FUN_10341e40c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1106533d8;
  return;
}



/* Entry: 10341e458; end: 10341e477;  */

void FUN_10341e458(void)

{
  func_0x000107c61168(&PTR_PTR_112f672f0);
  return;
}



/* Entry: 10341e478; end: 10341e47b;  */

void FUN_10341e478(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4b254();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      puStack_50 = PTR_DAT_11269e4f8;
      lVar2 = lVar1;
      func_0x000107c61494(lVar1,1,&puStack_50);
      if (lVar2 != 0) {
        *param_1 = lVar2;
        return;
      }
      func_0x000107c615e8(lVar1);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10341e47c; end: 10341e5b7;  */

long FUN_10341e47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110653468;
  func_0x000107c613fc(&UNK_110653468,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_7);
  uVar2 = 0x112f671c8;
  func_0x0001000285a8(0x112f671c8,&UNK_10dbc2ef0);
  func_0x000107c613fc();
  pcVar3 = FUN_10341e64c;
  func_0x0001000bdd8c(FUN_10341e64c,puVar1,uVar2);
  uVar2 = param_5;
  func_0x000107c4aeb0(param_5);
  func_0x000107c61180();
  uVar4 = 0;
  func_0x000103420aac(0);
  func_0x000107c613fc();
  FUN_10341ff34(param_3,param_4,uVar2,param_6,pcVar3,uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  return unaff_x20;
}



/* Entry: 10341e5b8; end: 10341e64b;  */

void FUN_10341e5b8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c5c4ac();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10341e64c; end: 10341e653;  */

void FUN_10341e64c(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c5c4ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10341e654; end: 10341e677;  */

void FUN_10341e654(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10341e678; end: 10341e683;  */

void FUN_10341e678(void)

{
  return;
}



/* Entry: 10341e684; end: 10341e6a3;  */

void FUN_10341e684(void)

{
  func_0x000107c61168(&PTR_PTR_112f67390);
  return;
}



/* Entry: 10341e6a4; end: 10341e853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341e6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1106534b0;
  func_0x000107c613fc(&UNK_1106534b0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_8);
  func_0x0001000285a8(0x112f671c8,&UNK_10dbc2ef0);
  func_0x000107c613fc();
  pcVar2 = FUN_10341e914;
  func_0x0001000bdd8c(FUN_10341e914,puVar1);
  uVar3 = param_3;
  func_0x000107c4b364();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_5 + _DAT_1130387f8);
  func_0x000107c61174(uVar4);
  uVar5 = param_6;
  func_0x000107c4aeb0(param_6);
  func_0x000107c61180();
  func_0x000103420aac(0);
  func_0x000107c613fc();
  uVar6 = uVar3;
  FUN_103420d30(uVar3,param_4,uVar4,uVar5,param_7,pcVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_7);
  func_0x000107c61574(pcVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar6;
  return;
}



/* Entry: 10341e854; end: 10341e913;  */

void FUN_10341e854(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c4b254();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      puStack_50 = PTR_DAT_11269e4f8;
      lVar1 = lVar2;
      func_0x000107c61494(lVar2,1,&puStack_50);
      if (lVar1 != 0) {
        *param_1 = lVar1;
        return;
      }
      func_0x000107c615e8(lVar2);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10341e914; end: 10341e91b;  */

void FUN_10341e914(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4b254();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      puStack_50 = PTR_DAT_11269e4f8;
      lVar2 = lVar1;
      func_0x000107c61494(lVar1,1,&puStack_50);
      if (lVar2 != 0) {
        *param_1 = lVar2;
        return;
      }
      func_0x000107c615e8(lVar1);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10341e91c; end: 10341e93f;  */

void FUN_10341e91c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10341e940; end: 10341e94b;  */

void FUN_10341e940(void)

{
  return;
}



/* Entry: 10341e94c; end: 10341e96b;  */

void FUN_10341e94c(void)

{
  func_0x000107c61168(&PTR_PTR_112f67430);
  return;
}



/* Entry: 10341e96c; end: 10341eaeb;  */

long FUN_10341e96c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    func_0x00010341e9cc();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    *(long *)(unaff_x20 + 0x20) = lVar1;
    func_0x000107c615f0();
    FUN_10341f760(uVar3);
  }
  FUN_10341f790(lVar2);
  return lVar1;
}



/* Entry: 10341eaec; end: 10341efcb;  */

void FUN_10341eaec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  bool bVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long unaff_x20;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined *puVar27;
  long lVar28;
  ulong *puVar29;
  undefined *puStack_68;
  
  lVar17 = *(long *)(param_1 + 0x10);
  if ((lVar17 == 0) || (lVar11 = param_1, FUN_10341e96c(), lVar11 == 0)) {
    return;
  }
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101438ce4();
  lVar21 = 0;
LAB_10341eb9c:
  plVar2 = (long *)(param_1 + 0x20 + lVar21 * 0x20);
  lVar5 = *plVar2;
  lVar6 = plVar2[1];
  lVar25 = plVar2[2];
  uVar8 = (undefined1)plVar2[3];
  lVar21 = lVar21 + 1;
  FUN_10341f5d0(lVar5,lVar6,lVar25,uVar8);
  lVar13 = lVar5;
  FUN_103424bac(lVar5,lVar6,lVar25,uVar8);
  puVar27 = puVar12;
  func_0x000107c61558();
  puVar29 = (ulong *)(lVar13 + 0x40);
  uVar23 = -1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar26 = 0xffffffffffffffff;
  if (-uVar23 < 0x40) {
    uVar26 = ~(-1L << (-uVar23 & 0x3f));
  }
  uVar26 = uVar26 & *puVar29;
  puStack_68 = puVar12;
  func_0x000107c61434(lVar13);
  lVar24 = 0;
  do {
    lVar1 = lVar24;
    while (uVar26 == 0) {
      bVar10 = SCARRY8(lVar1,1);
      lVar1 = lVar1 + 1;
      if (bVar10) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10341efac);
        (*pcVar9)();
      }
      if ((long)(0x3f - uVar23 >> 6) <= lVar1) {
        func_0x00010143ab2c(lVar13,puVar29,~uVar23,lVar24,0);
        func_0x000107c6142c(lVar13);
        func_0x00010341f5ec(lVar5,lVar6,lVar25,uVar8);
        if (lVar21 == lVar17) {
          func_0x0001000285a8(0x112e02f90,&UNK_10d9d5580);
          puVar27 = puVar12;
          func_0x000107c6048c();
          uVar23 = 1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
          uVar26 = 0xffffffffffffffff;
          if ((puVar12[0x20] & 0x3f) < 6) {
            uVar26 = ~(-1L << (uVar23 & 0x3f));
          }
          uVar26 = uVar26 & *(ulong *)(puVar12 + 0x40);
          lVar17 = 0;
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          do {
            PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar14;
            if (uVar26 == 0) {
              do {
                lVar21 = lVar17 + 1;
                if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x10341efb8);
                  (*pcVar9)();
                }
                if ((long)(uVar23 + 0x3f >> 6) <= lVar21) {
                  func_0x000107c6142c(puVar12);
                  puStack_68 = puVar27;
                  if ((*(byte *)(unaff_x20 + 0x18) & 1) != 0) {
                    FUN_10341f608(&puStack_68);
                  }
                  puVar12 = puStack_68;
                  uVar15 = 0;
                  func_0x0001002ed07c(0);
                  puVar27 = puVar12;
                  func_0x000107c5f9dc(puVar12,PTR___sSSN_11034da80,uVar15,PTR___sSSSHsWP_11034da90);
                  func_0x000107c5fadc(param_2,param_3);
                  func_0x000107c5d650(lVar11);
                  func_0x000107c6142c(puVar12);
                  func_0x000107c61170(puVar27);
                  func_0x000107c61170(param_2);
                  func_0x000107c615e8(lVar11);
                  return;
                }
                uVar26 = *(ulong *)((long)(puVar12 + 0x40) + lVar21 * 8);
                lVar17 = lVar17 + 1;
              } while (uVar26 == 0);
              uVar19 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
              uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              uVar19 = uVar19 >> 0x20 | uVar19 << 0x20;
              uVar26 = uVar26 - 1 & uVar26;
            }
            else {
              uVar19 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
              uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              uVar19 = uVar19 >> 0x20 | uVar19 << 0x20;
              uVar26 = uVar26 - 1 & uVar26;
              lVar21 = lVar17;
            }
            uVar19 = LZCOUNT(uVar19);
            uVar18 = uVar19 | lVar21 << 6;
            lVar17 = uVar18 * 0x10;
            puVar4 = (undefined8 *)(*(long *)(puVar12 + 0x30) + lVar17);
            uVar15 = *puVar4;
            uVar7 = puVar4[1];
            func_0x000107c610f8();
            func_0x000107c61434(uVar7);
            func_0x000107c47580();
            uVar20 = (uVar19 & 0xffffffffffffffc0 | lVar21 << 6) >> 3;
            *(ulong *)(puVar27 + uVar20 + 0x40) =
                 *(ulong *)(puVar27 + uVar20 + 0x40) | 1L << (uVar19 & 0x3f);
            puVar4 = (undefined8 *)(*(long *)(puVar27 + 0x30) + lVar17);
            *puVar4 = uVar15;
            puVar4[1] = uVar7;
            *(undefined **)(*(long *)(puVar27 + 0x38) + uVar18 * 8) = puVar14;
            if (SCARRY8(*(long *)(puVar27 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10341efbc);
              (*pcVar9)();
            }
            *(long *)(puVar27 + 0x10) = *(long *)(puVar27 + 0x10) + 1;
            lVar17 = lVar21;
            puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          } while( true );
        }
        goto LAB_10341eb9c;
      }
      uVar26 = puVar29[lVar1];
    }
    uVar19 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
    uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
    uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
    uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
    uVar18 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) | lVar1 << 6;
    puVar3 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar18 * 0x10);
    uVar19 = *puVar3;
    uVar20 = puVar3[1];
    lVar28 = *(long *)(*(long *)(lVar13 + 0x38) + uVar18 * 8);
    func_0x000107c61434(uVar20);
    uVar18 = uVar19;
    uVar16 = uVar20;
    func_0x000100029284();
    uVar22 = (ulong)~(uint)uVar16 & 1;
    lVar24 = *(long *)(puVar12 + 0x10) + uVar22;
    if (SCARRY8(*(long *)(puVar12 + 0x10),uVar22)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10341efb0);
      (*pcVar9)();
    }
    if (*(long *)(puVar12 + 0x18) < lVar24) {
      func_0x00010143a4f4(lVar24,(uint)puVar27 & 1);
      uVar18 = uVar19;
      uVar22 = uVar20;
      func_0x000100029284();
      if (((uint)uVar16 & 1) != ((uint)uVar22 & 1)) {
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10341efcc);
        (*pcVar9)();
      }
    }
    else if (((ulong)puVar27 & 1) == 0) {
      func_0x00010143a38c();
    }
    puVar12 = puStack_68;
    uVar26 = uVar26 - 1 & uVar26;
    if ((uVar16 & 1) == 0) {
      *(ulong *)(puStack_68 + (uVar18 >> 6) * 8 + 0x40) =
           *(ulong *)(puStack_68 + (uVar18 >> 6) * 8 + 0x40) | 1L << (uVar18 & 0x3f);
      puVar3 = (ulong *)(*(long *)(puStack_68 + 0x30) + uVar18 * 0x10);
      *puVar3 = uVar19;
      puVar3[1] = uVar20;
      *(long *)(*(long *)(puStack_68 + 0x38) + uVar18 * 8) = lVar28;
      if (SCARRY8(*(long *)(puStack_68 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10341efb4);
        (*pcVar9)();
      }
      *(long *)(puStack_68 + 0x10) = *(long *)(puStack_68 + 0x10) + 1;
    }
    else {
      lVar24 = *(long *)(*(long *)(puStack_68 + 0x38) + uVar18 * 8);
      func_0x000107c6142c(uVar20);
      if (lVar28 <= lVar24) {
        lVar28 = lVar24;
      }
      *(long *)(*(long *)(puVar12 + 0x38) + uVar18 * 8) = lVar28;
    }
    puVar27 = (undefined *)0x1;
    lVar24 = lVar1;
  } while( true );
}



/* Entry: 10341efcc; end: 10341eff7;  */

void FUN_10341efcc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10341f760(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10341eff8; end: 10341f04f;  */

void FUN_10341eff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  bool bVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long unaff_x20;
  long lVar25;
  ulong uVar26;
  undefined *puVar27;
  long lVar28;
  ulong *puVar29;
  undefined *puStack_68;
  
  lVar17 = *(long *)(param_1 + 0x10);
  if ((lVar17 == 0) || (lVar11 = param_1, FUN_10341e96c(), lVar11 == 0)) {
    return;
  }
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101438ce4();
  lVar21 = 0;
LAB_10341eb9c:
  plVar2 = (long *)(param_1 + 0x20 + lVar21 * 0x20);
  lVar5 = *plVar2;
  lVar6 = plVar2[1];
  lVar25 = plVar2[2];
  uVar8 = (undefined1)plVar2[3];
  lVar21 = lVar21 + 1;
  FUN_10341f5d0(lVar5,lVar6,lVar25,uVar8);
  lVar13 = lVar5;
  FUN_103424bac(lVar5,lVar6,lVar25,uVar8);
  puVar27 = puVar12;
  func_0x000107c61558();
  puVar29 = (ulong *)(lVar13 + 0x40);
  uVar23 = -1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar26 = 0xffffffffffffffff;
  if (-uVar23 < 0x40) {
    uVar26 = ~(-1L << (-uVar23 & 0x3f));
  }
  uVar26 = uVar26 & *puVar29;
  puStack_68 = puVar12;
  func_0x000107c61434(lVar13);
  lVar24 = 0;
  do {
    lVar1 = lVar24;
    while (uVar26 == 0) {
      bVar10 = SCARRY8(lVar1,1);
      lVar1 = lVar1 + 1;
      if (bVar10) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10341efac);
        (*pcVar9)();
      }
      if ((long)(0x3f - uVar23 >> 6) <= lVar1) {
        func_0x00010143ab2c(lVar13,puVar29,~uVar23,lVar24,0);
        func_0x000107c6142c(lVar13);
        func_0x00010341f5ec(lVar5,lVar6,lVar25,uVar8);
        if (lVar21 == lVar17) {
          func_0x0001000285a8(0x112e02f90,&UNK_10d9d5580);
          puVar27 = puVar12;
          func_0x000107c6048c();
          uVar23 = 1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
          uVar26 = 0xffffffffffffffff;
          if ((puVar12[0x20] & 0x3f) < 6) {
            uVar26 = ~(-1L << (uVar23 & 0x3f));
          }
          uVar26 = uVar26 & *(ulong *)(puVar12 + 0x40);
          lVar17 = 0;
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          do {
            PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar14;
            if (uVar26 == 0) {
              do {
                lVar21 = lVar17 + 1;
                if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x10341efb8);
                  (*pcVar9)();
                }
                if ((long)(uVar23 + 0x3f >> 6) <= lVar21) {
                  func_0x000107c6142c(puVar12);
                  puStack_68 = puVar27;
                  if ((*(byte *)(unaff_x20 + 0x18) & 1) != 0) {
                    FUN_10341f608(&puStack_68);
                  }
                  puVar12 = puStack_68;
                  uVar15 = 0;
                  func_0x0001002ed07c(0);
                  puVar27 = puVar12;
                  func_0x000107c5f9dc(puVar12,PTR___sSSN_11034da80,uVar15,PTR___sSSSHsWP_11034da90);
                  func_0x000107c5fadc(param_2,param_3);
                  func_0x000107c5d650(lVar11);
                  func_0x000107c6142c(puVar12);
                  func_0x000107c61170(puVar27);
                  func_0x000107c61170(param_2);
                  func_0x000107c615e8(lVar11);
                  return;
                }
                uVar26 = *(ulong *)((long)(puVar12 + 0x40) + lVar21 * 8);
                lVar17 = lVar17 + 1;
              } while (uVar26 == 0);
              uVar19 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
              uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              uVar19 = uVar19 >> 0x20 | uVar19 << 0x20;
              uVar26 = uVar26 - 1 & uVar26;
            }
            else {
              uVar19 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
              uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              uVar19 = uVar19 >> 0x20 | uVar19 << 0x20;
              uVar26 = uVar26 - 1 & uVar26;
              lVar21 = lVar17;
            }
            uVar19 = LZCOUNT(uVar19);
            uVar18 = uVar19 | lVar21 << 6;
            lVar17 = uVar18 * 0x10;
            puVar4 = (undefined8 *)(*(long *)(puVar12 + 0x30) + lVar17);
            uVar15 = *puVar4;
            uVar7 = puVar4[1];
            func_0x000107c610f8();
            func_0x000107c61434(uVar7);
            func_0x000107c47580();
            uVar20 = (uVar19 & 0xffffffffffffffc0 | lVar21 << 6) >> 3;
            *(ulong *)(puVar27 + uVar20 + 0x40) =
                 *(ulong *)(puVar27 + uVar20 + 0x40) | 1L << (uVar19 & 0x3f);
            puVar4 = (undefined8 *)(*(long *)(puVar27 + 0x30) + lVar17);
            *puVar4 = uVar15;
            puVar4[1] = uVar7;
            *(undefined **)(*(long *)(puVar27 + 0x38) + uVar18 * 8) = puVar14;
            if (SCARRY8(*(long *)(puVar27 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10341efbc);
              (*pcVar9)();
            }
            *(long *)(puVar27 + 0x10) = *(long *)(puVar27 + 0x10) + 1;
            lVar17 = lVar21;
            puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          } while( true );
        }
        goto LAB_10341eb9c;
      }
      uVar26 = puVar29[lVar1];
    }
    uVar19 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
    uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
    uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
    uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
    uVar18 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) | lVar1 << 6;
    puVar3 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar18 * 0x10);
    uVar19 = *puVar3;
    uVar20 = puVar3[1];
    lVar28 = *(long *)(*(long *)(lVar13 + 0x38) + uVar18 * 8);
    func_0x000107c61434(uVar20);
    uVar18 = uVar19;
    uVar16 = uVar20;
    func_0x000100029284();
    uVar22 = (ulong)~(uint)uVar16 & 1;
    lVar24 = *(long *)(puVar12 + 0x10) + uVar22;
    if (SCARRY8(*(long *)(puVar12 + 0x10),uVar22)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10341efb0);
      (*pcVar9)();
    }
    if (*(long *)(puVar12 + 0x18) < lVar24) {
      func_0x00010143a4f4(lVar24,(uint)puVar27 & 1);
      uVar18 = uVar19;
      uVar22 = uVar20;
      func_0x000100029284();
      if (((uint)uVar16 & 1) != ((uint)uVar22 & 1)) {
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10341efcc);
        (*pcVar9)();
      }
    }
    else if (((ulong)puVar27 & 1) == 0) {
      func_0x00010143a38c();
    }
    puVar12 = puStack_68;
    uVar26 = uVar26 - 1 & uVar26;
    if ((uVar16 & 1) == 0) {
      *(ulong *)(puStack_68 + (uVar18 >> 6) * 8 + 0x40) =
           *(ulong *)(puStack_68 + (uVar18 >> 6) * 8 + 0x40) | 1L << (uVar18 & 0x3f);
      puVar3 = (ulong *)(*(long *)(puStack_68 + 0x30) + uVar18 * 0x10);
      *puVar3 = uVar19;
      puVar3[1] = uVar20;
      *(long *)(*(long *)(puStack_68 + 0x38) + uVar18 * 8) = lVar28;
      if (SCARRY8(*(long *)(puStack_68 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10341efb4);
        (*pcVar9)();
      }
      *(long *)(puStack_68 + 0x10) = *(long *)(puStack_68 + 0x10) + 1;
    }
    else {
      lVar24 = *(long *)(*(long *)(puStack_68 + 0x38) + uVar18 * 8);
      func_0x000107c6142c(uVar20);
      if (lVar28 <= lVar24) {
        lVar28 = lVar24;
      }
      *(long *)(*(long *)(puVar12 + 0x38) + uVar18 * 8) = lVar28;
    }
    puVar27 = (undefined *)0x1;
    lVar24 = lVar1;
  } while( true );
}



/* Entry: 10341f050; end: 10341f5cf;  */

void FUN_10341f050(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *unaff_x20;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  
  func_0x0001000285a8(0x112f67540,&UNK_10dbc3108);
  lVar14 = *unaff_x20;
  lVar8 = lVar14;
  func_0x000107c6048c();
  if (*(long *)(lVar14 + 0x10) != 0) {
    lVar1 = lVar14 + 0x40;
    uVar9 = (1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar8 != lVar14 || lVar1 + uVar9 * 8 <= lVar8 + 0x40U) {
      func_0x000107c610b8(lVar8 + 0x40U,lVar1,uVar9 << 3);
    }
    lVar16 = 0;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar14 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar14 + 0x40);
    if (uVar9 == 0) goto LAB_10341f130;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        uVar11 = LZCOUNT(uVar11) | lVar16 << 6;
        lVar13 = uVar11 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x30) + lVar13);
        uVar5 = puVar2[1];
        lVar12 = uVar11 * 0x18;
        puVar3 = (undefined8 *)(*(long *)(lVar14 + 0x38) + lVar12);
        uVar4 = *puVar3;
        uVar6 = puVar3[1];
        uVar15 = puVar3[2];
        puVar3 = (undefined8 *)(*(long *)(lVar8 + 0x30) + lVar13);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x38) + lVar12);
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        puVar2[2] = uVar15;
        func_0x000107c61434();
        func_0x000107c61434(uVar6);
        func_0x000107c61434(uVar15);
        if (uVar9 != 0) break;
LAB_10341f130:
        do {
          lVar12 = lVar16 + 1;
          if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10341f1e8);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar12) goto LAB_10341f1bc;
          uVar9 = *(ulong *)(lVar1 + lVar12 * 8);
          lVar16 = lVar16 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar16 = lVar12;
      }
    } while( true );
  }
LAB_10341f1bc:
  func_0x000107c61574(lVar14);
  *unaff_x20 = lVar8;
  return;
}



/* Entry: 10341f5d0; end: 10341f607;  */

void FUN_10341f5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 0xff) - 3 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 10341f608; end: 10341f75f;  */

/* WARNING: Possible PIC construction at 0x00010341f65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010341f6a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010341f6f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010341f6a8) */
/* WARNING: Removing unreachable block (ram,0x00010341f6ac) */
/* WARNING: Removing unreachable block (ram,0x00010341f6b4) */
/* WARNING: Removing unreachable block (ram,0x00010341f744) */
/* WARNING: Removing unreachable block (ram,0x00010341f6e4) */
/* WARNING: Removing unreachable block (ram,0x00010341f660) */
/* WARNING: Removing unreachable block (ram,0x00010341f664) */
/* WARNING: Removing unreachable block (ram,0x00010341f66c) */
/* WARNING: Removing unreachable block (ram,0x00010341f6fc) */

void FUN_10341f608(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x10) != 0) {
    func_0x000107c61434(lVar1);
    func_0x000100029284(0xd000000000000011,0x800000010f1109d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10341f760; end: 10341f76f;  */

void FUN_10341f760(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 10341f770; end: 10341f78f;  */

void FUN_10341f770(void)

{
  func_0x000107c61168(&PTR_PTR_112f674d0);
  return;
}



/* Entry: 10341f790; end: 10341f79f;  */

void FUN_10341f790(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 10341f7a0; end: 10341f87b;  */

undefined8 FUN_10341f7a0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(0xe000000000000000);
    uVar2 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar2);
    func_0x000107c5fb78(0xd000000000000014,0x800000010f14bd50);
    func_0x000107c5fb78(0xd00000000000001e,0x800000010f14bdf0);
    func_0x000107c6142c(0xe100000000000000);
  }
  lVar1 = 0x112f67628;
  func_0x0001000285a8(0x112f67628,&UNK_10dbc3170);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return param_1;
}



/* Entry: 10341f87c; end: 10341fbc3;  */

/* WARNING: Possible PIC construction at 0x00010341fafc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010341fb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010341fbbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010341fa64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010341fbc0) */
/* WARNING: Removing unreachable block (ram,0x00010341fb94) */
/* WARNING: Removing unreachable block (ram,0x00010341fb00) */
/* WARNING: Removing unreachable block (ram,0x00010341fa68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341f87c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_c8 [40];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (unaff_x20[5] == 0) {
    uVar5 = *unaff_x20;
    lVar4 = unaff_x20[2];
    if (lVar4 != 0) {
      func_0x000107c6157c(lVar4);
      func_0x000107c4aeb4();
      func_0x000107c61180();
      lVar1 = param_1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      lVar2 = lVar1;
      FUN_103420bbc();
      func_0x000107c615f0();
      func_0x000107c615e8(lVar1);
      if (lVar2 != 0) {
        func_0x0001000d224c(auStack_c8);
        FUN_10341f7a0(&uStack_a0,auStack_c8);
        FUN_103420ca0(auStack_c8,0x112f67628,&UNK_10dbc3170);
        if (lStack_88 == 0) {
          func_0x000107c615e8(lVar2);
        }
        else {
          FUN_103420c88(&uStack_a0,&uStack_78);
          if (param_3 == 0) {
            uStack_80 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            lStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            func_0x0001000d224c(&uStack_a0);
          }
          func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
          func_0x000107c51c8c(lVar2);
          func_0x000107c61180();
          lVar4 = lVar2;
          func_0x0001000b637c();
          func_0x000107c61170(lVar2);
          uVar5 = 0x112d3b7d8;
          func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
          func_0x0001000bfde0(FUN_103420a10,0,uVar5);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(lVar4);
      return;
    }
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(uStack_70);
    uStack_78 = 0x5b;
    uStack_70 = 0xe100000000000000;
    uVar3 = 0;
    func_0x000107c60714(uVar5,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar3);
    func_0x000107c5fb78(0xd000000000000014,0x800000010f14bd50);
    func_0x000107c5fb78(0xd000000000000017,0x800000010f14bdb0);
    func_0x000107c6142c(uStack_70);
  }
  return;
}



/* Entry: 10341fbc4; end: 10341fdcf;  */

void FUN_10341fbc4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  ppuVar8 = &puStack_80;
  uVar2 = param_1;
  func_0x000107c4f300();
  func_0x000107c61180();
  puVar7 = &UNK_110653510;
  puVar3 = puVar7;
  func_0x000107c613fc(&UNK_110653510,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_10342122c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = (undefined *)0x1034212b8;
  puStack_68 = &UNK_110653550;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c4db94(uVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  uVar2 = param_1;
  func_0x000107c4afac(param_1);
  func_0x000107c61180();
  uVar5 = uVar2;
  func_0x000107c4ade8();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  puVar3 = puVar7;
  func_0x000107c613fc(&UNK_110653510,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcStack_60 = (code *)0x10342124c;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1010c2158;
  puStack_68 = &UNK_110653578;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c4db94(uVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c4b11c(param_1);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_110653510,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  pcStack_60 = (code *)0x10342126c;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = (undefined *)0x1034212bc;
  puStack_68 = &UNK_1106535a0;
  puStack_58 = puVar7;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c4db94(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10341fdd0; end: 10341ff33;  */

/* WARNING: Possible PIC construction at 0x00010341fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010341fe74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010341fe68) */
/* WARNING: Removing unreachable block (ram,0x00010341fe78) */

void FUN_10341fdd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  if (unaff_x20[6] == 0) {
    lVar2 = unaff_x20[2];
    if (lVar2 != 0) {
      uVar1 = 0;
      func_0x00010341c788(0);
      func_0x000107c613fc();
      func_0x000107c6157c(lVar2);
      func_0x000107c6157c(param_1);
      func_0x000107c6157c(param_2);
      FUN_103420ed8(lVar2,param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(lVar2);
      return;
    }
    uVar3 = *unaff_x20;
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(0xe000000000000000);
    uVar1 = 0;
    func_0x000107c60714(uVar3,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar1);
    func_0x000107c5fb78(0xd000000000000014,0x800000010f14bd50);
    func_0x000107c5fb78(0xd000000000000017,0x800000010f14bdb0);
    func_0x000107c6142c(0xe100000000000000);
  }
  return;
}



/* Entry: 10341ff34; end: 1034201f7;  */

long FUN_10341ff34(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  lVar3 = param_4;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  lVar1 = lVar3;
  FUN_103420acc();
  func_0x000107c615f0();
  func_0x000107c615e8(lVar3);
  if (lVar1 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61574(param_5);
    func_0x000107c61574();
    unaff_x20 = 0;
  }
  else {
    lVar2 = 0;
    FUN_10341f770();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x20) = 1;
    *(undefined8 *)(lVar2 + 0x10) = param_5;
    *(undefined1 *)(lVar2 + 0x18) = 1;
    lVar3 = 0;
    FUN_103421e24();
    func_0x000107c613fc();
    func_0x000107c615f0(lVar1);
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(lVar2);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010341f4b4();
    *(long *)(lVar3 + 0x10) = lVar1;
    *(long *)(lVar3 + 0x18) = lVar2;
    *(undefined ***)(lVar3 + 0x20) = &PTR_DAT_1106534e8;
    *(undefined **)(lVar3 + 0x28) = puVar4;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long *)(unaff_x20 + 0x10) = lVar3;
    func_0x000107c61574(uVar5);
    FUN_10341f87c(param_3,param_2,0);
    lVar3 = param_1;
    func_0x000107c4b340();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61574(param_5);
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(lVar1);
    }
    else {
      puVar4 = &UNK_110653510;
      func_0x000107c613fc(&UNK_110653510,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      pcStack_70 = FUN_103420b98;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      uStack_80 = 0x1034212b4;
      puStack_78 = &UNK_110653528;
      puStack_68 = puVar4;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      func_0x000107c4db94(lVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61574(param_5);
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(lVar1);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar3);
    }
  }
  return unaff_x20;
}



/* Entry: 1034201f8; end: 1034202d7;  */

void FUN_1034201f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_1;
      func_0x000107c5ce40(param_1);
      func_0x000107c61180();
    }
    FUN_1034202d8(lVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 != 0) {
      func_0x000107c3dfe4(param_1);
      func_0x000107c61180();
    }
    FUN_103420538(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1034202d8; end: 103420537;  */

/* WARNING: Possible PIC construction at 0x000103420364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034203c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103420368) */
/* WARNING: Removing unreachable block (ram,0x0001034203c4) */

void FUN_1034202d8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  if (param_1 == 0) {
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(0xe000000000000000);
    uVar1 = 0;
    func_0x000107c60714(uVar3,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar1);
    func_0x000107c5fb78(0xd000000000000014,0x800000010f14bd50);
    func_0x000107c5fb78(0xd00000000000001c,0x800000010f14bdd0);
  }
  else {
    if (unaff_x20[3] != 0) {
      return;
    }
    lVar2 = unaff_x20[2];
    if (lVar2 != 0) {
      func_0x000103425c58(0);
      func_0x000107c613fc();
      func_0x000107c615f4(param_1,2);
      func_0x000107c61580(lVar2,2);
      func_0x00010342576c();
      uVar3 = unaff_x20[3];
      unaff_x20[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar3);
      return;
    }
    func_0x000107c615f0();
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(0xe000000000000000);
    uVar1 = 0;
    func_0x000107c60714(uVar3,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar1);
    func_0x000107c5fb78(0xd000000000000014,0x800000010f14bd50);
    func_0x000107c5fb78(0xd000000000000017,0x800000010f14bdb0);
    func_0x000107c615e8(param_1);
  }
  func_0x000107c6142c(0xe100000000000000);
  return;
}



/* Entry: 103420538; end: 103420783;  */

void FUN_103420538(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long lVar3;
  
  uVar2 = *unaff_x20;
  if (param_1 == 0) {
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(0xe000000000000000);
    uVar1 = 0;
    func_0x000107c60714(uVar2,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar1);
    func_0x000107c5fb78(0xd000000000000014,0x800000010f14bd50);
    func_0x000107c5fb78(0xd000000000000017,0x800000010f14bd90);
  }
  else {
    if (unaff_x20[4] != 0) {
      return;
    }
    lVar3 = unaff_x20[2];
    if (lVar3 != 0) {
      FUN_1034268b8(0);
      func_0x000107c613fc();
      func_0x000107c615f0(param_1);
      func_0x000107c6157c();
      func_0x000103425d4c();
      uVar2 = unaff_x20[4];
      unaff_x20[4] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar2);
      return;
    }
    func_0x000107c615f0();
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(0xe000000000000000);
    uVar1 = 0;
    func_0x000107c60714(uVar2,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar1);
    func_0x000107c5fb78(0xd000000000000014,0x800000010f14bd50);
    func_0x000107c5fb78(0xd000000000000017,0x800000010f14bdb0);
    func_0x000107c615e8(param_1);
  }
  func_0x000107c6142c(0xe100000000000000);
  return;
}



/* Entry: 103420784; end: 1034209c7;  */

/* WARNING: Possible PIC construction at 0x000103420850: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103420854) */

void FUN_103420784(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *unaff_x20;
  if (param_1 == 0) {
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(0xe000000000000000);
    uVar3 = 0;
    func_0x000107c60714(uVar5,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar3);
    func_0x000107c5fb78(0xd000000000000014,0x800000010f14bd50);
    func_0x000107c5fb78(0xd00000000000001b,0x800000010f14be50);
  }
  else {
    if (unaff_x20[7] != 0) {
      return;
    }
    lVar4 = unaff_x20[2];
    if (lVar4 != 0) {
      func_0x0001000285a8(0x112f67630,&UNK_10dbc3180);
      func_0x000107c61580(lVar4,2);
      lVar1 = param_1;
      func_0x000107c615f0(param_1);
      func_0x000107c43614();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x0001000b637c();
      func_0x000107c61170(lVar1);
      uVar5 = 0;
      FUN_103426d4c(0);
      func_0x000107c613fc();
      func_0x000103426980(lVar4,&PTR_DAT_1106535f0,lVar2,uVar5);
      func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(lVar4);
      return;
    }
    func_0x000107c615f0();
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(0xe000000000000000);
    uVar3 = 0;
    func_0x000107c60714(uVar5,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar3);
    func_0x000107c5fb78(0xd000000000000014,0x800000010f14bd50);
    func_0x000107c5fb78(0xd000000000000017,0x800000010f14bdb0);
    func_0x000107c615e8(param_1);
  }
  func_0x000107c6142c(0xe100000000000000);
  return;
}



/* Entry: 1034209c8; end: 103420a0f;  */

void FUN_1034209c8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 103420a10; end: 103420a3f;  */

void FUN_103420a10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103420a40; end: 103420acb;  */

void FUN_103420a40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}


