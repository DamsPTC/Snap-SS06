/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083edc40; end: 1083edc83;  */

void FUN_1083edc40(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  FUN_1083d3bc4(plVar1);
  if (*plVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083edc84; end: 1083edcb3;  */

void FUN_1083edc84(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1083edcb4(param_2,param_2 + 4);
  *param_2 = *param_1;
  return;
}



/* Entry: 1083edcb4; end: 1083edd07;  */

void FUN_1083edcb4(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *extraout_x8;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001083eea40();
  puVar2 = (undefined8 *)0x40;
  __Znwm();
  uVar1 = *unaff_x19;
  *puVar2 = *unaff_x20;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 4) = uVar1;
  *(undefined1 *)((long)puVar2 + 0x21) = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[5] = 0;
  *extraout_x8 = (long)puVar2;
  return;
}



/* Entry: 1083edd08; end: 1083edd2b;  */

void FUN_1083edd08(void)

{
  FUN_1083c9bd0();
  return;
}



/* Entry: 1083edd2c; end: 1083edd5b;  */

void FUN_1083edd2c(long *param_1)

{
  do {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      FUN_1083c9bd0();
      return;
    }
    param_1 = (long *)*param_1;
  } while (param_1 != (long *)0x0);
  return;
}



/* Entry: 1083edd5c; end: 1083edd97;  */

long FUN_1083edd5c(void)

{
  long *plVar1;
  long *unaff_x20;
  
  func_0x0001083eea40();
  do {
    plVar1 = unaff_x20 + 6;
    FUN_1083edd98();
    if (plVar1 != (long *)0x0) {
      return *plVar1;
    }
    unaff_x20 = (long *)*unaff_x20;
  } while (unaff_x20 != (long *)0x0);
  return 0;
}



/* Entry: 1083edd98; end: 1083eddb7;  */

long FUN_1083edd98(long param_1)

{
  long lVar1;
  
  FUN_1083ee4a4();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x18;
  }
  return lVar1;
}



/* Entry: 1083eddb8; end: 1083ede9b;  */

void FUN_1083eddb8(ulong param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x0001083ee078(param_1,param_3);
  if ((param_1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined4 *)(param_3 + 8);
    uStack_88 = *(undefined8 *)(param_3 + 0x18);
    uStack_90 = *(undefined8 *)(param_3 + 0x10);
    func_0x000107c27958(auStack_78,&uStack_90);
    func_0x0001004c3cd0(auStack_60,&UNK_10f49380c,auStack_78);
    func_0x00010048a6c8(&ppuStack_48,auStack_60,&UNK_10f493815);
    if (-1 < (char)bStack_31) {
      uStack_40 = (ulong)bStack_31;
      ppuStack_48 = &ppuStack_48;
    }
    FUN_1083c8a60(uVar2,uVar1,ppuStack_48,uStack_40);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  }
  return;
}



/* Entry: 1083ede9c; end: 1083edf17;  */

void FUN_1083ede9c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x0001083eea88(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  lVar2 = param_2 + 0x30;
  FUN_1083ee52c(lVar2,auStack_48);
  if ((int)lVar2 != 0) {
    for (plVar1 = *(long **)(param_2 + 8); plVar1 != *(long **)(param_2 + 0x10); plVar1 = plVar1 + 1
        ) {
      lVar2 = *plVar1;
      if (param_3 == lVar2) {
        *plVar1 = 0;
        goto LAB_1083edf00;
      }
    }
  }
  lVar2 = 0;
LAB_1083edf00:
  *param_1 = lVar2;
  return;
}



/* Entry: 1083edf18; end: 1083edfaf;  */

void FUN_1083edf18(ulong param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined8 **ppuStack_48;
  ulong uStack_40;
  undefined7 uStack_38;
  byte bStack_31;
  
  lVar3 = param_3;
  FUN_1083ede9c(&uStack_38);
  if (CONCAT17(bStack_31,uStack_38) == 0) {
    func_0x0001083eeaa4();
    func_0x0001083ee078();
    if ((param_1 & 1) == 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 8);
      uStack_88 = *(undefined8 *)(param_3 + 0x18);
      uStack_90 = *(undefined8 *)(param_3 + 0x10);
      func_0x000107c27958(auStack_78,&uStack_90);
      func_0x0001004c3cd0(auStack_60,&UNK_10f49380c,auStack_78);
      func_0x00010048a6c8(&ppuStack_48,auStack_60,&UNK_10f493815);
      if (-1 < (char)bStack_31) {
        uStack_40 = (ulong)bStack_31;
        ppuStack_48 = &ppuStack_48;
      }
      FUN_1083c8a60(uVar4,uVar1,ppuStack_48,uStack_40);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
    }
    return;
  }
  uStack_40 = CONCAT17(bStack_31,uStack_38);
  func_0x0001083eeaa4();
  FUN_1083edfb0();
  uVar2 = uStack_40;
  uStack_40 = 0;
  if (uVar2 != 0) {
    func_0x0001083eea0c();
  }
  return;
}



/* Entry: 1083edfb0; end: 1083ee023;  */

undefined8 FUN_1083edfb0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  uVar2 = *param_3;
  *param_3 = 0;
  lVar1 = param_1;
  uStack_38 = uVar2;
  FUN_1083ee884(param_1,&uStack_38);
  FUN_1083eddb8(param_1,param_2,lVar1);
  func_0x0001083eeab0();
  if (param_1 != 0) {
    func_0x0001083eea0c();
  }
  return uVar2;
}



/* Entry: 1083ee024; end: 1083ee1f3;  */

long FUN_1083ee024(long param_1)

{
  func_0x0001083ee04c(param_1 + 0x28);
  return *(long *)(param_1 + 0x28) + 8;
}



/* Entry: 1083ee1f4; end: 1083ee39b;  */

long * FUN_1083ee1f4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  long *plVar3;
  long *plVar4;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_78 [8];
  undefined8 ******ppppppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 ******ppppppuStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  if ((int)param_4 == 0) {
    return param_3;
  }
  func_0x0001083eea40();
  while ((((*unaff_x20 != 0 && ((*(byte *)((long)unaff_x20 + 0x21) & 1) == 0)) &&
          (*(char *)unaff_x19[1] == '\0')) &&
         (plVar3 = param_3, (**(code **)(*param_3 + 0x18))(), (int)plVar3 != 0))) {
    unaff_x20 = (long *)*unaff_x20;
  }
  FUN_1083ef6e4(&ppppppuStack_58,param_3,param_4);
  uVar1 = uStack_50;
  pppppppuVar2 = (undefined8 *******)ppppppuStack_58;
  if (-1 < (long)uStack_48) {
    uVar1 = uStack_48 >> 0x38;
    pppppppuVar2 = &ppppppuStack_58;
  }
  plVar3 = unaff_x20;
  FUN_1083c9bd0(unaff_x20,pppppppuVar2,uVar1);
  if ((plVar3 != (long *)0x0) &&
     (plVar4 = plVar3, (**(code **)(*plVar3 + 0xe0))(), (int)plVar4 != 0)) {
    plVar4 = plVar3;
    (**(code **)(*plVar3 + 0x50))(plVar3);
    (**(code **)(*param_3 + 0x38))(param_3,plVar4);
    if (((ulong)param_3 & 1) != 0) goto LAB_1083ee338;
  }
  uStack_68 = uStack_50;
  ppppppuStack_70 = ppppppuStack_58;
  uStack_60 = uStack_48;
  ppppppuStack_58 = (undefined8 *******)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1083ee024(unaff_x20,&ppppppuStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_70);
  FUN_1083ef7a4(auStack_78);
  func_0x0001083eeaa4();
  FUN_1083e7a3c();
  plVar4 = unaff_x19;
  func_0x0001083eeab0();
  plVar3 = unaff_x19;
  if (plVar4 != (long *)0x0) {
    func_0x0001083eea0c();
  }
LAB_1083ee338:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_58);
  return plVar3;
}



/* Entry: 1083ee39c; end: 1083ee4a3;  */

