/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044106dc; end: 1044108a7;  */

void FUN_1044106dc(int *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar3 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar1 = *(long *)(lVar8 + 0x40) + 7;
  lVar2 = (lVar1 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x108;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    uVar11 = 0;
    iVar6 = param_2 - uVar3;
    if (uVar3 <= param_2 && iVar6 != 0) goto LAB_104410798;
  }
  else {
    uVar10 = 2;
    uVar4 = uVar10;
    if ((int)lVar2 == 0) {
      uVar4 = (param_3 - uVar3) + 1;
    }
    if (0xffff < uVar4) {
      uVar10 = 4;
    }
    if (uVar4 < 0x100) {
      uVar10 = 1;
    }
    uVar11 = 0;
    if (1 < uVar4) {
      uVar11 = uVar10;
    }
    iVar6 = param_2 - uVar3;
    if (uVar3 <= param_2 && iVar6 != 0) {
LAB_104410798:
      if ((int)lVar2 != 0) {
        iVar6 = 1;
        _bzero(param_1,lVar2);
        *param_1 = param_2 + ~uVar3;
      }
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          return;
        }
        *(char *)((long)param_1 + lVar2) = (char)iVar6;
        return;
      }
      if (uVar11 == 2) {
        *(short *)((long)param_1 + lVar2) = (short)iVar6;
        return;
      }
      *(int *)((long)param_1 + lVar2) = iVar6;
      return;
    }
  }
  if (uVar11 < 2) {
    if (uVar11 != 0) {
      *(undefined1 *)((long)param_1 + lVar2) = 0;
    }
  }
  else if (uVar11 == 2) {
    *(undefined2 *)((long)param_1 + lVar2) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + lVar2) = 0;
  }
  if (param_2 != 0) {
    if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000104410814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar8 + 0x38))();
      return;
    }
    puVar7 = (ulong *)(lVar1 + ((long)param_1 + uVar9 + 0x10 & ~uVar9) & 0xfffffffffffffff8);
    if ((int)param_2 < 0) {
      puVar7[0x1a] = 0;
      puVar7[0x19] = 0;
      puVar7[0x18] = 0;
      puVar7[0x17] = 0;
      puVar7[0x16] = 0;
      puVar7[0x15] = 0;
      puVar7[0x14] = 0;
      puVar7[0x13] = 0;
      puVar7[0x12] = 0;
      puVar7[0x11] = 0;
      puVar7[0x10] = 0;
      puVar7[0xf] = 0;
      puVar7[0xe] = 0;
      puVar7[0xd] = 0;
      puVar7[0xc] = 0;
      puVar7[0xb] = 0;
      puVar7[10] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[7] = 0;
      puVar7[6] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[1] = 0;
      *puVar7 = (ulong)(param_2 & 0x7fffffff);
    }
    else {
      puVar7[1] = (ulong)(param_2 - 1);
    }
  }
  return;
}



/* Entry: 1044108a8; end: 1044108c7;  */

void FUN_1044108a8(void)

{
  _objc_opt_self(&PTR_PTR_1129b03f8);
  return;
}



/* Entry: 1044108c8; end: 104410907;  */

void FUN_1044108c8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 104410908; end: 1044109f3;  */

void FUN_104410908(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 == 0) {
    return;
  }
  puVar3 = (undefined8 *)(param_1 + 0x20);
LAB_10441093c:
  do {
    uVar2 = *puVar3;
    switch(uVar2) {
    case 0:
      uVar2 = 0;
      break;
    case 1:
      uVar2 = 1;
      break;
    case 2:
      uVar2 = 2;
      break;
    case 3:
      uVar2 = 3;
      break;
    case 4:
      uVar2 = 4;
      break;
    case 5:
      uVar2 = 5;
      break;
    case 6:
      uVar2 = 6;
      break;
    case 7:
      uVar2 = 7;
      break;
    case 8:
      uVar2 = 8;
      break;
    case 9:
      uVar2 = 9;
      break;
    case 10:
      uVar2 = 0xb;
      break;
    default:
      goto LAB_1044109bc;
    }
    __ss6HasherV8_combineyySuF(uVar2);
    lVar1 = lVar1 + -1;
    puVar3 = puVar3 + 1;
    if (lVar1 == 0) {
      return;
    }
  } while( true );
LAB_1044109bc:
  __ss6HasherV8_combineyySuF(10);
  _swift_bridgeObjectRetain(uVar2);
  FUN_104410908();
  func_0x00010321d6b8(uVar2);
  lVar1 = lVar1 + -1;
  puVar3 = puVar3 + 1;
  if (lVar1 == 0) {
    return;
  }
  goto LAB_10441093c;
}



/* Entry: 1044109f4; end: 1044109f7;  */

undefined8 FUN_1044109f4(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  switch(param_1) {
  case 0:
    if (param_2 == 0) {
      return 1;
    }
    break;
  case 1:
    if (param_2 == 1) {
      return 1;
    }
    break;
  case 2:
    if (param_2 == 2) {
      return 1;
    }
    break;
  case 3:
    if (param_2 == 3) {
      return 1;
    }
    break;
  case 4:
    if (param_2 == 4) {
      return 1;
    }
    break;
  case 5:
    if (param_2 == 5) {
      return 1;
    }
    break;
  case 6:
    if (param_2 == 6) {
      return 1;
    }
    break;
  case 7:
    if (param_2 == 7) {
      return 1;
    }
    break;
  case 8:
    if (param_2 == 8) {
      return 1;
    }
    break;
  case 9:
    if (param_2 == 9) {
      return 1;
    }
    break;
  case 10:
    if (param_2 == 10) {
      return 1;
    }
    break;
  default:
    if (10 < param_2) {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == *(long *)(param_2 + 0x10)) {
        if ((lVar5 != 0) && (param_1 != param_2)) {
          puVar6 = (ulong *)(param_1 + 0x20);
          puVar7 = (ulong *)(param_2 + 0x20);
          do {
            uVar4 = *puVar6;
            uVar3 = *puVar7;
            switch(uVar4) {
            case 0:
              if (uVar3 != 0) goto LAB_10440dbe0;
              break;
            case 1:
              if (uVar3 != 1) goto LAB_10440dbe0;
              break;
            case 2:
              if (uVar3 != 2) goto LAB_10440dbe0;
              break;
            case 3:
              if (uVar3 != 3) goto LAB_10440dbe0;
              break;
            case 4:
              if (uVar3 != 4) goto LAB_10440dbe0;
              break;
            case 5:
              if (uVar3 != 5) goto LAB_10440dbe0;
              break;
            case 6:
              if (uVar3 != 6) goto LAB_10440dbe0;
              break;
            case 7:
              if (uVar3 != 7) goto LAB_10440dbe0;
              break;
            case 8:
              if (uVar3 != 8) goto LAB_10440dbe0;
              break;
            case 9:
              if (uVar3 != 9) goto LAB_10440dbe0;
              break;
            case 10:
              if (uVar3 != 10) goto LAB_10440dbe0;
              break;
            default:
              if (uVar3 < 0xb) goto LAB_10440dbe0;
              func_0x000103202330(uVar3);
              func_0x000103202330(uVar4);
              uVar1 = uVar4;
              FUN_10440dab8(uVar4,uVar3);
              func_0x00010321d6b8(uVar3);
              func_0x00010321d6b8(uVar4);
              if ((uVar1 & 1) == 0) goto LAB_10440dbe0;
            }
            lVar5 = lVar5 + -1;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          } while (lVar5 != 0);
        }
        uVar2 = 1;
      }
      else {
LAB_10440dbe0:
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 1044109f8; end: 104410ae7;  */

void FUN_1044109f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    uVar1 = 3;
    break;
  case 4:
    uVar1 = 4;
    break;
  case 5:
    uVar1 = 5;
    break;
  case 6:
    uVar1 = 6;
    break;
  case 7:
    uVar1 = 7;
    break;
  case 8:
    uVar1 = 8;
    break;
  case 9:
    uVar1 = 9;
    break;
  case 10:
    uVar1 = 0xb;
    break;
  default:
    __ss6HasherV8_combineyySuF(10);
    FUN_104410908(param_2);
    return;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  return;
}



/* Entry: 104410ae8; end: 104410aef;  */

void FUN_104410ae8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  switch(uVar1) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    uVar1 = 3;
    break;
  case 4:
    uVar1 = 4;
    break;
  case 5:
    uVar1 = 5;
    break;
  case 6:
    uVar1 = 6;
    break;
  case 7:
    uVar1 = 7;
    break;
  case 8:
    uVar1 = 8;
    break;
  case 9:
    uVar1 = 9;
    break;
  case 10:
    uVar1 = 0xb;
    break;
  default:
    __ss6HasherV8_combineyySuF(10);
    FUN_104410908(uVar1);
    return;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  return;
}



/* Entry: 104410af0; end: 104410b2f;  */

void FUN_104410af0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1044109f8(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104410b30; end: 104410c1f;  */

undefined8 FUN_104410b30(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  switch(uVar3) {
  case 0:
    if (uVar4 == 0) {
      return 1;
    }
    break;
  case 1:
    if (uVar4 == 1) {
      return 1;
    }
    break;
  case 2:
    if (uVar4 == 2) {
      return 1;
    }
    break;
  case 3:
    if (uVar4 == 3) {
      return 1;
    }
    break;
  case 4:
    if (uVar4 == 4) {
      return 1;
    }
    break;
  case 5:
    if (uVar4 == 5) {
      return 1;
    }
    break;
  case 6:
    if (uVar4 == 6) {
      return 1;
    }
    break;
  case 7:
    if (uVar4 == 7) {
      return 1;
    }
    break;
  case 8:
    if (uVar4 == 8) {
      return 1;
    }
    break;
  case 9:
    if (uVar4 == 9) {
      return 1;
    }
    break;
  case 10:
    if (uVar4 == 10) {
      return 1;
    }
    break;
  default:
    if (10 < uVar4) {
      lVar5 = *(long *)(uVar3 + 0x10);
      if (lVar5 == *(long *)(uVar4 + 0x10)) {
        if ((lVar5 != 0) && (uVar3 != uVar4)) {
          puVar6 = (ulong *)(uVar3 + 0x20);
          puVar7 = (ulong *)(uVar4 + 0x20);
          do {
            uVar4 = *puVar6;
            uVar3 = *puVar7;
            switch(uVar4) {
            case 0:
              if (uVar3 != 0) goto LAB_10440dbe0;
              break;
            case 1:
              if (uVar3 != 1) goto LAB_10440dbe0;
              break;
            case 2:
              if (uVar3 != 2) goto LAB_10440dbe0;
              break;
            case 3:
              if (uVar3 != 3) goto LAB_10440dbe0;
              break;
            case 4:
              if (uVar3 != 4) goto LAB_10440dbe0;
              break;
            case 5:
              if (uVar3 != 5) goto LAB_10440dbe0;
              break;
            case 6:
              if (uVar3 != 6) goto LAB_10440dbe0;
              break;
            case 7:
              if (uVar3 != 7) goto LAB_10440dbe0;
              break;
            case 8:
              if (uVar3 != 8) goto LAB_10440dbe0;
              break;
            case 9:
              if (uVar3 != 9) goto LAB_10440dbe0;
              break;
            case 10:
              if (uVar3 != 10) goto LAB_10440dbe0;
              break;
            default:
              if (uVar3 < 0xb) goto LAB_10440dbe0;
              func_0x000103202330(uVar3);
              func_0x000103202330(uVar4);
              uVar1 = uVar4;
              FUN_10440dab8(uVar4,uVar3);
              func_0x00010321d6b8(uVar3);
              func_0x00010321d6b8(uVar4);
              if ((uVar1 & 1) == 0) goto LAB_10440dbe0;
            }
            lVar5 = lVar5 + -1;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          } while (lVar5 != 0);
        }
        uVar2 = 1;
      }
      else {
LAB_10440dbe0:
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 104410c20; end: 104410c5f;  */

void FUN_104410c20(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077ae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa144;
  _swift_getWitnessTable(&UNK_10dcfa144,&UNK_11076a028);
  puRam0000000113077ae8 = puVar1;
  return;
}



/* Entry: 104410c60; end: 104410c77;  */

void FUN_104410c60(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 104410c78; end: 104410d6b;  */

ulong * FUN_104410c78(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (uVar1 < 0xffffffff) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      _swift_bridgeObjectRetain();
    }
  }
  else if (uVar1 < 0xffffffff) {
    _swift_bridgeObjectRelease(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
  }
  return param_1;
}



/* Entry: 104410d6c; end: 104410e67;  */

int FUN_104410d6c(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff4 < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffff5;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (0xb < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -10;
  }
  return iVar1;
}



/* Entry: 104410e68; end: 10441101b;  */

void FUN_104410e68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
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
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  iVar3 = (int)&uStack_1b0;
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  lVar5 = unaff_x20[2];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar4 = *(long *)(lVar5 + 0x10);
    __ss6HasherV8_combineyySuF(lVar4);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0x28);
      do {
        uVar1 = puVar6[-1];
        uVar2 = *puVar6;
        _swift_bridgeObjectRetain(uVar2);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
        _swift_bridgeObjectRelease(uVar2);
        puVar6 = puVar6 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  uStack_138 = unaff_x20[0x12];
  uStack_140 = unaff_x20[0x11];
  uStack_128 = unaff_x20[0x14];
  uStack_130 = unaff_x20[0x13];
  uStack_120 = unaff_x20[0x15];
  uStack_118 = (undefined1)unaff_x20[0x16];
  uStack_10f = *(undefined8 *)((long)unaff_x20 + 0xb9);
  uStack_117 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0xb1);
  uStack_110 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0xb1) >> 0x38);
  uStack_178 = unaff_x20[10];
  uStack_180 = unaff_x20[9];
  uStack_168 = unaff_x20[0xc];
  uStack_170 = unaff_x20[0xb];
  uStack_158 = unaff_x20[0xe];
  uStack_160 = unaff_x20[0xd];
  uStack_148 = unaff_x20[0x10];
  uStack_150 = unaff_x20[0xf];
  uStack_1a8 = unaff_x20[4];
  uStack_1b0 = unaff_x20[3];
  uStack_198 = unaff_x20[6];
  uStack_1a0 = unaff_x20[5];
  uStack_188 = unaff_x20[8];
  uStack_190 = unaff_x20[7];
  func_0x000103233944();
  if (iVar3 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[0x19];
  }
  else {
    uStack_78 = uStack_128;
    uStack_80 = uStack_130;
    uStack_68 = uStack_118;
    uStack_70 = uStack_120;
    uStack_5f = uStack_10f;
    uStack_67 = uStack_117;
    uStack_60 = uStack_110;
    uStack_b8 = uStack_168;
    uStack_c0 = uStack_170;
    uStack_a8 = uStack_158;
    uStack_b0 = uStack_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    uStack_88 = uStack_138;
    uStack_90 = uStack_140;
    uStack_f8 = uStack_1a8;
    uStack_100 = uStack_1b0;
    uStack_e8 = uStack_198;
    uStack_f0 = uStack_1a0;
    uStack_d8 = uStack_188;
    uStack_e0 = uStack_190;
    uStack_c8 = uStack_178;
    uStack_d0 = uStack_180;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1044122ac(param_1);
    lVar5 = unaff_x20[0x19];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar5);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar5);
  }
  FUN_1044109f8(param_1,unaff_x20[0x1a]);
  return;
}



