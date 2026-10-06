/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005448a8; end: 00544a17;  */

undefined8 * FUN_005448a8(undefined8 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined1 uVar5;
  ulong uVar6;
  short *in_x4;
  code *UNRECOVERED_JUMPTABLE;
  uint unaff_w19;
  ushort *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  uint uVar7;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *unaff_x30;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
  while( true ) {
    func_0x00546b54();
    UNRECOVERED_JUMPTABLE = unaff_x30;
    func_0x00546494();
    func_0x00547524();
    func_0x00546e98();
    uVar7 = (uint)unaff_x23;
    uVar2 = uVar7 & 7;
    uVar5 = uVar2 == 2;
    if (!(bool)uVar5) break;
    puVar8 = unaff_x21;
    func_0x005466ec();
    uVar6 = unaff_x23;
    func_0x0054638c();
    func_0x005467d8();
    func_0x00546b54();
    UNRECOVERED_JUMPTABLE = unaff_x30;
    func_0x00546034();
    func_0x005473f0();
    if ((bool)uVar5) {
      puVar1 = (undefined4 *)((long)unaff_x20 + (uVar6 >> 0x20));
      uVar4 = *(ushort *)((long)puVar1 + 10);
      func_0x00546684();
      func_0x00546648();
      if ((uVar4 & 0x1c0) == 0xc0) {
        FUN_00544580();
        func_0x0054759c();
        FUN_00543378();
      }
      else {
        func_0x005445b8(puVar8,*puVar1);
        func_0x0054759c();
        FUN_00543490();
      }
      if (puVar8 == (undefined8 *)0x0) {
        func_0x00545da0();
        goto LAB_0054583c;
      }
      if ((undefined8 *)*unaff_x22 <= puVar8) {
        if (*unaff_x20 == 0) {
          return puVar8;
        }
        func_0x00545d80();
        return puVar8;
      }
      func_0x00545754(*(undefined2 *)puVar8);
      func_0x00545d70();
      goto LAB_00545854;
    }
    param_1 = unaff_x21;
    func_0x00545d70();
    func_0x005467d8();
  }
  func_0x00546684();
  if ((*(ushort *)((long)unaff_x20 + (unaff_x23 >> 0x20) + 10) & 0x1c0) == 0xc0) {
    uVar5 = (unaff_x23 & 7) != 0;
    if (uVar2 != 1) {
LAB_005449d0:
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
      func_0x005466ec();
      puVar8 = unaff_x21;
      goto LAB_005449e0;
    }
    FUN_00544580();
    do {
      puVar8 = unaff_x24 + 1;
      uVar9 = *unaff_x24;
      unaff_x24 = param_1;
      FUN_005432f0();
      *unaff_x24 = uVar9;
      func_0x00546988();
      if ((bool)uVar5) goto LAB_005449ec;
      func_0x00545f1c();
      if (unaff_x24 == (undefined8 *)0x0) {
LAB_00544a0c:
        func_0x00545da0();
LAB_0054583c:
        if (*in_x4 != 0) {
          func_0x0054717c();
        }
        return (undefined8 *)0x0;
      }
      uVar5 = uVar7 <= uStack000000000000000c;
    } while (uStack000000000000000c == uVar7);
  }
  else {
    uVar5 = 4 < uVar2;
    if (uVar2 != 5) goto LAB_005449d0;
    func_0x005445b8();
    do {
      puVar8 = (undefined8 *)((long)unaff_x24 + 4);
      uVar3 = *(undefined4 *)unaff_x24;
      unaff_x24 = param_1;
      func_0x00543334();
      *(undefined4 *)unaff_x24 = uVar3;
      func_0x00546988();
      if ((bool)uVar5) goto LAB_005449ec;
      func_0x00545f1c();
      if (unaff_x24 == (undefined8 *)0x0) goto LAB_00544a0c;
      uVar5 = uVar7 <= uStack0000000000000008;
    } while (uStack0000000000000008 == uVar7);
  }
  func_0x00546e00();
  if ((bool)uVar5) {
LAB_005449ec:
    uVar4 = *unaff_x20;
    if (uVar4 != 0) {
      *(uint *)((long)unaff_x21 + (ulong)uVar4) =
           *(uint *)((long)unaff_x21 + (ulong)(uint)uVar4) | unaff_w19;
    }
    return puVar8;
  }
  func_0x00545754(*(undefined2 *)puVar8);
  puVar8 = unaff_x24;
LAB_005449e0:
  func_0x0054638c();
LAB_00545854:
                    /* WARNING: Could not recover jumptable at 0x00545868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return puVar8;
}



/* Entry: 00544a18; end: 00544c6b;  */

undefined8 *
FUN_00544a18(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            ushort *param_5,uint param_6)

{
  uint *puVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *extraout_x8;
  long lVar7;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  code *unaff_x30;
  undefined8 *in_stack_00000018;
  
  func_0x00546c78();
  UNRECOVERED_JUMPTABLE = unaff_x30;
  func_0x00547524();
  if (((uint)unaff_x23 & 7) != 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
    func_0x00546e28(param_1,param_2);
    goto LAB_00544c14;
  }
  puVar1 = (uint *)((long)param_5 + (unaff_x23 >> 0x20));
  uVar2 = *(ushort *)((long)puVar1 + 10);
  puVar10 = param_1;
  FUN_0053febc(param_1,param_5);
  puVar4 = param_2;
  if ((uVar2 & 0x1c0) == 0x100) {
    uVar9 = (ulong)*puVar1;
    puVar8 = *(undefined8 **)((long)puVar10 + uVar9);
    uVar3 = puVar8 == (undefined8 *)&UNK_00810e00;
    puVar4 = puVar10;
    if ((bool)uVar3) {
      puVar8 = (undefined8 *)param_1[1];
      if (((ulong)puVar8 & 1) != 0) {
        func_0x00546c6c();
        puVar8 = extraout_x8;
      }
      puVar4 = &stack0x00000018;
      in_stack_00000018 = puVar8;
      FUN_005385f8();
      *(undefined8 **)((long)puVar10 + uVar9) = puVar4;
      puVar8 = puVar4;
    }
    if (puVar8[2] != 0) {
      func_0x00545d3c();
      func_0x00546270();
      if ((bool)uVar3) {
        puVar10 = (undefined8 *)puVar4[2];
        puVar4 = puVar8;
        func_0x0054387c();
        if ((int)puVar4 != 0) {
          do {
            in_stack_00000018 = param_2;
            func_0x0054648c();
            if (in_stack_00000018 == (undefined8 *)0x0) goto LAB_0053b2b8;
            if (puVar10[5] == 0) {
              puVar6 = puVar10;
              FUN_005505c0();
            }
            else {
              lVar7 = puVar10[5] + -0x18;
              puVar10[5] = lVar7;
              puVar6 = (undefined8 *)(puVar10[4] + lVar7 + 0x10);
            }
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar4 = puVar8;
            func_0x005438a4();
            func_0x00546e34();
            FUN_00533074();
            if (puVar4 == (undefined8 *)0x0) goto LAB_0053b2b8;
            puVar5 = puVar4;
            func_0x00546c30();
            if ((long)puVar6 < 0) {
              puVar5 = (undefined8 *)*puVar5;
            }
            func_0x005466d4();
            if (((ulong)puVar5 & 1) == 0) goto LAB_0053b2b8;
            uVar3 = puVar4 == (undefined8 *)*unaff_x22;
            if ((undefined8 *)*unaff_x22 <= puVar4) goto LAB_00544c58;
            param_2 = puVar4;
            func_0x00546484(puVar4,&stack0x00000014);
            func_0x005473d0();
          } while ((bool)uVar3);
          goto LAB_00544bf4;
        }
      }
    }
    do {
      puVar10 = puVar8;
      func_0x0054d0b8();
      puVar4 = puVar10;
      func_0x00546744();
      if (puVar4 == (undefined8 *)0x0) {
LAB_0053b2b8:
        if (*param_5 != 0) {
          func_0x0054717c(param_1,unaff_x30);
        }
        return (undefined8 *)0x0;
      }
      lVar7 = (long)*(char *)((long)puVar10 + 0x17);
      puVar6 = puVar10;
      if (lVar7 < 0) {
        puVar6 = (undefined8 *)*puVar10;
        lVar7 = puVar10[1];
      }
      func_0x005466d4(puVar6,lVar7);
      if (((ulong)puVar6 & 1) == 0) goto LAB_0053b2b8;
      uVar3 = puVar4 == (undefined8 *)*unaff_x22;
      if ((undefined8 *)*unaff_x22 <= puVar4) goto LAB_00544c58;
      func_0x00546484(puVar4,&stack0x00000014);
      func_0x005473d0();
    } while ((bool)uVar3);
  }
LAB_00544bf4:
  if (puVar4 < (undefined8 *)*unaff_x22) {
    func_0x00545a70(*(undefined2 *)puVar4);
LAB_00544c14:
                    /* WARNING: Could not recover jumptable at 0x00545b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  uVar2 = *param_5;
joined_r0x00544c64:
  if (uVar2 != 0) {
    *(uint *)((long)param_1 + (ulong)uVar2) = *(uint *)((long)param_1 + (ulong)uVar2) | param_6;
  }
  return puVar4;
LAB_00544c58:
  uVar2 = *param_5;
  goto joined_r0x00544c64;
}



/* Entry: 00544c6c; end: 00544fb3;  */

void FUN_00544c6c(undefined8 param_1)

{
  undefined1 in_ZR;
  uint extraout_w8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00546374();
  if ((bool)in_ZR) {
    func_0x0054750c();
    if ((extraout_w8 & 1) != 0) {
      func_0x00546c6c();
    }
    func_0x00546860();
    func_0x00544ca4();
    *(undefined8 *)(unaff_x20 + unaff_x19) = param_1;
  }
  return;
}



/* Entry: 00544fb4; end: 0054504b;  */

long FUN_00544fb4(ulong *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = *param_1;
  uVar3 = (uint)uVar4;
  if ((uVar3 >> 7 & 1) == 0) {
    *param_2 = uVar3 & 0x7f;
    return (long)param_1 + 1;
  }
  if ((uVar3 >> 0xf & 1) == 0) {
    *param_2 = uVar3 & 0x7f | ((uint)(uVar4 >> 8) & 0x7f) << 7;
    return (long)param_1 + 2;
  }
  uVar5 = (*(ulong *)((long)param_1 + 2) ^ 0xffffffffffffffff) & 0x8080808080808080;
  uVar6 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
  uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
  lVar2 = 0;
  if (uVar5 != 0) {
    lVar2 = (long)param_1 + (uVar6 >> 3) + 3;
  }
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = (uVar3 & 0x7f | (uint)((uVar4 >> 8 & 0x7f | (uVar4 >> 0x10 & 0x7f) << 7) << 7) |
            (uint)((uVar4 >> 0x18 & 0x7f | (uVar4 >> 0x20 & 0x7f) << 7) << 0x15)) &
            ((uint)(-0x4000L << (uVar6 - (uVar6 >> 3) & 0x3f)) ^ 0xffffffff);
  }
  *param_2 = uVar1;
  return lVar2;
}



/* Entry: 0054504c; end: 00545667;  */

ulong FUN_0054504c(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x21;
  
  func_0x00545d90();
  while ((unaff_x19 < unaff_x21 && (func_0x00545cd0(), unaff_x19 = param_1, param_1 != 0))) {
    func_0x00546470();
  }
  return unaff_x19;
}



/* Entry: 00545668; end: 005456e7;  */

undefined8 * FUN_00545668(undefined8 *param_1,long param_2)

{
  undefined1 *unaff_x19;
  
  func_0x0054695c();
  if (param_2 < 0) {
    param_1 = (undefined8 *)*param_1;
  }
  FUN_00553b28();
  if (((ulong)param_1 & 1) == 0) {
    FUN_0053f2fc(*unaff_x19,*(undefined8 *)(unaff_x19 + 8));
  }
  return param_1;
}



/* Entry: 005456e8; end: 005476bf;  */

undefined *** FUN_005456e8(undefined8 *param_1)

{
  char *pcVar1;
  undefined ***pppuVar2;
  int unaff_w24;
  undefined4 uStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined2 uStack0000000000000038;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
  char cStack_d9;
  undefined **appuStack_c8 [19];
  
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000028 = param_1[1];
  uStack0000000000000020 = *param_1;
  uStack0000000000000014 = 0x10;
  pcVar1 = "size - chunk_size <= kSlopBytes";
  if (unaff_w24 < 0x11) {
    return (undefined ***)0x0;
  }
  FUN_004799f4(&ppuStack_138);
  _strlen("size - chunk_size <= kSlopBytes");
  FUN_00462690(&ppuStack_138,"size - chunk_size <= kSlopBytes",pcVar1);
  FUN_00462690();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(&ppuStack_138,(long)unaff_w24);
  FUN_00462690(&ppuStack_138," vs. ",5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(&ppuStack_138,0x10);
  pppuVar2 = &ppuStack_138;
  FUN_00554368(pppuVar2);
  appuStack_c8[0] = &PTR_FUN_009e7e18;
  ppuStack_138 = &PTR_FUN_009e7df0;
  ppuStack_130 = &PTR_FUN_009e5de0;
  if (cStack_d9 < '\0') {
    __ZdlPv(uStack_f0);
  }
  ppuStack_130 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_00998de8 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_128);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_138,&PTR_PTR_009e7e30);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_c8);
  return pppuVar2;
}



/* Entry: 005476c0; end: 00547747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005476c0(void)

{
  int iVar1;
  
  if ((bRam0000000000b69428 & 1) == 0) {
    iVar1 = 0xb69428;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_00b69408 = 0;
      uRam0000000000b69410 = 0;
      uRam0000000000b69418 = 0;
      func_0x0053acd8();
      uRam0000000000b69420 = 1;
                    /* WARNING: Could not recover jumptable at 0x0077a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_00998e68)(0xb69428);
      return;
    }
  }
  return;
}



/* Entry: 00547748; end: 005477ab;  */

long FUN_00547748(ulong *param_1)

{
  if ((*(char *)((long)param_1 + 0x17) < '\0') &&
     ((ulong *)*param_1 < param_1 || param_1 + 3 <= (ulong *)*param_1)) {
    return (param_1[2] & 0x7fffffffffffffff) - 1;
  }
  return 0;
}



/* Entry: 005477ac; end: 005477d3;  */

void FUN_005477ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00487760();
  *(long *)(param_1 + 0x40) = lVar1;
  return;
}



/* Entry: 005477d4; end: 005477d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005477d4(void)

{
  int iVar1;
  
  if ((bRam0000000000b69428 & 1) == 0) {
    iVar1 = 0xb69428;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_00b69408 = 0;
      uRam0000000000b69410 = 0;
      uRam0000000000b69418 = 0;
      func_0x0053acd8();
      uRam0000000000b69420 = 1;
                    /* WARNING: Could not recover jumptable at 0x0077a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_00998e68)(0xb69428);
      return;
    }
  }
  return;
}



/* Entry: 005477d8; end: 00547823;  */