void FUN_1083ee39c(ulong *param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined4 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_4;
  uStack_38 = param_5;
  FUN_1083c9bd0(param_2,param_4,param_5);
  if (param_2 != 0) {
    uStack_38 = CONCAT44(param_6,(undefined4)uStack_38);
    switch(*(undefined4 *)(param_2 + 0xc)) {
    case 8:
      FUN_1083e6200(&uStack_40,param_6,*(undefined8 *)(param_2 + 0x28),0);
      uStack_50 = uStack_40;
      uStack_40 = 0;
      FUN_1083df484(param_1,param_3,param_6,&uStack_50,*(undefined4 *)(param_2 + 0x30),1);
      uVar1 = uStack_50;
      uStack_50 = 0;
      if (uVar1 != 0) {
        func_0x0001083edc58();
      }
      uVar1 = uStack_40;
      uStack_40 = 0;
      if (uVar1 != 0) {
        func_0x0001083edc58();
      }
      break;
    case 9:
      uStack_48 = param_2;
      FUN_1083edb58(&uStack_40,param_3,(long)&uStack_38 + 4,&uStack_48);
      func_0x0001083edc70();
      FUN_1083edc18();
      break;
    case 10:
      FUN_1083f2f08(&uStack_40,param_3,param_6,param_2);
      func_0x0001083edc70();
      func_0x0001083e74b4();
      break;
    case 0xb:
      uStack_38 = uStack_38 & 0xffffffffffffff;
      FUN_1083e6258(&uStack_40,&stack0xffffffffffffffdc,&stack0xffffffffffffffd0,
                    (long)&uStack_38 + 7);
      uVar1 = uStack_40;
      uStack_40 = 0;
      *param_1 = uVar1;
      FUN_1083e62c4(&uStack_40);
      return;
    default:
      *param_1 = 0;
    }
    return;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  func_0x000107c27958(auStack_88,&uStack_40);
  func_0x0001004c3cd0(auStack_70,&UNK_10f4938bb,auStack_88);
  func_0x00010048a6c8(&pppuStack_58,auStack_70,&UNK_10f4938d0);
  if (-1 < (char)uStack_48._7_1_) {
    uStack_50 = (ulong)uStack_48._7_1_;
    pppuStack_58 = &pppuStack_58;
  }
  FUN_1083c8a60(uVar2,param_6,pppuStack_58,uStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  *param_1 = 0;
  return;
}



/* Entry: 1083ee4a4; end: 1083ee517;  */

uint * FUN_1083ee4a4(ulong param_1)

{
  uint uVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 extraout_x8_00;
  uint extraout_w9;
  uint *puVar3;
  long unaff_x20;
  int unaff_w22;
  uint unaff_w23;
  
  func_0x0001083eea40();
  func_0x0001083eea4c();
  uVar2 = extraout_x8;
  while( true ) {
    if ((int)uVar2 <= unaff_w22) {
      return (uint *)0x0;
    }
    puVar3 = (uint *)(*(long *)(unaff_x20 + 8) + (long)(int)(extraout_w9 & unaff_w23) * 0x28);
    uVar1 = *puVar3;
    if (uVar1 == 0) break;
    if (unaff_w23 == uVar1) {
      func_0x0001083eea90();
      if ((param_1 & 1) != 0) {
        return puVar3 + 2;
      }
    }
    func_0x0001083eeabc();
    unaff_w22 = unaff_w22 + 1;
    uVar2 = extraout_x8_00;
  }
  return (uint *)0x0;
}



/* Entry: 1083ee518; end: 1083ee52b;  */

bool FUN_1083ee518(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uStack_20;
  long lStack_18;
  
  uStack_20 = *param_1;
  lStack_18 = param_1[1];
  iVar1 = (int)&uStack_20;
  if (lStack_18 == param_2[1]) {
    func_0x000107c27978(&uStack_20,*param_2,param_2[1]);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1083ee52c; end: 1083ee5fb;  */

byte FUN_1083ee52c(int *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ulong extraout_x8;
  ulong uVar5;
  bool bVar6;
  uint extraout_w9;
  uint *puVar7;
  int unaff_w22;
  uint unaff_w23;
  
  func_0x0001083eea4c();
  uVar1 = extraout_w9 & unaff_w23;
  uVar5 = extraout_x8;
  while( true ) {
    bVar6 = unaff_w22 < (int)uVar5;
    if ((int)uVar5 <= unaff_w22) break;
    puVar7 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 0x28);
    uVar2 = *puVar7;
    if (uVar2 == 0) break;
    if (unaff_w23 == uVar2) {
      uVar5 = param_2;
      FUN_1083ee518(param_2,puVar7 + 2);
      if ((uVar5 & 1) != 0) {
        FUN_1083ee5fc(param_1,uVar1);
        uVar1 = param_1[1];
        if ((4 < (int)uVar1) && (*param_1 * 4 <= (int)uVar1)) {
          FUN_1083ee6c8(param_1,uVar1 >> 1);
        }
        bVar6 = true;
        bVar3 = 1;
        goto LAB_1083ee5a8;
      }
      uVar5 = (ulong)(uint)param_1[1];
    }
    iVar4 = 0;
    if ((int)uVar1 < 1) {
      iVar4 = (int)uVar5;
    }
    uVar1 = (uVar1 + iVar4) - 1;
    unaff_w22 = unaff_w22 + 1;
  }
  bVar3 = 0;
LAB_1083ee5a8:
  return bVar6 & bVar3;
}



/* Entry: 1083ee5fc; end: 1083ee6c7;  */

void FUN_1083ee5fc(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_1 + -1;
  do {
    puVar5 = (uint *)(*(long *)(param_1 + 2) + (long)param_2 * 0x28);
    iVar6 = param_2;
    do {
      iVar3 = iVar6 + -1;
      bVar4 = iVar6 < 1;
      iVar6 = iVar3;
      if (bVar4) {
        iVar6 = param_1[1] + iVar3;
      }
      puVar7 = (uint *)(*(long *)(param_1 + 2) + (long)iVar6 * 0x28);
      uVar2 = *puVar7;
      if (uVar2 == 0) {
        if (*puVar5 != 0) {
          *puVar5 = 0;
        }
        return;
      }
      uVar1 = param_1[1] - 1U & uVar2;
    } while ((iVar6 <= (int)uVar1 && (int)uVar1 < param_2) ||
            ((param_2 < iVar6 && ((int)uVar1 < param_2 || iVar6 <= (int)uVar1))));
    bVar4 = param_2 != iVar6;
    param_2 = iVar6;
    if (bVar4) {
      if (*puVar5 == 0) {
        uVar9 = *(undefined8 *)(puVar7 + 4);
        uVar8 = *(undefined8 *)(puVar7 + 2);
        uVar10 = *(undefined8 *)(puVar7 + 6);
        *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar7 + 8);
        *(undefined8 *)(puVar5 + 6) = uVar10;
        *(undefined8 *)(puVar5 + 4) = uVar9;
        *(undefined8 *)(puVar5 + 2) = uVar8;
      }
      else {
        uVar9 = *(undefined8 *)(puVar7 + 4);
        uVar8 = *(undefined8 *)(puVar7 + 2);
        puVar5[6] = puVar7[6];
        *(undefined8 *)(puVar5 + 4) = uVar9;
        *(undefined8 *)(puVar5 + 2) = uVar8;
        *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar7 + 8);
      }
      *puVar5 = uVar2;
    }
  } while( true );
}



/* Entry: 1083ee6c8; end: 1083ee7bb;  */

void FUN_1083ee6c8(undefined4 *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lStack_38;
  
  uVar1 = param_1[1];
  iVar4 = (int)param_2;
  *param_1 = 0;
  param_1[1] = iVar4;
  lStack_38 = *(long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  uVar8 = (ulong)iVar4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  uVar5 = ((-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2) + (long)iVar4
          ) * 8;
  puVar3 = (undefined8 *)(uVar5 + 0x10);
  if (0xffffffffffffffef < uVar5 || SUB168(auVar2 * ZEXT816(0x28),8) != 0) {
    puVar3 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar3 = 0x28;
  puVar3[1] = uVar8;
  if (iVar4 != 0) {
    lVar6 = uVar8 * 0x28;
    puVar7 = puVar3 + 2;
    do {
      *(undefined4 *)puVar7 = 0;
      lVar6 = lVar6 + -0x28;
      puVar7 = puVar7 + 5;
    } while (lVar6 != 0);
  }
  *(undefined8 **)(param_1 + 2) = puVar3 + 2;
  for (lVar6 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x28 - lVar6 != 0;
      lVar6 = lVar6 + 0x28) {
    if (*(int *)(lStack_38 + lVar6) != 0) {
      FUN_1083ee7bc(param_1,lStack_38 + lVar6 + 8);
    }
  }
  func_0x0001083c5f94(&lStack_38);
  return;
}



/* Entry: 1083ee7bc; end: 1083ee883;  */

uint * FUN_1083ee7bc(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong extraout_x8;
  undefined8 *unaff_x19;
  int *unaff_x20;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x0001083eea40();
  iVar4 = 0;
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = (ulong)uVar2;
  while( true ) {
    if ((int)uVar3 <= iVar4) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(*(long *)(unaff_x20 + 2) + (long)(int)(uVar2 - 1 & uVar1) * 0x28);
    if (*puVar5 == 0) break;
    if (uVar1 == *puVar5) {
      func_0x0001083eea90();
      if ((param_1 & 1) != 0) {
        if (*puVar5 != 0) {
          *puVar5 = 0;
        }
        uVar6 = *unaff_x19;
        uVar8 = unaff_x19[3];
        uVar7 = unaff_x19[2];
        *(undefined8 *)(puVar5 + 4) = unaff_x19[1];
        *(undefined8 *)(puVar5 + 2) = uVar6;
        *(undefined8 *)(puVar5 + 8) = uVar8;
        *(undefined8 *)(puVar5 + 6) = uVar7;
        *puVar5 = uVar1;
        return puVar5 + 2;
      }
    }
    func_0x0001083eeabc();
    iVar4 = iVar4 + 1;
    uVar3 = extraout_x8;
  }
  uVar7 = unaff_x19[1];
  uVar6 = *unaff_x19;
  uVar8 = unaff_x19[2];
  *(undefined8 *)(puVar5 + 8) = unaff_x19[3];
  *(undefined8 *)(puVar5 + 6) = uVar8;
  *(undefined8 *)(puVar5 + 4) = uVar7;
  *(undefined8 *)(puVar5 + 2) = uVar6;
  *puVar5 = uVar1;
  *unaff_x20 = *unaff_x20 + 1;
  return puVar5 + 2;
}



/* Entry: 1083ee884; end: 1083ee8a7;  */

undefined8 FUN_1083ee884(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1083cae60(param_1 + 8);
  return uVar1;
}



/* Entry: 1083ee8a8; end: 1083ee93b;  */

undefined8 * FUN_1083ee8a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 auStack_40 [2];
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar1 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = 1;
  FUN_1083ee93c(auStack_40);
  puVar2 = puStack_30;
  *puStack_30 = param_2;
  uVar5 = param_3[1];
  uVar4 = *param_3;
  puStack_30[3] = param_3[2];
  puStack_30[2] = uVar5;
  puStack_30[1] = uVar4;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  puStack_30 = (undefined8 *)0x0;
  FUN_1083ee980();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar1[1] = uVar3;
  puVar2 = puVar1;
  FUN_1083ee964();
  puVar1[2] = puVar2;
  return puVar1;
}



/* Entry: 1083ee93c; end: 1083ee963;  */

long FUN_1083ee93c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1083ee964();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1083ee964; end: 1083ee97f;  */

void FUN_1083ee964(long param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083ee980; end: 1083ee98f;  */

void FUN_1083ee980(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083ee990; end: 1083ee9c3;  */

long FUN_1083ee990(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  uStack_20 = param_2[2];
  uStack_18 = param_3;
  FUN_1083ee9c4(param_1,&uStack_30);
  return param_1 + 0x18;
}



/* Entry: 1083ee9c4; end: 1083eea0b;  */

uint * FUN_1083ee9c4(int *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong extraout_x8;
  undefined8 *unaff_x19;
  int *unaff_x20;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x0001083eea40();
  iVar4 = param_1[1];
  if (iVar4 * 3 <= *param_1 * 4) {
    uVar2 = iVar4 << 1;
    if (iVar4 < 1) {
      uVar2 = 4;
    }
    param_2 = (ulong)uVar2;
    param_1 = unaff_x20;
    FUN_1083ee6c8();
  }
  func_0x0001083eeaa4();
  func_0x0001083eea40();
  iVar4 = 0;
  uVar2 = *(uint *)(param_2 + 0x10);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  uVar1 = param_1[1];
  uVar3 = (ulong)uVar1;
  while( true ) {
    if ((int)uVar3 <= iVar4) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(*(long *)(unaff_x20 + 2) + (long)(int)(uVar1 - 1 & uVar2) * 0x28);
    if (*puVar5 == 0) break;
    if (uVar2 == *puVar5) {
      func_0x0001083eea90();
      if (((ulong)param_1 & 1) != 0) {
        if (*puVar5 != 0) {
          *puVar5 = 0;
        }
        uVar6 = *unaff_x19;
        uVar8 = unaff_x19[3];
        uVar7 = unaff_x19[2];
        *(undefined8 *)(puVar5 + 4) = unaff_x19[1];
        *(undefined8 *)(puVar5 + 2) = uVar6;
        *(undefined8 *)(puVar5 + 8) = uVar8;
        *(undefined8 *)(puVar5 + 6) = uVar7;
        *puVar5 = uVar2;
        return puVar5 + 2;
      }
    }
    func_0x0001083eeabc();
    iVar4 = iVar4 + 1;
    uVar3 = extraout_x8;
  }
  uVar7 = unaff_x19[1];
  uVar6 = *unaff_x19;
  uVar8 = unaff_x19[2];
  *(undefined8 *)(puVar5 + 8) = unaff_x19[3];
  *(undefined8 *)(puVar5 + 6) = uVar8;
  *(undefined8 *)(puVar5 + 4) = uVar7;
  *(undefined8 *)(puVar5 + 2) = uVar6;
  *puVar5 = uVar2;
  *unaff_x20 = *unaff_x20 + 1;
  return puVar5 + 2;
}



/* Entry: 1083eea0c; end: 1083eeacf;  */

void FUN_1083eea0c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083eea14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083eead0; end: 1083ef253;  */

void FUN_1083eead0(ulong *param_1,long *param_2,ulong param_3,ulong *param_4,ulong *param_5,
                  ulong *param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long **pplVar4;
  undefined1 *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  undefined4 uVar12;
  long *plVar13;
  long *plVar14;
  long *plStack_158;
  ulong uStack_150;
  long *plStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long *aplStack_130 [3];
  long *aplStack_118 [3];
  ulong auStack_100 [3];
  undefined1 uStack_e1;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  long *plStack_d0;
  long *aplStack_c8 [3];
  ulong auStack_b0 [3];
  long *aplStack_98 [3];
  ulong uStack_80;
  ulong uStack_78;
  long *plStack_70;
  long *plStack_68;
  
  uVar1 = *(undefined8 *)(*param_2 + 0xc0);
  uStack_80 = *param_4;
  *param_4 = 0;
  func_0x0001083ef6d4(aplStack_98,uVar1,&uStack_80);
  plVar3 = aplStack_98[0];
  aplStack_98[0] = (long *)0x0;
  uVar2 = *param_4;
  *param_4 = (ulong)plVar3;
  if (uVar2 != 0) {
    func_0x0001083ef658();
    plVar3 = aplStack_98[0];
    aplStack_98[0] = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      func_0x0001083ef658();
    }
  }
  uVar2 = uStack_80;
  uStack_80 = 0;
  if (uVar2 != 0) {
    func_0x0001083ef658();
  }
  if (((*param_4 == 0) || (*param_5 == 0)) || (*param_6 == 0)) goto LAB_1083eec00;
  plVar3 = *(long **)(*param_5 + 0x10);
  (**(code **)(*plVar3 + 0x50))();
  if (*(byte *)((long)plVar3 + 0x2c) < 0x10 &&
      (1 << (ulong)(*(byte *)((long)plVar3 + 0x2c) & 0x1f) & 0xe4c2U) != 0) {
    lVar11 = param_2[2];
    FUN_10831d8f8(aplStack_c8,*(undefined8 *)(*param_5 + 0x10));
    func_0x0001004c3cd0(auStack_b0,&UNK_10f4938d2,aplStack_c8);
    func_0x0001083ef694();
    func_0x0001083ef6b4();
    FUN_1083c8a60(lVar11,param_3 & 0xffffffff);
    func_0x0001083ef674();
    func_0x0001083ef68c();
    pplVar4 = aplStack_c8;
  }
  else {
    uStack_e1 = 0x10;
    puVar5 = &uStack_e1;
    FUN_1083cb320(puVar5,param_2,*(undefined8 *)(*param_5 + 0x10),*(undefined8 *)(*param_6 + 0x10),
                  &plStack_d0,&uStack_d8,auStack_e0);
    if (((int)puVar5 != 0) &&
       (plVar3 = plStack_d0, (**(code **)(*plStack_d0 + 0x38))(plStack_d0,uStack_d8),
       ((ulong)plVar3 & 1) != 0)) {
      plVar3 = plStack_d0;
      (**(code **)(*plStack_d0 + 0x118))();
      if ((int)plVar3 != 0) {
        lVar11 = param_2[2];
        puVar9 = &UNK_10f49394b;
        uVar1 = 0x4b;
LAB_1083eecdc:
        FUN_1083c8a60(lVar11,param_3 & 0xffffffff,puVar9,uVar1);
        goto LAB_1083eec00;
      }
      uStack_138 = *param_5;
      *param_5 = 0;
      func_0x0001083ef6d4(aplStack_98,plStack_d0,&uStack_138);
      plVar3 = aplStack_98[0];
      aplStack_98[0] = (long *)0x0;
      uVar2 = *param_5;
      *param_5 = (ulong)plVar3;
      if (uVar2 != 0) {
        func_0x0001083ef658();
        plVar3 = aplStack_98[0];
        aplStack_98[0] = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          func_0x0001083ef658();
        }
      }
      uVar2 = uStack_138;
      uStack_138 = 0;
      if (uVar2 != 0) {
        func_0x0001083ef658();
      }
      if (*param_5 == 0) goto LAB_1083eec00;
      uStack_140 = *param_6;
      *param_6 = 0;
      func_0x0001083ef6d4(aplStack_98,uStack_d8,&uStack_140);
      plVar3 = aplStack_98[0];
      aplStack_98[0] = (long *)0x0;
      uVar2 = *param_6;
      *param_6 = (ulong)plVar3;
      if (uVar2 != 0) {
        func_0x0001083ef658();
        plVar3 = aplStack_98[0];
        aplStack_98[0] = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          func_0x0001083ef658();
        }
      }
      uVar2 = uStack_140;
      uStack_140 = 0;
      if (uVar2 != 0) {
        func_0x0001083ef658();
      }
      if (*param_6 == 0) goto LAB_1083eec00;
      plVar14 = (long *)*param_4;
      *param_4 = 0;
      uVar2 = *param_5;
      *param_5 = 0;
      plVar13 = (long *)*param_6;
      *param_6 = 0;
      plVar3 = plVar14;
      plStack_158 = plVar13;
      uStack_150 = uVar2;
      plStack_148 = plVar14;
      func_0x0001083c6674();
      plVar6 = plVar3;
      FUN_1083c74d4();
      uVar12 = (undefined4)param_3;
      if ((int)plVar6 == 0) {
        if (*(char *)(param_2[1] + 0x1c) != '\x01') {
LAB_1083ef000:
          FUN_1083ef254(&uStack_78,param_3,&plStack_148,&uStack_150,&plStack_158);
          uVar2 = uStack_78;
          uStack_78 = 0;
          *param_1 = uVar2;
          func_0x0001083ef624(&uStack_78);
          plVar13 = plStack_158;
          goto LAB_1083ef030;
        }
        uVar7 = uVar2;
        func_0x0001083c6674();
        plVar3 = plVar13;
        func_0x0001083c6674();
        uVar8 = uVar7;
        FUN_1083d6d1c(uVar7,plVar3);
        if ((int)uVar8 != 0) {
          plVar3 = plVar14;
          FUN_1083d64e8();
          if (((ulong)plVar3 & 1) != 0) {
            uStack_150 = 0;
            plStack_148 = (long *)0x0;
            auStack_b0[0] = uVar2;
            aplStack_98[0] = plVar14;
            func_0x0001083ef664();
            FUN_1083d9b94();
            plVar3 = aplStack_98[0];
            if (auStack_b0[0] != 0) {
              func_0x0001083ef658();
              plVar3 = aplStack_98[0];
            }
            goto joined_r0x0001083eeef0;
          }
          *(undefined4 *)(uVar2 + 8) = uVar12;
          uStack_150 = 0;
          *param_1 = uVar2;
          goto LAB_1083ef04c;
        }
        plVar6 = plVar3;
        FUN_1083c74d4();
        if (((int)plVar6 != 0) && ((double)plVar3[3] == 0.0)) {
          uStack_150 = 0;
          plStack_148 = (long *)0x0;
          auStack_100[0] = uVar2;
          aplStack_c8[0] = plVar14;
          func_0x0001083ef664();
          FUN_1083d9b94();
          plVar3 = aplStack_c8[0];
          if (auStack_100[0] != 0) {
            func_0x0001083ef658();
            plVar3 = aplStack_c8[0];
          }
joined_r0x0001083eeef0:
          if (plVar3 != (long *)0x0) goto LAB_1083eef54;
          goto LAB_1083ef04c;
        }
        uVar2 = uVar7;
        FUN_1083c74d4();
        if (((int)uVar2 == 0) || (*(double *)(uVar7 + 0x18) == 0.0)) {
          uVar2 = uVar7;
          FUN_1083c74d4();
          if (((int)uVar2 == 0) ||
             (((*(double *)(uVar7 + 0x18) != 0.0 ||
               (plVar6 = plVar3, FUN_1083c74d4(), (int)plVar6 == 0)) || ((double)plVar3[3] == 0.0)))
             ) {
            if ((((*(int *)(uVar7 + 0xc) != 0x29) || (*(double *)(uVar7 + 0x18) != 1.0)) ||
                (*(int *)((long)plVar3 + 0xc) != 0x29)) || ((double)plVar3[3] != 0.0))
            goto LAB_1083ef000;
            plStack_148 = (long *)0x0;
            plStack_70 = plVar14;
            func_0x0001083ef664();
            FUN_1083ddb18();
            plVar3 = plStack_70;
            plStack_70 = (long *)0x0;
          }
          else {
            plStack_148 = (long *)0x0;
            plStack_68 = plVar14;
            func_0x0001083ef664();
            FUN_1083e97a8();
            plVar3 = plStack_68;
            plStack_68 = (long *)0x0;
          }
          if (plVar3 == (long *)0x0) goto LAB_1083ef04c;
LAB_1083eef54:
          func_0x0001083ef658();
          goto LAB_1083ef04c;
        }
        plStack_148 = (long *)0x0;
        aplStack_130[0] = plVar13;
        aplStack_118[0] = plVar14;
        func_0x0001083ef664();
        FUN_1083d9b94();
        if (aplStack_130[0] != (long *)0x0) {
          func_0x0001083ef658();
        }
        if (aplStack_118[0] == (long *)0x0) goto LAB_1083ef05c;
        pcVar10 = *(code **)(*aplStack_118[0] + 8);
        plVar13 = aplStack_118[0];
      }
      else {
        if ((double)plVar3[3] == 0.0) {
          *(undefined4 *)(plVar13 + 1) = uVar12;
          *param_1 = (ulong)plVar13;
          goto LAB_1083ef05c;
        }
        *(undefined4 *)(uVar2 + 8) = uVar12;
        uStack_150 = 0;
        *param_1 = uVar2;
LAB_1083ef030:
        plStack_158 = (long *)0x0;
        if (plVar13 == (long *)0x0) goto LAB_1083ef05c;
LAB_1083ef04c:
        plStack_158 = (long *)0x0;
        pcVar10 = *(code **)(*plVar13 + 8);
      }
      (*pcVar10)(plVar13);
LAB_1083ef05c:
      if (uStack_150 != 0) {
        func_0x0001083ef658();
      }
      if (plStack_148 == (long *)0x0) {
        return;
      }
      func_0x0001083ef658();
      return;
    }
    param_3 = *param_5 + 8;
    FUN_1083d0cc4(param_3,*(undefined4 *)(*param_6 + 8));
    lVar11 = param_2[2];
    if (*(char *)(*(long *)(*param_5 + 0x10) + 0x2c) == '\f') {
      puVar9 = &UNK_10f4938f6;
      uVar1 = 0x30;
      goto LAB_1083eecdc;
    }
    FUN_10831d8f8(aplStack_118);
    func_0x0001004c3cd0(auStack_100,&UNK_10f493927,aplStack_118);
    func_0x00010048a6c8(aplStack_c8,auStack_100,&UNK_10f492646);
    FUN_10831d8f8(aplStack_130,*(undefined8 *)(*param_6 + 0x10));
    func_0x00010533a9c0(auStack_b0,aplStack_c8,aplStack_130);
    func_0x0001083ef694();
    func_0x0001083ef6b4();
    FUN_1083c8a60(lVar11,param_3 & 0xffffffff);
    func_0x0001083ef674();
    func_0x0001083ef68c();
    func_0x0001083ef67c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(aplStack_c8);
    func_0x0001083ef684();
    pplVar4 = aplStack_118;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pplVar4);
LAB_1083eec00:
  *param_1 = 0;
  return;
}



/* Entry: 1083ef254; end: 1083ef2d3;  */

void FUN_1083ef254(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,long *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)0x30;
  FUN_1083d3a60();
  uVar2 = *param_3;
  *param_3 = 0;
  lVar3 = *param_4;
  *param_4 = 0;
  uVar4 = *param_5;
  *param_5 = 0;
  uVar5 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined4 *)(puVar1 + 1) = param_2;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x30;
  *puVar1 = &PTR_FUN_110a45ef0;
  puVar1[2] = uVar5;
  puVar1[3] = uVar2;
  puVar1[4] = lVar3;
  puVar1[5] = uVar4;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083ef2d4; end: 1083ef4cb;  */