/* Entry: 10441101c; end: 104411057;  */

void FUN_10441101c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104410e68(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104411058; end: 10441105b;  */

void FUN_104411058(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
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
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  iVar3 = (int)&uStack_1b0;
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  lVar5 = unaff_x20[2];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar4 = *(long *)(lVar5 + 0x10);
    __ss6HasherV8_combineyySuF(lVar4);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0x28);
      do {
        uVar1 = puVar6[-1];
        uVar2 = *puVar6;
        _swift_bridgeObjectRetain(uVar2);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
        _swift_bridgeObjectRelease(uVar2);
        puVar6 = puVar6 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  uStack_138 = unaff_x20[0x12];
  uStack_140 = unaff_x20[0x11];
  uStack_128 = unaff_x20[0x14];
  uStack_130 = unaff_x20[0x13];
  uStack_120 = unaff_x20[0x15];
  uStack_118 = (undefined1)unaff_x20[0x16];
  uStack_10f = *(undefined8 *)((long)unaff_x20 + 0xb9);
  uStack_117 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0xb1);
  uStack_110 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0xb1) >> 0x38);
  uStack_178 = unaff_x20[10];
  uStack_180 = unaff_x20[9];
  uStack_168 = unaff_x20[0xc];
  uStack_170 = unaff_x20[0xb];
  uStack_158 = unaff_x20[0xe];
  uStack_160 = unaff_x20[0xd];
  uStack_148 = unaff_x20[0x10];
  uStack_150 = unaff_x20[0xf];
  uStack_1a8 = unaff_x20[4];
  uStack_1b0 = unaff_x20[3];
  uStack_198 = unaff_x20[6];
  uStack_1a0 = unaff_x20[5];
  uStack_188 = unaff_x20[8];
  uStack_190 = unaff_x20[7];
  func_0x000103233944();
  if (iVar3 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[0x19];
  }
  else {
    uStack_78 = uStack_128;
    uStack_80 = uStack_130;
    uStack_68 = uStack_118;
    uStack_70 = uStack_120;
    uStack_5f = uStack_10f;
    uStack_67 = uStack_117;
    uStack_60 = uStack_110;
    uStack_b8 = uStack_168;
    uStack_c0 = uStack_170;
    uStack_a8 = uStack_158;
    uStack_b0 = uStack_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    uStack_88 = uStack_138;
    uStack_90 = uStack_140;
    uStack_f8 = uStack_1a8;
    uStack_100 = uStack_1b0;
    uStack_e8 = uStack_198;
    uStack_f0 = uStack_1a0;
    uStack_d8 = uStack_188;
    uStack_e0 = uStack_190;
    uStack_c8 = uStack_178;
    uStack_d0 = uStack_180;
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1044122ac(param_1);
    lVar5 = unaff_x20[0x19];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar5);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar5);
  }
  FUN_1044109f8(param_1,unaff_x20[0x1a]);
  return;
}



/* Entry: 10441105c; end: 104411093;  */

void FUN_10441105c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104410e68(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104411094; end: 104411143;  */

uint FUN_104411094(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
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
  undefined8 uStack_168;
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
  
  uVar1 = 0;
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_110 = param_1[0x1a];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_58 = param_2[0x15];
  uStack_60 = param_2[0x14];
  uStack_48 = param_2[0x17];
  uStack_50 = param_2[0x16];
  uStack_38 = param_2[0x19];
  uStack_40 = param_2[0x18];
  uStack_30 = param_2[0x1a];
  uStack_98 = param_2[0xd];
  uStack_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_78 = param_2[0x11];
  uStack_80 = param_2[0x10];
  uStack_68 = param_2[0x13];
  uStack_70 = param_2[0x12];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_b8 = param_2[9];
  uStack_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  FUN_104411144(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 104411144; end: 1044115ef;  */

uint FUN_104411144(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auStack_730 [176];
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  undefined1 uStack_5e8;
  undefined7 uStack_5e7;
  undefined1 uStack_5e0;
  undefined8 uStack_5df;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  undefined1 uStack_538;
  undefined7 uStack_537;
  undefined1 uStack_530;
  undefined8 uStack_52f;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  undefined1 uStack_488;
  undefined7 uStack_487;
  undefined1 uStack_480;
  undefined8 uStack_47f;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined8 uStack_31f;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined8 uStack_26f;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  uVar4 = *param_1;
  if ((uVar4 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar4 & 1) != 0)) {
    uVar4 = param_1[2];
    uVar7 = param_2[2];
    if (uVar4 == 0) {
      if (uVar7 == 0) goto LAB_1044111fc;
    }
    else if ((uVar7 != 0) && (lVar8 = *(long *)(uVar4 + 0x10), lVar8 == *(long *)(uVar7 + 0x10))) {
      if (lVar8 != 0 && uVar4 != uVar7) {
        plVar9 = (long *)(uVar7 + 0x28);
        plVar10 = (long *)(uVar4 + 0x28);
        do {
          uVar4 = plVar10[-1];
          if ((uVar4 != plVar9[-1] || *plVar10 != *plVar9) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar4 & 1) == 0)) goto LAB_104411468;
          plVar9 = plVar9 + 2;
          plVar10 = plVar10 + 2;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
LAB_1044111fc:
      uStack_138 = param_1[0x12];
      uStack_140 = param_1[0x11];
      uStack_128 = param_1[0x14];
      uStack_130 = param_1[0x13];
      uStack_120 = param_1[0x15];
      uStack_118 = (undefined1)param_1[0x16];
      uStack_10f = *(undefined8 *)((long)param_1 + 0xb9);
      uStack_117 = (undefined7)*(undefined8 *)((long)param_1 + 0xb1);
      uStack_110 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xb1) >> 0x38);
      uStack_178 = param_1[10];
      uStack_180 = param_1[9];
      uStack_168 = param_1[0xc];
      uStack_170 = param_1[0xb];
      uStack_158 = param_1[0xe];
      uStack_160 = param_1[0xd];
      uStack_148 = param_1[0x10];
      uStack_150 = param_1[0xf];
      uStack_1a8 = param_1[4];
      uStack_1b0 = param_1[3];
      uStack_198 = param_1[6];
      uStack_1a0 = param_1[5];
      uStack_188 = param_1[8];
      uStack_190 = param_1[7];
      uStack_1e8 = param_2[0x12];
      uStack_1f0 = param_2[0x11];
      uStack_1d8 = param_2[0x14];
      uStack_1e0 = param_2[0x13];
      uStack_1d0 = param_2[0x15];
      uStack_1c8 = (undefined1)param_2[0x16];
      uStack_1bf = *(undefined8 *)((long)param_2 + 0xb9);
      uStack_1c7 = (undefined7)*(undefined8 *)((long)param_2 + 0xb1);
      uStack_1c0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xb1) >> 0x38);
      uStack_228 = param_2[10];
      uStack_230 = param_2[9];
      uStack_218 = param_2[0xc];
      uStack_220 = param_2[0xb];
      uStack_208 = param_2[0xe];
      uStack_210 = param_2[0xd];
      uStack_1f8 = param_2[0x10];
      uStack_200 = param_2[0xf];
      uStack_258 = param_2[4];
      uStack_260 = param_2[3];
      uStack_248 = param_2[6];
      uStack_250 = param_2[5];
      uStack_238 = param_2[8];
      uStack_240 = param_2[7];
      iVar2 = (int)&uStack_310;
      uStack_348 = param_1[0x12];
      uStack_350 = param_1[0x11];
      uStack_338 = param_1[0x14];
      uStack_340 = param_1[0x13];
      uStack_330 = param_1[0x15];
      uStack_328 = (undefined1)param_1[0x16];
      uStack_31f = *(undefined8 *)((long)param_1 + 0xb9);
      uStack_327 = (undefined7)*(undefined8 *)((long)param_1 + 0xb1);
      uStack_320 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xb1) >> 0x38);
      uStack_388 = param_1[10];
      uStack_390 = param_1[9];
      uStack_378 = param_1[0xc];
      uStack_380 = param_1[0xb];
      uStack_368 = param_1[0xe];
      uStack_370 = param_1[0xd];
      uStack_358 = param_1[0x10];
      uStack_360 = param_1[0xf];
      uStack_3b8 = param_1[4];
      uStack_3c0 = param_1[3];
      uStack_3a8 = param_1[6];
      uStack_3b0 = param_1[5];
      uStack_398 = param_1[8];
      uStack_3a0 = param_1[7];
      uStack_26f = *(undefined8 *)((long)param_2 + 0xb9);
      uStack_270 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xb1) >> 0x38);
      uStack_298 = param_2[0x12];
      uStack_2a0 = param_2[0x11];
      uStack_288 = param_2[0x14];
      uStack_290 = param_2[0x13];
      uStack_280 = param_2[0x15];
      uStack_278 = (undefined1)param_2[0x16];
      uStack_277 = (undefined7)(param_2[0x16] >> 8);
      uStack_2d8 = param_2[10];
      uStack_2e0 = param_2[9];
      uStack_2c8 = param_2[0xc];
      uStack_2d0 = param_2[0xb];
      uStack_2b8 = param_2[0xe];
      uStack_2c0 = param_2[0xd];
      uStack_2a8 = param_2[0x10];
      uStack_2b0 = param_2[0xf];
      uStack_308 = param_2[4];
      uStack_310 = param_2[3];
      uStack_2f8 = param_2[6];
      uStack_300 = param_2[5];
      uStack_2e8 = param_2[8];
      uStack_2f0 = param_2[7];
      iVar1 = (int)&uStack_3c0;
      func_0x000103233944();
      if (iVar1 == 1) {
        func_0x000103233944();
        if (iVar2 == 1) {
          uStack_498 = uStack_338;
          uStack_4a0 = uStack_340;
          uStack_488 = uStack_328;
          uStack_490 = uStack_330;
          uStack_47f = uStack_31f;
          uStack_487 = uStack_327;
          uStack_480 = uStack_320;
          uStack_4d8 = uStack_378;
          uStack_4e0 = uStack_380;
          uStack_4c8 = uStack_368;
          uStack_4d0 = uStack_370;
          uStack_4b8 = uStack_358;
          uStack_4c0 = uStack_360;
          uStack_4a8 = uStack_348;
          uStack_4b0 = uStack_350;
          uStack_518 = uStack_3b8;
          uStack_520 = uStack_3c0;
          uStack_508 = uStack_3a8;
          uStack_510 = uStack_3b0;
          uStack_4f8 = uStack_398;
          uStack_500 = uStack_3a0;
          uStack_4e8 = uStack_388;
          uStack_4f0 = uStack_390;
          func_0x000103223990(&uStack_1b0,&uStack_100);
          func_0x000103223990(&uStack_260,&uStack_100);
          FUN_104411f50(&uStack_520,0x112f4d5c8,&UNK_10db9f700);
LAB_104411580:
          uVar7 = param_1[0x19];
          uVar4 = param_2[0x19];
          if (uVar7 == 0) {
            if (uVar4 == 0) {
LAB_1044115e0:
              uVar4 = param_1[0x1a];
              func_0x000104410b3c(uVar4,param_2[0x1a]);
              uVar3 = (uint)uVar4;
              goto LAB_10441146c;
            }
          }
          else if (uVar4 != 0) {
            func_0x000100f115fc(0);
            _objc_retain(uVar4);
            _objc_retain();
            uVar6 = uVar7;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
            _objc_release(uVar7);
            _objc_release(uVar4);
            if ((uVar6 & 1) != 0) goto LAB_1044115e0;
          }
        }
        else {
LAB_104411428:
          _memcpy(&uStack_520,&uStack_3c0,0x159);
          func_0x000103223990(&uStack_1b0,&uStack_100);
          func_0x000103223990(&uStack_260,&uStack_100);
          FUN_104411f50(&uStack_520,0x113077af8,&UNK_10dcfa218);
        }
      }
      else {
        uStack_548 = uStack_338;
        uStack_550 = uStack_340;
        uStack_538 = uStack_328;
        uStack_540 = uStack_330;
        uStack_52f = uStack_31f;
        uStack_537 = uStack_327;
        uStack_530 = uStack_320;
        uStack_588 = uStack_378;
        uStack_590 = uStack_380;
        uStack_578 = uStack_368;
        uStack_580 = uStack_370;
        uStack_568 = uStack_358;
        uStack_570 = uStack_360;
        uStack_558 = uStack_348;
        uStack_560 = uStack_350;
        uStack_5c8 = uStack_3b8;
        uStack_5d0 = uStack_3c0;
        uStack_5b8 = uStack_3a8;
        uStack_5c0 = uStack_3b0;
        uStack_5a8 = uStack_398;
        uStack_5b0 = uStack_3a0;
        uStack_598 = uStack_388;
        uStack_5a0 = uStack_390;
        func_0x000103233944();
        if (iVar2 == 1) goto LAB_104411428;
        uStack_5f8 = uStack_288;
        uStack_600 = uStack_290;
        uStack_5e8 = uStack_278;
        uStack_5f0 = uStack_280;
        uStack_5df = uStack_26f;
        uStack_5e7 = uStack_277;
        uStack_5e0 = uStack_270;
        uStack_638 = uStack_2c8;
        uStack_640 = uStack_2d0;
        uStack_628 = uStack_2b8;
        uStack_630 = uStack_2c0;
        uStack_618 = uStack_2a8;
        uStack_620 = uStack_2b0;
        uStack_608 = uStack_298;
        uStack_610 = uStack_2a0;
        uStack_678 = uStack_308;
        uStack_680 = uStack_310;
        uStack_668 = uStack_2f8;
        uStack_670 = uStack_300;
        uStack_658 = uStack_2e8;
        uStack_660 = uStack_2f0;
        uStack_648 = uStack_2d8;
        uStack_650 = uStack_2e0;
        uStack_498 = uStack_288;
        uStack_4a0 = uStack_290;
        uStack_488 = uStack_278;
        uStack_490 = uStack_280;
        uStack_47f = uStack_26f;
        uStack_487 = uStack_277;
        uStack_480 = uStack_270;
        uStack_4d8 = uStack_2c8;
        uStack_4e0 = uStack_2d0;
        uStack_4c8 = uStack_2b8;
        uStack_4d0 = uStack_2c0;
        uStack_4b8 = uStack_2a8;
        uStack_4c0 = uStack_2b0;
        uStack_4a8 = uStack_298;
        uStack_4b0 = uStack_2a0;
        uStack_518 = uStack_308;
        uStack_520 = uStack_310;
        uStack_508 = uStack_2f8;
        uStack_510 = uStack_300;
        uStack_4f8 = uStack_2e8;
        uStack_500 = uStack_2f0;
        uStack_4e8 = uStack_2d8;
        uStack_4f0 = uStack_2e0;
        uStack_78 = uStack_548;
        uStack_80 = uStack_550;
        uStack_68 = uStack_538;
        uStack_70 = uStack_540;
        uStack_5f = uStack_52f;
        uStack_67 = uStack_537;
        uStack_60 = uStack_530;
        uStack_b8 = uStack_588;
        uStack_c0 = uStack_590;
        uStack_a8 = uStack_578;
        uStack_b0 = uStack_580;
        uStack_98 = uStack_568;
        uStack_a0 = uStack_570;
        uStack_88 = uStack_558;
        uStack_90 = uStack_560;
        uStack_f8 = uStack_5c8;
        uStack_100 = uStack_5d0;
        uStack_e8 = uStack_5b8;
        uStack_f0 = uStack_5c0;
        uStack_d8 = uStack_5a8;
        uStack_e0 = uStack_5b0;
        uStack_c8 = uStack_598;
        uStack_d0 = uStack_5a0;
        func_0x000103223990(&uStack_1b0,auStack_730);
        func_0x000103223990(&uStack_260,auStack_730);
        puVar5 = &uStack_100;
        FUN_104413834(puVar5,&uStack_520);
        FUN_104411f50(&uStack_680,0x112f4d5c8,&UNK_10db9f700);
        FUN_104411f50(&uStack_3c0,0x112f4d5c8,&UNK_10db9f700);
        if (((ulong)puVar5 & 1) != 0) goto LAB_104411580;
      }
    }
  }