undefined8 FUN_005477d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2[3] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)*param_2 + 0x20);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    FUN_00547f58(param_2);
    __ZdlPv();
  }
  return uVar1;
}



/* Entry: 00547824; end: 005478bb;  */

void FUN_00547824(long param_1,ulong param_2,long param_3,ulong param_4)

{
  long extraout_x8;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8);
  puVar2 = (undefined8 *)(lVar1 + -1);
  if (*(long *)*puVar2 != param_3 || (param_4 & 0xffffffff) != 0) {
    FUN_005478bc(param_3,param_4);
    func_0x00549700();
    **(undefined8 **)(extraout_x8 + 0x20) = *(undefined8 *)**(undefined8 **)(extraout_x8 + 0x20);
  }
  func_0x005478d8(puVar2,param_3,param_4);
  if (*(long *)(lVar1 + 0x17) == 0) {
    FUN_005477d8(param_1,puVar2);
    *(undefined8 *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8) = 0;
  }
  return;
}



/* Entry: 005478bc; end: 005478ef;  */

void FUN_005478bc(undefined8 param_1,undefined8 param_2)

{
  FUN_005481f0(param_1,param_2,1);
  return;
}



/* Entry: 005478f0; end: 0054792b;  */

void FUN_005478f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_30;
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_0054792c(&uStack_30);
  FUN_00490120(param_1,puVar1);
  return;
}



/* Entry: 0054792c; end: 00547957;  */

void FUN_0054792c(long *param_1)

{
  long lStack_20;
  long lStack_18;
  
  lStack_20 = *param_1;
  lStack_18 = param_1[1];
  if (lStack_20 != 0) {
    func_0x00490290(&lStack_20);
  }
  return;
}



/* Entry: 00547958; end: 00547a53;  */

void FUN_00547958(ulong param_1,ulong param_2,code *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar2;
  ulong uVar3;
  long lStack_60;
  ulong uStack_58;
  undefined8 *puStack_48;
  
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8);
  uVar1 = uVar3;
  puStack_48 = param_4;
  if ((uVar3 != 0) && ((uVar3 & 1) == 0)) {
    uVar1 = param_1;
    FUN_00547a54(param_1,uVar3,param_3);
    *(ulong *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8) = uVar1;
  }
  (*param_3)();
  func_0x005497cc(&lStack_60);
  if (lStack_60 != **(long **)(uVar1 - 1) || (uStack_58 & 0xffffffff) != 0) {
    FUN_005478bc(lStack_60,uStack_58);
    func_0x00549700();
    **(undefined8 **)(extraout_x8 + 0x20) = puStack_48;
  }
  FUN_00547b48(lStack_60,uStack_58,1);
  if (*(long *)(uVar1 + 0xf) == lStack_60 &&
      (uint)uStack_58 == (uint)*(byte *)(*(long *)(uVar1 + 0xf) + 10)) {
    uVar2 = 0;
  }
  else {
    func_0x00549700();
    uVar2 = *(undefined8 *)(extraout_x8_00 + 0x20);
  }
  *puStack_48 = uVar2;
  return;
}



/* Entry: 00547a54; end: 00547b47;  */

ulong FUN_00547a54(long param_1,segment_command *param_2,code *param_3)

{
  segment_command *psVar1;
  segment_command *psVar2;
  segment_command *psVar3;
  long lStack_60;
  uint uStack_58;
  segment_command *psStack_48;
  segment_command *psStack_40;
  segment_command *psStack_38;
  
  psVar3 = *(segment_command **)(param_1 + 0x18);
  psStack_38 = param_2;
  if (psVar3 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    psVar2 = param_2;
    __Znwm();
  }
  else {
    psVar2 = &segment_command_00000020;
    psVar1 = psVar3;
    FUN_00550e54(psVar3,0x20,8,FUN_005495bc);
  }
  *(undefined ***)psVar1 = &PTR_LOOP_00a011e0;
  *(segment_command **)psVar1->segname = psVar3;
  *(undefined ***)(psVar1->segname + 8) = &PTR_LOOP_00a011e0;
  psVar1->vmaddr = 0;
  while (param_2 != (segment_command *)0x0) {
    (*param_3)();
    psVar3 = (segment_command *)&psStack_48;
    psStack_48 = param_2;
    psStack_40 = psVar2;
    func_0x005497cc(&lStack_60);
    param_2 = *(segment_command **)psStack_38;
    psVar2 = psVar3;
    psStack_38 = param_2;
  }
  lStack_60 = *(long *)(psVar1->segname + 8);
  uStack_58 = (uint)*(byte *)(lStack_60 + 10);
  psVar3 = (segment_command *)0x0;
  do {
    func_0x00549810();
    psStack_38 = *(segment_command **)(lStack_60 + (ulong)(uStack_58 & 0xff) * 0x18 + 0x20);
    *(segment_command **)psStack_38 = psVar3;
    psVar3 = psStack_38;
  } while (uStack_58 != 0 || lStack_60 != **(long **)psVar1);
  return (ulong)psVar1 | 1;
}



/* Entry: 00547b48; end: 00547b73;  */

undefined1  [16] FUN_00547b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_0054821c(&uStack_20,param_3);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 00547b74; end: 00547c3b;  */

void FUN_00547b74(undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar2 = param_1;
  FUN_005477d8();
  do {
    while( true ) {
      puVar7 = (undefined8 *)*puVar2;
      puVar3 = puVar2;
      (*param_3)(puVar2);
      puVar4 = param_1;
      FUN_005478f0(param_1,puVar3,param_2);
      lVar5 = param_1[2];
      puVar8 = (undefined8 *)((ulong)puVar4 & 0xffffffff);
      uVar6 = *(ulong *)(lVar5 + ((ulong)puVar4 & 0xffffffff) * 8);
      if (uVar6 != 0) break;
      *puVar2 = 0;
      *(undefined8 **)(lVar5 + (long)puVar8 * 8) = puVar2;
      uVar1 = (uint)puVar4;
      if (*(uint *)((long)param_1 + 0xc) <= (uint)puVar4) {
        uVar1 = *(uint *)((long)param_1 + 0xc);
      }
      *(uint *)((long)param_1 + 0xc) = uVar1;
      param_2 = puVar3;
      puVar2 = puVar7;
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
    }
    if (((uVar6 & 1) == 0) &&
       (puVar3 = param_1, param_2 = puVar8, func_0x004906e8(), ((ulong)puVar3 & 1) == 0)) {
      lVar5 = param_1[2];
      *puVar2 = *(undefined8 *)(lVar5 + (long)puVar8 * 8);
      *(undefined8 **)(lVar5 + (long)puVar8 * 8) = puVar2;
    }
    else {
      FUN_00547958(param_1,puVar8,param_3,puVar2);
      param_2 = puVar8;
    }
    puVar2 = puVar7;
  } while (puVar7 != (undefined8 *)0x0);
  return;
}



/* Entry: 00547c3c; end: 00547ebf;  */

void FUN_00547c3c(code *param_1,undefined8 *param_2,code *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *extraout_x8;
  code *pcVar13;
  code *unaff_x19;
  undefined8 *unaff_x20;
  code *unaff_x21;
  code *pcVar14;
  code *unaff_x22;
  code *unaff_x23;
  code *unaff_x24;
  code *unaff_x25;
  code *unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar15;
  undefined8 unaff_x30;
  
  puVar2 = &stack0xffffffffffffffb0;
  puVar15 = &stack0xfffffffffffffff0;
  pcVar13 = (code *)((ulong)param_2 >> 0x20 & 0xff);
  bVar3 = false;
  bVar4 = true;
  if (*(long *)(param_1 + 0x18) == 0) {
    bVar4 = 7 < (uint)pcVar13;
    bVar3 = (uint)pcVar13 == 8;
  }
  if (!bVar4 || bVar3) {
LAB_00547cbc:
    puVar6 = &UNK_00810000;
    goto code_r0x00547cc0;
  }
  goto code_r0x00547c70;
code_r0x00547cc0:
  puVar6 = puVar6 + 0xd78;
  lVar7 = 0x547c70;
code_r0x00547cc8:
  lVar7 = lVar7 + (ulong)(byte)pcVar13[(long)puVar6] * 4;
code_r0x00547cd0:
  pcVar9 = param_1;
  puVar8 = param_2;
  pcVar14 = unaff_x21;
  pcVar10 = unaff_x22;
  switch(lVar7) {
  case 0x4904c8:
    goto FUN_004904c8;
  case 0x547c70:
    break;
  case 0x547c74:
    goto code_r0x00547c74;
  case 0x547c78:
    goto code_r0x00547c78;
  case 0x547c7c:
    goto code_r0x00547c7c;
  case 0x547c80:
    goto code_r0x00547c80;
  case 0x547c84:
    goto code_r0x00547c84;
  case 0x547c88:
    goto code_r0x00547c88;
  case 0x547c8c:
    goto code_r0x00547c8c;
  case 0x547c90:
    goto code_r0x00547c90;
  case 0x547c98:
    goto LAB_00547c98;
  case 0x547c9c:
    goto LAB_00547c9c;
  case 0x547cac:
    goto LAB_00547cac;
  case 0x547cb8:
    return;
  case 0x547cbc:
    goto LAB_00547cbc;
  case 0x547cc0:
    goto code_r0x00547cc0;
  case 0x547cc8:
    goto code_r0x00547cc8;
  case 0x547cd0:
    goto code_r0x00547cd0;
  case 0x547cd4:
    pcVar14 = *(code **)(param_1 + 0x10);
    unaff_x23 = (code *)(ulong)*(uint *)(param_1 + 4);
    for (pcVar10 = (code *)(ulong)*(uint *)(param_1 + 0xc); pcVar10 < unaff_x23;
        pcVar10 = pcVar10 + 1) {
code_r0x00547ce8:
      pcVar13 = *(code **)(pcVar14 + (long)pcVar10 * 8);
      if (((ulong)pcVar13 & 1) != 0) {
        pcVar9 = pcVar13 + -1;
        pcVar13 = param_1;
        FUN_005477d8(param_1,pcVar9);
      }
      while (pcVar13 != (code *)0x0) {
        pcVar13 = *(code **)pcVar13;
        __ZdlPv();
      }
    }
    break;
  case 0x547ce8:
    goto code_r0x00547ce8;
  case 0x547d18:
    func_0x005496c0();
    for (; unaff_x23 < unaff_x25; unaff_x23 = unaff_x23 + 1) {
      pcVar14 = *(code **)(unaff_x22 + (long)unaff_x23 * 8);
      if (((ulong)*(code **)(unaff_x22 + (long)unaff_x23 * 8) & 1) != 0) {
        func_0x005496a0();
        pcVar14 = pcVar9;
      }
code_r0x00547d50:
      while (pcVar14 != (code *)0x0) {
code_r0x00547d38:
        unaff_x26 = *(code **)pcVar14;
        pcVar9 = pcVar14 + 8;
code_r0x00547d40:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x005497b0();
code_r0x00547d48:
        func_0x005496f0();
        pcVar14 = unaff_x26;
      }
    }
    break;
  case 0x547d38:
    goto code_r0x00547d38;
  case 0x547d40:
    goto code_r0x00547d40;
  case 0x547d48:
    goto code_r0x00547d48;
  case 0x547d50:
    goto code_r0x00547d50;
  case 0x547d5c:
    pcVar10 = *(code **)(param_1 + 0x10);
    unaff_x24 = (code *)(ulong)*(uint *)(param_1 + 4);
    for (unaff_x23 = (code *)(ulong)*(uint *)(param_1 + 0xc); unaff_x23 < unaff_x24;
        unaff_x23 = unaff_x23 + 1) {
      pcVar14 = *(code **)(pcVar10 + (long)unaff_x23 * 8);
      if (((ulong)*(code **)(pcVar10 + (long)unaff_x23 * 8) & 1) != 0) {
        func_0x005496a0();
code_r0x00547d7c:
        pcVar14 = pcVar9;
      }
      while (pcVar14 != (code *)0x0) {
code_r0x00547d84:
        pcVar9 = pcVar14 + 8;
        unaff_x25 = *(code **)pcVar14;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x005496f0();
code_r0x00547d94:
        pcVar14 = unaff_x25;
      }
    }
    break;
  case 0x547d7c:
    goto code_r0x00547d7c;
  case 0x547d84:
    goto code_r0x00547d84;
  case 0x547d94:
    goto code_r0x00547d94;
  case 0x547da4:
    pcVar14 = param_3;
  case 0x547da8:
    unaff_x23 = *(code **)(param_1 + 0x10);
    unaff_x24 = (code *)(ulong)*(uint *)(param_1 + 0xc);
    unaff_x25 = (code *)(ulong)*(uint *)(param_1 + 4);
    while (unaff_x24 < unaff_x25) {
code_r0x00547dbc:
      pcVar13 = *(code **)(unaff_x23 + (long)unaff_x24 * 8);
      if (((ulong)pcVar13 & 1) != 0) {
        pcVar10 = pcVar13 + -1;
        pcVar13 = param_1;
        FUN_005477d8(param_1,pcVar10);
      }
      while (pcVar10 = pcVar13, pcVar13 != (code *)0x0) {
code_r0x00547dd8:
        pcVar13 = *(code **)pcVar10;
        (*pcVar14)(pcVar10);
        __ZdlPv(pcVar10);
      }
code_r0x00547df4:
      unaff_x24 = unaff_x24 + 1;
code_r0x00547df8:
    }
    break;
  case 0x547dbc:
    goto code_r0x00547dbc;
  case 0x547dd8:
    goto code_r0x00547dd8;
  case 0x547df4:
    goto code_r0x00547df4;
  case 0x547df8:
    goto code_r0x00547df8;
  case 0x547dfc:
    func_0x005496c0();
  case 0x547e00:
    goto code_r0x00547e00;
  case 0x547e04:
    goto code_r0x00547e04;
  case 0x547e08:
    goto code_r0x00547e08;
  case 0x547e0c:
    goto code_r0x00547e0c;
  case 0x547e20:
    goto code_r0x00547e20;
  case 0x547e24:
    goto code_r0x00547e24;
  case 0x547e28:
    goto code_r0x00547e28;
  case 0x547e2c:
    goto code_r0x00547e2c;
  case 0x547e30:
    goto code_r0x00547e30;
  case 0x547e38:
    goto code_r0x00547e38;
  case 0x547e3c:
    func_0x005496c0();
  case 0x547e40:
    goto code_r0x00547e40;
  case 0x547e44:
    goto code_r0x00547e44;
  case 0x547e54:
    goto code_r0x00547e54;
  case 0x547e84:
    pcVar13 = param_1;
    func_0x005496c0();
    for (; unaff_x23 < unaff_x25; unaff_x23 = unaff_x23 + 1) {
      pcVar10 = *(code **)(unaff_x22 + (long)unaff_x23 * 8);
      if (((ulong)*(code **)(unaff_x22 + (long)unaff_x23 * 8) & 1) != 0) {
        func_0x005496a0();
        pcVar10 = pcVar13;
      }
      while (pcVar10 != (code *)0x0) {
        pcVar10 = *(code **)pcVar10;
        func_0x005497b0();
        func_0x005496f0();
      }
    }
  }
  goto code_r0x00547c70;
code_r0x00547e40:
  while( true ) {
    bVar4 = unaff_x25 <= unaff_x23;
code_r0x00547e44:
    if (bVar4) break;
    pcVar13 = *(code **)(unaff_x22 + (long)unaff_x23 * 8);
    if (((ulong)*(code **)(unaff_x22 + (long)unaff_x23 * 8) & 1) != 0) {
      func_0x005496a0();
code_r0x00547e54:
      pcVar13 = pcVar9;
    }
    while (pcVar13 != (code *)0x0) {
      pcVar10 = *(code **)pcVar13;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pcVar13 + 8);
      pcVar9 = pcVar13 + (long)unaff_x24;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x005496f0();
      pcVar13 = pcVar10;
    }
    unaff_x23 = unaff_x23 + 1;
  }
  goto code_r0x00547c70;