void FUN_1083ef2d4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  pcVar1 = "(";
  if (0xf < param_3) {
    pcVar1 = "";
  }
  func_0x000107c278b8(auStack_d0,pcVar1);
  func_0x0001083ef6dc(auStack_e8);
  func_0x00010533a9c0(auStack_b8,auStack_d0,auStack_e8);
  func_0x00010048a6c8(auStack_a0,auStack_b8,&UNK_10f48d20f);
  func_0x0001083ef6dc(auStack_100);
  func_0x00010533a9c0(auStack_88,auStack_a0,auStack_100);
  func_0x00010048a6c8(auStack_70,auStack_88,&UNK_10f48d213);
  func_0x0001083ef6dc(auStack_118);
  func_0x00010533a9c0(auStack_58,auStack_70,auStack_118);
  pcVar1 = ")";
  if (0xf < param_3) {
    pcVar1 = "";
  }
  func_0x000107c278b8(auStack_130,pcVar1);
  func_0x00010533a9c0(param_1,auStack_58,auStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  func_0x0001083ef67c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  func_0x0001083ef684();
  return;
}



/* Entry: 1083ef4cc; end: 1083ef4cf;  */

long FUN_1083ef4cc(long param_1)

{
  FUN_1083c8734(param_1 + 0x28);
  FUN_1083c8734(param_1 + 0x20);
  FUN_1083c8734(param_1 + 0x18);
  return param_1;
}



/* Entry: 1083ef4d0; end: 1083ef4e3;  */

void FUN_1083ef4d0(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083ef5ec();
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083ef4e4; end: 1083ef5eb;  */

void FUN_1083ef4e4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001083ef6a4(*(undefined8 *)(param_2 + 0x18));
  (*extraout_x9)(&lStack_40);
  func_0x0001083ef6a4(*(undefined8 *)(param_2 + 0x20));
  (*extraout_x9_00)(&lStack_48);
  func_0x0001083ef6a4(*(undefined8 *)(param_2 + 0x28));
  (*extraout_x9_01)(&lStack_50);
  FUN_1083ef254(&uStack_38,param_3,&lStack_40,&lStack_48,&lStack_50);
  uVar2 = uStack_38;
  uStack_38 = 0;
  *param_1 = uVar2;
  func_0x0001083ef624(&uStack_38);
  lVar1 = lStack_50;
  lStack_50 = 0;
  if (lVar1 != 0) {
    func_0x0001083ef658();
  }
  lVar1 = lStack_48;
  lStack_48 = 0;
  if (lVar1 != 0) {
    func_0x0001083ef658();
  }
  lVar1 = lStack_40;
  lStack_40 = 0;
  if (lVar1 != 0) {
    func_0x0001083ef658();
  }
  return;
}



/* Entry: 1083ef5ec; end: 1083ef657;  */

long FUN_1083ef5ec(long param_1)

{
  FUN_1083c8734(param_1 + 0x28);
  FUN_1083c8734(param_1 + 0x20);
  FUN_1083c8734(param_1 + 0x18);
  return param_1;
}



/* Entry: 1083ef658; end: 1083ef6e3;  */

void FUN_1083ef658(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083ef660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083ef6e4; end: 1083ef72f;  */

void FUN_1083ef6e4(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == -1) {
    puVar1 = &UNK_10f493997;
  }
  else {
    puVar1 = &UNK_10f49399e;
  }
  FUN_1083d4028(puVar1);
  return;
}



/* Entry: 1083ef730; end: 1083ef767;  */