LAB_104411468:
  uVar3 = 0;
LAB_10441146c:
  return uVar3 & 1;
}



/* Entry: 1044115f0; end: 1044115f3;  */

void FUN_1044115f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077af0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa1d0;
  _swift_getWitnessTable(&UNK_10dcfa1d0,&UNK_11076a0d8);
  puRam0000000113077af0 = puVar1;
  return;
}



/* Entry: 1044115f4; end: 104411633;  */

void FUN_1044115f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077af0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa1d0;
  _swift_getWitnessTable(&UNK_10dcfa1d0,&UNK_11076a0d8);
  puRam0000000113077af0 = puVar1;
  return;
}



/* Entry: 104411634; end: 104411707;  */

long FUN_104411634(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104411708; end: 104411cbf;  */

undefined8 * FUN_104411708(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  byte bVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar22 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar22;
  uVar22 = param_2[2];
  param_1[2] = uVar22;
  bVar21 = *(byte *)(param_2 + 0x18);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar22);
  if (bVar21 < 0xfe) {
    uVar22 = param_2[3];
    uVar10 = param_2[4];
    uVar1 = param_2[5];
    uVar11 = param_2[6];
    uVar2 = param_2[7];
    uVar12 = param_2[8];
    uVar3 = param_2[9];
    uVar13 = param_2[10];
    uVar4 = param_2[0xb];
    uVar14 = param_2[0xc];
    uVar5 = param_2[0xd];
    uVar15 = param_2[0xe];
    uVar6 = param_2[0xf];
    uVar16 = param_2[0x10];
    uVar7 = param_2[0x11];
    uVar17 = param_2[0x12];
    uVar8 = param_2[0x13];
    uVar18 = param_2[0x14];
    uVar9 = param_2[0x15];
    uVar19 = param_2[0x16];
    uVar23 = param_2[0x17];
    FUN_10440f640();
    param_1[3] = uVar22;
    param_1[4] = uVar10;
    param_1[5] = uVar1;
    param_1[6] = uVar11;
    param_1[7] = uVar2;
    param_1[8] = uVar12;
    param_1[9] = uVar3;
    param_1[10] = uVar13;
    param_1[0xb] = uVar4;
    param_1[0xc] = uVar14;
    param_1[0xd] = uVar5;
    param_1[0xe] = uVar15;
    param_1[0xf] = uVar6;
    param_1[0x10] = uVar16;
    param_1[0x11] = uVar7;
    param_1[0x12] = uVar17;
    param_1[0x13] = uVar8;
    param_1[0x14] = uVar18;
    param_1[0x15] = uVar9;
    param_1[0x16] = uVar19;
    param_1[0x17] = uVar23;
    *(byte *)(param_1 + 0x18) = bVar21;
  }
  else {
    uVar22 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar22;
    uVar22 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar22;
    uVar22 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar22;
    uVar22 = *(undefined8 *)((long)param_2 + 0xb1);
    *(undefined8 *)((long)param_1 + 0xb9) = *(undefined8 *)((long)param_2 + 0xb9);
    *(undefined8 *)((long)param_1 + 0xb1) = uVar22;
    uVar22 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar22;
    uVar22 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar22;
    uVar22 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar22;
    uVar22 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar22;
    uVar22 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar22;
    uVar22 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar22;
    uVar22 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar22;
  }
  uVar20 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  _objc_retain();
  if (10 < uVar20) {
    _swift_bridgeObjectRetain(uVar20);
  }
  param_1[0x1a] = uVar20;
  return param_1;
}



/* Entry: 104411cc0; end: 104411e83;  */

undefined8 * FUN_104411cc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  uVar10 = param_2[1];
  uVar9 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar9);
  uVar10 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar10);
  bVar7 = *(byte *)(param_1 + 0x18);
  if (bVar7 < 0xfe) {
    bVar8 = *(byte *)(param_2 + 0x18);
    if (bVar8 < 0xfe) {
      uVar11 = param_2[0x17];
      uVar10 = param_1[3];
      uVar3 = param_1[4];
      uVar9 = param_1[5];
      uVar4 = param_1[6];
      uVar1 = param_1[7];
      uVar5 = param_1[8];
      uVar2 = param_1[9];
      uVar6 = param_1[10];
      uVar16 = param_1[0xc];
      uVar15 = param_1[0xb];
      uVar18 = param_1[0xe];
      uVar17 = param_1[0xd];
      uVar20 = param_1[0x10];
      uVar19 = param_1[0xf];
      uVar22 = param_1[0x12];
      uVar21 = param_1[0x11];
      uVar24 = param_1[0x14];
      uVar23 = param_1[0x13];
      uVar26 = param_1[0x16];
      uVar25 = param_1[0x15];
      uVar12 = param_1[0x17];
      uVar27 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar27;
      uVar27 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar27;
      uVar27 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar27;
      uVar27 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar27;
      uVar27 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar27;
      uVar27 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar27;
      uVar27 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar27;
      uVar27 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar27;
      uVar27 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar27;
      uVar27 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar27;
      param_1[0x17] = uVar11;
      *(byte *)(param_1 + 0x18) = bVar8;
      func_0x00010440f848(uVar10,uVar3,uVar9,uVar4,uVar1,uVar5,uVar2,uVar6,uVar15,uVar16,uVar17,
                          uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar12,
                          bVar7);
      goto LAB_104411e18;
    }
    FUN_104410124(param_1 + 3);
  }
  uVar10 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar10;
  uVar10 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar10;
  uVar10 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar10;
  uVar10 = *(undefined8 *)((long)param_2 + 0xb1);
  *(undefined8 *)((long)param_1 + 0xb9) = *(undefined8 *)((long)param_2 + 0xb9);
  *(undefined8 *)((long)param_1 + 0xb1) = uVar10;
  uVar10 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar10;
  uVar10 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar10;
  uVar10 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar10;
  uVar10 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar10;
  uVar10 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar10;
  uVar10 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar10;
  uVar10 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar10;
LAB_104411e18:
  uVar10 = param_1[0x19];
  param_1[0x19] = param_2[0x19];
  _objc_release(uVar10);
  puVar14 = param_1 + 0x1a;
  uVar13 = param_2[0x1a];
  if (10 < *puVar14) {
    if (10 < uVar13) {
      *puVar14 = uVar13;
      _swift_bridgeObjectRelease();
      return param_1;
    }
    FUN_104411f50(puVar14,0x112f4da78,&UNK_10db9fed0);
  }
  *puVar14 = uVar13;
  return param_1;
}



/* Entry: 104411e84; end: 104411f4f;  */

int FUN_104411e84(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x36] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104411f50; end: 1044120a3;  */

undefined8 FUN_104411f50(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1044120a4; end: 1044121f7;  */

void FUN_1044120a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,uVar4);
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(auStack_88,uVar2,uVar5);
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(auStack_88,uVar3,uVar6);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044121f8; end: 1044122ab;  */