code_r0x00547e00:
  while( true ) {
    bVar4 = unaff_x25 <= unaff_x23;
code_r0x00547e04:
    if (bVar4) break;
code_r0x00547e08:
    pcVar14 = *(code **)(unaff_x22 + (long)unaff_x23 * 8);
code_r0x00547e0c:
    if (((ulong)pcVar14 & 1) != 0) {
      func_0x005496a0();
      pcVar14 = pcVar9;
    }
code_r0x00547e30:
    while (pcVar14 != (code *)0x0) {
      unaff_x26 = *(code **)pcVar14;
code_r0x00547e20:
      pcVar9 = pcVar14 + (long)unaff_x24;
code_r0x00547e24:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
code_r0x00547e28:
      func_0x005496f0();
code_r0x00547e2c:
      pcVar14 = unaff_x26;
    }
    unaff_x23 = unaff_x23 + 1;
code_r0x00547e38:
  }
code_r0x00547c70:
  puVar8 = *(undefined8 **)(param_1 + 0x10);
code_r0x00547c74:
  param_3 = (code *)(ulong)*(uint *)(param_1 + 4);
code_r0x00547c78:
  uVar11 = (ulong)param_2 >> 0x28;
  param_2 = puVar8;
  if ((uVar11 & 1) != 0) {
LAB_00547c98:
    pcVar13 = param_3;
    goto LAB_00547c9c;
  }
  goto code_r0x00547c7c;
LAB_00547c9c:
  while (0 < (long)pcVar13) {
    *param_2 = 0;
    param_2 = param_2 + 1;
    pcVar13 = pcVar13 + -1;
  }
  goto LAB_00547cac;
code_r0x00547c7c:
code_r0x00547c80:
  puVar15 = unaff_x29;
code_r0x00547c84:
  pcVar9 = unaff_x19;
  puVar8 = unaff_x20;
code_r0x00547c88:
code_r0x00547c8c:
code_r0x00547c90:
  puVar2 = (undefined1 *)register0x00000008;
  goto FUN_004904c8;
LAB_00547cac:
  *(undefined4 *)param_1 = 0;
  *(int *)(param_1 + 0xc) = (int)param_3;
  return;
FUN_004904c8:
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  uVar11 = ((ulong)param_3 & 0xffffffff) << 3;
  *(undefined1 **)(puVar2 + -0x10) = puVar15;
  *(undefined8 *)(puVar2 + -8) = unaff_x30;
  ppuVar5 = &PTR___tlv_bootstrap_00b2c348;
  (*(code *)PTR___tlv_bootstrap_00b2c348)(lVar7);
  if (ppuVar5[1] != (undefined *)*extraout_x8) {
    return;
  }
  puVar6 = ppuVar5[2];
  *(code **)(puVar2 + -0x30) = unaff_x22;
  *(code **)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar2 + -0x20) = puVar8;
  *(code **)(puVar2 + -0x18) = pcVar9;
  *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  uVar12 = 0x3b - LZCOUNT(uVar11);
  bVar1 = puVar6[0x50];
  if (uVar12 < bVar1) {
    lVar7 = *(long *)(puVar6 + 0x58);
    *param_2 = *(undefined8 *)(lVar7 + uVar12 * 8);
    *(undefined8 **)(lVar7 + uVar12 * 8) = param_2;
  }
  else {
    if (bVar1 == 0) {
      lVar7 = 0;
    }
    else {
      _memmove(param_2,*(undefined8 *)(puVar6 + 0x58),(ulong)bVar1 << 3);
      lVar7 = (ulong)(byte)puVar6[0x50] << 3;
    }
    uVar12 = uVar11 >> 3;
    if (0 < (long)((uVar11 & 0xfffffffffffffff8) - lVar7)) {
      _bzero((long)param_2 + lVar7);
    }
    *(undefined8 **)(puVar6 + 0x58) = param_2;
    if (0x3f < uVar12) {
      uVar12 = 0x40;
    }
    puVar6[0x50] = (char)uVar12;
  }
  return;
}



/* Entry: 00547ec0; end: 00547f3f;  */

undefined1  [16]
FUN_00547ec0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = (uint)&uStack_40;
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8);
  lVar4 = lVar3 + -1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  FUN_00547f40();
  if (param_5 != (long *)0x0) {
    *param_5 = lVar4;
    *(uint *)(param_5 + 1) = uVar1;
  }
  lVar3 = *(long *)(lVar3 + 0xf);
  if (lVar3 == lVar4 && uVar1 == *(byte *)(lVar3 + 10)) {
    uVar2 = 0;
  }
  else {
    func_0x00549700();
    uVar2 = *(undefined8 *)(extraout_x8 + 0x20);
  }
  auVar5._8_8_ = param_2 & 0xffffffff;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 00547f40; end: 00547f57;  */

void FUN_00547f40(void)

{
  FUN_005495c0();
  return;
}



/* Entry: 00547f58; end: 00547f7b;  */

undefined8 FUN_00547f58(undefined8 param_1)

{
  FUN_00547f7c();
  return param_1;
}



/* Entry: 00547f7c; end: 00547fb7;  */

void FUN_00547f7c(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    FUN_00547fb8(*param_1,param_1 + 1);
  }
  *param_1 = &PTR_LOOP_00a011e0;
  param_1[2] = &PTR_LOOP_00a011e0;
  param_1[3] = 0;
  return;
}



/* Entry: 00547fb8; end: 005480cb;  */

void FUN_00547fb8(long param_1)