void FUN_1083ef730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  FUN_1083ef768(auStack_38,&uStack_30,param_3);
  func_0x0001083f2a04();
  FUN_1083f1f78();
  return;
}



/* Entry: 1083ef768; end: 1083ef7a3;  */

void FUN_1083ef768(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001083f2db8();
  func_0x0001083f2bc8();
  FUN_1083f1de4();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1083ef7a4; end: 1083ef817;  */

void FUN_1083ef7a4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined1 uStack_49;
  long lStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lStack_48 = param_5 + 0x28;
  uStack_49 = **(char **)(param_2 + 8) != '\0';
  uStack_34 = param_6;
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_1083ef818(&uStack_40,&uStack_30,&lStack_48,param_5,&uStack_34,&uStack_49);
  uVar1 = uStack_40;
  uStack_40 = 0;
  *param_1 = uVar1;
  FUN_1083f214c(&uStack_40);
  return;
}



/* Entry: 1083ef818; end: 1083ef863;  */

void FUN_1083ef818(void)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001083f2a84();
  FUN_1083d3a60(0x40);
  func_0x0001083f2cf4();
  FUN_1083f1fb0();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 1083ef864; end: 1083ef8a3;  */

void FUN_1083ef864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_40 = param_4;
  uStack_38 = param_1;
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_1083ef8a4(auStack_48,&uStack_38,&uStack_30,&uStack_40);
  func_0x0001083f2a04();
  FUN_1083f2218();
  return;
}



/* Entry: 1083ef8a4; end: 1083ef8f7;  */

void FUN_1083ef8a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x88;
  FUN_1083d3a60();
  FUN_1083f2184();
  *param_1 = uVar1;
  return;
}



/* Entry: 1083ef8f8; end: 1083ef923;  */

void FUN_1083ef8f8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_19 = param_3;
  uStack_18 = param_1;
  FUN_1083ef924(&uStack_18,param_2,&uStack_19);
  return;
}



/* Entry: 1083ef924; end: 1083ef96f;  */

void FUN_1083ef924(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001083f2af4();
  FUN_1083f2250();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1083ef970; end: 1083ef9b3;  */

void FUN_1083ef970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  undefined8 extraout_x9;
  undefined1 uStack_3d;
  undefined4 auStack_3c [7];
  
  auStack_3c[0] = param_5;
  uStack_3d = param_6;
  func_0x0001083f2d14();
  func_0x0001083f2d04();
  FUN_1083ef9b4(param_1,param_2,extraout_x9,auStack_3c,&uStack_3d);
  func_0x0001083f2a04();
  FUN_1083f23a8();
  return;
}



/* Entry: 1083ef9b4; end: 1083ef9ff;  */

void FUN_1083ef9b4(void)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001083f2a84();
  FUN_1083d3a60(0x40);
  func_0x0001083f2cf4();
  FUN_1083f231c();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 1083efa00; end: 1083efa3b;  */

void FUN_1083efa00(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1083efa3c(auStack_30,&uStack_28);
  func_0x0001083f2dc4();
  FUN_1083f24a8();
  return;
}



/* Entry: 1083efa3c; end: 1083efa77;  */

void FUN_1083efa3c(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001083f2db8();
  func_0x0001083f2bc8();
  FUN_1083f23e0();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1083efa78; end: 1083efad3;  */

void FUN_1083efa78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  
  uVar1 = param_1;
  func_0x0001083f2bbc();
  uVar2 = param_1;
  _strlen(param_1);
  func_0x0001083f2b08(uVar1,param_1,uVar2,param_2,param_3);
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 1083efad4; end: 1083efb17;  */

void FUN_1083efad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 auStack_39 [25];
  
  auStack_39[0] = param_4;
  uStack_3a = param_5;
  uStack_3b = param_6;
  func_0x0001083f2d14();
  func_0x0001083f2d04();
  FUN_1083efb18(param_1,param_2,auStack_39,&uStack_3a,&uStack_3b);
  func_0x0001083f2a04();
  FUN_1083f2620();
  return;
}



/* Entry: 1083efb18; end: 1083efb63;  */

void FUN_1083efb18(void)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001083f2a84();
  FUN_1083d3a60(0x30);
  func_0x0001083f2cf4();
  FUN_1083f24e0();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 1083efb64; end: 1083efb9f;  */

void FUN_1083efb64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_3;
  uStack_30 = param_1;
  uStack_28 = param_2;
  FUN_1083efba0(auStack_40,&uStack_30,&uStack_38);
  func_0x0001083f2dc4();
  FUN_1083f2694();
  return;
}



/* Entry: 1083efba0; end: 1083efbdb;  */

void FUN_1083efba0(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001083f2db8();
  func_0x0001083f2bbc();
  FUN_1083f2658();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1083efbdc; end: 1083f0557;  */

/* WARNING: Removing unreachable block (ram,0x0001083f02b0) */
/* WARNING: Removing unreachable block (ram,0x0001083f02e0) */
/* WARNING: Removing unreachable block (ram,0x0001083f02d0) */
/* WARNING: Removing unreachable block (ram,0x0001083f02dc) */

void FUN_1083efbdc(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,uint param_7)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  char cVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  cVar9 = (int)param_7 < 0;
  cVar7 = '\0';
  puVar4 = &UNK_10f4939a7;
  if (param_7 == 0) {
    puVar4 = &UNK_10f4939b7;
  }
  iVar12 = (int)param_6[1];
  uStack_78 = param_4;
  uStack_70 = param_5;
  if (iVar12 == 0) {
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c278b8(auStack_d8);
    func_0x0001083f2bd4();
    func_0x0001083f2d30(auStack_f0);
    func_0x0001083f2c0c();
    func_0x0001083f2bf8();
    func_0x00010048a6c8();
    func_0x0001083f29c0();
    uVar2 = extraout_x11;
    puVar5 = extraout_x10;
    if (cVar9 == cVar7) {
      uVar2 = extraout_x8;
      puVar5 = auStack_90;
    }
    FUN_1083c8a60(uVar14,param_3,puVar5,uVar2);
    func_0x0001083f2aa8();
    func_0x0001083f2ab0();
    func_0x0001083f2b10();
    func_0x0001083f2b00();
    func_0x0001083f2b20();
    iVar12 = (int)param_6[1];
  }
  uVar16 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  lVar18 = *param_6;
  for (lVar15 = 0; (long)iVar12 * 0x58 != lVar15; lVar15 = lVar15 + 0x58) {
    iVar6 = (int)uStack_100;
    puVar17 = (undefined8 *)(lVar18 + lVar15 + 0x40);
    FUN_10832b540(&uStack_100,*puVar17,*(undefined8 *)(lVar18 + lVar15 + 0x48));
    if ((int)uStack_100 == iVar6) {
      func_0x0001083f2cb4();
      func_0x000107c27958(auStack_130,puVar17);
      func_0x0001004c3cd0(auStack_118,&UNK_10f4939ff,auStack_130);
      func_0x00010048a6c8(auStack_f0,auStack_118,&UNK_10f493a07);
      func_0x000107c278b8(auStack_148,puVar4);
      func_0x00010533a9c0(auStack_d8,auStack_f0,auStack_148);
      func_0x00010048a6c8(auStack_c0,auStack_d8,&UNK_10f493a2a);
      func_0x0001083f2d30(auStack_160);
      func_0x00010533a9c0(auStack_a8,auStack_c0,auStack_160);
      func_0x0001083f2bf8();
      func_0x00010048a6c8();
      func_0x0001083f29a8();
      func_0x0001083f2a24();
      func_0x0001083f2aa8();
      func_0x0001083f2ab0();
      func_0x0001083f2b90();
      func_0x0001083f2b00();
      func_0x0001083f2b20();
      func_0x0001083f2c3c();
      func_0x0001083f2b10();
      func_0x0001083f2c84();
      func_0x0001083f2d74();
    }
    lVar1 = lVar18 + lVar15;
    if (*(int *)(lVar1 + 0x38) != 0) {
      FUN_1083e8b44(auStack_90);
      func_0x0001083f2cb4();
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_f0,&UNK_10f493a2e,auStack_90);
      func_0x00010048a6c8(auStack_d8,auStack_f0,&UNK_10f493a39);
      func_0x0001083f2be8(auStack_118);
      func_0x00010533a9c0(auStack_c0,auStack_d8,auStack_118);
      func_0x0001083f2b6c(auStack_a8,auStack_c0);
      func_0x0001083f2a24();
      func_0x0001083f2ab0();
      func_0x0001083f2b00();
      func_0x0001083f2c84();
      func_0x0001083f2b20();
      func_0x0001083f2b10();
      func_0x0001083f2aa8();
    }
    uVar13 = *(uint *)(lVar1 + 4);
    if ((uVar13 >> 6 & 1) != 0) {
      func_0x0001083f2cb4();
      func_0x0001083f2be8(auStack_c0);
      func_0x0001004c3cd0(auStack_a8,&UNK_10f493a57,auStack_c0);
      func_0x0001083f2bf8();
      func_0x0001083f2b6c();
      func_0x0001083f29a8();
      func_0x0001083f2a24();
      func_0x0001083f2aa8();
      func_0x0001083f2ab0();
      func_0x0001083f2b00();
      uVar13 = *(uint *)(lVar1 + 4);
    }
    if ((uVar13 >> 10 & 1) != 0) {
      func_0x0001083f2cb4();
      func_0x0001083f2be8(auStack_c0);
      func_0x0001004c3cd0(auStack_a8,&UNK_10f493a87,auStack_c0);
      func_0x0001083f2bf8();
      func_0x0001083f2b6c();
      func_0x0001083f29a8();
      func_0x0001083f2a24();
      func_0x0001083f2aa8();
      func_0x0001083f2ab0();
      func_0x0001083f2b00();
    }
    lVar1 = lVar18 + lVar15;
    bVar3 = *(byte *)(*(long *)(lVar1 + 0x50) + 0x2c);
    if (bVar3 == 0xc) {
      func_0x0001083f2cb4();
      func_0x0001083f2be8(auStack_a8);
      func_0x0001004c3cd0(auStack_90,&UNK_10f493ab3,auStack_a8);
      func_0x0001083f29a8();
      func_0x0001083f2a24();
      func_0x0001083f2aa8();
      func_0x0001083f2ab0();
      bVar3 = *(byte *)(*(long *)(lVar1 + 0x50) + 0x2c);
    }
    if (bVar3 < 0x10 && (1 << (ulong)(bVar3 & 0x1f) & 0xe4c0U) != 0) {
      func_0x0001083f2cb4();
      FUN_10831d8f8(auStack_d8);
      func_0x0001004c3cd0(auStack_c0,&UNK_10f493ad4,auStack_d8);
      func_0x00010048a6c8(auStack_a8,auStack_c0,&UNK_10f493ae2);
      func_0x0001083f2be8(auStack_f0);
      func_0x0001083f2bf8();
      func_0x00010533a9c0();
      func_0x0001083f29a8();
      func_0x0001083f2a24();
      func_0x0001083f2aa8();
      func_0x0001083f2b10();
      func_0x0001083f2ab0();
      func_0x0001083f2b00();
      func_0x0001083f2b20();
    }
    if (param_7 != 0) {
      plVar10 = *(long **)(lVar1 + 0x50);
      (**(code **)(*plVar10 + 0x130))();
      if ((int)plVar10 != 0) {
        FUN_1083c8a60(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(lVar18 + lVar15),
                      &UNK_10f493af9,0x32);
      }
    }
    plVar10 = *(long **)(lVar1 + 0x50);
    (**(code **)(*plVar10 + 0x120))();
    if ((int)plVar10 == 0) {
      if (uVar16 < 100000) {
        plVar10 = *(long **)(lVar1 + 0x50);
        (**(code **)(*plVar10 + 0x80))();
        bVar8 = CARRY8(uVar16,(ulong)plVar10);
        uVar16 = uVar16 + (long)plVar10;
        if (bVar8) {
          uVar16 = 0xffffffffffffffff;
        }
        if (99999 < uVar16) {
          func_0x000107c278b8(auStack_a8,puVar4);
          func_0x00010048a6c8(auStack_90);
          func_0x0001083f29a8();
          func_0x0001083f2d5c();
          func_0x0001083f2aa8();
          func_0x0001083f2ab0();
        }
      }
    }
    else if ((param_7 & 1) == 0) {
      FUN_1083c8a60(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(lVar18 + lVar15),&UNK_10f491d06,
                    0x25);
    }
  }
  iVar12 = 0;
  lVar15 = *param_6;
  for (lVar18 = (long)(int)param_6[1] * 0x58; lVar18 != 0; lVar18 = lVar18 + -0x58) {
    plVar10 = *(long **)(lVar15 + 0x50);
    (**(code **)(*plVar10 + 0x138))();
    if (iVar12 <= (int)plVar10) {
      iVar12 = (int)plVar10;
    }
    lVar15 = lVar15 + 0x58;
  }
  if (7 < iVar12) {
    func_0x000107c278b8(auStack_d8,puVar4);
    func_0x0001083f2bd4();
    func_0x0001083f2d30(auStack_f0);
    func_0x0001083f2c0c();
    func_0x0001083f2bf8();
    func_0x00010048a6c8();
    func_0x0001083f29c0();
    func_0x0001083f2d5c();
    func_0x0001083f2aa8();
    func_0x0001083f2ab0();
    func_0x0001083f2b10();
    func_0x0001083f2b00();
    func_0x0001083f2b20();
  }
  cVar9 = **(char **)(param_2 + 8);
  puVar11 = (undefined8 *)0x58;
  FUN_1083d3a60();
  uVar14 = uStack_70;
  uVar2 = uStack_78;
  FUN_1083d2d60(auStack_90,param_6);
  FUN_1083f1c58(puVar11,uVar2,uVar14,&DAT_10f31a213,9,param_3);
  puVar17 = puVar11 + 6;
  *puVar11 = &PTR_FUN_110a46c00;
  FUN_1083d2d60(puVar17,auStack_90);
  puVar11[8] = 0;
  *(int *)(puVar11 + 9) = iVar12 + 1;
  *(undefined4 *)((long)puVar11 + 0x4c) = 0xffffff;
  *(char *)(puVar11 + 10) = (char)param_7;
  *(undefined4 *)((long)puVar11 + 0x51) = 0;
  *(bool *)((long)puVar11 + 0x55) = cVar9 != '\0';
  *(undefined1 *)((long)puVar11 + 0x56) = 1;
  lVar15 = puVar11[6] + 0x50;
  for (lVar18 = (long)*(int *)(puVar11 + 7) * 0x58; lVar18 != 0; lVar18 = lVar18 + -0x58) {
    if ((*(byte *)((long)puVar11 + 0x51) & 1) == 0) {
      func_0x0001083f2d24();
      (**(code **)(extraout_x8_00 + 0x118))();
    }
    else {
      puVar17 = (undefined8 *)0x1;
    }
    *(char *)((long)puVar11 + 0x51) = (char)puVar17;
    if ((*(byte *)((long)puVar11 + 0x52) & 1) == 0) {
      func_0x0001083f2d24();
      (**(code **)(extraout_x8_01 + 0x120))();
    }
    else {
      puVar17 = (undefined8 *)0x1;
    }
    *(char *)((long)puVar11 + 0x52) = (char)puVar17;
    if ((*(byte *)((long)puVar11 + 0x53) & 1) == 0) {
      func_0x0001083f2d24();
      (**(code **)(extraout_x8_02 + 0x128))();
    }
    else {
      puVar17 = (undefined8 *)0x1;
    }
    *(char *)((long)puVar11 + 0x53) = (char)puVar17;
    if ((*(byte *)((long)puVar11 + 0x54) & 1) == 0) {
      func_0x0001083f2d24();
      (**(code **)(extraout_x8_03 + 0x130))();
    }
    else {
      puVar17 = (undefined8 *)0x1;
    }
    *(char *)((long)puVar11 + 0x54) = (char)puVar17;
    if (*(char *)((long)puVar11 + 0x56) == '\x01') {
      func_0x0001083f2d24();
      (**(code **)(extraout_x8_04 + 0x20))();
    }
    else {
      puVar17 = (undefined8 *)0x0;
    }
    *(char *)((long)puVar11 + 0x56) = (char)puVar17;
    lVar15 = lVar15 + 0x58;
  }
  func_0x0001083f2d98();
  lVar18 = 0;
  if ((*(byte *)((long)puVar11 + 0x52) & 1) == 0) {
    func_0x0001083f2d98();
    for (; lVar18 != 0; lVar18 = lVar18 + -0x58) {
      plVar10 = *(long **)(lVar15 + 0x50);
      (**(code **)(*plVar10 + 0x80))();
      puVar11[8] = puVar11[8] + (long)plVar10;
      lVar15 = lVar15 + 0x58;
    }
  }
  func_0x0001083d2d14(auStack_90);
  *param_1 = puVar11;
  func_0x0001083f2d50();
  return;
}