/* WARNING: Possible PIC construction at 0x000104412260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000104412264) */
/* WARNING: Removing unreachable block (ram,0x000104412268) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1044121f8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  byte *pbVar27;
  long lVar28;
  byte *pbVar29;
  undefined1 *puVar30;
  undefined8 uVar31;
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
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined1 auVar48 [16];
  
  puVar30 = &stack0xfffffffffffffff0;
  uVar13 = *param_1;
  pbVar11 = (byte *)param_1[2];
  pbVar27 = (byte *)param_1[3];
  pbVar12 = (byte *)param_1[4];
  uVar24 = param_1[5];
  pbVar10 = (byte *)param_2[2];
  uVar1 = param_2[3];
  uVar25 = param_2[4];
  uVar26 = param_2[5];
  if (((uVar13 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  uVar31 = 0x104412264;
  puVar8 = &stack0xffffffffffffffb0;
  uVar13 = uVar1;
  pbVar22 = pbVar11;
  pbVar15 = pbVar27;
  pbVar29 = pbVar10;
  do {
    *(ulong *)(puVar8 + -0x50) = uVar1;
    *(byte **)(puVar8 + -0x48) = pbVar29;
    *(byte **)(puVar8 + -0x40) = pbVar15;
    *(byte **)(puVar8 + -0x38) = pbVar22;
    *(ulong *)(puVar8 + -0x30) = uVar26;
    *(ulong *)(puVar8 + -0x28) = uVar25;
    *(ulong *)(puVar8 + -0x20) = uVar24;
    *(byte **)(puVar8 + -0x18) = pbVar12;
    *(undefined1 **)(puVar8 + -0x10) = puVar30;
    *(undefined8 *)(puVar8 + -8) = uVar31;
    *(undefined8 *)(puVar8 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar5 = (uint)((ulong)pbVar27 >> 0x20);
    uVar17 = uVar5 >> 0x1e;
    uVar6 = (uint)(uVar13 >> 0x20);
    uVar20 = uVar6 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar27;
    if ((ulong)pbVar27 >> 0x3e == 3) {
      uVar19 = 0;
      if (((pbVar11 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
         ((uVar13 >> 0x3e < 3 ||
          ((uVar19 = 0, pbVar10 != (byte *)0x0 || (uVar13 != 0xc000000000000000))))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar5 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar27 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar18,iVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar7)();
        }
        uVar19 = (ulong)(iVar18 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar6 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar13 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)pbVar10 >> 0x20);
      if (SBORROW4(iVar18,(int)pbVar10)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar7)();
      }
      if (uVar19 == (long)(iVar18 - (int)pbVar10)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar7)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar7)();
        }
code_r0x000100e2608c:
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            puVar8[-0x70] = (char)pbVar11;
            puVar8[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar8[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar8[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar8[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar8[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar8[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar8[-0x69] = (char)((ulong)pbVar11 >> 0x38);
            puVar8[-0x68] = (char)pbVar27;
            puVar8[-0x67] = (char)((ulong)pbVar27 >> 8);
            puVar8[-0x66] = (char)((ulong)pbVar27 >> 0x10);
            puVar8[-0x65] = (char)((ulong)pbVar27 >> 0x18);
            puVar8[-100] = (char)((ulong)pbVar27 >> 0x20);
            puVar8[-99] = (char)((ulong)pbVar27 >> 0x28);
            pbVar14 = puVar8 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            uVar25 = 0;
            func_0x000100e25bdc(puVar8 + -0x71,puVar8 + -0x70);
            pbVar10 = (byte *)(ulong)(byte)puVar8[-0x71];
            goto code_r0x000100e262b0;
          }
          pbVar29 = (byte *)(long)iVar9;
          pbVar22 = (byte *)(((long)pbVar11 >> 0x20) - (long)pbVar29);
          if ((long)pbVar11 >> 0x20 < (long)pbVar29) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar7)();
          }
          func_0x000107c5ec30();
          pbVar15 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)pbVar29,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar7)();
            }
            pbVar11 = pbVar11 + ((long)pbVar29 - (long)pbVar14);
            func_0x000107c5ec38();
            pbVar12 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)pbVar22 <= (long)pbVar14) {
                pbVar14 = pbVar22;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)(puVar8 + -0x6a) = 0;
            *(undefined8 *)(puVar8 + -0x70) = 0;
            pbVar14 = puVar8 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar23 = *(long *)(pbVar11 + 0x10);
          pbVar15 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar23,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar7)();
            }
            pbVar11 = pbVar11 + (lVar23 - (long)pbVar14);
          }
          pbVar22 = pbVar15 + -lVar23;
          if (SBORROW8((long)pbVar15,lVar23)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar7)();
          }
          func_0x000107c5ec38();
          pbVar12 = pbVar11;
          pbVar29 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)pbVar22 <= (long)pbVar14) {
              pbVar14 = pbVar22;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        uVar24 = (ulong)pbVar27 & 0x3fffffffffffffff;
        uVar25 = 0;
        func_0x000100e25bdc(puVar8 + -0x70,pbVar11,pbVar14,pbVar10,uVar13);
        pbVar10 = (byte *)(ulong)(byte)puVar8[-0x70];
        uVar26 = uVar13;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar19 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)(puVar8 + -0xc0) = pbVar15;
    *(byte **)(puVar8 + -0xb8) = pbVar22;
    *(ulong *)(puVar8 + -0xb0) = uVar26;
    *(ulong *)(puVar8 + -0xa8) = uVar25;
    *(ulong *)(puVar8 + -0xa0) = uVar24;
    *(byte **)(puVar8 + -0x98) = pbVar12;
    *(undefined1 **)(puVar8 + -0x90) = puVar8 + -0x10;
    *(undefined **)(puVar8 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar22 = *(byte **)(pbVar10 + 0x18);
    bVar32 = pbVar10[0x28];
    pbVar27 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar32 < 3) {
      if (bVar32 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar23 = *(long *)pbVar14;
          uVar31 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar23,uVar31);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar32 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar29 = *(byte **)(pbVar14 + 0x10);
        lVar23 = *(long *)pbVar14;
        uVar31 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar23,uVar31);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar11;
        pbVar15 = pbVar27;
        if ((pbVar11 == pbVar16) && (pbVar27 == pbVar29)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar29 = *(byte **)(pbVar14 + 8);
        lVar23 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar11 == pbVar29)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar23 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar23);
          func_0x000107c61174();
          pbVar11 = pbVar22;
          func_0x000107c60118();
          func_0x000107c61170(pbVar22);
          func_0x000107c61170(lVar23);
          pbVar22 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar22 & 1) == 0) {
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
      )(pbVar12,pbVar15,pbVar16,pbVar29,0);
      return pbVar12;
    }
    lVar28 = *(long *)(pbVar10 + 0x20);
    if (bVar32 < 5) {
      if (bVar32 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar29 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar11 == pbVar29)) &&
           (pbVar12 = pbVar27, pbVar15 = pbVar22, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar29 = *(byte **)(pbVar14 + 0x18),
           pbVar27 == *(byte **)(pbVar14 + 0x10) && pbVar22 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar29 = *(byte **)(pbVar14 + 0x10);
      lVar23 = *(long *)(pbVar14 + 0x20);
      if (pbVar27 == (byte *)0x0) {
        if (pbVar29 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar29 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar11;
        pbVar15 = pbVar27;
        if ((pbVar11 != pbVar16) || (pbVar27 != pbVar29)) goto code_r0x000107c605b8;
      }
      if (lVar28 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar14 + 0x18)) && (lVar28 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar28,*(byte **)(pbVar14 + 0x18),lVar23,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar23 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar32 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar28 == 0) && pbVar27 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar28 = *(long *)(pbVar14 + 0x20);
        lVar23 = *(long *)(pbVar14 + 0x18);
        bVar32 = pbVar14[8] | (byte)lVar23;
        bVar33 = pbVar14[9] | (byte)((ulong)lVar23 >> 8);
        bVar34 = pbVar14[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar35 = pbVar14[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar36 = pbVar14[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar37 = pbVar14[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar38 = pbVar14[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar39 = pbVar14[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar40 = pbVar14[0x10] | (byte)lVar28;
        bVar41 = pbVar14[0x11] | (byte)((ulong)lVar28 >> 8);
        bVar42 = pbVar14[0x12] | (byte)((ulong)lVar28 >> 0x10);
        bVar43 = pbVar14[0x13] | (byte)((ulong)lVar28 >> 0x18);
        bVar44 = pbVar14[0x14] | (byte)((ulong)lVar28 >> 0x20);
        bVar45 = pbVar14[0x15] | (byte)((ulong)lVar28 >> 0x28);
        bVar46 = pbVar14[0x16] | (byte)((ulong)lVar28 >> 0x30);
        bVar47 = pbVar14[0x17] | (byte)((ulong)lVar28 >> 0x38);
        auVar48[1] = bVar33;
        auVar48[0] = bVar32;
        auVar48[2] = bVar34;
        auVar48[3] = bVar35;
        auVar48[4] = bVar36;
        auVar48[5] = bVar37;
        auVar48[6] = bVar38;
        auVar48[7] = bVar39;
        auVar48[8] = bVar40;
        auVar48[9] = bVar41;
        auVar48[10] = bVar42;
        auVar48[0xb] = bVar43;
        auVar48[0xc] = bVar44;
        auVar48[0xd] = bVar45;
        auVar48[0xe] = bVar46;
        auVar48[0xf] = bVar47;
        auVar4[1] = bVar33;
        auVar4[0] = bVar32;
        auVar4[2] = bVar34;
        auVar4[3] = bVar35;
        auVar4[4] = bVar36;
        auVar4[5] = bVar37;
        auVar4[6] = bVar38;
        auVar4[7] = bVar39;
        auVar4[8] = bVar40;
        auVar4[9] = bVar41;
        auVar4[10] = bVar42;
        auVar4[0xb] = bVar43;
        auVar4[0xc] = bVar44;
        auVar4[0xd] = bVar45;
        auVar4[0xe] = bVar46;
        auVar4[0xf] = bVar47;
        auVar48 = NEON_ext(auVar48,auVar4,8,1);
        if (CONCAT17(bVar39 | auVar48[7],
                     CONCAT16(bVar38 | auVar48[6],
                              CONCAT15(bVar37 | auVar48[5],
                                       CONCAT14(bVar36 | auVar48[4],
                                                CONCAT13(bVar35 | auVar48[3],
                                                         CONCAT12(bVar34 | auVar48[2],
                                                                  CONCAT11(bVar33 | auVar48[1],
                                                                           bVar32 | auVar48[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
          lVar28 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar28 = *(long *)(pbVar14 + 0x20);
      lVar23 = *(long *)(pbVar14 + 0x18);
      bVar32 = pbVar14[8] | (byte)lVar23;
      bVar33 = pbVar14[9] | (byte)((ulong)lVar23 >> 8);
      bVar34 = pbVar14[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar35 = pbVar14[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar36 = pbVar14[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar37 = pbVar14[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar38 = pbVar14[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar39 = pbVar14[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar40 = pbVar14[0x10] | (byte)lVar28;
      bVar41 = pbVar14[0x11] | (byte)((ulong)lVar28 >> 8);
      bVar42 = pbVar14[0x12] | (byte)((ulong)lVar28 >> 0x10);
      bVar43 = pbVar14[0x13] | (byte)((ulong)lVar28 >> 0x18);
      bVar44 = pbVar14[0x14] | (byte)((ulong)lVar28 >> 0x20);
      bVar45 = pbVar14[0x15] | (byte)((ulong)lVar28 >> 0x28);
      bVar46 = pbVar14[0x16] | (byte)((ulong)lVar28 >> 0x30);
      bVar47 = pbVar14[0x17] | (byte)((ulong)lVar28 >> 0x38);
      auVar2[1] = bVar33;
      auVar2[0] = bVar32;
      auVar2[2] = bVar34;
      auVar2[3] = bVar35;
      auVar2[4] = bVar36;
      auVar2[5] = bVar37;
      auVar2[6] = bVar38;
      auVar2[7] = bVar39;
      auVar2[8] = bVar40;
      auVar2[9] = bVar41;
      auVar2[10] = bVar42;
      auVar2[0xb] = bVar43;
      auVar2[0xc] = bVar44;
      auVar2[0xd] = bVar45;
      auVar2[0xe] = bVar46;
      auVar2[0xf] = bVar47;
      auVar3[1] = bVar33;
      auVar3[0] = bVar32;
      auVar3[2] = bVar34;
      auVar3[3] = bVar35;
      auVar3[4] = bVar36;
      auVar3[5] = bVar37;
      auVar3[6] = bVar38;
      auVar3[7] = bVar39;
      auVar3[8] = bVar40;
      auVar3[9] = bVar41;
      auVar3[10] = bVar42;
      auVar3[0xb] = bVar43;
      auVar3[0xc] = bVar44;
      auVar3[0xd] = bVar45;
      auVar3[0xe] = bVar46;
      auVar3[0xf] = bVar47;
      auVar48 = NEON_ext(auVar2,auVar3,8,1);
      lVar23 = CONCAT17(bVar39 | auVar48[7],
                        CONCAT16(bVar38 | auVar48[6],
                                 CONCAT15(bVar37 | auVar48[5],
                                          CONCAT14(bVar36 | auVar48[4],
                                                   CONCAT13(bVar35 | auVar48[3],
                                                            CONCAT12(bVar34 | auVar48[2],
                                                                     CONCAT11(bVar33 | auVar48[1],
                                                                              bVar32 | auVar48[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    pbVar10 = *(byte **)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar23 = *(long *)pbVar14;
    uVar31 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar23,uVar31);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    puVar30 = *(undefined1 **)(puVar8 + -0x90);
    uVar31 = *(undefined8 *)(puVar8 + -0x88);
    uVar24 = *(ulong *)(puVar8 + -0xa0);
    pbVar12 = *(byte **)(puVar8 + -0x98);
    uVar26 = *(ulong *)(puVar8 + -0xb0);
    uVar25 = *(ulong *)(puVar8 + -0xa8);
    pbVar15 = *(byte **)(puVar8 + -0xc0);
    pbVar22 = *(byte **)(puVar8 + -0xb8);
    puVar8 = puVar8 + -0x80;
  } while( true );
}



/* Entry: 1044122ac; end: 10441262b;  */

void FUN_1044122ac(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  double dVar25;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  lStack_118 = unaff_x20[0x11];
  lStack_120 = unaff_x20[0x10];
  lStack_110 = unaff_x20[0x12];
  uStack_108 = (undefined1)unaff_x20[0x13];
  uStack_ff = *(undefined8 *)((long)unaff_x20 + 0xa1);
  uStack_107 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x99);
  uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x99) >> 0x38);
  lStack_158 = unaff_x20[9];
  lStack_160 = unaff_x20[8];
  lStack_148 = unaff_x20[0xb];
  lStack_150 = unaff_x20[10];
  lStack_138 = unaff_x20[0xd];
  lStack_140 = unaff_x20[0xc];
  lStack_128 = unaff_x20[0xf];
  lStack_130 = unaff_x20[0xe];
  lStack_198 = unaff_x20[1];
  lStack_1a0 = *unaff_x20;
  lStack_188 = unaff_x20[3];
  lStack_190 = unaff_x20[2];
  lStack_178 = unaff_x20[5];
  lStack_180 = unaff_x20[4];
  lStack_168 = unaff_x20[7];
  lStack_170 = unaff_x20[6];
  iVar4 = (int)&lStack_1a0;
  func_0x000103238538();
  plVar5 = &lStack_1a0;
  func_0x000100db82f0();
  if (iVar4 < 3) {
    if (iVar4 == 0) {
      __ss6HasherV8_combineyySuF(0);
      __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    }
    else if (iVar4 == 1) {
      __ss6HasherV8_combineyySuF(1);
      __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
      __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    }
    else {
      lVar7 = *plVar5;
      __ss6HasherV8_combineyySuF(2);
      func_0x00010440d64c(param_1,lVar7);
    }
  }
  else if (iVar4 < 5) {
    if (iVar4 == 3) {
      lVar22 = plVar5[8];
      lVar23 = plVar5[0xf];
      dVar24 = (double)plVar5[0x10];
      dVar25 = (double)plVar5[0x11];
      uVar2 = plVar5[0x12];
      uVar3 = plVar5[0x13];
      uVar8 = plVar5[0x14];
      lVar7 = plVar5[0x15];
      lVar20 = plVar5[3];
      lVar18 = plVar5[2];
      lVar14 = plVar5[5];
      lVar9 = plVar5[4];
      lVar15 = plVar5[7];
      lVar10 = plVar5[6];
      lVar21 = plVar5[10];
      lVar19 = plVar5[9];
      lVar16 = plVar5[0xc];
      lVar11 = plVar5[0xb];
      lVar17 = plVar5[0xe];
      lVar12 = plVar5[0xd];
      __ss6HasherV8_combineyySuF(3);
      __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
      __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
      lStack_b8 = lVar18;
      lStack_b0 = lVar20;
      lStack_a8 = lVar9;
      lStack_a0 = lVar14;
      lStack_98 = lVar10;
      lStack_90 = lVar15;
      lStack_88 = lVar22;
      FUN_104412964(param_1);
      lStack_f0 = lVar19;
      lStack_e8 = lVar21;
      lStack_e0 = lVar11;
      lStack_d8 = lVar16;
      lStack_d0 = lVar12;
      lStack_c8 = lVar17;
      lStack_c0 = lVar23;
      FUN_104412964(param_1);
      dVar13 = 0.0;
      if (dVar24 != 0.0) {
        dVar13 = dVar24;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar13);
      dVar13 = 0.0;
      if (dVar25 != 0.0) {
        dVar13 = dVar25;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar13);
      if ((char)lVar7 == '\x01') {
        if ((uVar8 == 0 && uVar3 == 0) && uVar2 == 0) {
          uVar6 = 0;
        }
        else if ((uVar2 == 1) && (uVar8 == 0 && uVar3 == 0)) {
          uVar6 = 1;
        }
        else if ((uVar2 == 2) && (uVar8 == 0 && uVar3 == 0)) {
          uVar6 = 2;
        }
        else {
          uVar6 = 3;
        }
        __ss6HasherV8_combineyySuF(uVar6);
      }
      else {
        __ss6HasherV8_combineyySuF(4);
        uVar1 = 0;
        if ((uVar2 & 0x7fffffffffffffff) != 0) {
          uVar1 = uVar2;
        }
        __ss6HasherV8_combineyys6UInt64VF(uVar1);
        uVar2 = 0;
        if ((uVar3 & 0x7fffffffffffffff) != 0) {
          uVar2 = uVar3;
        }
        __ss6HasherV8_combineyys6UInt64VF(uVar2);
        uVar2 = 0;
        if ((uVar8 & 0x7fffffffffffffff) != 0) {
          uVar2 = uVar8;
        }
        __ss6HasherV8_combineyys6UInt64VF(uVar2);
      }
    }
    else {
      lVar7 = *plVar5;
      lVar9 = plVar5[1];
      __ss6HasherV8_combineyySuF(4);
      if (lVar7 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        _objc_retain(lVar7);
        __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
        _objc_release(lVar7);
      }
      if (lVar9 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        _objc_retain(lVar9);
        __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
        _objc_release(lVar9);
      }
    }
  }
  else if (iVar4 == 5) {
    lVar7 = *plVar5;
    lVar11 = plVar5[1];
    lVar9 = plVar5[2];
    lVar12 = plVar5[3];
    lVar10 = plVar5[4];
    lVar14 = plVar5[5];
    __ss6HasherV8_combineyySuF(5);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar7,lVar11);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,lVar9,lVar12);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,lVar10,lVar14);
  }
  else {
    lVar7 = *plVar5;
    lVar9 = plVar5[1];
    __ss6HasherV8_combineyySuF(6);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar7,lVar9);
  }
  return;
}



/* Entry: 10441262c; end: 104412667;  */