{
  byte bVar1;
  char cVar2;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  func_0x005497c0();
  if (*(char *)(param_1 + 0xb) == '\0') {
    if (*(char *)((long)unaff_x20 + 10) != '\0') {
      lVar5 = *unaff_x20;
      do {
        func_0x0054812c();
      } while (*(char *)((long)unaff_x20 + 0xb) == '\0');
      uVar6 = (ulong)*(byte *)(unaff_x20 + 1);
      plVar3 = (long *)*unaff_x20;
      do {
        plVar4 = plVar3;
        func_0x005481b8();
        plVar4 = (long *)plVar4[uVar6];
        cVar2 = *(char *)((long)plVar4 + 0xb);
        if (cVar2 == '\0') {
          while (cVar2 == '\0') {
            func_0x0054812c();
            cVar2 = *(char *)((long)plVar4 + 0xb);
          }
          uVar6 = (ulong)*(byte *)(plVar4 + 1);
          plVar3 = (long *)*plVar4;
        }
        FUN_005480cc(cVar2);
        if (*unaff_x19 == 0) {
          func_0x005496f0();
        }
        plVar4 = plVar3;
        if (*(byte *)((long)plVar3 + 10) <= uVar6) {
          do {
            bVar1 = *(byte *)(plVar4 + 1);
            uVar6 = (ulong)bVar1;
            plVar3 = (long *)*plVar4;
            func_0x00548100();
            if (*unaff_x19 == 0) {
              __ZdlPv(plVar4);
            }
            if (plVar3 == (long *)lVar5) {
              return;
            }
            plVar4 = plVar3;
          } while (*(byte *)((long)plVar3 + 10) <= bVar1);
        }
        uVar6 = uVar6 + 1;
      } while( true );
    }
    func_0x00548100();
  }
  else {
    FUN_005480cc();
  }
  if (*unaff_x19 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005480cc; end: 00548143;  */

void FUN_005480cc(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_38 = 0;
  uStack_40 = 1;
  uStack_30 = 4;
  uStack_20 = 0;
  uStack_28 = param_1;
  FUN_00548164(&uStack_40);
  return;
}



/* Entry: 00548144; end: 00548163;  */

ulong FUN_00548144(long *param_1)

{
  return param_1[1] * 4 + *param_1 * 8 + param_1[2] + 7U & 0xfffffffffffffff8;
}



/* Entry: 00548164; end: 005481ef;  */

long FUN_00548164(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00548188();
  return lVar1 + *(long *)(param_1 + 0x20) * 8;
}



/* Entry: 005481f0; end: 0054821b;  */

undefined1  [16] FUN_005481f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_0054821c(&uStack_20,-param_3);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 0054821c; end: 0054825f;  */

void FUN_0054821c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x005497c0();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      FUN_0054832c();
    }
  }
  else {
    while (0 < unaff_x19) {
      FUN_00548260();
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 00548260; end: 0054828b;  */

void FUN_00548260(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined4 uStack_28;
  
  if ((*(char *)(*param_1 + 0xb) != '\0') &&
     (iVar1 = (int)param_1[1] + 1, *(int *)(param_1 + 1) = iVar1,
     iVar1 < (int)(uint)*(byte *)(*param_1 + 10))) {
    return;
  }
  plVar2 = (long *)*param_1;
  if (*(char *)((long)plVar2 + 0xb) == '\0') {
    lVar3 = param_1[1];
    func_0x005481b8();
    lVar3 = plVar2[(int)lVar3 + 1U & 0xff];
    while (*param_1 = lVar3, *(char *)(lVar3 + 0xb) == '\0') {
      func_0x0054812c();
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    lVar6 = param_1[1];
    lVar3 = *param_1;
    uVar4 = *(uint *)(param_1 + 1);
    while (uVar4 == *(byte *)((long)plVar2 + 10)) {
      plVar5 = (long *)*plVar2;
      if (*(char *)((long)plVar5 + 0xb) != '\0') {
        *param_1 = lVar3;
        uStack_28 = (undefined4)lVar6;
        *(undefined4 *)(param_1 + 1) = uStack_28;
        return;
      }
      uVar4 = (uint)*(byte *)(plVar2 + 1);
      *(uint *)(param_1 + 1) = uVar4;
      *param_1 = (long)plVar5;
      plVar2 = plVar5;
    }
  }
  return;
}



/* Entry: 0054828c; end: 0054832b;  */

void FUN_0054828c(long *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uStack_28;
  
  plVar1 = (long *)*param_1;
  if (*(char *)((long)plVar1 + 0xb) == '\0') {
    lVar2 = param_1[1];
    func_0x005481b8();
    lVar2 = plVar1[(int)lVar2 + 1U & 0xff];
    while (*param_1 = lVar2, *(char *)(lVar2 + 0xb) == '\0') {
      func_0x0054812c();
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    lVar5 = param_1[1];
    lVar2 = *param_1;
    uVar3 = *(uint *)(param_1 + 1);
    while (uVar3 == *(byte *)((long)plVar1 + 10)) {
      plVar4 = (long *)*plVar1;
      if (*(char *)((long)plVar4 + 0xb) != '\0') {
        *param_1 = lVar2;
        uStack_28 = (undefined4)lVar5;
        *(undefined4 *)(param_1 + 1) = uStack_28;
        return;
      }
      uVar3 = (uint)*(byte *)(plVar1 + 1);
      *(uint *)(param_1 + 1) = uVar3;
      *param_1 = (long)plVar4;
      plVar1 = plVar4;
    }
  }
  return;
}



/* Entry: 0054832c; end: 00548353;  */

void FUN_0054832c(long *param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iStack_28;
  
  if ((*(char *)(*param_1 + 0xb) != '\0') &&
     (lVar5 = param_1[1], *(int *)(param_1 + 1) = (int)lVar5 + -1, 0 < (int)lVar5)) {
    return;
  }
  plVar3 = (long *)*param_1;
  if (*(char *)((long)plVar3 + 0xb) == '\0') {
    bVar1 = *(byte *)(param_1 + 1);
    do {
      func_0x005481b8();
      plVar3 = (long *)plVar3[bVar1];
      *param_1 = (long)plVar3;
      bVar1 = *(byte *)((long)plVar3 + 10);
    } while (*(char *)((long)plVar3 + 0xb) == '\0');
    iStack_28 = bVar1 - 1;
LAB_005483e0:
    *(int *)(param_1 + 1) = iStack_28;
  }
  else {
    lVar6 = param_1[1];
    lVar5 = *param_1;
    iVar2 = (int)param_1[1];
    while (iVar2 < 0) {
      plVar4 = (long *)*plVar3;
      if (*(char *)((long)plVar4 + 0xb) != '\0') {
        *param_1 = lVar5;
        iStack_28 = (int)lVar6;
        goto LAB_005483e0;
      }
      iVar2 = *(byte *)(plVar3 + 1) - 1;
      *(int *)(param_1 + 1) = iVar2;
      *param_1 = (long)plVar4;
      plVar3 = plVar4;
    }
  }
  return;
}



/* Entry: 00548354; end: 005483eb;  */

void FUN_00548354(long *param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iStack_28;
  
  plVar3 = (long *)*param_1;
  if (*(char *)((long)plVar3 + 0xb) == '\0') {
    bVar1 = *(byte *)(param_1 + 1);
    do {
      func_0x005481b8();
      plVar3 = (long *)plVar3[bVar1];
      *param_1 = (long)plVar3;
      bVar1 = *(byte *)((long)plVar3 + 10);
    } while (*(char *)((long)plVar3 + 0xb) == '\0');
    iStack_28 = bVar1 - 1;
LAB_005483e0:
    *(int *)(param_1 + 1) = iStack_28;
  }
  else {
    lVar6 = param_1[1];
    lVar5 = *param_1;
    iVar2 = (int)param_1[1];
    while (iVar2 < 0) {
      plVar4 = (long *)*plVar3;
      if (*(char *)((long)plVar4 + 0xb) != '\0') {
        *param_1 = lVar5;
        iStack_28 = (int)lVar6;
        goto LAB_005483e0;
      }
      iVar2 = *(byte *)(plVar3 + 1) - 1;
      *(int *)(param_1 + 1) = iVar2;
      *param_1 = (long)plVar4;
      plVar3 = plVar4;
    }
  }
  return;
}



/* Entry: 005483ec; end: 005486eb;  */

undefined1  [16] FUN_005483ec(undefined **param_1,undefined **param_2,ulong param_3)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined **ppuVar6;
  uint extraout_w8;
  undefined4 extraout_w8_00;
  long lVar7;
  long extraout_x8;
  long extraout_x9;
  uint extraout_w10;
  undefined4 extraout_w10_00;
  int iVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  uint uVar12;
  ulong uVar13;
  bool bVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined **ppuStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined **ppuStack_70;
  ulong uStack_68;
  
  cVar2 = *(char *)((long)param_2 + 0xb);
  iVar8 = (int)param_3;
  ppuVar6 = param_1;
  if (cVar2 == '\0') {
    func_0x00549810();
    puVar15 = param_2[(long)iVar8 * 3 + 3];
    puVar11 = param_2[(long)iVar8 * 3 + 2];
    param_2[(long)iVar8 * 3 + 4] = param_2[(long)iVar8 * 3 + 4];
    param_2[(long)iVar8 * 3 + 3] = puVar15;
    param_2[(long)iVar8 * 3 + 2] = puVar11;
  }
  else {
    uVar12 = (uint)*(byte *)((long)param_2 + 10) - (iVar8 + 1U);
    lVar7 = (ulong)(iVar8 + 1U & 0xff) * 0x18 + 0x10;
    if ((uVar12 & 0xff) * 2 + (uVar12 & 0xff) != 0) {
      do {
        func_0x005496d4(lVar7);
        lVar7 = extraout_x8 + 0x18;
      } while (extraout_x9 != 0x18);
    }
  }
  *(char *)((long)param_2 + 10) = *(char *)((long)param_2 + 10) + -1;
  param_1[3] = param_1[3] + -1;
  bVar14 = true;
  ppuVar9 = param_2;
  uVar13 = param_3;
  ppuStack_70 = param_2;
  uStack_68 = param_3;
  while( true ) {
    uVar12 = (uint)param_3;
    ppuVar10 = (undefined **)*param_1;
    if (ppuVar9 == ppuVar10) break;
    if (4 < *(byte *)((long)ppuVar9 + 10)) goto LAB_0054867c;
    puVar11 = *ppuVar9;
    cVar3 = *(char *)(ppuVar9 + 1);
    uVar12 = (uint)uVar13;
    bVar4 = 0;
    if (cVar3 == '\0') {
LAB_00548528:
      ppuVar10 = ppuVar9;
      if ((uint)bVar4 < (uint)(byte)puVar11[10]) {
        func_0x005496f8();
        if (10 < (uint)*(byte *)((long)ppuVar9 + 10) + (uint)(byte)ppuVar6[bVar4 + 1][10] + 1) {
          bVar5 = 5 < (byte)ppuVar6[bVar4 + 1][10];
          if ((!bVar5) ||
             ((*(byte *)((long)ppuVar9 + 10) != 0 && (bVar5 = uVar12 != 0, (int)uVar12 < 1))))
          goto LAB_005485a0;
          func_0x00549758();
          uVar1 = extraout_w8_00;
          if (bVar5) {
            uVar1 = extraout_w10_00;
          }
          ppuVar6 = ppuVar9;
          func_0x0054888c(ppuVar9,uVar1);
          goto LAB_00548604;
        }
        ppuVar6 = param_1;
        FUN_005486ec(param_1,ppuVar9);
        bVar5 = true;
      }
      else {
LAB_005485a0:
        cVar3 = *(char *)(ppuVar9 + 1);
        bVar5 = false;
        if (cVar3 != '\0') {
          func_0x005496f8();
          ppuVar6 = (undefined **)ppuVar6[(byte)(cVar3 - 1)];
          if (5 < *(byte *)((long)ppuVar6 + 10)) {
            bVar4 = *(byte *)((long)ppuVar9 + 10);
            bVar5 = true;
            if ((bVar4 == 0) || (bVar5 = bVar4 <= uVar12, (int)uVar12 < (int)(uint)bVar4)) {
              func_0x00549758();
              uVar12 = extraout_w8;
              if (bVar5) {
                uVar12 = extraout_w10;
              }
              func_0x005489f0();
              bVar5 = false;
              uVar13 = uVar13 + uVar12;
              goto LAB_00548608;
            }
          }
LAB_00548604:
          bVar5 = false;
        }
      }
    }
    else {
      func_0x005496f8();
      ppuVar10 = (undefined **)ppuVar6[(byte)(cVar3 - 1)];
      iVar8 = *(byte *)((long)ppuVar10 + 10) + 1;
      if (10 < iVar8 + (uint)*(byte *)((long)ppuVar9 + 10)) {
        bVar4 = *(byte *)(ppuVar9 + 1);
        goto LAB_00548528;
      }
      uVar13 = (ulong)(iVar8 + uVar12);
      ppuVar6 = param_1;
      FUN_005486ec(param_1,ppuVar10,ppuVar9);
      bVar5 = true;
    }
LAB_00548608:
    if (bVar14) {
      uStack_68 = CONCAT44(uStack_68._4_4_,(int)uVar13);
      param_2 = ppuVar10;
      param_3 = uVar13;
      ppuStack_70 = ppuVar10;
    }
    uVar12 = (uint)param_3;
    if (!bVar5) goto LAB_0054867c;
    bVar14 = false;
    uVar13 = (ulong)*(byte *)(ppuVar10 + 1);
    ppuVar9 = (undefined **)*ppuVar10;
  }
  if (*(char *)((long)ppuVar10 + 10) == '\0') {
    if (*(char *)((long)ppuVar10 + 0xb) == '\0') {
      ppuVar6 = ppuVar10;
      func_0x0054812c();
      *ppuVar6 = *(undefined **)*ppuVar6;
    }
    else {
      ppuVar6 = &PTR_LOOP_00a011e0;
      param_1[2] = (undefined *)&PTR_LOOP_00a011e0;
    }
    *param_1 = (undefined *)ppuVar6;
    FUN_00547fb8(ppuVar10,param_1 + 1);
  }
  if (param_1[3] == (undefined *)0x0) {
    param_2 = (undefined **)param_1[2];
    uVar13 = (ulong)*(byte *)((long)param_2 + 10);
  }
  else {
LAB_0054867c:
    uVar13 = uStack_68;
    if (uVar12 == *(byte *)((long)param_2 + 10)) {
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar12 - 1);
      FUN_00548260(&ppuStack_70);
      uVar13 = uStack_68;
      param_2 = ppuStack_70;
    }
  }
  uStack_78 = (undefined4)uVar13;
  if (cVar2 == '\0') {
    ppuStack_80 = param_2;
    FUN_00548260(&ppuStack_80);
    param_2 = ppuStack_80;
  }
  auVar16._12_4_ = uStack_74;
  auVar16._8_4_ = uStack_78;
  auVar16._0_8_ = param_2;
  return auVar16;
}



/* Entry: 005486ec; end: 00548b7b;  */

void FUN_005486ec(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint extraout_w8;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x10;
  long *unaff_x19;
  long unaff_x20;
  long lVar7;
  byte bVar8;
  long lVar9;
  
  lVar7 = param_3;
  func_0x005497c0();
  bVar8 = *(byte *)((long)param_2 + 10);
  lVar6 = *param_2 + (ulong)*(byte *)(param_2 + 1) * 0x18;
  lVar5 = *(long *)(lVar6 + 0x20);
  lVar9 = *(long *)(lVar6 + 0x10);
  param_2[(ulong)bVar8 * 3 + 3] = *(long *)(lVar6 + 0x18);
  param_2[(ulong)bVar8 * 3 + 2] = lVar9;
  param_2[(ulong)bVar8 * 3 + 4] = lVar5;
  if ((ulong)*(byte *)(lVar7 + 10) * 3 != 0) {
    do {
      func_0x005496d4();
    } while (extraout_x8 != 0x18);
  }
  cVar2 = *(char *)((long)unaff_x19 + 10);
  if (*(char *)((long)unaff_x19 + 0xb) == '\0') {
    bVar8 = 0;
    while( true ) {
      bVar3 = *(byte *)(param_3 + 10);
      if (bVar3 < bVar8) break;
      func_0x005496e8();
      func_0x00549734();
      func_0x00549790();
      bVar8 = bVar8 + 1;
    }
    cVar2 = *(char *)((long)unaff_x19 + 10);
  }
  else {
    bVar3 = *(byte *)(param_3 + 10);
  }
  *(byte *)((long)unaff_x19 + 10) = bVar3 + cVar2 + '\x01';
  *(undefined1 *)(param_3 + 10) = 0;
  lVar7 = *unaff_x19;
  uVar4 = (uint)*(byte *)(unaff_x19 + 1);
  bVar3 = *(byte *)(lVar7 + 10);
  bVar8 = *(byte *)(unaff_x19 + 1) + 1;
  if ((ulong)bVar3 * 0x18 + ((ulong)bVar8 * 2 + (ulong)bVar8) * -8 != 0) {
    do {
      func_0x005496ac();
      uVar4 = extraout_w8;
    } while (extraout_x10 != 0x18);
  }
  if (*(char *)(lVar7 + 0xb) == '\0') {
    func_0x005496f8();
    lVar5 = *(long *)(param_1 + ((ulong)(uVar4 + 1) & 0xff) * 8);
    FUN_00547fb8(lVar5,unaff_x20 + 8);
    while( true ) {
      bVar1 = bVar8 + 1;
      if (bVar3 < bVar1) break;
      func_0x005496f8();
      func_0x00548ba0(lVar7,bVar8,*(undefined8 *)(lVar5 + (ulong)bVar1 * 8));
      lVar5 = lVar7;
      FUN_00548bf4();
      bVar8 = bVar1;
    }
  }
  *(byte *)(lVar7 + 10) = bVar3 - 1;
  if (*(long *)(unaff_x20 + 0x10) == param_3) {
    *(long **)(unaff_x20 + 0x10) = unaff_x19;
  }
  return;
}



/* Entry: 00548b7c; end: 00548bc3;  */

void FUN_00548b7c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x00548ba0();
  *param_3 = param_1;
  return;
}



/* Entry: 00548bc4; end: 00548bf3;  */

void FUN_00548bc4(long param_1)

{
  undefined8 unaff_x19;
  ulong unaff_x20;
  
  func_0x00549724();
  FUN_00548bf4();
  func_0x00549790();
  *(undefined8 *)(param_1 + (unaff_x20 & 0xffffffff) * 8) = unaff_x19;
  return;
}



/* Entry: 00548bf4; end: 00548c2b;  */

long FUN_00548bf4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00549710(1,4);
  func_0x00548188();
  return param_1 + lVar1;
}



/* Entry: 00548c2c; end: 00548c5b;  */

void FUN_00548c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_00548c5c(param_1,param_2,&UNK_008000a0,&uStack_18,&uStack_20);
  return;
}



/* Entry: 00548c5c; end: 00548d3f;  */

void FUN_00548c5c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  
  if (param_2[3] == 0) {
    plVar1 = param_2;
    FUN_00548d40(param_2,1);
    param_2[2] = (long)plVar1;
    *param_2 = (long)plVar1;
  }
  plVar1 = param_2;
  uVar4 = param_3;
  FUN_00548d78();
  plVar2 = plVar1;
  uVar5 = uVar4;
  FUN_00548dcc();
  if (plVar2 != (long *)0x0) {
    iVar3 = (int)uVar5;
    FUN_005490e4(param_3,plVar2 + (long)iVar3 * 3 + 2);
    if ((int)param_3 == 0) {
      uVar6 = 0;
      goto LAB_00548d18;
    }
  }
  FUN_00548e00(param_2,plVar1,uVar4,param_4,param_5,param_6);
  iVar3 = (int)plVar1;
  uVar6 = 1;
  plVar2 = param_2;
LAB_00548d18:
  *param_1 = plVar2;
  *(int *)(param_1 + 1) = iVar3;
  *(undefined1 *)(param_1 + 2) = uVar6;
  return;
}



/* Entry: 00548d40; end: 00548d77;  */

void FUN_00548d40(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_2;
  FUN_005480cc();
  func_0x00549804();
  *(ulong *)uVar1 = uVar1;
  *(undefined2 *)(uVar1 + 8) = 0;
  *(undefined1 *)(uVar1 + 10) = 0;
  *(char *)(uVar1 + 0xb) = (char)param_2;
  return;
}



/* Entry: 00548d78; end: 00548dcb;  */