/* Entry: 1083f0558; end: 1083f05b3;  */

void FUN_1083f0558(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined1 auStack_38 [8];
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uStack_30 = param_6;
  uStack_2f = param_5;
  uStack_2e = param_4;
  uStack_2d = param_3;
  uStack_2c = param_2;
  uStack_28 = param_1;
  FUN_1083f05b4(auStack_38,&uStack_28,&uStack_2c,&uStack_2d,&uStack_2e,&uStack_2f,&uStack_30);
  func_0x0001083f2a04();
  FUN_1083f2898();
  return;
}



/* Entry: 1083f05b4; end: 1083f061b;  */

void FUN_1083f05b4(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001083f2bc8();
  FUN_1083f2804();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1083f061c; end: 1083f0657;  */

void FUN_1083f061c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 extraout_x9;
  undefined4 auStack_3c [7];
  
  func_0x0001083f2d14();
  auStack_3c[0] = param_5;
  func_0x0001083f2d04();
  FUN_1083f0658(param_1,param_2,extraout_x9,auStack_3c);
  func_0x0001083f2a04();
  FUN_1083f2960();
  return;
}



/* Entry: 1083f0658; end: 1083f06ab;  */

void FUN_1083f0658(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001083f2af4();
  FUN_1083f28d0();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1083f06ac; end: 1083f08fb;  */

void FUN_1083f06ac(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = param_1;
  plVar3 = param_2;
  func_0x0001083f2d44();
  if (((ulong)plVar5 & 1) == 0) {
    if ((*(char *)((long)param_1 + 0x2c) == *(char *)((long)param_2 + 0x2c)) &&
       (((func_0x0001083f2ab8(*(undefined8 *)(*param_1 + 0xd0)), ((ulong)plVar5 & 1) != 0 ||
         (func_0x0001083f2ab8(*(undefined8 *)(*param_1 + 0xd8)), ((ulong)plVar5 & 1) != 0)) ||
        (func_0x0001083f2ab8(*(undefined8 *)(*param_1 + 0xe0)), (int)plVar5 != 0)))) {
      func_0x0001083f2ab8(*(undefined8 *)(*param_1 + 0xd8));
      plVar3 = plVar5;
      if ((int)plVar5 != 0) {
        func_0x0001083f2ab8(*(undefined8 *)(*param_1 + 0x68));
        plVar3 = plVar5;
        func_0x0001083f2b30(*(undefined8 *)(*param_2 + 0x68));
        if ((int)plVar5 != (int)plVar3) {
          return;
        }
      }
      func_0x0001083f2ab8(*(undefined8 *)(*param_1 + 0x60));
      plVar5 = plVar3;
      func_0x0001083f2b30(*(undefined8 *)(*param_2 + 0x60));
      if ((int)plVar3 == (int)plVar5) {
        func_0x0001083f2cc8();
        (**(code **)(*param_2 + 0x50))(param_2);
        FUN_1083f06ac(plVar5,param_2);
      }
    }
    else {
      uVar2 = (uint)plVar5;
      func_0x0001083f2ab8(*(undefined8 *)(*param_1 + 0x40));
      if ((uVar2 < 3) && (func_0x0001083f2b30(*(undefined8 *)(*param_2 + 0x40)), uVar2 < 3)) {
        func_0x0001083f2ab8(*(undefined8 *)(*param_1 + 0xc0));
        if ((uVar2 == 0) ||
           (func_0x0001083f2ab8(*(undefined8 *)(*param_1 + 0x40)), 1 < (uVar2 - 1 & 0xff))) {
          func_0x0001083f2ab8(*(undefined8 *)(*param_1 + 0x40));
          uVar1 = uVar2;
          func_0x0001083f2b30(*(undefined8 *)(*param_2 + 0x40));
          if (uVar2 == uVar1) {
            func_0x0001083f2ae4();
            uVar2 = uVar1;
            func_0x0001083f2ab8(*(undefined8 *)(*param_1 + 0x48));
            if ((int)uVar1 < (int)uVar2) {
              func_0x0001083f2ab8(*(undefined8 *)(*param_1 + 0x48));
              func_0x0001083f2ae4();
            }
            else {
              func_0x0001083f2ae4();
              func_0x0001083f2ab8(*(undefined8 *)(*param_1 + 0x48));
            }
          }
        }
      }
      else if (*(char *)((long)param_1 + 0x2c) == '\x02') {
        (**(code **)(*param_1 + 0x98))();
        plVar5 = (long *)0x0;
        do {
          if (plVar3 == plVar5) {
            return;
          }
          plVar4 = (long *)param_1[(long)plVar5];
          (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
          plVar5 = (long *)((long)plVar5 + 1);
        } while ((int)plVar4 == 0);
      }
    }
  }
  return;
}



/* Entry: 1083f08fc; end: 1083f093b;  */

undefined8 FUN_1083f08fc(undefined8 param_1,long *param_2,uint *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 **ppuStack_50;
  ulong uStack_48;
  byte bStack_39;
  uint uStack_34;
  
  FUN_1083f093c();
  uVar1 = *param_3 & 0x600;
  *param_3 = *param_3 & 0xfffff9ff;
  uVar3 = param_1;
  uStack_34 = uVar1;
  func_0x0001083f2d44();
  if ((int)uVar3 == 0) {
    if (uVar1 != 0) {
      lVar4 = param_2[2];
      FUN_10831d8f8(auStack_b0,param_1);
      func_0x0001004c3cd0(auStack_98,&UNK_10f48e874,auStack_b0);
      func_0x00010048a6c8(auStack_80,auStack_98,&UNK_10f493c42);
      FUN_1083e8b44(auStack_c8,&uStack_34);
      func_0x00010533a9c0(auStack_68,auStack_80,auStack_c8);
      func_0x00010048a6c8(&ppuStack_50,auStack_68,&DAT_10f638984);
      if (-1 < (char)bStack_39) {
        uStack_48 = (ulong)bStack_39;
        ppuStack_50 = &ppuStack_50;
      }
      FUN_1083c8a60(lVar4,param_4,ppuStack_50,uStack_48);
      func_0x0001083f2c8c();
      func_0x0001083f2ca4();
      func_0x0001083f2cac();
      func_0x0001083f2cc0();
      func_0x0001083f2ce0();
      func_0x0001083f2b64();
    }
  }
  else if (uVar1 == 0x400) {
    param_1 = *(undefined8 *)(*param_2 + 0x280);
  }
  else if (uVar1 == 0x200) {
    param_1 = *(undefined8 *)(*param_2 + 0x278);
  }
  else {
    uVar3 = 0x41;
    if (uVar1 != 0) {
      uVar3 = 0x38;
    }
    puVar2 = &UNK_10f493c00;
    if (uVar1 != 0) {
      puVar2 = &UNK_10f493bc7;
    }
    FUN_1083c8a60(param_2[2],param_4,puVar2,uVar3);
  }
  return param_1;
}



/* Entry: 1083f093c; end: 1083f0b5b;  */

long * FUN_1083f093c(long *param_1,long *param_2,uint *param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined *puVar12;
  int iVar13;
  undefined8 uVar14;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar15;
  long *plVar16;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [8];
  undefined8 ******ppppppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 ******ppppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *param_3;
  uVar1 = uVar3 & 0x1c0;
  if (uVar1 == 0) {
    return param_1;
  }
  if (*(byte *)(param_2[1] + 1) - 7 < 8) {
    if ((uVar1 & uVar1 - 1) == 0) {
      *param_3 = uVar3 & 0xfffffe3f;
      plVar15 = param_1;
      (**(code **)(*param_1 + 0x50))();
      plVar16 = plVar15;
      func_0x0001083f2ac8();
      if (0x1f < (int)plVar16) {
        if ((uVar3 >> 6 & 1) != 0) {
          return param_1;
        }
        (**(code **)(*plVar15 + 0x40))();
        if ((uint)plVar15 < 3) {
          lVar11 = *(long *)(&UNK_10df25e48 + (long)(int)(uint)plVar15 * 8);
        }
        else {
          lVar11 = 0xe8;
        }
        plVar16 = *(long **)(*param_2 + lVar11);
        if (plVar16 != (long *)0x0) {
          func_0x0001083f2b28(*(undefined8 *)(*param_1 + 0xe0));
          if ((int)plVar15 != 0) {
            lVar11 = param_2[4];
            func_0x0001083f2b28(*(undefined8 *)(*param_1 + 0x60));
            if ((int)plVar15 == 0) {
              return plVar16;
            }
            func_0x0001083eea40(lVar11,param_2);
            while ((((*unaff_x20 != 0 && ((*(byte *)((long)unaff_x20 + 0x21) & 1) == 0)) &&
                    (*(char *)unaff_x19[1] == '\0')) &&
                   (plVar8 = plVar16, (**(code **)(*plVar16 + 0x18))(), (int)plVar8 != 0))) {
              unaff_x20 = (long *)*unaff_x20;
            }
            FUN_1083ef6e4(&ppppppuStack_58,plVar16,plVar15);
            uVar2 = uStack_50;
            pppppppuVar5 = (undefined8 *******)ppppppuStack_58;
            if (-1 < (long)uStack_48) {
              uVar2 = uStack_48 >> 0x38;
              pppppppuVar5 = &ppppppuStack_58;
            }
            plVar8 = unaff_x20;
            FUN_1083c9bd0(unaff_x20,pppppppuVar5,uVar2);
            if ((plVar8 != (long *)0x0) &&
               (plVar9 = plVar8, (**(code **)(*plVar8 + 0xe0))(), (int)plVar9 != 0)) {
              plVar9 = plVar8;
              (**(code **)(*plVar8 + 0x50))(plVar8);
              plVar10 = plVar16;
              (**(code **)(*plVar16 + 0x38))(plVar16,plVar9);
              if (((ulong)plVar10 & 1) != 0) goto LAB_1083ee338;
            }
            uStack_68 = uStack_50;
            ppppppuStack_70 = ppppppuStack_58;
            uStack_60 = uStack_48;
            ppppppuStack_58 = (undefined8 *******)0x0;
            uStack_50 = 0;
            uStack_48 = 0;
            FUN_1083ee024(unaff_x20,&ppppppuStack_70);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_70);
            lVar11 = (long)*(char *)((long)unaff_x20 + 0x17);
            plVar8 = unaff_x20;
            if (lVar11 < 0) {
              plVar8 = (long *)*unaff_x20;
              lVar11 = unaff_x20[1];
            }
            FUN_1083ef7a4(auStack_78,unaff_x19,plVar8,lVar11,plVar16,plVar15);
            func_0x0001083eeaa4();
            FUN_1083e7a3c();
            plVar15 = unaff_x19;
            func_0x0001083eeab0();
            plVar8 = unaff_x19;
            if (plVar15 != (long *)0x0) {
              func_0x0001083eea0c();
            }
LAB_1083ee338:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_58);
            return plVar8;
          }
          func_0x0001083f2b28(*(undefined8 *)(*param_1 + 0x60));
          iVar7 = iVar13;
          func_0x0001083f2b28(*(undefined8 *)(*param_1 + 0x68));
          iVar13 = (int)plVar15;
          iVar4 = iVar13 + -1;
          if (iVar4 == 0 && iVar7 == 1) {
            return plVar16;
          }
          func_0x0001083f2998(plVar16,*(undefined8 *)*param_2);
          if ((((ulong)plVar16 & 1) != 0) || (func_0x0001083f2998(), (int)plVar16 != 0)) {
            switch(iVar7) {
            case 1:
              switch(iVar4) {
              case 0:
                plVar15 = *(long **)*param_2;
                break;
              case 1:
                plVar15 = *(long **)(*param_2 + 8);
                break;
              case 2:
                plVar15 = *(long **)(*param_2 + 0x10);
                break;
              case 3:
                plVar15 = *(long **)(*param_2 + 0x18);
                break;
              default:
                func_0x0001083f29e0();
                ppppppuStack_58 = (undefined8 ******)0x44f;
                goto LAB_1083f1300;
              }
              return plVar15;
            case 2:
              if (iVar13 == 4) {
                return *(long **)(*param_2 + 0x138);
              }
              if (iVar13 == 3) {
                return *(long **)(*param_2 + 0x120);
              }
              if (iVar13 == 2) {
                return *(long **)(*param_2 + 0x108);
              }
              func_0x0001083f29e0();
              ppppppuStack_58 = (undefined8 ******)0x456;
              break;
            case 3:
              if (iVar13 == 4) {
                return *(long **)(*param_2 + 0x140);
              }
              if (iVar13 == 3) {
                return *(long **)(*param_2 + 0x128);
              }
              if (iVar13 == 2) {
                return *(long **)(*param_2 + 0x110);
              }
              func_0x0001083f29e0();
              ppppppuStack_58 = (undefined8 ******)0x45d;
              break;
            case 4:
              if (iVar13 == 4) {
                return *(long **)(*param_2 + 0x148);
              }
              if (iVar13 == 3) {
                return *(long **)(*param_2 + 0x130);
              }
              if (iVar13 == 2) {
                return *(long **)(*param_2 + 0x118);
              }
              func_0x0001083f29e0();
              ppppppuStack_58 = (undefined8 ******)0x464;
              break;
            default:
              func_0x0001083f2a58();
              ppppppuStack_58 = (undefined8 ******)0x466;
              goto LAB_1083f12cc;
            }
            goto code_r0x0001083f1230;
          }
          func_0x0001083f2998();
          if ((int)plVar16 == 0) {
            func_0x0001083f2998();
            iVar13 = (int)plVar16;
            if ((((ulong)plVar16 & 1) == 0) && (func_0x0001083f2998(), iVar13 == 0)) {
              func_0x0001083f2998();
              if (iVar13 == 0) {
                func_0x0001083f2998();
                if (iVar13 == 0) {
                  func_0x0001083f2998();
                  if (iVar13 == 0) {
                    func_0x0001083f2998();
                    if (iVar13 == 0) {
                      return *(long **)(*param_2 + 0xf0);
                    }
                    if (iVar7 != 1) {
                      func_0x0001083f2a58();
                      ppppppuStack_58 = (undefined8 ******)0x4c3;
                      goto LAB_1083f12cc;
                    }
                    switch(iVar4) {
                    case 0:
                      return *(long **)(*param_2 + 0xc0);
                    case 1:
                      return *(long **)(*param_2 + 200);
                    case 2:
                      return *(long **)(*param_2 + 0xd0);
                    case 3:
                      return *(long **)(*param_2 + 0xd8);
                    default:
                      func_0x0001083f29e0();
                      ppppppuStack_58 = (undefined8 ******)0x4c1;
                    }
                  }
                  else {
                    if (iVar7 != 1) {
                      func_0x0001083f2a58();
                      ppppppuStack_58 = (undefined8 ******)0x4b7;
LAB_1083f12cc:
                      puVar12 = &UNK_10f493d29;
                      goto LAB_1083f12d8;
                    }
                    switch(iVar4) {
                    case 0:
                      return *(long **)(*param_2 + 0xa0);
                    case 1:
                      return *(long **)(*param_2 + 0xa8);
                    case 2:
                      return *(long **)(*param_2 + 0xb0);
                    case 3:
                      return *(long **)(*param_2 + 0xb8);
                    default:
                      func_0x0001083f29e0();
                      ppppppuStack_58 = (undefined8 ******)0x4b5;
                    }
                  }
                }
                else {
                  if (iVar7 != 1) {
                    func_0x0001083f2a58();
                    ppppppuStack_58 = (undefined8 ******)0x4ab;
                    goto LAB_1083f12cc;
                  }
                  switch(iVar4) {
                  case 0:
                    return *(long **)(*param_2 + 0x60);
                  case 1:
                    return *(long **)(*param_2 + 0x68);
                  case 2:
                    return *(long **)(*param_2 + 0x70);
                  case 3:
                    return *(long **)(*param_2 + 0x78);
                  default:
                    func_0x0001083f29e0();
                    ppppppuStack_58 = (undefined8 ******)0x4a9;
                  }
                }
              }
              else {
                if (iVar7 != 1) {
                  func_0x0001083f2a58();
                  ppppppuStack_58 = (undefined8 ******)0x49f;
                  goto LAB_1083f12cc;
                }
                switch(iVar4) {
                case 0:
                  return *(long **)(*param_2 + 0x80);
                case 1:
                  return *(long **)(*param_2 + 0x88);
                case 2:
                  return *(long **)(*param_2 + 0x90);
                case 3:
                  return *(long **)(*param_2 + 0x98);
                default:
                  func_0x0001083f29e0();
                  ppppppuStack_58 = (undefined8 ******)0x49d;
                }
              }
            }
            else {
              if (iVar7 != 1) {
                func_0x0001083f2a58();
                ppppppuStack_58 = (undefined8 ******)0x493;
                goto LAB_1083f12cc;
              }
              switch(iVar4) {
              case 0:
                return *(long **)(*param_2 + 0x40);
              case 1:
                return *(long **)(*param_2 + 0x48);
              case 2:
                return *(long **)(*param_2 + 0x50);
              case 3:
                return *(long **)(*param_2 + 0x58);
              default:
                func_0x0001083f29e0();
                ppppppuStack_58 = (undefined8 ******)0x491;
              }
            }
LAB_1083f1300:
            puVar12 = &UNK_10f493c61;
          }
          else {
            switch(iVar7) {
            case 1:
              switch(iVar4) {
              case 0:
                return *(long **)(*param_2 + 0x20);
              case 1:
                return *(long **)(*param_2 + 0x28);
              case 2:
                return *(long **)(*param_2 + 0x30);
              case 3:
                return *(long **)(*param_2 + 0x38);
              default:
                func_0x0001083f29e0();
                ppppppuStack_58 = (undefined8 ******)0x470;
              }
              goto LAB_1083f1300;
            case 2:
              if (iVar13 == 4) {
                return *(long **)(*param_2 + 0x180);
              }
              if (iVar13 == 3) {
                return *(long **)(*param_2 + 0x168);
              }
              if (iVar13 == 2) {
                return *(long **)(*param_2 + 0x150);
              }
              func_0x0001083f29e0();
              ppppppuStack_58 = (undefined8 ******)0x477;
              break;
            case 3:
              if (iVar13 == 4) {
                return *(long **)(*param_2 + 0x188);
              }
              if (iVar13 == 3) {
                return *(long **)(*param_2 + 0x170);
              }
              if (iVar13 == 2) {
                return *(long **)(*param_2 + 0x158);
              }
              func_0x0001083f29e0();
              ppppppuStack_58 = (undefined8 ******)0x47e;
              break;
            case 4:
              if (iVar13 == 4) {
                return *(long **)(*param_2 + 400);
              }
              if (iVar13 == 3) {
                return *(long **)(*param_2 + 0x178);
              }
              if (iVar13 == 2) {
                return *(long **)(*param_2 + 0x160);
              }
              func_0x0001083f29e0();
              ppppppuStack_58 = (undefined8 ******)0x485;
              break;
            default:
              func_0x0001083f2a58();
              ppppppuStack_58 = (undefined8 ******)0x487;
              goto LAB_1083f12cc;
            }
code_r0x0001083f1230:
            puVar12 = &UNK_10f493ced;
          }
LAB_1083f12d8:
          FUN_10841076c(puVar12);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1083f12e0);
          (*pcVar6)();
        }
      }
      lVar11 = param_2[2];
      func_0x0001083f2cd8(auStack_88);
      func_0x0001004c3cd0(&ppppppuStack_70,&UNK_10f48e874,auStack_88);
      func_0x00010048a6c8(&ppppppuStack_58,&ppppppuStack_70,&UNK_10f493b9f);
      func_0x0001083f2ce8(uStack_48._7_1_);
      FUN_1083c8a60(lVar11,param_4);
      func_0x0001083f2ce0();
      func_0x0001083f2b64();
      func_0x0001083f2cac();
      goto LAB_1083f09bc;
    }
    lVar11 = param_2[2];
    puVar12 = &UNK_10f493b76;
    uVar14 = 0x28;
  }
  else {
    lVar11 = param_2[2];
    puVar12 = &UNK_10f493b51;
    uVar14 = 0x24;
  }
  FUN_1083c8a60(lVar11,param_4,puVar12,uVar14);