void FUN_10441262c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1044122ac(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104412668; end: 10441266b;  */

void FUN_104412668(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  double dVar25;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  lStack_118 = unaff_x20[0x11];
  lStack_120 = unaff_x20[0x10];
  lStack_110 = unaff_x20[0x12];
  uStack_108 = (undefined1)unaff_x20[0x13];
  uStack_ff = *(undefined8 *)((long)unaff_x20 + 0xa1);
  uStack_107 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x99);
  uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x99) >> 0x38);
  lStack_158 = unaff_x20[9];
  lStack_160 = unaff_x20[8];
  lStack_148 = unaff_x20[0xb];
  lStack_150 = unaff_x20[10];
  lStack_138 = unaff_x20[0xd];
  lStack_140 = unaff_x20[0xc];
  lStack_128 = unaff_x20[0xf];
  lStack_130 = unaff_x20[0xe];
  lStack_198 = unaff_x20[1];
  lStack_1a0 = *unaff_x20;
  lStack_188 = unaff_x20[3];
  lStack_190 = unaff_x20[2];
  lStack_178 = unaff_x20[5];
  lStack_180 = unaff_x20[4];
  lStack_168 = unaff_x20[7];
  lStack_170 = unaff_x20[6];
  iVar4 = (int)&lStack_1a0;
  func_0x000103238538();
  plVar5 = &lStack_1a0;
  func_0x000100db82f0();
  if (iVar4 < 3) {
    if (iVar4 == 0) {
      __ss6HasherV8_combineyySuF(0);
      __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    }
    else if (iVar4 == 1) {
      __ss6HasherV8_combineyySuF(1);
      __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
      __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    }
    else {
      lVar7 = *plVar5;
      __ss6HasherV8_combineyySuF(2);
      func_0x00010440d64c(param_1,lVar7);
    }
  }
  else if (iVar4 < 5) {
    if (iVar4 == 3) {
      lVar22 = plVar5[8];
      lVar23 = plVar5[0xf];
      dVar24 = (double)plVar5[0x10];
      dVar25 = (double)plVar5[0x11];
      uVar2 = plVar5[0x12];
      uVar3 = plVar5[0x13];
      uVar8 = plVar5[0x14];
      lVar7 = plVar5[0x15];
      lVar20 = plVar5[3];
      lVar18 = plVar5[2];
      lVar14 = plVar5[5];
      lVar9 = plVar5[4];
      lVar15 = plVar5[7];
      lVar10 = plVar5[6];
      lVar21 = plVar5[10];
      lVar19 = plVar5[9];
      lVar16 = plVar5[0xc];
      lVar11 = plVar5[0xb];
      lVar17 = plVar5[0xe];
      lVar12 = plVar5[0xd];
      __ss6HasherV8_combineyySuF(3);
      __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
      __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
      lStack_b8 = lVar18;
      lStack_b0 = lVar20;
      lStack_a8 = lVar9;
      lStack_a0 = lVar14;
      lStack_98 = lVar10;
      lStack_90 = lVar15;
      lStack_88 = lVar22;
      FUN_104412964(param_1);
      lStack_f0 = lVar19;
      lStack_e8 = lVar21;
      lStack_e0 = lVar11;
      lStack_d8 = lVar16;
      lStack_d0 = lVar12;
      lStack_c8 = lVar17;
      lStack_c0 = lVar23;
      FUN_104412964(param_1);
      dVar13 = 0.0;
      if (dVar24 != 0.0) {
        dVar13 = dVar24;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar13);
      dVar13 = 0.0;
      if (dVar25 != 0.0) {
        dVar13 = dVar25;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar13);
      if ((char)lVar7 == '\x01') {
        if ((uVar8 == 0 && uVar3 == 0) && uVar2 == 0) {
          uVar6 = 0;
        }
        else if ((uVar2 == 1) && (uVar8 == 0 && uVar3 == 0)) {
          uVar6 = 1;
        }
        else if ((uVar2 == 2) && (uVar8 == 0 && uVar3 == 0)) {
          uVar6 = 2;
        }
        else {
          uVar6 = 3;
        }
        __ss6HasherV8_combineyySuF(uVar6);
      }
      else {
        __ss6HasherV8_combineyySuF(4);
        uVar1 = 0;
        if ((uVar2 & 0x7fffffffffffffff) != 0) {
          uVar1 = uVar2;
        }
        __ss6HasherV8_combineyys6UInt64VF(uVar1);
        uVar2 = 0;
        if ((uVar3 & 0x7fffffffffffffff) != 0) {
          uVar2 = uVar3;
        }
        __ss6HasherV8_combineyys6UInt64VF(uVar2);
        uVar2 = 0;
        if ((uVar8 & 0x7fffffffffffffff) != 0) {
          uVar2 = uVar8;
        }
        __ss6HasherV8_combineyys6UInt64VF(uVar2);
      }
    }
    else {
      lVar7 = *plVar5;
      lVar9 = plVar5[1];
      __ss6HasherV8_combineyySuF(4);
      if (lVar7 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        _objc_retain(lVar7);
        __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
        _objc_release(lVar7);
      }
      if (lVar9 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        _objc_retain(lVar9);
        __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
        _objc_release(lVar9);
      }
    }
  }
  else if (iVar4 == 5) {
    lVar7 = *plVar5;
    lVar11 = plVar5[1];
    lVar9 = plVar5[2];
    lVar12 = plVar5[3];
    lVar10 = plVar5[4];
    lVar14 = plVar5[5];
    __ss6HasherV8_combineyySuF(5);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar7,lVar11);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,lVar9,lVar12);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,lVar10,lVar14);
  }
  else {
    lVar7 = *plVar5;
    lVar9 = plVar5[1];
    __ss6HasherV8_combineyySuF(6);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar7,lVar9);
  }
  return;
}



/* Entry: 10441266c; end: 1044126a3;  */