undefined1  [16] FUN_00548d78(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  func_0x005497c0();
  while( true ) {
    uVar2 = *param_1;
    uVar1 = uVar2;
    FUN_005490d4();
    if (*(char *)(uVar2 + 0xb) != '\0') break;
    uVar2 = uVar1;
    func_0x005496e8();
    param_1 = (ulong *)(uVar2 + (uVar1 & 0xff) * 8);
  }
  auVar3._8_8_ = uVar1 & 0xffffffff;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 00548dcc; end: 00548dff;  */

undefined1  [16] FUN_00548dcc(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2;
  do {
    if ((uint)uVar1 != (uint)*(byte *)((long)param_1 + 10)) goto LAB_00548df0;
    uVar1 = (ulong)*(byte *)(param_1 + 1);
    param_1 = (long *)*param_1;
  } while (*(char *)((long)param_1 + 0xb) == '\0');
  param_1 = (long *)0x0;
LAB_00548df0:
  auVar2._8_8_ = param_2 & 0xffffffff00000000 | uVar1 & 0xffffffff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 00548e00; end: 00548feb;  */

undefined1  [16]
FUN_00548e00(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  long *plVar5;
  int iVar6;
  int extraout_w8;
  uint uVar8;
  long lVar9;
  ulong extraout_x9;
  long extraout_x11;
  long *plVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plStack_50;
  uint uStack_48;
  undefined4 uStack_44;
  ulong uVar7;
  
  uStack_48 = (uint)param_3;
  uStack_44 = (undefined4)((ulong)param_3 >> 0x20);
  bVar11 = *(byte *)((long)param_2 + 0xb);
  plVar4 = param_1;
  plStack_50 = param_2;
  if (bVar11 == 0) {
    func_0x00549810();
    uStack_48 = uStack_48 + 1;
    bVar11 = *(byte *)((long)plStack_50 + 0xb);
  }
  plVar5 = plStack_50;
  uVar8 = 10;
  if (bVar11 != 0) {
    uVar8 = (uint)bVar11;
  }
  if (*(byte *)((long)plStack_50 + 10) == uVar8) {
    if (uVar8 < 10) {
      uVar8 = (uVar8 & 0x7f) << 1;
      if (9 < uVar8) {
        uVar8 = 10;
      }
      plVar4 = param_1;
      FUN_00548d40(param_1,uVar8);
      bVar11 = *(byte *)((long)plVar5 + 10);
      for (lVar9 = 0x10; (ulong)bVar11 * -0x18 + lVar9 != 0x10; lVar9 = lVar9 + 0x18) {
        puVar1 = (undefined8 *)((long)plVar5 + lVar9);
        puVar2 = (undefined8 *)((long)plVar4 + lVar9);
        uVar13 = puVar1[1];
        uVar12 = *puVar1;
        puVar2[2] = puVar1[2];
        puVar2[1] = uVar13;
        *puVar2 = uVar12;
      }
      *(undefined1 *)((long)plVar4 + 10) = *(undefined1 *)((long)plVar5 + 10);
      *(undefined1 *)((long)plVar5 + 10) = 0;
      plStack_50 = plVar4;
      FUN_00547fb8(plVar5,param_1 + 1);
      param_1[2] = (long)plVar4;
      *param_1 = (long)plVar4;
      plVar4 = plVar5;
    }
    else {
      plVar4 = param_1;
      func_0x0054918c(param_1,&plStack_50);
    }
  }
  plVar5 = plStack_50;
  uVar7 = (ulong)uStack_48 & 0xff;
  iVar6 = (int)uVar7;
  bVar11 = *(byte *)((long)plStack_50 + 10);
  if ((uStack_48 & 0xff) < (uint)bVar11) {
    lVar9 = ((ulong)((uint)bVar11 - iVar6) & 0xff) * -0x18;
    while (lVar9 != 0) {
      func_0x00549774();
      uVar7 = extraout_x9;
      iVar6 = extraout_w8;
      lVar9 = extraout_x11;
    }
    bVar11 = *(byte *)((long)plVar5 + 10);
  }
  uVar7 = uVar7 & 0xffffffff;
  plVar10 = (long *)*param_6;
  lVar9 = *(long *)*param_5;
  plVar5[uVar7 * 3 + 3] = ((long *)*param_5)[1];
  plVar5[uVar7 * 3 + 2] = lVar9;
  plVar5[uVar7 * 3 + 4] = *plVar10;
  bVar11 = bVar11 + 1;
  *(byte *)((long)plVar5 + 10) = bVar11;
  if ((*(char *)((long)plVar5 + 0xb) == '\0') && (iVar6 + 1U < (uint)bVar11)) {
    while (iVar6 + 1U < (uint)bVar11) {
      func_0x005496f8();
      plVar10 = plVar4 + (byte)(bVar11 - 1);
      plVar4 = plVar5;
      func_0x00548ba0(plVar5,bVar11,*plVar10);
      bVar11 = bVar11 - 1;
    }
    FUN_00548bf4(plVar5);
  }
  param_1[3] = param_1[3] + 1;
  auVar3._8_4_ = uStack_48;
  auVar3._0_8_ = plStack_50;
  auVar3._12_4_ = uStack_44;
  return auVar3;
}



/* Entry: 00548fec; end: 0054901b;  */

void FUN_00548fec(undefined8 *param_1,long param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_1;
  FUN_0054901c(&uStack_18,param_2 + 7U >> 3);
  return;
}



/* Entry: 0054901c; end: 00549023;  */

ulong FUN_0054901c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong auStack_38 [2];
  undefined8 uStack_28;
  
  uVar6 = *param_1;
  uVar4 = param_2 << 3;
  if (uVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(uVar4,param_2,0);
    return uVar4;
  }
  uStack_28 = 0xffffffffffffffff;
  puVar1 = auStack_38;
  auStack_38[0] = uVar4;
  func_0x0048b1cc(puVar1,&uStack_28,"num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)"
                 );
  if (puVar1 == (ulong *)0x0) {
    func_0x0048b21c(uVar6,uVar4,1);
    return uVar6;
  }
  uVar6 = (ulong)*(char *)((long)puVar1 + 0x17);
  puVar2 = puVar1;
  if ((long)uVar6 < 0) {
    puVar2 = (ulong *)*puVar1;
    uVar6 = puVar1[1];
  }
  FUN_00776714(auStack_38,
               "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
               ,0x10a,puVar2,uVar6);
  pcVar3 = "Requested size is too large to fit into size_t.";
  func_0x0048b1e8(auStack_38,"Requested size is too large to fit into size_t.");
  puVar1 = auStack_38;
  FUN_005558a0();
  uVar6 = 0;
  uVar4 = (ulong)*(byte *)((long)puVar1 + 10);
  while (uVar5 = uVar4, uVar6 != uVar5) {
    uVar4 = uVar6 + uVar5 >> 1;
    puVar2 = puVar1 + uVar4 * 3 + 2;
    FUN_005490e4(puVar2,pcVar3);
    if ((int)puVar2 != 0) {
      uVar6 = uVar4 + 1;
      uVar4 = uVar5;
    }
  }
  return uVar5;
}



/* Entry: 00549024; end: 005490d3;  */

ulong FUN_00549024(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong auStack_38 [2];
  undefined8 uStack_28;
  
  uVar6 = *param_1;
  uVar4 = param_2 << 3;
  if (uVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(uVar4);
    return uVar4;
  }
  uStack_28 = 0xffffffffffffffff;
  puVar1 = auStack_38;
  auStack_38[0] = uVar4;
  func_0x0048b1cc(puVar1,&uStack_28,"num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)"
                 );
  if (puVar1 == (ulong *)0x0) {
    func_0x0048b21c(uVar6,uVar4,1);
    return uVar6;
  }
  uVar6 = (ulong)*(char *)((long)puVar1 + 0x17);
  puVar2 = puVar1;
  if ((long)uVar6 < 0) {
    puVar2 = (ulong *)*puVar1;
    uVar6 = puVar1[1];
  }
  FUN_00776714(auStack_38,
               "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
               ,0x10a,puVar2,uVar6);
  pcVar3 = "Requested size is too large to fit into size_t.";
  func_0x0048b1e8(auStack_38,"Requested size is too large to fit into size_t.");
  puVar1 = auStack_38;
  FUN_005558a0();
  uVar6 = 0;
  uVar4 = (ulong)*(byte *)((long)puVar1 + 10);
  while (uVar5 = uVar4, uVar6 != uVar5) {
    uVar4 = uVar6 + uVar5 >> 1;
    puVar2 = puVar1 + uVar4 * 3 + 2;
    FUN_005490e4(puVar2,pcVar3);
    if ((int)puVar2 != 0) {
      uVar6 = uVar4 + 1;
      uVar4 = uVar5;
    }
  }
  return uVar5;
}



/* Entry: 005490d4; end: 005490e3;  */

ulong FUN_005490d4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = (ulong)*(byte *)(param_1 + 10);
  while (uVar2 = uVar4, uVar3 != uVar2) {
    uVar4 = uVar3 + uVar2 >> 1;
    lVar1 = param_1 + 0x10 + uVar4 * 0x18;
    FUN_005490e4(lVar1,param_2);
    if ((int)lVar1 != 0) {
      uVar3 = uVar4 + 1;
      uVar4 = uVar2;
    }
  }
  return uVar2;
}



/* Entry: 005490e4; end: 0054911f;  */

ulong FUN_005490e4(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1[1] == param_2[1]) {
    uVar1 = *param_1;
    uVar2 = 0;
    if (uVar1 != 0) {
      _memcmp(uVar1,*param_2);
      uVar2 = uVar1 >> 0x1f & 1;
    }
    return uVar2;
  }
  return (ulong)(param_1[1] < (ulong)param_2[1]);
}



/* Entry: 00549120; end: 005493af;  */

ulong FUN_00549120(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  
  while (uVar2 = param_4, param_3 != uVar2) {
    param_4 = param_3 + uVar2 >> 1;
    lVar1 = param_1 + 0x10 + param_4 * 0x18;
    FUN_005490e4(lVar1,param_2);
    if ((int)lVar1 != 0) {
      param_3 = param_4 + 1;
      param_4 = uVar2;
    }
  }
  return uVar2;
}



/* Entry: 005493b0; end: 005493ff;  */

undefined8 * FUN_005493b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x19;
  undefined1 unaff_w20;
  long unaff_x21;
  
  func_0x00549724();
  func_0x00548100();
  puVar1 = (undefined8 *)(unaff_x21 + 8);
  FUN_00548fec(puVar1,param_1);
  *puVar1 = unaff_x19;
  *(undefined1 *)(puVar1 + 1) = unaff_w20;
  *(undefined2 *)((long)puVar1 + 9) = 0;
  *(undefined1 *)((long)puVar1 + 0xb) = 0;
  FUN_00548bf4();
  return puVar1;
}



/* Entry: 00549400; end: 005495bb;  */

void FUN_00549400(undefined8 *param_1,int param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  ulong uVar6;
  ulong extraout_x8;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *puVar7;
  long lVar8;
  long extraout_x10;
  long lVar9;
  long extraout_x11;
  long extraout_x11_00;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_2 == 10) {
    bVar5 = 0;
  }
  else if (param_2 == 0) {
    bVar5 = *(char *)((long)param_1 + 10) - 1;
  }
  else {
    bVar5 = *(byte *)((long)param_1 + 10) >> 1;
  }
  *(byte *)(param_3 + 10) = bVar5;
  *(byte *)((long)param_1 + 10) = *(char *)((long)param_1 + 10) - bVar5;
  puVar7 = param_1 + 2;
  lVar8 = (ulong)*(byte *)(param_3 + 10) * -0x18;
  lVar9 = 0x10;
  puVar4 = param_1;
  while (lVar8 + lVar9 != 0x10) {
    func_0x005496ac();
    puVar7 = extraout_x9;
    lVar8 = extraout_x10;
    lVar9 = extraout_x11 + 0x18;
  }
  bVar5 = *(char *)((long)param_1 + 10) - 1;
  *(byte *)((long)param_1 + 10) = bVar5;
  puVar10 = (undefined8 *)*param_1;
  bVar2 = *(byte *)(param_1 + 1);
  uVar6 = (ulong)bVar2;
  puVar7 = puVar7 + (ulong)bVar5 * 3;
  bVar5 = *(byte *)((long)puVar10 + 10);
  if (bVar2 < bVar5) {
    lVar9 = ((ulong)((uint)bVar5 - (uint)bVar2) & 0xff) * -0x18;
    while (lVar9 != 0) {
      func_0x00549774();
      uVar6 = extraout_x8;
      puVar7 = extraout_x9_00;
      lVar9 = extraout_x11_00;
    }
    bVar5 = *(byte *)((long)puVar10 + 10);
  }
  uVar3 = uVar6 & 0xffffffff;
  uVar12 = puVar7[1];
  uVar11 = *puVar7;
  puVar10[uVar3 * 3 + 4] = puVar7[2];
  puVar10[uVar3 * 3 + 3] = uVar12;
  puVar10[uVar3 * 3 + 2] = uVar11;
  bVar5 = bVar5 + 1;
  *(byte *)((long)puVar10 + 10) = bVar5;
  if ((*(char *)((long)puVar10 + 0xb) == '\0') && (uVar1 = (int)uVar6 + 1, uVar1 < bVar5)) {
    while (uVar1 < bVar5) {
      func_0x005496e8();
      puVar7 = puVar4 + (byte)(bVar5 - 1);
      puVar4 = puVar10;
      func_0x00548ba0(puVar10,bVar5,*puVar7);
      bVar5 = bVar5 - 1;
    }
    func_0x00549790();
  }
  FUN_00548bc4(*param_1,*(char *)(param_1 + 1) + '\x01',param_3);
  if (*(char *)((long)param_1 + 0xb) == '\0') {
    for (bVar5 = 0; bVar5 <= *(byte *)(param_3 + 10); bVar5 = bVar5 + 1) {
      func_0x005481b8();
      func_0x00549750();
      FUN_00548bf4(param_1);
    }
  }
  return;
}



/* Entry: 005495bc; end: 005495bf;  */

undefined8 FUN_005495bc(undefined8 param_1)

{
  FUN_00547f7c();
  return param_1;
}



/* Entry: 005495c0; end: 005495f7;  */

void FUN_005495c0(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_00549624();
  FUN_005495f8(param_1,uVar1,param_2 & 0xffffffff);
  return;
}



/* Entry: 005495f8; end: 00549623;  */

undefined1  [16] FUN_005495f8(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if (param_2 == 0) {
    uVar1 = 0;
    param_2 = *(long *)(param_1 + 0x10);
    param_3 = (ulong)*(byte *)(param_2 + 10);
  }
  else {
    uVar1 = param_3 & 0xffffffff00000000;
  }
  auVar2._8_8_ = uVar1 | param_3 & 0xffffffff;
  auVar2._0_8_ = param_2;
  return auVar2;
}



/* Entry: 00549624; end: 0054967b;  */

undefined1  [16] FUN_00549624(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2;
  FUN_00548d78();
  FUN_00548dcc();
  if ((param_1 == 0) ||
     (FUN_005490e4(param_2,param_1 + (long)(int)uVar1 * 0x18 + 0x10), (int)param_2 != 0)) {
    uVar1 = 0;
    param_1 = 0;
  }
  auVar2._8_8_ = uVar1 & 0xffffffff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 0054967c; end: 00549833;  */

void FUN_0054967c(void)

{
  return;
}



/* Entry: 00549834; end: 0054991b;  */

ulong FUN_00549834(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [80];
  int iStack_58;
  undefined8 uStack_38;
  
  func_0x0054adbc();
  uStack_c0 = param_1;
  uStack_b8 = param_2;
  uStack_38 = extraout_x8;
  FUN_0054ad28(auStack_a8,uRam0000000000b1e638,0,&puStack_c8,&uStack_c0);
  puStack_b0 = puStack_c8;
  while( true ) {
    puVar1 = auStack_a8;
    uVar4 = 0;
    func_0x00538a04();
    if (((ulong)puVar1 & 1) != 0) break;
    puVar5 = puStack_b0;
    func_0x0054ad9c();
    uVar4 = (uint)puVar5;
    func_0x0054ade4();
    puStack_b0 = puVar1;
    if ((puVar1 == (undefined1 *)0x0) || (iStack_58 != 0)) break;
  }
  puStack_c8 = puStack_b0;
  if ((*(byte *)(param_4 + 9) & 1) != 0) {
    puVar5 = puStack_b0;
    func_0x0054ae40(*(undefined8 *)(param_4 + 0x28));
    uVar4 = (uint)puVar5;
    puStack_c8 = puVar1;
  }
  uVar2 = 0;
  if ((puStack_c8 != (undefined1 *)0x0) && (iStack_58 == 0)) {
    func_0x0054ae18();
  }
  func_0x0054ad7c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if ((uVar4 >> 1 & 1) != 0) {
      return 1;
    }
    uVar3 = uVar2;
    FUN_00549a28();
    if ((uVar3 & 1) == 0) {
      FUN_0077638c(uVar2);
    }
    return uVar3;
  }
  return uVar2;
}