LAB_1083f09bc:
  return *(long **)(*param_2 + 0xe8);
}



/* Entry: 1083f0b5c; end: 1083f0d07;  */

undefined8 FUN_1083f0b5c(undefined8 param_1,long *param_2,uint *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 **ppuStack_50;
  ulong uStack_48;
  byte bStack_39;
  uint uStack_34;
  
  uVar1 = *param_3 & 0x600;
  *param_3 = *param_3 & 0xfffff9ff;
  uVar3 = param_1;
  uStack_34 = uVar1;
  func_0x0001083f2d44(param_1,*(undefined8 *)(*param_2 + 0x270));
  if ((int)uVar3 == 0) {
    if (uVar1 != 0) {
      lVar4 = param_2[2];
      FUN_10831d8f8(auStack_b0,param_1);
      func_0x0001004c3cd0(auStack_98,&UNK_10f48e874,auStack_b0);
      func_0x00010048a6c8(auStack_80,auStack_98,&UNK_10f493c42);
      FUN_1083e8b44(auStack_c8,&uStack_34);
      func_0x00010533a9c0(auStack_68,auStack_80,auStack_c8);
      func_0x00010048a6c8(&ppuStack_50,auStack_68,&DAT_10f638984);
      if (-1 < (char)bStack_39) {
        uStack_48 = (ulong)bStack_39;
        ppuStack_50 = &ppuStack_50;
      }
      FUN_1083c8a60(lVar4,param_4,ppuStack_50,uStack_48);
      func_0x0001083f2c8c();
      func_0x0001083f2ca4();
      func_0x0001083f2cac();
      func_0x0001083f2cc0();
      func_0x0001083f2ce0();
      func_0x0001083f2b64();
    }
  }
  else if (uVar1 == 0x400) {
    param_1 = *(undefined8 *)(*param_2 + 0x280);
  }
  else if (uVar1 == 0x200) {
    param_1 = *(undefined8 *)(*param_2 + 0x278);
  }
  else {
    uVar3 = 0x41;
    if (uVar1 != 0) {
      uVar3 = 0x38;
    }
    puVar2 = &UNK_10f493c00;
    if (uVar1 != 0) {
      puVar2 = &UNK_10f493bc7;
    }
    FUN_1083c8a60(param_2[2],param_4,puVar2,uVar3);
  }
  return param_1;
}