void FUN_10441266c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1044122ac(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044126a4; end: 104412737;  */

uint FUN_1044126a4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_f0 = param_1[0x12];
  uStack_e8 = (undefined1)param_1[0x13];
  uStack_df = *(undefined8 *)((long)param_1 + 0xa1);
  uStack_e7 = (undefined7)*(undefined8 *)((long)param_1 + 0x99);
  uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x99) >> 0x38);
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_40 = param_2[0x12];
  uStack_38 = (undefined1)param_2[0x13];
  uStack_2f = *(undefined8 *)((long)param_2 + 0xa1);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_2 + 0x99);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  FUN_104413834(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 104412738; end: 1044127ef;  */

void FUN_104412738(long param_1,long param_2)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  if (param_1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(param_1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(param_1);
  }
  if (param_2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(param_2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(param_2);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044127f0; end: 1044127f7;  */

void FUN_1044127f0(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_78 [72];
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044127f8; end: 10441294f;  */

void FUN_1044127f8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar1);
  }
  if (lVar2 != 0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 104412950; end: 104412963;  */

undefined8 FUN_104412950(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *param_1;
  uVar5 = param_1[1];
  lVar1 = *param_2;
  lVar4 = param_2[1];
  if (uVar2 == 0) {
    if (lVar1 != 0) {
      return 0;
    }
  }
  else {
    if (lVar1 == 0) {
      return 0;
    }
    FUN_1044149a8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retain(lVar1);
    _objc_retain();
    uVar3 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  if (uVar5 == 0) {
    if (lVar4 == 0) {
      return 1;
    }
  }
  else if (lVar4 != 0) {
    FUN_1044149a8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retain(lVar4);
    _objc_retain();
    uVar2 = uVar5;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar5);
    _objc_release(lVar4);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104412964; end: 104412b0f;  */

void FUN_104412964(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar2 = unaff_x20[2];
  dVar3 = unaff_x20[3];
  dVar4 = unaff_x20[4];
  dVar5 = unaff_x20[5];
  dVar6 = unaff_x20[6];
  dVar1 = 0.0;
  if (unaff_x20[1] != 0.0) {
    dVar1 = unaff_x20[1];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar5 != 0.0) {
    dVar1 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar6 != 0.0) {
    dVar1 = dVar6;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  return;
}



/* Entry: 104412b10; end: 104412b17;  */

void FUN_104412b10(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_98 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar2 = unaff_x20[2];
  dVar3 = unaff_x20[3];
  dVar4 = unaff_x20[4];
  dVar5 = unaff_x20[5];
  dVar6 = unaff_x20[6];
  dVar1 = 0.0;
  if (unaff_x20[1] != 0.0) {
    dVar1 = unaff_x20[1];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar5 != 0.0) {
    dVar1 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (dVar6 != 0.0) {
    dVar1 = dVar6;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104412b18; end: 104412b4f;  */

void FUN_104412b18(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104412964(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104412b50; end: 104412bb3;  */

uint FUN_104412b50(double *param_1,double *param_2)

{
  uint uVar1;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  uVar1 = 0;
  dStack_68 = param_1[2];
  dStack_70 = param_1[1];
  dStack_58 = param_1[4];
  dStack_60 = param_1[3];
  dStack_48 = param_1[6];
  dStack_50 = param_1[5];
  dStack_38 = param_2[2];
  dStack_40 = param_2[1];
  dStack_28 = param_2[4];
  dStack_30 = param_2[3];
  dStack_18 = param_2[6];
  dStack_20 = param_2[5];
  if (*param_1 == *param_2) {
    __sSo17CGAffineTransformV12CoreGraphicsE2eeoiySbAB_ABtFZ(&dStack_70,&dStack_40);
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 104412bb4; end: 104412d4b;  */

void FUN_104412bb4(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,char param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_5 == '\x01') {
    if ((param_4 == 0 && param_3 == 0) && param_2 == 0) {
      uVar2 = 0;
    }
    else if ((param_2 == 1) && (param_4 == 0 && param_3 == 0)) {
      uVar2 = 1;
    }
    else if ((param_2 == 2) && (param_4 == 0 && param_3 == 0)) {
      uVar2 = 2;
    }
    else {
      uVar2 = 3;
    }
    __ss6HasherV8_combineyySuF(uVar2);
  }
  else {
    __ss6HasherV8_combineyySuF(4);
    uVar1 = 0;
    if ((param_2 & 0x7fffffffffffffff) != 0) {
      uVar1 = param_2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((param_3 & 0x7fffffffffffffff) != 0) {
      uVar1 = param_3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((param_4 & 0x7fffffffffffffff) != 0) {
      uVar1 = param_4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  return;
}



/* Entry: 104412d4c; end: 104412d6b;  */

void FUN_104412d4c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  if ((char)uVar3 == '\x01') {
    if ((uVar5 == 0 && uVar2 == 0) && uVar1 == 0) {
      uVar4 = 0;
    }
    else if ((uVar1 == 1) && (uVar5 == 0 && uVar2 == 0)) {
      uVar4 = 1;
    }
    else if ((uVar1 == 2) && (uVar5 == 0 && uVar2 == 0)) {
      uVar4 = 2;
    }
    else {
      uVar4 = 3;
    }
    __ss6HasherV8_combineyySuF(uVar4);
  }
  else {
    __ss6HasherV8_combineyySuF(4);
    uVar3 = 0;
    if ((uVar1 & 0x7fffffffffffffff) != 0) {
      uVar3 = uVar1;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar3);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar1 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104412d6c; end: 104412dc7;  */

void FUN_104412d6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  uVar3 = *(undefined1 *)(unaff_x20 + 3);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_104412bb4(auStack_78,uVar1,uVar2,uVar4,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104412dc8; end: 104412deb;  */

bool FUN_104412dc8(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *param_1;
  dVar3 = param_1[1];
  dVar7 = param_1[2];
  dVar2 = *param_2;
  dVar4 = param_2[1];
  dVar8 = param_2[2];
  cVar5 = *(char *)(param_2 + 3);
  if (*(char *)(param_1 + 3) == '\x01') {
    if ((dVar7 == 0.0 && dVar3 == 0.0) && dVar1 == 0.0) {
      return cVar5 == '\x01' && ((dVar8 == 0.0 && dVar4 == 0.0) && dVar2 == 0.0);
    }
    if ((dVar1 == 4.94065645841247e-324) && (dVar7 == 0.0 && dVar3 == 0.0)) {
      if ((((cVar5 == '\x01') && ((dVar8 != 0.0 || dVar4 != 0.0) || dVar2 != 0.0)) &&
          (dVar2 == 4.94065645841247e-324)) && (dVar8 == 0.0 && dVar4 == 0.0)) {
        return true;
      }
    }
    else if ((dVar1 == 9.88131291682493e-324) && (dVar7 == 0.0 && dVar3 == 0.0)) {
      if (((cVar5 == '\x01') && ((dVar8 != 0.0 || dVar4 != 0.0) || dVar2 != 0.0)) &&
         ((dVar2 != 4.94065645841247e-324 || (dVar8 != 0.0 || dVar4 != 0.0)))) {
        return dVar2 == 9.88131291682493e-324 && (dVar8 == 0.0 && dVar4 == 0.0);
      }
    }
    else if (((cVar5 == '\x01') && ((dVar8 != 0.0 || dVar4 != 0.0) || dVar2 != 0.0)) &&
            ((dVar2 != 4.94065645841247e-324 || (dVar8 != 0.0 || dVar4 != 0.0)))) {
      return dVar2 != 9.88131291682493e-324 || (dVar8 != 0.0 || dVar4 != 0.0);
    }
  }
  else {
    if (cVar5 == '\x01') {
      return false;
    }
    bVar6 = false;
    if ((dVar1 == dVar2) && (bVar6 = false, !NAN(dVar3) && !NAN(dVar4))) {
      bVar6 = dVar3 == dVar4;
    }
    if (bVar6) {
      return dVar7 == dVar8;
    }
  }
  return false;
}



/* Entry: 104412dec; end: 104412ef3;  */

void FUN_104412dec(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  double dVar6;
  
  FUN_104412964();
  FUN_104412964(param_1);
  dVar6 = 0.0;
  if (*(double *)(unaff_x20 + 0x70) != 0.0) {
    dVar6 = *(double *)(unaff_x20 + 0x70);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  dVar6 = 0.0;
  if (*(double *)(unaff_x20 + 0x78) != 0.0) {
    dVar6 = *(double *)(unaff_x20 + 0x78);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  uVar2 = *(ulong *)(unaff_x20 + 0x80);
  uVar3 = *(ulong *)(unaff_x20 + 0x88);
  uVar5 = *(ulong *)(unaff_x20 + 0x90);
  if (*(char *)(unaff_x20 + 0x98) == '\x01') {
    if ((uVar5 == 0 && uVar3 == 0) && uVar2 == 0) {
      uVar4 = 0;
    }
    else if ((uVar2 == 1) && (uVar5 == 0 && uVar3 == 0)) {
      uVar4 = 1;
    }
    else if ((uVar2 == 2) && (uVar5 == 0 && uVar3 == 0)) {
      uVar4 = 2;
    }
    else {
      uVar4 = 3;
    }
    __ss6HasherV8_combineyySuF(uVar4);
  }
  else {
    __ss6HasherV8_combineyySuF(4);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar2 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  return;
}



/* Entry: 104412ef4; end: 104413167;  */

void FUN_104412ef4(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_c8 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_c8,0);
  dVar7 = (double)unaff_x20[1];
  dVar8 = (double)unaff_x20[2];
  dVar9 = (double)unaff_x20[3];
  dVar10 = (double)unaff_x20[4];
  dVar11 = (double)unaff_x20[5];
  dVar12 = (double)unaff_x20[6];
  uVar2 = 0;
  if ((*unaff_x20 & 0x7fffffffffffffff) != 0) {
    uVar2 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(uVar2);
  dVar6 = 0.0;
  if (dVar7 != 0.0) {
    dVar6 = dVar7;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  dVar7 = 0.0;
  if (dVar8 != 0.0) {
    dVar7 = dVar8;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar9 != 0.0) {
    dVar7 = dVar9;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar10 != 0.0) {
    dVar7 = dVar10;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar11 != 0.0) {
    dVar7 = dVar11;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar12 != 0.0) {
    dVar7 = dVar12;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = (double)unaff_x20[8];
  dVar8 = (double)unaff_x20[9];
  dVar9 = (double)unaff_x20[10];
  dVar10 = (double)unaff_x20[0xb];
  dVar11 = (double)unaff_x20[0xc];
  dVar12 = (double)unaff_x20[0xd];
  uVar2 = 0;
  if ((unaff_x20[7] & 0x7fffffffffffffff) != 0) {
    uVar2 = unaff_x20[7];
  }
  __ss6HasherV8_combineyys6UInt64VF(uVar2);
  dVar6 = 0.0;
  if (dVar7 != 0.0) {
    dVar6 = dVar7;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  dVar7 = 0.0;
  if (dVar8 != 0.0) {
    dVar7 = dVar8;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar9 != 0.0) {
    dVar7 = dVar9;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar10 != 0.0) {
    dVar7 = dVar10;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar11 != 0.0) {
    dVar7 = dVar11;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar12 != 0.0) {
    dVar7 = dVar12;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if ((double)unaff_x20[0xe] != 0.0) {
    dVar7 = (double)unaff_x20[0xe];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if ((double)unaff_x20[0xf] != 0.0) {
    dVar7 = (double)unaff_x20[0xf];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  uVar2 = unaff_x20[0x10];
  uVar3 = unaff_x20[0x11];
  uVar5 = unaff_x20[0x12];
  if ((char)unaff_x20[0x13] == '\x01') {
    if ((uVar5 == 0 && uVar3 == 0) && uVar2 == 0) {
      uVar4 = 0;
    }
    else if ((uVar2 == 1) && (uVar5 == 0 && uVar3 == 0)) {
      uVar4 = 1;
    }
    else if ((uVar2 == 2) && (uVar5 == 0 && uVar3 == 0)) {
      uVar4 = 2;
    }
    else {
      uVar4 = 3;
    }
    __ss6HasherV8_combineyySuF(uVar4);
  }
  else {
    __ss6HasherV8_combineyySuF(4);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar2 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104413168; end: 10441316f;  */

void FUN_104413168(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_c8 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_c8,0);
  dVar7 = (double)unaff_x20[1];
  dVar8 = (double)unaff_x20[2];
  dVar9 = (double)unaff_x20[3];
  dVar10 = (double)unaff_x20[4];
  dVar11 = (double)unaff_x20[5];
  dVar12 = (double)unaff_x20[6];
  uVar2 = 0;
  if ((*unaff_x20 & 0x7fffffffffffffff) != 0) {
    uVar2 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(uVar2);
  dVar6 = 0.0;
  if (dVar7 != 0.0) {
    dVar6 = dVar7;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  dVar7 = 0.0;
  if (dVar8 != 0.0) {
    dVar7 = dVar8;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar9 != 0.0) {
    dVar7 = dVar9;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar10 != 0.0) {
    dVar7 = dVar10;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar11 != 0.0) {
    dVar7 = dVar11;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar12 != 0.0) {
    dVar7 = dVar12;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = (double)unaff_x20[8];
  dVar8 = (double)unaff_x20[9];
  dVar9 = (double)unaff_x20[10];
  dVar10 = (double)unaff_x20[0xb];
  dVar11 = (double)unaff_x20[0xc];
  dVar12 = (double)unaff_x20[0xd];
  uVar2 = 0;
  if ((unaff_x20[7] & 0x7fffffffffffffff) != 0) {
    uVar2 = unaff_x20[7];
  }
  __ss6HasherV8_combineyys6UInt64VF(uVar2);
  dVar6 = 0.0;
  if (dVar7 != 0.0) {
    dVar6 = dVar7;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  dVar7 = 0.0;
  if (dVar8 != 0.0) {
    dVar7 = dVar8;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar9 != 0.0) {
    dVar7 = dVar9;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar10 != 0.0) {
    dVar7 = dVar10;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar11 != 0.0) {
    dVar7 = dVar11;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if (dVar12 != 0.0) {
    dVar7 = dVar12;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if ((double)unaff_x20[0xe] != 0.0) {
    dVar7 = (double)unaff_x20[0xe];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  dVar7 = 0.0;
  if ((double)unaff_x20[0xf] != 0.0) {
    dVar7 = (double)unaff_x20[0xf];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  uVar2 = unaff_x20[0x10];
  uVar3 = unaff_x20[0x11];
  uVar5 = unaff_x20[0x12];
  if ((char)unaff_x20[0x13] == '\x01') {
    if ((uVar5 == 0 && uVar3 == 0) && uVar2 == 0) {
      uVar4 = 0;
    }
    else if ((uVar2 == 1) && (uVar5 == 0 && uVar3 == 0)) {
      uVar4 = 1;
    }
    else if ((uVar2 == 2) && (uVar5 == 0 && uVar3 == 0)) {
      uVar4 = 2;
    }
    else {
      uVar4 = 3;
    }
    __ss6HasherV8_combineyySuF(uVar4);
  }
  else {
    __ss6HasherV8_combineyySuF(4);
    uVar1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
    uVar2 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    uVar2 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar5;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104413170; end: 1044131a7;  */

void FUN_104413170(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104412dec(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044131a8; end: 10441323b;  */

uint FUN_1044131a8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
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
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_e0 = param_1[0x10];
  uStack_d8 = (undefined1)param_1[0x11];
  uStack_cf = *(undefined8 *)((long)param_1 + 0x91);
  uStack_d7 = (undefined7)*(undefined8 *)((long)param_1 + 0x89);
  uStack_d0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x89) >> 0x38);
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_40 = param_2[0x10];
  uStack_38 = (undefined1)param_2[0x11];
  uStack_2f = *(undefined8 *)((long)param_2 + 0x91);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_2 + 0x89);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x89) >> 0x38);
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_104413644(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 10441323c; end: 1044133f7;  */

ulong FUN_10441323c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104413320);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104413324);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1044149a8(0,param_4,param_3);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1044133f8);
  (*pcVar2)();
}



/* Entry: 1044133f8; end: 104413503;  */

undefined8 FUN_1044133f8(ulong param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  
  if (param_1 == 0) {
    if (param_3 != 0) {
      return 0;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    FUN_1044149a8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retain(param_3);
    _objc_retain();
    uVar1 = param_1;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(param_1);
    _objc_release(param_3);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (param_2 == 0) {
    if (param_4 == 0) {
      return 1;
    }
  }
  else if (param_4 != 0) {
    FUN_1044149a8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retain(param_4);
    _objc_retain();
    uVar1 = param_2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(param_2);
    _objc_release(param_4);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104413504; end: 104413643;  */

bool FUN_104413504(double param_1,double param_2,double param_3,char param_4,double param_5,
                  double param_6,double param_7,char param_8)

{
  bool bVar1;
  
  if (param_4 == '\x01') {
    if ((param_3 == 0.0 && param_2 == 0.0) && param_1 == 0.0) {
      return param_8 == '\x01' && ((param_7 == 0.0 && param_6 == 0.0) && param_5 == 0.0);
    }
    if ((param_1 == 4.94065645841247e-324) && (param_3 == 0.0 && param_2 == 0.0)) {
      if ((((param_8 == '\x01') && ((param_7 != 0.0 || param_6 != 0.0) || param_5 != 0.0)) &&
          (param_5 == 4.94065645841247e-324)) && (param_7 == 0.0 && param_6 == 0.0)) {
        return true;
      }
    }
    else if ((param_1 == 9.88131291682493e-324) && (param_3 == 0.0 && param_2 == 0.0)) {
      if (((param_8 == '\x01') && ((param_7 != 0.0 || param_6 != 0.0) || param_5 != 0.0)) &&
         ((param_5 != 4.94065645841247e-324 || (param_7 != 0.0 || param_6 != 0.0)))) {
        return param_5 == 9.88131291682493e-324 && (param_7 == 0.0 && param_6 == 0.0);
      }
    }
    else if (((param_8 == '\x01') && ((param_7 != 0.0 || param_6 != 0.0) || param_5 != 0.0)) &&
            ((param_5 != 4.94065645841247e-324 || (param_7 != 0.0 || param_6 != 0.0)))) {
      return param_5 != 9.88131291682493e-324 || (param_7 != 0.0 || param_6 != 0.0);
    }
  }
  else {
    if (param_8 == '\x01') {
      return false;
    }
    bVar1 = false;
    if ((param_1 == param_5) && (bVar1 = false, !NAN(param_2) && !NAN(param_6))) {
      bVar1 = param_2 == param_6;
    }
    if (bVar1) {
      return param_3 == param_7;
    }
  }
  return false;
}



/* Entry: 104413644; end: 104413833;  */

undefined8 FUN_104413644(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  dStack_48 = param_1[2];
  dStack_50 = param_1[1];
  dStack_38 = param_1[4];
  dStack_40 = param_1[3];
  dStack_28 = param_1[6];
  dStack_30 = param_1[5];
  dStack_78 = param_2[2];
  dStack_80 = param_2[1];
  dStack_68 = param_2[4];
  dStack_70 = param_2[3];
  dStack_58 = param_2[6];
  dStack_60 = param_2[5];
  pdVar6 = &dStack_50;
  __sSo17CGAffineTransformV12CoreGraphicsE2eeoiySbAB_ABtFZ(pdVar6,&dStack_80);
  if ((((ulong)pdVar6 & 1) != 0) && (param_1[7] == param_2[7])) {
    dStack_a8 = param_1[9];
    dStack_b0 = param_1[8];
    dStack_98 = param_1[0xb];
    dStack_a0 = param_1[10];
    dStack_88 = param_1[0xd];
    dStack_90 = param_1[0xc];
    dStack_d8 = param_2[9];
    dStack_e0 = param_2[8];
    dStack_c8 = param_2[0xb];
    dStack_d0 = param_2[10];
    dStack_b8 = param_2[0xd];
    dStack_c0 = param_2[0xc];
    pdVar6 = &dStack_b0;
    __sSo17CGAffineTransformV12CoreGraphicsE2eeoiySbAB_ABtFZ(pdVar6,&dStack_e0);
    if ((((ulong)pdVar6 & 1) != 0) &&
       ((param_1[0xe] == param_2[0xe] && (param_1[0xf] == param_2[0xf])))) {
      dVar1 = param_1[0x10];
      dVar3 = param_1[0x11];
      dVar8 = param_1[0x12];
      dVar2 = param_2[0x10];
      dVar4 = param_2[0x11];
      dVar7 = param_2[0x12];
      cVar5 = *(char *)(param_2 + 0x13);
      if (*(char *)(param_1 + 0x13) == '\x01') {
        if ((dVar8 == 0.0 && dVar3 == 0.0) && dVar1 == 0.0) {
          if (cVar5 != '\x01') {
            return 0;
          }
          if ((dVar7 != 0.0 || dVar4 != 0.0) || dVar2 != 0.0) {
            return 0;
          }
          return 1;
        }
        if ((dVar1 == 4.94065645841247e-324) && (dVar8 == 0.0 && dVar3 == 0.0)) {
          if (cVar5 != '\x01') {
            return 0;
          }
          if ((dVar7 == 0.0 && dVar4 == 0.0) && dVar2 == 0.0) {
            return 0;
          }
          if (dVar2 != 4.94065645841247e-324) {
            return 0;
          }
        }
        else {
          if ((dVar1 != 9.88131291682493e-324) || (dVar8 != 0.0 || dVar3 != 0.0)) {
            if (cVar5 != '\x01') {
              return 0;
            }
            if ((dVar7 == 0.0 && dVar4 == 0.0) && dVar2 == 0.0) {
              return 0;
            }
            if (1 < (long)dVar2 - 1U) {
              return 1;
            }
            if (dVar7 == 0.0 && dVar4 == 0.0) {
              return 0;
            }
            return 1;
          }
          if (cVar5 != '\x01') {
            return 0;
          }
          if ((dVar7 == 0.0 && dVar4 == 0.0) && dVar2 == 0.0) {
            return 0;
          }
          if ((dVar2 == 4.94065645841247e-324) && (dVar7 == 0.0 && dVar4 == 0.0)) {
            return 0;
          }
          if (dVar2 != 9.88131291682493e-324) {
            return 0;
          }
        }
        if (dVar7 != 0.0 || dVar4 != 0.0) {
          return 0;
        }
      }
      else {
        if (cVar5 == '\x01') {
          return 0;
        }
        if (dVar1 != dVar2) {
          return 0;
        }
        if (dVar3 != dVar4) {
          return 0;
        }
        if (dVar8 != dVar7) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 104413834; end: 104413e3f;  */

uint FUN_104413834(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  undefined1 uStack_3c8;
  undefined7 uStack_3c7;
  undefined1 uStack_328;
  undefined7 uStack_327;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined8 uStack_26f;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uStack_1d8 = param_1[0x11];
  uStack_1e0 = param_1[0x10];
  uStack_1d0 = param_1[0x12];
  uStack_1c8 = (undefined1)param_1[0x13];
  uStack_1bf = *(undefined8 *)((long)param_1 + 0xa1);
  uStack_1c7 = (undefined7)*(undefined8 *)((long)param_1 + 0x99);
  uStack_1c0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x99) >> 0x38);
  uStack_218 = param_1[9];
  uStack_220 = param_1[8];
  uStack_208 = param_1[0xb];
  uStack_210 = param_1[10];
  uStack_1f8 = param_1[0xd];
  uStack_200 = param_1[0xc];
  uStack_1e8 = param_1[0xf];
  uStack_1f0 = param_1[0xe];
  uStack_258 = param_1[1];
  uStack_260 = *param_1;
  uStack_248 = param_1[3];
  uStack_250 = param_1[2];
  uStack_238 = param_1[5];
  uStack_240 = param_1[4];
  uStack_228 = param_1[7];
  uStack_230 = param_1[6];
  iVar3 = (int)&uStack_260;
  func_0x000103238538();
  if (iVar3 < 3) {
    if (iVar3 == 0) {
      puVar5 = &uStack_260;
      func_0x000100db82f0();
      uVar8 = *puVar5;
      uStack_308 = param_2[1];
      uStack_310 = *param_2;
      uStack_2f8 = param_2[3];
      uStack_300 = param_2[2];
      uStack_2c8 = param_2[9];
      uStack_2d0 = param_2[8];
      uStack_2b8 = param_2[0xb];
      uStack_2c0 = param_2[10];
      uStack_2e8 = param_2[5];
      uStack_2f0 = param_2[4];
      uStack_2d8 = param_2[7];
      uStack_2e0 = param_2[6];
      uStack_26f = *(undefined8 *)((long)param_2 + 0xa1);
      uStack_270 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
      uStack_288 = param_2[0x11];
      uStack_290 = param_2[0x10];
      uStack_280 = param_2[0x12];
      uStack_278 = (undefined1)param_2[0x13];
      uStack_277 = (undefined7)(param_2[0x13] >> 8);
      uStack_2a8 = param_2[0xd];
      uStack_2b0 = param_2[0xc];
      uStack_298 = param_2[0xf];
      uStack_2a0 = param_2[0xe];
      iVar3 = (int)&uStack_310;
      func_0x000103238538();
      if (iVar3 == 0) {
        puVar5 = &uStack_310;
        func_0x000100db82f0();
        uVar7 = *puVar5;
        uVar6 = 0;
        FUN_1044149a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar8,uVar7,uVar6);
        uVar4 = (uint)uVar8;
        goto LAB_104413e1c;
      }
    }
    else if (iVar3 == 1) {
      puVar5 = &uStack_260;
      func_0x000100db82f0();
      uVar8 = *puVar5;
      uVar7 = puVar5[1];
      uStack_288 = param_2[0x11];
      uStack_290 = param_2[0x10];
      uStack_280 = param_2[0x12];
      uStack_278 = (undefined1)param_2[0x13];
      uStack_26f = *(undefined8 *)((long)param_2 + 0xa1);
      uStack_277 = (undefined7)*(undefined8 *)((long)param_2 + 0x99);
      uStack_270 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
      uStack_2c8 = param_2[9];
      uStack_2d0 = param_2[8];
      uStack_2b8 = param_2[0xb];
      uStack_2c0 = param_2[10];
      uStack_2a8 = param_2[0xd];
      uStack_2b0 = param_2[0xc];
      uStack_298 = param_2[0xf];
      uStack_2a0 = param_2[0xe];
      uStack_308 = param_2[1];
      uStack_310 = *param_2;
      uStack_2f8 = param_2[3];
      uStack_300 = param_2[2];
      uStack_2e8 = param_2[5];
      uStack_2f0 = param_2[4];
      uStack_2d8 = param_2[7];
      uStack_2e0 = param_2[6];
      iVar3 = (int)&uStack_310;
      func_0x000103238538();
      if (iVar3 == 1) {
        puVar5 = &uStack_310;
        func_0x000100db82f0();
        uVar9 = *puVar5;
        uVar10 = puVar5[1];
        FUN_1044149a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar8,uVar9);
        if ((uVar8 & 1) != 0) {
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar7,uVar10);
          uVar4 = (uint)uVar7;
          goto LAB_104413e1c;
        }
      }
    }
    else {
      puVar5 = &uStack_260;
      func_0x000100db82f0();
      uVar8 = *puVar5;
      uStack_308 = param_2[1];
      uStack_310 = *param_2;
      uStack_2f8 = param_2[3];
      uStack_300 = param_2[2];
      uStack_2c8 = param_2[9];
      uStack_2d0 = param_2[8];
      uStack_2b8 = param_2[0xb];
      uStack_2c0 = param_2[10];
      uStack_2e8 = param_2[5];
      uStack_2f0 = param_2[4];
      uStack_2d8 = param_2[7];
      uStack_2e0 = param_2[6];
      uStack_26f = *(undefined8 *)((long)param_2 + 0xa1);
      uStack_270 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
      uStack_288 = param_2[0x11];
      uStack_290 = param_2[0x10];
      uStack_280 = param_2[0x12];
      uStack_278 = (undefined1)param_2[0x13];
      uStack_277 = (undefined7)(param_2[0x13] >> 8);
      uStack_2a8 = param_2[0xd];
      uStack_2b0 = param_2[0xc];
      uStack_298 = param_2[0xf];
      uStack_2a0 = param_2[0xe];
      iVar3 = (int)&uStack_310;
      func_0x000103238538();
      if (iVar3 == 2) {
        puVar5 = &uStack_310;
        func_0x000100db82f0();
        func_0x00010440da9c(uVar8,*puVar5);
        uVar4 = (uint)uVar8;
        goto LAB_104413e1c;
      }
    }
  }
  else if (iVar3 < 5) {
    if (iVar3 == 3) {
      puVar5 = &uStack_260;
      func_0x000100db82f0();
      uVar8 = *puVar5;
      uVar7 = puVar5[1];
      uVar20 = puVar5[0xf];
      uVar9 = puVar5[0xe];
      uVar38 = puVar5[0x11];
      uVar30 = puVar5[0x10];
      uVar10 = puVar5[0x12];
      uStack_328 = (undefined1)puVar5[0x13];
      uVar21 = *(undefined8 *)((long)puVar5 + 0xa1);
      uVar6 = *(undefined8 *)((long)puVar5 + 0x99);
      uStack_327 = (undefined7)uVar6;
      uVar22 = puVar5[7];
      uVar11 = puVar5[6];
      uVar39 = puVar5[9];
      uVar31 = puVar5[8];
      uVar23 = puVar5[0xb];
      uVar12 = puVar5[10];
      uVar40 = puVar5[0xd];
      uVar32 = puVar5[0xc];
      uVar24 = puVar5[3];
      uVar13 = puVar5[2];
      uVar41 = puVar5[5];
      uVar33 = puVar5[4];
      uStack_2c8 = param_2[9];
      uStack_2d0 = param_2[8];
      uStack_2b8 = param_2[0xb];
      uStack_2c0 = param_2[10];
      uStack_2a8 = param_2[0xd];
      uStack_2b0 = param_2[0xc];
      uStack_298 = param_2[0xf];
      uStack_2a0 = param_2[0xe];
      uStack_288 = param_2[0x11];
      uStack_290 = param_2[0x10];
      uStack_280 = param_2[0x12];
      uStack_278 = (undefined1)param_2[0x13];
      uStack_26f = *(undefined8 *)((long)param_2 + 0xa1);
      uStack_277 = (undefined7)*(undefined8 *)((long)param_2 + 0x99);
      uStack_270 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
      uStack_308 = param_2[1];
      uStack_310 = *param_2;
      uStack_2f8 = param_2[3];
      uStack_300 = param_2[2];
      uStack_2e8 = param_2[5];
      uStack_2f0 = param_2[4];
      uStack_2d8 = param_2[7];
      uStack_2e0 = param_2[6];
      iVar3 = (int)&uStack_310;
      func_0x000103238538();
      if (iVar3 == 3) {
        puVar5 = &uStack_310;
        func_0x000100db82f0();
        uVar1 = *puVar5;
        uVar2 = puVar5[1];
        uVar25 = puVar5[0xf];
        uVar14 = puVar5[0xe];
        uVar42 = puVar5[0x11];
        uVar34 = puVar5[0x10];
        uVar15 = puVar5[0x12];
        uStack_3c8 = (undefined1)puVar5[0x13];
        uVar26 = *(undefined8 *)((long)puVar5 + 0xa1);
        uVar16 = *(undefined8 *)((long)puVar5 + 0x99);
        uStack_3c7 = (undefined7)uVar16;
        uVar27 = puVar5[7];
        uVar17 = puVar5[6];
        uVar43 = puVar5[9];
        uVar35 = puVar5[8];
        uVar28 = puVar5[0xb];
        uVar18 = puVar5[10];
        uVar44 = puVar5[0xd];
        uVar36 = puVar5[0xc];
        uVar29 = puVar5[3];
        uVar19 = puVar5[2];
        uVar45 = puVar5[5];
        uVar37 = puVar5[4];
        FUN_1044149a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar8,uVar1);
        if (((uVar8 & 1) != 0) &&
           (__sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar7,uVar2), (uVar7 & 1) != 0)) {
          uStack_128 = uStack_328;
          uStack_120 = (undefined1)((ulong)uVar6 >> 0x38);
          uStack_88 = uStack_3c8;
          uStack_80 = (undefined1)((ulong)uVar16 >> 0x38);
          puVar5 = &uStack_1b0;
          uStack_1b0 = uVar13;
          uStack_1a8 = uVar24;
          uStack_1a0 = uVar33;
          uStack_198 = uVar41;
          uStack_190 = uVar11;
          uStack_188 = uVar22;
          uStack_180 = uVar31;
          uStack_178 = uVar39;
          uStack_170 = uVar12;
          uStack_168 = uVar23;
          uStack_160 = uVar32;
          uStack_158 = uVar40;
          uStack_150 = uVar9;
          uStack_148 = uVar20;
          uStack_140 = uVar30;
          uStack_138 = uVar38;
          uStack_130 = uVar10;
          uStack_127 = uStack_327;
          uStack_11f = uVar21;
          uStack_110 = uVar19;
          uStack_108 = uVar29;
          uStack_100 = uVar37;
          uStack_f8 = uVar45;
          uStack_f0 = uVar17;
          uStack_e8 = uVar27;
          uStack_e0 = uVar35;
          uStack_d8 = uVar43;
          uStack_d0 = uVar18;
          uStack_c8 = uVar28;
          uStack_c0 = uVar36;
          uStack_b8 = uVar44;
          uStack_b0 = uVar14;
          uStack_a8 = uVar25;
          uStack_a0 = uVar34;
          uStack_98 = uVar42;
          uStack_90 = uVar15;
          uStack_87 = uStack_3c7;
          uStack_7f = uVar26;
          FUN_104413644(puVar5,&uStack_110);
          uVar4 = (uint)puVar5;
          goto LAB_104413e1c;
        }
      }
    }
    else {
      puVar5 = &uStack_260;
      func_0x000100db82f0();
      uVar8 = *puVar5;
      uVar7 = puVar5[1];
      uStack_288 = param_2[0x11];
      uStack_290 = param_2[0x10];
      uStack_280 = param_2[0x12];
      uStack_278 = (undefined1)param_2[0x13];
      uStack_26f = *(undefined8 *)((long)param_2 + 0xa1);
      uStack_277 = (undefined7)*(undefined8 *)((long)param_2 + 0x99);
      uStack_270 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
      uStack_2c8 = param_2[9];
      uStack_2d0 = param_2[8];
      uStack_2b8 = param_2[0xb];
      uStack_2c0 = param_2[10];
      uStack_2a8 = param_2[0xd];
      uStack_2b0 = param_2[0xc];
      uStack_298 = param_2[0xf];
      uStack_2a0 = param_2[0xe];
      uStack_308 = param_2[1];
      uStack_310 = *param_2;
      uStack_2f8 = param_2[3];
      uStack_300 = param_2[2];
      uStack_2e8 = param_2[5];
      uStack_2f0 = param_2[4];
      uStack_2d8 = param_2[7];
      uStack_2e0 = param_2[6];
      iVar3 = (int)&uStack_310;
      func_0x000103238538();
      if (iVar3 == 4) {
        puVar5 = &uStack_310;
        func_0x000100db82f0();
        uVar9 = *puVar5;
        uVar10 = puVar5[1];
        if (uVar8 == 0) {
          if (uVar9 == 0) {
LAB_104413db4:
            if (uVar7 == 0) {
              if (uVar10 == 0) goto LAB_104413d94;
            }
            else if (uVar10 != 0) {
              FUN_1044149a8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
              _objc_retain(uVar10);
              _objc_retain();
              uVar9 = uVar7;
              __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
              _objc_release(uVar7);
              _objc_release(uVar10);
              goto joined_r0x000104413b80;
            }
          }
        }
        else if (uVar9 != 0) {
          FUN_1044149a8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
          _objc_retain(uVar9);
          _objc_retain();
          uVar11 = uVar8;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          _objc_release(uVar8);
          _objc_release(uVar9);
          if ((uVar11 & 1) != 0) goto LAB_104413db4;
        }
      }
    }
  }
  else if (iVar3 == 5) {
    puVar5 = &uStack_260;
    func_0x000100db82f0();
    uVar8 = *puVar5;
    uVar10 = puVar5[1];
    uVar7 = puVar5[2];
    uVar11 = puVar5[3];
    uVar9 = puVar5[4];
    uVar12 = puVar5[5];
    uStack_288 = param_2[0x11];
    uStack_290 = param_2[0x10];
    uStack_280 = param_2[0x12];
    uStack_278 = (undefined1)param_2[0x13];
    uStack_26f = *(undefined8 *)((long)param_2 + 0xa1);
    uStack_277 = (undefined7)*(undefined8 *)((long)param_2 + 0x99);
    uStack_270 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
    uStack_2c8 = param_2[9];
    uStack_2d0 = param_2[8];
    uStack_2b8 = param_2[0xb];
    uStack_2c0 = param_2[10];
    uStack_2a8 = param_2[0xd];
    uStack_2b0 = param_2[0xc];
    uStack_298 = param_2[0xf];
    uStack_2a0 = param_2[0xe];
    uStack_2e8 = param_2[5];
    uStack_2f0 = param_2[4];
    uStack_2d8 = param_2[7];
    uStack_2e0 = param_2[6];
    uStack_308 = param_2[1];
    uStack_310 = *param_2;
    uStack_2f8 = param_2[3];
    uStack_300 = param_2[2];
    iVar3 = (int)&uStack_310;
    func_0x000103238538();
    if (iVar3 == 5) {
      puVar5 = &uStack_310;
      func_0x000100db82f0();
      uVar13 = puVar5[2];
      uVar22 = puVar5[3];
      uVar20 = puVar5[4];
      uVar23 = puVar5[5];
      if ((((uVar8 == *puVar5) && (uVar10 == puVar5[1])) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar8,uVar10,*puVar5,puVar5[1],0), (uVar8 & 1) != 0)) &&
         (func_0x000100e25fcc(uVar7,uVar11,uVar13,uVar22), (uVar7 & 1) != 0)) {
        func_0x000100e25fcc(uVar9,uVar12,uVar20,uVar23);
joined_r0x000104413b80:
        if ((uVar9 & 1) != 0) goto LAB_104413d94;
      }
    }
  }
  else {
    puVar5 = &uStack_260;
    func_0x000100db82f0();
    uVar8 = *puVar5;
    uVar7 = puVar5[1];
    uStack_288 = param_2[0x11];
    uStack_290 = param_2[0x10];
    uStack_280 = param_2[0x12];
    uStack_278 = (undefined1)param_2[0x13];
    uStack_26f = *(undefined8 *)((long)param_2 + 0xa1);
    uStack_277 = (undefined7)*(undefined8 *)((long)param_2 + 0x99);
    uStack_270 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
    uStack_2c8 = param_2[9];
    uStack_2d0 = param_2[8];
    uStack_2b8 = param_2[0xb];
    uStack_2c0 = param_2[10];
    uStack_2a8 = param_2[0xd];
    uStack_2b0 = param_2[0xc];
    uStack_298 = param_2[0xf];
    uStack_2a0 = param_2[0xe];
    uStack_308 = param_2[1];
    uStack_310 = *param_2;
    uStack_2f8 = param_2[3];
    uStack_300 = param_2[2];
    uStack_2e8 = param_2[5];
    uStack_2f0 = param_2[4];
    uStack_2d8 = param_2[7];
    uStack_2e0 = param_2[6];
    iVar3 = (int)&uStack_310;
    func_0x000103238538();
    if (iVar3 == 6) {
      puVar5 = &uStack_310;
      func_0x000100db82f0();
      if ((uVar8 != *puVar5) || (uVar7 != puVar5[1])) {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar8,uVar7,*puVar5,puVar5[1],0);
        uVar4 = (uint)uVar8;
        goto LAB_104413e1c;
      }
LAB_104413d94:
      uVar4 = 1;
      goto LAB_104413e1c;
    }
  }
  uVar4 = 0;
LAB_104413e1c:
  return uVar4 & 1;
}



/* Entry: 104413e40; end: 104413e43;  */

void FUN_104413e40(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa26c;
  _swift_getWitnessTable(&UNK_10dcfa26c,&UNK_11076a230);
  puRam0000000113077b00 = puVar1;
  return;
}



/* Entry: 104413e44; end: 104413e83;  */

void FUN_104413e44(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa26c;
  _swift_getWitnessTable(&UNK_10dcfa26c,&UNK_11076a230);
  puRam0000000113077b00 = puVar1;
  return;
}



/* Entry: 104413e84; end: 104413e87;  */

void FUN_104413e84(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa2d4;
  _swift_getWitnessTable(&UNK_10dcfa2d4,&UNK_11076a1b8);
  puRam0000000113077b08 = puVar1;
  return;
}



/* Entry: 104413e88; end: 104413ec7;  */

void FUN_104413e88(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa2d4;
  _swift_getWitnessTable(&UNK_10dcfa2d4,&UNK_11076a1b8);
  puRam0000000113077b08 = puVar1;
  return;
}



/* Entry: 104413ec8; end: 104413ecb;  */

void FUN_104413ec8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa33c;
  _swift_getWitnessTable(&UNK_10dcfa33c,&UNK_11076a2b8);
  puRam0000000113077b10 = puVar1;
  return;
}



/* Entry: 104413ecc; end: 104413f0b;  */

void FUN_104413ecc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa33c;
  _swift_getWitnessTable(&UNK_10dcfa33c,&UNK_11076a2b8);
  puRam0000000113077b10 = puVar1;
  return;
}



/* Entry: 104413f0c; end: 104413f0f;  */

void FUN_104413f0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa3a4;
  _swift_getWitnessTable(&UNK_10dcfa3a4,&UNK_11076a3c8);
  puRam0000000113077b18 = puVar1;
  return;
}



/* Entry: 104413f10; end: 104413f4f;  */

void FUN_104413f10(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa3a4;
  _swift_getWitnessTable(&UNK_10dcfa3a4,&UNK_11076a3c8);
  puRam0000000113077b18 = puVar1;
  return;
}



/* Entry: 104413f50; end: 104413f53;  */

void FUN_104413f50(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa40c;
  _swift_getWitnessTable(&UNK_10dcfa40c,&UNK_11076a460);
  puRam0000000113077b20 = puVar1;
  return;
}



/* Entry: 104413f54; end: 104413f93;  */

void FUN_104413f54(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa40c;
  _swift_getWitnessTable(&UNK_10dcfa40c,&UNK_11076a460);
  puRam0000000113077b20 = puVar1;
  return;
}



/* Entry: 104413f94; end: 104413f97;  */

void FUN_104413f94(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa474;
  _swift_getWitnessTable(&UNK_10dcfa474,&UNK_11076a338);
  puRam0000000113077b28 = puVar1;
  return;
}



/* Entry: 104413f98; end: 10441402f;  */

void FUN_104413f98(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa474;
  _swift_getWitnessTable(&UNK_10dcfa474,&UNK_11076a338);
  puRam0000000113077b28 = puVar1;
  return;
}



/* Entry: 104414030; end: 1044142bb;  */

undefined8 * FUN_104414030(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  undefined8 uVar22;
  
  uVar1 = *param_2;
  uVar11 = param_2[1];
  uVar2 = param_2[2];
  uVar12 = param_2[3];
  uVar3 = param_2[4];
  uVar13 = param_2[5];
  uVar4 = param_2[6];
  uVar14 = param_2[7];
  uVar5 = param_2[8];
  uVar15 = param_2[9];
  uVar6 = param_2[10];
  uVar16 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar17 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar18 = param_2[0xf];
  uVar9 = param_2[0x10];
  uVar19 = param_2[0x11];
  uVar10 = param_2[0x12];
  uVar20 = param_2[0x13];
  uVar22 = param_2[0x14];
  uVar21 = *(undefined1 *)(param_2 + 0x15);
  FUN_10440f640(uVar1,uVar11,uVar2,uVar12,uVar3,uVar13,uVar4,uVar14,uVar5,uVar15,uVar6,uVar16,uVar7,
                uVar17,uVar8,uVar18,uVar9,uVar19,uVar10,uVar20,uVar22,uVar21);
  *param_1 = uVar1;
  param_1[1] = uVar11;
  param_1[2] = uVar2;
  param_1[3] = uVar12;
  param_1[4] = uVar3;
  param_1[5] = uVar13;
  param_1[6] = uVar4;
  param_1[7] = uVar14;
  param_1[8] = uVar5;
  param_1[9] = uVar15;
  param_1[10] = uVar6;
  param_1[0xb] = uVar16;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar17;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar18;
  param_1[0x10] = uVar9;
  param_1[0x11] = uVar19;
  param_1[0x12] = uVar10;
  param_1[0x13] = uVar20;
  param_1[0x14] = uVar22;
  *(undefined1 *)(param_1 + 0x15) = uVar21;
  return param_1;
}



/* Entry: 1044142bc; end: 10441435f;  */

undefined8 * FUN_1044142bc(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  uVar11 = param_2[0x14];
  uVar7 = *(undefined1 *)(param_2 + 0x15);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar10 = param_1[7];
  uVar14 = param_1[9];
  uVar13 = param_1[8];
  uVar16 = param_1[0xb];
  uVar15 = param_1[10];
  uVar18 = param_1[0xd];
  uVar17 = param_1[0xc];
  uVar20 = param_1[0xf];
  uVar19 = param_1[0xe];
  uVar22 = param_1[0x11];
  uVar21 = param_1[0x10];
  uVar24 = param_1[0x13];
  uVar23 = param_1[0x12];
  uVar12 = param_1[0x14];
  uVar8 = *(undefined1 *)(param_1 + 0x15);
  uVar25 = *param_2;
  uVar27 = param_2[3];
  uVar26 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar25;
  param_1[3] = uVar27;
  param_1[2] = uVar26;
  uVar25 = param_2[4];
  uVar27 = param_2[7];
  uVar26 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar25;
  param_1[7] = uVar27;
  param_1[6] = uVar26;
  uVar25 = param_2[8];
  uVar27 = param_2[0xb];
  uVar26 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar25;
  param_1[0xb] = uVar27;
  param_1[10] = uVar26;
  uVar25 = param_2[0xc];
  uVar27 = param_2[0xf];
  uVar26 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar25;
  param_1[0xf] = uVar27;
  param_1[0xe] = uVar26;
  uVar25 = param_2[0x10];
  uVar27 = param_2[0x13];
  uVar26 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar25;
  param_1[0x13] = uVar27;
  param_1[0x12] = uVar26;
  param_1[0x14] = uVar11;
  *(undefined1 *)(param_1 + 0x15) = uVar7;
  func_0x00010440f848(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10,uVar13,uVar14,uVar15,uVar16,
                      uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar12,uVar8);
  return param_1;
}



/* Entry: 104414360; end: 10441448b;  */

int FUN_104414360(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x79 < param_2) && (*(char *)((long)param_1 + 0xa9) != '\0')) {
    return *param_1 + 0x7a;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 0x2a) >> 5) | (*(byte *)(param_1 + 0x2a) >> 1 & 0xf) << 3) ^
          0x7f;
  if (0x78 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10441448c; end: 1044144bb;  */

/* WARNING: Possible PIC construction at 0x0001044144a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001044144ac) */

void FUN_10441448c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1044144bc; end: 10441459f;  */

undefined8 * FUN_1044144bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 1044145a0; end: 1044145f3;  */

undefined8 * FUN_1044145a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1044145f4; end: 104414697;  */

int FUN_1044145f4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104414698; end: 1044146bf;  */

void FUN_104414698(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 1044146c0; end: 10441471b;  */

undefined8 * FUN_1044146c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10441471c; end: 104414757;  */

undefined8 * FUN_10441471c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104414758; end: 1044149a7;  */

int FUN_104414758(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044149a8; end: 1044149e7;  */

void FUN_1044149a8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 1044149e8; end: 104414a03;  */

undefined8 * FUN_1044149e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 104414a04; end: 104414a47;  */

long FUN_104414a04(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 104414a48; end: 104414ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104414a48(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  _objc_allocWithZone();
  FUN_104414a04(param_1,unaff_x20 + _DAT_113077b30);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 104414ab8; end: 104414b17; -[SCContextActionItemPlugIn init] */

void FUN_104414ab8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContextActionItemPlugInScope.ActionItemPlugInContainer",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104414ae4);
  (*pcVar1)();
}



/* Entry: 104414b18; end: 104414b27; -[SCContextActionItemPlugIn .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104414b18(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_113077b30))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113077b30));
  return;
}



/* Entry: 104414b28; end: 104414c93;  */

code * FUN_104414b28(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  (**(code **)(param_3 + 0x10))();
  if (param_1 == 0) {
    pcVar4 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_2;
    *(long *)(puVar1 + 0x18) = param_3;
    uVar2 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(param_3 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar3 = 0;
    __sSaMa(0,uVar2);
    pcVar4 = FUN_104414c94;
    func_0x0001000bfde0(FUN_104414c94,puVar1,uVar3);
    _swift_release(param_1);
    _swift_release(puVar1);
  }
  return pcVar4;
}



/* Entry: 104414c94; end: 104414c9b;  */

void FUN_104414c94(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  long lStack_48;
  long lStack_38;
  
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x10);
  lStack_48 = *(long *)(unaff_x20 + 0x18);
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lStack_48 + 8),uStack_50,&UNK_10e804a1c,&UNK_10e804a4c);
  uVar2 = 0;
  __sSqMa(0,uVar1);
  uVar3 = 0;
  __sSaMa(0,uVar1);
  func_0x000103238ba4(&lStack_38,FUN_104414d8c,auStack_60,uVar2,PTR___ss5NeverON_11034ee88,uVar3,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  if (lStack_38 == 0) {
    __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar1);
  }
  *param_1 = lStack_38;
  return;
}



/* Entry: 104414c9c; end: 104414cbb;  */

void FUN_104414c9c(void)

{
  _objc_opt_self(&PTR_PTR_1129b04b8);
  return;
}



/* Entry: 104414cbc; end: 104414d8b;  */

void FUN_104414cbc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 8),param_3,&UNK_10e804a1c,&UNK_10e804a4c);
  lVar2 = lVar1;
  FUN_104414da8();
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  _swift_allocObject();
  __sSa13_adoptStorage_5countSayxG_SpyxGts016_ContiguousArrayB0CyxGn_SitFZ();
  (**(code **)(lVar3 + 0x10))(lVar2 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),param_2,lVar1);
  __sSaMa(0,lVar1);
  *param_1 = lVar2;
  return;
}



/* Entry: 104414d8c; end: 104414da7;  */

void FUN_104414d8c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_104414cbc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_2)
  ;
  return;
}



/* Entry: 104414da8; end: 104414e0f;  */

void FUN_104414da8(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (((iVar1 != 0) && (lVar3 = param_2, _swift_isClassType(), (int)lVar3 != 0)) && (param_2 != 0))
  {
    if (puRam0000000112d36e60 == (undefined *)0x0 || ((ulong)puRam0000000112d36e60 & 1) != 0) {
      puVar2 = &UNK_10e828452;
      func_0x000107c61518(&UNK_10e828452,10,0,0);
      puRam0000000112d36e60 = puVar2;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb992c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss23_ContiguousArrayStorageCMa_11034eb38)(0,param_2);
  return;
}



/* Entry: 104414e10; end: 104414e23;  */

bool FUN_104414e10(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104414e24; end: 104414ecf;  */

void FUN_104414e24(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104414ed0; end: 104414f0f;  */

void FUN_104414ed0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfa5d0;
  _swift_getWitnessTable(&UNK_10dcfa5d0,&UNK_11076a560);
  puRam0000000113077b60 = puVar1;
  return;
}



/* Entry: 104414f10; end: 1044150cb;  */

bool FUN_104414f10(byte *param_1,byte *param_2)

{
  return *param_1 < *param_2;
}



/* Entry: 1044150cc; end: 104415113;  */

uint FUN_1044150cc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_104415114(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104415114; end: 10441524b;  */

undefined8 FUN_104415114(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  bVar1 = *param_2;
  if (*param_1 == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*param_1 ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  if (param_1[0x10] == 1) {
    if (param_2[0x10] != 1) {
      return 0;
    }
  }
  else {
    bVar2 = false;
    if ((param_2[0x10] != 1) &&
       (bVar2 = false, !NAN(*(double *)(param_1 + 8)) && !NAN(*(double *)(param_2 + 8)))) {
      bVar2 = *(double *)(param_1 + 8) == *(double *)(param_2 + 8);
    }
    if (!bVar2) {
      return 0;
    }
  }
  lVar4 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar4 == 0) {
    if (lVar3 != 0) {
      return 0;
    }
  }
  else {
    if (lVar3 == 0) {
      return 0;
    }
    uVar5 = *(ulong *)(param_1 + 0x18);
    if (((uVar5 != *(ulong *)(param_2 + 0x18)) || (lVar4 != lVar3)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar5,lVar4,*(ulong *)(param_2 + 0x18),lVar3,0), (uVar5 & 1) == 0)) {
      return 0;
    }
  }
  bVar1 = param_2[0x28];
  if (param_1[0x28] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((param_1[0x28] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 10441524c; end: 104415253;  */

void FUN_10441524c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104415254; end: 10441529f;  */

undefined1 * FUN_104415254(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  param_1[0x28] = param_2[0x28];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1044152a0; end: 10441530b;  */

undefined1 * FUN_1044152a0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x28] = param_2[0x28];
  return param_1;
}



/* Entry: 10441530c; end: 10441535f;  */

undefined1 * FUN_10441530c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x28] = param_2[0x28];
  return param_1;
}