/* Entry: 0054991c; end: 0054992b;  */

ulong FUN_0054991c(ulong param_1,uint param_2)

{
  ulong uVar1;
  
  if ((param_2 >> 1 & 1) == 0) {
    uVar1 = param_1;
    FUN_00549a28();
    if ((uVar1 & 1) == 0) {
      FUN_0077638c(param_1);
    }
    return uVar1;
  }
  return 1;
}



/* Entry: 0054992c; end: 00549a27;  */

long FUN_0054992c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined1 *puVar4;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0054adbc(param_1,param_1);
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x7fffffff00000000;
  uStack_50 = uRam0000000000b1e638;
  uStack_4c = 0x80000000;
  uStack_48 = 0;
  uStack_40 = 0;
  puVar1 = auStack_a8;
  uStack_38 = extraout_x8;
  FUN_0054b5a8();
  puStack_b0 = puVar1;
  while( true ) {
    puVar1 = auStack_a8;
    func_0x00538a04(puVar1,&puStack_b0);
    if (((ulong)puVar1 & 1) != 0) break;
    func_0x0054ad9c();
    func_0x0054ade4();
    puStack_b0 = puVar1;
    if ((puVar1 == (undefined1 *)0x0) || ((int)uStack_58 != 0)) break;
  }
  puVar4 = puStack_b0;
  if ((*(byte *)(param_3 + 9) & 1) != 0) {
    func_0x0054ae40(*(undefined8 *)(param_3 + 0x28));
    puVar4 = puVar1;
  }
  lVar2 = 0;
  if (puVar4 != (undefined1 *)0x0) {
    in_ZR = (int)uStack_58 == 1;
    if ((bool)in_ZR) {
      func_0x0054ae18();
    }
  }
  func_0x0054ad7c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    lVar3 = lVar2;
    func_0x0054ad90();
    if (*(code **)(lVar3 + 0x10) == (code *)0x0) {
      return 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00549a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar2);
    return lVar2;
  }
  return lVar2;
}



/* Entry: 00549a28; end: 00549a5f;  */

long FUN_00549a28(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0054ad90();
  if (*(code **)(lVar1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00549a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(param_1);
    return param_1;
  }
  return 1;
}



/* Entry: 00549a60; end: 00549afb;  */

void FUN_00549a60(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  code *extraout_x9;
  long unaff_x20;
  
  func_0x0054ae68();
  FUN_00533888();
  while (uVar1 = param_3, func_0x00538a04(param_3,&stack0xffffffffffffffc8), (uVar1 & 1) == 0) {
    func_0x0054ad9c();
    lVar2 = unaff_x20;
    (*extraout_x9)();
    if ((lVar2 == 0) || (*(int *)(param_3 + 0x50) != 0)) break;
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    (**(code **)(param_1 + 0x28))();
  }
  return;
}



/* Entry: 00549afc; end: 00549b9f;  */

ulong * FUN_00549afc(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  long *plVar9;
  
  puVar7 = param_2;
  func_0x0054ad90();
  if ((*(byte *)((long)puVar7 + 0x1c) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00549b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)puVar7[5])(param_1,param_2);
    return param_2;
  }
  puVar5 = puVar7 + 4;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar5) {
    FUN_0040d740();
    plVar9 = (long *)puVar5[1];
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    return puVar5;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)puVar5 | 7);
    }
    puVar6 = (ulong *)((long)pdVar4 + 1);
    __Znwm();
    param_1[1] = (ulong)puVar5;
    param_1[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)puVar5;
    puVar6 = param_1;
    if (puVar5 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar6,puVar7 + 4,puVar5);
LAB_00425d3c:
  *(undefined1 *)((long)puVar6 + (long)puVar5) = 0;
  return param_1;
}



/* Entry: 00549ba0; end: 00549d77;  */

void FUN_00549ba0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  long *plVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 *unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar7;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x0054ae68(param_1);
    func_0x0054adbc();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    *(undefined ***)((long)register0x00000008 + -0xd0) = &PTR_FUN_00a01200;
    *(long *)((long)register0x00000008 + -200) = param_2;
    uVar2 = *(undefined4 *)(param_2 + 0x34);
    bVar3 = *(byte *)(param_2 + 0x25);
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(ulong *)((long)register0x00000008 + -0x70) = (ulong)bVar3;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x7ff8000000000000;
    *(undefined4 *)((long)register0x00000008 + -0x60) = uVar2;
    *(undefined4 *)((long)register0x00000008 + -0x5c) = 0x80000000;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xb8);
    FUN_0054b5a8(puVar5,(undefined1 *)((long)register0x00000008 + -0xd0));
    *(undefined4 *)((long)register0x00000008 + -0x5c) = 0;
    uVar7 = *(undefined8 *)(unaff_x21 + 0x40);
    *(undefined8 *)((long)register0x00000008 + -0x50) = *(undefined8 *)(unaff_x21 + 0x48);
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar7;
    lVar6 = unaff_x20;
    FUN_00533888();
    *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar5;
    while( true ) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xb8);
      func_0x00538a04(unaff_x22,(undefined1 *)((long)register0x00000008 + -0xc0));
      if (((ulong)unaff_x22 & 1) != 0) break;
      func_0x0054ade4();
      *(undefined1 **)((long)register0x00000008 + -0xc0) = unaff_x22;
      if ((unaff_x22 == (undefined1 *)0x0) || (*(int *)((long)register0x00000008 + -0x68) != 0))
      break;
    }
    if ((*(byte *)(lVar6 + 9) & 1) == 0) {
      unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0xc0);
    }
    else {
      func_0x0054ae40(*(undefined8 *)(lVar6 + 0x28));
    }
    if (unaff_x22 != (undefined1 *)0x0) {
      if (*(undefined1 **)((long)register0x00000008 + -0xa8) ==
          (undefined1 *)((long)register0x00000008 + -0x90)) {
        uVar1 = (*(int *)((long)register0x00000008 + -0xb0) - (int)unaff_x22) + 0x10;
      }
      else {
        uVar1 = *(int *)((long)register0x00000008 + -0xa0) +
                (*(int *)((long)register0x00000008 + -0xb0) - (int)unaff_x22);
      }
      unaff_x23 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        (**(code **)(**(long **)((long)register0x00000008 + -0x98) + 0x18))
                  (*(long **)((long)register0x00000008 + -0x98),unaff_x23);
        *(uint *)((long)register0x00000008 + -100) =
             *(int *)((long)register0x00000008 + -100) + uVar1;
      }
      if (*(int *)((long)register0x00000008 + -0x68) == 1) {
        *(undefined1 *)(unaff_x21 + 0x24) = 1;
        in_ZR = true;
      }
      else {
        in_ZR = unaff_x22 == *(undefined1 **)((long)register0x00000008 + -0xb8);
        if ((*(undefined1 **)((long)register0x00000008 + -0xb8) < unaff_x22) &&
           ((*(long *)((long)register0x00000008 + -0xa8) == 0 ||
            (in_ZR = (long)unaff_x22 - *(long *)((long)register0x00000008 + -0xb0) ==
                     (long)*(int *)((long)register0x00000008 + -0x9c),
            (long)*(int *)((long)register0x00000008 + -0x9c) <
            (long)unaff_x22 - *(long *)((long)register0x00000008 + -0xb0))))) goto LAB_00549d34;
        *(int *)(unaff_x21 + 0x20) = *(int *)((long)register0x00000008 + -0x68) + 1;
      }
      func_0x0054ae18();
    }
LAB_00549d34:
    func_0x0054ad7c(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    plVar4 = (long *)((long)register0x00000008 + -0xf0);
    *(long *)((long)register0x00000008 + -0xf0) = unaff_x20;
    *(long *)((long)register0x00000008 + -0xe8) = param_3;
    *(undefined1 **)((long)register0x00000008 + -0xe0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xd8) = FUN_00549d78;
    func_0x0054ae24();
    func_0x0054ae0c();
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xd8);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0xe8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
    param_1 = unaff_x20;
    param_2 = param_3;
    param_3 = 1;
    unaff_x20 = *plVar4;
  } while( true );
}



/* Entry: 00549d78; end: 00549da3;  */

void FUN_00549d78(void)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 *unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar7;
  
  do {
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x0054ae24();
    func_0x0054ae0c();
    lVar2 = *(long *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = lVar2;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0054ae68(unaff_x20);
    func_0x0054adbc();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    *(undefined ***)((long)register0x00000008 + -0xd0) = &PTR_FUN_00a01200;
    *(long *)((long)register0x00000008 + -200) = unaff_x19;
    uVar3 = *(undefined4 *)(unaff_x19 + 0x34);
    bVar4 = *(byte *)(unaff_x19 + 0x25);
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(ulong *)((long)register0x00000008 + -0x70) = (ulong)bVar4;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x7ff8000000000000;
    *(undefined4 *)((long)register0x00000008 + -0x60) = uVar3;
    *(undefined4 *)((long)register0x00000008 + -0x5c) = 0x80000000;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xb8);
    FUN_0054b5a8(puVar5,(undefined1 *)((long)register0x00000008 + -0xd0));
    *(undefined4 *)((long)register0x00000008 + -0x5c) = 0;
    uVar7 = *(undefined8 *)(unaff_x21 + 0x40);
    *(undefined8 *)((long)register0x00000008 + -0x50) = *(undefined8 *)(unaff_x21 + 0x48);
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar7;
    lVar6 = lVar2;
    FUN_00533888();
    *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar5;
    while( true ) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xb8);
      func_0x00538a04(unaff_x22,(undefined1 *)((long)register0x00000008 + -0xc0));
      if (((ulong)unaff_x22 & 1) != 0) break;
      func_0x0054ade4();
      *(undefined1 **)((long)register0x00000008 + -0xc0) = unaff_x22;
      if ((unaff_x22 == (undefined1 *)0x0) || (*(int *)((long)register0x00000008 + -0x68) != 0))
      break;
    }
    if ((*(byte *)(lVar6 + 9) & 1) == 0) {
      unaff_x22 = *(undefined1 **)((long)register0x00000008 + -0xc0);
    }
    else {
      func_0x0054ae40(*(undefined8 *)(lVar6 + 0x28));
    }
    if (unaff_x22 != (undefined1 *)0x0) {
      if (*(undefined1 **)((long)register0x00000008 + -0xa8) ==
          (undefined1 *)((long)register0x00000008 + -0x90)) {
        uVar1 = (*(int *)((long)register0x00000008 + -0xb0) - (int)unaff_x22) + 0x10;
      }
      else {
        uVar1 = *(int *)((long)register0x00000008 + -0xa0) +
                (*(int *)((long)register0x00000008 + -0xb0) - (int)unaff_x22);
      }
      unaff_x23 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        (**(code **)(**(long **)((long)register0x00000008 + -0x98) + 0x18))
                  (*(long **)((long)register0x00000008 + -0x98),unaff_x23);
        *(uint *)((long)register0x00000008 + -100) =
             *(int *)((long)register0x00000008 + -100) + uVar1;
      }
      if (*(int *)((long)register0x00000008 + -0x68) == 1) {
        *(undefined1 *)(unaff_x21 + 0x24) = 1;
        in_ZR = true;
      }
      else {
        in_ZR = unaff_x22 == *(undefined1 **)((long)register0x00000008 + -0xb8);
        if ((*(undefined1 **)((long)register0x00000008 + -0xb8) < unaff_x22) &&
           ((*(long *)((long)register0x00000008 + -0xa8) == 0 ||
            (in_ZR = (long)unaff_x22 - *(long *)((long)register0x00000008 + -0xb0) ==
                     (long)*(int *)((long)register0x00000008 + -0x9c),
            (long)*(int *)((long)register0x00000008 + -0x9c) <
            (long)unaff_x22 - *(long *)((long)register0x00000008 + -0xb0))))) goto LAB_00549d34;
        *(int *)(unaff_x21 + 0x20) = *(int *)((long)register0x00000008 + -0x68) + 1;
      }
      func_0x0054ae18();
    }
LAB_00549d34:
    func_0x0054ad7c(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) {
      return;
    }
    unaff_x30 = FUN_00549d78;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
    unaff_x19 = 1;
    unaff_x20 = lVar2;
  } while( true );
}



/* Entry: 00549da4; end: 00549dc3;  */

void FUN_00549da4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_00549dc4(param_1,&uStack_18);
  return;
}



/* Entry: 00549dc4; end: 00549e13;  */

long FUN_00549dc4(long *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined1 *puVar5;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0054aec4();
  func_0x0054ae0c();
  func_0x0054ae38(*(undefined8 *)(*unaff_x19 + 0x30));
  plVar4 = (long *)*param_1;
  if ((long *)*param_1 == (long *)0x0) {
    func_0x0054ae38(*(undefined8 *)(param_1[5] + 0x10));
    plVar4 = param_1;
  }
  func_0x0054adbc(*unaff_x20,*unaff_x20);
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x7fffffff00000000;
  uStack_50 = uRam0000000000b1e638;
  uStack_4c = 0x80000000;
  uStack_48 = 0;
  uStack_40 = 0;
  puVar1 = auStack_a8;
  uStack_38 = extraout_x8;
  FUN_0054b5a8();
  puStack_b0 = puVar1;
  while( true ) {
    puVar1 = auStack_a8;
    func_0x00538a04(puVar1,&puStack_b0);
    if (((ulong)puVar1 & 1) != 0) break;
    func_0x0054ad9c();
    func_0x0054ade4();
    puStack_b0 = puVar1;
    if ((puVar1 == (undefined1 *)0x0) || ((int)uStack_58 != 0)) break;
  }
  puVar5 = puStack_b0;
  if ((*(byte *)((long)plVar4 + 9) & 1) != 0) {
    func_0x0054ae40(plVar4[5]);
    puVar5 = puVar1;
  }
  lVar2 = 0;
  if (puVar5 != (undefined1 *)0x0) {
    in_ZR = (int)uStack_58 == 1;
    if ((bool)in_ZR) {
      func_0x0054ae18();
    }
  }
  func_0x0054ad7c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    lVar3 = lVar2;
    func_0x0054ad90();
    if (*(code **)(lVar3 + 0x10) == (code *)0x0) {
      return 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00549a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar2);
    return lVar2;
  }
  return lVar2;
}



/* Entry: 00549e14; end: 00549e33;  */

void FUN_00549e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_00549e34(param_1,&uStack_20);
  return;
}