/* Entry: 1083f0d08; end: 1083f130f;  */

ulong FUN_1083f0d08(ulong param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  
  iVar1 = param_3 + -1;
  if (iVar1 == 0 && param_4 == 1) {
    return param_1;
  }
  func_0x0001083f2998(param_1,*(undefined8 *)*param_2);
  if (((param_1 & 1) != 0) || (func_0x0001083f2998(), (int)param_1 != 0)) {
    switch(param_4) {
    case 1:
      switch(iVar1) {
      case 0:
        uVar5 = *(ulong *)*param_2;
        break;
      case 1:
        uVar5 = *(ulong *)(*param_2 + 8);
        break;
      case 2:
        uVar5 = *(ulong *)(*param_2 + 0x10);
        break;
      case 3:
        uVar5 = *(ulong *)(*param_2 + 0x18);
        break;
      default:
        func_0x0001083f29e0();
        goto LAB_1083f1300;
      }
      return uVar5;
    case 2:
      if (param_3 == 4) {
        return *(ulong *)(*param_2 + 0x138);
      }
      if (param_3 == 3) {
        return *(ulong *)(*param_2 + 0x120);
      }
      if (param_3 == 2) {
        return *(ulong *)(*param_2 + 0x108);
      }
      func_0x0001083f29e0();
      break;
    case 3:
      if (param_3 == 4) {
        return *(ulong *)(*param_2 + 0x140);
      }
      if (param_3 == 3) {
        return *(ulong *)(*param_2 + 0x128);
      }
      if (param_3 == 2) {
        return *(ulong *)(*param_2 + 0x110);
      }
      func_0x0001083f29e0();
      break;
    case 4:
      if (param_3 == 4) {
        return *(ulong *)(*param_2 + 0x148);
      }
      if (param_3 == 3) {
        return *(ulong *)(*param_2 + 0x130);
      }
      if (param_3 == 2) {
        return *(ulong *)(*param_2 + 0x118);
      }
      func_0x0001083f29e0();
      break;
    default:
      func_0x0001083f2a58();
      goto LAB_1083f12cc;
    }
    goto code_r0x0001083f1230;
  }
  func_0x0001083f2998();
  if ((int)param_1 == 0) {
    func_0x0001083f2998();
    iVar3 = (int)param_1;
    if (((param_1 & 1) == 0) && (func_0x0001083f2998(), iVar3 == 0)) {
      func_0x0001083f2998();
      if (iVar3 == 0) {
        func_0x0001083f2998();
        if (iVar3 == 0) {
          func_0x0001083f2998();
          if (iVar3 == 0) {
            func_0x0001083f2998();
            if (iVar3 == 0) {
              return *(ulong *)(*param_2 + 0xf0);
            }
            if (param_4 != 1) {
              func_0x0001083f2a58();
              goto LAB_1083f12cc;
            }
            switch(iVar1) {
            case 0:
              return *(ulong *)(*param_2 + 0xc0);
            case 1:
              return *(ulong *)(*param_2 + 200);
            case 2:
              return *(ulong *)(*param_2 + 0xd0);
            case 3:
              return *(ulong *)(*param_2 + 0xd8);
            default:
              func_0x0001083f29e0();
            }
          }
          else {
            if (param_4 != 1) {
              func_0x0001083f2a58();
LAB_1083f12cc:
              puVar4 = &UNK_10f493d29;
              goto LAB_1083f12d8;
            }
            switch(iVar1) {
            case 0:
              return *(ulong *)(*param_2 + 0xa0);
            case 1:
              return *(ulong *)(*param_2 + 0xa8);
            case 2:
              return *(ulong *)(*param_2 + 0xb0);
            case 3:
              return *(ulong *)(*param_2 + 0xb8);
            default:
              func_0x0001083f29e0();
            }
          }
        }
        else {
          if (param_4 != 1) {
            func_0x0001083f2a58();
            goto LAB_1083f12cc;
          }
          switch(iVar1) {
          case 0:
            return *(ulong *)(*param_2 + 0x60);
          case 1:
            return *(ulong *)(*param_2 + 0x68);
          case 2:
            return *(ulong *)(*param_2 + 0x70);
          case 3:
            return *(ulong *)(*param_2 + 0x78);
          default:
            func_0x0001083f29e0();
          }
        }
      }
      else {
        if (param_4 != 1) {
          func_0x0001083f2a58();
          goto LAB_1083f12cc;
        }
        switch(iVar1) {
        case 0:
          return *(ulong *)(*param_2 + 0x80);
        case 1:
          return *(ulong *)(*param_2 + 0x88);
        case 2:
          return *(ulong *)(*param_2 + 0x90);
        case 3:
          return *(ulong *)(*param_2 + 0x98);
        default:
          func_0x0001083f29e0();
        }
      }
    }
    else {
      if (param_4 != 1) {
        func_0x0001083f2a58();
        goto LAB_1083f12cc;
      }
      switch(iVar1) {
      case 0:
        return *(ulong *)(*param_2 + 0x40);
      case 1:
        return *(ulong *)(*param_2 + 0x48);
      case 2:
        return *(ulong *)(*param_2 + 0x50);
      case 3:
        return *(ulong *)(*param_2 + 0x58);
      default:
        func_0x0001083f29e0();
      }
    }
LAB_1083f1300:
    puVar4 = &UNK_10f493c61;
  }
  else {
    switch(param_4) {
    case 1:
      switch(iVar1) {
      case 0:
        return *(ulong *)(*param_2 + 0x20);
      case 1:
        return *(ulong *)(*param_2 + 0x28);
      case 2:
        return *(ulong *)(*param_2 + 0x30);
      case 3:
        return *(ulong *)(*param_2 + 0x38);
      default:
        func_0x0001083f29e0();
      }
      goto LAB_1083f1300;
    case 2:
      if (param_3 == 4) {
        return *(ulong *)(*param_2 + 0x180);
      }
      if (param_3 == 3) {
        return *(ulong *)(*param_2 + 0x168);
      }
      if (param_3 == 2) {
        return *(ulong *)(*param_2 + 0x150);
      }
      func_0x0001083f29e0();
      break;
    case 3:
      if (param_3 == 4) {
        return *(ulong *)(*param_2 + 0x188);
      }
      if (param_3 == 3) {
        return *(ulong *)(*param_2 + 0x170);
      }
      if (param_3 == 2) {
        return *(ulong *)(*param_2 + 0x158);
      }
      func_0x0001083f29e0();
      break;
    case 4:
      if (param_3 == 4) {
        return *(ulong *)(*param_2 + 400);
      }
      if (param_3 == 3) {
        return *(ulong *)(*param_2 + 0x178);
      }
      if (param_3 == 2) {
        return *(ulong *)(*param_2 + 0x160);
      }
      func_0x0001083f29e0();
      break;
    default:
      func_0x0001083f2a58();
      goto LAB_1083f12cc;
    }
code_r0x0001083f1230:
    puVar4 = &UNK_10f493ced;
  }
LAB_1083f12d8:
  FUN_10841076c(puVar4);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1083f12e0);
  (*pcVar2)();
}



/* Entry: 1083f1310; end: 1083f1617;  */

void FUN_1083f1310(ulong *param_1,long *param_2,ulong *param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [47];
  undefined1 uStack_41;
  
  uVar3 = *param_3;
  if ((uVar3 != 0) && (FUN_1083de9ec(uVar3,param_4), (int)uVar3 == 0)) {
    plVar4 = *(long **)(*param_3 + 0x10);
    (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
    uVar3 = *param_3;
    if ((int)plVar4 != 0) {
      *param_3 = 0;
      *param_1 = uVar3;
      return;
    }
    uVar1 = *(undefined4 *)(uVar3 + 8);
    lVar7 = *(long *)(param_4 + 8);
    plVar4 = param_2;
    FUN_1083e2440();
    if ((((ulong)plVar4 & 1) == 0) && ((uVar3 >> 0x20 == 0 || ((*(byte *)(lVar7 + 0x25) & 1) != 0)))
       ) {
      func_0x0001083f2b28(*(undefined8 *)(*param_2 + 0xb8));
      if ((int)uVar3 != 0) {
        uVar3 = *param_3;
        *param_3 = 0;
        func_0x0001083f2b38();
        FUN_1083ddb18();
joined_r0x0001083f14cc:
        if (uVar3 == 0) {
          return;
        }
        func_0x0001083f2a18();
        return;
      }
      func_0x0001083f2b28(*(undefined8 *)(*param_2 + 0xd0));
      iVar2 = (int)uVar3;
      if (((uVar3 & 1) != 0) || (func_0x0001083f2b28(*(undefined8 *)(*param_2 + 0xd8)), iVar2 != 0))
      {
        uVar3 = *param_3;
        *param_3 = 0;
        func_0x0001083f2b38();
        FUN_1083dcda4();
        goto joined_r0x0001083f14cc;
      }
      func_0x0001083f2b28(*(undefined8 *)(*param_2 + 0xe0));
      if (iVar2 != 0) {
        uVar3 = *param_3;
        *param_3 = 0;
        func_0x0001083f2b38();
        FUN_1083dc144();
        goto joined_r0x0001083f14cc;
      }
      uVar6 = *(undefined8 *)(param_4 + 0x10);
      func_0x0001083f2cd8(auStack_88);
      func_0x0001004c3cd0(auStack_70,&UNK_10f4926de,auStack_88);
      func_0x0001083f2ba4();
      func_0x0001083f2ce8(uStack_41);
      FUN_1083c8a60(uVar6,uVar1);
      func_0x0001083f2c1c();
      func_0x0001083f2c24();
      puVar5 = auStack_88;
    }
    else {
      uVar6 = *(undefined8 *)(param_4 + 0x10);
      func_0x0001083f2cd8(auStack_b8);
      func_0x0001004c3cd0(auStack_a0,&UNK_10f493d5b,auStack_b8);
      func_0x00010048a6c8(auStack_88,auStack_a0,&UNK_10f493d66);
      FUN_10831d8f8(auStack_d0,*(undefined8 *)(*param_3 + 0x10));
      func_0x00010533a9c0(auStack_70,auStack_88,auStack_d0);
      func_0x0001083f2ba4();
      func_0x0001083f2ce8(uStack_41);
      FUN_1083c8a60(uVar6,uVar1);
      func_0x0001083f2c1c();
      func_0x0001083f2c24();
      func_0x0001083f2b64();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
      func_0x0001083f2cc0();
      puVar5 = auStack_b8;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5);
  }
  *param_1 = 0;
  return;
}



/* Entry: 1083f1618; end: 1083f165b;  */

long * FUN_1083f1618(long *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_2 + 8);
  FUN_1083c5ae8();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001083f1648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return param_1;
  }
  return (long *)0x1;
}



/* Entry: 1083f165c; end: 1083f1733;  */

uint FUN_1083f165c(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  (**(code **)(*param_1 + 0x50))();
  plVar2 = param_1;
  func_0x0001083f2b4c();
  if ((uint)plVar2 < 3) {
    func_0x0001083c6674();
    plVar2 = param_3;
    (**(code **)(*param_3 + 0x20))();
    if ((int)plVar2 != 0) {
      plVar2 = (long *)param_3[2];
      (**(code **)(*plVar2 + 0xe8))();
      if (((ulong)plVar2 & 1) == 0) {
        uVar1 = (uint)param_3[2];
        func_0x0001083f2b58();
        uVar6 = 0;
        uVar5 = 0;
        while (uVar4 = (uint)uVar5, (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar4) {
          plVar2 = param_3;
          (**(code **)(*param_3 + 0x28))(param_3);
          if ((uVar5 & 1) != 0) {
            plVar3 = param_1;
            FUN_1083f1734(plVar2,param_1,param_2,(int)param_3[1]);
            uVar6 = (uint)plVar3 | uVar6;
          }
          uVar5 = (ulong)(uVar4 + 1);
        }
        goto LAB_1083f16c8;
      }
    }
  }
  uVar6 = 0;
LAB_1083f16c8:
  return uVar6 & 1;
}



/* Entry: 1083f1734; end: 1083f1847;  */

undefined8 FUN_1083f1734(double param_1,long *param_2,long param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [23];
  undefined1 uStack_41;
  
  plVar1 = param_2;
  dVar3 = param_1;
  func_0x0001083f2b4c();
  if ((2 < (uint)plVar1) ||
     (((**(code **)(*param_2 + 0x70))(param_2), dVar3 <= param_1 &&
      ((**(code **)(*param_2 + 0x78))(param_2), param_1 <= dVar3)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    func_0x0001083f2cd8(auStack_70);
    FUN_1083d4028(auStack_58,&UNK_10f493d75);
    func_0x0001083f2ce8(uStack_41);
    FUN_1083c8a60(uVar2,param_4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1083f1848; end: 1083f197f;  */

undefined8 FUN_1083f1848(long param_1,long param_2,undefined4 param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [23];
  undefined1 uStack_31;
  
  lVar2 = param_1;
  func_0x0001083f2d38();
  if ((int)lVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 0x2c);
    if (0xf < bVar1) {
      return 1;
    }
    if ((1 << (ulong)(bVar1 & 0x1f) & 0xe4c0U) != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      uStack_88 = *(undefined8 *)(param_1 + 0x18);
      uStack_90 = *(undefined8 *)(param_1 + 0x10);
      func_0x000107c27958(auStack_78,&uStack_90);
      func_0x0001004c3cd0(auStack_60,&UNK_10f493ad4,auStack_78);
      func_0x00010048a6c8(auStack_48,auStack_60,&UNK_10f493df2);
      func_0x0001083f2ce8(uStack_31);
      FUN_1083c8a60(uVar3,param_3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
      func_0x0001083f2b90();
      func_0x0001083f2c04();
      return 0;
    }
    if (bVar1 != 0xc) {
      return 1;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    puVar4 = &UNK_10f493dca;
    uVar5 = 0x27;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    puVar4 = &UNK_10f493d9f;
    uVar5 = 0x2a;
  }
  FUN_1083c8a60(uVar3,param_3,puVar4,uVar5);
  return 0;
}



/* Entry: 1083f1980; end: 1083f1a77;  */

void FUN_1083f1980(undefined8 param_1,long *param_2,undefined4 param_3,ulong *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar1 = *(undefined8 *)(*param_2 + 0x40);
  uStack_40 = *param_4;
  *param_4 = 0;
  FUN_1083f1310(&uStack_38,uVar1,&uStack_40,param_2);
  uVar3 = uStack_38;
  uStack_38 = 0;
  uVar2 = *param_4;
  *param_4 = uVar3;
  if (uVar2 != 0) {
    func_0x0001083f2a18();
    uVar3 = uStack_38;
    uStack_38 = 0;
    if (uVar3 != 0) {
      func_0x0001083f2a18();
    }
  }
  if (uStack_40 != 0) {
    func_0x0001083f2a18();
  }
  uVar3 = *param_4;
  if (uVar3 != 0) {
    FUN_1083c6640(uVar3,&uStack_38);
    if ((uVar3 & 1) == 0) {
      FUN_1083c8a60(param_2[2],*(undefined4 *)(*param_4 + 8),&UNK_10f493e10,0x1d);
    }
    else {
      FUN_1083f1a78(param_1,param_2,param_3,*(undefined4 *)(*param_4 + 8),uStack_38);
    }
  }
  return;
}



/* Entry: 1083f1a78; end: 1083f1b1f;  */

long FUN_1083f1a78(long *param_1,long param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  plVar1 = param_1;
  FUN_1083f1848(param_1,param_2,param_3);
  if ((int)plVar1 != 0) {
    if (param_5 < 1) {
      puVar2 = &UNK_10f493e2e;
      uVar3 = 0x1b;
    }
    else {
      plVar1 = param_1;
      (**(code **)(*param_1 + 0x120))();
      if (((ulong)plVar1 & 1) != 0) {
        return param_5;
      }
      (**(code **)(*param_1 + 0x80))();
      func_0x000108410038();
      if (param_1 < (long *)0x186a1) {
        return param_5;
      }
      puVar2 = &UNK_10f493e4a;
      uVar3 = 0x17;
    }
    FUN_1083c8a60(*(undefined8 *)(param_2 + 0x10),param_4,puVar2,uVar3);
  }
  return 0;
}



/* Entry: 1083f1b20; end: 1083f1c57;  */

void FUN_1083f1b20(undefined8 param_1,long param_2)

{
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  FUN_1083e7ea0(auStack_98,param_2 + 4);
  FUN_1083e8988(auStack_b0,param_2 + 0x38);
  func_0x00010533a9c0(auStack_80,auStack_98,auStack_b0);
  FUN_10831d8f8(auStack_c8,*(undefined8 *)(param_2 + 0x50));
  func_0x00010533a9c0(auStack_68,auStack_80,auStack_c8);
  func_0x000107525ea8(auStack_50,auStack_68,0x20);
  func_0x000107c27958(auStack_e0,param_2 + 0x40);
  func_0x00010533a9c0(auStack_38,auStack_50,auStack_e0);
  func_0x000107525ea8(param_1,auStack_38,0x3b);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  func_0x0001083f2c8c();
  func_0x0001083f2ca4();
  func_0x0001083f2c04();
  func_0x0001083f2d74();
  func_0x0001083f2b90();
  func_0x0001083f2c3c();
  return;
}



/* Entry: 1083f1c58; end: 1083f1c9f;  */

undefined8 *
FUN_1083f1c58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6)

{
  *(undefined4 *)(param_1 + 1) = param_6;
  *(undefined4 *)((long)param_1 + 0xc) = 10;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_110a45f58;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = param_5;
  _strcpy(param_1 + 5,param_4);
  return param_1;
}



/* Entry: 1083f1ca0; end: 1083f1cd7;  */

void FUN_1083f1ca0(void)

{
  return;
}



/* Entry: 1083f1cd8; end: 1083f1d1b;  */

bool FUN_1083f1cd8(long *param_1,long *param_2)

{
  (**(code **)(*param_1 + 0x30))();
  (**(code **)(*param_2 + 0x30))(param_2);
  return param_1 == param_2;
}



/* Entry: 1083f1d1c; end: 1083f1d5b;  */

undefined8 FUN_1083f1d1c(void)

{
  return 4;
}



/* Entry: 1083f1d5c; end: 1083f1d87;  */

void FUN_1083f1d5c(void)

{
  code *pcVar1;
  
  FUN_10841076c(&UNK_10f493e62);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083f1d88);
  (*pcVar1)();
}



/* Entry: 1083f1d88; end: 1083f1de3;  */

undefined1  [16] FUN_1083f1d88(void)

{
  return ZEXT816(0);
}



/* Entry: 1083f1de4; end: 1083f1e17;  */

void FUN_1083f1de4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001083f2b08();
  *param_1 = &PTR_FUN_110a460c0;
  param_1[6] = param_4;
  return;
}



/* Entry: 1083f1e18; end: 1083f1f77;  */

void FUN_1083f1e18(void)

{
  return;
}



/* Entry: 1083f1f78; end: 1083f1f97;  */

void FUN_1083f1f78(void)

{
  func_0x0001083f2b78();
  FUN_1083f1f98();
  return;
}



/* Entry: 1083f1f98; end: 1083f1faf;  */

void FUN_1083f1f98(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  FUN_1083d3bc4(plVar1);
  if (*plVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083f1fb0; end: 1083f1fef;  */

void FUN_1083f1fb0(undefined8 *param_1)

{
  undefined8 in_x4;
  undefined1 unaff_w19;
  undefined4 unaff_w20;
  
  func_0x0001083f2dac();
  func_0x0001083f2b08();
  *param_1 = &PTR_FUN_110a46228;
  param_1[6] = in_x4;
  *(undefined4 *)(param_1 + 7) = unaff_w20;
  *(undefined1 *)((long)param_1 + 0x3c) = unaff_w19;
  return;
}



/* Entry: 1083f1ff0; end: 1083f2013;  */

void FUN_1083f1ff0(void)

{
  return;
}



/* Entry: 1083f2014; end: 1083f2097;  */

long * FUN_1083f2014(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  (**(code **)(*param_2 + 0x30))();
  plVar2 = param_2;
  func_0x0001083f2d38();
  if (((int)plVar2 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x38), func_0x0001083f2ab8(*(undefined8 *)(*param_2 + 0x60)),
     iVar1 == (int)plVar2)) {
    plVar3 = *(long **)(param_1 + 0x30);
    func_0x0001083f2cc8();
                    /* WARNING: Could not recover jumptable at 0x0001083f2080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
    return plVar3;
  }
  return (long *)0x0;
}



/* Entry: 1083f2098; end: 1083f20a3;  */

undefined8 FUN_1083f2098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1083f20a4; end: 1083f210b;  */

long FUN_1083f20a4(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x0001083f2b58(lVar2);
  return lVar2 * iVar1;
}



/* Entry: 1083f210c; end: 1083f214b;  */

undefined8 FUN_1083f210c(void)

{
  return 1;
}



/* Entry: 1083f214c; end: 1083f216b;  */

void FUN_1083f214c(void)

{
  func_0x0001083f2b78();
  FUN_1083f216c();
  return;
}



/* Entry: 1083f216c; end: 1083f2183;  */

void FUN_1083f216c(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  FUN_1083d3bc4(plVar1);
  if (*plVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083f2184; end: 1083f21fb;  */

undefined8 *
FUN_1083f2184(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001083f2c2c();
  func_0x0001083f2b08(param_1,param_2,puVar1,&UNK_10f493ee4,2);
  *param_1 = &PTR_FUN_110a46390;
  param_1[0xf] = param_5;
  param_1[0x10] = param_4;
  if (param_4 != 0) {
    _memmove(param_1 + 6,param_3,param_4 << 3);
  }
  return param_1;
}



/* Entry: 1083f21fc; end: 1083f2217;  */

void FUN_1083f21fc(void)

{
  return;
}



/* Entry: 1083f2218; end: 1083f2237;  */

void FUN_1083f2218(void)

{
  func_0x0001083f2b78();
  FUN_1083f2238();
  return;
}



/* Entry: 1083f2238; end: 1083f224f;  */

void FUN_1083f2238(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  FUN_1083d3bc4(plVar1);
  if (*plVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083f2250; end: 1083f22a7;  */

void FUN_1083f2250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *unaff_x22;
  
  func_0x0001083f2db8();
  func_0x0001083f2c2c();
  func_0x0001083f2b08();
  *unaff_x22 = &PTR_FUN_110a464f8;
  unaff_x22[6] = param_3;
  *(undefined1 *)(unaff_x22 + 7) = param_4;
  return;
}



/* Entry: 1083f22a8; end: 1083f22fb;  */

void FUN_1083f22a8(void)

{
  return;
}



/* Entry: 1083f22fc; end: 1083f231b;  */

bool FUN_1083f22fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x0001083f2b4c(uVar1);
  return (int)uVar1 == 3;
}



/* Entry: 1083f231c; end: 1083f235b;  */

void FUN_1083f231c(undefined8 *param_1)

{
  undefined8 in_x4;
  undefined1 unaff_w19;
  undefined1 unaff_w20;
  
  func_0x0001083f2dac();
  func_0x0001083f2b08();
  *param_1 = &PTR_FUN_110a46660;
  param_1[6] = in_x4;
  *(undefined1 *)(param_1 + 7) = unaff_w20;
  *(undefined1 *)((long)param_1 + 0x39) = unaff_w19;
  return;
}



/* Entry: 1083f235c; end: 1083f23a7;  */

void FUN_1083f235c(void)

{
  return;
}



/* Entry: 1083f23a8; end: 1083f23c7;  */

void FUN_1083f23a8(void)

{
  func_0x0001083f2b78();
  FUN_1083f23c8();
  return;
}