/* Entry: 00549e34; end: 00549e83;  */

ulong FUN_00549e34(long *param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [80];
  int iStack_58;
  undefined8 uStack_38;
  
  func_0x0054aec4();
  func_0x0054ae0c();
  func_0x0054ae38(*(undefined8 *)(*unaff_x19 + 0x30));
  plVar8 = (long *)*param_1;
  if ((long *)*param_1 == (long *)0x0) {
    func_0x0054ae38(*(undefined8 *)(param_1[5] + 0x10));
    plVar8 = param_1;
  }
  uVar1 = *unaff_x20;
  uVar6 = unaff_x20[1];
  func_0x0054adbc();
  uStack_c0 = uVar1;
  uStack_b8 = uVar6;
  uStack_38 = extraout_x8;
  FUN_0054ad28(auStack_a8,uRam0000000000b1e638,0,&puStack_c8,&uStack_c0);
  puStack_b0 = puStack_c8;
  while( true ) {
    puVar2 = auStack_a8;
    uVar5 = 0;
    func_0x00538a04();
    if (((ulong)puVar2 & 1) != 0) break;
    puVar7 = puStack_b0;
    func_0x0054ad9c();
    uVar5 = (uint)puVar7;
    func_0x0054ade4();
    puStack_b0 = puVar2;
    if ((puVar2 == (undefined1 *)0x0) || (iStack_58 != 0)) break;
  }
  puStack_c8 = puStack_b0;
  if ((*(byte *)((long)plVar8 + 9) & 1) != 0) {
    puVar7 = puStack_b0;
    func_0x0054ae40(plVar8[5]);
    uVar5 = (uint)puVar7;
    puStack_c8 = puVar2;
  }
  uVar3 = 0;
  if ((puStack_c8 != (undefined1 *)0x0) && (iStack_58 == 0)) {
    func_0x0054ae18();
  }
  func_0x0054ad7c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if ((uVar5 >> 1 & 1) != 0) {
      return 1;
    }
    uVar4 = uVar3;
    FUN_00549a28();
    if ((uVar4 & 1) == 0) {
      FUN_0077638c(uVar3);
    }
    return uVar4;
  }
  return uVar3;
}



/* Entry: 00549e84; end: 00549ea7;  */

void FUN_00549e84(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = (long)param_3;
  uStack_20 = param_2;
  FUN_00549e34(param_1,&uStack_20);
  return;
}



/* Entry: 00549ea8; end: 00549ed7;  */

long * FUN_00549ea8(void)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long *unaff_x20;
  
  func_0x0054ae24();
  func_0x0054ad90();
  plVar1 = unaff_x20;
  func_0x0054adbc();
  (**(code **)(*plVar1 + 0x38))();
  func_0x0054ad7c(extraout_x8);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x0054adf4();
  func_0x0054add4();
  return unaff_x20;
}



/* Entry: 00549ed8; end: 00549f3b;  */

void FUN_00549ed8(long *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  
  func_0x0054adbc();
  (**(code **)(*param_1 + 0x38))();
  func_0x0054ad7c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0054adf4();
  func_0x0054add4();
  return;
}



/* Entry: 00549f3c; end: 00549f5b;  */

void FUN_00549f3c(void)

{
  func_0x0054adf4();
  func_0x0054add4();
  return;
}



/* Entry: 00549f5c; end: 00549f7f;  */

void FUN_00549f5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_00554a50(param_1,&uStack_18);
  return;
}



/* Entry: 00549f80; end: 0054a0ab;  */

bool FUN_00549f80(ulong param_1)

{
  bool bVar1;
  long extraout_x8;
  long *unaff_x20;
  undefined1 auStack_e0 [16];
  undefined1 auStack_88 [16];
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [32];
  
  func_0x0054ae68();
  func_0x0054adbc();
  func_0x0054ae84();
  bVar1 = param_1 >> 0x1f != 0;
  if (bVar1) {
    func_0x0054aeb8();
    func_0x007766a0(auStack_88);
    FUN_00549afc(&puStack_78);
    FUN_00555478(auStack_88,&puStack_78);
    FUN_00549f3c(auStack_88);
    func_0x0054aeb0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_78);
    FUN_007766a8();
  }
  else {
    puStack_78 = auStack_68;
    puStack_70 = puStack_78;
    func_0x0054ae40(*(undefined8 *)(*unaff_x20 + 0x38));
    func_0x0054ed18();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == extraout_x8) {
    return !bVar1;
  }
  ___stack_chk_fail();
  FUN_007766a8(auStack_88);
  func_0x0054ae04();
  func_0x0054ae68();
  (**(code **)(*unaff_x20 + 0x28))();
  if ((ulong)unaff_x20 >> 0x1f == 0) {
    FUN_0054a17c();
    FUN_00549ed8();
  }
  else {
    func_0x0054aeb8();
    func_0x007766a0(auStack_e0);
    func_0x0054ae98();
    func_0x0054aea4();
    func_0x0054ae58();
    func_0x0054aeb0();
    func_0x0054ae50();
    func_0x0054ae48();
  }
  return (ulong)unaff_x20 >> 0x1f == 0;
}



/* Entry: 0054a0ac; end: 0054a17b;  */

bool FUN_0054a0ac(void)

{
  long *unaff_x20;
  undefined1 auStack_50 [16];
  
  func_0x0054ae68();
  (**(code **)(*unaff_x20 + 0x28))();
  if ((ulong)unaff_x20 >> 0x1f == 0) {
    FUN_0054a17c();
    FUN_00549ed8();
  }
  else {
    func_0x0054aeb8();
    func_0x007766a0(auStack_50);
    func_0x0054ae98();
    func_0x0054aea4();
    func_0x0054ae58();
    func_0x0054aeb0();
    func_0x0054ae50();
    func_0x0054ae48();
  }
  return (ulong)unaff_x20 >> 0x1f == 0;
}



/* Entry: 0054a17c; end: 0054a19f;  */

void FUN_0054a17c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar4 < 0) {
    uVar4 = param_1[1];
  }
  uVar1 = param_2 - uVar4;
  if (uVar4 <= param_2 && uVar1 != 0) {
    if (uVar1 != 0) {
      uVar4 = (ulong)*(char *)((long)param_1 + 0x17);
      if ((long)uVar4 < 0) {
        uVar5 = param_1[1];
        lVar2 = (param_1[2] & 0x7fffffffffffffff) - 1;
        uVar4 = (ulong)param_1[2] >> 0x38;
      }
      else {
        lVar2 = 0x16;
        uVar5 = uVar4;
      }
      uVar3 = (uint)uVar4;
      if (lVar2 - uVar5 < uVar1) {
        FUN_004625f0(param_1,lVar2,(uVar1 - lVar2) + uVar5,uVar5,uVar5,0,0);
        uVar3 = (uint)*(byte *)((long)param_1 + 0x17);
      }
      if ((uVar3 >> 7 & 1) == 0) {
        *(byte *)((long)param_1 + 0x17) = (char)uVar5 + (char)uVar1 & 0x7f;
      }
      else {
        param_1[1] = uVar5 + uVar1;
        param_1 = (undefined8 *)*param_1;
      }
      *(undefined1 *)((long)param_1 + uVar5 + uVar1) = 0;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00779b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm_00998988)
            (param_1,param_2,0xffffffffffffffff);
  return;
}



/* Entry: 0054a1a0; end: 0054a1cb;  */

bool FUN_0054a1a0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long lVar2;
  undefined1 auStack_50 [16];
  
  func_0x0054ae24();
  func_0x0048d000(param_2);
  func_0x0054ae68();
  lVar2 = (long)*(char *)(unaff_x19 + 0x17);
  if (lVar2 < 0) {
    lVar2 = unaff_x21[1];
  }
  plVar1 = unaff_x20;
  (**(code **)(*unaff_x20 + 0x28))();
  if ((ulong)plVar1 >> 0x1f == 0) {
    FUN_0054a17c();
    if (*(char *)((long)unaff_x21 + 0x17) < '\0') {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    FUN_00549ed8(unaff_x20,(long)unaff_x21 + lVar2,plVar1);
  }
  else {
    func_0x0054aeb8();
    func_0x007766a0(auStack_50);
    func_0x0054ae98();
    func_0x0054aea4();
    func_0x0054ae58();
    func_0x0054aeb0();
    func_0x0054ae50();
    func_0x0054ae48();
  }
  return (ulong)plVar1 >> 0x1f == 0;
}



/* Entry: 0054a1cc; end: 0054a273;  */

undefined8 FUN_0054a1cc(ulong param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_40 [16];
  
  func_0x0054ae68();
  func_0x0054ae84();
  if (param_1 >> 0x1f == 0) {
    if ((long)param_1 <= (long)param_3) {
      FUN_00549ed8();
      return 1;
    }
  }
  else {
    func_0x0054aeb8();
    func_0x007766a0(auStack_40);
    func_0x0054ae98();
    func_0x0054aea4();
    func_0x0054ae58();
    func_0x0054aeb0();
    func_0x0054ae50();
    func_0x0054ae48();
  }
  return 0;
}



/* Entry: 0054a274; end: 0054a2c3;  */

void FUN_0054a274(undefined8 *param_1,ulong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0054a0ac(param_2,param_1);
  if ((param_2 & 1) != 0) {
    return;
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 0054a2c4; end: 0054a2e3;  */

void FUN_0054a2c4(void)

{
  func_0x0054adf4();
  func_0x0054add4();
  return;
}



/* Entry: 0054a2e4; end: 0054a343;  */

/* WARNING: Removing unreachable block (ram,0x00558780) */
/* WARNING: Removing unreachable block (ram,0x00558788) */
/* WARNING: Removing unreachable block (ram,0x00558adc) */
/* WARNING: Removing unreachable block (ram,0x00558ae4) */
/* WARNING: Removing unreachable block (ram,0x00558aec) */
/* WARNING: Removing unreachable block (ram,0x00558afc) */
/* WARNING: Removing unreachable block (ram,0x00558b08) */
/* WARNING: Removing unreachable block (ram,0x00558b18) */
/* WARNING: Removing unreachable block (ram,0x00558b44) */
/* WARNING: Removing unreachable block (ram,0x00558b48) */
/* WARNING: Removing unreachable block (ram,0x00558b58) */
/* WARNING: Removing unreachable block (ram,0x00558b68) */
/* WARNING: Removing unreachable block (ram,0x00558b78) */
/* WARNING: Removing unreachable block (ram,0x00558b84) */
/* WARNING: Removing unreachable block (ram,0x00558bac) */
/* WARNING: Removing unreachable block (ram,0x00558bb8) */
/* WARNING: Removing unreachable block (ram,0x00558bc4) */
/* WARNING: Removing unreachable block (ram,0x00558790) */
/* WARNING: Removing unreachable block (ram,0x005587a0) */
/* WARNING: Removing unreachable block (ram,0x005587ac) */
/* WARNING: Removing unreachable block (ram,0x005588f0) */
/* WARNING: Removing unreachable block (ram,0x005587b8) */
/* WARNING: Removing unreachable block (ram,0x005587d8) */
/* WARNING: Removing unreachable block (ram,0x005588f4) */
/* WARNING: Removing unreachable block (ram,0x00558904) */
/* WARNING: Removing unreachable block (ram,0x00558914) */
/* WARNING: Removing unreachable block (ram,0x00558924) */
/* WARNING: Removing unreachable block (ram,0x00558930) */
/* WARNING: Removing unreachable block (ram,0x00558958) */
/* WARNING: Removing unreachable block (ram,0x00558964) */
/* WARNING: Removing unreachable block (ram,0x00558970) */

void FUN_0054a2e4(ulong *param_1,byte *param_2,undefined8 *param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  bool bVar12;
  byte *pbVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  byte *pbVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  
  pbVar13 = param_2;
  func_0x0054a724();
  if ((int)pbVar13 != 0) {
    if (param_3 < &MACH_HEADER.ncmds) {
      *(byte *)param_1 = 1;
      pbVar13 = (byte *)((long)param_1 + 1);
      pbVar13[0] = 0;
      pbVar13[1] = 0;
      pbVar13[2] = 0;
      pbVar13[3] = 0;
      pbVar13[4] = 0;
      pbVar13[5] = 0;
      pbVar13[6] = 0;
      pbVar13[7] = 0;
      param_1[1] = 0;
    }
    else {
      func_0x0054a7a4();
      *param_3 = 0;
      *param_1 = (ulong)param_3;
    }
    return;
  }
  bVar10 = *param_2;
  uVar21 = (ulong)(char)bVar10;
  if (((uVar21 & 1) == 0) || (plVar14 = *(long **)(param_2 + 8), plVar14 == (long *)0x0)) {
    uVar22 = uVar21 >> 1;
    uVar7 = (long)param_3 + uVar22;
    if (CARRY8((ulong)param_3,uVar22)) {
      uVar7 = 0xffffffffffffffff;
    }
    if (uVar7 < 0x10) {
      *(byte *)param_1 = 1;
      pbVar13 = (byte *)((long)param_1 + 1);
      pbVar13[0] = 0;
      pbVar13[1] = 0;
      pbVar13[2] = 0;
      pbVar13[3] = 0;
      pbVar13[4] = 0;
      pbVar13[5] = 0;
      pbVar13[6] = 0;
      pbVar13[7] = 0;
      param_1[1] = 0;
      pbVar13 = (byte *)((long)param_1 + 1);
    }
    else {
      uVar5 = uVar7;
      if (0xff2 < uVar7) {
        uVar5 = 0xff3;
      }
      uVar6 = 0x20;
      if (0x13 < uVar7) {
        uVar6 = uVar5 + 0xd;
      }
      uVar7 = 0xfffffffffffffff8;
      if (0x200 < uVar6) {
        uVar7 = 0xffffffffffffffc0;
      }
      lVar11 = 8;
      if (0x200 < uVar6) {
        lVar11 = 0x40;
      }
      puVar20 = (undefined8 *)((uVar6 + lVar11) - 1 & uVar7);
      puVar15 = puVar20;
      __Znwm();
      bVar12 = section_000001f8.sectname + 8 < puVar20;
      lVar11 = 3;
      if (bVar12) {
        lVar11 = 6;
      }
      cVar1 = '\x02';
      if (bVar12) {
        cVar1 = ':';
      }
      puVar15[1] = 4;
      *puVar15 = 0;
      *(char *)((long)puVar15 + 0xc) = (char)((ulong)puVar20 >> lVar11) + cVar1;
      *param_1 = (ulong)puVar15;
      pbVar13 = (byte *)((long)puVar15 + 0xd);
      if (((ulong)puVar15 & 1) != 0) {
        pbVar13 = (byte *)((long)param_1 + 1);
      }
    }
    if (bVar10 < 0x10) {
      pbVar18 = param_2 + 1;
      if (bVar10 < 8) {
        if (1 < bVar10) {
          *pbVar13 = param_2[1];
          pbVar13[uVar21 >> 2] = pbVar18[uVar21 >> 2];
          pbVar13[uVar22 - 1] = param_2[uVar22];
        }
        bVar9 = (byte)*param_1;
      }
      else {
        uVar8 = *(undefined4 *)(pbVar18 + (uVar22 - 4));
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar18;
        *(undefined4 *)(pbVar13 + (uVar22 - 4)) = uVar8;
        bVar9 = (byte)*param_1;
      }
    }
    else {
      uVar19 = *(undefined8 *)(param_2 + 1 + (uVar22 - 8));
      *(undefined8 *)pbVar13 = *(undefined8 *)(param_2 + 1);
      *(undefined8 *)(pbVar13 + (uVar22 - 8)) = uVar19;
      bVar9 = (byte)*param_1;
    }
    if ((bVar9 & 1) == 0) {
      *(ulong *)*param_1 = uVar22;
    }
    else {
      *(byte *)param_1 = bVar10 | 1;
    }
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    return;
  }
  lVar16 = *(long *)param_2;
  lVar11 = lVar16 + -1;
  if (lVar11 == 0) {
    bVar10 = *(byte *)((long)plVar14 + 0xc);
  }
  else {
    FUN_0055b3ec(lVar11,0xc);
    bVar10 = *(byte *)((long)plVar14 + 0xc);
  }
  if (bVar10 == 3) {
    FUN_0055e184();
  }
  else {
    if ((5 < bVar10) && ((*(uint *)(plVar14 + 1) & 0xfffffffd) == 4)) {
      bVar10 = *(byte *)((long)plVar14 + 0xc);
      uVar17 = 6;
      if (0xba < bVar10) {
        uVar17 = 0xc;
      }
      iVar2 = -0xe8d;
      if (0xba < bVar10) {
        iVar2 = -0xb800d;
      }
      uVar3 = 3;
      if (0x42 < bVar10) {
        uVar3 = uVar17;
      }
      iVar4 = -0x1d;
      if (0x42 < bVar10) {
        iVar4 = iVar2;
      }
      if (param_4 <= (long *)((long)(int)(((uint)bVar10 << (ulong)uVar3) + iVar4) - *plVar14)) {
        param_4 = plVar14;
        plVar14 = (long *)0x0;
        goto joined_r0x00558ad4;
      }
    }
    param_4 = (long *)0x0;
  }
joined_r0x00558ad4:
  if (param_4 == (long *)0x0) {
    if ((undefined8 *)((long)&MACH_HEADER.filetype + 3) < param_3) {
      puVar15 = param_3;
      if ((undefined8 *)((long)&section_00000fa8.reserved2 + 2) < param_3) {
        puVar15 = (undefined8 *)((long)&section_00000fa8.reserved2 + 3);
      }
      uVar21 = 0x20;
      if ((undefined8 *)((long)&MACH_HEADER.ncmds + 3) < param_3) {
        uVar21 = (long)puVar15 + 0xd;
      }
      uVar7 = 0xfffffffffffffff8;
      if (0x200 < uVar21) {
        uVar7 = 0xffffffffffffffc0;
      }
      lVar16 = 8;
      if (0x200 < uVar21) {
        lVar16 = 0x40;
      }
      puVar20 = (undefined8 *)((uVar21 + lVar16) - 1 & uVar7);
      puVar15 = puVar20;
      __Znwm();
      bVar12 = section_000001f8.sectname + 8 < puVar20;
      lVar16 = 3;
      if (bVar12) {
        lVar16 = 6;
      }
      cVar1 = '\x02';
      if (bVar12) {
        cVar1 = ':';
      }
      puVar15[1] = 4;
      *puVar15 = 0;
      *(char *)((long)puVar15 + 0xc) = (char)((ulong)puVar20 >> lVar16) + cVar1;
      *param_1 = (ulong)puVar15;
    }
    else {
      *(byte *)param_1 = 1;
      pbVar13 = (byte *)((long)param_1 + 1);
      pbVar13[0] = 0;
      pbVar13[1] = 0;
      pbVar13[2] = 0;
      pbVar13[3] = 0;
      pbVar13[4] = 0;
      pbVar13[5] = 0;
      pbVar13[6] = 0;
      pbVar13[7] = 0;
      param_1[1] = 0;
    }
  }
  else {
    if (plVar14 == (long *)0x0) {
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
    }
    else {
      *(long **)(param_2 + 8) = plVar14;
    }
    if (lVar11 != 0) {
      *(long **)(lVar16 + 0x3f) = plVar14;
    }
    *param_1 = (ulong)param_4;
  }
  if (lVar11 != 0) {
    FUN_0055b518();
  }
  return;
}



/* Entry: 0054a344; end: 0054a3b3;  */

undefined1  [16] FUN_0054a344(byte *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((*param_1 & 1) == 0) {
    plVar2 = *(long **)param_1;
    lVar4 = *plVar2;
    plVar3 = plVar2;
    FUN_0054a89c();
    auVar6._8_8_ = (long)plVar3 - lVar4;
    auVar6._0_8_ = (long)plVar2 + lVar4 + 0xd;
    return auVar6;
  }
  iVar1 = (int)((uint)*param_1 << 0x18) >> 0x19;
  auVar5._8_8_ = 0xf - (long)iVar1;
  auVar5._0_8_ = param_1 + (long)iVar1 + 1;
  return auVar5;
}



/* Entry: 0054a3b4; end: 0054a3db;  */

void FUN_0054a3b4(ulong *param_1)

{
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 0054a3dc; end: 0054a413;  */

void FUN_0054a3dc(ulong *param_1)

{
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 0054a414; end: 0054a47b;  */

void FUN_0054a414(long param_1)

{
  long lStack_38;
  
  func_0x0054ae24();
  FUN_0054a47c();
  lStack_38 = param_1 + 0x18;
  FUN_00567528();
  FUN_0054a968(param_1,&stack0xffffffffffffffb8);
  FUN_0054abe8(&lStack_38);
  return;
}



/* Entry: 0054a47c; end: 0054a4ef;  */

segment_command * FUN_0054a47c(void)

{
  int iVar1;
  segment_command *psVar2;
  
  if ((bRam0000000000b1e630 & 1) == 0) {
    iVar1 = 0xb1e630;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      psVar2 = &segment_command_00000020;
      __Znwm();
      psVar2->segname[0] = '\0';
      psVar2->segname[1] = '\0';
      psVar2->segname[2] = '\0';
      psVar2->segname[3] = '\0';
      psVar2->segname[4] = '\0';
      psVar2->segname[5] = '\0';
      psVar2->segname[6] = '\0';
      psVar2->segname[7] = '\0';
      psVar2->cmd = 0;
      psVar2->cmdsize = 0;
      psVar2->vmaddr = 0;
      psVar2->segname[8] = '\0';
      psVar2->segname[9] = '\0';
      psVar2->segname[10] = '\0';
      psVar2->segname[0xb] = '\0';
      psVar2->segname[0xc] = '\0';
      psVar2->segname[0xd] = '\0';
      psVar2->segname[0xe] = '\0';
      psVar2->segname[0xf] = '\0';
      psRam0000000000b1e628 = psVar2;
      ___cxa_guard_release(0xb1e630);
    }
  }
  return psRam0000000000b1e628;
}



/* Entry: 0054a4f0; end: 0054a557;  */

void FUN_0054a4f0(long param_1,int param_2)

{
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_2;
  return;
}



/* Entry: 0054a558; end: 0054a5d7;  */

void FUN_0054a558(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  byte bVar1;
  undefined1 uVar2;
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
  undefined8 *puStack_30;
  ulong uStack_28;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  uStack_38 = param_5[1];
  uStack_40 = *param_5;
  bVar1 = *(byte *)((long)param_6 + 0x17);
  uVar2 = bVar1 == 0;
  uStack_28 = param_6[1];
  puStack_30 = (undefined8 *)*param_6;
  if (-1 < (char)bVar1) {
    uStack_28 = (ulong)bVar1;
    puStack_30 = param_6;
  }
  FUN_00575fc4(&uStack_80,6);
  FUN_0054ad7c(uStack_18);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 0054a5d8; end: 0054a5df;  */

void FUN_0054a5d8(void)

{
  return;
}



/* Entry: 0054a5e0; end: 0054a627;  */

undefined8 FUN_0054a5e0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_0054e1dc();
  if ((int)uVar1 != 0) {
    FUN_0054a6f0(*(undefined8 *)(param_1 + 8),*param_3);
  }
  return uVar1;
}



/* Entry: 0054a628; end: 0054a64f;  */

void FUN_0054a628(long param_1,int param_2)

{
  **(long **)(param_1 + 8) = **(long **)(param_1 + 8) + (long)-param_2;
  return;
}



/* Entry: 0054a650; end: 0054a6ef;  */

/* WARNING: Possible PIC construction at 0x0054a6ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0054a6b0) */

long * FUN_0054a650(long param_1,undefined1 *param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar9;
  undefined8 unaff_x30;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar4 = &uStack_40;
  puVar7 = &uStack_40;
  puVar9 = &stack0xfffffffffffffff0;
  puVar5 = param_2;
  func_0x0054a724();
  if ((int)puVar5 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    plVar6 = *(long **)(param_1 + 8);
    unaff_x30 = 0x54a6b0;
    unaff_x20 = param_3;
  }
  else {
    plVar6 = *(long **)(param_1 + 8);
    puVar4 = (undefined8 *)register0x00000008;
    puVar7 = (undefined8 *)param_2;
    param_2 = unaff_x19;
    param_1 = unaff_x21;
    puVar9 = unaff_x29;
  }
  *(undefined8 *)((long)puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar4 + -0x30) = unaff_x22;
  *(long *)((long)puVar4 + -0x28) = param_1;
  *(ulong *)((long)puVar4 + -0x20) = unaff_x20;
  *(undefined1 **)((long)puVar4 + -0x18) = param_2;
  *(undefined1 **)((long)puVar4 + -0x10) = puVar9;
  *(undefined8 *)((long)puVar4 + -8) = unaff_x30;
  uVar8 = (uint)param_3;
  if ((int)uVar8 < 0) {
    FUN_00557c68(puVar7);
  }
  else {
    if ((uVar8 < 0x200) || (plVar6[2] == 0)) {
      uVar3 = (int)plVar6[1] - (int)*plVar6;
      uVar2 = uVar8;
      if ((int)uVar3 <= (int)uVar8) {
        uVar2 = uVar3;
      }
      FUN_00557cfc(puVar7,*plVar6,(long)(int)uVar2);
      *plVar6 = *plVar6 + (long)(int)uVar2;
      if ((int)uVar8 <= (int)uVar3) {
        return (long *)((long)&MACH_HEADER.magic + 1);
      }
      if (plVar6[2] == 0) {
        return (long *)0x0;
      }
      if (0 < *(int *)((long)plVar6 + 0x1c) + *(int *)((long)plVar6 + 0x2c)) {
        return (long *)0x0;
      }
      param_3 = (ulong)(uVar8 - uVar2);
    }
    else {
      FUN_00557c68(puVar7);
      FUN_0054e028(plVar6);
    }
    iVar1 = (int)plVar6[6];
    if ((int)plVar6[5] <= (int)plVar6[6]) {
      iVar1 = (int)plVar6[5];
    }
    if ((int)param_3 <= iVar1 - (int)plVar6[3]) {
      *(int *)(plVar6 + 3) = (int)plVar6[3] + (int)param_3;
      plVar6 = (long *)plVar6[2];
                    /* WARNING: Could not recover jumptable at 0x0054e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x30))(plVar6,puVar7,param_3);
      return plVar6;
    }
    *(int *)(plVar6 + 3) = iVar1;
    (**(code **)(*(long *)plVar6[2] + 0x30))((long *)plVar6[2],puVar7);
  }
  return (long *)0x0;
}



/* Entry: 0054a6f0; end: 0054a763;  */

undefined8 FUN_0054a6f0(long *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  int extraout_w8;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  iVar1 = (int)param_1[1] - (int)*param_1;
  if (iVar1 < (int)param_2) {
    if (*(int *)((long)param_1 + 0x2c) < 1) {
      iVar1 = param_2 - iVar1;
      *param_1 = 0;
      param_1[1] = 0;
      func_0x0054f6ec();
      iVar2 = extraout_w8 - (int)param_1[3];
      if (iVar2 < iVar1) {
        if (0 < iVar2) {
          *(int *)(param_1 + 3) = extraout_w8;
          (**(code **)(*(long *)param_1[2] + 0x20))();
        }
        uVar3 = 0;
      }
      else {
        plVar4 = (long *)param_1[2];
        (**(code **)(*plVar4 + 0x20))(plVar4,iVar1);
        if (((ulong)plVar4 & 1) == 0) {
          plVar4 = (long *)param_1[2];
          (**(code **)(*plVar4 + 0x28))();
          uVar3 = 0;
          *(int *)(param_1 + 3) = (int)plVar4;
        }
        else {
          *(int *)(param_1 + 3) = (int)param_1[3] + iVar1;
          uVar3 = 1;
        }
      }
    }
    else {
      uVar3 = 0;
      *param_1 = *param_1 + (long)iVar1;
    }
    return uVar3;
  }
  *param_1 = *param_1 + (ulong)param_2;
  return 1;
}



/* Entry: 0054a764; end: 0054a7ff;  */

void FUN_0054a764(undefined8 *param_1,undefined8 *param_2)

{
  if (param_2 < &MACH_HEADER.ncmds) {
    *(undefined1 *)param_1 = 1;
    *(undefined8 *)((long)param_1 + 1) = 0;
    param_1[1] = 0;
  }
  else {
    func_0x0054a7a4();
    *param_2 = 0;
    *param_1 = param_2;
  }
  return;
}



/* Entry: 0054a800; end: 0054a86f;  */

ulong FUN_0054a800(ulong param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x40;
  if (0x2000 < param_1) {
    lVar1 = 0x1000;
  }
  lVar2 = 8;
  if (0x200 < param_1) {
    lVar2 = lVar1;
  }
  return (param_1 + lVar2) - 1 & -lVar2;
}



/* Entry: 0054a870; end: 0054a89b;  */

undefined1  [16] FUN_0054a870(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  param_1 = (long *)*param_1;
  lVar2 = *param_1;
  plVar1 = param_1;
  FUN_0054a89c();
  auVar3._8_8_ = (long)plVar1 - lVar2;
  auVar3._0_8_ = (long)param_1 + lVar2 + 0xd;
  return auVar3;
}



/* Entry: 0054a89c; end: 0054a8a3;  */

long FUN_0054a89c(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0xc);
  FUN_0054a8bc(uVar1);
  return uVar1 - 0xd;
}


